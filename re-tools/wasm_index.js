'use strict';
// Step A (v5): identify each tree method's wasm function by *decoding the wasm bytecode* and matching
// the instruction sequence against the method's ISIL listing. This is exact (opcode + immediates), and
// independent of the name section and of wabt's output.
//
//   Cpp2IL ISIL listing (opcode + immediates per instruction)  ==  wasm code section function
//
// Both sides are canonicalised to `NAME imm1, imm2` tokens; immediates Cpp2IL does not print
// (`br_table` targets, `call_indirect` type/table, float bit patterns) are dropped on both sides, and
// negative memory offsets are printed as signed 32 bit (IL2CPP emits huge unsigned offsets).
//
// Usage:
//   node wasm_index.js            build/report wasm_index.json + match the in-scope tree methods
//   node wasm_index.js --show 86845   dump one function's decoded tokens

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const WASM = path.join(REPO, 'Decompiled', 'build.named.wasm');
const DIR = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');

// ------------------------------------------------------------------ opcode table
// name, and the immediate kinds: u=u32 leb, s=sign-extended leb (i32/i64), b=blocktype, m=memarg,
// r=br_table vector, c=call_indirect (type,table), f4/f8 = fixed byte counts.
const T = {
	0x00: ['Unreachable', ''], 0x01: ['Nop', ''], 0x02: ['Block', 'b'], 0x03: ['Loop', 'b'], 0x04: ['If', 'b'],
	0x05: ['Else', ''], 0x06: ['Proposed_Try', 'b'], 0x07: ['Proposed_Catch', 'u'], 0x08: ['Proposed_Throw', 'u'],
	0x09: ['Rethrow', 'u'], 0x0A: ['Proposed_Throw', 'u'], 0x0B: ['End', ''], 0x0C: ['Br', 'u'], 0x0D: ['BrIf', 'u'],
	0x0E: ['BrTable', 'r'], 0x0F: ['Return', ''], 0x10: ['Call', 'u'], 0x11: ['CallIndirect', 'c'],
	0x12: ['ReturnCall', 'u'], 0x13: ['ReturnCallIndirect', 'c'], 0x18: ['Delegate', 'u'], 0x19: ['CatchAll', ''],
	0x1A: ['Drop', ''], 0x1B: ['Select', ''], 0x1C: ['Select', 'u'],
	0x20: ['LocalGet', 'u'], 0x21: ['LocalSet', 'u'], 0x22: ['LocalTee', 'u'], 0x23: ['GlobalGet', 'u'], 0x24: ['GlobalSet', 'u'],
	0x25: ['TableGet', 'u'], 0x26: ['TableSet', 'u'],
	0x28: ['I32Load', 'm'], 0x29: ['I64Load', 'm'], 0x2A: ['F32Load', 'm'], 0x2B: ['F64Load', 'm'],
	0x2C: ['I32Load8_S', 'm'], 0x2D: ['I32Load8_U', 'm'], 0x2E: ['I32Load16_S', 'm'], 0x2F: ['I32Load16_U', 'm'],
	0x30: ['I64Load8_S', 'm'], 0x31: ['I64Load8_U', 'm'], 0x32: ['I64Load16_S', 'm'], 0x33: ['I64Load16_U', 'm'],
	0x34: ['I64Load32_S', 'm'], 0x35: ['I64Load32_U', 'm'],
	0x36: ['I32Store', 'm'], 0x37: ['I64Store', 'm'], 0x38: ['F32Store', 'm'], 0x39: ['F64Store', 'm'],
	0x3A: ['I32Store8', 'm'], 0x3B: ['I32Store16', 'm'], 0x3C: ['I64Store8', 'm'], 0x3D: ['I64Store16', 'm'],
	0x3E: ['I64Store32', 'm'], 0x3F: ['MemorySize', 'u'], 0x40: ['MemoryGrow', 'u'],
	0x41: ['I32Const', 's'], 0x42: ['I64Const', 's'], 0x43: ['F32Const', 'a'], 0x44: ['F64Const', 'd'],
	0x45: ['I32Eqz', ''], 0x46: ['I32Eq', ''], 0x47: ['I32Ne', ''], 0x48: ['I32Lt_S', ''], 0x49: ['I32Lt_U', ''],
	0x4A: ['I32Gt_S', ''], 0x4B: ['I32Gt_U', ''], 0x4C: ['I32Le_S', ''], 0x4D: ['I32Le_U', ''],
	0x4E: ['I32Ge_S', ''], 0x4F: ['I32Ge_U', ''],
	0x50: ['I64Eqz', ''], 0x51: ['I64Eq', ''], 0x52: ['I64Ne', ''], 0x53: ['I64Lt_S', ''], 0x54: ['I64Lt_U', ''],
	0x55: ['I64Gt_S', ''], 0x56: ['I64Gt_U', ''], 0x57: ['I64Le_S', ''], 0x58: ['I64Le_U', ''],
	0x59: ['I64Ge_S', ''], 0x5A: ['I64Ge_U', ''],
	0x5B: ['F32Eq', ''], 0x5C: ['F32Ne', ''], 0x5D: ['F32Lt', ''], 0x5E: ['F32Gt', ''], 0x5F: ['F32Le', ''], 0x60: ['F32Ge', ''],
	0x61: ['F64Eq', ''], 0x62: ['F64Ne', ''], 0x63: ['F64Lt', ''], 0x64: ['F64Gt', ''], 0x65: ['F64Le', ''], 0x66: ['F64Ge', ''],
	0x67: ['I32Clz', ''], 0x68: ['I32Ctz', ''], 0x69: ['I32Popcnt', ''], 0x6A: ['I32Add', ''], 0x6B: ['I32Sub', ''],
	0x6C: ['I32Mul', ''], 0x6D: ['I32Div_S', ''], 0x6E: ['I32Div_U', ''], 0x6F: ['I32Rem_S', ''], 0x70: ['I32Rem_U', ''],
	0x71: ['I32And', ''], 0x72: ['I32Or', ''], 0x73: ['I32Xor', ''], 0x74: ['I32Shl', ''], 0x75: ['I32Shr_S', ''],
	0x76: ['I32Shr_U', ''], 0x77: ['I32Rotl', ''], 0x78: ['I32Rotr', ''],
	0x79: ['I64Clz', ''], 0x7A: ['I64Ctz', ''], 0x7B: ['I64Popcnt', ''], 0x7C: ['I64Add', ''], 0x7D: ['I64Sub', ''],
	0x7E: ['I64Mul', ''], 0x7F: ['I64Div_S', ''], 0x80: ['I64Div_U', ''], 0x81: ['I64Rem_S', ''], 0x82: ['I64Rem_U', ''],
	0x83: ['I64And', ''], 0x84: ['I64Or', ''], 0x85: ['I64Xor', ''], 0x86: ['I64Shl', ''], 0x87: ['I64Shr_S', ''],
	0x88: ['I64Shr_U', ''], 0x89: ['I64Rotl', ''], 0x8A: ['I64Rotr', ''],
	0x8B: ['F32Abs', ''], 0x8C: ['F32Neg', ''], 0x8D: ['F32Ceil', ''], 0x8E: ['F32Floor', ''], 0x8F: ['F32Trunc', ''],
	0x90: ['F32Nearest', ''], 0x91: ['F32Sqrt', ''], 0x92: ['F32Add', ''], 0x93: ['F32Sub', ''], 0x94: ['F32Mul', ''],
	0x95: ['F32Div', ''], 0x96: ['F32Min', ''], 0x97: ['F32Max', ''], 0x98: ['F32Copysign', ''],
	0x99: ['F64Abs', ''], 0x9A: ['F64Neg', ''], 0x9B: ['F64Ceil', ''], 0x9C: ['F64Floor', ''], 0x9D: ['F64Trunc', ''],
	0x9E: ['F64Nearest', ''], 0x9F: ['F64Sqrt', ''], 0xA0: ['F64Add', ''], 0xA1: ['F64Sub', ''], 0xA2: ['F64Mul', ''],
	0xA3: ['F64Div', ''], 0xA4: ['F64Min', ''], 0xA5: ['F64Max', ''], 0xA6: ['F64Copysign', ''],
	0xA7: ['I32Wrap_I64', ''], 0xA8: ['I32Trunc_F32_S', ''], 0xA9: ['I32Trunc_F32_U', ''], 0xAA: ['I32Trunc_F64_S', ''],
	0xAB: ['I32Trunc_F64_U', ''], 0xAC: ['I64Extend_I32_S', ''], 0xAD: ['I64Extend_I32_U', ''],
	0xAE: ['I64Trunc_F32_S', ''], 0xAF: ['I64Trunc_F32_U', ''], 0xB0: ['I64Trunc_F64_S', ''], 0xB1: ['I64Trunc_F64_U', ''],
	0xB2: ['F32Convert_I32_S', ''], 0xB3: ['F32Convert_I32_U', ''], 0xB4: ['F32Convert_I64_S', ''], 0xB5: ['F32Convert_I64_U', ''],
	0xB6: ['F32Demote_F64', ''], 0xB7: ['F64Convert_I32_S', ''], 0xB8: ['F64Convert_I32_U', ''], 0xB9: ['F64Convert_I64_S', ''],
	0xBA: ['F64Convert_I64_U', ''], 0xBB: ['F64Promote_F32', ''],
	0xBC: ['I32Reinterpret_F32', ''], 0xBD: ['I64Reinterpret_F64', ''], 0xBE: ['F32Reinterpret_I32', ''], 0xBF: ['F64Reinterpret_I64', ''],
	0xC0: ['I32Extend8_S', ''], 0xC1: ['I32Extend16_S', ''], 0xC2: ['I64Extend8_S', ''], 0xC3: ['I64Extend16_S', ''], 0xC4: ['I64Extend32_S', ''],
};
const FC = {
	0: ['I32TruncSat_F32_S', ''], 1: ['I32TruncSat_F32_U', ''], 2: ['I32TruncSat_F64_S', ''], 3: ['I32TruncSat_F64_U', ''],
	4: ['I64TruncSat_F32_S', ''], 5: ['I64TruncSat_F32_U', ''], 6: ['I64TruncSat_F64_S', ''], 7: ['I64TruncSat_F64_U', ''],
	8: ['MemoryInit', 'v'], 9: ['DataDrop', 'u'], 10: ['MemoryCopy', 'v'], 11: ['MemoryFill', 'u'],
	12: ['TableInit', 'v'], 13: ['ElemDrop', 'u'], 14: ['TableCopy', 'v'], 15: ['TableGrow', 'u'],
	16: ['TableSize', 'u'], 17: ['TableFill', 'u'],
};

