'use strict';
// Step 2 restructure: make the reconstructed Assembly-CSharp declarations parse as C#.
//
// Fixes (verified against the Roslyn syntax-error inventory):
//   * `.ctor(...)`  -> `<EnclosingType>(...)`   (real constructor)
//   * `.cctor(...)` -> `static <EnclosingType>(...)`  (real static constructor; no access modifier)
//   * `<X>k__BackingField`      -> `X_k__BackingField`
//   * `<Method>b__N_M`          -> `Method_b__N_M`
//   * `<Method>g__Local|N_M`    -> `Method_g__Local__N_M`
//   * `<>c__DisplayClass...`    -> `c__DisplayClass...`
//   * enum bodies: `public int value__;` dropped, `public const E Name = N;` -> `Name = N,`
//   * attribute string args with unescaped inner quotes are re-escaped
//
// Usage: node fix_decls.js <Assembly-CSharp dir> [--dry]

const fs = require('fs');
const path = require('path');

const DIR = process.argv[2];
const DRY = process.argv.includes('--dry');

const TYPE_DECL = /^(\s*)(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_]*)/;
const ENUM_VALUE = /^(\s*)public\s+const\s+[A-Za-z_][A-Za-z0-9_.]*\s+([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(.+?);\s*$/;

function fixAttrQuotes(line) {
	const m = /^(\s*\[[A-Za-z_][A-Za-z0-9_]*\()"(.*)"(\)\]\s*;?\s*)$/.exec(line);
	if (!m) return line;
	return `${m[1]}"${m[2].replace(/(?<!\\)"/g, '\\"')}"${m[3]}`;
}

const stats = { processed: 0, ctors: 0, cctors: 0, backing: 0, lambdas: 0, enumMembers: 0, valueFields: 0, quoted: 0, literals: 0 };

function transform(text) {
	const eol = text.includes('\r\n') ? '\r\n' : '\n';
	const lines = text.split(/\r?\n/);
	const out = [];
	const stack = []; // { name, kind, depth }
	let pending = null;
	let depth = 0;

	for (const raw of lines) {
		if (raw.trimStart().startsWith('//')) { out.push(raw); continue; }
		let line = raw;
		const cur = stack.length ? stack[stack.length - 1] : null;

		// ---- enum body fixes ----
		let drop = false;
		if (cur && cur.kind === 'enum') {
			if (/^\s*(?:public|private|protected|internal)\s+int\s+value__\s*;\s*$/.test(line)) {
				drop = true; stats.valueFields++;
			} else {
				const m = ENUM_VALUE.exec(line);
				if (m) { line = `${m[1]}${m[2]} = ${m[3]},`; stats.enumMembers++; }
			}
		}

		// ---- constructors ----
		if (cur && /\bvoid\s+\.cctor\s*\(/.test(line)) {
			line = line.replace(/\b(?:public|private|protected|internal)\s+(static\s+void\s+\.cctor)/, '$1');
			line = line.replace(/\bvoid\s+\.cctor\s*\(/, `${cur.name}(`);
			stats.cctors++;
		} else if (cur && /\bvoid\s+\.ctor\s*\(/.test(line)) {
			line = line.replace(/\bvoid\s+\.ctor\s*\(/, `${cur.name}(`);
			stats.ctors++;
		}

		// ---- compiler-generated identifiers ----
		if (line.includes('<') || line.includes('>')) {
			const before = line;
			line = line
				.replace(/<([A-Za-z_][A-Za-z0-9_]*)>k__BackingField/g, '$1_k__BackingField')
				.replace(/<([A-Za-z_.][A-Za-z0-9_.]*)>g__([A-Za-z_][A-Za-z0-9_]*)\|/g, (_s, o, f) => `${o.replace(/\./g, '_')}_g__${f}__`)
				.replace(/<([A-Za-z_.][A-Za-z0-9_.]*)>b__(?=[A-Za-z0-9_])/g, (_s, o) => `${o.replace(/\./g, '_')}_b__`)
				.replace(/<>([A-Za-z_][A-Za-z0-9_]*)/g, '$1');
			if (line !== before) {
				if (/k__BackingField/.test(line)) stats.backing++;
				if (/_b__/.test(line)) stats.lambdas++;
			}
		}

		// ---- attribute string escaping ----
		const q = fixAttrQuotes(line);
		if (q !== line) { line = q; stats.quoted++; }

		// ---- capitalized literals from the dump (default parameter values) ----
		if (/=\s*(?:True|False)\b/.test(line)) {
			line = line.replace(/(=\s*)True\b/g, '$1true').replace(/(=\s*)False\b/g, '$1false');
			stats.literals++;
		}

		const typeMatch = TYPE_DECL.exec(line);
		if (typeMatch) pending = { name: typeMatch[3], kind: typeMatch[2] };

		if (!drop) out.push(line);

		const opens = (line.match(/\{/g) || []).length;
		const closes = (line.match(/\}/g) || []).length;
		if (pending && opens > 0) { stack.push({ ...pending, depth }); pending = null; }
		depth += opens - closes;
		while (stack.length && depth <= stack[stack.length - 1].depth) stack.pop();
	}
	while (out.length && out[out.length - 1].trim() === '') out.pop();
	return out.join(eol) + eol;
}

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (e.name.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(DIR);

for (const f of files) {
	const src = fs.readFileSync(f, 'utf8');
	if (!/Reconstructed from IL2CPP metadata/.test(src.slice(0, 600))) continue;
	const res = transform(src);
	if (res !== src) { if (!DRY) fs.writeFileSync(f, res, 'utf8'); }
	stats.processed++;
}

console.log(JSON.stringify(stats, null, 2));
