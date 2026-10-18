'use strict';
// Classify the 111 Scripts files that carry no disassembly header:
//  (a) AssetRipper "Dummy class" placeholders  -> the type was never reconstructed
//  (b) real declarations with no methods (enums / interfaces) -> fine as-is
// and for (a) report whether the ISIL dump has a namespaced file for the type.
const fs = require('fs');
const path = require('path');

const SCRIPTS = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\RippedProject\\ExportedProject\\Assets\\Scripts\\Assembly-CSharp';
const DECOMP = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\CSharp\\Assembly-CSharp';
const ISIL = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\isil\\IsilDump\\Assembly-CSharp';
const HEADER = 'wasm disassembly (Cpp2IL ISIL';

function walk(dir, ext) {
	const out = [];
	(function rec(d) {
		for (const e of fs.readdirSync(d, { withFileTypes: true })) {
			const p = path.join(d, e.name);
			if (e.isDirectory()) rec(p);
			else if (!ext || e.name.toLowerCase().endsWith(ext)) out.push(p);
		}
	})(dir);
	return out;
}

const scripts = walk(SCRIPTS, '.cs');
const isil = new Map(); // relative path without ext -> absolute
for (const p of walk(ISIL, '.txt')) isil.set(path.relative(ISIL, p).replace(/\.txt$/, '').replace(/\\/g, '/'), p);

// namespace of a Scripts file
function namespaceOf(src) {
	const m = /^\s*namespace\s+([A-Za-z_][\w.]*)/m.exec(src);
	return m ? m[1] : '';
}
function typeNameOf(src) {
	const m = /^\s*(?:public|internal)?\s*(?:sealed\s+|abstract\s+|static\s+|partial\s+)*(?:class|struct|interface|enum)\s+([A-Za-z_]\w*)/m.exec(src);
	return m ? m[1] : path.basename('');
}

const noHeader = scripts.filter((p) => !fs.readFileSync(p, 'utf8').includes(HEADER));

const dummies = [];
const declsOnly = [];
const other = [];
for (const p of noHeader) {
	const src = fs.readFileSync(p, 'utf8');
	if (src.includes('Dummy class. This could have happened')) {
		const rel = path.relative(SCRIPTS, p).replace(/\\/g, '/');
		const ns = namespaceOf(src);
		const isilKey = ns ? ns.replace(/\./g, '/') + '/' + path.basename(rel, '.cs') : rel.replace(/\.cs$/, '');
		dummies.push({ rel, ns, isil: isil.has(isilKey), isilKey });
	} else {
		const hasMembers = /=>|;/.test(src.split('\n').slice(0, 200).join('\n')) && /\b(enum|interface|struct)\b/.test(src);
		(hasMembers ? declsOnly : other).push(path.relative(SCRIPTS, p));
	}
}

console.log(JSON.stringify({
	noHeader: noHeader.length,
	assetRipperDummies: dummies.length,
	declarationsOnly: declsOnly.length,
	unclassified: other.length,
	dummiesWithIsil: dummies.filter((d) => d.isil).length,
	dummiesWithoutIsil: dummies.filter((d) => !d.isil),
}, null, 2));

console.log('\n--- declarations-only (no methods expected) ---');
console.log(declsOnly.sort().join('\n'));
console.log('\n--- unclassified ---');
console.log(other.sort().join('\n'));
console.log('\n--- AssetRipper dummies WITH a namespaced ISIL file (recoverable) ---');
for (const d of dummies.filter((x) => x.isil).sort((a, b) => a.rel.localeCompare(b.rel)))
	console.log(`  ${d.rel}   ->  isil:${d.isilKey}.txt`);
console.log('\n--- AssetRipper dummies WITHOUT an ISIL file ---');
for (const d of dummies.filter((x) => !x.isil).sort((a, b) => a.rel.localeCompare(b.rel)))
	console.log(`  ${d.rel}   (ns='${d.ns}', tried isil:${d.isilKey}.txt)`);