// ------------------------------------------------------------------ wasm reader
const buf = fs.readFileSync(WASM);
let pos = 8;
function leb() {
	let r = 0, shift = 0, b;
	do { b = buf[pos++]; r |= (b & 0x7f) << shift; shift += 7; } while (b & 0x80);
	return r >>> 0;
}
function sleb() {
	let r = 0, shift = 0, b;
	do { b = buf[pos++]; r |= (b & 0x7f) << shift; shift += 7; } while (b & 0x80);
	if (shift < 32 && (b & 0x40)) r |= (~0 << shift);
	return r | 0;
}
function sleb64() {
	let r = 0n, shift = 0n, b;
	do { b = buf[pos++]; r |= BigInt(b & 0x7f) << shift; shift += 7n; } while (b & 0x80);
	if (shift < 64n && (b & 0x40)) r |= (~0n << shift);
	return r;
}

const types = [];
const imports = [];
const funcTypeIdx = [];
const bodies = [];
const sectionSizes = {};
while (pos < buf.length) {
	const id = buf[pos++];
	const size = leb();
	const end = pos + size;
	if (id === 1) {
		const n = leb();
		for (let i = 0; i < n; i++) {
			const form = buf[pos++];
			const pc = leb();
			const params = [];
			for (let k = 0; k < pc; k++) params.push(buf[pos++]);
			const rc = leb();
			const results = [];
			for (let k = 0; k < rc; k++) results.push(buf[pos++]);
			types.push({ form, params, results });
		}
	} else if (id === 2) {
		const n = leb();
		for (let i = 0; i < n; i++) {
			const ml = leb();
			const mod = buf.toString('utf8', pos, pos + ml); pos += ml;
			const nl = leb();
			const nm = buf.toString('utf8', pos, pos + nl); pos += nl;
			const kind = buf[pos++];
			if (kind === 0) { const t = leb(); imports.push({ mod, nm, kind, type: t }); }
			else if (kind === 1) { buf[pos++]; const t = leb(); imports.push({ mod, nm, kind }); }
			else if (kind === 2) { const flags = leb(); const mi = leb(); imports.push({ mod, nm, kind }); }
			else { buf[pos++]; const t = leb(); imports.push({ mod, nm, kind }); }
		}
	} else if (id === 3) {
		const n = leb();
		for (let i = 0; i < n; i++) funcTypeIdx.push(leb());
	} else if (id === 10) {
		const n = leb();
		for (let i = 0; i < n; i++) {
			const bs = leb();
			bodies.push({ size: bs, start: pos });
			pos += bs;
		}
	} else if (id === 0) {
		const l = leb();
		const nm = buf.toString('utf8', pos, pos + l);
		sectionSizes[nm] = size;
	}
	pos = end;
}

