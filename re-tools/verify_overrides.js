'use strict';
// Item 2: verify the `override` members declared in the reconstructed tree by resolving the
// base-type chain and looking for a matching member.
//
// Base types are resolved against the IL2CPP metadata (Dump/dump.cs), which covers *every*
// assembly, so a base living outside Assembly-CSharp (BehaviorDesigner.Runtime, UnityEngine,
// mscorlib, ...) is still resolved - against real metadata, not a guess. The same resolution
// is also reported from the tree's own point of view (is the base type reconstructed?).
//
// Usage: node verify_overrides.js [treeDir]

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const TREE = process.argv[2] || path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const DUMP = path.join(REPO, 'Dump', 'dump.cs');

const memberSig = (line) => {
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
	return { name: m[1], arity };
};

const basesOf = (header) => {
	const colon = header.indexOf(':');
	if (colon < 0) return [];
	return header.slice(colon + 1).split(',').map((s) => s.replace(/<.*/, '').trim()).filter((s) => /^[A-Za-z_][\w.]*$/.test(s));
};

// ---------- parse dump.cs: every type, its bases and its member set ----------
const lines = fs.readFileSync(DUMP, 'utf8').split(/\r?\n/);
const declRe = /^(?:\s*)((?:public|internal|private|protected)[\w\s]*?\b(?:class|struct|interface|enum)\s+([A-Za-z0-9_]+)(?=[\s:<])[^{]*?)\s*\/\/ TypeDefIndex:\s*(\d+)\s*$/;
const meta = new Map(); // ns\0name -> { ns, name, kind, bases, members: Set('name/arity') }
let lastNs = '';
let i = 0;
while (i < lines.length) {
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/.exec(lines[i]);
	if (nsM) { lastNs = nsM[1].trim(); i++; continue; }
	const m = lines[i].match(declRe);
	if (!m) { i++; continue; }
	const header = m[1].trim();
	const name = m[2];
	const kindM = /\b(interface|enum|struct)\b/.exec(header);
	const t = { ns: lastNs, name, kind: kindM ? kindM[1] : 'class', bases: basesOf(header), members: new Set(), idx: parseInt(m[3], 10) };
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
		if (section !== 'methods') continue;
		if (!T || T.startsWith('//') || T.startsWith('[')) continue;
		if (!T.includes('{ }') && !/^(?:public|private|protected|internal)\b[^;{]*\([^;{]*\)\s*;$/.test(T)) continue;
		const sig = memberSig(T);
		if (sig) t.members.add(`${sig.name}/${sig.arity}`);
	}
	i++;
	const key = `${t.ns}\u0000${t.name}`;
	if (!meta.has(key)) meta.set(key, t);
}
console.error(`dump.cs types parsed: ${meta.size}`);

// Resolve a fully qualified name against the metadata: the dump prints nested types with a dotted
// name and an empty namespace, so try the ns/name split and the whole string as a name.
const lookupFull = (full) => {
	const i = full.lastIndexOf('.');
	if (i > 0) {
		const t = meta.get(`${full.slice(0, i)}\u0000${full.slice(i + 1)}`);
		if (t) return t;
	}
	return meta.get(`\u0000${full}`) || null;
};

// C#-style name lookup: enclosing namespaces outward, then global.
const lookup = (ns, refName) => {
	if (refName.includes('.')) return lookupFull(refName);
	const parts = ns ? ns.split('.') : [];
	for (let n = parts.length; n >= 0; n--) {
		const cand = `${parts.slice(0, n).join('.')}\u0000${refName}`;
		if (meta.has(cand)) return meta.get(cand);
	}
	return null;
};

// The same, for a source file: aliases (`using X = A.B;`) first, then the enclosing namespace walk,
// then the imported namespaces (`using A.B;`). This is how the reconstructed file actually binds the
// name, so external bases reached through a `using` resolve too.
const lookupUsing = (ns, usings, aliases, refName) => {
	if (refName.includes('.')) return lookupFull(refName);
	if (aliases && aliases.has(refName)) return lookupFull(aliases.get(refName));
	const own = lookup(ns, refName);
	if (own) return own;
	const parts = ns ? ns.split('.') : [];
	for (let n = parts.length - 1; n >= 0; n--) {
		for (const u of usings) {
			const cand = `${parts.slice(0, n).join('.')}${n ? '.' : ''}${u}\u0000${refName}`;
			if (meta.has(cand)) return meta.get(cand);
		}
	}
	for (const u of usings) {
		const cand = `${u}\u0000${refName}`;
		if (meta.has(cand)) return meta.get(cand);
	}
	return null;
};

// ---------- parse the reconstructed tree ----------
const TYPE_DECL = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_]\w*)/;
const treeTypes = new Map(); // ns\0name -> { ns, name, bases, overrides }
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
		treeTypes.set(`${ns}\u0000${name}`, { ns, name, bases, overrides, usings, aliases, rel: path.relative(TREE, p) });
	}
})(TREE);
console.error(`tree types parsed: ${treeTypes.size}`);

