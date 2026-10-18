'use strict';
// Does the authored BehaviorDesigner replacement expose every member the reconstructed tree overrides?
//
// Resolves each `override` in the tree through its base chain (metadata, using-aware, same as
// verify_overrides.js). Overrides owned by a BehaviorDesigner type must exist in the replacement
// folder, otherwise the reconstructed code binds to a member that is not there.
//
// Usage: node replacement_surface.js

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const TREE = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const BD = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'BehaviorDesigner.Runtime');
const DUMP = path.join(REPO, 'Dump', 'dump.cs');

const memberSig = (line, withReturn) => {
	const m = /(?:^|[^\w>])([A-Za-z_]\w*)\s*(?:<[^<>]*>)?\s*\(/.exec(line);
	if (!m) return null;
	const open = line.indexOf('(', m.index);
	let depth = 0, close = -1;
	for (let i = open; i < line.length; i++) {
		if (line[i] === '(') depth++;
		else if (line[i] === ')') { depth--; if (!depth) { close = i; break; } }
	}
	if (close < 0) return null;
	const inner = line.slice(open + 1, close);
	let arity = 0, d = 0;
	for (const ch of inner) {
		if (ch === '<' || ch === '[') d++;
		else if (ch === '>' || ch === ']') d--;
		else if (ch === ',' && d === 0) arity++;
	}
	if (inner.trim()) arity++;
	return { name: m[1], arity, sig: line.trim().replace(/\s+/g, ' ') };
};

const basesOf = (header) => {
	const colon = header.indexOf(':');
	if (colon < 0) return [];
	return header.slice(colon + 1).split(',').map((s) => s.replace(/<.*/, '').trim()).filter((s) => /^[A-Za-z_][\w.]*$/.test(s));
};

// ---------- metadata ----------
const lines = fs.readFileSync(DUMP, 'utf8').split(/\r?\n/);
const declRe = /^(?:\s*)((?:public|internal|private|protected)[\w\s]*?\b(?:class|struct|interface|enum)\s+([A-Za-z0-9_]+)(?=[\s:<])[^{]*?)\s*\/\/ TypeDefIndex:\s*(\d+)\s*$/;
const meta = new Map();
let lastNs = '';
let i = 0;
while (i < lines.length) {
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/.exec(lines[i]);
	if (nsM) { lastNs = nsM[1].trim(); i++; continue; }
	const m = declRe.exec(lines[i]);
	if (!m) { i++; continue; }
	const header = m[1].trim();
	const t = { ns: lastNs, name: m[2], bases: basesOf(header), members: new Map(), idx: parseInt(m[3], 10) };
	i++;
	while (i < lines.length && lines[i].trim() !== '{') i++;
	i++;
	let section = null;
	for (; i < lines.length; i++) {
		const L = lines[i];
		if (L === '}') break;
		const T = L.trim();
		if (T === '// Methods') { section = 'methods'; continue; }
		if (T === '// Fields' || T === '// Properties' || T === '// Events') { section = null; continue; }
		if (section !== 'methods' || !T || T.startsWith('//') || T.startsWith('[')) continue;
		if (!T.includes('{ }') && !/^(?:public|private|protected|internal)\b[^;{]*\([^;{]*\)\s*;$/.test(T)) continue;
		const sig = memberSig(T);
		if (sig) t.members.set(`${sig.name}/${sig.arity}`, sig.sig);
	}
	i++;
	const key = `${t.ns}\u0000${t.name}`;
	if (!meta.has(key)) meta.set(key, t);
}

const lookupFull = (full) => {
	const i2 = full.lastIndexOf('.');
	if (i2 > 0) { const t = meta.get(`${full.slice(0, i2)}\u0000${full.slice(i2 + 1)}`); if (t) return t; }
	return meta.get(`\u0000${full}`) || null;
};
const lookup = (ns, refName) => {
	if (refName.includes('.')) return lookupFull(refName);
	const parts = ns ? ns.split('.') : [];
	for (let n = parts.length; n >= 0; n--) {
		const cand = `${parts.slice(0, n).join('.')}\u0000${refName}`;
		if (meta.has(cand)) return meta.get(cand);
	}
	return null;
};
const lookupUsing = (ns, usings, aliases, refName) => {
	if (refName.includes('.')) return lookupFull(refName);
	if (aliases.has(refName)) return lookupFull(aliases.get(refName));
	const own = lookup(ns, refName);
	if (own) return own;
	for (const u of usings) { const cand = `${u}\u0000${refName}`; if (meta.has(cand)) return meta.get(cand); }
	return null;
};

// ---------- tree ----------
const TYPE_DECL = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_]\w*)/;
const tree = new Map();
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) { walk(p); continue; }
		if (!e.name.toLowerCase().endsWith('.cs')) continue;
		const src = fs.readFileSync(p, 'utf8');
		const nsM = /^\/\/ Namespace:[ \t]*(.*)$/m.exec(src);
		const ns = nsM ? nsM[1].trim() : '';
		const usings = new Set();
		const aliases = new Map();
		for (const L of src.split(/\r?\n/)) {
			const u = /^using\s+([\w.]+)\s*;/.exec(L);
			if (u) { usings.add(u[1]); continue; }
			const a = /^using\s+([A-Za-z_]\w*)\s*=\s*([\w.]+)\s*;/.exec(L);
			if (a) aliases.set(a[1], a[2]);
		}
		let name = null, bases = [], typeDepth = -1, depth = 0;
		const overrides = [];
		for (const L of src.split(/\r?\n/)) {
			if (/^\s*\/\//.test(L) || !L.trim()) continue;
			if (name === null) {
				const t = TYPE_DECL.exec(L);
				if (t) { name = t[2]; bases = basesOf(L.replace(/\/\/.*$/, '')); typeDepth = depth; }
			} else if (depth === typeDepth + 1 && /\boverride\b/.test(L) && L.includes('(')) {
				const sig = memberSig(L.replace(/\/\/.*$/, ''));
				if (sig) overrides.push(sig);
			}
			for (const ch of L) { if (ch === '{') depth++; else if (ch === '}') depth--; }
		}
		if (!name) continue;
		tree.set(`${ns}\u0000${name}`, { ns, name, bases, overrides, usings, aliases });
	}
})(TREE);

