'use strict';
// Compare two trees of .cs files: <a> (staged regeneration) vs <b> (current Scripts tree).
// Usage: node diff_stage.js <stageDir> <scriptsDir> [maxFiles]
const fs = require('fs');
const path = require('path');

const A = process.argv[2];
const B = process.argv[3];
const MAX = parseInt(process.argv[4] || '8', 10);

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

const a = new Set(walk(A));
const b = new Set(walk(B));
const onlyA = [...a].filter((r) => !b.has(r));
const onlyB = [...b].filter((r) => !a.has(r));
const both = [...a].filter((r) => b.has(r));

const norm = (s) => s.replace(/\r\n/g, '\n');
const same = [];
const diff = [];
for (const r of both) {
	const sa = norm(fs.readFileSync(path.join(A, r), 'utf8'));
	const sb = norm(fs.readFileSync(path.join(B, r), 'utf8'));
	(sa === sb ? same : diff).push(r);
}

console.log(JSON.stringify({
	stagedFiles: a.size, treeFiles: b.size,
	compared: both.length, identical: same.length, differing: diff.length,
	onlyStaged: onlyA.length, onlyInTree: onlyB.length,
}, null, 2));

if (onlyA.length) { console.log('--- only staged (no tree counterpart) ---'); console.log(onlyA.slice(0, 20).join('\n')); }
if (onlyB.length) { console.log('--- only in tree (not regenerated) ---'); console.log(onlyB.slice(0, 20).join('\n')); }

console.log(`--- first ${MAX} differing files, first differing hunk each ---`);
for (const r of diff.slice(0, MAX)) {
	const la = norm(fs.readFileSync(path.join(A, r), 'utf8')).split('\n');
	const lb = norm(fs.readFileSync(path.join(B, r), 'utf8')).split('\n');
	let i = 0;
	while (i < la.length && i < lb.length && la[i] === lb[i]) i++;
	console.log(`\n### ${r}  (staged ${la.length}L / tree ${lb.length}L, first diff at line ${i + 1})`);
	for (let k = Math.max(0, i - 2); k < Math.min(i + 4, Math.max(la.length, lb.length)); k++) {
		const inA = la[k] === undefined ? '' : la[k];
		const inB = lb[k] === undefined ? '' : lb[k];
		const mark = inA === inB ? ' ' : '!';
		if (inA === inB) console.log(`${mark}   ${inA}`);
		else console.log(`${mark} A ${inA}\n${mark} B ${inB}`);
	}
}