const numImports = imports.filter((i) => i.kind === 0).length;

// ------------------------------------------------------------------ decode one function body
function decodeBody(bodyIdx) {
	const b = bodies[bodyIdx];
	pos = b.start;
	const bodyEnd = b.start + b.size;
	// local declarations
	const groups = leb();
	for (let i = 0; i < groups; i++) { leb(); buf[pos++]; }
	const instrStart = pos;
	const tokens = [];
	const lens = [];
	const all = [];
	while (pos < bodyEnd) {
		const opPos = pos;
		const op = buf[pos++];
		let def = T[op];
		let imm = '';
		if (op === 0xFC) { const sub = leb(); def = FC[sub] || ['FC_' + sub, 'u']; }
		if (!def) { tokens.push('?0x' + op.toString(16)); continue; }
		const [name, kinds] = def;
		const parts = [];
		for (const k of kinds) {
			if (k === 'u') parts.push(String(leb()));
			else if (k === 's') parts.push(String(sleb()));
			else if (k === 'b') parts.push(String(leb()));
			else if (k === 'm') { const a = leb(); const o = sleb(); parts.push(String(a), String(o)); }
			else if (k === 'r') { const n = leb(); for (let i = 0; i < n + 1; i++) leb(); parts.push('*'); }
			else if (k === 'c') { const t = leb(); const tb = leb(); parts.push(String(t), String(tb)); }
			else if (k === 'v') { parts.push(String(leb()), String(leb())); }
			else if (k === 'a') { pos += 4; parts.push('*'); }
			else if (k === 'd') { pos += 8; parts.push('*'); }
		}
		// immediates Cpp2IL does not print are dropped so both sides can be compared
		const printable = kinds.replace(/[ad]/g, '').replace(/[rc]/g, '');
		const kept = [];
		if (printable.includes('m') || printable.includes('v')) { kept.push(parts[0], parts[1]); }
		else if (printable.includes('u') || printable.includes('s') || printable.includes('b')) kept.push(parts[0]);
		const tok = kept.length ? `${canonName(name)} ${kept.join(', ')}` : canonName(name);
		// Cpp2IL renders the immediate bytes of `br_table` as pseudo block/end instructions, so the
		// block-structure tokens cannot be compared; the data-flow tokens still align exactly.
		if (!STRUCTURAL.has(name)) tokens.push(tok);
		lens.push(pos - opPos);
		all.push({ tok, off: opPos, len: pos - opPos, structural: STRUCTURAL.has(name) });
	}
	return { tokens, lens, all, instrStart, instrBytes: bodyEnd - instrStart };
}

