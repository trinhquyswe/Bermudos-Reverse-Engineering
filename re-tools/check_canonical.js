'use strict';
// Compare the canonical namespace-derived path of every Assembly-CSharp dump type with the
// current tree layout: are the file *sets* identical (i.e. is this purely a content-placement
// problem)?
const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const TREE = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const ASCRANGE = [5534, 6341];

const lines = fs.readFileSync(path.join(REPO, 'Dump', 'dump.cs'), 'utf8').split(/\r?\n/);
const declRe = /^(\s*)((?:public|internal|private|protected)[\w\s]*?\b(?:class|struct|interface|enum)\s+([A-Za-z0-9_]+)(?=[\s:<])[^{]*?)\s*\/\/ TypeDefIndex:\s*(\d+)\s*$/;
const dump = [];
let lastNs = '';
for (let i = 0; i < lines.length; i++) {
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/.exec(lines[i]);
	if (nsM) { lastNs = nsM[1].trim(); continue; }
	const m = lines[i].match(declRe);
	if (!m) continue;
	const idx = parseInt(m[4], 10);
	if (idx < ASCRANGE[0] || idx >= ASCRANGE[1]) continue;
	dump.push({ idx, ns: lastNs, name: m[3] });
}

const canonical = new Map(); // path -> dump type
for (const t of dump) {
	const dir = t.ns ? t.ns.replace(/\./g, '/') : '';
	const rel = (dir ? dir + '/' : '') + t.name + '.cs';
	canonical.set(rel, t);
}

const treeFiles = new Set();
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) { walk(p); continue; }
		if (e.name.toLowerCase().endsWith('.cs')) treeFiles.add(path.relative(TREE, p).replace(/\\/g, '/'));
	}
})(TREE);

const canonOnly = [...canonical.keys()].filter((k) => !treeFiles.has(k));
const treeOnly = [...treeFiles].filter((k) => !canonical.has(k));
console.log('dump types:', dump.length, '| canonical paths:', canonical.size, '| tree files:', treeFiles.size);
console.log('canonical paths with no tree file:', canonOnly.length);
for (const c of canonOnly) console.log('  + ' + c + '   <- idx ' + canonical.get(c).idx + ' ' + canonical.get(c).ns + '.' + canonical.get(c).name);
console.log('tree files with no canonical type:', treeOnly.length);
for (const t of treeOnly) console.log('  - ' + t);
