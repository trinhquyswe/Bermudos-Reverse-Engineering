'use strict';
// Feature census over the dcmp bodies of the identified in-scope methods: which wabt constructs must
// the dcmp -> C# translator handle, and how often do they occur?
//
// Usage: node dcmp_census.js

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DCMP = path.join(REPO, 'Decompiled', 'build.dcmp');

// --- the combined identification: prefer bytecode (B), else name/dcmp (A)
const A = JSON.parse(fs.readFileSync(path.join(__dirname, 'asm2cs_map.json'), 'utf8'));
const B = JSON.parse(fs.readFileSync(path.join(__dirname, 'wasm_index_matches.json'), 'utf8'));
const bBy = new Map();
for (const m of B.matches) bBy.set(`${m.file}|${m.name}`, m.func);
const identify = []; // { key, func, how }
for (const r of A.rows) {
	const k = `${r.file}|${r.name}`;
	const b = bBy.get(k);
	identify.push({ key: `${r.type}::${r.name}`, func: b !== undefined ? b : r.func, how: b !== undefined ? 'bytecode' : r.how });
}
for (const m of B.matches) {
	if (A.rows.some((r) => r.file === m.file && r.name === m.name)) continue;
	identify.push({ key: `${m.type}::${m.name}`, func: m.func, how: 'bytecode-only' });
}
const want = new Map();
for (const it of identify) want.set(it.func, it);

// --- stream dcmp, collect the wanted bodies
const headRe = /^(export\s+)?(import\s+)?function\s+([A-Za-z_][\w.]*)\s*\(([^)]*)\)\s*(?::\s*([\w.]+))?\s*([{;])/;
const bodies = new Map();
{
	const fd = fs.openSync(DCMP, 'r');
	const size = fs.statSync(DCMP).size;
	const CHUNK = 8 * 1024 * 1024;
	let pos = 0, carry = '';
	let cur = -1, body = [];
	const flush = () => { if (cur >= 0 && want.has(cur)) bodies.set(cur, body.join('\n')); cur = -1; body = []; };
	while (pos < size) {
		const n = Math.min(CHUNK, size - pos);
		const b = Buffer.alloc(n);
		fs.readSync(fd, b, 0, n, pos);
		const text = carry + b.toString('utf8');
		const lines = text.split('\n');
		carry = lines.pop();
		for (const raw of lines) {
			const line = raw.replace(/\r$/, '');
			if (cur < 0) {
				if (!/\/\/\s*func\d+\s*$/.test(line)) continue;
				const h = headRe.exec(line);
				if (!h) continue;
				cur = parseInt(/\/\/\s*func(\d+)\s*$/.exec(line)[1], 10);
				body = [];
				if (h[2]) { flush(); continue; }
				continue;
			}
			if (line === '}') { flush(); continue; }
			body.push(line);
		}
		pos += n;
	}
	flush();
	fs.closeSync(fd);
}

const pats = {
	'label': /^\s*label\s+\w+:/m,
	'goto': /\bgoto\s+\w+/,
	'br_table': /br_table\[/,
	'loop': /\bloop\s+\w+\s*\{/,
	'continue': /\bcontinue\s+\w+/,
	'break': /\bbreak\s+\w+/,
	'if-expression': /\(if\s*\(/,
	'select_if': /\bselect_if\s*\(/,
	'try': /\btry\s*\{/,
	'catch': /\bcatch\b/,
	'throw': /\bthrow\b/,
	'call_indirect': /call_indirect\s*\(/,
	'var-with-init': /^\s*var\s+\w+:[^;]*=/m,
	'comma-expr': /,\s*$|\(\s*\w+\s*=/,
	'ubsan-helper': /\bf_[a-z]{3,5}\(/,
	'shift-by-32-pattern': /:int\)?\s*!=\s*0/,
};

const counts = {};
const examples = {};
let totalLines = 0;
const sizes = [];
for (const [func, body] of bodies) {
	totalLines += body.split('\n').length;
	sizes.push(body.split('\n').length);
	for (const [k, re] of Object.entries(pats)) {
		if (re.test(body)) {
			counts[k] = (counts[k] || 0) + 1;
			if (!examples[k]) {
				const it = want.get(func);
				const m = re.exec(body);
				const line = body.slice(Math.max(0, m.index - 60), m.index + 120).replace(/\n/g, ' | ');
				examples[k] = `${it ? it.key : 'func' + func}  ~  ${line}`;
			}
		}
	}
}

const nBodies = bodies.size;
console.log(JSON.stringify({
	identifiedMethods: identify.length,
	bodiesFoundInDcmp: nBodies,
	bodiesMissingInDcmp: identify.length - nBodies,
	totalBodyLines: totalLines,
	avgLines: Math.round(totalLines / Math.max(1, nBodies)),
	howUsed: identify.reduce((a, x) => { a[x.how] = (a[x.how] || 0) + 1; return a; }, {}),
}, null, 2));

console.log('\n--- construct frequency (bodies containing it) ---');
for (const [k, n] of Object.entries(counts).sort((a, b) => b[1] - a[1])) {
	console.log(`  ${String(n).padStart(5)}  ${k}`);
}
console.log('\n--- examples ---');
for (const [k, v] of Object.entries(examples)) console.log(`  ${k}: ${v.slice(0, 240)}`);

// list the identified methods whose bodies are missing from dcmp
const missing = identify.filter((it) => !bodies.has(it.func));
if (missing.length) {
	console.log('\n--- identified, but no dcmp body (first 20) ---');
	for (const m of missing.slice(0, 20)) console.log(`  ${m.key}  func${m.func}  (${m.how})`);
}
