'use strict';
// Inventory the listing shapes of not-yet-mapped methods, to see which can be translated directly
// from their ISIL listing. Usage: node shape_inventory.js

const fs = require('fs');
const path = require('path');

const DIR = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\RippedProject\\ExportedProject\\Assets\\Scripts\\Assembly-CSharp';
const j = require('./asm2cs_map.json');

const onlySmall = process.argv.includes('--small');
const list = onlySmall ? j.rejects.filter((x) => x.ops <= 8) : j.rejects;

const shapes = new Map();
const keyOf = (r) => r.key;

for (const r of list) {
	const lines = fs.readFileSync(path.join(DIR, r.file), 'utf8').split(/\r?\n/);
	const mnameFull = r.key.split('::')[1];
	const mname = mnameFull === '.ctor' ? r.key.split('::')[0].split('.').pop() : mnameFull;
	for (let i = 0; i < lines.length; i++) {
		if (!lines[i].includes('---- wasm disassembly')) continue;
		let ok = false;
		for (let k = i - 1; k >= 0 && k > i - 8; k--) {
			const re = new RegExp('\\b' + mname.replace(/[.*+?^${}()|[\]\\]/g, '\\$&') + '\\s*\\(');
			if (re.test(lines[k])) { ok = true; break; }
		}
		if (!ok) continue;
		const ops = [];
		for (let k = i + 1; k < lines.length && /^\t\t\/\//.test(lines[k]); k++) {
			const m = /^\t\t\/\/\s+0x[0-9a-fA-F]+\s+(\S+)(?:\s+(.*?))?\s*(?:;.*)?$/.exec(lines[k]);
			if (m) ops.push(m[2] + (m[1] ? ' ' + m[1] : ''));
		}
		const shape = ops.join(' / ');
		if (!shapes.has(shape)) shapes.set(shape, []);
		shapes.get(shape).push(keyOf(r) + ' [' + r.ops + ' ops]');
		break;
	}
}

console.log(`methods: ${list.length}   distinct listing shapes: ${shapes.size}\n`);
let n = 0;
for (const [s, l] of [...shapes].sort((a, b) => b[1].length - a[1].length)) {
	n++;
	if (n > 30) break;
	console.log(`[${l.length}x] ${s.length > 220 ? s.slice(0, 220) + ' ...' : s}`);
	console.log(`        e.g. ${l[0]}`);
}
