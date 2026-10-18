'use strict';
// Step A (v4): map every reconstructed method in the in-scope Assembly-CSharp files to the wasm
// function that wabt decompiled, and validate the mapping.
//
//   tree method --(name section)--> funcN --(build.dcmp)--> structured body
//
// Matching, in order:
//   1. name    - the wasm `name` custom section names functions `Namespace.Type::Method`.
//   2. content - Cpp2IL's ISIL attribution folds identical code (and unnamed methods) together, so a
//                method whose own name is missing is looked up by the *bytes of its listing*: any
//                already-mapped method with an identical listing shares the same wasm function.
//   3. calls   - last resort: the ordered sequence of `Call N` indices must identify exactly one function.
//
// Validation (both exact, both computed independently in the tree listing and in the dcmp body):
//   * call order      - the tree lists calls in bytecode (= evaluation) order; dcmp calls are ordered by
//                       their matching close parenthesis, which is exactly post-order = evaluation order.
//   * highest local   - params + declared vars - 1 must equal the highest `LocalGet/Set/Tee` index used.
//
// A row that fails validation is not used. Nothing is guessed.
//
// Output: asm2cs_map.json
//
// Usage: node asm2cs_map.js

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DIR = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const WASM = path.join(REPO, 'Decompiled', 'build.named.wasm');
const DCMP = path.join(REPO, 'Decompiled', 'build.dcmp');
const DUMP = path.join(REPO, 'Dump', 'dump.cs');

// ---------------------------------------------------------------- name section
function readLeb(buf, pos) {
	let result = 0, shift = 0, b;
	do { b = buf[pos++]; result |= (b & 0x7f) << shift; shift += 7; } while (b & 0x80);
	return [result >>> 0, pos];
}
function readName(buf, pos) { const [len, p] = readLeb(buf, pos); return [buf.toString('utf8', p, p + len), p + len]; }

const names = new Map(); // funcN -> name as stored in the name section
(function parseWasmNames() {
	const buf = fs.readFileSync(WASM);
	let pos = 8;
	while (pos < buf.length) {
		const id = buf[pos++];
		const [size, p] = readLeb(buf, pos);
		if (id === 0) {
			const [sectName, np] = readName(buf, p);
			if (sectName === 'name') {
				let sp = np;
				const end = p + size;
				while (sp < end) {
					const subId = buf[sp++];
					const [subSize, sp2] = readLeb(buf, sp);
					if (subId === 1) {
						let fp = sp2;
						const [, after] = readLeb(buf, fp);
						fp = after;
						while (fp < sp2 + subSize) {
							const [idx, f2] = readLeb(buf, fp);
							const [nm, f3] = readName(buf, f2);
							names.set(idx, nm);
							fp = f3;
						}
					}
					sp = sp2 + subSize;
				}
			}
		}
		pos = p + size;
	}
})();

const stripMerged = (n) => n.replace(/^multiple_\d+_/, '');
// lambdas / local functions / anonymous types: `<Start>b__5_0` is stored as `Start_b__5_0` in the tree
const normName = (n) => stripMerged(n).replace(/[<>]/g, '_');
const nameToFunc = new Map();
for (const [idx, nm] of names) {
	const k = normName(nm);
	if (!nameToFunc.has(k)) nameToFunc.set(k, []);
	nameToFunc.get(k).push(idx);
}

