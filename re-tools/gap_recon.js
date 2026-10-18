'use strict';
// Recon: classify the Scripts/Assembly-CSharp tree.
//  - files carrying the step-5 ISIL disassembly header
//  - files that are still untouched AssetRipper output (no disassembly)
// and cross-reference the latter against the Cpp2IL reconstructed tree and the
// IL2CPP metadata dump.
//
// Usage: node gap_recon.js

const fs = require('fs');
const path = require('path');

const SCRIPTS = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\RippedProject\\ExportedProject\\Assets\\Scripts\\Assembly-CSharp';
const DECOMP = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\CSharp\\Assembly-CSharp';
const ISIL = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Decompiled\\isil\\IsilDump\\Assembly-CSharp';

const HEADER = 'wasm disassembly (Cpp2IL ISIL';

function listCs(dir) {
	const out = [];
	(function walk(d) {
		for (const e of fs.readdirSync(d, { withFileTypes: true })) {
			const p = path.join(d, e.name);
			if (e.isDirectory()) walk(p);
			else if (e.name.toLowerCase().endsWith('.cs')) out.push(p);
		}
	})(dir);
	return out;
}

const scripts = listCs(SCRIPTS);
const decomp = listCs(DECOMP);
const isil = listCs(ISIL).map((p) => path.basename(p));

// IL2CPP type names from dump.cs
const dumpSrc = fs.readFileSync('C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Dump\\dump.cs', 'utf8');
const dumpTypes = new Set();
{
	const re = /^\s*(?:public|private|internal|protected)?\s*(?:sealed\s+|abstract\s+|static\s+)*(class|struct|interface|enum)\s+([A-Za-z_][A-Za-z0-9_]*)/gm;
	let m;
	while ((m = re.exec(dumpSrc))) dumpTypes.add(m[2]);
}

const withHeader = [];
const withoutHeader = [];
for (const f of scripts) {
	const src = fs.readFileSync(f, 'utf8');
	(src.includes(HEADER) ? withHeader : withoutHeader).push({ f, src });
}

console.log(JSON.stringify({
	scriptsCs: scripts.length,
	decompCs: decomp.length,
	isilTxt: isil.length,
	withDisassembly: withHeader.length,
	withoutDisassembly: withoutHeader.length,
	dumpTypeNames: dumpTypes.size,
}, null, 2));

// how much real code do the "without header" files carry?
function classifyStub(src) {
	const lines = src.split(/\r?\n/);
	const methodBodies = src.match(/\{\s*\}/g) || [];
	const realStatements = lines.filter((l) => /;\s*$/.test(l) && !/^\s*\/\//.test(l) && !/^\s*(using|namespace|\[)/.test(l) && !/\{\s*$/.test(l)).length;
	return { lines: lines.length, emptyBraces: methodBodies.length, statementish: realStatements };
}

console.log('\n--- without a disassembly header ---');
const rows = [];
for (const { f, src } of withoutHeader) {
	const base = path.basename(f, '.cs');
	const c = classifyStub(src);
	const inDecomp = decomp.some((d) => path.basename(d, '.cs') === base);
	const inIsil = isil.includes(base + '.txt');
	rows.push({ rel: path.relative(SCRIPTS, f), lines: c.lines, emptyBraces: c.emptyBraces, stmt: c.statementish, inDecomp, inIsil });
}
rows.sort((a, b) => a.rel.localeCompare(b.rel));
for (const r of rows) {
	console.log(`${String(r.lines).padStart(5)}L  empty{}=${String(r.emptyBraces).padStart(3)}  stmt=${String(r.stmt).padStart(4)}  decomp=${r.inDecomp ? 'Y' : 'n'}  isil=${r.inIsil ? 'Y' : 'n'}  ${r.rel}`);
}