// ---------- resolve every override member through its base chain ----------
// Every type derives from System.Object, which the dump does not print as a base (and interfaces
// show no base chain at all), so its members are accepted as an implicit root.
const OBJECT_MEMBERS = new Set(['Equals', 'GetHashCode', 'GetType', 'ToString', 'Finalize', 'MemberwiseClone', 'ReferenceEquals']);
const stats = { overrideMembers: 0, verifiedMeta: 0, verifiedMetaExternal: 0, verifiedObject: 0, chainMissingMeta: 0, mismatch: 0, verifiedTree: 0, typesWithOverrides: 0 };
const mismatches = [];
const chainMissing = [];
const objectOverrides = [];
const externalBaseOwners = new Map();

for (const t of treeTypes.values()) {
	if (!t.overrides.length) continue;
	stats.typesWithOverrides++;
	const chain = [];
	const seen = new Set([`${t.ns}\u0000${t.name}`]);
	const queue = t.bases.map((b) => ({ refName: b, from: t, root: true }));
	while (queue.length && chain.length < 64) {
		const { refName, from, root } = queue.shift();
		const bt = root ? lookupUsing(from.ns, from.usings, from.aliases, refName) : lookup(from.ns, refName);
		if (!bt) { chain.push({ missing: refName }); continue; }
		const key = `${bt.ns}\u0000${bt.name}`;
		if (seen.has(key)) continue;
		seen.add(key);
		chain.push({ t: bt });
		for (const b2 of bt.bases) queue.push({ refName: b2, from: bt, root: false });
	}
	const chainInTree = chain.filter((c) => c.t && treeTypes.has(`${c.t.ns}\u0000${c.t.name}`)).length;
	const chainTypes = chain.filter((c) => c.t).length;
	const missingRefs = chain.filter((c) => c.missing).map((c) => c.missing);

	for (const o of t.overrides) {
		stats.overrideMembers++;
		const key = `${o.name}/${o.arity}`;
		const owner = chain.find((c) => c.t && c.t.members.has(key));
		if (owner) {
			stats.verifiedMeta++;
			if (chainInTree > 0) stats.verifiedTree++;
			if (!treeTypes.has(`${owner.t.ns}\u0000${owner.t.name}`)) {
				stats.verifiedMetaExternal++;
				const k = `${owner.t.ns ? owner.t.ns + '.' : ''}${owner.t.name}`;
				externalBaseOwners.set(k, (externalBaseOwners.get(k) || 0) + 1);
			}
		} else if (OBJECT_MEMBERS.has(o.name)) {
			stats.verifiedObject++;
			objectOverrides.push({ type: `${t.ns ? t.ns + '.' : ''}${t.name}`, member: o.name });
		} else if (!chainTypes) {
			stats.chainMissingMeta++;
			chainMissing.push({ type: `${t.ns ? t.ns + '.' : ''}${t.name}`, member: key, bases: t.bases, missing: missingRefs });
		} else {
			stats.mismatch++;
			mismatches.push({ type: `${t.ns ? t.ns + '.' : ''}${t.name}`, member: key, chain: chain.filter((c) => c.t).map((c) => `${c.t.ns ? c.t.ns + '.' : ''}${c.t.name}`).slice(0, 5) });
		}
	}
}

console.log(JSON.stringify({
	...stats,
	treeTypes: treeTypes.size,
	distinctExternalBases: externalBaseOwners.size,
	topExternalBases: [...externalBaseOwners.entries()].sort((a, b) => b[1] - a[1]).slice(0, 25).map(([k, v]) => `${v} x ${k}`),
}, null, 2));
if (mismatches.length) {
	console.log('\n--- override members whose base chain declares no matching member (first 30) ---');
	for (const m of mismatches.slice(0, 30)) console.log(`  ${m.type}.${m.member}   chain: ${m.chain.join(' -> ')}`);
}
if (chainMissing.length) {
	console.log('\n--- override members whose base chain is not in the metadata (first 20) ---');
	for (const m of chainMissing.slice(0, 20)) console.log(`  ${m.type}.${m.member}   bases: ${m.bases.join(', ')}   unresolved: ${m.missing.join(', ')}`);
}
if (objectOverrides.length) {
	console.log(`\n--- overrides of System.Object members, inherited through the implicit root (${objectOverrides.length}) ---`);
	for (const m of objectOverrides.slice(0, 10)) console.log(`  ${m.type}.${m.member}`);
}