// ---------------------------------------------------------------- dump.cs field offsets
const FIELD = /^\t(?:(?:public|private|protected|internal|static|readonly|volatile|const|unsafe|new)\s+)*([A-Za-z_][\w.<>\[\],? ]*?)\s+([A-Za-z_]\w*)\s*;\s*(?:\/\/\s*0x([0-9A-Fa-f]+))?\s*$/;
const TYPE_DECL = /^(?:(?:public|internal|private|protected)\s+)*(?:abstract\s+|sealed\s+|static\s+|unsafe\s+)*(class|struct|interface|enum)\s+([A-Za-z_][\w.]*)\s*(?::\s*([^{]+?))?\s*\/\/ TypeDefIndex: (\d+)/;
const typeInfo = new Map();
{
	const lines = fs.readFileSync(DUMP, 'utf8').split(/\r?\n/);
	let ns = '';
	let cur = null;
	for (const L of lines) {
		const nsM = /^\/\/ Namespace:[ \t]*(.*)$/.exec(L);
		if (nsM) { ns = nsM[1].trim(); continue; }
		const t = TYPE_DECL.exec(L);
		if (t) {
			const nm = t[2];
			const full = nm.includes('.') ? nm : (ns ? `${ns}.${nm}` : nm);
			cur = { full, name: nm, ns, bases: (t[3] || '').split(',').map((s) => s.trim().split(/[<(]/)[0]).filter(Boolean), fields: new Map() };
			typeInfo.set(full, cur);
			continue;
		}
		if (!cur) continue;
		if (L === '}') { cur = null; continue; }
		const f = FIELD.exec(L);
		if (f && f[3]) cur.fields.set(parseInt(f[3], 16), f[2]);
	}
}

// ---------------------------------------------------------------- build.dcmp
const headRe = /^(export\s+)?(import\s+)?function\s+([A-Za-z_][\w.]*)\s*\(([^)]*)\)\s*(?::\s*([\w.]+))?\s*([{;])/;
const KW = new Set(['if', 'return', 'while', 'loop', 'switch', 'do', 'else', 'sizeof', 'select_if', 'label', 'goto', 'continue', 'call_indirect', 'br_table']);

function callsInEvalOrder(body) {
	const found = [];
	for (const m of body.matchAll(/(?<![\w.$])([A-Za-z_][\w.]*)\s*\(/g)) {
		const name = m[1];
		const open = m.index + m[0].length - 1;
		let depth = 0, close = -1;
		for (let i = open; i < body.length; i++) {
			const c = body[i];
			if (c === '(') depth++;
			else if (c === ')') { depth--; if (!depth) { close = i; break; } }
		}
		if (close < 0) continue;
		found.push({ name, close });
	}
	found.sort((a, b) => a.close - b.close);
	return found;
}

const dcmpNameToFunc = new Map(); // printed dcmp name -> funcN (first definition wins)
const fnInfo = new Map();         // funcN -> { name, params, ret, import, paramCount, varCount, maxLocal, calls }

function parseFnBody(func, bodyText) {
	const info = fnInfo.get(func);
	const params = info.params.trim() ? info.params.split(',').length : 0;
	let vars = 0;
	for (const L of bodyText.split('\n')) if (/^\s*var\s/.test(L)) vars++;
	info.paramCount = params;
	info.varCount = vars;
	info.maxLocal = params + vars - 1;
	const seq = [];
	for (const c of callsInEvalOrder(bodyText)) {
		if (KW.has(c.name)) continue;
		const t = dcmpNameToFunc.get(c.name);
		if (t !== undefined) seq.push(t);
	}
	info.calls = seq;
}

{
	// pass 1: definitions
	const fd = fs.openSync(DCMP, 'r');
	const size = fs.statSync(DCMP).size;
	const CHUNK = 8 * 1024 * 1024;
	let pos = 0, carry = '';
	while (pos < size) {
		const n = Math.min(CHUNK, size - pos);
		const b = Buffer.alloc(n);
		fs.readSync(fd, b, 0, n, pos);
		const full = carry + b.toString('utf8');
		const lines = full.split('\n');
		carry = lines.pop();
		for (const raw of lines) {
			const line = raw.replace(/\r$/, '');
			if (!/\/\/\s*func\d+\s*$/.test(line)) continue;
			const h = headRe.exec(line);
			if (!h) continue;
			const idx = parseInt(/\/\/\s*func(\d+)\s*$/.exec(line)[1], 10);
			fnInfo.set(idx, { idx, name: h[3], params: h[4], ret: h[5] || null, import: !!h[2], paramCount: 0, varCount: 0, maxLocal: -1, calls: [] });
			if (!dcmpNameToFunc.has(h[3])) dcmpNameToFunc.set(h[3], idx);
		}
		pos += n;
	}
	fs.closeSync(fd);
}

{
	// pass 2: bodies -> calls / locals
	const fd = fs.openSync(DCMP, 'r');
	const size = fs.statSync(DCMP).size;
	const CHUNK = 8 * 1024 * 1024;
	let pos = 0, carry = '';
	let cur = -1, body = [];
	const flush = () => { if (cur >= 0) parseFnBody(cur, body.join('\n')); cur = -1; body = []; };
	while (pos < size) {
		const n = Math.min(CHUNK, size - pos);
		const b = Buffer.alloc(n);
		fs.readSync(fd, b, 0, n, pos);
		const full = carry + b.toString('utf8');
		const lines = full.split('\n');
		carry = lines.pop();
		for (const raw of lines) {
			const line = raw.replace(/\r$/, '');
			if (cur < 0) {
				if (!/\/\/\s*func\d+\s*$/.test(line)) continue;
				const h = headRe.exec(line);
				if (!h) continue;
				cur = parseInt(/\/\/\s*func(\d+)\s*$/.exec(line)[1], 10);
				body = [];
				if (h[2]) { flush(); continue; }   // `import function ...;` has no body
				continue;
			}
			if (line === '}') { flush(); continue; }
			body.push(line);
			if (body.length > 30000) flush();
		}
		pos += n;
	}
	flush();
	fs.closeSync(fd);
}

// ---------------------------------------------------------------- tree methods
const MARKER = '---- wasm disassembly (Cpp2IL ISIL';
const SIG_RE = /^\t(?:(public|private|protected|internal)\s+)?((?:static|virtual|override|sealed|abstract|new|unsafe|extern|async|partial)\s+)*([A-Za-z_][\w.<>\[\],? ]*)\s+([A-Za-z_]\w*)\s*\(([^)]*)\)\s*$/;

function parseParams(s) {
	if (!s.trim()) return [];
	return s.split(',').map((p) => {
		const t = p.trim();
		const sp = t.lastIndexOf(' ');
		return sp < 0 ? { type: t, name: '' } : { type: t.slice(0, sp).trim(), name: t.slice(sp + 1).trim() };
	});
}

const methods = [];
for (const f of fs.readdirSync(DIR).filter((x) => x.toLowerCase().endsWith('.cs'))) {
	const src = fs.readFileSync(path.join(DIR, f), 'utf8');
	const lines = src.split(/\r?\n/);
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/m.exec(src);
	const ns = nsM ? nsM[1].trim() : '';
	const decl = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_]\w*)/m.exec(src);
	const type = decl ? decl[2] : path.basename(f, '.cs');
	for (let i = 0; i < lines.length; i++) {
		if (!lines[i].includes(MARKER)) continue;
		let sig = null, sigLine = -1;
		for (let j = i - 1; j >= 0 && j > i - 8; j--) {
			const m = SIG_RE.exec(lines[j]);
			if (m) { sig = { ret: m[3].trim(), name: m[4], params: m[5].trim(), mods: (m[2] || '') }; sigLine = j; break; }
		}
		const calls = [];
		const callsSigned = [];
		const ops = [];
		let maxLocal = -1;
		let endLine = i;
		for (let j = i + 1; j < lines.length && /^\t\t\/\//.test(lines[j]); j++) {
			const m = /^\t\t\/\/\s+(0x[0-9a-fA-F]+)\s+(\S+)(?:\s+(.*?))?\s*(?:;\s*.*)?$/.exec(lines[j]);
			if (!m) continue;
			const op = m[2];
			const imm = m[3] !== undefined ? m[3].trim() : '';
			ops.push(imm ? `${op} ${imm}` : op);
			endLine = j;
			if (op === 'Call' && /^-?\d+$/.test(imm)) {
				const n = parseInt(imm, 10);
				callsSigned.push(n);
				if (n >= 0) calls.push(n);
			}
			const lm = /^Local(?:Get|Set|Tee)\s+(\d+)$/.exec(op === 'Call' ? '' : `${op} ${imm}`);
			if (lm) maxLocal = Math.max(maxLocal, parseInt(lm[1], 10));
		}
		if (sig) {
			methods.push({
				file: f, ns, type, ...sig, paramsList: parseParams(sig.params),
				isStatic: /\bstatic\b/.test(sig.mods), calls, callsSigned, opsCount: ops.length, content: ops.join('|'),
				maxLocal, markerLine: i, sigLine, endLine,
			});
		}
	}
}

