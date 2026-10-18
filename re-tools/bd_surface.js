'use strict';
// Inventory the BehaviorDesigner API surface that the recovered Assembly-CSharp code needs.
//
// Sources (all evidence, no guessing):
//   - the BehaviorDesigner runtime *type names* come from the ISIL dump folder of that assembly
//   - the tree's own declarations (bases, field types, parameter and return types, attributes)
//   - the annotated `Call N ; <name>` lines inside the recovered disassembly, which name the
//     BehaviorDesigner methods the game code actually calls
//
// Output drives the authored replacement runtime (types + members that must exist).
//
// Usage: node bd_surface.js

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const TREE = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const BD_ISIL = path.join(REPO, 'Decompiled', 'isil', 'IsilDump', 'BehaviorDesigner.Runtime');

// ---------- BD runtime type names ----------
const bdTypes = new Map(); // simple name -> full name
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) { walk(p); continue; }
		if (!e.name.toLowerCase().endsWith('.txt')) continue;
		const m = /^Type:[ \t]*(.+)$/m.exec(fs.readFileSync(p, 'utf8'));
		if (!m) continue;
		const full = m[1].trim();
		const simple = full.split('.').pop().split('+').pop();
		if (!bdTypes.has(simple)) bdTypes.set(simple, full);
	}
})(BD_ISIL);
console.error(`BD runtime type names: ${bdTypes.size}`);

// ---------- scan the recovered tree ----------
const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) { walk(p); continue; }
		if (e.name.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(TREE);

const use = new Map(); // BD full name -> { kinds: Map(kind->count), examples: [] }
const callTargets = new Map(); // 'Type::member' -> count
const note = (full, kind, ex) => {
	if (!use.has(full)) use.set(full, { kinds: new Map(), examples: [] });
	const u = use.get(full);
	u.kinds.set(kind, (u.kinds.get(kind) || 0) + 1);
	if (ex && u.examples.length < 3) u.examples.push(ex);
};
const hitTypes = (text, kind, ex, whole) => {
	// whole = true -> the text is a single type reference; false -> scan every identifier
	if (whole) {
		const base = text.replace(/<.*/, '').replace(/\[\]/g, '').trim();
		if (bdTypes.has(base)) note(bdTypes.get(base), kind, ex);
		for (const g of text.matchAll(/<\s*([A-Za-z_][\w.]*)/g)) if (bdTypes.has(g[1])) note(bdTypes.get(g[1]), kind + ':genericArg', ex);
		return;
	}
	for (const m of text.matchAll(/\b([A-Za-z_]\w*)\b/g)) if (bdTypes.has(m[1])) note(bdTypes.get(m[1]), kind, ex);
};

const TYPE_DECL = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_]\w*)/;
const overridesByBaseTask = new Map(); // BD base name -> Set(signature)

for (const f of files) {
	const src = fs.readFileSync(f, 'utf8');
	const rel = path.relative(TREE, f).replace(/\\/g, '/');
	const lines = src.split(/\r?\n/);
	let header = null, ns = '';
	for (let i = 0; i < lines.length; i++) {
		const L = lines[i];
		if (/^\s*\/\//.test(L)) continue;
		const nsM = /^\/\/ Namespace:[ \t]*(.*)$/.exec(L);
		if (nsM) { ns = nsM[1].trim(); continue; }
		const t = TYPE_DECL.exec(L);
		if (t) { header = { kind: t[1], name: t[2], line: L }; break; }
	}
	if (!header) continue;
	// bases
	const colon = header.line.replace(/\/\/.*$/, '').indexOf(':');
	const bases = colon < 0 ? [] : header.line.slice(colon + 1).split(',').map((s) => s.trim()).filter(Boolean);
	for (const b of bases) hitTypes(b, 'base', `${header.name} : ${b}`, true);
	const bdBase = bases.map((b) => b.replace(/<.*/, '').trim()).find((b) => bdTypes.has(b));

	const body = lines.join('\n');
	// attributes
	for (const a of body.matchAll(/^\s*\[([A-Za-z_]\w*)/gm)) if (bdTypes.has(a[1])) note(bdTypes.get(a[1]), 'attribute', rel);
	// fields + method signatures (only inside the type declaration; nested blocks are comments)
	const declRe = /^\s*(?:(?:public|private|protected|internal)\s+)?(?:static\s+|readonly\s+|const\s+|virtual\s+|override\s+|abstract\s+|new\s+|unsafe\s+|extern\s+|sealed\s+|partial\s+)*([A-Za-z_][\w.<>,\[\]\s]*?)\s+([A-Za-z_]\w*)\s*(\(?)/g;
	for (const L of lines) {
		if (/^\s*\/\//.test(L) || !L.trim() || L.trim() === '{' || L.trim() === '}') continue;
		const m = declRe.exec(L);
		if (!m) continue;
		const [, typeText, memberName, paren] = m;
		hitTypes(typeText, paren ? 'returnType' : 'fieldType', L.trim(), true);
		if (paren) {
			const open = L.indexOf('(', m.index + m[0].lastIndexOf(memberName));
			let depth = 0, close = -1;
			for (let i = open; i < L.length; i++) {
				if (L[i] === '(') depth++;
				else if (L[i] === ')') { depth--; if (!depth) { close = i; break; } }
			}
			const params = close > 0 ? L.slice(open + 1, close) : '';
			for (const p of params.split(',')) {
				const pt = p.trim().replace(/^out\s+|^ref\s+|^params\s+/, '').split(/\s+/)[0];
				if (pt) hitTypes(pt, 'paramType', `${memberName}(${p.trim()})`, true);
			}
			if (/\boverride\b/.test(L) && bdBase) {
				const sig = L.trim().replace(/\s*$/, '');
				if (!overridesByBaseTask.has(bdBase)) overridesByBaseTask.set(bdBase, new Set());
				overridesByBaseTask.get(bdBase).add(sig);
			}
		}
	}
	// annotated calls: `//   0xADDR Call N   ; Type::member`
	for (const c of src.matchAll(/Call\s+\d+\s*;\s*([A-Za-z_][\w.`+<>]*::[^\s]+(?:\s+[^\s(]+)?)/g)) {
		const target = c[1].trim();
		if (!target.startsWith('BehaviorDesigner')) continue;
		callTargets.set(target, (callTargets.get(target) || 0) + 1);
	}
}

const out = {
	bdTypesInIsil: bdTypes.size,
	referencedTypes: [...use.entries()]
		.map(([full, u]) => ({ type: full, uses: [...u.kinds.entries()].map(([k, c]) => `${k} x${c}`).join(', '), examples: u.examples }))
		.sort((a, b) => b.examples.length - a.examples.length),
	requiredOverrideMembers: [...overridesByBaseTask.entries()].map(([base, set]) => ({ base: bdTypes.get(base), members: [...set].sort() })),
	calledMembers: [...callTargets.entries()].sort((a, b) => b[1] - a[1]).map(([k, v]) => `${v} x ${k}`),
};
fs.writeFileSync(path.join(__dirname, 'bd_surface.json'), JSON.stringify(out, null, 2), 'utf8');
console.log(`referenced types: ${out.referencedTypes.length} | bases needing override members: ${out.requiredOverrideMembers.length} | called BD members: ${out.calledMembers.length}`);
