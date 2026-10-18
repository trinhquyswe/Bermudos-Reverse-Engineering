'use strict';
// Combine the two independent identifications of a method's wasm function:
//   A - name section / dcmp call-order mapping      (asm2cs_map.json)
//   B - exact wasm bytecode match of the ISIL listing (wasm_index_matches.json)
// and report coverage plus where they agree.
//
// Usage: node combine_ids.js

const fs = require('fs');
const path = require('path');

const A = JSON.parse(fs.readFileSync(path.join(__dirname, 'asm2cs_map.json'), 'utf8'));
const B = JSON.parse(fs.readFileSync(path.join(__dirname, 'wasm_index_matches.json'), 'utf8'));

const keyOf = (file, type, name) => `${file}|${type}|${name}`;
const aByKey = new Map();
for (const r of A.rows) aByKey.set(keyOf(r.file, r.type, r.name === r.type ? '.ctor' : r.name), r);
const bByKey = new Map();
for (const m of B.matches) bByKey.set(keyOf(m.file, m.type, m.name === m.type.split('.').pop() ? '.ctor' : m.name), m);

// also index A rows by file+member since ctor naming differs between the two scripts
const aByKey2 = new Map();
for (const r of A.rows) aByKey2.set(`${r.file}|${r.name}`, r);
const bByKey2 = new Map();
for (const m of B.matches) bByKey2.set(`${m.file}|${m.name}`, m);

const all = new Set();
for (const r of A.rows) all.add(`${r.file}|${r.name}`);
for (const m of B.matches) all.add(`${m.file}|${m.name}`);
for (const u of A.rejects) all.add(`${u.file}|${u.key.split('::').pop()}`);

let both = 0, onlyA = 0, onlyB = 0, neither = 0;
const disagree = [];
const neitherList = [];
for (const k of all) {
	const a = aByKey2.get(k), b = bByKey2.get(k);
	if (a && b) {
		both++;
		if (a.func !== b.func) disagree.push({ k, a: a.func, b: b.func, aName: a.funcName });
	} else if (a) onlyA++;
	else if (b) onlyB++;
	else { neither++; neitherList.push(k); }
}

console.log(JSON.stringify({
	methods: all.size,
	identifiedByBoth: both,
	agreeBoth: both - disagree.length,
	disagreeBoth: disagree.length,
	onlyNameDcmp: onlyA,
	onlyBytecode: onlyB,
	unidentified: neither,
}, null, 2));

console.log('\n--- disagreements (first 20) ---');
for (const d of disagree.slice(0, 20)) console.log(`  ${d.k}   A=func${d.a} (${d.aName})   B=func${d.b}`);

console.log('\n--- unidentified by either (first 40) ---');
for (const k of neitherList.slice(0, 40)) console.log('  ' + k);
fs.writeFileSync(path.join(__dirname, 'ids_combined.json'), JSON.stringify({ disagree, neither: neitherList }, null, 1));
