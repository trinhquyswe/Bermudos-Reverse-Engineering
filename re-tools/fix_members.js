'use strict';
// Step 3: semantic cleanups - turn IL2CPP/dump artifacts into real C# declarations.
//
//   (1) attribute usings: [GeneratedCode]/[CompilerGenerated]/[EditorBrowsable] get their
//       System.* usings added, and [EditorBrowsable(n)] -> EditorBrowsableState.<X>
//   (2) events:  `private [static] T OnX;` + `add_OnX(T value)` / `remove_OnX(T value)`
//                -> `public [static] event T OnX;` (accessor methods dropped)
//   (3) operators: `static R op_Implicit(P v)` -> `static implicit operator R(P v)`
//                  `static R op_Explicit(P v)` -> `static explicit operator R(P v)`
//   (4) properties: placeholder `T X { get; }` / `{ get; set; }` + `get_X()` / `set_X(T v)`
//                   -> one real property whose accessors hold the recovered bodies
//
// Usage: node fix_members.js <Assembly-CSharp dir> [--dry]

const fs = require('fs');
const path = require('path');

const DIR = process.argv[2];
const DRY = process.argv.includes('--dry');

// brace delta of a line, ignoring whole-line comments and trailing comments outside strings
function braceDelta(line) {
	const t = line.trimStart();
	if (t.startsWith('//')) return 0;
	let s = line;
	const q = s.indexOf('//');
	if (q >= 0 && !s.includes('"')) s = s.slice(0, q);
	let d = 0;
	for (const ch of s) { if (ch === '{') d++; else if (ch === '}') d--; }
	return d;
}

// block range for a member declared at line i: {sig, open, end}
function blockRange(lines, i) {
	let j = i;
	while (j < lines.length && !lines[j].includes('{')) {
		if (lines[j].trim().endsWith(';')) return null; // abstract-ish / no body
		j++;
	}
	if (j >= lines.length) return null;
	let depth = 0;
	for (let k = j; k < lines.length; k++) {
		depth += braceDelta(lines[k]);
		if (k >= j && depth === 0) return { sig: i, open: j, end: k };
	}
	return null;
}

function bodyLines(lines, r, oldIndent, newIndent) {
	const inner = lines.slice(r.open + 1, r.end);
	return inner.map((l) => {
		if (l.trim() === '') return '';
		if (l.startsWith(oldIndent + '\t')) return newIndent + l.slice(oldIndent.length + 1);
		return newIndent + l.trimStart();
	});
}

const stats = {
	files: 0, changed: 0, usingsAdded: 0, editorBrowsable: 0,
	events: 0, eventMethodsRemoved: 0, operators: 0,
	properties: 0, accessorMethodsRemoved: 0, eventsSkipped: 0,
};
const notes = [];

