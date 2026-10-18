'use strict';
// Step 5: replace the pseudo-code / placeholder method bodies with the *recovered*
// per-method wasm disassembly from Cpp2IL's ISIL dump.
//
// Source of truth: Decompiled/isil/IsilDump/Assembly-CSharp/**.txt
//   Type: <full type name>            (namespace-qualified; generic arity as `N)
//   Method: <ret> <name>(<params>)    (Cpp2IL signature, includes default values)
//   Disassembly:
//     <0xADDR> <Op> <operands>        (real instruction-level wasm)
//
// Per member: matching ISIL entry -> its disassembly as a comment block; otherwise
// `// <no wasm mapping>`. Nothing is inferred.
//
// Usage: node embed_isil.js <Assembly-CSharp dir> [--dry]

const fs = require('fs');
const path = require('path');

const DIR = process.argv[2];
const DRY = process.argv.includes('--dry');
const ISIL_ROOT = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\isil\\IsilDump\\Assembly-CSharp';

const norm = (s) => String(s).replace(/`\d+/g, '');
// Loose member-name normalisation used to pair a declaration with its ISIL entry: the
// declarations are renamed by the earlier steps (`.ctor`->type name, `<Start>b__5_0`->
// `Start_b__5_0`), so `<>`, `.`, `$`, `_`, generic arity and case are all ignored.
const normName = (s) => String(s).replace(/`\d+/g, '').replace(/[<>$]/g, '').replace(/[._]/g, '').toLowerCase();
const OP_MAP = { 'implicit': 'op_Implicit', 'explicit': 'op_Explicit', '==': 'op_Equality', '!=': 'op_Inequality' };
const TYPE_DECL = /^(?:\[[^\]]*\]\s*)*(?:public|internal|private|protected)\s+(?:sealed\s+|abstract\s+|static\s+|partial\s+|unsafe\s+)*(class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_]*)/;

function splitTop(s, sep) {
	const out = [];
	let depth = 0, cur = '';
	for (const ch of s) {
		if (ch === '<' || ch === '(' || ch === '[') depth++;
		else if (ch === '>' || ch === ')' || ch === ']') depth--;
		if (ch === sep && depth === 0) { out.push(cur); cur = ''; continue; }
		cur += ch;
	}
	out.push(cur);
	return out;
}

function paramTypeSimple(p) {
	let t = p.split('=')[0].trim();
	if (!t) return '';
	t = t.replace(/^(?:ref|out|in|params|this)\s+/, '');
	const toks = t.split(/\s+/);
	if (toks.length > 1) toks.pop(); // drop the parameter name
	t = toks.join(' ').replace(/<.*$/, '').replace(/\[\s*\]/g, '').trim();
	return norm(t.split('.').pop()).toLowerCase();
}

// ---------- ISIL index ----------
const index = new Map(); // normalized full type name -> [{name, arity, params, dis}]
const bySimple = new Map(); // normalized simple name -> [normalized full names]

(function buildIndex() {
	const files = [];
	(function walk(d) {
		for (const e of fs.readdirSync(d, { withFileTypes: true })) {
			const p = path.join(d, e.name);
			if (e.isDirectory()) walk(p);
			else if (e.name.endsWith('.txt')) files.push(p);
		}
	})(ISIL_ROOT);

	for (const f of files) {
		const txt = fs.readFileSync(f, 'utf8');
		const tm = /^Type:\s*(.+)$/m.exec(txt);
		if (!tm) continue;
		const full = tm[1].trim();
		const entries = [];
		let cur = null;
		for (const line of txt.split(/\r?\n/)) {
			const mm = /^Method:\s*(.+)$/.exec(line);
			if (mm) { cur = parseIsilSignature(mm[1], entries); continue; }
			if (!cur) continue;
			const im = /^\s*(0x[0-9a-fA-F]+\s+\S.*)$/.exec(line);
			if (im) cur.dis.push(im[1].trim());
		}
		if (entries.length) index.set(norm(full), entries);
		const simple = norm(full.split('.').pop());
		if (!bySimple.has(simple)) bySimple.set(simple, []);
		bySimple.get(simple).push(norm(full));
	}

	function parseIsilSignature(sig, entries) {
		const open = sig.indexOf('(');
		const close = sig.lastIndexOf(')');
		if (open < 0 || close < open) return null;
		const name = norm(sig.slice(0, open).trim().split(/\s+/).pop());
		const inner = sig.slice(open + 1, close).trim();
		const params = inner ? splitTop(inner, ',').map((p) => p.trim()).filter(Boolean) : [];
		const e = { name, arity: params.length, params: params.map(paramTypeSimple), dis: [] };
		entries.push(e);
		return e;
	}
})();