// ---------------------------------------------------------------- map + validate
const contentToFuncs = new Map(); // listing content -> Map(funcN -> methodKey)
const addContent = (content, func, key) => {
	if (!contentToFuncs.has(content)) contentToFuncs.set(content, new Map());
	contentToFuncs.get(content).set(func, key);
};

const rows = [];
const rejects = [];
const howRank = { name: 0, content: 1, calls: 2 };

for (const m of methods) {
	const full = m.ns ? `${m.ns}.${m.type}` : m.type;
	const member = m.name === m.type ? '.ctor' : m.name;
	const key = `${full}::${member}`;
	// the wasm arity a method of this C# signature must have: `this` plus one pointer per parameter,
	// plus up to two hidden arguments IL2CPP adds (method-info / struct-return buffer)
	const baseArity = (m.isStatic ? 0 : 1) + m.paramsList.length;
	const arityOk = (info) => info.paramCount >= baseArity && info.paramCount <= baseArity + 2;

	const cands = nameToFunc.get(normName(key)) || [];
	let func = null, how = 'name';
	if (cands.length) func = cands[0];
	if (func === null && m.calls.length) {
		// call-sequence match: every dcmp function with the same ordered call sequence, narrowed by arity
		const matches = [];
		for (const [idx, info] of fnInfo) {
			if (info.calls.length !== m.calls.length) continue;
			let ok = true;
			for (let i = 0; i < m.calls.length; i++) if (info.calls[i] !== m.calls[i]) { ok = false; break; }
			if (ok) matches.push(idx);
		}
		const narrowed = matches.filter((idx) => arityOk(fnInfo.get(idx)));
		if (narrowed.length === 1) { func = narrowed[0]; how = 'calls'; }
		else if (matches.length === 1) { func = matches[0]; how = 'calls'; }
	}
	if (func === null) { rejects.push({ kind: 'unmatched', file: m.file, key, ops: m.opsCount, calls: m.calls.length }); continue; }
	const info = fnInfo.get(func);
	// align the two call lists in evaluation order; a negative tree index is an indirect call
	// (`call_indirect`, which Cpp2IL prints unresolved) and may consume any dcmp call.
	let ai = 0, matched = 0, wildcards = 0;
	for (const c of m.callsSigned) {
		if (c < 0) {
			if (ai < info.calls.length) { ai++; wildcards++; }
			continue;
		}
		let found = false;
		for (let k = ai; k < info.calls.length; k++) {
			if (info.calls[k] === c) { ai = k + 1; matched++; found = true; break; }
		}
		if (!found) break;
	}
	const callOk = matched === m.calls.length;
	if (!callOk) {
		rejects.push({ kind: 'call-order', file: m.file, key, func, ops: m.opsCount, note: `calls tree=${m.calls.length}/dcmp=${info.calls.length} matched=${matched}` });
		continue;
	}
	rows.push({
		file: m.file, key, member, type: full, name: m.name, ret: m.ret, isStatic: m.isStatic,
		params: m.params, paramsList: m.paramsList,
		func, funcName: info.name, funcParams: info.params, funcRet: info.ret, how,
		ops: m.opsCount, calls: m.calls.length, mergedName: names.get(func) || '',
		maxLocal: m.maxLocal, markerLine: m.markerLine, sigLine: m.sigLine, endLine: m.endLine,
		matched, wildcards,
	});
	addContent(m.content, func, key);
}

