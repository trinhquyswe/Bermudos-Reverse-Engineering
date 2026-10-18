'use strict';
// Step 6: annotate every `Call N` operand in the embedded method bodies with the
// function name recovered in the wasm "name" custom section (build.named.wasm).
//
//   //   0x3ACE Call 94848            ->  //   0x3ACE Call 94848   ; <name>
//
// Only resolved indices are annotated; unresolved ones are left as raw indices.
// Nothing is inferred - the names are the recovered name-section entries.
//
// Usage: node annotate_calls.js <Assembly-CSharp dir> [--dry]

const fs = require('fs');
const path = require('path');

const DIR = process.argv[2];
const DRY = process.argv.includes('--dry');
const WASM = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\build.named.wasm';

function readLeb(buf, pos) {
	let result = 0, shift = 0, b;
	do { b = buf[pos++]; result |= (b & 0x7f) << shift; shift += 7; } while (b & 0x80);
	return [result >>> 0, pos];
}
function readName(buf, pos) { const [len, p] = readLeb(buf, pos); return [buf.toString('utf8', p, p + len), p + len]; }

const names = new Map();
(function parseWasmNames() {
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
})();

const CALL_RE = /^(\s*\/\/\s+0x[0-9a-fA-F]+\s+Call\s+)(\d+)\s*$/;

const stats = { files: 0, filesChanged: 0, annotated: 0, unresolved: 0 };
const byName = new Map();

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (e.name.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(DIR);

for (const f of files) {
	const src = fs.readFileSync(f, 'utf8');
	if (!src.includes('wasm disassembly (Cpp2IL ISIL')) continue;
	stats.files++;
	const eol = src.includes('\r\n') ? '\r\n' : '\n';
	let changed = false;
	const out = src.split(/\r?\n/).map((line) => {
		const m = CALL_RE.exec(line);
		if (!m) return line;
		const idx = Number(m[2]);
		const nm = names.get(idx);
		if (!nm) { stats.unresolved++; return line; }
		stats.annotated++;
		byName.set(nm, (byName.get(nm) || 0) + 1);
		changed = true;
		return `${m[1]}${m[2]}   ; ${nm}`;
	});
	if (changed) {
		stats.filesChanged++;
		if (!DRY) fs.writeFileSync(f, out.join(eol), 'utf8');
	}
}

console.log(JSON.stringify({
	filesWithBodies: stats.files, filesChanged: stats.filesChanged,
	callSitesAnnotated: stats.annotated, callSitesLeftRaw: stats.unresolved,
	distinctNamesUsed: byName.size,
}, null, 2));
console.log('--- top 20 resolved targets ---');
console.log([...byName.entries()].sort((a, b) => b[1] - a[1]).slice(0, 20)
	.map(([n, c]) => `${String(c).padStart(6)}x  ${n}`).join('\n'));
