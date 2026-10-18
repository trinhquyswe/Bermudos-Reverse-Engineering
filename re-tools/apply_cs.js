'use strict';
// apply_cs.js — rewrite the in-scope tree files: replace each identified method's raw wasm listing with
// the mechanical C# translation produced by asm2cs_dcmp.js (asm2cs_out.json), and mark the methods whose
// wasm function could not be identified with confidence (their listing is kept verbatim).
//
//   node apply_cs.js --dry        report what would change
//   node apply_cs.js             apply (the tree files are under git, that is the backup)
//
// For every touched file the provenance header gains the legend of the remaining wasm/IL2CPP idioms, and
// the anonymous wabt record types used by the bodies are declared once, inside the class.
const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DIR = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const DRY = process.argv.includes('--dry');

const OUT = JSON.parse(fs.readFileSync(path.join(__dirname, 'asm2cs_out.json'), 'utf8'));

const MODS = /^(?:(?:public|private|protected|internal|static|virtual|override|sealed|abstract|readonly|extern|unsafe|new|partial)\s+)*/;
const IDENT = '[A-Za-z_][A-Za-z0-9_]*';
function parseSignature(line) {
	const text = line.replace(/^\t+/, '').trim();
	const mods = (MODS.exec(text) || [''])[0].trim();
	const rest = text.slice(mods.length).trim();
	const m = /^(.+?)\(([^)]*)\)$/.exec(rest);
	if (!m) return null;
	const head = m[1].trim();
	const nameM = new RegExp(`(${IDENT})\\s*$`).exec(head);
	if (!nameM) return null;
	return { mods, ret: head.slice(0, nameM.index).trim() || null, name: nameM[1], paramsRaw: m[2] };
}

const HEADER = [
	'// Reconstructed from IL2CPP metadata (Dump/dump.cs) + the decompiled WebAssembly binary',
	'// (Decompiled/build.dcmp, wabt wasm-decompile; raw listings in Decompiled/isil/).  Types, fields and',
	'// method signatures come from the metadata; each method body below is a *mechanical* C# translation of',
	'// the wasm function the metadata names for it, so IL2CPP idioms stay visible:',
	'//   g_a                             IL2CPP evaluation-stack pointer (the frame grows downwards)',
	'//   d_p444444444444044P44p44444444  il2cpp metadata-usage table (class/type/method/string literals)',
	'//   f_xxxx                          call into a wasm function wabt could not name',
	'//   call_indirect(...)              unresolved indirect call (the target is the first argument)',
	'//   Rec_xxxx                        anonymous wabt record type, fields in recovered order',
	'//   localN                          unnamed wasm local slot (in the few bodies translated from the raw',
	'//                                   ISIL listing because no wasm function could be matched to the method)',
	'// Every method keeps a one-line `// wasm funcNNN ...` header with its function index and ISIL op count.',
	'//',
	'// Control flow is rebuilt from the wasm block structure: wasm `br`/`br_if` become `if`/`else`, `break`',
	'// and `continue`, `loop` becomes `while (true)`, and a `br_table` becomes a `switch`.  A branch shape',
	'// that cannot be reduced (a jump into the middle of a loop, an irreducible region) keeps a `B_x:` label',
	'// and `goto` and is noted in the method header.  IL2CPP class-initializer guards and the',
	'// `Monitor.Enter` type-initialized check are scaffolding and have been removed.',
	'//',
	'// Where a reconstructed `switch` case would fall through into the next case, the shared tail is',
	'// repeated in each case (C# does not fall through), so switch-heavy methods are longer than the wasm.',
];

// translated methods grouped by file
const byFile = new Map();
for (const m of OUT.methods) {
	const b = path.basename(m.file);
	for (const k of b === m.file ? [m.file] : [m.file, b]) {
		if (!byFile.has(k)) byFile.set(k, []);
		byFile.get(k).push(m);
	}
}

// Only the game scripts of the project layout may be touched (scope.js): everything else in the
// assembly (the BehaviorDesigner / TMPro copies and other assemblies' code) keeps its raw listings,
// header and line endings.  Path-aware, so colliding names like BehaviorDesigner/Runtime/Tasks/Idle.cs
// are not mistaken for the game's Idle.cs.
const { inScope } = require('./scope.js');

let filesTouched = 0;
let replaced = 0;
let keptRaw = 0;
const report = [];

// walk the tree recursively: the files may sit in subsystem folders (see layout_tree.js)
const treeFiles = [];
(function walk(d) {
	for (const e of fs.readdirSync(d, { withFileTypes: true })) {
		const p = path.join(d, e.name);
		if (e.isDirectory()) walk(p);
		else if (e.name.endsWith('.cs')) treeFiles.push(p);
	}
})(DIR);

