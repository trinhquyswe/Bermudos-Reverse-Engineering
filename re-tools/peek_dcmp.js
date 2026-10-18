'use strict';
// Peek at how build.dcmp delimits functions, so the helper-table script can slice bodies out of the
// 166 MB file in a single pass.

const fs = require('fs');
const path = require('path');

const DCMP = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\build.dcmp';
const fd = fs.openSync(DCMP, 'r');
const buf = Buffer.alloc(6000);
fs.readSync(fd, buf, 0, 6000, 0);
console.log('--- first 6000 bytes ---');
console.log(buf.toString('utf8'));

// find the definition of a hot unnamed helper
const want = process.argv[2] || 'func1099';
const size = fs.statSync(DCMP).size;
const CHUNK = 8 * 1024 * 1024;
let pos = 0;
let carry = '';
let found = 0;
while (pos < size && found < 2) {
	const n = Math.min(CHUNK, size - pos);
	const b = Buffer.alloc(n);
	fs.readSync(fd, b, 0, n, pos);
	const text = carry + b.toString('utf8');
	const re = new RegExp(`(?:^|\\n)([^\\n]*\\b${want}\\b[^\\n]*\\n)`, 'g');
	let m;
	while ((m = re.exec(text)) && found < 2) {
		const start = Math.max(0, m.index - 200);
		console.log(`\n--- match at file offset ~${pos + start} ---`);
		console.log(text.slice(start, m.index + 1600));
		found++;
	}
	carry = text.slice(-200);
	pos += n;
}
fs.closeSync(fd);
