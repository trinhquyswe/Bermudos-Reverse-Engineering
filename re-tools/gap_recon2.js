'use strict';
// Recon 2: why are ~111 Scripts files untouched? Check the reconstructed tree's
// on-disk layout, duplicate simple names, and the ISIL dump naming.
const fs = require('fs');
const path = require('path');

const DECOMP = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\CSharp\\Assembly-CSharp';
const SCRIPTS = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\RippedProject\\ExportedProject\\Assets\\Scripts\\Assembly-CSharp';
const ISIL = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\isil\\IsilDump\\Assembly-CSharp';
const CSV = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\AssemblyCSharp_Classes.csv';

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

// --- Decompiled tree layout
const decomp = walk(DECOMP, '.cs');
console.log('DECOMP dirs:', JSON.stringify([...new Set(decomp.map((p) => path.relative(DECOMP, path.dirname(p))))].slice(0, 5)));
console.log('DECOMP files:', decomp.length);
const byBase = new Map();
for (const p of decomp) {
	const b = path.basename(p);
	byBase.set(b, (byBase.get(b) || 0) + 1);
}
const dups = [...byBase.entries()].filter(([, n]) => n > 1);
console.log('DECOMP duplicate basenames:', dups.length, dups.slice(0, 10).map(([b, n]) => `${b}x${n}`).join(', '));

// --- Scripts tree layout
const scripts = walk(SCRIPTS, '.cs');
console.log('SCRIPTS files:', scripts.length);
const scriptBase = new Map();
for (const p of scripts) scriptBase.set(path.basename(p), (scriptBase.get(path.basename(p)) || 0) + 1);
const sdups = [...scriptBase.entries()].filter(([, n]) => n > 1);
console.log('SCRIPTS duplicate basenames:', sdups.length);

// --- ISIL dump naming
const isil = walk(ISIL, '.txt');
console.log('ISIL files:', isil.length);
console.log('ISIL sample names:', isil.slice(0, 5).map((p) => path.basename(p)).join(' | '));
const isilBase = new Set(isil.map((p) => path.basename(p, '.txt')));
const nil = isil.filter((p) => path.basename(p).includes('<'));
console.log('ISIL names with <>:', nil.length, nil.slice(0, 5).map((p) => path.basename(p)).join(' | '));

// --- CSV type names
const csv = fs.readFileSync(CSV, 'utf8').split(/\r?\n/).filter(Boolean);
console.log('CSV lines:', csv.length, '\nCSV header:', csv[0]);
const rows = csv.slice(1);
const simpleCount = new Map();
for (const r of rows) {
	// last column-ish: derive simple name from the dump FullName column
	const cells = r.split(',');
	const full = cells[cells.length - 1] || '';
	const simple = full.split(/[.+]/).pop().replace(/`\d+$/, '');
	simpleCount.set(simple, (simpleCount.get(simple) || 0) + 1);
}
const csvDups = [...simpleCount.entries()].filter(([, n]) => n > 1);
console.log('CSV distinct simple names:', simpleCount.size, 'colliding:', csvDups.length);
console.log('top collisions:', csvDups.sort((a, b) => b[1] - a[1]).slice(0, 12).map(([b, n]) => `${b}x${n}`).join(', '));

// --- a concrete case: the BD UnityVector3 Lerp task
for (const base of ['Lerp', 'Play', 'GetPosition']) {
	const f = path.join(DECOMP, base + '.cs');
	if (!fs.existsSync(f)) { console.log(`\n[decomp] ${base}.cs: MISSING`); continue; }
	const src = fs.readFileSync(f, 'utf8');
	const decls = [...src.matchAll(/\b(?:public|internal)\s+(?:sealed\s+|abstract\s+|partial\s+)*(?:class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_]*)/g)].map((m) => m[1]);
	console.log(`\n[decomp] ${base}.cs : ${src.split(/\r?\n/).length} lines, decls=[${decls.join(', ')}]`);
	console.log('   isil file present for some candidate ->',
		[...isilBase].filter((n) => n.includes(base)).slice(0, 6).join(' | '));
}
