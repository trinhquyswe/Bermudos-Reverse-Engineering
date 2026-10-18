'use strict';
// Recover default parameter values from the Cpp2IL ISIL method signatures and apply them
// to the reconstructed declarations.
//
// dump.cs prints parameter lists without default values, but the ISIL dump keeps them
// (`Method: System.Void CallMapChangedEvent(Map map = null)`), so the declaration can be
// completed with real recovered data - nothing is invented.
//
// Usage: node fix_defaults.js <Assembly-CSharp dir> [--dry]

const fs = require('fs');
const path = require('path');

const DIR = process.argv[2];
const DRY = process.argv.includes('--dry');
const ISIL_ROOT = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\isil\\IsilDump\\Assembly-CSharp';

const norm = (s) => String(s).replace(/`\d+/g, '');
const TYPE_DECL = /^(?:\[[^\]]*\]\s*)*(?:public|internal|private|protected)\s+(?:sealed\s+|abstract\s+|static\s+|partial\s+|unsafe\s+)*(class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_]*)/;

function splitTop(s, sep) {
	const out = [];
	let depth = 0, cur = '';
	for (const ch of s) {
		if (ch === '<' || ch === '(' || ch === '[') depth++;
		else if (ch === '>' || ch === ')' || ch === ']') depth--;
		if (ch === sep && depth === 0) { out.push(cur); cur = ''; continue; }
		cur += ch;
	}
	out.push(cur);
	return out;
}

function paramTypeSimple(p) {
	let t = p.split('=')[0].trim();
	if (!t) return '';
	t = t.replace(/^(?:ref|out|in|params|this)\s+/, '');
	const toks = t.split(/\s+/);
	if (toks.length > 1) toks.pop();
	t = toks.join(' ').replace(/<.*$/, '').replace(/\[\s*\]/g, '').trim();
	return norm(t.split('.').pop()).toLowerCase();
}

// ---------- ISIL index ----------
const index = new Map();   // norm(full type) -> [{name, arity, params, defaults, raw}]

(function buildIndex() {
	const files = [];
	(function walk(d) {
		for (const e of fs.readdirSync(d, { withFileTypes: true })) {
			const p = path.join(d, e.name);
			if (e.isDirectory()) walk(p);
			else if (e.name.endsWith('.txt')) files.push(p);
		}
	})(ISIL_ROOT);

	for (const f of files) {
		const txt = fs.readFileSync(f, 'utf8');
		const tm = /^Type:\s*(.+)$/m.exec(txt);
		if (!tm) continue;
		const full = tm[1].trim();
		const entries = [];
		for (const line of txt.split(/\r?\n/)) {
			const mm = /^Method:\s*(.+)$/.exec(line);
			if (!mm) continue;
			const raw = mm[1].trim();
			const open = raw.indexOf('(');
			const close = raw.lastIndexOf(')');
			if (open < 0 || close < open) continue;
			const name = norm(raw.slice(0, open).trim().split(/\s+/).pop());
			const inner = raw.slice(open + 1, close).trim();
			const params = inner ? splitTop(inner, ',').map((p) => p.trim()).filter(Boolean) : [];
			const defaults = new Map();
			for (const p of params) {
				const d = /^\s*(.*?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(.+?)\s*$/.exec(p);
				if (d) defaults.set(d[2], d[3]);
			}
			entries.push({ name, arity: params.length, params: params.map(paramTypeSimple), defaults });
		}
		if (entries.length) index.set(norm(full), entries);
	}
})();

function csharpMemberKey(decl, typeName) {
	const t = decl.trim();
	const open = t.indexOf('(');
	const close = t.lastIndexOf(')');
	if (open < 0 || close < open) return null;
	let name = norm(t.slice(0, open).trim().split(/\s+/).pop()).replace(/^~/, 'Finalize');
	const base = typeName.replace(/<.*$/, '');
	if (name === base) name = /\bstatic\b/.test(t) ? '.cctor' : '.ctor';
	const inner = t.slice(open + 1, close);
	const params = inner.trim() ? splitTop(inner, ',').map(paramTypeSimple) : [];
	return { name, arity: params.length, params };
}

function pick(entries, key) {
	const cands = entries.filter((e) => e.name === key.name && e.arity === key.arity);
	if (cands.length === 1) return cands[0];
	if (cands.length > 1) {
		const typed = cands.filter((e) => e.params.every((p, i) => p === key.params[i]));
		if (typed.length === 1) return typed[0];
	}
	return null;
}

// Cpp2IL renders booleans as True/False in signatures
function literal(d) {
	return d.replace(/\bTrue\b/g, 'true').replace(/\bFalse\b/g, 'false');
}

function patchDefaults(decl, defaults) {
	const open = decl.indexOf('(');
	const close = decl.lastIndexOf(')');
	if (open < 0 || close < open) return decl;
	const inner = decl.slice(open + 1, close);
	if (!inner.trim()) return decl;
	const parts = splitTop(inner, ',');
	const sep = inner.includes(', ') ? ', ' : ',';
	let changed = false;
	const out = parts.map((p) => {
		if (p.includes('=')) return p;
		const nm = /([A-Za-z_][A-Za-z0-9_]*)\s*$/.exec(p.trim());
		if (!nm || !defaults.has(nm[1])) return p;
		changed = true;
		return p.replace(/\s*$/, '') + ' = ' + literal(defaults.get(nm[1]));
	});
	return changed ? decl.slice(0, open + 1) + out.join(sep) + decl.slice(close) : decl;
}

// ---------- per file ----------
const stats = { files: 0, members: 0, patched: 0, applied: 0 };
const samples = [];

const files = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (e.name.toLowerCase().endsWith('.cs')) files.push(p);
	}
})(DIR);

for (const file of files) {
	const src = fs.readFileSync(file, 'utf8');
	if (!/Reconstructed from IL2CPP metadata/.test(src.slice(0, 700))) continue;
	const eol = src.includes('\r\n') ? '\r\n' : '\n';
	const lines = src.split(/\r?\n/);

	const nsLine = /^\/\/ Namespace:[ \t]*(.*)$/m.exec(src);
	const ns = nsLine ? nsLine[1].trim() : '';
	let typeName = null;
	for (const l of lines) {
		const t = TYPE_DECL.exec(l.trim());
		if (t) { typeName = t[2]; break; }
	}
	if (!typeName) continue;
	stats.files++;

	const entries = index.get(norm(ns ? `${ns}.${typeName}` : typeName));
	if (!entries) continue;

	const isComment = (i) => lines[i].trimStart().startsWith('//');
	const structural = [];
	for (let i = 0; i < lines.length; i++) if (lines[i].trim() && !isComment(i)) structural.push(i);

	const repl = new Map();
	for (let p = 0; p < structural.length; p++) {
		const i = structural[p];
		const t = lines[i].trim();
		if (t === '{' || t === '}' || t === 'get' || t === 'set' || t === 'add' || t === 'remove') continue;
		if (TYPE_DECL.test(t)) continue;
		if (/^(?:using|namespace)\b/.test(t)) continue;
		if (/^\[/.test(t) || t.endsWith(';') || !t.includes('(')) continue;

		// join a wrapped declaration
		let decl = t, qi = p, guard = 0;
		while (guard++ < 12) {
			const o = (decl.match(/\(/g) || []).length;
			const c = (decl.match(/\)/g) || []).length;
			if (o > 0 && o === c) break;
			if (qi + 1 >= structural.length) break;
			qi++;
			decl += ' ' + lines[structural[qi]].trim();
		}
		const key = csharpMemberKey(decl, typeName);
		if (!key) continue;
		const entry = pick(entries, key);
		if (!entry || !entry.defaults.size) continue;
		stats.members++;
		const patched = patchDefaults(decl, entry.defaults);
		if (patched === decl) continue;
		const indent = /^(\s*)/.exec(lines[i])[1];
		const newLines = [indent + patched];
		repl.set(i, newLines);
		for (let k = i + 1; k <= structural[qi]; k++) repl.set(k, null);
		stats.patched++;
		stats.applied += entry.defaults.size;
		if (samples.length < 10) samples.push(`${path.basename(file)}: ${patched.slice(0, 110)}`);
	}

	if (!repl.size) continue;
	const out = [];
	for (let i = 0; i < lines.length; i++) {
		if (repl.has(i)) { const v = repl.get(i); if (v) out.push(...v); continue; }
		out.push(lines[i]);
	}
	const res = out.join(eol);
	if (!DRY && res !== src) fs.writeFileSync(file, res, 'utf8');
}

console.log(JSON.stringify({ filesScanned: stats.files, membersWithIsilDefaults: stats.members, declarationsPatched: stats.patched }, null, 2));
if (samples.length) { console.log('--- samples ---'); console.log(samples.join('\n')); }
