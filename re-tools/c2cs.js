'use strict';
// c2cs.js - generate one C# file per Assembly-CSharp type from the Ghidra structured C.
//
// Input : RippedProject/bermudos/Assets/Scripts/Assembly-CSharp/<Type>.c  (Ghidra 12.1.4 +
//         ghidra-wasm-plugin output, one file per type, functions named <Type>__<Method>)
//         Dump/dump.cs            (IL2CPP metadata: type/field/property/member surface)
// Output: RippedProject/bermudos/Assets/Scripts/Assembly-CSharp/<Type>.cs
//
// The C# *surface* (type kind, bases, fields with their 0xNN offsets, properties, member
// signatures) is taken from the metadata; the *bodies* are a mechanical C# rendering of the
// recovered structured C:
//
//   * `param_1` of an instance method          -> `this`
//   * `*(T *)(this + 0xNN)`                    -> `this.<field at 0xNN>`   (from dump.cs)
//   * `A__B(`                                  -> `A.B(`                    (wasm name mangling)
//   * `undefined1/2/4/8`, `ulonglong`, `char`  -> `byte/ushort/uint/ulong/ulong/byte`
//   * `T x [N];`                               -> `T[] x = new T[N];`
//   * `unnamed_function_N`, `iRam...`          -> kept verbatim (unnamed wasm callee / IL2CPP global)
//   * pointer arithmetic, `CONCAT44`, `goto code_r0x...`, `halt_trap()` -> kept verbatim
//
// It is deliberately a transliteration, not a reconstruction of the original C#: the tree
// parses, it is not expected to compile (same contract as the rest of the reconstruction).
//
// Usage: node c2cs.js [--dir <asm-c dir>] [--dump <dump.cs>] [--only A,B] [--dry]

const fs = require('fs');
const path = require('path');

const REPO = path.resolve(__dirname, '..');
const argv = process.argv.slice(2);
const arg = (name, dflt) => {
	const i = argv.indexOf('--' + name);
	return i === -1 ? dflt : argv[i + 1];
};
const C_DIR = path.resolve(arg('dir', path.join(REPO, 'RippedProject', 'bermudos', 'Assets', 'Scripts', 'Assembly-CSharp')));
const DUMP = path.resolve(arg('dump', path.join(REPO, 'Dump', 'dump.cs')));
const ONLY = arg('only', '') ? new Set(arg('only', '').split(',').map((s) => s.trim())) : null;
const DRY = argv.includes('--dry');

// Assembly-CSharp image range in dump.cs (// Image 7: Assembly-CSharp.dll - 5534 ... 6341).
const AS_LO = 5534;
const AS_HI = 6341;

// ---------------------------------------------------------------------------
// 1. dump.cs -> type table
// ---------------------------------------------------------------------------

const CS_KEYWORDS = new Set(('abstract as base bool break byte case catch char checked class const continue decimal default delegate do ' +
	'double else enum event explicit extern false finally fixed float for foreach goto if implicit in int interface internal is lock long ' +
	'namespace new null object operator out override params private protected public readonly ref return sbyte sealed short sizeof ' +
	'stackalloc static string struct switch this throw true try typeof uint ulong unchecked unsafe ushort using virtual void volatile while')
	.split(' '));

const C_TYPES = {
	undefined: 'byte', undefined1: 'byte', undefined2: 'ushort', undefined3: 'byte',
	undefined4: 'uint', undefined5: 'uint', undefined6: 'uint', undefined7: 'uint', undefined8: 'ulong',
	ulonglong: 'ulong', longlong: 'long', char: 'byte',
};

const TYPE_RE = /\b(undefined\d*|ulonglong|longlong|char)\b/g;
const translateTypes = (s) => s.replace(TYPE_RE, (m) => C_TYPES[m] || m);

