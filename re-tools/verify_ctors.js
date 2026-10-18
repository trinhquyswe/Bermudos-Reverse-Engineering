'use strict';
// Sanity check: every constructor-like member must be named exactly like its enclosing type.
const fs = require('fs');
const path = require('path');
const DIR = process.argv[2];

const TYPE_DECL = /^(\s*)(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_]*)/;
const CTOR_LIKE = /^(\s*)(?:(?:public|private|protected|internal)\s+)?(?:static\s+)?([A-Za-z_][A-Za-z0-9_]*)\s*\(/;

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (e.name.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(DIR);

let checked = 0, bad = 0;
for (const f of files) {
	const src = fs.readFileSync(f, 'utf8');
	if (!/Reconstructed from IL2CPP metadata/.test(src.slice(0, 600))) continue;
	const stack = []; let pending = null, depth = 0;
	for (const raw of src.split(/\r?\n/)) {
		if (raw.trimStart().startsWith('//')) continue;
		const cur = stack.length ? stack[stack.length - 1] : null;
		const tm = TYPE_DECL.exec(raw);
		if (tm) pending = { name: tm[3], kind: tm[2] };
		if (cur && cur.kind !== 'enum') {
			const cm = CTOR_LIKE.exec(raw);
			// exclude anything with a return type (i.e. a method) - ctor has no type before the name
			if (cm && !/\b(class|struct|interface|enum|new|return|if|for|while|switch|catch)\b/.test(cm[2])) {
				checked++;
				if (cm[2] !== cur.name) {
					bad++;
					console.log(`${path.relative(DIR, f)}: "${cm[2]}" != enclosing "${cur.name}"  |  ${raw.trim()}`);
				}
			}
		}
		const opens = (raw.match(/\{/g) || []).length, closes = (raw.match(/\}/g) || []).length;
		if (pending && opens > 0) { stack.push({ ...pending, depth }); pending = null; }
		depth += opens - closes;
		while (stack.length && depth <= stack[stack.length - 1].depth) stack.pop();
	}
}
console.log(`checked ${checked} constructor-like members; mismatches: ${bad}`);