// block-structure tokens (dropped on both sides: see above)
const STRUCTURAL = new Set(['Block', 'Loop', 'If', 'Else', 'End']);

function canonName(n) { return n; }

// ------------------------------------------------------------------ build the index
const byHash = new Map();
const funcTokens = new Map(); // funcIdx -> tokens (only for matched/needed)
function hashTokens(tokens) {
	let h = 0x811c9dc5;
	const s = tokens.join('|');
	for (let i = 0; i < s.length; i++) { h ^= s.charCodeAt(i); h = (h * 0x01000193) >>> 0; }
	return h.toString(16) + ':' + tokens.length;
}
const fnIndex = [];
for (let i = 0; i < bodies.length; i++) {
	const { tokens, instrBytes } = decodeBody(i);
	const funcIdx = numImports + i;
	const h = hashTokens(tokens);
	if (!byHash.has(h)) byHash.set(h, []);
	byHash.get(h).push(funcIdx);
	fnIndex.push({ funcIdx, h, tokens: tokens.length, bytes: instrBytes });
}

// ------------------------------------------------------------------ canonicalise the tree listings
const MARKER = '---- wasm disassembly (Cpp2IL ISIL';
const files = fs.readdirSync(DIR).filter((x) => x.endsWith('.cs'));
const treeMethods = [];
for (const f of files) {
	const src = fs.readFileSync(path.join(DIR, f), 'utf8');
	const lines = src.split(/\r?\n/);
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/m.exec(src);
	const ns = nsM ? nsM[1].trim() : '';
	const decl = /^\s*(?:(?:public|internal|private|protected|sealed|abstract|static|partial|unsafe)\s+)*(class|struct|interface|enum)\s+([A-Za-z_]\w*)/m.exec(src);
	const type = decl ? decl[2] : path.basename(f, '.cs');
	for (let i = 0; i < lines.length; i++) {
		if (!lines[i].includes(MARKER)) continue;
		let sig = null, sigLine = -1;
		for (let j = i - 1; j >= 0 && j > i - 8; j--) {
			const m = /^\t(?:(public|private|protected|internal)\s+)?((?:static|virtual|override|sealed|abstract|new|unsafe|extern|async|partial)\s+)*([A-Za-z_][\w.<>\[\],? ]*)\s+([A-Za-z_]\w*)\s*\(([^)]*)\)\s*$/.exec(lines[j]);
			if (m) { sig = { ret: m[3].trim(), name: m[4], params: m[5].trim(), mods: m[2] || '' }; sigLine = j; break; }
		}
		const tokens = [];
		let endLine = i, bytes = 0, prevAddr = null;
		for (let j = i + 1; j < lines.length && /^\t\t\/\//.test(lines[j]); j++) {
			const m = /^\t\t\/\/\s+0x([0-9a-fA-F]+)\s+(\S+)(?:\s+(.*?))?\s*(?:;\s*.*)?$/.exec(lines[j]);
			if (!m) continue;
			const op = m[2];
			let imm = (m[3] || '').trim();
			const addr = parseInt(m[1], 16);
			if (prevAddr !== null) bytes += addr - prevAddr;
			prevAddr = addr;
			endLine = j;
			if (op === 'Call' && /^-\d+$/.test(imm)) { tokens.push('CallIndirect'); continue; }
			if (op === 'CallIndirect') { tokens.push('CallIndirect'); continue; }
			if (op === 'BrTable') { tokens.push('BrTable'); continue; }
			if (op === 'Proposed_BrOnExn') { tokens.push('BrOnExn'); continue; }
			if (/^(F32Const|F64Const)$/.test(op)) { tokens.push(op); continue; }
			if (STRUCTURAL.has(op)) continue;   // see decodeBody: br_table immediates are rendered as pseudo blocks
			// `I32Load 2, 16` -> align, offset ; offsets are printed as signed 32 bit
			const parts = imm.split(',').map((x) => x.trim()).filter((x) => x !== '');
			const norm = parts.map((x, k) => {
				if (/^-?\d+$/.test(x)) return x;
				return x;
			});
			tokens.push(norm.length ? `${op} ${norm.join(', ')}` : op);
		}
		if (sig) treeMethods.push({ file: f, ns, type, ...sig, tokens, markerLine: i, sigLine, endLine, bytes });
	}
}