// `<asset>k__BackingField` -> `_asset_k__BackingField`; `AnimateEnemy.<X>d__10` -> `AnimateEnemy__X_d__10`
function sanitizeName(s) {
	let out = s.replace(/[<>]/g, '_').replace(/[+]/g, '_').replace(/[(),]/g, '_').replace(/\./g, '_')
		.replace(/`/g, '_').replace(/\$/g, '_');
	if (/^[0-9]/.test(out)) out = '_' + out;
	return out;
}
// compare type names ignoring generic arity: `Foo<T>` / `Foo`1` -> `Foo`
function normTypeName(s) {
	return sanitizeName(s.replace(/`\d+/g, '').replace(/<[^<>]*>/g, ''));
}
function csIdent(s) {
	const c = sanitizeName(s);
	return CS_KEYWORDS.has(c) ? '@' + c : c;
}
// Fix up compiler-generated names in a declaration/attribute: `<` that does not directly follow an
// identifier character starts one (`<asset>k__BackingField`, `AnimateEnemy.<X>d__10`, `typeof(<M>)`),
// while `<` after an identifier is a generic type argument (`List<int>`) and is left alone.
function sanitizeCode(text) {
	return text.replace(/([^A-Za-z0-9_])(<[^<>]*>\w*)/g, (m, lead, name) => lead + sanitizeName(name));
}

function parseParams(sig) {
	const open = sig.indexOf('(');
	const close = sig.lastIndexOf(')');
	if (open === -1 || close === -1 || close < open) return [];
	const inner = sig.slice(open + 1, close).trim();
	if (!inner) return [];
	const parts = [];
	let depth = 0, cur = '';
	for (const ch of inner) {
		if (ch === '(' || ch === '[' || ch === '<') depth++;
		else if (ch === ')' || ch === ']' || ch === '>') depth--;
		if (ch === ',' && depth === 0) { parts.push(cur); cur = ''; continue; }
		cur += ch;
	}
	if (cur.trim()) parts.push(cur);
	return parts.map((p) => {
		const t = p.trim().replace(/\s+/g, ' ');
		const m = /^(.*[\s*])([A-Za-z_]\w*)$/.exec(t);
		return m ? { type: m[1].trim(), name: m[2] } : { type: t, name: '' };
	});
}

function makeMethod(t, sig, isAbstract) {
	const beforeParen = sig.slice(0, sig.indexOf('(')).trim();
	const name = beforeParen.split(/\s+/).pop();
	return {
		raw: sig, name, abstract: isAbstract, owner: t,
		isStatic: /(^|\s)static(\s|$)/.test(beforeParen),
		params: parseParams(sig),
		ret: beforeParen.replace(/\s+[^\s]+$/, '').trim(),
	};
}

const dumpTypes = new Map();     // `Name` or `Outer.<Nested>` -> info
{
	const lines = fs.readFileSync(DUMP, 'utf8').split(/\r?\n/);
	const declRe = /^(\s*)((?:public|internal|private|protected)[\w\s]*?\b(class|struct|interface|enum)\s+([\w.<>]+)(?=[\s:<])[^{]*?)\s*\/\/ TypeDefIndex:\s*(\d+)\s*$/;
	for (let i = 0; i < lines.length; i++) {
		const m = declRe.exec(lines[i]);
		if (!m) continue;
		const idx = parseInt(m[5], 10);
		if (idx < AS_LO || idx >= AS_HI) continue;
		const t = {
			name: m[4], kind: m[3], idx,
			header: m[2].trim().replace(/\s*\/\/ TypeDefIndex:.*$/, ''),
			attrs: [], fields: [], properties: [], methods: [],
		};
		for (let j = i - 1; j >= 0 && lines[j].startsWith('['); j--) t.attrs.unshift(sanitizeCode(lines[j]));
		// An empty body (`{}` / `{ }` right after the declaration) has no members and must not
		// swallow the following type's body.
		let k = i + 1;
		while (k < lines.length && !/[{}]/.test(lines[k])) k++;
		if (k >= lines.length) continue;
		const opens = lines[k].indexOf('{'), closes = lines[k].indexOf('}');
		if (opens === -1 || (closes !== -1 && closes > opens)) { i = k; continue; }
		k++;
		let section = null;
		for (; k < lines.length; k++) {
			const L = lines[k];
			if (L === '}') break;
			if (L.trim() === '// Fields') { section = 'fields'; continue; }
			if (L.trim() === '// Properties') { section = 'properties'; continue; }
			if (L.trim() === '// Methods' || L.trim() === '// Events') { section = 'methods'; continue; }
			const trimmed = L.trim();
			if (trimmed.startsWith('//') || trimmed.startsWith('[')) continue;
			if (section === 'fields') {
				if (!L.includes(';')) continue;
				const off = /\/\/ 0x([0-9A-Fa-f]+)\s*$/.exec(L);
				const body = L.replace(/\s*\/\/ 0x[0-9A-Fa-f]+\s*$/, '').trim();
				const fm = /^(.*?)\s+([\w<>]+)\s*;\s*$/.exec(body);
				if (!fm) continue;
				t.fields.push({ decl: body, name: fm[2], offset: off ? parseInt(off[1], 16) : null });
			} else if (section === 'properties') {
				if (!L.includes('{')) continue;
				const pm = /^(.*?)\s+([\w.<>\[\],\s?]+?)\s+([A-Za-z_]\w*)\s*\{\s*(.*?)\s*\}\s*$/.exec(trimmed);
				if (!pm) continue;
				t.properties.push({
					mods: pm[1].trim(), type: pm[2].trim(), name: pm[3],
					hasGet: /get\s*;/.test(pm[4]), hasSet: /set\s*;/.test(pm[4]),
				});
			} else if (section === 'methods') {
				if (L.includes('{ }')) t.methods.push(makeMethod(t, trimmed.replace(/\s*\{\s*\}\s*$/, ''), false));
				else if (/^(?:public|private|protected|internal)\b[^;{]*\([^;{]*\)\s*;\s*$/.test(trimmed)) t.methods.push(makeMethod(t, trimmed.replace(/;\s*$/, ''), true));
			}
		}
		if (!dumpTypes.has(t.name)) dumpTypes.set(t.name, t);
		i = k;
	}
}
// generic types are declared as `Name<T>`; their .c file is just `Name`
const simpleDumpTypes = new Map();
for (const t of dumpTypes.values()) {
	const simple = t.name.replace(/<.*$/, '');
	if (!simpleDumpTypes.has(simple)) simpleDumpTypes.set(simple, t);
}
const lookupType = (name) => dumpTypes.get(name) || simpleDumpTypes.get(name);

// ---------------------------------------------------------------------------
// 2. .c files -> header + function blocks
// ---------------------------------------------------------------------------

const fnHeaderRe = /^\/\/ ---- (.+?)\s+\[wasm func(\d+) -> ram:([0-9A-Fa-f]+) ; ghidra: (.*?)\]\s*$/;

function parseCFile(text) {
	const lines = text.split(/\r?\n/);
	const typeM = /^\/\/ Type:\s*(\S+)\s+\(Assembly-CSharp\)\s*-\s*(\d+) function\(s\)\s*$/m.exec(text);
	const typeName = typeM ? typeM[1] : null;
	const fns = [];
	for (let i = 0; i < lines.length; i++) {
		const hm = fnHeaderRe.exec(lines[i]);
		if (!hm) continue;
		let j = i + 1;
		const sigLines = [];
		while (j < lines.length && lines[j].trim() !== '{') { sigLines.push(lines[j]); j++; }
		if (j >= lines.length) continue;
		const open = j;
		let depth = 0, end = -1;
		for (let k = open; k < lines.length && end === -1; k++) {
			const L = lines[k];
			for (let p = 0; p < L.length; p++) {
				const two = L.slice(p, p + 2);
				if (two === '//') break;
				if (two === '/*') { const e = L.indexOf('*/', p + 2); if (e === -1) break; p = e + 1; continue; }
				const c = L[p];
				if (c === '{') depth++;
				else if (c === '}' && --depth === 0) { end = k; break; }
			}
		}
		if (end === -1) continue;
		const sigRaw = sigLines.join(' ').replace(/\s+/g, ' ').trim();
		const sm = /^([A-Za-z_][\w\s*]*?)\s+([A-Za-z_][\w<>]*)\s*\(([\s\S]*)\)$/.exec(sigRaw);
		fns.push({
			mangled: hm[1], func: hm[2], ram: hm[3], ghidra: hm[4],
			sig: sigRaw,
			ret: sm ? sm[1].trim() : 'void',
			name: sm ? sm[2] : hm[1],
			cparams: sm ? parseParams('(' + sm[3] + ')') : [],
			body: lines.slice(open + 1, end),
			owner: hm[4].includes('::') ? hm[4].slice(0, hm[4].lastIndexOf('::')) : typeName,
			member: hm[4].includes('::') ? hm[4].slice(hm[4].lastIndexOf('::') + 2) : hm[1],
		});
		i = end;
	}
	return { typeName, fns };
}

const cFiles = fs.readdirSync(C_DIR).filter((f) => f.endsWith('.c')).sort();
const parsed = cFiles.map((f) => ({ file: f, ...parseCFile(fs.readFileSync(path.join(C_DIR, f), 'utf8')) }));

// ---------------------------------------------------------------------------
// 3. name mangling: `A__B` -> `A.B`
// ---------------------------------------------------------------------------

// Every function the .c tree defines, keyed by the exact mangled name used at the call sites.
// This is the authoritative table (Cpp2IL's recovered `A+B::M` -> the dotted form printed here).
const callMap = new Map();
for (const p of parsed) {
	for (const fn of p.fns) {
		// fn.name is the exact symbol Ghidra prints at the definition *and* at the call sites
		// (the header's `<Type>::<Method>` spelling is flattened differently for nested types)
		if (!callMap.has(fn.name)) callMap.set(fn.name, dottedFromGhidra(fn.ghidra));
	}
}
function dottedFromGhidra(ghidra) {
	const cut = ghidra.lastIndexOf('::');
	const owner = sanitizeName(cut === -1 ? '' : ghidra.slice(0, cut));
	let member = cut === -1 ? ghidra : ghidra.slice(cut + 2);
	member = member.slice(member.lastIndexOf('.') + 1);
	if (member === '_ctor' || member === '_cctor') member = member.slice(1);
	return owner + '.' + member;
}
// heuristic for callees outside Assembly-CSharp (UnityEngine/System/...)
function dotify(tok) {
	if (!tok.includes('__')) return tok;
	const t = tok.replace(/^multiple_\d+_/, '');
	const parts = t.split('__');
	if (parts.length !== 2) return tok;
	let [head, tail] = parts;
	if (tail === '_ctor' || tail === '_cctor') tail = tail.slice(1);
	// IL2CPP generic arity is mangled as `Foo`1` -> `Foo_1` (single digit; two-digit names like
	// System_Int32 are part of the type name and must not be touched)
	head = head.replace(/_[0-9]$/, '');
	if (!/^[A-Za-z]\w*$/.test(head) || !/^[A-Za-z_]\w*$/.test(tail)) return tok;
	return head.split('_').join('.') + '.' + tail;
}

// ---------------------------------------------------------------------------
// 4. body translation
// ---------------------------------------------------------------------------

// Walk the text and transform identifier tokens only (comments/literals pass through verbatim).
// `<`/`>` are part of the token so compiler-generated names survive as one token.
function transformCode(src, fn) {
	let out = '', i = 0;
	const n = src.length;
	while (i < n) {
		const c = src[i];
		if (c === '/' && src[i + 1] === '/') { const e = src.indexOf('\n', i); const end = e === -1 ? n : e; out += src.slice(i, end); i = end; continue; }
		if (c === '/' && src[i + 1] === '*') { const e = src.indexOf('*/', i + 2); const end = e === -1 ? n : e + 2; out += src.slice(i, end); i = end; continue; }
		if (c === '"' || c === "'") {
			let j = i + 1;
			while (j < n) { if (src[j] === '\\') { j += 2; continue; } if (src[j] === c) { j++; break; } j++; }
			out += src.slice(i, j); i = j; continue;
		}
		if (/[A-Za-z_]/.test(c)) {
			let j = i + 1;
			while (j < n && /[A-Za-z0-9_<>]/.test(src[j])) j++;
			out += fn(src.slice(i, j));
			i = j; continue;
		}
		out += c; i++;
	}
	return out;
}

const DEREF_RE = /\*\s*\(\s*(undefined\d*|ulonglong|longlong|char|byte|sbyte|short|ushort|int|uint|long|ulong|float|double|bool|code)\s*\*\s*\)\s*\(\s*([A-Za-z_]\w*)\s*(?:\+\s*0x([0-9A-Fa-f]+))?\s*\)/g;
// `undefined8 auStack_10 [2];` -> `ulong[] auStack_10 = new ulong[2];`
const ARRAY_DECL_RE = /^([ \t]*)([A-Za-z_][A-Za-z0-9_]*\s*\*?)\s+([A-Za-z_]\w*)\s+\[\s*(\d+)\s*\]\s*;(.*)$/;

function translateBody(bodyLines, ctx) {
	let text = bodyLines.join('\n');
	// 4a. `*(T *)(this + 0xNN)` -> `this.<field>`
	text = text.replace(DEREF_RE, (m, _type, base, off) => {
		if (!ctx.thisNames.has(base)) return m;
		const f = ctx.fields.get(off ? parseInt(off, 16) : 0);
		return f ? 'this.' + f : m;
	});
	// 4b. stack arrays
	text = text.replace(new RegExp(ARRAY_DECL_RE.source, 'gm'), (m, ind, type, name, size, rest) =>
		ind + type.replace(/\s+$/, '') + '[] ' + name + ' = new ' + type.replace(/\s+$/, '') + '[' + size + '];' + rest);
	// 4c. identifiers: recovered names, param mapping, `A__B` -> `A.B`, C types -> C# types
	text = transformCode(text, (tok) => {
		const mapped = callMap.get(tok);
		if (mapped) return mapped;
		if (ctx.paramMap.has(tok)) return ctx.paramMap.get(tok);
		if (C_TYPES[tok]) return C_TYPES[tok];
		return dotify(tok);
	});
	// 4d. Ghidra prints imports as `import::env::f`; `::` is not C# member access
	text = text.replace(/::/g, '.');
	return text;
}

// ---------------------------------------------------------------------------
// 5. emit
// ---------------------------------------------------------------------------

function buildContext(typeInfo, fn, method) {
	const fields = new Map();
	if (typeInfo) for (const f of typeInfo.fields) if (f.offset !== null) fields.set(f.offset, csIdent(f.name));
	const paramMap = new Map();
	const thisNames = new Set();
	const extra = [];
	if (method) {
		const cps = fn.cparams;
		let ci = 0;
		if (!method.isStatic) {
			if (cps[0] && cps[0].name) { paramMap.set(cps[0].name, 'this'); thisNames.add(cps[0].name); }
			ci = 1;
		}
		for (let d = 0; d < method.params.length && ci < cps.length; d++, ci++) {
			if (method.params[d].name && cps[ci].name) paramMap.set(cps[ci].name, csIdent(method.params[d].name));
		}
		for (; ci < cps.length; ci++) {
			if (!cps[ci].name) continue;
			extra.push(translateTypes(cps[ci].type || 'uint') + ' ' + cps[ci].name + ' = 0; // IL2CPP hidden slot');
		}
	}
	return { fields, paramMap, thisNames, extra };
}

function emitBody(fn, ctx, indent) {
	const text = translateBody(fn.body, ctx);
	// Ghidra indents with two spaces; render with the tree's tabs
	const lines = text.split('\n').map((l) => {
		if (l.trim() === '') return '';
		const norm = l.replace(/^( +)/, (m) => '\t'.repeat(m.length >> 1) + ' '.repeat(m.length & 1));
		return (indent + norm).replace(/\s+$/, '');
	});
	const decls = ctx.extra.map((d) => indent + d);
	if (decls.length) lines.unshift(...decls);
	return lines.join('\n').replace(/\s+$/, '');
}

// Body text carries bare LF inside a single `out` element, so normalise the
// whole document to the tree's CRLF convention at write time.
function writeCs(typeName, out) {
	const text = out.join('\n').replace(/\r?\n/g, '\r\n');
	fs.writeFileSync(path.join(C_DIR, typeName + '.cs'), text + '\r\n', 'utf8');
}

function methodSignature(typeName, m) {
	if (m.name === '.ctor') return translateTypes(sanitizeCode(m.raw.replace(/[\w.<>]+\s*\.ctor/, csIdent(typeName))));
	if (m.name === '.cctor') {
		let sig = sanitizeCode(m.raw.replace(/[\w.<>]+\s*\.cctor/, csIdent(typeName)));
		if (!/\bstatic\b/.test(sig)) sig = sig.replace(/^(public|private|protected|internal)\b/, '$1 static');
		return translateTypes(sig);
	}
	return translateTypes(sanitizeCode(m.raw.replace(/\b([A-Za-z_]\w*)\.(ctor|cctor)\b/g, (s, p) => p)));
}

const stats = { written: 0, cFunctions: 0, bodiesFromC: 0, membersWithoutBody: 0, cFunctionsUnmatched: 0, typesWithoutMetadata: [] };

for (const p of parsed) {
	const typeName = p.typeName || path.basename(p.file, '.c');
	if (ONLY && !ONLY.has(typeName)) continue;
	stats.cFunctions += p.fns.length;
	const info = lookupType(typeName);
	if (!info) stats.typesWithoutMetadata.push(typeName);
	const out = [];

	out.push('// ' + typeName + '.cs - reconstructed from the recovered WebAssembly binary.');
	out.push('// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);');
	out.push('// bodies are a mechanical C# rendering of the Ghidra structured C in ' + typeName + '.c, not original C#.');
	out.push('// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;');
	out.push('// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;');
	out.push('// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;');
	out.push('// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.');
	out.push('// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.');
	out.push('');

	const takenFns = new Set();
	// find the .c function that belongs to a metadata member of this type
	const fnFor = (method) => {
		const ownerSimple = normTypeName(method.owner.name);
		for (const fn of p.fns) {
			if (takenFns.has(fn)) continue;
			if (normTypeName(fn.owner) !== ownerSimple) continue;
			const last = fn.member.slice(fn.member.lastIndexOf('.') + 1);
			if (fn.member.replace(/^\./, '') === method.name.replace(/^\./, '')) return fn;
			if (last === method.name) return fn;
		}
		return null;
	};

	out.push(...(info ? info.attrs : []));
	out.push(info ? info.header : 'public class ' + csIdent(typeName) + ' // no Assembly-CSharp metadata entry');
	out.push('{');

	if (info && info.kind === 'enum') {
		for (const fl of info.fields) out.push('\t' + fl.decl.replace(/^public const \S+\s+/, '') + ',');
		out.push('}');
		out.push('');
		if (!DRY) writeCs(typeName, out);
		stats.written++;
		continue;
	}

	// events: the dump lists a [CompilerGenerated] backing field plus add_/remove_ accessors
	const eventOf = new Map();
	const eventOwned = new Set();
	if (info) {
		for (const fl of info.fields) {
			const add = info.methods.find((m) => m.name === 'add_' + fl.name);
			const rem = info.methods.find((m) => m.name === 'remove_' + fl.name);
			if (add && rem) { eventOf.set(fl, { add, rem }); eventOwned.add(add); eventOwned.add(rem); }
		}
	}

	const plainFields = info ? info.fields.filter((fl) => !eventOf.has(fl)) : [];
	if (plainFields.length) {
		out.push('\t// Fields');
		for (const fl of plainFields) {
			out.push('\t' + sanitizeCode(fl.decl) + (fl.offset !== null ? ' // 0x' + fl.offset.toString(16).toUpperCase() : ''));
		}
		out.push('');
	}

	if (eventOf.size) {
		out.push('\t// Events');
		for (const [fl, ev] of eventOf) {
			const evType = sanitizeCode(fl.decl.replace(/\s*;\s*$/, '').replace(/^(?:public|private|protected|internal)\s+/, ''));
			out.push('\tpublic event ' + evType);
			out.push('\t{');
			for (const [acc, method] of [['add', ev.add], ['remove', ev.rem]]) {
				const fn = fnFor(method);
				out.push('\t\t' + acc);
				out.push('\t\t{');
				if (fn) { takenFns.add(fn); stats.bodiesFromC++; out.push(emitBody(fn, buildContext(info, fn, method), '\t\t\t')); }
				else { stats.membersWithoutBody++; out.push('\t\t\t// <no body recovered in ' + typeName + '.c>'); }
				out.push('\t\t}');
			}
			out.push('\t}');
		}
		out.push('');
	}

	// properties: their accessor bodies come from the same .c lookup as methods
	const accessorOwned = new Set();
	if (info && info.properties.length) {
		out.push('\t// Properties');
		for (const prop of info.properties) {
			out.push('\t' + sanitizeCode(prop.mods) + ' ' + sanitizeCode(prop.type) + ' ' + prop.name);
			out.push('\t{');
			for (const acc of ['get', 'set']) {
				if (acc === 'get' ? !prop.hasGet : !prop.hasSet) continue;
				const method = info.methods.find((m) => m.name === acc + '_' + prop.name);
				if (method) accessorOwned.add(method);
				const fn = method ? fnFor(method) : null;
				out.push('\t\t' + acc);
				out.push('\t\t{');
				if (fn) { takenFns.add(fn); stats.bodiesFromC++; out.push(emitBody(fn, buildContext(info, fn, method), '\t\t\t')); }
				else { stats.membersWithoutBody++; out.push('\t\t\t// <no body recovered in ' + typeName + '.c>'); }
				out.push('\t\t}');
			}
			out.push('\t}');
		}
		out.push('');
	}

	if (info) {
		out.push('\t// Methods');
		for (const m of info.methods) {
			if (accessorOwned.has(m) || eventOwned.has(m)) continue;
			const fn = fnFor(m);
			out.push('');
			if (fn) {
				takenFns.add(fn); stats.bodiesFromC++;
				out.push('\t// wasm func' + fn.func + ' -> ram:' + fn.ram + '  [' + fn.ghidra + ']');
			} else {
				stats.membersWithoutBody++;
				out.push('\t// no recovered body in ' + typeName + '.c');
			}
			out.push('\t' + methodSignature(typeName, m));
			out.push('\t{');
			if (fn) out.push(emitBody(fn, buildContext(info, fn, m), '\t\t'));
			else out.push('\t\t// <no recovered body>');
			out.push('\t}');
		}
	}

	// .c functions with no metadata member (lambdas, nested state machines, closures)
	const leftovers = p.fns.filter((fn) => !takenFns.has(fn));
	if (leftovers.length) {
		out.push('');
		out.push('\t// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----');
		for (const fn of leftovers) {
			takenFns.add(fn); stats.cFunctionsUnmatched++;
			out.push('');
			out.push('\t// wasm func' + fn.func + ' -> ram:' + fn.ram + '  [' + fn.ghidra + ']');
			const params = fn.cparams.filter((q) => q.name).map((q) => translateTypes(q.type || 'uint') + ' ' + q.name).join(', ');
			out.push('\t' + translateTypes(fn.ret) + ' ' + csIdent(sanitizeName(fn.owner + '_' + fn.member)) + '(' + params + ')');
			out.push('\t{');
			out.push(emitBody(fn, buildContext(info, fn, null), '\t\t'));
			out.push('\t}');
		}
	}
	out.push('}');
	out.push('');

	if (!DRY) writeCs(typeName, out);
	stats.written++;
}

console.log(JSON.stringify({
	typeFiles: cFiles.length,
	written: stats.written,
	functionsInC: stats.cFunctions,
	bodiesRenderedFromC: stats.bodiesFromC,
	membersWithoutRecoveredBody: stats.membersWithoutBody,
	cFunctionsWithNoMetadataMember: stats.cFunctionsUnmatched,
	dumpTypesInAssemblyRange: dumpTypes.size,
	typesWithoutMetadata: stats.typesWithoutMetadata,
}, null, 2));
