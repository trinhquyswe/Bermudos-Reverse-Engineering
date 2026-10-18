'use strict';
// Find every Assembly-CSharp type in dump.cs (TypeDefIndex in the ASCRANGE) that has no
// counterpart file in the Scripts tree, matching on (namespace, type name) - so types that
// merely share a simple name with another type are not hidden.
const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const TREE = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const ASCRANGE = [5534, 6341];

// ---------- dump.cs ----------
const lines = fs.readFileSync(path.join(REPO, 'Dump', 'dump.cs'), 'utf8').split(/\r?\n/);
const declRe = /^(\s*)((?:public|internal|private|protected)[\w\s]*?\b(?:class|struct|interface|enum)\s+([A-Za-z0-9_]+)(?=[\s:<])[^{]*?)\s*\/\/ TypeDefIndex:\s*(\d+)\s*$/;
const dumpTypes = new Map(); // ns\0name -> idx
let lastNs = '';
for (let i = 0; i < lines.length; i++) {
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/.exec(lines[i]);
	if (nsM) { lastNs = nsM[1].trim(); continue; }
	const m = lines[i].match(declRe);
	if (!m) continue;
	const idx = parseInt(m[4], 10);
	if (idx < ASCRANGE[0] || idx >= ASCRANGE[1]) continue;
	dumpTypes.set(`${lastNs}\u0000${m[3]}`, { idx, ns: lastNs, name: m[3], line: i + 1 });
}

// ---------- tree ----------
const TYPE_DECL = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_]*)/;
const treeTypes = new Map(); // ns\0name -> [relpaths]
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) { walk(p); continue; }
		if (!e.name.toLowerCase().endsWith('.cs')) continue;
		const src = fs.readFileSync(p, 'utf8');
		const nsM = /^\/\/ Namespace:[ \t]*(.*)$/m.exec(src);
		let name = null;
		for (const l of src.split(/\r?\n/)) { const t = TYPE_DECL.exec(l); if (t) { name = t[2]; break; } }
		if (!name) continue;
		const key = `${nsM ? nsM[1].trim() : ''}\u0000${name}`;
		if (!treeTypes.has(key)) treeTypes.set(key, []);
		treeTypes.get(key).push(path.relative(TREE, p).replace(/\\/g, '/'));
	}
})(TREE);

const missing = [...dumpTypes.entries()].filter(([k]) => !treeTypes.has(k));
const extra = [...treeTypes.keys()].filter((k) => !dumpTypes.has(k));

console.log('dump ASCRANGE types:', dumpTypes.size, '| tree (ns,name) keys:', treeTypes.size);
console.log('\nMissing from the tree:', missing.length);
for (const [k, v] of missing.sort((a, b) => a[1].idx - b[1].idx)) {
	const sameName = dumpTypes.get(k);
	console.log(`  idx ${v.idx}  ns='${v.ns}'  ${v.name}  (dump.cs line ${v.line})`);
}
console.log('\nTree keys with no dump type:', extra.length);
for (const k of extra) console.log(`  ${k.split('\u0000').join(' :: ')} -> ${treeTypes.get(k).join(', ')}`);

// duplicate (ns,name) keys in the tree (same type in two files)
console.log('\nTree keys in more than one file:');
for (const [k, v] of treeTypes) if (v.length > 1) console.log(`  ${k.split('\u0000').join(' :: ')} -> ${v.join(', ')}`);
