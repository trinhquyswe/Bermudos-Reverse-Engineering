'use strict';
// Assemble the translator's input:
//   * one entry per in-scope method that was identified (bytecode match preferred, else name/dcmp),
//     with its C# signature (from the ISIL tree listing) and the dcmp body of its wasm function,
//   * the field-offset tables (dump.cs) for the in-scope types, including inherited fields.
//
// Output: dcmp_bodies.json
//
// Usage: node dcmp_bodies.js

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DIR = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const DCMP = path.join(REPO, 'Decompiled', 'build.dcmp');
const DUMP = path.join(REPO, 'Dump', 'dump.cs');

// ------------------------------------------------------------------ dump.cs: types, bases, field offsets
const FIELD = /^\t(?:(?:public|private|protected|internal|static|readonly|volatile|const|unsafe|new)\s+)*([A-Za-z_][\w.<>\[\],? ]*?)\s+([A-Za-z_]\w*)\s*;\s*(?:\/\/\s*0x([0-9A-Fa-f]+))?\s*$/;
const TYPE_DECL = /^(?:(?:public|internal|private|protected)\s+)*(?:abstract\s+|sealed\s+|static\s+|unsafe\s+)*(class|struct|interface|enum)\s+([A-Za-z_][\w.]*)\s*(?::\s*([^{]+?))?\s*\/\/ TypeDefIndex: (\d+)/;
const types = new Map(); // full name -> { name, ns, bases, fields: {off: name}, fieldsByType: Map<T, Map> }
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
			cur = {
				full, name: nm, ns,
				bases: (t[3] || '').split(',').map((s) => s.trim().split(/[<(]/)[0]).filter(Boolean),
				fields: new Map(),
				fieldTypes: new Map(),
			};
			types.set(full, cur);
			continue;
		}
		if (!cur) continue;
		if (L === '}') { cur = null; continue; }
		const f = FIELD.exec(L);
		if (f && f[3]) { cur.fields.set(parseInt(f[3], 16), f[2]); cur.fieldTypes.set(f[2], f[1].trim()); }
	}
}

// ------------------------------------------------------------------ identification (A | B)
const A = JSON.parse(fs.readFileSync(path.join(__dirname, 'asm2cs_map.json'), 'utf8'));
const B = JSON.parse(fs.readFileSync(path.join(__dirname, 'wasm_index_matches.json'), 'utf8'));
const bBy = new Map();
for (const m of B.matches) bBy.set(`${m.file}|${m.name}`, m);

const identified = [];
for (const r of A.rows) {
	const b = bBy.get(`${r.file}|${r.name}`);
	const func = b !== undefined ? b.func : r.func;
	identified.push({
		file: r.file, type: r.type, name: r.name, ret: r.ret, isStatic: r.isStatic, params: r.params,
		func, funcName: r.funcName, funcParams: r.funcParams, funcRet: r.funcRet,
		how: b !== undefined ? 'bytecode' : r.how,
		mergedName: r.mergedName,
	});
}
for (const m of B.matches) {
	if (A.rows.some((r) => r.file === m.file && r.name === m.name)) continue;
	identified.push({
		file: m.file, type: m.type, name: m.name, ret: m.ret, isStatic: /\bstatic\b/.test(m.mods), params: m.params,
		func: m.func, funcName: '', funcParams: '', funcRet: '',
		how: 'bytecode-only', mergedName: '',
	});
}

// ------------------------------------------------------------------ dcmp bodies
const want = new Map();
for (const it of identified) want.set(it.func, true);
const headRe = /^(export\s+)?(import\s+)?function\s+([A-Za-z_][\w.]*)\s*\(([^)]*)\)\s*(?::\s*([\w.]+))?\s*([{;])/;
const bodies = new Map();
const defs = new Map();
{
	const fd = fs.openSync(DCMP, 'r');
	const size = fs.statSync(DCMP).size;
	const CHUNK = 8 * 1024 * 1024;
	let pos = 0, carry = '';
	let cur = -1, body = [];
	const flush = () => {
		if (cur >= 0) {
			defs.set(cur, defs.get(cur) || null);
			if (want.has(cur)) bodies.set(cur, body.join('\n'));
		}
		cur = -1; body = [];
	};
	while (pos < size) {
		const n = Math.min(CHUNK, size - pos);
		const b = Buffer.alloc(n);
		fs.readSync(fd, b, 0, n, pos);
		const text = carry + b.toString('utf8');
		const lines = text.split('\n');
		carry = lines.pop();
		for (const raw of lines) {
			const line = raw.replace(/\r$/, '');
			if (cur < 0) {
				if (!/\/\/\s*func\d+\s*$/.test(line)) continue;
				const h = headRe.exec(line);
				if (!h) continue;
				cur = parseInt(/\/\/\s*func(\d+)\s*$/.exec(line)[1], 10);
				defs.set(cur, { name: h[3], params: h[4], ret: h[5] || null, import: !!h[2] });
				body = [];
				if (h[2]) { flush(); continue; }
				continue;
			}
			if (line === '}') { flush(); continue; }
			body.push(line);
		}
		pos += n;
	}
	flush();
	fs.closeSync(fd);
}

let missing = 0;
for (const it of identified) {
	if (!bodies.has(it.func)) {
		missing++;
		if (missing <= 10) console.log(`  ! no dcmp body: ${it.type}::${it.name} func${it.func}`);
	}
}

// only keep the field tables of the types actually used
const usedTypes = new Set(identified.map((x) => x.type));
const fieldTables = {};
for (const t of usedTypes) {
	const chain = [];
	let cur = types.get(t);
	const seen = new Set();
	while (cur && !seen.has(cur.full)) {
		seen.add(cur.full);
		chain.push({ type: cur.full, name: cur.name, fields: Object.fromEntries([...cur.fields].map(([k, v]) => [k, v])), fieldTypes: Object.fromEntries([...cur.fieldTypes].map(([k, v]) => [k, v])) });
		cur = cur.bases.length ? types.get(cur.bases[0]) : null;
	}
	fieldTables[t] = chain;
}

fs.writeFileSync(path.join(__dirname, 'dcmp_bodies.json'), JSON.stringify({
	methods: identified.map((it) => ({ ...it, body: bodies.get(it.func) || null })),
	fieldTables,
}, null, 1));

console.log(JSON.stringify({
	identifiedMethods: identified.length,
	withBody: identified.filter((x) => bodies.has(x.func)).length,
	typesWithFieldTables: Object.keys(fieldTables).length,
	fieldTableEntries: Object.values(fieldTables).reduce((a, c) => a + c.reduce((s, x) => s + Object.keys(x.fields).length, 0), 0),
}, null, 2));
