'use strict';
// Bind BehaviorDesigner base types correctly in the reconstructed tree.
//
// Two problems it fixes, both a consequence of the bases coming from IL2CPP metadata as *simple*
// names while the type actually lives in a BehaviorDesigner namespace:
//
//   A) `using Action = System.Action;` was emitted for the 8 global-namespace task classes, so
//      `DeadAction : Action` bound to a delegate type instead of BehaviorDesigner.Runtime.Tasks.Action.
//   B) a file whose base is a BehaviorDesigner type that is reachable neither through its own
//      namespace nor through its imports (e.g. FloatSliderAttribute : ObjectDrawerAttribute, with
//      ObjectDrawerAttribute in BehaviorDesigner.Runtime.Tasks) was left unbound.
//
// Resolution uses the IL2CPP metadata (Dump/dump.cs) exactly like verify_overrides.js.
//
// Usage: node fix_bd_bases.js            (report only)
//        node fix_bd_bases.js --apply    (rewrite the affected files)
//        node fix_bd_bases.js --apply <dir>

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const args = process.argv.slice(2);
const APPLY = args.includes('--apply');
const TREE = args.filter((a) => !a.startsWith('--'))[0] || path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const DUMP = path.join(REPO, 'Dump', 'dump.cs');

// ---------- metadata ----------
const lines = fs.readFileSync(DUMP, 'utf8').split(/\r?\n/);
const declRe = /^\s*(?:(?:public|internal|private|protected)[\w\s]*?\b(?:class|struct|interface|enum)\s+([A-Za-z0-9_]+)(?=[\s:<])[^{]*?)\s*\/\/ TypeDefIndex:\s*\d+\s*$/;
const byName = new Map(); // simple name -> [{ ns, full }]
const has = new Set(); // ns\0name
let lastNs = '';
for (const L of lines) {
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/.exec(L);
	if (nsM) { lastNs = nsM[1].trim(); continue; }
	const m = declRe.exec(L);
	if (!m) continue;
	const name = m[1];
	const full = lastNs ? `${lastNs}.${name}` : name;
	has.add(`${lastNs}\u0000${name}`);
	if (!byName.has(name)) byName.set(name, []);
	byName.get(name).push({ ns: lastNs, full, bd: lastNs.startsWith('BehaviorDesigner') });
}

// C#-style lookup: enclosing namespaces outward.
const lookupNs = (ns, name) => {
	const parts = ns ? ns.split('.') : [];
	for (let n = parts.length; n >= 0; n--) {
		const cand = `${parts.slice(0, n).join('.')}\u0000${name}`;
		if (has.has(cand)) return cand.replace('\u0000', '.');
	}
	return null;
};

// ---------- collect metadata-declared type names (to know if a base is tree-internal) ----------
const treeTypes = new Set();
const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (p.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(TREE);
for (const f of files) {
	const m = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(?:class|struct|interface|enum)\s+([A-Za-z_]\w*)/m.exec(fs.readFileSync(f, 'utf8'));
	if (m) treeTypes.add(m[1]);
}

const TYPE_DECL = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_]\w*)/;
const report = { aliasRewrites: [], usingAdds: [], ambiguous: [], skipped: [] };

