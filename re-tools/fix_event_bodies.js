'use strict';
// Step 4 (batch 1): real C# bodies for the event system.
//
// Evidence used:
//   * metadata (Dump/dump.cs)   : reliable  -> types, fields, method signatures
//   * Cpp2IL ISIL dump          : reliable  -> signatures WITH default parameter values
//   * ISIL disassembly of EventArgs .ctor  -> proves the ctor is empty (no field store,
//     only the base/meta init prologue), so args objects are populated by the caller.
//
// Reconstructed pattern (the project's event architecture):
//   public static event Action<TArgs> OnX;            // (done in step 3)
//   public static void CallXEvent(...)                // Action<TArgs>
//       => OnX?.Invoke(new XEventArgs { field = param });
//   Action<This, TArgs>                               // per-instance sender/args events
//       => OnX?.Invoke(this, new TArgs { field = param });
//   Action                                            // no args
//       => OnX?.Invoke();
//
// Usage: node fix_event_bodies.js <Assembly-CSharp dir> [--dry]

const fs = require('fs');
const path = require('path');

const DIR = process.argv[2];
const DRY = process.argv.includes('--dry');
const DUMP = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Dump\\dump.cs';
const ISIL = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\isil\\IsilDump\\Assembly-CSharp';

// ---------- dump.cs : type -> public fields, and type -> base ----------
const typeFields = new Map();
const typeBase = new Map();
{
	const lines = fs.readFileSync(DUMP, 'utf8').split(/\r?\n/);
	let cur = null;
	for (const raw of lines) {
		if (/^\s*\/\/\s*(Fields|Methods|Properties|Events)/.test(raw)) continue;
		const l = raw.replace(/\s*\/\/.*$/, ''); // drop the trailing `// TypeDefIndex: N` etc.
		const td = /^(?:\[[^\]]*\]\s*)*(?:public|internal|private|protected)\s+(?:sealed\s+|abstract\s+|static\s+|partial\s+)*(class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_`.]*)\s*(?::\s*(.+))?$/.exec(l.trim());
		if (td) {
			const name = td[2].split('<')[0].split('`')[0];
			cur = name;
			if (!typeFields.has(cur)) typeFields.set(cur, []);
			if (td[3]) typeBase.set(cur, td[3].trim());
			continue;
		}
		if (!cur) continue;
		const f = /^\s*public\s+(?!static\b)([A-Za-z_][A-Za-z0-9_.<>\[\], `]*?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*;/.exec(l);
		if (f) typeFields.get(cur).push({ type: f[1].trim(), name: f[2] });
	}
}

// ---------- IsilDump : type -> method signature strings ----------
const isilSigs = new Map(); // type -> [ 'System.Void CallMapChangedEvent(Map map = null)', ... ]
for (const f of fs.readdirSync(ISIL)) {
	if (!f.endsWith('.txt')) continue;
	const txt = fs.readFileSync(path.join(ISIL, f), 'utf8');
	const m = /^Type:\s*(.+)$/m.exec(txt);
	if (!m) continue;
	const t = m[1].trim().split('<')[0].split('`')[0];
	const sigs = [];
	for (const line of txt.split(/\r?\n/)) {
		const s = /^Method:\s*(.+)$/.exec(line);
		if (s) sigs.push(s[1].trim());
	}
	if (!isilSigs.has(t)) isilSigs.set(t, sigs);
}

function defaultOf(fullSig, methodName) {
	// pull `Type name = default` out of the ISIL signature for this method name
	const re = new RegExp(`${methodName.replace(/[.*+?^${}()|[\]\\]/g, '\\$&')}\\(([^)]*)\\)`);
	const m = re.exec(fullSig || '');
	if (!m || !m[1].trim()) return null;
	const out = [];
	for (const p of m[1].split(',')) {
		const mm = /^\s*(.*?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(.+?)\s*$/.exec(p);
		if (mm) out.push({ name: mm[2], def: mm[3] });
	}
	return out;
}

const stats = { files: 0, argCtors: 0, invoked: 0, withArgs: 0, positional: 0, defaults: 0, skipped: [], };

function processFile(file) {
	const src = fs.readFileSync(file, 'utf8');
	if (!/Reconstructed from IL2CPP metadata/.test(src.slice(0, 600))) return;
	const eol = src.includes('\r\n') ? '\r\n' : '\n';
	const lines = src.split(/\r?\n/);
	const typeM = /^(?:public|internal|private|protected)\s+(?:sealed\s+|abstract\s+|static\s+|partial\s+)*(?:class|struct)\s+([A-Za-z_][A-Za-z0-9_]*)/m.exec(src);
	if (!typeM) return;
	const type = typeM[1];
	const rewritesBefore = stats.invoked + stats.argCtors;
	stats.files++;

	const repl = new Map();
	const isComment = (l) => l.trimStart().startsWith('//');

	// (a) args ctors -> empty (evidence: ISIL disassembly stores no field)
	const isArgsType = /(?:class|struct)\s+[A-Za-z_][A-Za-z0-9_]*Args\b/.test(src) || /:\s*EventArgs\b/.test(src);
	if (isArgsType && type) {
		for (let i = 0; i < lines.length; i++) {
			if (new RegExp(`^\\s*(?:public|private|protected|internal)\\s+${type}\\s*\\(\\s*\\)\\s*$`).test(lines[i])) {
				let j = i + 1;
				while (j < lines.length && lines[j].trim() === '') j++;
				if (lines[j] && lines[j].trim() === '{') {
					let k = j;
					while (k < lines.length && lines[k].trim() !== '}') k++;
					if (k < lines.length) {
						for (let x = j + 1; x < k; x++) repl.set(x, null);
						stats.argCtors++;
					}
				}
			}
		}
	}

	// (b) event invokers
	const events = new Map(); // name -> delegateType
	for (const l of lines) {
		const e = /^\s*(?:public|private|protected|internal)\s+(?:static\s+)?event\s+(.+?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*;/.exec(l);
		if (e) events.set(e[2], e[1].trim());
	}
	if (events.size) {
		const sigs = isilSigs.get(type) || [];
		for (let i = 0; i < lines.length; i++) {
			const cm = /^(\s*)((?:public|private|protected|internal)\s+(?:static\s+)?void)\s+(Call[A-Za-z0-9_]*)\s*\(([^)]*)\)\s*$/.exec(lines[i]);
			if (!cm) continue;
			const indent = cm[1], method = cm[3], paramsRaw = cm[4];
			// strip default values for name purposes
			const params = paramsRaw.trim() ? paramsRaw.split(',').map((p) => {
				const t = p.split('=')[0].trim();
				return { name: t.split(/\s+/).pop(), type: t.split(/\s+/).slice(0, -1).join(' ') };
			}) : [];

			const rawMid = method.replace(/^Call/, '');
			const mid = rawMid.replace(/Event\d*$/, '');
			const cands = [`On${mid}`, mid, `On${rawMid}`, rawMid, `On${mid}Event`, `${mid}Event`];
			let evName = cands.find((c) => events.has(c)) || null;
			if (!evName && events.size === 1) evName = [...events.keys()][0];
			if (!evName) { stats.skipped.push(`${type}.${method}(${paramsRaw}): no event field`); continue; }
			const dt = events.get(evName);
			const gen = /<([^>]*)>/.exec(dt);
			let body;

			if (!gen) {
				if (params.length) { stats.skipped.push(`${type}.${method}(${paramsRaw}): Action but ${params.length} param(s)`); continue; }
				body = [`${indent}\t${evName}?.Invoke();`];
			} else {
				const typeArgs = gen[1].split(',').map((s) => s.trim());
				const last = typeArgs[typeArgs.length - 1].split('.').pop();
				const fields = typeFields.get(last);
				const sender = typeArgs.length > 1;
				const p0IsArgs = params.length === 1 && params[0].type.split('.').pop() === last;
				const looksArgs = /Args$/.test(last);
				if (params.length === 0 && typeArgs.length === 1) {
					body = [`${indent}\t${evName}?.Invoke(this);`]; // Action<TThis>
				} else if (p0IsArgs) {
					body = [`${indent}\t${evName}?.Invoke(${sender ? 'this, ' : ''}${params[0].name});`]; // args passed in
				} else if (fields && fields.length) {
					// map params -> fields by name; fall back to positional when the counts align
					let parts = params.map((p) => {
						const f = fields.find((x) => x.name.toLowerCase() === p.name.toLowerCase());
						return f ? `${f.name} = ${p.name}` : null;
					});
					if (parts.some((x) => x === null)) {
						if (fields.length === params.length) {
							parts = params.map((p, idx) => `${fields[idx].name} = ${p.name}`);
							stats.positional++;
						} else {
							stats.skipped.push(`${type}.${method}(${paramsRaw}): ${last} fields [${fields.map((f) => f.name).join('|')}] vs params`);
							continue;
						}
					}
					body = [`${indent}\t${evName}?.Invoke(${sender ? 'this, ' : ''}new ${last} { ${parts.join(', ')} });`];
					stats.withArgs++;
				} else if (!looksArgs && typeArgs.length === params.length) {
					body = [`${indent}\t${evName}?.Invoke(${params.map((p) => p.name).join(', ')});`];
				} else {
					stats.skipped.push(`${type}.${method}(${paramsRaw}): ${dt} does not fit ${params.length} param(s)`);
					continue;
				}
			}

			// apply default parameter values recovered from the ISIL signature
			const defs = defaultOf(sigs.find((s) => s.endsWith(`${method}(${paramsRaw})`)) || sigs.find((s) => s.includes(`${method}(`)), method);
			let sigLine = lines[i];
			if (defs && defs.length) {
				let np = paramsRaw;
				for (const d of defs) {
					const re = new RegExp(`(\\b${d.name})\\s*(?=,|$)`);
					if (re.test(np)) { np = np.replace(re, `$1 = ${d.def}`); stats.defaults++; }
				}
				sigLine = `${indent}${cm[2]} ${method}(${np})`;
			}

			// find the block and replace its interior
			let j = i + 1;
			while (j < lines.length && lines[j].trim() === '') j++;
			if (!lines[j] || lines[j].trim() !== '{') { stats.skipped.push(`${type}.${method}: no body block`); continue; }
			let k = j + 1;
			while (k < lines.length && lines[k].trim() !== '}') k++;
			if (k >= lines.length) { stats.skipped.push(`${type}.${method}: unterminated body`); continue; }
			for (let x = j + 1; x < k; x++) repl.set(x, null);
			repl.set(j + 1, body);
			repl.set(i, [sigLine]);
			stats.invoked++;
		}
	}

	if (!repl.size) return;
	const out = [];
	for (let i = 0; i < lines.length; i++) {
		if (repl.has(i)) { const v = repl.get(i); if (v) out.push(...v); continue; }
		out.push(lines[i]);
	}
	let res = out.join(eol).replace(/(?:\r?\n)+$/, '') + eol; // exactly one final newline

	// document which bodies were reconstructed (idempotent: guarded by the marker text)
	if (stats.invoked + stats.argCtors > rewritesBefore && !res.includes('reconstructed C#')) {
		const arr = res.split(eol);
		let h = 0;
		while (h < arr.length && arr[h].startsWith('//')) h++;
		arr.splice(h, 0,
			'// NOTE: the event-invoker and event-args constructor bodies below are reconstructed C#, derived from',
			'//       IL2CPP metadata plus the decompiled WebAssembly; all other bodies remain decompiled pseudo-code.');
		res = arr.join(eol);
	}
	if (res !== src && !DRY) fs.writeFileSync(file, res, 'utf8');
}

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (e.name.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(DIR);
for (const f of files) processFile(f);

console.log(JSON.stringify({ files: stats.files, argCtors: stats.argCtors, invokersRewritten: stats.invoked, invokersWithArgs: stats.withArgs, defaultsApplied: stats.defaults, skippedCount: stats.skipped.length }, null, 2));
if (stats.skipped.length) { console.log('--- skipped ---'); console.log(stats.skipped.slice(0, 40).join('\n')); }
