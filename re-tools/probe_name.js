'use strict';
// Probe: which name-section entries (and which build.dcmp functions) mention a given method name?
// Usage: node probe_name.js InitializeAmmoAnimation [more...]

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const WASM = path.join(REPO, 'Decompiled', 'build.named.wasm');
const DCMP = path.join(REPO, 'Decompiled', 'build.dcmp');

function readLeb(buf, pos) {
	let result = 0, shift = 0, b;
	do { b = buf[pos++]; result |= (b & 0x7f) << shift; shift += 7; } while (b & 0x80);
	return [result >>> 0, pos];
}
function readName(buf, pos) { const [len, p] = readLeb(buf, pos); return [buf.toString('utf8', p, p + len), p + len]; }

const names = new Map();
{
	const buf = fs.readFileSync(WASM);
	let pos = 8;
	while (pos < buf.length) {
		const id = buf[pos++];
		const [size, p] = readLeb(buf, pos);
		if (id === 0) {
			const [sectName, np] = readName(buf, p);
			if (sectName === 'name') {
				let sp = np;
				const end = p + size;
				while (sp < end) {
					const subId = buf[sp++];
					const [subSize, sp2] = readLeb(buf, sp);
					if (subId === 1) {
						let fp = sp2;
						const [, after] = readLeb(buf, fp);
						fp = after;
						while (fp < sp2 + subSize) {
							const [idx, f2] = readLeb(buf, fp);
							const [nm, f3] = readName(buf, f2);
							names.set(idx, nm);
							fp = f3;
						}
					}
					sp = sp2 + subSize;
				}
			}
		}
		pos = p + size;
	}
}

for (const needle of process.argv.slice(2)) {
	console.log(`\n=== name-section entries containing "${needle}" ===`);
	let n = 0;
	for (const [idx, nm] of names) {
		if (nm.includes(needle)) { console.log(`  func${idx}  ${nm}`); n++; }
	}
	if (!n) console.log('  (none)');
}

// and the dcmp definitions whose printed name contains the needle
console.log(`\n=== build.dcmp function definitions containing the needle ===`);
{
	const fd = fs.openSync(DCMP, 'r');
	const size = fs.statSync(DCMP).size;
	const CHUNK = 8 * 1024 * 1024;
	const re = /^(?:export\s+)?(import\s+)?function\s+([A-Za-z_][\w.]*)\s*\(([^)]*)\)\s*(?::\s*([\w.]+))?[^{;]*[{;][^\n]*?\/\/\s*func(\d+)\s*$/;
	let pos = 0, carry = '', carryOff = 0;
	while (pos < size) {
		const n2 = Math.min(CHUNK, size - pos);
		const b = Buffer.alloc(n2);
		fs.readSync(fd, b, 0, n2, pos);
		const full = carry + b.toString('utf8');
		let lineStart = 0;
		for (let i = 0; i <= full.length; i++) {
			if (i === full.length || full.charCodeAt(i) === 10) {
				const line = full.slice(lineStart, i);
				const m = re.exec(line);
				if (m && process.argv.slice(2).some((x) => m[2].includes(x.replace(/::/g, '_').replace(/\./g, '_')))) console.log(`  func${m[5]}  ${m[2]}(${m[3]})${m[4] ? ':' + m[4] : ''}`);
				lineStart = i + 1;
			}
		}
		carryOff += lineStart;
		carry = full.slice(lineStart);
		pos += n2;
	}
	fs.closeSync(fd);
}
