'use strict';
// Complete BehaviorDesigner surface needed by the recovered tree.
//
// A declaration-site identifier is "unresolved" when the tree does not declare a type with that
// name. Unresolved names are then classified by the namespaces the file imports: an unresolved
// name in a file that imports `BehaviorDesigner.*` is a BehaviorDesigner requirement (this is how
// the ORIGINAL C# resolved it - the import is what the game's own source used).
//
// Usage: node bd_surface2.js  ->  bd_surface2.json

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const TREE = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) { walk(p); continue; }
		if (e.name.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(TREE);

// names declared by the tree
const declared = new Set();
for (const f of files) {
	const m = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(?:class|struct|interface|enum)\s+([A-Za-z_]\w*)/m.exec(fs.readFileSync(f, 'utf8'));
	if (m) declared.add(m[1]);
}

const TYPE_DECL = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_]\w*)/;
const KB = new Set('bool byte sbyte char decimal double float int uint long ulong short ushort string object void var dynamic nint nuint'.split(' '));

const req = new Map(); // name -> { kinds: Map, examples: [], namespaces: Set, files: Set }
const note = (name, kind, ns, ex, file) => {
	if (!req.has(name)) req.set(name, { kinds: new Map(), examples: [], namespaces: new Set(), files: new Set() });
	const r = req.get(name);
	r.kinds.set(kind, (r.kinds.get(kind) || 0) + 1);
	if (r.namespaces) { for (const n of ns) r.namespaces.add(n); }
	if (r.files.size < 4) r.files.add(file);
	if (ex && r.examples.length < 3) r.examples.push(ex);
};

for (const f of files) {
	const src = fs.readFileSync(f, 'utf8');
	const rel = path.relative(TREE, f).replace(/\\/g, '/');
	const usings = new Set();
	for (const u of src.matchAll(/^using\s+(?:static\s+)?([\w.]+)\s*;/gm)) usings.add(u[1]);
	for (const u of src.matchAll(/^using\s+([\w.]+)\s*=/gm)) usings.add(u[1]);
	const ownNsM = /^\/\/ Namespace:[ \t]*(.*)$/m.exec(src);
	const ownNs = ownNsM ? ownNsM[1].trim() : '';

	const consider = (typeText, kind, ex) => {
		const t = typeText.replace(/<.*/, '').replace(/\[\]/g, '').replace(/\?/g, '').trim();
		if (!t || KB.has(t)) return;
		if (declared.has(t)) return;              // the tree declares it -> resolved internally
		note(t, kind, usings, ex, rel);
		for (const g of typeText.matchAll(/<\s*([A-Za-z_][\w.]*)/g)) consider(g[1], kind + ':genericArg', ex);
	};

	const lines = src.split(/\r?\n/);
	let sawDecl = false;
	for (const L of lines) {
		if (/^\s*\/\//.test(L) || !L.trim()) continue;
		const t = TYPE_DECL.exec(L);
		if (t && !sawDecl) {
			sawDecl = true;
			const colon = L.replace(/\/\/.*$/, '').indexOf(':');
			if (colon >= 0) for (const b of L.slice(colon + 1).split(',')) consider(b, 'base', L.trim());
			continue;
		}
		if (!sawDecl) continue;
		if (L.trim() === '{' || L.trim() === '}' || /^\s*\[/.test(L) && !L.includes(',')) { /* attributes handled below */ }
		const a = /^\s*\[([A-Za-z_]\w*)/.exec(L);
		if (a) consider(a[1], 'attribute', L.trim());
		const m = /^\s*(?:(?:public|private|protected|internal)\s+)?(?:static\s+|readonly\s+|const\s+|virtual\s+|override\s+|abstract\s+|new\s+|unsafe\s+|extern\s+|sealed\s+|partial\s+)*([A-Za-z_][\w.<>,\[\]\s]*?)\s+([A-Za-z_]\w*)\s*(\(?)/.exec(L);
		if (!m) continue;
		consider(m[1], m[3] ? 'returnType' : 'fieldType', L.trim());
		if (m[3]) {
			const open = L.indexOf('(', m[0].length - 1);
			let d = 0, close = -1;
			for (let i = open; i < L.length; i++) { if (L[i] === '(') d++; else if (L[i] === ')') { d--; if (!d) { close = i; break; } } }
			for (const p of (close > 0 ? L.slice(open + 1, close) : '').split(',')) {
				const pt = p.trim().replace(/^out\s+|^ref\s+|^params\s+/, '');
				if (pt) consider(pt, 'paramType', `${m[2]}(${pt})`);
			}
		}
	}
}

// classify: BD if any imported namespace is BehaviorDesigner.* (or the name is a known BD runtime name)
const bdNames = new Set();
const bdIsil = path.join(REPO, 'Decompiled', 'isil', 'IsilDump', 'BehaviorDesigner.Runtime');
(function walk(d) { for (const e of fs.readdirSync(d, { withFileTypes: true })) { const p = path.join(d, e.name); if (e.isDirectory()) walk(p); else if (p.endsWith('.txt')) { const m = /^Type:[ \t]*(.+)$/m.exec(fs.readFileSync(p, 'utf8')); if (m) bdNames.add(m[1].trim().split('.').pop().split('+').pop()); } } })(bdIsil);

const rows = [...req.entries()].map(([name, r]) => {
	const bd = [...r.namespaces].some((n) => n.startsWith('BehaviorDesigner')) || bdNames.has(name);
	return { name, bd, kinds: [...r.kinds.entries()].map(([k, c]) => `${k} x${c}`).join(', '), namespaces: [...r.namespaces].filter((n) => n.startsWith('BehaviorDesigner')), files: [...r.files], examples: r.examples };
}).filter((r) => r.bd).sort((a, b) => a.name.localeCompare(b.name));

fs.writeFileSync(path.join(__dirname, 'bd_surface2.json'), JSON.stringify({ count: rows.length, rows }, null, 2), 'utf8');
console.log(`resolved type names declared in the tree: ${declared.size}`);
console.log(`BehaviorDesigner types still required: ${rows.length}`);
for (const r of rows) console.log(`  ${r.name.padEnd(28)} [${r.kinds}]  ns: ${r.namespaces.join('|')}  e.g. ${r.examples[0] || ''}`);