// ------------------------------------------------------------------ match
const results = [];
const unmatched = [];
for (const m of treeMethods) {
	const h = hashTokens(m.tokens);
	const hit = byHash.get(h);
	if (hit && hit.length === 1) results.push({ ...m, func: hit[0] });
	else if (hit && hit.length > 1) unmatched.push({ ...m, reason: 'ambiguous', candidates: hit.length });
	else unmatched.push({ ...m, reason: 'no-match' });
}

if (process.argv.includes('--diff')) {
	const fi = process.argv.indexOf('--diff');
	const file = process.argv[fi + 1];
	const method = process.argv[fi + 2];
	const dm = JSON.parse(fs.readFileSync(path.join(__dirname, 'asm2cs_map.json'), 'utf8'));
	const row = dm.rows.find((r) => r.file === file && (r.name === method || r.member === method || r.key.endsWith('::' + method)));
	if (!row) { console.log('no dcmp row for ' + file + ' :: ' + method); process.exit(1); }
	const tm = treeMethods.find((m) => m.file === file && (m.name === method || m.name === row.name));
	const dec = decodeBody(row.func - numImports);
	console.log(`tree tokens (${tm.tokens.length})  vs  func${row.func} ${row.funcName} (${dec.tokens.length})`);
	const n = Math.max(tm.tokens.length, dec.tokens.length);
	let diffs = 0;
	for (let i = 0; i < n; i++) {
		const a = tm.tokens[i] || '(none)', b = dec.tokens[i] || '(none)';
		const per = dec.lens ? dec.lens[i] : '';
		if (a !== b) {
			console.log(`  !! [${i}] len=${per} tree=${a}   wasm=${b}`);
			if (++diffs > 12) break;
		}
	}
	if (!diffs) console.log('  (identical)');
	if (process.argv.includes('--offsets')) {
		console.log('\n--- byte-offset walk (tree address deltas vs decoded lengths) ---');
		const tl = [];
		{
			const src = fs.readFileSync(path.join(DIR, file), 'utf8').split(/\r?\n/);
			for (let j = tm.markerLine + 1; j < src.length && /^\t\t\/\//.test(src[j]); j++) {
				const m = /^\t\t\/\/\s+0x([0-9a-fA-F]+)\s+(\S+)(?:\s+(.*?))?\s*(?:;\s*.*)?$/.exec(src[j]);
				if (m) tl.push({ op: m[2], addr: parseInt(m[1], 16), imm: (m[3] || '').trim() });
			}
		}
		let treeOff = 0, myOff = 0;
		for (let i = 0; i < Math.max(tl.length, dec.all.length); i++) {
			const t = tl[i], w = dec.all[i];
			const tNext = tl[i + 1] ? tl[i + 1].addr : null;
			const tLen = tNext === null ? '?' : tNext - t.addr;
			const flag = (w && t && w.len != tLen && tLen !== '?') ? '  <<< length differs' : '';
			if (i < 70 || flag) console.log(`  [${i}] tree ${t ? t.op + ' ' + t.imm : '(none)'} len=${tLen}   |   wasm ${w ? w.tok : '(none)'} len=${w ? w.len : '?'}${flag}`);
			if (i > 80) break;
		}
	}
	process.exit(0);
}

