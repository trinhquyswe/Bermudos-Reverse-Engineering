'use strict';
// Item 3: a name/identity appendix for the hot *unnamed* call targets.
//
// 8,711 call sites in the reconstructed tree address a wasm function that the `name` custom section
// does not name (IL2CPP runtime helpers with no managed method behind them), so they are printed as a
// bare `Call N`. This script turns the hottest of them into a table by combining two evidence sources:
//
//   - the tree:           how often N is called, and from which recovered classes
//   - build.dcmp:         the body of `funcN` in the wabt decompilation - how many lines, what it
//                         calls, and whether it is a thin wrapper, which lets a helper be tied to a
//                         named (managed) function it forwards to
//
// Usage: node helper_table.js [topN]   ->  helper_table.json + helper_table.md

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const TREE = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const DCMP = path.join(REPO, 'Decompiled', 'build.dcmp');
const TOP = parseInt(process.argv[2] || '25', 10);

// ---------------------------------------------------------------- tree: who calls the unnamed ones
const unnamed = new Map(); // index -> { count, owners: Map(owner -> count) }
const CALL_RE = /^\s*\/\/\s+0x[0-9A-Fa-f]+\s+Call\s+(\d+)\s*$/;
const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (p.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(TREE);

for (const f of files) {
	const src = fs.readFileSync(f, 'utf8');
	const decl = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(?:class|struct|interface|enum)\s+([A-Za-z_]\w*)/m.exec(src);
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/m.exec(src);
	const owner = (nsM && nsM[1].trim() ? nsM[1].trim() + '.' : '') + (decl ? decl[1] : path.basename(f, '.cs'));
	for (const line of src.split(/\r?\n/)) {
		const m = CALL_RE.exec(line);
		if (!m) continue;
		const idx = parseInt(m[1], 10);
		if (!unnamed.has(idx)) unnamed.set(idx, { count: 0, owners: new Map() });
		const rec = unnamed.get(idx);
		rec.count++;
		rec.owners.set(owner, (rec.owners.get(owner) || 0) + 1);
	}
}

const hot = [...unnamed.entries()].sort((a, b) => b[1].count - a[1].count).slice(0, TOP).map(([idx, r]) => idx);
const hotSet = new Set(hot);
console.error(`tree: ${files.length} files, ${[...unnamed.values()].reduce((a, r) => a + r.count, 0)} unnamed call sites over ${unnamed.size} distinct targets`);

// ---------------------------------------------------------------- dcmp: one pass over every function
const managed = (name) => !/^f_[a-z]+$/.test(name) && !/^env_/.test(name) && !/^(stack|wasm_|__|memory|table|g_)/.test(name);
const KW = new Set(['if', 'return', 'while', 'for', 'switch', 'do', 'else', 'sizeof', 'select_if', 'loop', 'br_if', 'br', 'label', 'goto', 'var', 'function', 'export']);
// wabt renders wasm operators in prefix notation (eqz x, i32_add(a, b), ...); they are not calls.
const OP = new Set(['eqz', 'clz', 'ctz', 'popcnt', 'extend', 'wrap', 'trunc', 'nearest', 'copysign', 'rotl', 'rotr', 'shl', 'shr', 'select_if', 'call_indirect']);
const isOperator = (n) => OP.has(n) || /^(i32|i64|f32|f64|v128)_[a-z0-9_]+$/.test(n);

const fns = new Map(); // index -> { name, lines, callees: [names], statements }
const nameIndex = new Map(); // name -> index
const fd = fs.openSync(DCMP, 'r');
const size = fs.statSync(DCMP).size;
const CHUNK = 8 * 1024 * 1024;
let pos = 0, carry = '', cur = null, curIdx = -1, depthLines = 0;

const finish = () => {
	if (!cur) return;
	cur.statements = cur.statements.filter((s) => s && !/^[{}]$/.test(s));
	fns.set(curIdx, cur);
	nameIndex.set(cur.name, curIdx);
	cur = null;
};

while (pos < size) {
	const n = Math.min(CHUNK, size - pos);
	const b = Buffer.alloc(n);
	fs.readSync(fd, b, 0, n, pos);
	const text = carry + b.toString('utf8');
	const lines = text.split('\n');
	carry = lines.pop();
	for (const raw of lines) {
		const L = raw.replace(/\r$/, '');
		if (cur === null) {
			// imports come first in the index space (func0..func477 here) and have no body
			const imp = /^import\s+function\s+([A-Za-z_][\w.]*)\s*\([^)]*\)[^;]*;\s*\/\/\s*func(\d+)\s*$/.exec(L);
			if (imp) {
				const ii = parseInt(imp[2], 10);
				fns.set(ii, { name: imp[1], lines: 0, callees: [], statements: [], import: true });
				nameIndex.set(imp[1], ii);
				continue;
			}
			const m = /^(?:export\s+)?function\s+([A-Za-z_][\w.]*)\s*\([^)]*\)[^{]*\{\s*\/\/\s*func(\d+)\s*$/.exec(L);
			if (m) {
				curIdx = parseInt(m[2], 10);
				cur = { name: m[1], lines: 1, callees: [], statements: [] };
			}
			continue;
		}
		cur.lines++;
		if (L === '}') { finish(); continue; }
		const t = L.trim();
		if (t && !/^label /.test(t)) {
			cur.statements.push(t);
			if (cur.callees.length < 16) {
				for (const c of t.matchAll(/\b([A-Za-z_][\w.]*)\s*\(/g)) {
					if (!KW.has(c[1]) && !isOperator(c[1]) && !cur.callees.includes(c[1])) cur.callees.push(c[1]);
				}
			}
		}
	}
	pos += n;
}
finish();
fs.closeSync(fd);
console.error(`dcmp: ${fns.size} functions parsed, ${nameIndex.size} names`);

// ---------------------------------------------------------------- build the table
const rows = [];
for (const idx of hot) {
	const rec = unnamed.get(idx);
	const fn = fns.get(idx);
	const callees = fn ? fn.callees.map((c) => ({ name: c, index: nameIndex.has(c) ? nameIndex.get(c) : null, managed: managed(c) })) : [];
	// follow a chain of single-call wrappers until a managed name or a dead end
	const chain = [];
	let curIdx = idx;
	for (let step = 0; step < 6; step++) {
		const f = fns.get(curIdx);
		if (!f) break;
		const single = f.statements.length === 1 ? f.callees.filter((c) => !KW.has(c) && !isOperator(c)) : [];
		if (single.length !== 1) break;
		const next = nameIndex.has(single[0]) ? nameIndex.get(single[0]) : null;
		chain.push(`${single[0]}${next ? `(#${next})` : ''}`);
		if (next === null) break;
		if (managed(single[0])) break;
		curIdx = next;
	}
	// evidence markers, all read straight off the decompiled body
	const body = fn ? fn.statements.join('\n') : '';
	const marks = [];
	if (fn && fn.import) marks.push('imported from the JS host (`env_*`)');
	if (/call_indirect\s*\(/.test(body)) marks.push('dynamic dispatch (`call_indirect`)');
	if (/env_cxa_find_matching_catch|env_resumeException|env_getTempRet0/.test(body)) marks.push('C++ exception plumbing (`cxa_find_matching_catch`/`resumeException`)');
	if (/env_invoke_|env_virtuallookup/.test(body)) marks.push('codegen invocation (`env_invoke_*`)');
	if (fn && !fn.import && fn.statements.length === 1) marks.push('thin wrapper');
	const managedCalls = callees.filter((c) => c.managed && !/^env_/.test(c.name)).slice(0, 3).map((c) => `${c.name}#${c.index}`);
	if (managedCalls.length) marks.push(`calls managed code (${managedCalls.join(', ')})`);
	if (fn && fn.lines > 100) marks.push(`large body (${fn.lines} lines)`);
	rows.push({
		index: idx,
		callSites: rec.count,
		dcmpName: fn ? fn.name : '(not found)',
		bodyLines: fn ? fn.lines : 0,
		shape: !fn ? 'unknown' : fn.import ? 'imported host function' : fn.statements.length === 0 ? 'empty (no body)' : fn.statements.length === 1 ? 'thin wrapper' : `${fn.statements.length} statements`,
		callees: callees.slice(0, 6).map((c) => `${c.name}${c.index != null ? `#${c.index}` : ''}${c.managed ? ' [managed]' : ''}`),
		forwardsTo: chain.length ? chain.slice(0, 4).join(' -> ') : null,
		marks,
		topCallers: [...rec.owners.entries()].sort((a, b) => b[1] - a[1]).slice(0, 3).map(([o, c]) => `${o} (${c})`),
	});
}

fs.writeFileSync(path.join(__dirname, 'helper_table.json'), JSON.stringify({ unnamedTargets: unnamed.size, rows }, null, 2), 'utf8');

const md = [];
md.push('| `Call N` | call sites | `build.dcmp` | body | evidence in the body | wrapper chain | called from (recovered classes) |');
md.push('|---|---|---|---|---|---|---|');
for (const r of rows) {
	md.push(`| \`${r.index}\` | ${r.callSites} | \`${r.dcmpName}\`${r.bodyLines ? ` (${r.bodyLines} lines)` : ''} | ${r.shape} | ${r.marks.join('; ') || '-'} | ${r.forwardsTo ? r.forwardsTo.split(' -> ').map((c) => `\`${c}\``).join(' -> ') : '-'} | ${r.topCallers.join('; ')} |`);
}
fs.writeFileSync(path.join(__dirname, 'helper_table.md'), md.join('\n') + '\n', 'utf8');
console.log(md.join('\n'));
