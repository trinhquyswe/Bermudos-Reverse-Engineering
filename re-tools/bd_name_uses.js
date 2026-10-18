'use strict';
// Every non-comment occurrence of the BD-base names in the tree files that bind them through a
// `using`/alias, so the base can be bound correctly without breaking other uses of the same name.

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const TREE = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const NAMES = new Set(process.argv.slice(2).length ? process.argv.slice(2) : ['Action', 'Conditional', 'Composite', 'Decorator', 'ParentTask', 'Behavior', 'BehaviorReference', 'ExternalBehavior', 'ObjectDrawerAttribute', 'SharedVariable']);

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (p.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(TREE);

for (const f of files) {
	const lines = fs.readFileSync(f, 'utf8').split(/\r?\n/);
	const hits = [];
	let aliased = [];
	for (let i = 0; i < lines.length; i++) {
		const L = lines[i];
		if (/^\s*\/\//.test(L)) continue;
		if (/^using\s+[\w.]+\s*=/.test(L)) aliased.push(L.trim());
		for (const m of L.matchAll(/\b([A-Za-z_]\w*)\b/g)) {
			if (NAMES.has(m[1])) hits.push(`line ${i + 1}: ${L.trim()}`);
		}
	}
	if (aliased.length || hits.length > 0) {
		const interesting = hits.filter((h) => !/^\s*(?:public|internal|private|protected)?\s*(?:sealed\s+|abstract\s+|static\s+|partial\s+)*class\s/.test(h.replace(/^line \d+: /, '')));
		if (aliased.length || interesting.length) {
			console.log(`\n=== ${path.relative(TREE, f).replace(/\\/g, '/')}`);
			for (const a of aliased) console.log(`    alias: ${a}`);
			for (const h of hits) console.log(`    ${h}`);
		}
	}
}
