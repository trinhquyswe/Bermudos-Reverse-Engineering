'use strict';
// Classify why staged (regenerated) files differ from the current Scripts tree.
const fs = require('fs');
const path = require('path');

const A = 'C:\\Users\\usopp\\AppData\\Local\\Temp\\opencode\\re-tools\\stage-all';
const B = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\RippedProject\\ExportedProject\\Assets\\Scripts\\Assembly-CSharp';
const norm = (s) => s.replace(/\r\n/g, '\n');

function walk(dir) {
	const out = [];
	(function rec(d) {
		for (const e of fs.readdirSync(d, { withFileTypes: true })) {
			const p = path.join(d, e.name);
			if (e.isDirectory()) rec(p);
			else if (e.name.toLowerCase().endsWith('.cs')) out.push(path.relative(dir, p));
		}
	})(dir);
	return out;
}

const buckets = { dummy: [], leftover: [], bothDummyAndLeftover: [], other: [] };
for (const r of walk(A)) {
	const sa = norm(fs.readFileSync(path.join(A, r), 'utf8'));
	const sb = norm(fs.readFileSync(path.join(B, r), 'utf8'));
	if (sa === sb) continue;
	const isDummy = sb.includes('Dummy class. This could have happened');
	const hasLeftover = sb.includes('Additional recovered functions');
	if (isDummy && hasLeftover) buckets.bothDummyAndLeftover.push(r);
	else if (isDummy) buckets.dummy.push(r);
	else if (hasLeftover) buckets.leftover.push(r);
	else buckets.other.push(r);
}

for (const k of Object.keys(buckets)) console.log(`${k}: ${buckets[k].length}`);
console.log('\n--- other (unexpected) ---');
console.log(buckets.other.join('\n'));
console.log('\n--- leftover block files ---');
console.log(buckets.leftover.join('\n'));
