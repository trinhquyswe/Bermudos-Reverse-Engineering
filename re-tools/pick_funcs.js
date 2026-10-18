'use strict';
// Find in-scope methods whose ISIL listing contains a given opcode (e.g. BrTable, Loop, Select),
// and print the wasm function they were identified as (Tier B bytecode match, else Tier A name/dcmp).
//
// Usage: node pick_funcs.js BrTable [limit]

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DIR = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const op = process.argv[2] || 'BrTable';
const limit = parseInt(process.argv[3] || '10', 10);

const A = JSON.parse(fs.readFileSync(path.join(__dirname, 'asm2cs_map.json'), 'utf8'));
const B = JSON.parse(fs.readFileSync(path.join(__dirname, 'wasm_index_matches.json'), 'utf8'));
const bBy = new Map();
for (const m of B.matches) bBy.set(`${m.file}|${m.name}`, m.func);
const aBy = new Map();
for (const r of A.rows) aBy.set(`${r.file}|${r.name}`, r.func);

let n = 0;
for (const f of fs.readdirSync(DIR).filter((x) => x.endsWith('.cs'))) {
	const lines = fs.readFileSync(path.join(DIR, f), 'utf8').split(/\r?\n/);
	for (let i = 0; i < lines.length; i++) {
		if (!lines[i].includes('---- wasm disassembly')) continue;
		let name = '?', sigLine = -1;
		for (let j = i - 1; j >= 0 && j > i - 8; j--) {
			const m = /^\t.*?([A-Za-z_]\w*)\s*\(([^)]*)\)\s*$/.exec(lines[j]);
			if (m) { name = m[1]; sigLine = j; break; }
		}
		let hasOp = false, ops = 0;
		for (let j = i + 1; j < lines.length && /^\t\t\/\//.test(lines[j]); j++) {
			ops++;
			if (new RegExp('\\b' + op + '\\b').test(lines[j])) hasOp = true;
		}
		if (!hasOp) continue;
		const func = bBy.get(`${f}|${name}`) ?? aBy.get(`${f}|${name}`);
		console.log(`${f}::${name}  ops=${ops}  func=${func === undefined ? '?' : func}`);
		if (++n >= limit) process.exit(0);
	}
}
