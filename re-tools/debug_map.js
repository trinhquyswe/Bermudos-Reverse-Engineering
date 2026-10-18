'use strict';
// Debug tool: compare a tree method's call sequence with the dcmp body's, and show how each dcmp call
// name resolves. Usage:
//   node debug_map.js --file AmmoHitEffect.cs --method Awake
//   node debug_map.js --func 86845

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DIR = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');
const WASM = path.join(REPO, 'Decompiled', 'build.named.wasm');
const DCMP = path.join(REPO, 'Decompiled', 'build.dcmp');

function arg(name) { const i = process.argv.indexOf('--' + name); return i >= 0 ? process.argv[i + 1] : null; }

function readLeb(buf, pos) {
	let result = 0, shift = 0, b;
	do { b = buf[pos++]; result |= (b & 0x7f) << shift; shift += 7; } while (b & 0x80);
	return [result >>> 0, pos];
}
function readName(buf, pos) { const [len, p] = readLeb(buf, pos); return [buf.toString('utf8', p, p + len), p + len]; }

const names = new Map();
const dcmpNameToFunc = new Map();
const fnInfo = new Map();
const bodyText = new Map(); // only filled for the requested func

// name section
{
	const buf = fs.readFileSync(WASM);
	let pos = 8;
	while (pos < buf.length) {
		const id = buf[pos++];
		const [size, p] = readLeb(buf, pos);
		if (id === 0) {
			const [sectName, np] = readName(buf, p);
			if (sectName === 'name') {
				let sp = np;
				const end = p + size;
				while (sp < end) {
					const subId = buf[sp++];
					const [subSize, sp2] = readLeb(buf, sp);
					if (subId === 1) {
						let fp = sp2;
						const [, after] = readLeb(buf, fp);
						fp = after;
						while (fp < sp2 + subSize) {
							const [idx, f2] = readLeb(buf, fp);
							const [nm, f3] = readName(buf, f2);
							names.set(idx, nm);
							fp = f3;
						}
					}
					sp = sp2 + subSize;
				}
			}
		}
		pos = p + size;
	}
}

// dcmp: definitions + bodies of interest
const wantFuncs = new Set();
if (arg('func')) wantFuncs.add(parseInt(arg('func'), 10));
{
	const fd = fs.openSync(DCMP, 'r');
	const size = fs.statSync(DCMP).size;
	const CHUNK = 8 * 1024 * 1024;
	const headRe = /^(export\s+)?(import\s+)?function\s+([A-Za-z_][\w.]*)\s*\(([^)]*)\)\s*(?::\s*([\w.]+))?\s*([{;])/;
	let pos = 0, carry = '';
	let cur = -1, curImport = false, body = [];
	const flush = () => { if (cur >= 0 && wantFuncs.has(cur)) bodyText.set(cur, body.join('\n')); cur = -1; body = []; };
	while (pos < size) {
		const n = Math.min(CHUNK, size - pos);
		const b = Buffer.alloc(n);
		fs.readSync(fd, b, 0, n, pos);
		const full = carry + b.toString('utf8');
		const lines = full.split('\n');
		carry = lines.pop();
		for (const raw of lines) {
			const line = raw.replace(/\r$/, '');
			if (cur < 0) {
				if (!/\/\/\s*func\d+\s*$/.test(line)) continue;
				const h = headRe.exec(line);
				if (!h) continue;
				cur = parseInt(/\/\/\s*func(\d+)\s*$/.exec(line)[1], 10);
				curImport = !!h[2];
				fnInfo.set(cur, { idx: cur, name: h[3], params: h[4], ret: h[5] || null, import: curImport, head: line });
				if (!dcmpNameToFunc.has(h[3])) dcmpNameToFunc.set(h[3], cur);
				body = [];
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

function callsInEvalOrder(body) {
	const found = [];
	for (const m of body.matchAll(/(?<![\w.$])([A-Za-z_][\w.]*)\s*\(/g)) {
		const nm = m[1];
		const open = m.index + m[0].length - 1;
		let depth = 0, close = -1;
		for (let i = open; i < body.length; i++) {
			const c = body[i];
			if (c === '(') depth++;
			else if (c === ')') { depth--; if (!depth) { close = i; break; } }
		}
		if (close < 0) continue;
		found.push({ nm, close });
	}
	found.sort((a, b) => a.close - b.close);
	return found;
}

const f = arg('func');
if (f) {
	const idx = parseInt(f, 10);
	const info = fnInfo.get(idx);
	console.log(`func${idx}: ${info ? info.head : '(not found)'}`);
	console.log(`name section: ${names.get(idx) || '(unnamed)'}`);
	const body = bodyText.get(idx) || '';
	console.log('\n--- dcmp body ---');
	console.log(body);
	console.log('\n--- calls in evaluation order (name -> resolved funcN) ---');
	const KW = new Set(['if', 'return', 'while', 'loop', 'switch', 'do', 'else', 'sizeof', 'select_if', 'label', 'goto', 'continue', 'call_indirect', 'br_table']);
	for (const c of callsInEvalOrder(body)) {
		if (KW.has(c.nm)) continue;
		const t = dcmpNameToFunc.get(c.nm);
		console.log(`  ${c.nm}  ->  ${t === undefined ? '(no definition!)' : 'func' + t + '  [name section: ' + (names.get(t) || '(unnamed)') + ']'}`);
	}
}

const file = arg('file');
if (file) {
	const method = arg('method') || '';
	const src = fs.readFileSync(path.join(DIR, file), 'utf8');
	const lines = src.split(/\r?\n/);
	for (let i = 0; i < lines.length; i++) {
		if (!lines[i].includes('---- wasm disassembly (Cpp2IL ISIL')) continue;
		let ok = !method;
		if (!ok) for (let j = i - 1; j >= 0 && j > i - 8; j--) if (new RegExp(`\\b${method}\\s*\\(`).test(lines[j])) { ok = true; break; }
		if (!ok) continue;
		const calls = [];
		for (let j = i + 1; j < lines.length && /^\t\t\/\//.test(lines[j]); j++) {
			const m = /0x[0-9a-fA-F]+\s+Call\s+(\d+)/.exec(lines[j]);
			if (m) calls.push(parseInt(m[1], 10));
		}
		console.log(`\n=== ${file} :: ${method} ===`);
		console.log(`tree call sequence: ${calls.join(', ')}`);
		for (const c of calls) console.log(`  func${c}  ${names.get(c) || '(unnamed)'}`);
		break;
	}
}