function processFile(file) {
	const src = fs.readFileSync(file, 'utf8');
	if (!/Reconstructed from IL2CPP metadata/.test(src.slice(0, 600))) return;
	stats.files++;

	const eol = src.includes('\r\n') ? '\r\n' : '\n';
	const lines = src.split(/\r?\n/);
	const del = new Set();
	const repl = new Map();
	let touched = false;

	const isComment = (l) => l.trimStart().startsWith('//');
	const indentOf = (l) => l.match(/^[\t ]*/)[0];

	// ---------------- (1) attribute usings + EditorBrowsable ----------------
	const attrUsings = {
		GeneratedCode: 'using System.CodeDom.Compiler;',
		CompilerGenerated: 'using System.Runtime.CompilerServices;',
		EditorBrowsable: 'using System.ComponentModel;',
	};
	const need = new Set();
	for (const l of lines) {
		if (isComment(l)) continue;
		for (const a of Object.keys(attrUsings)) {
			if (new RegExp(`\\[${a}\\b`).test(l)) need.add(attrUsings[a]);
		}
	}
	if (need.size) {
		let lastUsing = -1;
		for (let i = 0; i < lines.length; i++) {
			if (/^using\s[^;]*;\s*$/.test(lines[i])) lastUsing = i;
			if (lines[i].trim() !== '' && lastUsing >= 0 && i > lastUsing && !/^using\s/.test(lines[i])) break;
		}
		const missing = [...need].filter((u) => !lines.some((l) => l.trim() === u));
		if (missing.length && lastUsing >= 0) {
			repl.set(lastUsing, [lines[lastUsing], ...missing]);
			stats.usingsAdded += missing.length;
			touched = true;
		}
	}
	for (let i = 0; i < lines.length; i++) {
		const m = /\[EditorBrowsable\(\s*(\d+)\s*\)\]/.exec(lines[i]);
		if (m) {
			const map = { 0: 'Always', 1: 'Never', 2: 'Advanced' };
			const name = map[m[1]] || `(${m[1]})`;
			const next = lines[i].replace(m[0], `[EditorBrowsable(EditorBrowsableState.${name})]`);
			if (next !== lines[i]) { repl.set(i, [next]); stats.editorBrowsable++; touched = true; }
		}
	}

	// ---------------- mark member level (directly inside a type body) ----------------
	const TYPE_DECL = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_]*)/;
	const memberLevel = new Array(lines.length).fill(false);
	{
		let d = 0;
		const stack = [];
		let pending = null;
		for (let i = 0; i < lines.length; i++) {
			const l = lines[i];
			if (isComment(l)) continue;
			const tm = TYPE_DECL.exec(l);
			if (tm) pending = { name: tm[2], kind: tm[1] };
			const delta = braceDelta(l);
			if (pending && delta > 0) { stack.push({ ...pending, depth: d }); pending = null; }
			d += delta;
			while (stack.length && d <= stack[stack.length - 1].depth) stack.pop();
			memberLevel[i] = stack.length > 0 && delta === 0 && d === stack[stack.length - 1].depth + 1;
		}
	}

	// ---------------- gather member declarations ----------------
	const fields = new Map();   // name -> { idx, indent, type, isStatic }
	const props = new Map();    // name -> { idx, indent, mods, type, hasSet }
	const methods = new Map();  // name -> idx
	for (let i = 0; i < lines.length; i++) {
		if (!memberLevel[i]) continue;
		const l = lines[i];
		let m;
		if ((m = /^\s*private\s+(static\s+)?(.+?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*;\s*$/.exec(l))) {
			fields.set(m[3], { idx: i, indent: indentOf(l), type: m[2], isStatic: !!m[1] });
		} else if ((m = /^\s*((?:public|private|protected|internal)\s+(?:static\s+)?)(.+?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*\{\s*get\s*;\s*(set\s*;\s*)?\}\s*$/.exec(l))) {
			props.set(m[3], { idx: i, indent: indentOf(l), mods: m[1].trim(), type: m[2], hasSet: !!m[4] });
		} else if ((m = /^\s*(?:public|private|protected|internal)\s+(?:static\s+)?[A-Za-z_][A-Za-z0-9_.<>, \[\]]*\s+([A-Za-z_][A-Za-z0-9_]*)\s*\(/.exec(l))) {
			if (!methods.has(m[1])) methods.set(m[1], i);
		}
	}

	// ---------------- (2) events ----------------
	const evNames = new Set();
	for (const name of methods.keys()) {
		const m = /^(add|remove)_([A-Za-z_][A-Za-z0-9_]*)$/.exec(name);
		if (m) evNames.add(m[2]);
	}
	for (const ev of evNames) {
		const aIdx = methods.get(`add_${ev}`);
		const rIdx = methods.get(`remove_${ev}`);
		const f = fields.get(ev);
		if (aIdx === undefined || rIdx === undefined || !f) { stats.eventsSkipped++; continue; }
		const ra = blockRange(lines, aIdx);
		const rr = blockRange(lines, rIdx);
		if (!ra || !rr) { stats.eventsSkipped++; continue; }
		repl.set(f.idx, [`${f.indent}public ${f.isStatic ? 'static ' : ''}event ${f.type} ${ev};`]);
		for (let i = ra.sig; i <= ra.end; i++) del.add(i);
		for (let i = rr.sig; i <= rr.end; i++) del.add(i);
		for (let i = ra.sig - 1; i >= 0 && lines[i].trim() === ''; i--) del.add(i);
		stats.events++;
		stats.eventMethodsRemoved += 2;
		touched = true;
	}

	// ---------------- (3) operators ----------------
	for (let i = 0; i < lines.length; i++) {
		if (del.has(i) || isComment(lines[i])) continue;
		const m = /^(\s*(?:public|private|protected|internal)\s+(?:static\s+)?)([A-Za-z_][A-Za-z0-9_.<>, \[\]]*)\s+op_(Implicit|Explicit)\s*\(/.exec(lines[i]);
		if (!m) continue;
		const next = lines[i].replace(m[0], `${m[1]}${m[3].toLowerCase()} operator ${m[2]}(`);
		repl.set(i, [next]);
		stats.operators++;
		touched = true;
	}

	// ---------------- (4) properties ----------------
	for (const [name, p] of props) {
		const gIdx = methods.get(`get_${name}`);
		const sIdx = methods.get(`set_${name}`);
		if (gIdx === undefined && sIdx === undefined) continue;
		const rg = gIdx !== undefined ? blockRange(lines, gIdx) : null;
		const rs = sIdx !== undefined ? blockRange(lines, sIdx) : null;
		if ((gIdx !== undefined && !rg) || (sIdx !== undefined && !rs)) continue;

		const acc = [];
		if (rg) {
			acc.push(`${p.indent}\tget`, `${p.indent}\t{`,
				...bodyLines(lines, rg, indentOf(lines[rg.sig]), `${p.indent}\t\t`),
				`${p.indent}\t}`);
			for (let i = rg.sig; i <= rg.end; i++) del.add(i);
			for (let i = rg.sig - 1; i >= 0 && lines[i].trim() === ''; i--) del.add(i);
			stats.accessorMethodsRemoved++;
		}
		if (rs) {
			acc.push(`${p.indent}\tset`, `${p.indent}\t{`,
				...bodyLines(lines, rs, indentOf(lines[rs.sig]), `${p.indent}\t\t`),
				`${p.indent}\t}`);
			for (let i = rs.sig; i <= rs.end; i++) del.add(i);
			for (let i = rs.sig - 1; i >= 0 && lines[i].trim() === ''; i--) del.add(i);
			stats.accessorMethodsRemoved++;
		}
		repl.set(p.idx, [`${p.indent}${p.mods} ${p.type} ${name}`, `${p.indent}{`, ...acc, `${p.indent}}`]);
		stats.properties++;
		touched = true;
	}

	if (!touched) return;

	// ---------------- rebuild ----------------
	const out = [];
	for (let i = 0; i < lines.length; i++) {
		if (del.has(i)) continue;
		if (repl.has(i)) { out.push(...repl.get(i)); continue; }
		out.push(lines[i]);
	}
	// collapse runs of blank lines
	const compact = [];
	for (const l of out) {
		if (l.trim() === '' && compact.length && compact[compact.length - 1].trim() === '') continue;
		compact.push(l);
	}
	while (compact.length && compact[compact.length - 1].trim() === '') compact.pop();
	const res = compact.join(eol) + eol;
	if (res !== src) {
		stats.changed++;
		if (!DRY) fs.writeFileSync(file, res, 'utf8');
	}
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
console.log(JSON.stringify(stats, null, 2));
if (notes.length) console.log(notes.slice(0, 20).join('\n'));
