'use strict';
// Print the decompiled body of one or more wasm functions, given their index (the `// funcN`
// marker build.dcmp puts on every definition, imports included).
//
// Usage: node dcmp_func.js 1099 95402 516

const fs = require('fs');
const DCMP = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\build.dcmp';

const want = new Map(); // index -> lineNo
for (const a of process.argv.slice(2)) want.set(parseInt(a, 10), -1);

const fd = fs.openSync(DCMP, 'r');
const size = fs.statSync(DCMP).size;
const CHUNK = 8 * 1024 * 1024;
let pos = 0, carry = '', lineNo = 0;
while (pos < size) {
	const n = Math.min(CHUNK, size - pos);
	const b = Buffer.alloc(n);
	fs.readSync(fd, b, 0, n, pos);
	const text = carry + b.toString('utf8');
	const lines = text.split('\n');
	carry = lines.pop();
	for (const raw of lines) {
		lineNo++;
		const m = /\/\/\s*func(\d+)\s*$/.exec(raw.replace(/\r$/, ''));
		if (m) {
			const idx = parseInt(m[1], 10);
			if (want.has(idx) && want.get(idx) < 0) want.set(idx, lineNo);
		}
	}
	pos += n;
}
fs.closeSync(fd);

for (const [idx, line] of want) {
	console.log(`\n=== func${idx} (line ${line}) ===`);
	if (line < 0) { console.log('  (not found)'); continue; }
	const fd2 = fs.openSync(DCMP, 'r');
	let p = 0, c2 = '', ln = 0, out = 0;
	while (p < size && out < 80) {
		const n = Math.min(CHUNK, size - p);
		const b = Buffer.alloc(n);
		fs.readSync(fd2, b, 0, n, p);
		const text = c2 + b.toString('utf8');
		const lines = text.split('\n');
		c2 = lines.pop();
		for (const raw of lines) {
			ln++;
			if (ln >= line) {
				const L = raw.replace(/\r$/, '');
				console.log(`${ln}: ${L}`);
				out++;
				if (L === '}') { out = 80; break; }
			}
		}
		p += n;
	}
	fs.closeSync(fd2);
}
