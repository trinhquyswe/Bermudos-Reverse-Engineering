'use strict';
// Rebuild declaration skeletons for types that have no reconstructed counterpart in the
// Scripts tree (the AssetRipper "Dummy class" placeholders).
//
// Output format is byte-compatible with the original reconstruction step (merge.js):
//   3-line provenance header, `// Namespace:` comment + type attributes, the declaration,
//   `// Fields` (offsets stripped) and `// Methods` with `{ // <no wasm mapping> }` bodies.
// The result is then fed through the normal step 1/2/3/5 transformers.
//
// Usage: node build_types.js <dump.cs> <scriptsDir> <outDir> [--only-dummies]

const fs = require('fs');
const path = require('path');

const dumpPath = process.argv[2];
const scriptsDir = process.argv[3];
const outDir = process.argv[4];
const ONLY_DUMMIES = process.argv.includes('--only-dummies');

const ASCRANGE = [5534, 6341];

// ---------- 1. parse dump.cs into (namespace, name) -> type ----------
const lines = fs.readFileSync(dumpPath, 'utf8').split(/\r?\n/);
const declRe = /^(\s*)((?:public|internal|private|protected)[\w\s]*?\b(?:class|struct|interface|enum)\s+([A-Za-z0-9_]+)(?=[\s:<])[^{]*?)\s*\/\/ TypeDefIndex:\s*(\d+)\s*$/;
const types = new Map(); // `${ns}\u0000${name}` -> {header, attrs, ns, fields, methods, idx}
const duplicates = [];
{
	let i = 0;
	let lastNs = '';
	while (i < lines.length) {
		// The namespace comment can be separated from its declaration by an attribute whose
		// string literal spans several physical lines, so it cannot be recovered by walking
		// back from the declaration - track it forwards instead.
		const nsM = /^\/\/ Namespace:[ \t]*(.*)$/.exec(lines[i]);
		if (nsM) { lastNs = nsM[1].trim(); i++; continue; }
		const m = lines[i].match(declRe);
		if (!m) { i++; continue; }
		const idx = parseInt(m[4], 10);
		const name = m[3];
		if (idx < ASCRANGE[0] || idx >= ASCRANGE[1]) { i++; continue; }
		const t = { name, idx, header: m[2].trim(), attrs: [], ns: lastNs, fields: [], methods: [] };
		// Attributes directly above the declaration (multi-line string attributes are dropped,
		// exactly as the earlier reconstruction did). The namespace comment is re-emitted
		// first, which is also where add_usings.js reads the namespace from.
		let j = i - 1;
		const pre = [];
		while (j >= 0 && (lines[j].startsWith('[') || lines[j].startsWith('// Namespace') || lines[j].startsWith('// '))) { pre.unshift(lines[j]); j--; }
		t.attrs = ['// Namespace: ' + t.ns, ...pre.filter((l) => l.startsWith('['))];
		i++;
		while (i < lines.length && lines[i].trim() !== '{') i++;
		i++;
		let section = null;
		for (; i < lines.length; i++) {
			const L = lines[i];
			if (L === '}') break;
			if (L.trim() === '// Fields') { section = 'fields'; continue; }
			if (L.trim() === '// Methods') { section = 'methods'; continue; }
			if (section === 'fields') {
				if (L.trim().startsWith('//')) continue;
				if (L.trim().startsWith('[')) continue;      // field attribute (dropped, as before)
				if (L.includes(';')) t.fields.push(L.replace(/\s*\/\/ 0x[0-9A-Fa-f]+$/, '').trim());
			} else if (section === 'methods') {
				if (L.trim().startsWith('//')) continue;
				if (L.trim().startsWith('[')) continue;      // method attribute (dropped, as before)
				if (L.includes('{ }')) t.methods.push({ sig: L.trim().replace(/\s*\{\s*\}\s*$/, ''), abstract: false });
				// Bodiless declaration: an abstract method or an interface member. It has no
				// body to recover, so it is emitted as a plain signature (embed_isil skips it).
				else if (/^\s*(?:public|private|protected|internal)\b[^;{]*\([^;{]*\)\s*;\s*$/.test(L))
					t.methods.push({ sig: L.trim(), abstract: true });
			}
		}
		const key = `${t.ns}\u0000${name}`;
		if (types.has(key)) duplicates.push(`${key} (idx ${types.get(key).idx} and ${idx})`);
		types.set(key, t);
		i++;
	}
}

// ---------- 2. one target per dump type, at its namespace-derived path ----------
// Driving the layout from the metadata (instead of from the existing files) is what places
// every type correctly when two types share a simple name: e.g. the game's global `Idle`
// and BehaviorDesigner's `Idle` task, or Timeline/Collider tasks that share a name with
// UnityAnimation/UnityBehaviour ones. The resulting path set is identical to the tree's.
function eolOf(text) { return text.includes('\r\n') ? '\r\n' : '\n'; }

const targets = [];   // { file, rel, t, eol }
const unresolved = [];
const newPaths = [];
for (const t of types.values()) {
	const dir = t.ns ? t.ns.replace(/\./g, '/') : '';
	const rel = (dir ? dir + '/' : '') + t.name + '.cs';
	const file = path.join(scriptsDir, rel);
	if (ONLY_DUMMIES) {
		const src = fs.existsSync(file) ? fs.readFileSync(file, 'utf8') : '';
		if (!src.includes('Dummy class. This could have happened')) continue;
	}
	if (!fs.existsSync(file)) newPaths.push(rel);
	targets.push({ file, rel, t, eol: fs.existsSync(file) ? eolOf(fs.readFileSync(file, 'utf8')) : '\r\n' });
}
if (newPaths.length) unresolved.push(...newPaths.map((rel) => ({ rel, reason: 'no file at this path yet (will be created)' })));

// ---------- 3. write skeletons ----------
let written = 0;
for (const tg of targets) {
	const { t, eol } = tg;
	const out = [];
	out.push('// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).');
	out.push('// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code');
	out.push('// recovered from the WebAssembly binary, not original C#.');
	out.push('');
	if (t.attrs.length) out.push(...t.attrs);
	out.push(t.header);
	out.push('{');
	if (t.fields.length) {
		out.push('\t// Fields');
		for (const f of t.fields) out.push('\t' + f);
		out.push('');
	}
	if (t.methods.length) {
		out.push('\t// Methods');
		for (const m of t.methods) {
			out.push('\t' + m.sig);
			if (m.abstract) { out.push(''); continue; }
			out.push('\t{');
			out.push('\t\t// <no wasm mapping>');
			out.push('\t}');
			out.push('');
		}
	}
	out.push('}');
	const dest = path.join(outDir, tg.rel);
	fs.mkdirSync(path.dirname(dest), { recursive: true });
	fs.writeFileSync(dest, out.join(eol) + eol, 'utf8');
	written++;
}

console.log(JSON.stringify({
	dumpTypes: types.size,
	duplicateTypeKeys: duplicates.length,
	targets: targets.length,
	written,
	unresolved: unresolved.length,
	methodsTotal: targets.reduce((a, x) => a + x.t.methods.length, 0),
	typesWithNoMethods: targets.filter((x) => x.t.methods.length === 0).map((x) => x.rel),
}, null, 2));
if (duplicates.length) { console.log('--- duplicate dump keys ---'); console.log(duplicates.slice(0, 10).join('\n')); }
if (unresolved.length) { console.log('--- unresolved targets ---'); console.log(unresolved.slice(0, 40).map((u) => `${u.rel}: ${u.reason}`).join('\n')); }
