'use strict';
// 1) Is the removed leftover in BossManager.cs duplicated by declared members?
// 2) Are there Assembly-CSharp types in the metadata (CSV) with no tree file?
const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const TREE = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');

// --- 1
const bm = fs.readFileSync(path.join(TREE, 'BossManager.cs'), 'utf8');
console.log('--- BossManager.cs: recovered member bodies mentioning the leftover calls ---');
for (const needle of ['Material_SetInt', 'ColorUtility', 'SetFloat', 'f_hpa']) {
	const n = (bm.match(new RegExp(needle, 'g')) || []).length;
	console.log(`  ${needle}: ${n}`);
}
console.log('  declared lambdas:', (bm.match(/private void Start_b__5_\d/g) || []).length);

// --- 2
const csv = fs.readFileSync(path.join(REPO, 'AssemblyCSharp_Classes.csv'), 'utf8').split(/\r?\n/).filter(Boolean).slice(1);
const csvNames = csv.map((l) => (/^"(\d+)","(.*)"$/.exec(l) || [])[2]).filter(Boolean);

const treeNames = new Set();
for (const f of (function walk(d) {
	const out = [];
	(function rec(x) {
		for (const e of fs.readdirSync(x, { withFileTypes: true })) {
			const p = path.join(x, e.name);
			if (e.isDirectory()) rec(p);
			else if (e.name.toLowerCase().endsWith('.cs')) out.push(p);
		}
	})(d);
	return out;
})(TREE)) {
	const src = fs.readFileSync(f, 'utf8');
	const m = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(?:class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_]*)/m.exec(src);
	if (m) treeNames.add(m[1]);
}

const missing = csvNames.filter((n) => !treeNames.has(n));
console.log('\nCSV types:', csvNames.length, '| tree type names:', treeNames.size, '| CSV types with no tree type of that name:', missing.length);
console.log(missing.slice(0, 40).join('\n'));
