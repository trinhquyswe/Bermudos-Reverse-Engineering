'use strict';
// Inventory every opcode mnemonic (and immediate style) used in the in-scope listings.
// Usage: node opcodes_used.js

const fs = require('fs');
const path = require('path');

const DIR = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\RippedProject\\ExportedProject\\Assets\\Scripts\\Assembly-CSharp';

const ops = new Map();
const samples = new Map();
for (const f of fs.readdirSync(DIR).filter((x) => x.endsWith('.cs'))) {
	const lines = fs.readFileSync(path.join(DIR, f), 'utf8').split(/\r?\n/);
	let inAsm = false;
	for (const L of lines) {
		if (L.includes('---- wasm disassembly')) { inAsm = true; continue; }
		if (!inAsm) continue;
		if (!/^\t\t\/\//.test(L)) { inAsm = false; continue; }
		const m = /^\t\t\/\/\s+0x[0-9a-fA-F]+\s+(\S+)(?:\s+(.*?))?\s*(?:;\s*(.*))?$/.exec(L);
		if (!m) continue;
		const op = m[1];
		const imm = (m[2] || '').trim();
		ops.set(op, (ops.get(op) || 0) + 1);
		if (!samples.has(op)) samples.set(op, `${op} ${imm}`.trim());
	}
}

console.log(`distinct mnemonics: ${ops.size}\n`);
for (const [op, n] of [...ops].sort((a, b) => b[1] - a[1])) {
	console.log(`  ${String(n).padStart(7)}  ${op.padEnd(18)} e.g. ${samples.get(op)}`);
}