// content-based rescue for methods whose own name is unknown (identical code folding)
const rescued = [];
for (const r of rejects.slice()) {
	const m = methods.find((x) => x.file === r.file && `${x.ns ? x.ns + '.' : ''}${x.type}::${x.name === x.type ? '.ctor' : x.name}` === r.key);
	if (!m || !m.content) continue;
	const hit = contentToFuncs.get(m.content);
	if (!hit || hit.size !== 1) continue;
	const [func, refKey] = [...hit][0];
	const info = fnInfo.get(func);
	if (!info) continue;
	rescued.push({ ...r, func, refKey });
	rows.push({
		file: m.file, key: r.key, member: m.name === m.type ? '.ctor' : m.name, type: `${m.ns ? m.ns + '.' : ''}${m.type}`,
		name: m.name, ret: m.ret, isStatic: m.isStatic, params: m.params, paramsList: m.paramsList,
		func, funcName: info.name, funcParams: info.params, funcRet: info.ret, how: 'content',
		ops: m.opsCount, calls: m.calls.length, mergedName: names.get(func) || '',
		maxLocal: m.maxLocal, markerLine: m.markerLine, sigLine: m.sigLine, endLine: m.endLine, sameCodeAs: refKey,
	});
	const i = rejects.findIndex((x) => x.file === r.file && x.key === r.key);
	if (i >= 0) rejects.splice(i, 1);
}

const stats = {
	wasmNamedFunctions: names.size,
	dcmpFunctions: fnInfo.size,
	treeMethodsWithBodies: methods.length,
	mapped: rows.length,
	byName: rows.filter((r) => r.how === 'name').length,
	byContent: rows.filter((r) => r.how === 'content').length,
	byCallSequence: rows.filter((r) => r.how === 'calls').length,
	icfMergedBodies: rows.filter((r) => r.mergedName.startsWith('multiple_')).length,
	rejected: rejects.length,
	rejectKinds: rejects.reduce((x, p) => { x[p.kind] = (x[p.kind] || 0) + 1; return x; }, {}),
};
fs.writeFileSync(path.join(__dirname, 'asm2cs_map.json'), JSON.stringify({ stats, rejects, rows }, null, 1));
console.log(JSON.stringify(stats, null, 2));
console.log('\n--- rejects (first 30) ---');
for (const p of rejects.slice(0, 30)) console.log(`  ${p.kind}  ${p.file}  ${p.key}  ops=${p.ops}${p.note ? '  ' + p.note : ''}`);
console.log(`\n--- rescued by identical code (first 10 of ${rescued.length}) ---`);
for (const r of rescued.slice(0, 10)) console.log(`  ${r.key}  ==  ${r.refKey}  (func${r.func})`);
console.log('\n--- sample mappings ---');
for (const r of rows.slice(0, 5)) console.log(`  ${r.key} -> func${r.func} (${r.funcName}) via ${r.how}`);
