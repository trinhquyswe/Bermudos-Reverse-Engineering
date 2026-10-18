'use strict';
// Lexical inventory of the dcmp bodies: which identifiers, type names, operators and statement
// keywords actually occur. Drives the parser/printer feature set.
//
// Usage: node dcmp_lexical.js [--examples name]

const fs = require('fs');
const path = require('path');

const data = JSON.parse(fs.readFileSync(path.join(__dirname, 'dcmp_bodies.json'), 'utf8'));

const called = new Map();  // identifier used as `name(`
const types = new Map();   // type name after `:`
const words = new Map();   // any identifier word
const ops = new Map();     // punctuation/operators
const kw = new Map();      // statement keywords
const structTypes = new Set();
const examples = new Map();

const PUNCT = ['.', ',', ';', ':', '(', ')', '{', '}', '[', ']', '=', '==', '!=', '<=', '>=', '<', '>', '+', '-', '*', '/', '%', '&', '|', '^', '~', '!', '<<', '>>', '&&', '||', '?'];
const reset = () => false;

function tokenize(s) {
	const out = [];
	let i = 0;
	while (i < s.length) {
		const c = s[i];
		if (/\s/.test(c)) { i++; continue; }
		if (/[A-Za-z_$]/.test(c)) {
			let j = i;
			while (j < s.length && /[A-Za-z0-9_$.]/.test(s[j])) j++;
			out.push({ k: 'id', v: s.slice(i, j) });
			i = j;
			continue;
		}
		if (/[0-9]/.test(c)) {
			let j = i;
			while (j < s.length && /[0-9a-fA-FxX._]/.test(s[j])) j++;
			let t = s.slice(i, j);
			// exponent forms like 1E-05
			if (/[eE]$/.test(t) && /[+-]/.test(s[j] || '')) { }
			if (/[eE]/.test(t) && /[+-]/.test(s[j] || '')) { t += s[j]; j++; while (j < s.length && /[0-9]/.test(s[j])) j++; t = s.slice(i, j); }
			out.push({ k: 'num', v: t });
			i = j;
			continue;
		}
		// multi-char operators
		const three = s.substr(i, 3);
		const two = s.substr(i, 2);
		if (two === '<<' || two === '>>' || two === '<=' || two === '>=' || two === '==' || two === '!=' || two === '&&' || two === '||') {
			out.push({ k: 'op', v: two }); i += 2; continue;
		}
		out.push({ k: 'op', v: c });
		i++;
	}
	return out;
}

let bodyCount = 0;
for (const m of data.methods) {
	if (!m.body) continue;
	bodyCount++;
	const toks = tokenize(m.body);
	for (let i = 0; i < toks.length; i++) {
		const t = toks[i];
		if (t.k === 'id') {
			words.set(t.v, (words.get(t.v) || 0) + 1);
			const next = toks[i + 1];
			if (next && next.k === 'op' && next.v === '(') {
				called.set(t.v, (called.get(t.v) || 0) + 1);
				if (!examples.has('call:' + t.v)) examples.set('call:' + t.v, m.type + '::' + m.name);
			}
			const prev = toks[i - 1];
			if (prev && prev.k === 'op' && prev.v === ':') {
				types.set(t.v, (types.get(t.v) || 0) + 1);
				if (!examples.has('type:' + t.v)) examples.set('type:' + t.v, m.type + '::' + m.name);
			}
			if (/^(var|if|else|loop|label|goto|return|break|continue|unreachable|br_table|call_indirect|eqz|select_if)$/.test(t.v)) {
				kw.set(t.v, (kw.get(t.v) || 0) + 1);
			}
		} else if (t.k === 'op') {
			ops.set(t.v, (ops.get(t.v) || 0) + 1);
		}
	}
	// struct type declarations
	for (const m2 of m.body.matchAll(/:\s*\{([^}]*)\}/g)) structTypes.add(m2[1].trim().slice(0, 60));
}

const KW_KNOWN = /^(?:i32|i64|f32|f64)_[a-z0-9_]+$/;
const shown = process.argv.includes('--examples') ? process.argv[process.argv.indexOf('--examples') + 1] : null;

console.log(`bodies: ${bodyCount}`);
console.log('\n--- statement/numeric keywords ---');
for (const [k, n] of [...kw].sort((a, b) => b[1] - a[1])) console.log(`  ${String(n).padStart(6)}  ${k}`);
console.log('\n--- identifiers used as calls (non numeric-op) ---');
let other = 0;
for (const [k, n] of [...called].sort((a, b) => b[1] - a[1])) {
	if (KW_KNOWN.test(k)) { other++; continue; }
	console.log(`  ${String(n).padStart(6)}  ${k}   e.g. ${examples.get('call:' + k)}`);
}
console.log(`  (${other} distinct numeric-op identifiers omitted)`);
console.log('\n--- numeric-op identifiers ---');
console.log('  ' + [...called].filter(([k]) => KW_KNOWN.test(k)).map(([k, n]) => `${k}(${n})`).join(' '));
console.log('\n--- type annotations ---');
for (const [k, n] of [...types].sort((a, b) => b[1] - a[1])) console.log(`  ${String(n).padStart(6)}  ${k}   e.g. ${examples.get('type:' + k)}`);
console.log('\n--- struct type shapes ---');
for (const s of structTypes) console.log('  ' + s);
console.log('\n--- operators ---');
console.log('  ' + [...ops].map(([k, n]) => `${k}:${n}`).join('  '));
if (shown) {
	console.log(`\n--- bodies containing "${shown}" ---`);
	for (const m of data.methods) if (m.body && m.body.includes(shown)) {
		console.log(`\n### ${m.type}::${m.name} (func${m.func})`);
		console.log(m.body);
		break;
	}
}
