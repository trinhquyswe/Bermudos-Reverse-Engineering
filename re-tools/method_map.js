'use strict';
// Map every reconstructed method in the in-scope Assembly-CSharp files to the wasm function whose
// body Cpp2IL printed for it, by name (the `name` custom section of build.named.wasm names the
// functions `Namespace.Type::Method`).
//
// Usage: node method_map.js [--dump <funcN,funcN>]

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DIR = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const WASM = path.join(REPO, 'Decompiled', 'build.named.wasm');

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

// name (as printed by the name section) -> funcN, plus a normalised key (arity/`multiple_` stripped)
const byKey = new Map();
for (const [idx, nm] of names) {
	const m = /^(?:multiple_\d+_)?(.*)$/.exec(nm);
	const key = m[1];
	if (!byKey.has(key)) byKey.set(key, []);
	byKey.get(key).push({ idx, name: nm, merged: nm.startsWith('multiple_') });
}

const files = fs.readdirSync(DIR).filter((f) => f.toLowerCase().endsWith('.cs'));
const methods = [];
const MARKER = '---- wasm disassembly (Cpp2IL ISIL';
const SIG_RE = /^\t(?:(?:public|private|protected|internal|static|virtual|override|sealed|abstract|new|unsafe|extern|async|partial)\s+)*([A-Za-z_][\w.<>\[\],? ]*)\s+([A-Za-z_][\w]*)\s*\(([^)]*)\)\s*$/;

for (const f of files) {
	const src = fs.readFileSync(path.join(DIR, f), 'utf8');
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/m.exec(src);
	const ns = nsM ? nsM[1].trim() : '';
	const decl = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_]\w*)/m.exec(src);
	const type = decl ? decl[2] : path.basename(f, '.cs');
	const full = ns ? `${ns}.${type}` : type;
	const lines = src.split(/\r?\n/);
	for (let i = 0; i < lines.length; i++) {
		if (lines[i].includes(MARKER)) {
			// the signature is the nearest preceding line that looks like one
			let sig = null, sigLine = -1;
			for (let j = i - 1; j >= 0 && j > i - 8; j--) {
				const m = SIG_RE.exec(lines[j]);
				if (m) { sig = { ret: m[1].trim(), name: m[2], params: m[3].trim() }; sigLine = j; break; }
			}
			let ops = 0;
			for (let j = i + 1; j < lines.length && /^\t\t\/\//.test(lines[j]); j++) if (/0x[0-9a-fA-F]+ /.test(lines[j])) ops++;
			if (sig) {
				const arity = sig.params === '' ? 0 : sig.params.split(',').length;
				methods.push({ file: f, type: full, method: sig.name, arity, sig, ops });
			}
			break; // one method per file with bodies is enough for the pilot; count all below
		}
	}
}

const matched = [];
const unmatched = [];
for (const m of methods) {
	const key = `${m.type}::${m.method}`;
	const hit = byKey.get(key);
	if (hit && hit.length) matched.push({ ...m, func: hit[0] });
	else unmatched.push(m);
}

console.log(JSON.stringify({
	wasmNamedFunctions: names.size,
	distinctNameKeys: byKey.size,
	filesScanned: files.length,
	sampleMethods: methods.length,
	matched: matched.length,
	unmatched: unmatched.length,
}, null, 2));
console.log('\n--- first 6 matches ---');
for (const m of matched.slice(0, 6)) console.log(`  ${m.type}::${m.method}/${m.arity}  ->  func${m.func.idx}  (${m.func.name})  [${m.ops} ops in the tree]`);
console.log('\n--- unmatched (first 6) ---');
for (const m of unmatched.slice(0, 6)) console.log(`  ${m.type}::${m.method}/${m.arity}`);
