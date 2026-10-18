'use strict';
// Replace the leftover wabt pseudo-code blocks ("Additional recovered functions") with the
// *recovered* per-method wasm disassembly of the compiler-generated nested types, and add
// such a block for owner types that had none.
//
// Source: Decompiled/isil/IsilDump/Assembly-CSharp/**/*.txt entries whose `Type:` is a nested
// type (`Owner+<StateMachine>d__N`, `Owner+<>c`, `Owner+<>c__DisplayClassN_M`).
// These types have no .cs file (their metadata names are not legal C# identifiers), so their
// recovered code is kept as a comment block at the end of the owner's body.
//
// Nothing is inferred - only the recovered instructions are emitted.
//
// Usage: node add_nested.js <Assembly-CSharp dir> [--dry]

const fs = require('fs');
const path = require('path');

const DIR = process.argv[2];
const DRY = process.argv.includes('--dry');
const ISIL_ROOT = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\isil\\IsilDump\\Assembly-CSharp';

const norm = (s) => String(s).replace(/`\d+/g, '');
const TYPE_DECL = /^(?:\[[^\]]*\]\s*)*(?:public|internal|private|protected)\s+(?:sealed\s+|abstract\s+|static\s+|partial\s+|unsafe\s+)*(class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_]*)/;
const OLD_MARKERS = [
	/^\s*\/\/ ---- Additional recovered functions/,
	/^\s*\/\/ ---- compiler-generated nested types/,
	/^\s*\/\/ ---- nested types recovered from wasm/,
];

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

// ---------- nested-type index: owner full name -> [{ name, methods }] ----------
const nestedByOwner = new Map();
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
		const plus = full.indexOf('+');
		if (plus < 0) continue;                       // not a nested type
		const owner = norm(full.slice(0, plus));
		const methods = [];
		let cur = null;
		for (const line of txt.split(/\r?\n/)) {
			const mm = /^Method:\s*(.+)$/.exec(line);
			if (mm) { cur = { sig: mm[1].trim(), dis: [] }; methods.push(cur); continue; }
			if (!cur) continue;
			const im = /^\s*(0x[0-9a-fA-F]+\s+\S.*)$/.exec(line);
			if (im) cur.dis.push(im[1].trim());
		}
		if (!nestedByOwner.has(owner)) nestedByOwner.set(owner, []);
		nestedByOwner.get(owner).push({ name: full, methods });
	}
})();

// ---------- per file ----------
const stats = { files: 0, changed: 0, ownersWithNested: 0, ownersNewlyCovered: 0, nestedTypes: 0, methods: 0, instructions: 0, oldBlocksRemoved: 0, oldPseudoCodeLines: 0 };

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
	let typeName = null, typeLine = -1, typeIndent = '';
	for (let i = 0; i < lines.length; i++) {
		const t = TYPE_DECL.exec(lines[i].trim());
		if (t) { typeName = t[2]; typeLine = i; typeIndent = /^(\s*)/.exec(lines[i])[1]; break; }
	}
	if (!typeName) continue;
	stats.files++;

	// locate the end of the type body
	let typeClose = -1, depth = 0, opened = false;
	for (let i = typeLine; i < lines.length; i++) {
		const d = braceDelta(lines[i]);
		if (d > 0) opened = true;
		depth += d;
		if (opened && depth === 0) { typeClose = i; break; }
	}
	if (typeClose < 0) continue;

	// locate an existing leftover block
	let marker = -1;
	for (let i = typeLine; i < typeClose; i++) {
		if (OLD_MARKERS.some((re) => re.test(lines[i]))) { marker = i; break; }
	}
	if (marker >= 0) {
		stats.oldBlocksRemoved++;
		stats.oldPseudoCodeLines += typeClose - marker;
	}

	const nested = nestedByOwner.get(norm(ns ? `${ns}.${typeName}` : typeName)) || [];
	if (!nested.length && marker < 0) continue;
	if (nested.length) { stats.ownersWithNested++; if (marker < 0) stats.ownersNewlyCovered++; }

	const block = [];
	if (nested.length) {
		const ind = typeIndent + '\t';
		block.push(`${ind}// ---- nested types recovered from wasm (Cpp2IL ISIL, from build.named.wasm) ----`);
		block.push(`${ind}// These are nested in the type above (compiler-generated state machines, closures and`);
		block.push(`${ind}// nested helper types). Their IL2CPP names are not legal C# identifiers, so they have no`);
		block.push(`${ind}// .cs file of their own; their recovered code is kept here instead.`);
		block.push(`${ind}//`);
		for (const n of nested.slice().sort((a, b) => a.name.localeCompare(b.name))) {
			stats.nestedTypes++;
			block.push(`${ind}// Type: ${n.name}`);
			for (const m of n.methods) {
				stats.methods++;
				block.push(`${ind}// Method: ${m.sig}`);
				if (m.dis.length) {
					stats.instructions += m.dis.length;
					for (const d of m.dis) block.push(`${ind}//   ${d}`);
				} else {
					block.push(`${ind}//   <no disassembly>`);
				}
			}
			block.push(`${ind}//`);
		}
		while (block.length && block[block.length - 1] === `${ind}//`) block.pop();
	}

	// rebuild: everything up to the block, the new block, then the type's closing brace onwards
	const head = lines.slice(0, marker >= 0 ? marker : typeClose);
	while (head.length && head[head.length - 1].trim() === '') head.pop();
	const out = [...head];
	if (block.length) out.push('', ...block);
	out.push(...lines.slice(typeClose));

	const res = out.join(eol);
	if (res !== src) {
		stats.changed++;
		if (!DRY) fs.writeFileSync(file, res, 'utf8');
	}
}

console.log(JSON.stringify(stats, null, 2));
