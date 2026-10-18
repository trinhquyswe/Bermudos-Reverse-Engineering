'use strict';
// The repo header convention is: `using ...` lines, a blank line, then the `// Namespace: ...` comment.
// fix_bd_bases.js ate that blank line in the files it rewrote; restore it.
//
// Usage: node fix_header_blank.js [--apply] [dir]

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const args = process.argv.slice(2);
const APPLY = args.includes('--apply');
const TREE = args.filter((a) => !a.startsWith('--'))[0] || path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (p.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(TREE);

let fixed = 0;
for (const f of files) {
	const src = fs.readFileSync(f, 'utf8');
	const eol = src.includes('\r\n') ? '\r\n' : '\n';
	const lines = src.split(/\r?\n/);
	let touched = false;
	for (let i = 1; i < lines.length; i++) {
		if (/^\s*\/\/ Namespace:/.test(lines[i]) && /^using\s/.test(lines[i - 1])) {
			lines.splice(i, 0, '');
			touched = true;
			i++;
		}
	}
	if (!touched) continue;
	fixed++;
	if (APPLY) fs.writeFileSync(f, lines.join(eol), 'utf8');
}
console.log(`${APPLY ? 'APPLIED' : 'REPORT'}: ${fixed} file(s) ${APPLY ? '' : 'would be '}given the blank line before "// Namespace:" (of ${files.length} scanned)`);
