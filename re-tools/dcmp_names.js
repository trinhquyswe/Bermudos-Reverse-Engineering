'use strict';
// Build the call-resolution table used by the dcmp -> C# translator:
//   printed dcmp name  ->  { func, orig, params[], ret }
// where `orig` is the original `Namespace.Type::Method` from the wasm name section (null when the
// function is unnamed). Also records every function's parameter types (for argument hints).
//
// Output: dcmp_names.json
//
// Usage: node dcmp_names.js

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DCMP = path.join(REPO, 'Decompiled', 'build.dcmp');
const WASM = path.join(REPO, 'Decompiled', 'build.named.wasm');

// ---------------------------------------------------------------- wasm name section
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

// ---------------------------------------------------------------- dcmp definitions
const headRe = /^(export\s+)?(import\s+)?function\s+([A-Za-z_][\w.]*)\s*\(([^)]*)\)\s*(?::\s*([\w.]+))?\s*([{;])/;
const byPrinted = new Map();
const byFunc = new Map();
{
	const fd = fs.openSync(DCMP, 'r');
	const size = fs.statSync(DCMP).size;
	const CHUNK = 8 * 1024 * 1024;
	let pos = 0, carry = '';
	while (pos < size) {
		const n = Math.min(CHUNK, size - pos);
		const b = Buffer.alloc(n);
		fs.readSync(fd, b, 0, n, pos);
		const text = carry + b.toString('utf8');
		const lines = text.split('\n');
		carry = lines.pop();
		for (const raw of lines) {
			if (!/\/\/\s*func\d+\s*$/.test(raw)) continue;
			const h = headRe.exec(raw.replace(/\r$/, ''));
			if (!h) continue;
			const func = parseInt(/\/\/\s*func(\d+)\s*$/.exec(raw)[1], 10);
			const params = h[4].trim() ? h[4].split(',').map((s) => s.trim().split(':')[1] || 'int') : [];
			const rec = { func, orig: names.get(func) || null, params, ret: h[5] || null, import: !!h[2] };
			byFunc.set(func, rec);
			if (!byPrinted.has(h[3])) byPrinted.set(h[3], rec);
		}
		pos += n;
	}
	fs.closeSync(fd);
}

const out = { byPrinted: {}, byFunc: {} };
for (const [k, v] of byPrinted) out.byPrinted[k] = [v.func, v.orig, v.params, v.ret];
for (const [k, v] of byFunc) out.byFunc[k] = [v.orig, v.params, v.ret];
fs.writeFileSync(path.join(__dirname, 'dcmp_names.json'), JSON.stringify(out));

console.log(JSON.stringify({
	definedOrImported: byFunc.size,
	distinctPrintedNames: byPrinted.size,
	withOriginalName: [...byFunc.values()].filter((v) => v.orig).length,
}, null, 2));
const sample = [...byPrinted].slice(0, 5);
for (const [k, v] of sample) console.log(`  ${k}  -> func${v.func}  ${v.orig || '(unnamed)'}  (${v.params.length} params)`);
