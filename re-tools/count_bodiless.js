'use strict';
// Count bodiless member declarations (abstract / interface members, printed by dump.cs as
// `...;`) inside the Assembly-CSharp TypeDefIndex range, and how many types they affect.
const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const ASCRANGE = [5534, 6341];
const body = /^\s*(?:public|private|protected|internal)\b[^;{]*\([^;{]*\)\s*;\s*$/;

const lines = fs.readFileSync(path.join(REPO, 'Dump', 'dump.cs'), 'utf8').split(/\r?\n/);
const declRe = /^(\s*)((?:public|internal|private|protected)[\w\s]*?\b(?:class|struct|interface|enum)\s+([A-Za-z0-9_]+)(?=[\s:<])[^{]*?)\s*\/\/ TypeDefIndex:\s*(\d+)\s*$/;

const out = [];
let i = 0;
let lastNs = '';
while (i < lines.length) {
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/.exec(lines[i]);
	if (nsM) { lastNs = nsM[1].trim(); i++; continue; }
	const m = lines[i].match(declRe);
	if (!m) { i++; continue; }
	const idx = parseInt(m[4], 10);
	const name = m[3];
	i++;
	while (i < lines.length && lines[i].trim() !== '{') i++;
	i++;
	const decls = [];
	for (; i < lines.length; i++) {
		const L = lines[i];
		if (L === '}') break;
		const t = L.trim();
		if (!t || t.startsWith('//') || t.startsWith('[') || t === '{' || t === '}') continue;
		if (body.test(L)) decls.push(t);
	}
	i++;
	if (idx < ASCRANGE[0] || idx >= ASCRANGE[1] || !decls.length) continue;
	out.push({ ns: lastNs, name, idx, decls });
}

const total = out.reduce((a, x) => a + x.decls.length, 0);
console.log('Assembly-CSharp types with bodiless members:', out.length, '| total bodiless members:', total);
console.log('\ntop 20 by count:');
for (const o of out.sort((a, b) => b.decls.length - a.decls.length).slice(0, 20))
	console.log(`  ${String(o.decls.length).padStart(3)}  ${o.ns ? o.ns + '.' : ''}${o.name}  (idx ${o.idx})`);
console.log('\nsample declarations:');
for (const o of out.slice(0, 6)) for (const d of o.decls.slice(0, 3)) console.log(`  ${o.ns ? o.ns + '.' : ''}${o.name}: ${d}`);
