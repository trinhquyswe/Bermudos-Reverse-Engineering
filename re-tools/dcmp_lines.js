'use strict';
// Print a line range of build.dcmp (no external tools available for a 166 MB file).
// Usage: node dcmp_lines.js <fromLine> <toLine>

const fs = require('fs');
const DCMP = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\build.dcmp';
const from = parseInt(process.argv[2] || '1', 10);
const to = parseInt(process.argv[3] || '40', 10);

const fd = fs.openSync(DCMP, 'r');
const size = fs.statSync(DCMP).size;
const CHUNK = 4 * 1024 * 1024;
let pos = 0, carry = '', lineNo = 0, done = false;

while (pos < size && !done) {
	const n = Math.min(CHUNK, size - pos);
	const b = Buffer.alloc(n);
	fs.readSync(fd, b, 0, n, pos);
	const text = carry + b.toString('utf8');
	const lines = text.split('\n');
	carry = lines.pop();
	for (const raw of lines) {
		lineNo++;
		if (lineNo >= from && lineNo <= to) console.log(`${lineNo}: ${raw.replace(/\r$/, '')}`);
		if (lineNo > to) { done = true; break; }
	}
	pos += n;
}
fs.closeSync(fd);
