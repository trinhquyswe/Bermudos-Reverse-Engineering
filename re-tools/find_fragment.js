'use strict';
// Look for wasm functions whose decoded token stream *contains* a given ISIL listing (as a contiguous
// subsequence), to see what the un-matched listings actually correspond to.
//
// Usage: node find_fragment.js "LocalGet 0" "I32Const 0" "Call 44622"

const fs = require('fs');
const path = require('path');
const { execSync } = require('child_process');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const WASM = path.join(REPO, 'Decompiled', 'build.named.wasm');

// reuse the decoder from wasm_index.js by requiring its internals through a child run is awkward, so
// decode inline here (same table).
const src = fs.readFileSync(path.join(__dirname, 'wasm_index.js'), 'utf8');
const T = {};
{
	const m = /const T = \{([\s\S]*?)\n\};/.exec(src);
	const body = m[1];
	for (const line of body.split('\n')) {
		const mm = /^\s*(0x[0-9A-Fa-f]+):\s*\['([^']+)',\s*'([^']*)'\]/.exec(line);
		if (mm) T[parseInt(mm[1], 16)] = [mm[2], mm[3]];
	}
	const fm = /const FC = \{([\s\S]*?)\n\};/.exec(src);
	for (const line of fm[1].split('\n')) {
		const mm = /^\s*(\d+):\s*\['([^']+)',\s*'([^']*)'\]/.exec(line);
		if (mm) T['fc' + mm[1]] = [mm[2], mm[3]];
	}
}
const STRUCTURAL = new Set(['Block', 'Loop', 'If', 'Else', 'End']);

const buf = fs.readFileSync(WASM);
let pos = 8;
function leb() { let r = 0, s = 0, b; do { b = buf[pos++]; r |= (b & 0x7f) << s; s += 7; } while (b & 0x80); return r >>> 0; }
function sleb() { let r = 0, s = 0, b; do { b = buf[pos++]; r |= (b & 0x7f) << s; s += 7; } while (b & 0x80); if (s < 32 && (b & 0x40)) r |= (~0 << s); return r | 0; }
const bodies = [];
let numImports = 0;
while (pos < buf.length) {
	const id = buf[pos++];
	const size = leb();
	const end = pos + size;
	if (id === 2) { const n = leb(); for (let i = 0; i < n; i++) { const ml = leb(); pos += ml; const nl = leb(); pos += nl; const k = buf[pos++]; if (k === 0) { leb(); numImports++; } else if (k === 1) { buf[pos++]; leb(); } else if (k === 2) { leb(); leb(); } else { buf[pos++]; leb(); } } }
	else if (id === 10) { const n = leb(); for (let i = 0; i < n; i++) { const bs = leb(); bodies.push({ size: bs, start: pos }); pos += bs; } }
	pos = end;
}

function decode(bodyIdx) {
	const b = bodies[bodyIdx];
	pos = b.start;
	const bodyEnd = b.start + b.size;
	const groups = leb();
	for (let i = 0; i < groups; i++) { leb(); buf[pos++]; }
	const out = [];
	while (pos < bodyEnd) {
		const op = buf[pos++];
		let def = T[op];
		if (op === 0xFC) { const sub = leb(); def = T['fc' + sub] || ['FC_' + sub, 'u']; }
		if (!def) { out.push('?0x' + op.toString(16)); continue; }
		const [name, kinds] = def;
		const parts = [];
		for (const k of kinds) {
			if (k === 'u') parts.push(String(leb()));
			else if (k === 's') parts.push(String(sleb()));
			else if (k === 'b') parts.push(String(leb()));
			else if (k === 'm') { parts.push(String(leb()), String(sleb())); }
			else if (k === 'r') { const n = leb(); for (let i = 0; i < n + 1; i++) leb(); parts.push('*'); }
			else if (k === 'c') { parts.push(String(leb()), String(leb())); }
			else if (k === 'v') { parts.push(String(leb()), String(leb())); }
			else if (k === 'a') { pos += 4; parts.push('*'); }
			else if (k === 'd') { pos += 8; parts.push('*'); }
		}
		const printable = kinds.replace(/[ad]/g, '').replace(/[rc]/g, '');
		const kept = [];
		if (printable.includes('m') || printable.includes('v')) kept.push(parts[0], parts[1]);
		else if (/[usb]/.test(printable)) kept.push(parts[0]);
		const tok = kept.length ? `${name} ${kept.join(', ')}` : name;
		out.push(tok);
	}
	return out;
}

const needle = process.argv.slice(2);
console.log('needle: ' + needle.join(' ; '));
let hits = 0;
for (let i = 0; i < bodies.length; i++) {
	const toks = decode(i);
	for (let k = 0; k + needle.length <= toks.length; k++) {
		let ok = true;
		for (let j = 0; j < needle.length; j++) if (toks[k + j] !== needle[j]) { ok = false; break; }
		if (!ok) continue;
		hits++;
		const funcIdx = numImports + i;
		if (hits <= 6) {
			console.log(`\n--- func${funcIdx}: ${toks.length} tokens, match at ${k} ---`);
			console.log('  ' + toks.join(' ; ').slice(0, 500));
		}
		break;
	}
	if (hits > 400) break;
}
console.log(`\ntotal functions containing the needle: ${hits}${hits > 400 ? ' (truncated)' : ''}`);