for (const full of treeFiles) {
	const f = path.relative(DIR, full).split(path.sep).join('/');
	if (!inScope(f)) continue;
	const raw = fs.readFileSync(full, 'utf8');
	const eol = raw.includes('\r\n') ? '\r\n' : '\n';
	let lines = raw.split(/\r?\n/);

	// ---- locate the method blocks (same discovery as the translator, including property accessors)
	const blocks = [];
	for (let i = 0; i < lines.length; i++) {
		const mk = /^(\t+)\/\/ ---- wasm disassembly/.exec(lines[i]);
		if (!mk) continue;
		const indent = mk[1];
		let sigLine = i - 2;
		while (sigLine >= 0 && lines[sigLine].trim() === '') sigLine--;
		let sig = parseSignature(lines[sigLine]);
		if (!sig && (lines[i - 1] || '').trim() === '{') {
			const kw = (lines[i - 2] || '').trim();
			if (kw === 'get' || kw === 'set') {
				for (let up = i - 4; up >= 0 && up > i - 9; up--) {
					const pd = parseSignature(`${lines[up]}()`);
					if (pd && pd.name) { sig = { ...pd, name: `${kw}_${pd.name}` }; sigLine = up; break; }
				}
			}
		}
		if (!sig) continue;
		let j = i + 1;
		while (j < lines.length && lines[j].startsWith(`${indent}//`)) j++;
		blocks.push({ marker: i, sigLine, close: j, sig });
	}
	if (!blocks.length) continue;

	const translated = byFile.get(f) || [];
	const byMarker = new Map(translated.map((m) => [m.markerLine, m]));

	// ---- build the new content, bottom-up so that the earlier line numbers stay valid
	const edits = []; // {from, to, lines}
	let firstMethodLine = Infinity;
	for (const b of blocks) {
		firstMethodLine = Math.min(firstMethodLine, b.sigLine);
		const m = byMarker.get(b.marker);
		if (!m) {
			keptRaw++;
			edits.push({
				from: b.marker,
				to: b.marker,
				lines: ['\t\t// No wasm function could be identified for this method with confidence: the raw',
					'\t\t// listing is kept verbatim (see RE_REPORT.md, asm -> C# phase).'],
			});
			continue;
		}
		// m.lines = [ header, signature, '{', ...decls, '', ...body, '}' ]
		const head = m.lines[0];
		const inner = m.lines.slice(3, -1);
		const rep = [`\t\t${head}` ];
		for (const n of m.notes || []) rep.push(`\t\t// note: ${n}`);
		rep.push(...inner);
		edits.push({ from: b.marker, to: b.close - 1, lines: rep });
		replaced++;
	}

	// ---- record types used by this file's bodies, declared once inside the class
	const recs = new Map();
	for (const m of translated) for (const r of m.records || []) if (!recs.has(r.rec)) recs.set(r.rec, r);
	if (recs.size) {
		const recLines = ['', '\t// Anonymous wabt record types used by the method bodies below (field order as recovered',
			'\t// by wabt; the offsets are byte offsets inside the record).'];
		for (const r of recs.values()) {
			recLines.push(`\tprivate struct ${r.rec}`, '\t{');
			for (const fl of r.fields) recLines.push(`\t\tpublic ${fl.cs} ${fl.name}; // +${fl.off}`);
			recLines.push('\t}', '');
		}
		edits.push({ from: firstMethodLine, to: firstMethodLine - 1, lines: recLines });
	}

	// ---- header
	const newHeader = HEADER.slice();
	if (/^\/\/ Reconstructed from IL2CPP metadata/.test(lines[0])) {
		let end = 0;
		while (end + 1 < lines.length && /^\/\/ /.test(lines[end + 1]) && !/^\/\/ (Namespace|Fields|Methods)/.test(lines[end + 1])) end++;
		edits.push({ from: 0, to: end, lines: newHeader });
	}

	edits.sort((a, b) => b.from - a.from);
	for (const e of edits) lines.splice(e.from, e.to - e.from + 1, ...e.lines);
	filesTouched++;
	report.push(`${f}: ${(byFile.get(f) || []).length} translated, ${blocks.length - (byFile.get(f) || []).length} kept raw`);
	if (!DRY) fs.writeFileSync(full, lines.join(eol), 'utf8');
}

console.log(JSON.stringify({ filesTouched, replaced, keptRaw, dryRun: DRY }, null, 1));
if (process.argv.includes('--list')) for (const r of report) console.log('  ' + r);