if (process.argv.includes('--show')) {
	const idx = parseInt(process.argv[process.argv.indexOf('--show') + 1], 10);
	const bodyIdx = idx - numImports;
	const { tokens } = decodeBody(bodyIdx);
	console.log(`func${idx}: ${tokens.length} instructions`);
	for (const t of tokens) console.log('  ' + t);
	process.exit(0);
}

console.log(JSON.stringify({
	wasmBytes: buf.length,
	types: types.length,
	imports: imports.length,
	definedFunctions: bodies.length,
	treeMethods: treeMethods.length,
	exactMatches: results.length,
	unmatched: unmatched.length,
	unmatchedReasons: unmatched.reduce((a, x) => { a[x.reason] = (a[x.reason] || 0) + 1; return a; }, {}),
}, null, 2));

fs.writeFileSync(path.join(__dirname, 'wasm_index_matches.json'), JSON.stringify({
	matches: results.map((r) => ({ file: r.file, type: `${r.ns ? r.ns + '.' : ''}${r.type}`, name: r.name, ret: r.ret, mods: r.mods, params: r.params, func: r.func, tokens: r.tokens.length, markerLine: r.markerLine, sigLine: r.sigLine, endLine: r.endLine })),
	unmatched: unmatched.map((r) => ({ file: r.file, type: `${r.ns ? r.ns + '.' : ''}${r.type}`, name: r.name, reason: r.reason, tokens: r.tokens.length })),
}, null, 1));

console.log('\n--- unmatched (first 20) ---');
for (const u of unmatched.slice(0, 20)) console.log(`  ${u.reason}  ${u.file}  ${u.ns ? u.ns + '.' : ''}${u.type}::${u.name}  (${u.tokens.length} instrs)`);
