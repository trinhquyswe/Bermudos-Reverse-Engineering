'use strict';
// Line-oriented scan of build.dcmp: show how function definitions are delimited, and show every
// occurrence of a given token with a little context.

const fs = require('fs');
const DCMP = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\build.dcmp';
const token = process.argv[2] || 'func1099';
const maxHits = parseInt(process.argv[3] || '6', 10);

const fd = fs.openSync(DCMP, 'r');
const size = fs.statSync(DCMP).size;
const CHUNK = 4 * 1024 * 1024;
let pos = 0, carry = '', lineNo = 0;
let shownDef = 0, shownToken = 0, totalTokenHits = 0;

while (pos < size) {
	const n = Math.min(CHUNK, size - pos);
	const b = Buffer.alloc(n);
	fs.readSync(fd, b, 0, n, pos);
	const text = carry + b.toString('utf8');
	const lines = text.split('\n');
	carry = lines.pop();
	for (const raw of lines) {
		lineNo++;
		const L = raw.replace(/\r$/, '');
		if (shownDef < 8 && /^\s*(function\s|export\s+function\s|\/\/\s*func)/.test(L)) {
			console.log(`line ${lineNo}: ${L.slice(0, 120)}`);
			shownDef++;
		}
		if (L.includes(token)) {
			totalTokenHits++;
			if (shownToken < maxHits) {
				console.log(`\n[line ${lineNo}] ${L.slice(0, 200)}`);
				shownToken++;
			}
		}
	}
	pos += n;
}
fs.closeSync(fd);
console.log(`\ntotal lines with "${token}": ${totalTokenHits}`);