for (const f of files) {
	const src = fs.readFileSync(f, 'utf8');
	const rel = path.relative(TREE, f).replace(/\\/g, '/');
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

	let baseLine = null;
	for (const L of src.split(/\r?\n/)) {
		if (/^\s*\/\//.test(L)) continue;
		const t = TYPE_DECL.exec(L);
		if (t) { baseLine = L.replace(/\/\/.*$/, ''); break; }
	}
	if (!baseLine) continue;
	const colon = baseLine.indexOf(':');
	if (colon < 0) continue;
	const bases = baseLine.slice(colon + 1).split(',').map((s) => s.replace(/<.*/, '').trim()).filter((s) => /^[A-Za-z_][\w.]*$/.test(s));

	for (const b of bases) {
		if (b.includes('.') || treeTypes.has(b)) continue;      // qualified or reconstructed in the tree
		const defs = byName.get(b) || [];
		const bdDefs = defs.filter((d) => d.bd);
		if (!bdDefs.length) continue;

		// what does the file bind `b` to right now?
		const aliasTarget = aliases.get(b) || null;
		const ownNsHit = lookupNs(ns, b);
		let importHit = null;
		for (const u of usings) if (has.has(`${u}\u0000${b}`)) { importHit = `${u}.${b}`; break; }
		const current = aliasTarget || ownNsHit || importHit;
		if (current && bdDefs.some((d) => d.full === current)) continue;   // already bound to the BD type

		// what should it bind to? the BD definition, matching the imported BD namespace when several exist
		let desired = bdDefs.find((d) => usings.has(d.ns));
		if (!desired && bdDefs.length === 1) desired = bdDefs[0];
		if (!desired) {
			const candidates = [...new Set(bdDefs.map((d) => d.full))];
			report.ambiguous.push({ file: rel, base: b, candidates });
			continue;
		}
		if (current === desired.full) continue;                 // already correct

		if (aliasTarget) {
			// case A: an alias binds the name to something else (System.Action). Only safe when the name
			// appears nowhere else in the file outside the alias line and the base list.
			let outside = 0;
			for (const L of src.split(/\r?\n/)) {
				if (/^\s*\/\//.test(L)) continue;
				if (new RegExp(`^\\s*using\\s+${b}\\s*=`).test(L)) continue;   // the alias itself
				if (TYPE_DECL.test(L) && L.includes(':')) continue;            // the base list
				outside += [...L.matchAll(new RegExp(`\\b${b}\\b`, 'g'))].length;
			}
			if (outside !== 0) {
				report.skipped.push({ file: rel, base: b, reason: `name used ${outside} more time(s) outside the alias and the base list`, desired: desired.full });
				continue;
			}
			report.aliasRewrites.push({ file: rel, base: b, from: aliasTarget, to: desired.full });
			if (APPLY) {
				const updated = src.replace(new RegExp(`^using\\s+${b}\\s*=\\s*${aliasTarget.replace(/\./g, '\\.')}\\s*;\\s*$`, 'm'), `using ${b} = ${desired.full};`);
				if (updated === src) report.skipped.push({ file: rel, base: b, reason: 'alias line not matched for rewrite' });
				else fs.writeFileSync(f, updated, 'utf8');
			}
		} else if (!ownNsHit) {
			// case B: nothing binds the name - import the namespace that defines it
			report.usingAdds.push({ file: rel, base: b, add: desired.ns, desired: desired.full });
			if (APPLY) {
				const updated = src.replace(/^((?:using[^\n]*\n)+)/m, (all, group) => `${group}using ${desired.ns};\n`);
				if (updated === src) report.skipped.push({ file: rel, base: b, reason: 'using block not matched for insert' });
				else fs.writeFileSync(f, updated, 'utf8');
			}
		}
	}
}

console.log(`${APPLY ? 'APPLIED' : 'REPORT'} - files scanned: ${files.length}`);
console.log(`\n--- A) wrong alias -> BehaviorDesigner type (${report.aliasRewrites.length}) ---`);
for (const r of report.aliasRewrites) console.log(`  ${r.file}\n      ${r.base}: ${r.from}  ->  ${r.to}`);
console.log(`\n--- B) missing using for a BehaviorDesigner base (${report.usingAdds.length}) ---`);
for (const r of report.usingAdds) console.log(`  ${r.file}\n      add "using ${r.add};" for base ${r.base} (${r.desired})`);
if (report.ambiguous.length) {
	console.log(`\n--- ambiguous (left alone) (${report.ambiguous.length}) ---`);
	for (const r of report.ambiguous) console.log(`  ${r.file}  ${r.base}: ${r.candidates.join(', ')}`);
}
if (report.skipped.length) {
	console.log(`\n--- skipped (${report.skipped.length}) ---`);
	for (const r of report.skipped) console.log(`  ${r.file}  ${r.base}: ${r.reason}`);
}
