'use strict';
// list_kept.js - report the tree methods whose wasm function was not identified (raw listing kept).
//   node list_kept.js
const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DIR = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const OUT = JSON.parse(fs.readFileSync(path.join(__dirname, 'asm2cs_out.json'), 'utf8'));

const MODS = /^(?:(?:public|private|protected|internal|static|virtual|override|sealed|abstract|readonly|extern|unsafe|new|partial)\s+)*/;
const IDENT = '[A-Za-z_][A-Za-z0-9_]*';
function parseSignature(line) {
	const text = line.replace(/^\t+/, '').trim();
	const mods = (MODS.exec(text) || [''])[0].trim();
	const rest = text.slice(mods.length).trim();
	const m = /^(.+?)\(([^)]*)\)$/.exec(rest);
	if (!m) return null;
	const head = m[1].trim();
	const nameM = new RegExp(`(${IDENT})\\s*$`).exec(head);
	if (!nameM) return null;
	return { mods, rest: text };
}

const byFile = new Map();
for (const m of OUT.methods) {
	if (!byFile.has(m.file)) byFile.set(m.file, new Set());
	byFile.get(m.file).add(m.markerLine);
}

const rows = [];
for (const f of fs.readdirSync(DIR).filter((x) => x.endsWith('.cs'))) {
	const lines = fs.readFileSync(path.join(DIR, f), 'utf8').split(/\r?\n/);
	for (let i = 0; i < lines.length; i++) {
		if (!/^\t\t\/\/ No wasm function could be identified/.test(lines[i])) continue;
		// the note sits in front of the marker line and the raw listing
		let j = i + 2;
		const ops = [];
		while (j < lines.length && /^\t\t\/\//.test(lines[j])) {
			const m = /^\t\t\/\/\s+0x[0-9A-Fa-f]+\s+(.+?)\s*$/.exec(lines[j]);
			if (m) ops.push(m[1]);
			j++;
		}
		let sigLine = i - 1;
		while (sigLine >= 0 && (lines[sigLine].trim() === '' || /^\t\t\/\//.test(lines[sigLine]))) sigLine--;
		const sig = parseSignature(lines[sigLine]);
		rows.push({ f, line: i + 1, sig: sig ? sig.rest : '?', ops });
	}
}

const shapes = new Map();
for (const r of rows) {
	const key = r.ops.join(' ; ');
	shapes.set(key, (shapes.get(key) || 0) + 1);
}
console.log(`${rows.length} methods kept raw, ${shapes.size} distinct listings`);
for (const [k, v] of [...shapes].sort((a, b) => b[1] - a[1])) {
	console.log(`  ${String(v).padStart(3)}  ${k.length > 150 ? k.slice(0, 150) + ' ...' : k}`);
}
console.log('--- detail ---');
for (const r of rows) console.log(`  ${r.f}:${r.line}  ${r.sig.slice(0, 90)}  [${r.ops.length} ops]`);
