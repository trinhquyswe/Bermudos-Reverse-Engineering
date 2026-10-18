'use strict';
// Recount the `Call` annotations in the current tree, so the report's call-target table reflects the
// finished tree (step 7 added files, step 8's fix did not change bodies).

const fs = require('fs');
const path = require('path');

const TREE = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\RippedProject\\ExportedProject\\Assets\\Scripts\\Assembly-CSharp';
const ANY = /^\s*\/\/\s+0x[0-9A-Fa-f]+\s+Call\s+(\d+)\s*(?:;.*)?$/;
const NAMED = /^\s*\/\/\s+0x[0-9A-Fa-f]+\s+Call\s+\d+\s+;\s*(.+?)\s*$/;
const RAW = /^\s*\/\/\s+0x[0-9A-Fa-f]+\s+Call\s+(\d+)\s*$/;

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (p.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(TREE);

let total = 0, named = 0, raw = 0;
const distinctNamed = new Set();
const rawTargets = new Map();
for (const f of files) {
	for (const L of fs.readFileSync(f, 'utf8').split(/\r?\n/)) {
		if (!ANY.test(L)) continue;
		total++;
		const n = NAMED.exec(L);
		if (n) { named++; distinctNamed.add(n[1]); continue; }
		const r = RAW.exec(L);
		if (r) { raw++; const i = parseInt(r[1], 10); rawTargets.set(i, (rawTargets.get(i) || 0) + 1); }
	}
}
console.log(JSON.stringify({
	files: files.length,
	callSites: total,
	annotatedWithName: named,
	distinctNamedFunctions: distinctNamed.size,
	rawIndex: raw,
	distinctRawTargets: rawTargets.size,
}, null, 2));
