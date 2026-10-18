'use strict';
// Independent sanity check for the method -> wasm-function identification.
//
// The tree files carry Cpp2IL's IL-level listing, whose `Call N ; Namespace.Type::Method` comments name
// the *IL* call targets.  The dcmp body of the identified wasm function names its own callees (from the
// wasm name section).  For a correct identification the two name sets must overlap heavily; a basically
// empty overlap means the mapping (usually a name-only match on an ICF-aliased name) is wrong.
//
//   node check_confidence.js [--list]
const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DIR = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');

const DATA = JSON.parse(fs.readFileSync(path.join(__dirname, 'dcmp_bodies.json'), 'utf8'));
const NAMES = JSON.parse(fs.readFileSync(path.join(__dirname, 'dcmp_names.json'), 'utf8'));

const MODS = /^(?:(?:public|private|protected|internal|static|virtual|override|sealed|abstract|readonly|extern|unsafe|new|partial)\s+)*/;
const IDENT = '[A-Za-z_][A-Za-z0-9_]*';
function parseSignature(line) {
	const text = line.replace(/^\t+/, '').trim();
	const mods = (MODS.exec(text) || [''])[0].trim();
	let rest = text.slice(mods.length).trim();
	const m = /^(.+?)\(([^)]*)\)$/.exec(rest);
	if (!m) return null;
	const head = m[1].trim();
	const nameM = new RegExp(`(${IDENT})\\s*$`).exec(head);
	if (!nameM) return null;
	return { mods, ret: head.slice(0, nameM.index).trim() || null, name: nameM[1], paramsRaw: m[2] };
}
function norm(n) {
	let s = String(n).replace(/^multiple_\d+_/, '').replace(/`\d+/g, '');
	const parts = s.split('::');
	if (parts.length === 2) {
		let meth = parts[1];
		if (meth.startsWith('.')) meth = meth.slice(1);
		return `${parts[0]}.${meth}`;
	}
	return s.replace(/::/g, '.');
}
// tree listings: file -> [{type (class we are under), sig, calls: [names]}]
function loadTree() {
	const out = new Map();
	for (const f of fs.readdirSync(DIR).filter((x) => x.endsWith('.cs'))) {
		const lines = fs.readFileSync(path.join(DIR, f), 'utf8').split(/\r?\n/);
		const methods = [];
		for (let i = 0; i < lines.length; i++) {
			if (!/^\t\t\/\/ ---- wasm disassembly/.test(lines[i])) continue;
			let sigLine = i - 2;
			while (sigLine >= 0 && lines[sigLine].trim() === '') sigLine--;
			const sig = parseSignature(lines[sigLine]);
			if (!sig) continue;
			const calls = [];
			let j = i + 1;
			while (j < lines.length && /^\t\t\/\//.test(lines[j])) {
				const cm = /Call -?\d+\s*;\s*(.+?)\s*$/.exec(lines[j]);
				if (cm) calls.push(norm(cm[1]));
				j++;
			}
			methods.push({ ...sig, calls });
		}
		out.set(f, methods);
	}
	return out;
}
const TREE = loadTree();

function collectDcmpCalls(body) {
	const calls = [];
	for (const m of body.matchAll(/([A-Za-z_$][A-Za-z0-9_$]*)\s*\(/g)) {
		const n = m[1];
		if (['if', 'select_if', 'call_indirect', 'eqz', 'min', 'max', 'sqrt', 'abs', 'ceil', 'floor', 'trunc', 'nearest'].includes(n)) continue;
		calls.push(norm(renderName(n)));
	}
	return calls;
}
function renderName(printed) {
	const rec = NAMES.byPrinted[printed];
	if (!rec || !rec[1]) return printed;
	return rec[1];
}

function findTree(m) {
	const list = TREE.get(m.file);
	if (!list) return null;
	const cands = list.filter((x) => x.name === m.name);
	if (cands.length <= 1) return cands[0] || null;
	return cands.find((x) => x.mods.includes('static') === !!m.isStatic) || cands[0];
}

const rows = [];
for (const m of DATA.methods) {
	const tree = findTree(m);
	if (!tree) { rows.push({ m, score: null }); continue; }
	const tset = new Set(tree.calls);
	const dset = new Set(collectDcmpCalls(m.body || ''));
	let inter = 0;
	for (const n of tset) if (dset.has(n)) inter++;
	const score = tset.size === 0 ? null : inter / tset.size;
	rows.push({ m, score, t: tset.size, d: dset.size, tree, inter });
}

const buckets = { high: 0, mid: 0, low: 0, zero: 0, none: 0 };
for (const r of rows) {
	if (r.score === null) buckets.none++;
	else if (r.score >= 0.6) buckets.high++;
	else if (r.score >= 0.3) buckets.mid++;
	else if (r.score > 0) buckets.low++;
	else buckets.zero++;
}
console.log(JSON.stringify(buckets, null, 1));
const byHow = {};
for (const r of rows) {
	const h = r.m.how;
	byHow[h] = byHow[h] || { high: 0, mid: 0, low: 0, zero: 0, none: 0 };
	const b = r.score === null ? 'none' : (r.score >= 0.6 ? 'high' : r.score >= 0.3 ? 'mid' : r.score > 0 ? 'low' : 'zero');
	byHow[h][b]++;
}
console.log('by how:', JSON.stringify(byHow, null, 1));
if (process.argv.includes('--list')) {
	const bad = rows.filter((r) => r.score !== null && r.score < 0.3).sort((a, b) => a.score - b.score);
	for (const r of bad) {
		console.log(`${r.score.toFixed(2)}  ${r.m.how.padEnd(13)} ${r.m.file} ${r.m.type}::${r.m.name}  treeCalls=${r.t} dcmpCalls=${r.d}`);
		console.log(`        tree: ${[...new Set(r.tree.calls)].slice(0, 6).join(', ')}`);
	}
}
