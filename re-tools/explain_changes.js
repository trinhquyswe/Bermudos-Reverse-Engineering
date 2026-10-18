'use strict';
// Explain exactly which tree files changed: dummies fixed, nested blocks added, etc.
const fs = require('fs');
const path = require('path');
const { execSync } = require('child_process');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const TREE = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const PREFIX = 'RippedProject/ExportedProject/Assets/Scripts/Assembly-CSharp/';
const A = 'C:\\Users\\usopp\\AppData\\Local\\Temp\\opencode\\re-tools\\stage-all';
const B = 'C:\\Users\\usopp\\AppData\\Local\\Temp\\opencode\\re-tools\\stage-all2';

function walk(dir) {
	const out = [];
	(function rec(d) {
		for (const e of fs.readdirSync(d, { withFileTypes: true })) {
			const p = path.join(d, e.name);
			if (e.isDirectory()) rec(p);
			else if (e.name.toLowerCase().endsWith('.cs')) out.push(path.relative(dir, p).replace(/\\/g, '/'));
		}
	})(dir);
	return out;
}
const norm = (s) => s.replace(/\r\n/g, '\n');

const changed = execSync('git status --porcelain=v1', { cwd: REPO, encoding: 'utf8' })
	.split(/\r?\n/).filter(Boolean)
	.map((l) => l.slice(3).trim())
	.filter((f) => f.endsWith('.cs') && f.startsWith(PREFIX))
	.map((f) => f.slice(PREFIX.length));
if (!changed.length) throw new Error('no changed .cs under the tree');

const stageDiff = walk(A).filter((f) => norm(fs.readFileSync(path.join(A, f), 'utf8')) !== norm(fs.readFileSync(path.join(B, f), 'utf8')));

// rebuild the dummy list from git instead: a file whose HEAD version was a dummy
const dummy = [];
for (const f of changed) {
	let head = '';
	try { head = execSync(`git show HEAD:"${PREFIX}${f}"`, { cwd: REPO, encoding: 'utf8', maxBuffer: 64 * 1024 * 1024 }); } catch { }
	if (head.includes('Dummy class. This could have happened')) dummy.push(f);
}

const setDiff = new Set(stageDiff);
const setDummy = new Set(dummy);
const extras = changed.filter((f) => !setDiff.has(f) && !setDummy.has(f));

console.log('git changed:', changed.length, '| stage-diff:', stageDiff.length, '| dummies:', dummy.length, '| extras:', extras.length);
for (const f of extras) {
	const staged = fs.readFileSync(path.join(B, f), 'utf8');
	console.log(`  extra: ${f}  (nested block: ${/nested types recovered from wasm/.test(staged) ? 'yes' : 'NO'})`);
}

let stillOld = 0;
for (const f of walk(TREE)) if (/Additional recovered functions/.test(fs.readFileSync(path.join(TREE, f), 'utf8'))) stillOld++;
console.log('files still containing the old pseudo-code marker:', stillOld);

// removal-only files: had an old block in HEAD, have no nested block now
let removalOnly = 0;
for (const f of walk(TREE)) {
	if (!/nested types recovered from wasm/.test(fs.readFileSync(path.join(TREE, f), 'utf8'))) continue;
}
console.log('files with a nested block:', walk(TREE).filter((f) => /nested types recovered from wasm/.test(fs.readFileSync(path.join(TREE, f), 'utf8'))).length);