// ---------- per-file ----------
const stats = {
	files: 0, typesMatched: 0, typesMissing: 0, members: 0,
	withDis: 0, noMapping: 0, emptyDis: 0, instructions: 0, skipped: [], noIsilType: [], props: 0,
};

const HEADER_RE = /^\/\/ Structure \(types\/fields\/method signatures\) is accurate; bodies are decompiled pseudo-code\r?\n\/\/ recovered from the WebAssembly binary, not original C#\.((?:\r?\n)(?:\/\/ NOTE:.*(?:\r?\n)|\/\/       .*(?:\r?\n))*)?/m;

function csharpMemberKey(decl, typeName) {
	const t = decl.trim();
	if (/\boperator\b/.test(t)) {
		const kw = /\b(implicit|explicit)\s+operator\b/.exec(t);
		let sym = kw ? kw[1] : ((/\boperator\s*([^\s(]+)\s*\(/.exec(t) || [])[1] || '');
		if (OP_MAP[sym] === undefined) return null;
		const inner = t.slice(t.indexOf('(') + 1, t.lastIndexOf(')'));
		const params = inner.trim() ? splitTop(inner, ',').map(paramTypeSimple) : [];
		return { name: OP_MAP[sym], arity: params.length, params };
	}
	const open = t.indexOf('(');
	const close = t.lastIndexOf(')');
	if (open < 0 || close < open) return null;
	let name = norm(t.slice(0, open).trim().split(/\s+/).pop()).replace(/^~/, 'Finalize');
	const base = typeName.replace(/<.*$/, '');
	if (name === base) name = /\bstatic\b/.test(t) ? '.cctor' : '.ctor';
	const inner = t.slice(open + 1, close);
	const params = inner.trim() ? splitTop(inner, ',').map(paramTypeSimple) : [];
	return { name, arity: params.length, params };
}

function pick(entries, key) {
	// Compiler-generated members are renamed when the declarations are fixed
	// (`<Start>b__5_0` -> `Start_b__5_0`), so compare names with the same loose
	// normalisation the reconstruction used: drop `<>`, `.`, `$`, `_`, generic arity
	// and case. Ambiguity is never resolved by guessing - only by matching parameter types.
	const cands = entries.filter((e) => normName(e.name) === normName(key.name) && e.arity === key.arity);
	if (cands.length === 1) return cands[0];
	if (cands.length > 1) {
		const typed = cands.filter((e) => e.params.every((p, i) => p === key.params[i]));
		if (typed.length === 1) return typed[0];
	}
	return null;
}

function disLines(entry, indent) {
	const out = [`${indent}// ---- wasm disassembly (Cpp2IL ISIL, from build.named.wasm) ----`];
	for (const d of entry.dis) out.push(`${indent}//   ${d}`);
	return out;
}

function bodyFor(indent, entry) {
	if (entry && entry.dis.length) {
		stats.withDis++;
		stats.instructions += entry.dis.length;
		return disLines(entry, indent);
	}
	if (entry) stats.emptyDis++;
	stats.noMapping++;
	return [`${indent}// <no wasm mapping>`];
}

function processFile(file) {
	const src = fs.readFileSync(file, 'utf8');
	if (!/Reconstructed from IL2CPP metadata/.test(src.slice(0, 700))) return;
	const eol = src.includes('\r\n') ? '\r\n' : '\n';
	const lines = src.split(/\r?\n/);

	const nsLine = /^\/\/ Namespace:[ \t]*(.*)$/m.exec(src);
	const ns = nsLine ? nsLine[1].trim() : '';
	let typeName = null;
	for (const l of lines) {
		const t = TYPE_DECL.exec(l.trim());
		if (t) { typeName = t[2]; break; }
	}
	if (!typeName) return;
	stats.files++;

	const full = norm(ns ? `${ns}.${typeName}` : typeName);
	let entries = index.get(full);
	if (!entries) {
		const alt = bySimple.get(norm(typeName)) || [];
		if (alt.length === 1) entries = index.get(alt[0]);
	}
	if (!entries) { stats.typesMissing++; stats.noIsilType.push(full); return; }
	stats.typesMatched++;

	const isComment = (i) => lines[i].trimStart().startsWith('//');
	const structural = [];
	for (let i = 0; i < lines.length; i++) if (lines[i].trim() && !isComment(i)) structural.push(i);

	function blockAfter(p) {
		if (p + 1 >= structural.length) return -1;
		const cand = structural[p + 1];
		return lines[cand].trim() === '{' ? cand : -1;
	}
	function matchClose(openIdx) {
		let depth = 0;
		for (const i of structural) {
			if (i < openIdx) continue;
			const t = lines[i].trim();
			if (t === '{') depth++;
			else if (t === '}') { depth--; if (depth === 0) return i; }
		}
		return -1;
	}

	const repl = new Map(); // line index -> replacement lines (null => delete)
	const inserts = new Map(); // line index -> lines inserted before that line
	function setBody(open, close, newLines) {
		if (close > open + 1) {
			for (let x = open + 1; x < close; x++) repl.set(x, null);
			repl.set(open + 1, newLines);
		} else {
			// empty body: insert before the closing brace instead of overwriting it
			const arr = inserts.get(close) || [];
			arr.push(...newLines);
			inserts.set(close, arr);
		}
	}

	for (let p = 0; p < structural.length; p++) {
		const i = structural[p];
		const t = lines[i].trim();
		if (t === '{' || t === '}' || t === 'get' || t === 'set' || t === 'add' || t === 'remove') continue;
		if (TYPE_DECL.test(t)) continue;
		if (/^(?:using|namespace)\b/.test(t)) continue;
		if (/^\[/.test(t)) continue;
		if (t.endsWith(';')) continue;

		const isProp = !t.includes('(') &&
			/^[A-Za-z_\[\]][A-Za-z0-9_.,<>\[\]\s]*\s+[A-Za-z_][A-Za-z0-9_]*$/.test(t) &&
			!/\b(?:return|if|else|for|foreach|while|switch|case|break|continue|new|throw|try|catch)\b/.test(t);
		const indent = /^(\s*)/.exec(lines[i])[1];

		if (isProp) {
			const open = blockAfter(p);
			const close = open >= 0 ? matchClose(open) : -1;
			if (open < 0 || close < 0) continue;
			let propName = t.split(/\s+/).pop();
			if (propName === 'this') propName = 'Item'; // indexer
			for (let q = p + 1; q < structural.length; q++) {
				const a = structural[q];
				if (a >= close) break;
				const at = lines[a].trim();
				if (at !== 'get' && at !== 'set') continue;
				const aIdx = structural.indexOf(a);
				const aOpen = blockAfter(aIdx);
				if (aOpen < 0 || aOpen >= close) continue;
				const aClose = matchClose(aOpen);
				if (aClose < 0 || aClose > close) continue;
				const entry = pick(entries, { name: `${at}_${propName}`, arity: at === 'set' ? 1 : 0, params: [] });
				const aIndent = /^(\s*)/.exec(lines[a])[1] + '\t';
				setBody(aOpen, aClose, bodyFor(aIndent, entry));
				stats.members++; stats.props++;
			}
			continue;
		}

		// method / ctor / operator (join a wrapped declaration first)
		let decl = t, qi = p, guard = 0;
		while (guard++ < 12) {
			const o = (decl.match(/\(/g) || []).length;
			const c = (decl.match(/\)/g) || []).length;
			if (o > 0 && o === c) break;
			if (qi + 1 >= structural.length) break;
			qi++;
			decl += ' ' + lines[structural[qi]].trim();
		}
		const open = blockAfter(qi);
		const close = open >= 0 ? matchClose(open) : -1;
		if (open < 0 || close < 0) continue;
		const key = csharpMemberKey(decl, typeName);
		if (!key) { stats.skipped.push(`${path.basename(file)}: ${decl.slice(0, 70)}`); continue; }
		const entry = pick(entries, key);
		const bodyIndent = indent + '\t';
		setBody(open, close, bodyFor(bodyIndent, entry));
		stats.members++;
	}

	if (!repl.size && !inserts.size) return;
	const out = [];
	for (let i = 0; i < lines.length; i++) {
		if (inserts.has(i)) out.push(...inserts.get(i));
		if (repl.has(i)) { const v = repl.get(i); if (v) out.push(...v); continue; }
		out.push(lines[i]);
	}
	let res = out.join(eol).replace(/(?:\r?\n)+$/, '') + eol;
	res = res.replace(HEADER_RE, `// Structure (types/fields/method signatures) is accurate; method bodies hold the${eol}// disassembly recovered from the WebAssembly binary (Cpp2IL ISIL), not original C#.${eol}`);
	if (!DRY && res !== src) fs.writeFileSync(file, res, 'utf8');
}

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (e.name.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(DIR);
for (const f of files) processFile(f);

console.log(JSON.stringify({
	files: stats.files, typesMatched: stats.typesMatched, typesMissing: stats.typesMissing,
	membersProcessed: stats.members, propertyAccessors: stats.props,
	withDisassembly: stats.withDis, noMapping: stats.noMapping, emptyDis: stats.emptyDis,
	instructions: stats.instructions, skipped: stats.skipped.length,
}, null, 2));
if (stats.skipped.length) { console.log('--- skipped members ---'); console.log(stats.skipped.slice(0, 25).join('\n')); }
if (stats.noIsilType.length) { console.log('--- types with no ISIL file ---'); console.log(stats.noIsilType.slice(0, 25).join('\n')); }