// ---------- what the replacement declares ----------
const replacement = new Map(); // TypeName -> Set('name/arity')
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) { walk(p); continue; }
		if (!p.toLowerCase().endsWith('.cs')) continue;
		const src = fs.readFileSync(p, 'utf8');
		let depth = 0, typeDepth = -1, typeName = null;
		const methods = new Set();
		for (const L0 of src.split(/\r?\n/)) {
			const L = L0.replace(/\/\/.*$/, '');
			if (/^\s*\/\//.test(L0) || !L.trim()) continue;
			if (typeName === null) {
				const t = TYPE_DECL.exec(L);
				if (t) { typeName = t[2]; typeDepth = depth; }
			} else if (depth === typeDepth + 1 && L.includes('(') && !/\b(class|struct|interface|enum|new\s+[A-Z])\b/.test(L)) {
				const sig = memberSig(L);
				if (sig) methods.add(`${sig.name}/${sig.arity}`);
			}
			if (typeName === null) continue;
			for (const ch of L) { if (ch === '{') depth++; else if (ch === '}') depth--; }
		}
		if (typeName) {
			if (!replacement.has(typeName)) replacement.set(typeName, new Set());
			for (const m of methods) replacement.get(typeName).add(m);
		}
	}
})(BD);

// ---------- does the replacement cover the overrides? ----------
const needed = new Map(); // 'BD.Type' -> Map('name/arity' -> { count, samples: Set })
for (const t of tree.values()) {
	if (!t.overrides.length) continue;
	const chain = [];
	const seen = new Set();
	const queue = t.bases.map((b) => ({ refName: b, from: t, root: true }));
	while (queue.length && chain.length < 64) {
		const { refName, from, root } = queue.shift();
		const bt = root ? lookupUsing(from.ns, from.usings, from.aliases, refName) : lookup(from.ns, refName);
		if (!bt) continue;
		const key = `${bt.ns}\u0000${bt.name}`;
		if (seen.has(key)) continue;
		seen.add(key);
		chain.push(bt);
		for (const b2 of bt.bases) queue.push({ refName: b2, from: bt, root: false });
	}
	for (const o of t.overrides) {
		const key = `${o.name}/${o.arity}`;
		const owner = chain.find((c) => c.members.has(key));
		if (!owner || !owner.ns.startsWith('BehaviorDesigner')) continue;
		const k = `${owner.ns}.${owner.name}`;
		if (!needed.has(k)) needed.set(k, new Map());
		const e = needed.get(k);
		if (!e.has(key)) e.set(key, { count: 0, samples: new Set() });
		const rec = e.get(key);
		rec.count++;
		if (rec.samples.size < 3) rec.samples.add(`${t.ns ? t.ns + '.' : ''}${t.name}`);
	}
}

let missingTotal = 0;
let neededTotal = 0;
console.log('override members the reconstructed tree expects, per BehaviorDesigner owner:');
for (const [type, members] of [...needed.entries()].sort((a, b) => b[1].size - a[1].size)) {
	const simple = type.split('.').pop();
	const declared = replacement.get(simple) || new Set();
	const missing = [...members.entries()].filter(([k]) => !declared.has(k));
	neededTotal += members.size;
	missingTotal += missing.length;
	console.log(`  ${type}: ${members.size} distinct member(s), ${missing.length} not declared by the replacement`);
	for (const [k, v] of missing) console.log(`      MISSING ${k}   (${v.count} overrides, e.g. ${[...v.samples].join(', ')})`);
}

// members the replacement declares that nothing overrides - informational
console.log('');
for (const [type, declared] of replacement.entries()) {
	const want = [...needed.entries()].find(([k]) => k.endsWith('.' + type));
	const extra = [...declared].filter((m) => !want || !want[1].has(m));
	if (extra.length) console.log(`  ${type}: ${declared.size} declared, ${extra.length} not overridden in the tree (own API)`);
}
console.log(`\nTOTAL: ${neededTotal} distinct overridden member(s) needed on BehaviorDesigner types; ${missingTotal} missing from the replacement`);
