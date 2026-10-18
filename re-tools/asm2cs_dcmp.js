'use strict';
// asm2cs_dcmp.js — turn the wabt `wasm-decompile` body of each identified in-scope method
// (Decompiled/build.dcmp) into a mechanical C# rendering of the same operations.
//
// The method -> wasm-function mapping was established earlier (bytecode-exact match preferred, else the
// name-section / dcmp call-order match): see dcmp_bodies.json.  This script only *renders*.
//
// Usage:
//   node asm2cs_dcmp.js --check                 parse every body, report unhandled constructs
//   node asm2cs_dcmp.js --file Ammo.cs          print the translated bodies of one .cs file
//   node asm2cs_dcmp.js --method Ammo Update    print one method
//   node asm2cs_dcmp.js --all                   write asm2cs_out.json
//
// Rendering rules (all mechanical; nothing is invented):
//   * wasm/dcmp types -> C# types: int/long/float/double keep their name, ubyte->byte, byte->sbyte,
//     short/ushort keep their name, `X_ptr` -> `byte*` (dcmp pointer arithmetic is in BYTES, so a byte
//     pointer reproduces `p + n` exactly; `p[i]` is printed as `*(T*)(p + i * sizeof(T))`).
//   * a memory access at a known field offset of a managed object is printed as `this.<field>`.
//   * calls: the dcmp printed name is resolved through the wasm name section back to
//     `Namespace.Type::Method` and printed as `Namespace.Type.Method` (a leading `multiple_N_` ICF tag and
//     generic backticks are dropped, `.ctor` -> `.ctor` spelled as `ctor`).
//   * `eqz(x)` -> `(x == 0)`, `select_if(a, b, c)` -> `(c ? a : b)`, `if`-expressions -> `(c ? a : b)` when
//     both arms are single expressions, otherwise hoisted into a new local.
//   * `loop L_x {}` -> `L_x: while (true) {}`, `continue L_x` -> `continue;` (`goto L_x;` when not innermost),
//     `goto B_x` -> `goto B_x;`, `br_table[l0, l1, ..ld](v)` -> `switch (v) { case 0: goto l0; ... }`,
//     `unreachable` -> a `// unreachable` comment.
//   * wabt record-typed locals (`{ a:long, b:int }`) become a generated nested struct; a bare use of the
//     record means its address, so it is printed `(byte*)&x`.
//
// Lost nothing: raw wasm listings stay in Decompiled/isil/ and build.dcmp; every translated method keeps a
// one-line header with the wasm function index and the ISIL op count.

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DIR = path.join(REPO, 'RippedProject', 'ExportedProject', 'Assets', 'Scripts', 'Assembly-CSharp');

const ARGV = process.argv.slice(2);
const has = (f) => ARGV.includes(f);
const argOf = (f) => (ARGV.includes(f) ? ARGV[ARGV.indexOf(f) + 1] : null);

// ===================================================================================== types
const T = {
	int: { k: 'int', size: 4 },
	long: { k: 'long', size: 8 },
	float: { k: 'float', size: 4 },
	double: { k: 'double', size: 8 },
	byte: { k: 'sbyte', size: 1 },  // wabt `byte` is signed
	ubyte: { k: 'byte', size: 1 },  // wabt `ubyte` is unsigned
	short: { k: 'short', size: 2 },
	ushort: { k: 'ushort', size: 2 },
	void: { k: 'void', size: 0 },
	unknown: { k: 'unknown', size: 4 },
};
const ptr = (pointee) => ({ k: 'ptr', size: 4, pointee: pointee || T.unknown });
const obj = (cls) => ({ k: 'obj', size: 4, cls });

function mapWasm(txt) {
	if (!txt) return T.unknown;
	let s = String(txt).trim().replace(/@\d+$/, '');
	if (s.endsWith('_ptr')) return ptr(mapWasm(s.slice(0, -4)));
	return T[s] || T.unknown;
}
// the `@N` suffix wabt prints for a non-natural alignment
function alignFromText(txt) {
	const m = /@(\d+)\s*$/.exec(String(txt || ''));
	return m ? parseInt(m[1], 10) : 0;
}

function csType(t) {
	switch (t.k) {
		case 'int': return 'int';
		case 'long': return 'long';
		case 'float': return 'float';
		case 'double': return 'double';
		case 'sbyte': return 'sbyte';
		case 'byte': return 'byte';
		case 'short': return 'short';
		case 'ushort': return 'ushort';
		case 'ptr': return 'byte*';
		case 'obj': return t.cls;
		case 'struct': return t.rec;
		case 'void': return 'void';
		default: return 'int';
	}
}
// the C# type used for a load/store of this value
function csAccessType(t) {
	switch (t.k) {
		case 'int': return 'int';
		case 'long': return 'long';
		case 'float': return 'float';
		case 'double': return 'double';
		case 'sbyte': return 'sbyte';
		case 'byte': return 'byte';
		case 'short': return 'short';
		case 'ushort': return 'ushort';
		case 'ptr': return 'int';
		case 'obj': return 'int';
		default: return 'int';
	}
}

const SIZE_BY_CS = {
	long: 8, ulong: 8, double: 8, int: 4, uint: 4, float: 4, bool: 1, byte: 1, sbyte: 1,
	char: 2, short: 2, ushort: 2, Vector2: 8, Vector2Int: 8, Vector3: 12, Vector3Int: 12,
	Vector4: 16, Quaternion: 16, Color: 16, Color32: 4, Rect: 16, RectInt: 16, Bounds: 24,
};
function fieldSizeOf(csName) {
	const bare = String(csName).replace(/[<>\[\],? ]/g, '');
	if (SIZE_BY_CS[bare] !== undefined) return SIZE_BY_CS[bare];
	return 4; // class reference / enum / unknown value type
}

// ===================================================================================== inputs
const DATA = JSON.parse(fs.readFileSync(path.join(__dirname, 'dcmp_bodies.json'), 'utf8'));
const NAMES = JSON.parse(fs.readFileSync(path.join(__dirname, 'dcmp_names.json'), 'utf8'));

// The files this phase translates: the game scripts of the project layout (see scope.js).  Everything
// else under Assembly-CSharp/ (the BehaviorDesigner / TMPro copies that the build compiled into the
// same assembly, now in their own subfolders) keeps its raw listings.
const { inScope } = require('./scope.js');

const fieldTables = DATA.fieldTables;
const typeByShort = new Map();
for (const k of Object.keys(fieldTables)) typeByShort.set(k, k);

// ===================================================================================== tree parse
const IDENT = '[A-Za-z_][A-Za-z0-9_]*';
const MODS = /^(?:(?:public|private|protected|internal|static|virtual|override|sealed|abstract|readonly|extern|unsafe|new|partial)\s+)*/;
function splitParams(s) {
	const out = [];
	let d = 0, cur = '';
	for (const ch of s) {
		if (ch === '<' || ch === '[' || ch === '(') d++;
		else if (ch === '>' || ch === ']' || ch === ')') d--;
		if (ch === ',' && d === 0) { out.push(cur); cur = ''; continue; }
		cur += ch;
	}
	if (cur.trim()) out.push(cur);
	return out.map((x) => x.trim()).filter(Boolean);
}
function parseSignature(line) {
	const text = line.replace(/^\t+/, '').trim();
	const mods = (MODS.exec(text) || [''])[0].trim();
	let rest = text.slice(mods.length).trim();
	const m = /^(.+?)\(([^)]*)\)$/.exec(rest);
	if (!m) return null;
	let head = m[1].trim();
	const params = splitParams(m[2]);
	const nameM = new RegExp(`(${IDENT})\\s*$`).exec(head);
	if (!nameM) return null;
	const name = nameM[1];
	const ret = head.slice(0, nameM.index).trim() || null;
	const paramNames = params.map((p) => {
		const pm = new RegExp(`(${IDENT})\\s*(?:=[^=]*)?$`).exec(p);
		return pm ? pm[1] : null;
	});
	return { mods, ret, name, params, paramNames, paramsRaw: m[2] };
}

function parseTree() {
	const files = [];
	(function walk(d) {
		for (const e of fs.readdirSync(d, { withFileTypes: true })) {
			const p = path.join(d, e.name);
			if (e.isDirectory()) walk(p);
			else if (e.name.endsWith('.cs')) files.push(p);
		}
	})(DIR);
	const out = new Map();
	const byName = new Map();
	out.byName = byName; // the metadata tables key files by basename; the tree may use subsystem folders
	for (const p of files) {
		const f = path.relative(DIR, p).split(path.sep).join('/');
		const raw = fs.readFileSync(p, 'utf8');
		const eol = raw.includes('\r\n') ? '\r\n' : '\n';
		const lines = raw.split(/\r?\n/);
		const methods = [];
		for (let i = 0; i < lines.length; i++) {
			const mk = /^(\t+)\/\/ ---- wasm disassembly/.exec(lines[i]);
			if (!mk) continue;
			const indent = mk[1];
			let sigLine = i - 2;
			while (sigLine >= 0 && lines[sigLine].trim() === '') sigLine--;
			let sig = parseSignature(lines[sigLine]);
			if (!sig && (lines[i - 1] || '').trim() === '{') {
				// a property accessor: `get`/`set` on its own line, then `{`, then the listing
				const kw = (lines[i - 2] || '').trim();
				if (kw === 'get' || kw === 'set') {
					for (let up = i - 4; up >= 0 && up > i - 9; up--) {
						const pd = parseSignature(`${lines[up]}()`);
						if (pd && pd.name) {
							sig = { ...pd, name: `${kw}_${pd.name}`, params: [], paramNames: [], paramsRaw: '', accessor: kw };
							sigLine = up;
							break;
						}
					}
				}
			}
			if (!sig) continue;
			let j = i + 1;
			let ops = 0;
			while (j < lines.length && lines[j].startsWith(`${indent}//`)) { if (/^\s*\/\/\s+0x/.test(lines[j])) ops++; j++; }
			const close = j; // the closing `}` of the method
			methods.push({ ...sig, file: f, sigLine, openLine: i - 1, markerLine: i, lastListing: j - 1, closeLine: close, ops });
		}
		out.set(f, { eol, lines, methods });
		byName.set(path.basename(f), out.get(f));
	}
	return out;
}
const TREE = parseTree();

// ===================================================================================== lexer
const KEYID = /^[A-Za-z_$][A-Za-z0-9_$]*$/;
function tokenize(src) {
	const out = [];
	let i = 0;
	const n = src.length;
	while (i < n) {
		const c = src[i];
		if (c === ' ' || c === '\t' || c === '\n' || c === '\r') { i++; continue; }
		if (/[A-Za-z_$]/.test(c)) {
			let j = i;
			while (j < n && /[A-Za-z0-9_$]/.test(src[j])) j++;
			out.push({ k: 'id', v: src.slice(i, j) });
			i = j;
			continue;
		}
		if (/[0-9]/.test(c)) {
			let j = i;
			if (c === '0' && (src[i + 1] === 'x' || src[i + 1] === 'X')) {
				j = i + 2;
				while (j < n && /[0-9a-fA-F]/.test(src[j])) j++;
			} else {
				while (j < n && /[0-9]/.test(src[j])) j++;
				if (src[j] === '.' && /[0-9]/.test(src[j + 1] || '')) {
					j++;
					while (j < n && /[0-9]/.test(src[j])) j++;
				}
				if ((src[j] === 'e' || src[j] === 'E') && /[0-9+-]/.test(src[j + 1] || '')) {
					j++;
					if (src[j] === '+' || src[j] === '-') j++;
					while (j < n && /[0-9]/.test(src[j])) j++;
				}
			}
			if (/[fFdDlLuU]/.test(src[j] || '')) j++;
			out.push({ k: 'num', v: src.slice(i, j) });
			i = j;
			continue;
		}
		const two = src.substr(i, 2);
		if (two === '<<' || two === '>>' || two === '<=' || two === '>=' || two === '==' || two === '!=' || two === '&&' || two === '||' || two === '..') {
			out.push({ k: 'op', v: two });
			i += 2;
			continue;
		}
		out.push({ k: 'op', v: c });
		i++;
	}
	return out;
}

// ===================================================================================== parser
function Parser(toks) { this.t = toks; this.i = 0; }
Parser.prototype.peek = function (v) { const t = this.t[this.i]; if (!t) return null; return v === undefined ? t : (t.k === v || t.v === v ? t : null); };
Parser.prototype.at = function (v) { const t = this.peek(); return !!t && (t.v === v || t.k === v); };
Parser.prototype.next = function () { return this.t[this.i++]; };
Parser.prototype.semi = function () { if (this.at(';')) this.next(); };
Parser.prototype.expect = function (v) {
	const t = this.next();
	if (!t || (t.v !== v && t.k !== v)) throw new Error(`expected '${v}' but found '${t ? t.v : '<eof>'}'`);
	return t;
};

const TYPE_NAMES = new Set(['int', 'long', 'float', 'double', 'byte', 'ubyte', 'short', 'ushort',
	'int_ptr', 'long_ptr', 'float_ptr', 'double_ptr', 'byte_ptr', 'ubyte_ptr', 'short_ptr', 'ushort_ptr']);

Parser.prototype.parseType = function () {
	if (this.at('{')) return this.parseRecord();
	const t = this.next();
	if (!t || t.k !== 'id') throw new Error(`bad type '${t ? t.v : '<eof>'}'`);
	let name = t.v;
	let align = null;
	if (this.at('@')) { this.next(); align = this.next().v; }
	if (!TYPE_NAMES.has(name.replace(/@\d+$/, ''))) throw new Error(`unknown type '${name}'`);
	return { k: 'wasmtype', txt: name, align };
};
Parser.prototype.parseRecord = function () {
	this.expect('{');
	const fields = [];
	while (!this.at('}')) {
		const nm = this.expect('id').v;
		this.expect(':');
		const ty = this.parseType();
		fields.push({ name: nm, txt: ty.txt });
		if (this.at(',')) this.next();
	}
	this.expect('}');
	return { k: 'record', fields };
};

// wabt writes a memory access as `base[index]` where index = byteOffset / alignment, so the byte
// offset is index * alignment.  The alignment is the `@N` annotation when present (wabt only prints it
// when the access alignment is not the type's natural one), else the accessed type's natural alignment.
function naturalAlign(t) {
	switch (t.k) {
		case 'sbyte': case 'byte': return 1;
		case 'short': case 'ushort': return 2;
		case 'int': case 'float': case 'ptr': case 'obj': return 4;
		case 'long': case 'double': return 8;
		case 'struct': return 8;
		default: return 4;
	}
}

// ---- statements
Parser.prototype.parseBlock = function () {
	this.expect('{');
	const body = this.parseStmts();
	this.expect('}');
	return body;
};
Parser.prototype.parseStmts = function () {
	const out = [];
	for (;;) {
		const t = this.peek();
		if (!t || t.v === '}') break;
		out.push(this.parseStmt());
	}
	return out;
};
Parser.prototype.parseStmt = function () {
	const t = this.peek();
	if (t.v === 'var') {
		this.next();
		const name = this.expect('id').v;
		this.expect(':');
		const type = this.parseType();
		let init = null;
		if (this.at('=')) { this.next(); init = this.parseExpr(); }
		this.semi();
		return { k: 'var', name, type, init };
	}
	if (t.v === 'if') {
		this.next();
		this.expect('(');
		const cond = this.parseExpr();
		this.expect(')');
		const then = this.at('{') ? this.parseBlock() : [this.parseStmt()];
		let els = null;
		if (this.at('else')) { this.next(); els = this.at('{') ? this.parseBlock() : [this.parseStmt()]; }
		return { k: 'if', cond, then, else: els };
	}
	if (t.v === 'loop') {
		this.next();
		let label = null;
		if (this.peek() && this.peek().k === 'id') label = this.next().v;
		const body = this.parseBlock();
		return { k: 'loop', label, body };
	}
	if (t.v === 'label') { this.next(); const name = this.expect('id').v; this.expect(':'); return { k: 'label', name }; }
	if (t.v === 'goto') { this.next(); const name = this.expect('id').v; this.semi(); return { k: 'goto', name }; }
	if (t.v === 'break' || t.v === 'continue') {
		this.next();
		let label = null;
		if (this.peek() && this.peek().k === 'id') label = this.next().v;
		this.semi();
		return { k: t.v, label };
	}
	if (t.v === 'return') {
		this.next();
		let e = null;
		if (!this.at(';')) e = this.parseExpr();
		this.semi();
		return { k: 'return', e };
	}
	if (t.v === 'unreachable') { this.next(); this.semi(); return { k: 'unreachable' }; }
	if (t.v === 'br_table') {
		this.next();
		const labels = [];
		this.expect('[');
		while (!this.at(']')) {
			let def = false;
			if (this.at('..')) { this.next(); def = true; }
			const nm = this.expect('id').v;
			labels.push({ name: nm, def });
			if (this.at(',')) this.next();
		}
		this.expect(']');
		this.expect('(');
		const target = this.parseExpr();
		this.expect(')');
		this.semi();
		return { k: 'br_table', labels, target };
	}
	if (t.v === '{') { const body = this.parseBlock(); return { k: 'block', body }; }
	const e = this.parseExpr();
	if (this.at(';')) this.next();
	return { k: 'expr', e };
};

// ---- expressions
Parser.prototype.parseExpr = function () { return this.parseAssign(); };
Parser.prototype.parseAssign = function () {
	const lhs = this.parseBinary(0);
	if (this.at('=')) {
		this.next();
		const rhs = this.parseAssign();
		return { k: 'assign', target: lhs, value: rhs };
	}
	return lhs;
};
const BINOPS = [
	['||'], ['&&'], ['|'], ['^'], ['&'], ['==', '!='], ['<', '>', '<=', '>='], ['<<', '>>'], ['+', '-'], ['min', 'max'], ['*', '/', '%'],
];
Parser.prototype.parseBinary = function (level) {
	if (level >= BINOPS.length) return this.parseUnary();
	let left = this.parseBinary(level + 1);
	for (;;) {
		const t = this.peek();
		if (!t || !BINOPS[level].includes(t.v)) return left;
		this.next();
		const right = this.parseBinary(level + 1);
		left = { k: 'bin', op: t.v, a: left, b: right };
	}
};
Parser.prototype.parseUnary = function () {
	const t = this.peek();
	if (t && t.k === 'op' && (t.v === '-' || t.v === '!' || t.v === '~')) {
		this.next();
		return { k: 'un', op: t.v, a: this.parseUnary() };
	}
	return this.parsePostfix();
};
Parser.prototype.parsePostfix = function () {
	let e = this.parsePrimary();
	for (;;) {
		if (this.at('[')) {
			this.next();
			const idx = this.parseExpr();
			this.expect(']');
			let type = null;
			if (this.at(':')) { this.next(); type = this.parseType(); }
			e = { k: 'index', base: e, idx, type };
			continue;
		}
		if (this.at('.')) { this.next(); const f = this.expect('id').v; e = { k: 'member', obj: e, field: f }; continue; }
		if (this.at(':')) { this.next(); const type = this.parseType(); e = { k: 'cast', e, type }; continue; }
		return e;
	}
};
Parser.prototype.parseArgs = function () {
	this.expect('(');
	const args = [];
	while (!this.at(')')) { args.push(this.parseExpr()); if (this.at(',')) this.next(); }
	this.expect(')');
	return args;
};
Parser.prototype.parsePrimary = function () {
	const t = this.peek();
	if (!t) throw new Error('unexpected end of body');
	if (t.k === 'num') { this.next(); return { k: 'num', raw: t.v }; }
	if (t.v === 'if') {
		this.next();
		this.expect('(');
		const cond = this.parseExpr();
		this.expect(')');
		const then = this.parseBlock();
		this.expect('else');
		const els = this.at('if') ? [this.parseStmt()] : this.parseBlock();
		return { k: 'ifexpr', cond, then, else: els };
	}
	if (t.v === '(') {
		this.next();
		let e;
		if (this.at('if')) e = this.parsePrimary();
		else e = this.parseExpr();
		this.expect(')');
		return e;
	}
	if (t.v === '{') {
		const body = this.parseBlock();
		return { k: 'blockexpr', body };
	}
	if (t.v === 'unreachable' && !(this.t[this.i + 1] && this.t[this.i + 1].v === '(')) {
		this.next();
		return { k: 'unreach' };
	}
	if (t.k === 'id') {
		this.next();
		if (this.at('(')) return { k: 'call', name: t.v, args: this.parseArgs() };
		return { k: 'name', n: t.v };
	}
	throw new Error(`unexpected token '${t.v}' (before: ${this.t.slice(Math.max(0, this.i - 8), this.i).map((x) => x.v).join(' ')} | after: ${this.t.slice(this.i + 1, this.i + 8).map((x) => x.v).join(' ')})`);
};

function parseBody(src) {
	const p = new Parser(tokenize(src));
	const stmts = p.parseStmts();
	if (p.i < p.t.length) throw new Error(`trailing tokens at '${p.t[p.i].v}'`);
	return stmts;
}

// ===================================================================================== printers
const PREC = { assign: 1, '||': 2, '&&': 3, '|': 4, '^': 5, '&': 6, '==': 7, '!=': 7, '<': 8, '>': 8, '<=': 8, '>=': 8, '<<': 9, '>>': 9, '+': 10, '-': 10, min: 11, max: 11, '*': 11, '/': 11, '%': 11 };
function prec(e) {
	switch (e.k) {
		case 'assign': return 1;
		case 'bin': return PREC[e.op] || 10;
		case 'un': return 12;
		case 'cast': case 'index': case 'member': return 13;
		default: return 14;
	}
}

class PCtx {
	constructor(method, tree) {
		this.m = method;
		this.tree = tree;
		this.decls = [];          // {name, type}
		this.declared = new Set();
		this.rename = new Map();  // dcmp name -> C# name
		this.tmp = 0;
		this.notes = new Set();
		this.records = new Map(); // rec name -> field list
		this.locals = new Map();  // C# name -> type
		this.aligns = new Map();  // C# name -> declared alignment (@N) of its pointee
		this.structLocals = new Set();
		this.valueTmp = null;     // temp that receives the value of the enclosing wabt block/if expression
	}
	newTmp(t) {
		const n = `__t${++this.tmp}`;
		this.declare(n, t);
		return n;
	}
	declare(name, t) {
		if (this.declared.has(name)) return;
		this.declared.add(name);
		this.decls.push({ name, type: t });
		this.locals.set(name, t);
	}
}

function recordTypeOf(fields) {
	const sig = fields.map((f) => `${f.name}:${f.txt}`).join(' ');
	// stable hash of the shape
	let h = 2166136261;
	for (let i = 0; i < sig.length; i++) { h ^= sig.charCodeAt(i); h = Math.imul(h, 16777619); }
	const rec = `Rec_${(h >>> 0).toString(36)}`;
	const mapped = fields.map((f) => ({ name: f.name, type: mapWasm(f.txt) }));
	let off = 0;
	const sized = mapped.map((f) => {
		const sz = f.type.size;
		const a = Math.min(sz, 8);
		if (off % a) off += a - (off % a);
		const o = off; off += sz;
		return { name: f.name, type: f.type, offset: o };
	});
	return { rec, fields: sized, type: { k: 'struct', rec, fields: sized, size: off } };
}

// ---------- static typing
function typeOf(e, pc, hint) {
	switch (e.k) {
		case 'num': return /[.fFdD]/.test(e.raw) ? (/[dD]$/.test(e.raw) ? T.double : T.float) : T.int;
		case 'name': return pc.locals.get(cnameOf(e.n, pc)) || T.unknown;
		case 'member': {
			const bt = typeOf(e.obj, pc);
			if (bt.k === 'struct') {
				const f = bt.fields.find((x) => x.name === e.field);
				return f ? f.type : T.unknown;
			}
			if (bt.k === 'obj' && pc.fieldCSTypes) {
				const cs = pc.fieldCSTypes.get(`${bt.cls}.${e.field}`);
				if (cs) return csFromName(cs, pc);
			}
			return T.unknown;
		}
		case 'index': return e.type ? mapWasm(e.type.txt) : (hint || deriveAccessType(e, pc));
		case 'cast': return mapWasm(e.type.txt);
		case 'assign': return typeOf(e.value, pc, hint);
		case 'bin': return PREC[e.op] <= 9 ? T.int : (wider(typeOf(e.a, pc), typeOf(e.b, pc)));
		case 'un': return typeOf(e.a, pc);
		case 'call': {
			if (e.name === 'call_indirect') return T.unknown;
			if (NUMOPS[e.name] && NUMOPS[e.name].ret) return NUMOPS[e.name].ret;
			if (NUMOPS[e.name]) return T.float;
			const rec = NAMES.byPrinted[e.name];
			if (rec && rec[3]) return mapWasm(rec[3]);
			if (rec && !rec[3]) return T.void;
			return T.unknown;
		}
		case 'eqz': return T.int;
		case 'select_if': return typeOf(e.args ? e.args[0] : e.a, pc);
		case 'ifexpr': return branchValueType(e.then, pc) || branchValueType(e.else, pc) || T.int;
		case 'blockexpr': return lastValueType(e.body, pc) || T.int;
		case 'unreach': return T.void;
		default: return T.int;
	}
}
function wider(a, b) {
	if (a.k === 'double' || b.k === 'double') return T.double;
	if (a.k === 'float' || b.k === 'float') return T.float;
	if (a.k === 'long' || b.k === 'long') return T.long;
	return T.int;
}
function deriveAccessType(e, pc) {
	const bt = typeOf(e.base, pc);
	if (bt.k === 'ptr') return bt.pointee;
	return T.int;
}
function csFromName(cs, pc) {
	if (fieldTables[cs] || typeByShort.has(cs)) return obj(cs);
	const m = { long: T.long, ulong: T.long, double: T.double, int: T.int, uint: T.int, float: T.float, bool: T.ubyte, byte: T.ubyte, sbyte: T.byte, short: T.short, ushort: T.ushort, char: T.ushort };
	return m[cs] || T.unknown;
}
function branchValueType(stmts, pc) {
	if (!stmts || !stmts.length) return null;
	const last = stmts[stmts.length - 1];
	if (last.k === 'expr') return typeOf(last.e, pc);
	return null;
}
// the type of the value a block expression leaves behind: the last fall-through expression
function lastValueType(stmts, pc) {
	for (let i = stmts.length - 1; i >= 0; i--) {
		const s = stmts[i];
		if (s.k === 'expr') {
			const t = typeOf(s.e, pc);
			if (t.k !== 'void') return t;
		}
	}
	return null;
}
function cnameOf(n, pc) { return pc.rename.get(n) || n; }

const NUMOPS = {
	f32_convert_i32_s: { ret: T.float, f: (x) => `(float)${x}` },
	f32_convert_i32_u: { ret: T.float, f: (x) => `(float)(uint)${x}` },
	f32_convert_i64_s: { ret: T.float, f: (x) => `(float)${x}` },
	i32_trunc_f32_s: { ret: T.int, f: (x) => `(int)${x}` },
	i32_trunc_f32_u: { ret: T.int, f: (x) => `(int)${x}` },
	i64_extend_i32_s: { ret: T.long, f: (x) => `(long)${x}` },
	i64_extend_i32_u: { ret: T.long, f: (x) => `(long)(uint)${x}` },
	i32_wrap_i64: { ret: T.int, f: (x) => `(int)${x}` },
	f64_promote_f32: { ret: T.double, f: (x) => `(double)${x}` },
	f32_demote_f64: { ret: T.float, f: (x) => `(float)${x}` },
	f32_reinterpret_i32: { ret: T.float, f: (x) => `System.BitConverter.Int32BitsToSingle(${x})` },
	i32_reinterpret_f32: { ret: T.int, f: (x) => `System.BitConverter.SingleToInt32Bits(${x})` },
	i64_reinterpret_f64: { ret: T.long, f: (x) => `System.BitConverter.DoubleToInt64Bits(${x})` },
	f64_reinterpret_i64: { ret: T.double, f: (x) => `System.BitConverter.Int64BitsToDouble(${x})` },
	sqrt: { ret: null, f: (x) => `Mathf.Sqrt(${x})` },
	abs: { ret: null, f: (x) => `Mathf.Abs(${x})` },
	ceil: { ret: null, f: (x) => `Mathf.Ceil(${x})` },
	floor: { ret: null, f: (x) => `Mathf.Floor(${x})` },
	trunc: { ret: null, f: (x) => `Mathf.Truncate(${x})` },
	nearest: { ret: null, f: (x) => `Mathf.Round(${x})` },
	min: { ret: null, f: (...a) => `Mathf.Min(${a.join(', ')})` },
	max: { ret: null, f: (...a) => `Mathf.Max(${a.join(', ')})` },
};

// ---------- call names
function renderCallName(printed) {
	const rec = NAMES.byPrinted[printed];
	if (!rec || !rec[1]) return printed;
	let s = rec[1];
	s = s.replace(/^multiple_\d+_/, '');
	s = s.replace(/`\d+/g, '');
	// compiler-generated display/nested type names carry `<...>` which C# identifiers cannot hold
	s = s.replace(/[<>]/g, '_');
	s = s.replace(/\+/g, '.');
	const parts = s.split('::');
	if (parts.length === 2) {
		const owner = parts[0].split('.').map((x) => x).join('.');
		let meth = parts[1];
		if (meth.startsWith('.')) meth = meth.slice(1);
		return `${owner}.${meth}`;
	}
	return parts.join('.');
}

function resolveFieldName(cls, offset, accessT, pc, baseText) {
	const chain = fieldTables[cls];
	if (!chain) return null;
	for (const entry of chain) {
		const name = entry.fields[offset];
		if (!name) continue;
		const cs = pc.fieldCSTypes ? pc.fieldCSTypes.get(`${entry.name}.${name}`) : null;
		if (cs && fieldSizeOf(cs) < accessT.size) return null; // wide access spanning a field: do not name it
		return `${baseText}.${name}`;
	}
	return null;
}

// ---------- expression printing
function text(e, pre, pc, hint) {
	switch (e.k) {
		case 'num': return e.raw;
		case 'name': {
			const n = cnameOf(e.n, pc);
			return n;
		}
		case 'member': {
			const b = text(e.obj, pre, pc);
			if (typeOf(e.obj, pc).k === 'struct') return `${b}.${e.field}`;
			return `${b}.${e.field}`;
		}
		case 'cast': {
			const inner = text(e.e, pre, pc, mapWasm(e.type.txt));
			const ct = csType(mapWasm(e.type.txt));
			const it = typeOf(e.e, pc, mapWasm(e.type.txt));
			const same = csType(it) === ct;
			if (same || e.e.k === 'index') return inner;
			return `(${ct})${inner}`;
		}
		case 'index': {
			const bt = typeOf(e.base, pc);
			let baseText = text(e.base, pre, pc);
			const accessT = e.type ? mapWasm(e.type.txt) : (hint && hint.k !== 'unknown' ? hint : deriveAccessType(e, pc));
			const idxText = text(e.idx, pre, pc);
			const idxLit = e.idx.k === 'num' && /^[0-9]+$/.test(e.idx.raw);
			// wabt prints `base[i]` meaning byteOffset = i * alignment; the alignment is the `@N`
			// annotation when given, else the accessed type's natural alignment.  Keep the plausible
			// alignments in confidence order.
			const candidates = [];
			const push = (v) => { if (v > 0 && candidates.indexOf(v) < 0) candidates.push(v); };
			if (e.type && e.type.align) push(parseInt(e.type.align, 10));
			push(naturalAlign(accessT));
			if (e.base.k === 'name' && pc.aligns) push(pc.aligns.get(cnameOf(e.base.n, pc)) || 0);
			if (bt.k === 'ptr') push(bt.pointee.size);
			if (bt.k === 'struct' || e.base.k === 'num') {
				// a record value or a bare address is byte addressed
				candidates.length = 0;
				push(1);
				candidates.push(1, 4, 8);
			} else {
				push(4); push(8); push(2); push(1);
			}
			// a managed-object base at a known field offset becomes `base.field`
			if (idxLit && bt.k === 'obj') {
				const idx = parseInt(e.idx.raw, 10);
				for (const s of candidates) {
					const named = resolveFieldName(bt.cls, idx * s, accessT, pc, baseText);
					if (named) return named;
				}
			}
			const scale = candidates[0] || 1;
			if (bt.k === 'struct') baseText = `(byte*)&${baseText}`;
			const isGlobal = (e.base.k === 'name') && !pc.locals.has(cnameOf(e.base.n, pc));
			// an undeclared global (such as the IL2CPP metadata-usage table) reads better in wabt's
			// own `table[index]` notation
			if (idxLit && scale === 4 && accessT.k === 'int' && isGlobal) return `${baseText}[${idxText}]`;
			let offText;
			if (idxLit) offText = String(parseInt(e.idx.raw, 10) * scale);
			else if (scale === 1) offText = idxText;
			else offText = `${idxText} * ${scale}`;
			if (offText === '0') return `*(${csAccessType(accessT)}*)${baseText}`;
			return `*(${csAccessType(accessT)}*)(${baseText} + ${offText})`;
		}
		case 'un': return `${e.op}${wrap(e.a, 12, pre, pc, hint)}`;
		case 'bin': {
			const p = PREC[e.op] || 10;
			if (e.op === 'min' || e.op === 'max') {
				return `Mathf.${e.op === 'min' ? 'Min' : 'Max'}(${val(e.a, pre, pc, hint)}, ${val(e.b, pre, pc, hint)})`;
			}
			return `${wrap(e.a, p, pre, pc, hint)} ${e.op} ${wrap(e.b, p + 1, pre, pc, hint)}`;
		}
		case 'assign': return `${text(e.target, pre, pc, typeOf(e.value, pc))} = ${val(e.value, pre, pc)}`;
		case 'eqz': return `(${val(e.a, pre, pc)} == 0)`;
		case 'select_if': {
			const c = e.args[2], a = e.args[0], b = e.args[1];
			return `(${val(c, pre, pc)} ? ${val(a, pre, pc)} : ${val(b, pre, pc)})`;
		}
		case 'ifexpr': {
			const thenV = branchValueType(e.then, pc);
			const elseV = branchValueType(e.else, pc);
			const single = (s) => s.length === 1 && s[0].k === 'expr';
			if (single(e.then) && single(e.else)) {
				const c = val(e.cond, pre, pc);
				return `(${c} ? ${val(e.then[0].e, pre, pc)} : ${val(e.else[0].e, pre, pc)})`;
			}
			const t = thenV || elseV || T.int;
			const tmp = pc.newTmp(t);
			pre.push(...hoistIfExpr(e, pc, tmp));
			return tmp;
		}
		case 'unreach': {
			if (pc) pc.notes.add('`return unreachable;` (wabt marks the wasm trap) rendered as a comment');
			return '/* unreachable */';
		}
		case 'blockexpr': {
			const t = lastValueType(e.body, pc) || (hint && hint.k !== 'unknown' ? hint : T.int);
			const tmp = pc.newTmp(t);
			pre.push(...blockExprLines(e.body, tmp, pc));
			return tmp;
		}
		case 'call': {
			if (e.name === 'call_indirect') {
				pc.notes.add('indirect call (wasm call_indirect) left as `call_indirect(...)`');
				const args = e.args.map((a) => val(a, pre, pc));
				return `call_indirect(${args.join(', ')})`;
			}
			if (e.name === 'select_if') {
				// wasm `select`: value, other value, condition
				const args = e.args.map((a) => val(a, pre, pc));
				return `(${args[2]} ? ${args[0]} : ${args[1]})`;
			}
			if (NUMOPS[e.name]) {
				const args = e.args.map((a) => val(a, pre, pc));
				return NUMOPS[e.name].f(...args);
			}
			const rec = NAMES.byPrinted[e.name];
			const hints = rec ? rec[2].map(mapWasm) : [];
			const args = e.args.map((a, i) => val(a, pre, pc, hints[i]));
			if (e.name === 'eqz') return `(${args[0]} == 0)`;
			return `${renderCallName(e.name)}(${args.join(', ')})`;
		}
		default: throw new Error(`cannot print ${e.k}`);
	}
}
function wrap(e, minPrec, pre, pc, hint) {
	const s = val(e, pre, pc, hint);
	return prec(e) < minPrec ? `(${s})` : s;
}
// `val` = the value of an expression; a record used as a value means its address
function val(e, pre, pc, hint) {
	const t = typeOf(e, pc, hint);
	const s = text(e, pre, pc, hint);
	if ((t.k === 'struct') && (e.k === 'name' || e.k === 'member')) return `(byte*)&${s}`;
	return s;
}
function hoistIfExpr(e, pc, tmp) {
	const lines = [];
	const pre1 = [];
	const c = val(e.cond, pre1, pc);
	lines.push(...pre1.map((l) => l));
	const thenLines = branchToStmts(e.then, tmp, pc);
	const elseLines = e.else ? branchToStmts(e.else, tmp, pc) : [];
	const out = [];
	out.push(`if (${c})`);
	out.push('{');
	for (const l of thenLines) out.push('\t' + l);
	out.push('}');
	if (elseLines.length) {
		out.push('else');
		out.push('{');
		for (const l of elseLines) out.push('\t' + l);
		out.push('}');
	}
	return out;
}
function blockExprLines(body, tmp, pc) {
	const saved = pc.valueTmp;
	pc.valueTmp = tmp;
	const out = [];
	for (const s of body) out.push(...stmt(s, pc, 0));
	pc.valueTmp = saved;
	return out;
}
function branchToStmts(stmts, tmp, pc) {
	const saved = pc.valueTmp;
	pc.valueTmp = tmp;
	const out = [];
	for (const s of stmts) out.push(...stmt(s, pc, 0));
	pc.valueTmp = saved;
	return out;
}

// ===================================================================================== structuring
// wabt renders wasm's structured control flow flat: `label B_x:` marks a branch target and `br`/`br_if`
// become `goto B_x;`.  Rebuild C# control flow from that so bodies read as code:
//
//   br_table [A, B, ..def C](v) then `label A: ..label B: ..label C:` -> `switch (v) { case 0: .. }`
//   `if (c) { ..; goto X; }` before `label X:` -> `if (c) { .. } else { <what the branch skipped> }`
//   an unconditional `goto X` -> what it jumps over is unreachable and is dropped
//   `goto L` with L the enclosing loop's label -> `continue;`
//   `goto E` with E the empty last label of the method -> `return;`
//
// Anything that does not reduce keeps its label and `goto` (valid C#) and the method notes it.
const CTX = (base, extra) => Object.assign({}, base, extra);

function splitLabels(list) {
	const pre = [];
	const segs = [];
	let cur = null;
	for (const s of list) {
		if (s.k === 'label') { cur = { name: s.name, stmts: [] }; segs.push(cur); continue; }
		if (cur) cur.stmts.push(s); else pre.push(s);
	}
	return { pre, segs };
}
// every label a surviving `goto` / `br_table` still needs, so labels can be pruned
function usedLabels(list, used) {
	if (Array.isArray(list)) { for (const s of list) usedLabels(s, used); return used; }
	if (!list || typeof list !== 'object') return used;
	if (list.k === 'goto') { used.add(list.name); return used; }
	if (list.k === 'br_table') { for (const l of list.labels) used.add(l.name); return used; }
	if (list.k === 'continue' && list.label) used.add(list.label);
	for (const k of Object.keys(list)) if (k !== 'k') usedLabels(list[k], used);
	return used;
}
// how many branches in this region target any of `names` (a jump out of a nested loop is not part of it)
function branchesToNames(list, names) {
	let n = 0;
	(function walk(x) {
		if (!x || typeof x !== 'object') return;
		if (Array.isArray(x)) { x.forEach(walk); return; }
		if (x.k === 'loop') return;
		if (x.k === 'goto' && names.has(x.name)) { n++; return; }
		if (x.k === 'br_table') { for (const l of x.labels) if (names.has(l.name)) { n++; break; } return; }
		for (const k of Object.keys(x)) if (k !== 'k') walk(x[k]);
	})(list);
	return n;
}
// the top level statements of `pre` that branch into the region, plus the branch body without the goto
function jumpSitesIn(pre, names) {
	const sites = [];
	for (let i = 0; i < pre.length; i++) {
		const s = pre[i];
		if (s.k === 'goto' && names.has(s.name)) sites.push({ i, kind: 'goto', target: s.name });
		else if (s.k === 'br_table') { if (s.labels.some((l) => names.has(l.name))) sites.push({ i, kind: 'br_table', target: s.labels[0].name, table: s }); }
		else if (s.k === 'if' && !s.else) {
			const t = endsWithGoto(s.then, names);
			if (t) sites.push({ i, kind: 'if', target: t.name, cond: s.cond, then: t.stmts });
		}
	}
	return sites;
}
// `[a, b, if (c) { d; goto X; }]` -> `{ name: X, stmts: [a, b], nested: { cond: c, then: [d] } }`
function endsWithGoto(stmts, names) {
	if (!stmts || !stmts.length) return null;
	const last = stmts[stmts.length - 1];
	if (last.k === 'goto' && names.has(last.name)) return { name: last.name, stmts: stmts.slice(0, -1) };
	if (last.k === 'if' && !last.else) {
		const inner = endsWithGoto(last.then, names);
		if (inner) return { name: inner.name, stmts: stmts.slice(0, -1), nested: { cond: last.cond, then: inner } };
	}
	return null;
}
function endsInTransfer(st) {
	const k = st && st.k;
	return k === 'return' || k === 'break' || k === 'continue' || k === 'goto';
}
// a wasm trap also ends a fall-through chain (but C# still needs the `break`)
function stopsFlow(st) {
	return endsInTransfer(st) || (st && st.k === 'unreachable');
}
// one statement, with its nested lists restructured
function structOne(s, ctx, pc) {
	if (!s || typeof s !== 'object') return [s];
	if (s.k === 'if') {
		return [{ k: 'if', cond: s.cond, then: structStmts(s.then, ctx, pc), else: s.else ? structStmts(s.else, ctx, pc) : null }];
	}
	if (s.k === 'loop') {
		const cont = new Set(ctx.continueLabels);
		if (s.label) cont.add(s.label);
		return [{ k: 'loop', body: structStmts(s.body, CTX({}, { continueLabels: cont, breakLabels: ctx.breakLabels, funcEnd: ctx.funcEnd }), pc) }];
	}
	if (s.k === 'block') return structStmts(s.body, ctx, pc);
	if (s.k === 'goto') {
		if (ctx.funcEnd.has(s.name)) return [{ k: 'return', e: null }];
		if (ctx.continueLabels.has(s.name)) return [{ k: 'continue', label: null }];
		if (ctx.breakLabels && ctx.breakLabels.has(s.name)) return [{ k: 'break' }];
		return [s];
	}
	if (s.k === 'continue' && s.label && ctx.continueLabels.has(s.label)) return [{ k: 'continue', label: null }];
	return [s];
}
function structPlain(list, ctx, pc) {
	const out = [];
	for (const s of list) out.push(...structOne(s, ctx, pc));
	return out;
}
function structStmts(list, ctx, pc) {
	const { pre, segs } = splitLabels(list);
	if (!segs.length) return structPlain(list, ctx, pc);
	const names = new Set(segs.map((s) => s.name));
	const at = (n) => segs.findIndex((s) => s.name === n);
	// the statements of the region from segment `i` to its end (a branch there falls through the rest)
	const tailFrom = (i, breakLabels) => {
		const sub = CTX({}, { continueLabels: ctx.continueLabels, funcEnd: ctx.funcEnd, breakLabels });
		const acc = [];
		for (let k = i; k < segs.length; k++) {
			acc.push(...structStmts(segs[k].stmts, sub, pc));
			if (acc.length && stopsFlow(acc[acc.length - 1])) break; // what follows is unreachable
		}
		return acc;
	};
	const sites = jumpSitesIn(pre, names);
	const total = branchesToNames(pre, names);
	// 1) jump table: br_table dispatching into the label chain -> switch
	if (sites.length === 1 && sites[0].kind === 'br_table' && total === 1) {
		const table = sites[0].table;
		const breaks = new Set(names);
		const cases = [];
		let caseNo = 0;
		for (const l of table.labels) {
			const i = at(l.name);
			const body = tailFrom(i, breaks);
			if (!body.length || !endsInTransfer(body[body.length - 1])) {
				// falling out of the last segment is leaving the method
				body.push(i === segs.length - 1 && ctx.funcEnd.has(l.name) ? { k: 'return', e: null } : { k: 'break' });
			}
			cases.push({ def: !!l.def, value: l.def ? null : caseNo++, body });
		}
		const out = structPlain(pre.slice(0, sites[0].i).concat(pre.slice(sites[0].i + 1)), ctx, pc);
		out.push({ k: 'switch', target: table.target, cases });
		if (pre.length > sites[0].i + 1) pc.notes.add('dropped statements after a br_table, which never falls through');
		return out;
	}
	// 2) a forward branch over the tail of the region: `if (c) { .. } else { <skipped> }` then the
	//    segments from the target on (both paths continue there)
	if (sites.length === 1 && sites[0].kind === 'if' && total === 1) {
		const { i, cond, then, target } = sites[0];
		const k = at(target);
		const skipped = pre.slice(i + 1);
		const skippedSegs = [];
		for (let j = 0; j < k; j++) skippedSegs.push(...segs[j].stmts);
		const els = [...skipped, ...skippedSegs];
		const tail = [];
		for (let j = k; j < segs.length; j++) tail.push(...segs[j].stmts);
		const out = structPlain(pre.slice(0, i), ctx, pc);
		out.push({
			k: 'if', cond,
			then: structPlain(then, ctx, pc),
			else: els.length ? structStmts(els, CTX(ctx, {}), pc) : null,
		});
		out.push(...structStmts(tail, CTX(ctx, {}), pc));
		return out;
	}
	// 3) an unconditional branch: what it jumps over is unreachable
	if (sites.length === 1 && sites[0].kind === 'goto' && total === 1) {
		const { i, target } = sites[0];
		const k = at(target);
		const dead = pre.length - i - 1;
		if (dead) pc.notes.add(`dropped ${dead} unreachable statement(s) after an unconditional branch to \`${target}\``);
		return [...structPlain(pre.slice(0, i), ctx, pc), ...structStmts(segs.slice(k).flatMap((s) => s.stmts), CTX({}, { breakLabels: ctx.breakLabels, continueLabels: ctx.continueLabels, funcEnd: ctx.funcEnd }), pc)];
	}
	// 4) nothing reduces: keep the labels and the gotos
	if (total) pc.notes.add('a branch into this region does not reduce to structured C#; it keeps its label and `goto`');
	return [...structPlain(pre, ctx, pc), ...segs.flatMap((s) => [{ k: 'label', name: s.name }, ...structStmts(s.stmts, ctx, pc)])];
}
function pruneUnusedLabels(list, used) {
	const out = [];
	for (const s of list) {
		if (!s || typeof s !== 'object') { out.push(s); continue; }
		if (s.k === 'label' && !used.has(s.name)) continue;
		if (s.k === 'if') { s.then = pruneUnusedLabels(s.then, used); if (s.else) s.else = pruneUnusedLabels(s.else, used); }
		else if (s.k === 'loop' || s.k === 'block') s.body = pruneUnusedLabels(s.body, used);
		else if (s.k === 'switch') for (const c of s.cases) c.body = pruneUnusedLabels(c.body, used);
		out.push(s);
	}
	return out;
}
// ------------------------------------------------------------------------------------- IL2CPP idioms
// Two pieces of IL2CPP scaffolding are unambiguous and are removed from the printed body:
//   if (*(byte*)A == 0) { f_x(B); *(sbyte*)A = 1; }    the class-initializer guard
//   (*(byte*)(X + off) & 1 ? X : Monitor.Enter(X))      its read side (the type-initialized check)
function cleanLines(lines, pc) {
	let txt = lines.join('\n');
	const before = txt;
	txt = txt.replace(/\(\*\(byte\*\)\((\w+) \+ \d+\) & 1 \? \1 : System\.Threading\.Monitor\.Enter\(\1\)\)/g, '$1');
	txt = txt.replace(/^[ \t]*if \(\(\*\(byte\*\)\d+ == 0\)\)[ \t]*\r?\n[ \t]*\{[ \t]*\r?\n(?:[ \t]*f_\w+\(\d+\);[ \t]*\r?\n)+[ \t]*\*\(sbyte\*\)\d+ = 1;[ \t]*\r?\n[ \t]*\}[ \t]*\r?\n/gm, '');
	if (txt !== before) pc.notes.add('removed IL2CPP scaffolding (class-initializer guard / Monitor.Enter type check)');
	return txt.split('\n');
}
function structure(stmtsAst, pc) {
	// the function-end label is the empty last label of the method
	const funcEnd = new Set();
	const last = stmtsAst[stmtsAst.length - 1];
	if (last && last.k === 'label') funcEnd.add(last.name);
	const ctx = { funcEnd, continueLabels: new Set(), breakLabels: new Set() };
	const structured = structStmts(stmtsAst, ctx, pc);
	return pruneUnusedLabels(structured, usedLabels(structured, new Set()));
}

// ---------- statement printing
function stmt(s, pc, ind) {
	const pad = '\t'.repeat(ind);
	switch (s.k) {
		case 'var': {
			if (!s.init) return [];
			const name = cnameOf(s.name, pc);
			const pre = [];
			const v = val(s.init, pre, pc, pc.locals.get(name));
			return [...padLines(pre, pad), `${pad}${name} = ${v};`];
		}
		case 'expr': {
			const pre = [];
			const v = val(s.e, pre, pc);
			const t = typeOf(s.e, pc);
			// inside a wabt block/if expression an unconsumed value is the expression's result
			if (pc.valueTmp && t.k !== 'void' && t.k !== 'unknown') {
				return [...padLines(pre, pad), `${pad}${pc.valueTmp} = ${v};`];
			}
			return [...padLines(pre, pad), `${pad}${v};`];
		}
		case 'if': {
			const pre = [];
			const c = val(s.cond, pre, pc);
			const out = [...padLines(pre, pad), `${pad}if (${c})`, `${pad}{`];
			out.push(...stmts(s.then, pc, ind + 1));
			if (s.else) {
				out.push(`${pad}}`, `${pad}else`, `${pad}{`);
				out.push(...stmts(s.else, pc, ind + 1));
			}
			out.push(`${pad}}`);
			return out;
		}
		case 'loop': {
			const out = [`${pad}while (true)`, `${pad}{`];
			out.push(...stmts(s.body, pc, ind + 1));
			out.push(`${pad}}`);
			return out;
		}
		case 'switch': {
			const pre = [];
			const t = val(s.target, pre, pc);
			const out = [...padLines(pre, pad), `${pad}switch (${t})`, `${pad}{`];
			for (const c of s.cases) {
				out.push(c.def ? `${pad}\tdefault:` : `${pad}\tcase ${c.value}:`);
				if (!c.body.length) out.push(`${pad}\t\tbreak;`);
				else out.push(...stmts(c.body, pc, ind + 2));
			}
			out.push(`${pad}}`);
			return out;
		}
		case 'label': return [`${pad}${s.name}: ;`];
		case 'goto': return [`${pad}goto ${s.name};`];
		case 'continue': {
			if (!s.label) return [`${pad}continue;`];
			if (pc.loopStack && pc.loopStack[pc.loopStack.length - 1] === s.label) return [`${pad}continue;`];
			return [`${pad}goto ${s.label};`];
		}
		case 'break': return [`${pad}break;`];
		case 'return': {
			if (!s.e) return [`${pad}return;`];
			const pre = [];
			const v = val(s.e, pre, pc);
			return [...padLines(pre, pad), `${pad}return ${v};`];
		}
		case 'unreachable': return [`${pad}// unreachable (wasm trap)`];
		case 'br_table': {
			const pre = [];
			const t = val(s.target, pre, pc);
			const out = [...padLines(pre, pad), `${pad}switch (${t})`, `${pad}{`];
			let caseNo = 0;
			for (const l of s.labels) {
				if (l.def) out.push(`${pad}\tdefault:`);
				else out.push(`${pad}\tcase ${caseNo++}:`);
				out.push(`${pad}\t\tgoto ${l.name};`);
			}
			out.push(`${pad}}`);
			return out;
		}
		case 'block': return stmts(s.body, pc, ind);
		default: throw new Error(`cannot print statement ${s.k}`);
	}
}
// in a statement list, a label directly in front of `}` needs its empty statement; we always print `;`
function stmts(list, pc, ind) {
	const out = [];
	for (const s of list) out.push(...stmt(s, pc, ind));
	return out;
}
// indent hoisted pre-statement lines (they carry their own relative indentation)
function padLines(lines, pad) {
	return lines.flatMap((l) => String(l).split('\n').map((x) => pad + x));
}

// ===================================================================================== per-method
function mapParams(method, tree) {
	// wasm ABI: instance methods are (this, args...), static are (args...).  wabt numbers the parameters
	// (and then the locals) with the letters a, b, c, ..., and the name section usually carries the real
	// names, so these letters only matter where it does not.  IL2CPP appends its hidden methodInfo slot
	// *after* the managed arguments, so the parameters line up with the letters right after `this`; a
	// slot we cannot name keeps its wabt letter.
	const rec = NAMES.byPrinted[method.funcName || ''];
	const wparams = rec ? rec[2] : (method.funcParams ? method.funcParams.split(',').map((s) => s.split(':')[1]) : []);
	const nW = wparams.length;
	const csNames = tree ? tree.paramNames : [];
	const letters = 'abcdefghijklmnopqrstuvwxyz'.split('');
	const rename = new Map();
	let idx = 0;
	if (!method.isStatic) { rename.set('a', 'this'); idx = 1; }
	for (let k = 0; k < csNames.length; k++, idx++) {
		if (csNames[k]) rename.set(letters[idx], csNames[k]);
	}
	const info = { w: nW, cs: csNames.length, hidden: Math.max(0, nW - csNames.length - (method.isStatic ? 0 : 1)), wparams };
	return { rename, info, wparams, letters };
}

function translate(method, tree) {
	const pc = new PCtx(method, tree);
	// field name -> C# type text, keyed "ShortType.field"
	pc.fieldCSTypes = new Map();
	for (const cls of Object.keys(fieldTables)) {
		for (const entry of fieldTables[cls]) {
			for (const [name, cs] of Object.entries(entry.fieldTypes || {})) {
				pc.fieldCSTypes.set(`${entry.name}.${name}`, cs);
			}
		}
	}
	const body = method.body;
	const stmtsAst = structure(parseBody(body), pc);

	const { rename, info, wparams, letters } = mapParams(method, tree);
	pc.rename = rename;

	// collect locals (first pass): var decls, in order
	const localDecls = [];
	const seen = new Set();
	(function walk(list) {
		for (const s of list) {
			if (s.k === 'var') {
				if (!seen.has(s.name)) { seen.add(s.name); localDecls.push(s); }
			} else if (s.k === 'if') { walk(s.then); if (s.else) walk(s.else); }
			else if (s.k === 'loop') walk(s.body);
			else if (s.k === 'block') walk(s.body);
			else if (s.k === 'br_table') { /* target is an expr */ }
			else if (s.k === 'expr' || s.k === 'return') { /* exprs may contain ifexpr with statements */ }
		}
	})(stmtsAst);

	// is the managed instance pointer assigned anywhere (including inside block/if expressions)?
	let assignedThis = false;
	(function ev(x) {
		if (!x || typeof x !== 'object') return;
		if (Array.isArray(x)) { x.forEach(ev); return; }
		if (x.k === 'assign' && x.target && x.target.k === 'name' && (x.target.n === 'this' || rename.get(x.target.n) === 'this')) { assignedThis = true; return; }
		if (x.k === 'var' && x.init && (x.name === 'this' || rename.get(x.name) === 'this')) { assignedThis = true; return; }
		for (const k of Object.keys(x)) if (k !== 'k') ev(x[k]);
	})(stmtsAst);
	if (assignedThis) {
		// the dcmp local may be the parameter `this` itself or the anonymous `a`; either way it now
		// behaves as a plain pointer variable
		for (const [dc, cs] of [...rename]) if (cs === 'this') rename.set(dc, 'this_');
		rename.set('this', 'this_');
		pc.declare('this_', ptr(T.unknown));
	}

	// parameters: the wasm parameter types give the storage type of the values they hold
	const paramTargets = new Set();
	for (const [dc, cs] of rename) {
		paramTargets.add(cs);
		const wi = letters.indexOf(dc);
		if (wi >= 0 && wi < wparams.length && cs !== 'this') {
			pc.locals.set(cs, mapWasm(wparams[wi]));
			const a = alignFromText(wparams[wi]);
			if (a) pc.aligns.set(cs, a);
		}
	}
	if (rename.get('a') === 'this') pc.locals.set('this', obj(method.type));

	// declare locals
	for (const d of localDecls) {
		if (d.name === 'this') {
			// the dcmp local `this` is the managed instance pointer; it is the C# `this` unless assigned
			if (assignedThis) { rename.set('this', 'this_'); pc.declare('this_', ptr(T.unknown)); }
			continue;
		}
		const orig = cnameOf(d.name, pc);
		let name = orig;
		if (paramTargets.has(name) || pc.declared.has(name)) name = `${name}_2`;
		if (name !== d.name) rename.set(d.name, name);
		if (d.type.k === 'record') {
			const rt = recordTypeOf(d.type.fields);
			pc.records.set(rt.rec, rt);
			pc.declare(name, rt.type);
		} else {
			pc.declare(name, mapWasm(d.type.txt));
			const a = alignFromText(d.type.txt);
			if (a) pc.aligns.set(name, a);
		}
	}
	// `this` (the dcmp local) is the managed object
	if (rename.has('this')) {
		const n = rename.get('this');
		if (n === 'this') pc.locals.set('this', obj(method.type));
	} else if (rename.has('a') && rename.get('a') === 'this') {
		pc.locals.set('this', obj(method.type));
	}

	return { lines: cleanLines(assemble(pc, method, tree, stmtsAst, paramTargets), pc), pc, info };
}

// Shared tail of both translators: declare the names the body mentions but nobody introduced, then lay
// the method out (header comment, signature, hoisted declarations, body).
function assemble(pc, method, tree, stmtsAst, paramTargets) {
	// names wabt used without declaring (ICF-merged parameter names such as `multiple_4_this`, frame
	// pointers it omitted): declare them so the rendering stays self-contained
	{
		const referenced = new Set();
		(function collect(x) {
			if (!x || typeof x !== 'object') return;
			if (Array.isArray(x)) { x.forEach(collect); return; }
			if (x.k === 'name') referenced.add(x.n);
			for (const k of Object.keys(x)) if (k !== 'k') collect(x[k]);
		})(stmtsAst);
		for (const n of referenced) {
			if (n === 'g_a' || n.startsWith('d_')) continue;
			const cs = pc.rename.get(n) || n;
			if (cs === 'this' || paramTargets.has(cs) || pc.declared.has(cs)) continue;
			pc.declare(cs, ptr(T.unknown));
			pc.notes.add(`\`${n}\` is used by wabt without a declaration; rendered as byte*`);
		}
	}

	const lines = [];
	lines.push(method.func == null
		? `// Translated from the Cpp2IL ISIL listing by stack simulation (${tree ? tree.ops : '?'} ops); no wasm function could be identified for this method`
		: `// wasm func${method.func}${method.funcName ? ` (${method.funcName})` : ''} -- ${tree ? tree.ops : '?'} ISIL ops, identified by ${method.how} match`);
	const sig = tree ? `\t${tree.mods ? tree.mods + ' ' : ''}${tree.ret ? tree.ret + ' ' : ''}${tree.name}(${tree.paramsRaw})` : `\t// (no signature found)`;
	lines.push(sig);
	lines.push('\t{');
	// the body is printed first: doing so reveals every declared local (including the temporaries
	// introduced for the wabt block/if expressions)
	const bodyLines = stmts(stmtsAst, pc, 2);
	const declLines = [];
	for (const d of pc.decls) declLines.push(`\t\t${csType(d.type)} ${d.name};`);
	if (declLines.length) {
		declLines.push('');
		lines.push(...declLines);
	}
	lines.push(...bodyLines);
	lines.push('\t}');
	return lines;
}

function findTree(m) {
	const entry = TREE.get(m.file) || TREE.byName.get(m.file);
	if (!entry) return null;
	const cands = entry.methods.filter((x) => x.name === m.name);
	if (cands.length <= 1) return cands[0] || null;
	const csCount = m.params ? splitParams(m.params).length : 0;
	return cands.find((x) => x.mods.includes('static') === !!m.isStatic && x.paramNames.length === csCount) ||
		cands.find((x) => x.mods.includes('static') === !!m.isStatic) || cands[0] || null;
}

// ===================================================================================== flat listings
// A handful of tree methods could not be tied to a wasm function.  Their Cpp2IL ISIL listings are mostly
// straight-line (`local/const/load`, `binary`, `store`, `call`, `return`), so the wasm operand stack can
// be simulated directly and the result printed through the same printer.  Anything else -- control flow,
// an unresolved indirect call, an unknown opcode, a stack underflow -- bails out and the listing is kept
// verbatim in the tree file.
const FLAT_LOADS = {
	I32Load: 'int', I32Load8_S: 'byte', I32Load8_U: 'ubyte', I32Load16_S: 'short', I32Load16_U: 'ushort',
	I64Load: 'long', I64Load32_S: 'int', I64Load32_U: 'int', F32Load: 'float', F64Load: 'double',
};
const FLAT_STORES = {
	I32Store: 'int', I32Store8: 'ubyte', I32Store16: 'ushort', I64Store: 'long', I64Store32: 'int',
	F32Store: 'float', F64Store: 'double',
};
const FLAT_BINOPS = {
	I32Add: '+', I32Sub: '-', I32Mul: '*', I32DivS: '/', I32DivU: '/', I32RemS: '%', I32RemU: '%',
	I32And: '&', I32Or: '|', I32Xor: '^', I32Shl: '<<', I32ShrS: '>>', I32ShrU: '>>',
	I32Eq: '==', I32Ne: '!=', I32LtS: '<', I32LtU: '<', I32GtS: '>', I32GtU: '>',
	I32LeS: '<=', I32LeU: '<=', I32GeS: '>=', I32GeU: '>=',
	I64Add: '+', I64Sub: '-', I64Mul: '*', I64DivS: '/', I64DivU: '/', I64RemS: '%', I64RemU: '%',
	I64And: '&', I64Or: '|', I64Xor: '^', I64Shl: '<<', I64ShrS: '>>', I64ShrU: '>>',
	I64Eq: '==', I64Ne: '!=', I64LtS: '<', I64LtU: '<', I64GtS: '>', I64GtU: '>',
	I64LeS: '<=', I64LeU: '<=', I64GeS: '>=', I64GeU: '>=',
	F32Add: '+', F32Sub: '-', F32Mul: '*', F32Div: '/', F32Eq: '==', F32Ne: '!=',
	F32Lt: '<', F32Gt: '>', F32Le: '<=', F32Ge: '>=',
	F64Add: '+', F64Sub: '-', F64Mul: '*', F64Div: '/', F64Eq: '==', F64Ne: '!=',
	F64Lt: '<', F64Gt: '>', F64Le: '<=', F64Ge: '>=',
};
const FLAT_CONVS = {
	F32ConvertI32S: 'f32_convert_i32_s', F32ConvertI32U: 'f32_convert_i32_u', F32ConvertI64S: 'f32_convert_i64_s',
	I32TruncF32S: 'i32_trunc_f32_s', I32TruncF32U: 'i32_trunc_f32_u', I64ExtendI32S: 'i64_extend_i32_s',
	I64ExtendI32U: 'i64_extend_i32_u', I32WrapI64: 'i32_wrap_i64', F64PromoteF32: 'f64_promote_f32',
	F32DemoteF64: 'f32_demote_f64', F32ReinterpretI32: 'f32_reinterpret_i32',
	I32ReinterpretF32: 'i32_reinterpret_f32', I64ReinterpretF64: 'i64_reinterpret_f64',
	F64ReinterpretI64: 'f64_reinterpret_i64',
};
const PRINTED_BY_FUNC = new Map();
for (const [p, v] of Object.entries(NAMES.byPrinted)) {
	if (v && v[0] != null && !PRINTED_BY_FUNC.has(v[0])) PRINTED_BY_FUNC.set(v[0], p);
}

function classOfFile(lines) {
	for (const l of lines) {
		const m = /^\s*(?:\[[^\]]*\]\s*)*(?:(?:public|internal|private|protected)\s+)?(?:(?:static|sealed|abstract|partial|unsafe)\s+)*class\s+([A-Za-z_][A-Za-z0-9_]*)/.exec(l);
		if (m) return m[1];
	}
	return null;
}

// the tree signature gives the C# parameters; a `ref`/`out` parameter arrives as its address
function csParamSpec(p) {
	const ref = /\b(ref|out|in)\b/.test(p);
	let s = p.replace(/\b(ref|out|in|params|this)\b/g, ' ').trim();
	const m = new RegExp(`(${IDENT})\\s*(?:=[\\s\\S]*)?$`).exec(s);
	if (m) s = s.slice(0, m.index).trim();
	return { text: s || 'int', ref };
}

function parseListingOps(lines, tree) {
	const ops = [];
	for (let i = tree.markerLine + 1; i <= tree.lastListing; i++) {
		const m = /^\s*\/\/\s+0x[0-9A-Fa-f]+\s+(.*?)\s*$/.exec(lines[i]);
		if (!m) continue;
		let body = m[1];
		let annotation = null;
		const semi = body.indexOf(';');
		if (semi >= 0) { annotation = body.slice(semi + 1).trim(); body = body.slice(0, semi).trim(); }
		const sp = body.indexOf(' ');
		const op = sp < 0 ? body : body.slice(0, sp);
		const argsRaw = sp < 0 ? '' : body.slice(sp + 1).trim();
		ops.push({ op, args: argsRaw ? argsRaw.split(',').map((x) => x.trim()) : [], annotation });
	}
	return ops;
}

function localIndexOf(o) {
	if (/^Local(Get|Set|Tee)_\d+$/.test(o.op)) return parseInt(o.op.split('_')[1], 10);
	if (/^Local(Get|Set|Tee)$/.test(o.op) && /^\d+$/.test(o.args[0] || '')) return parseInt(o.args[0], 10);
	return null;
}

function calleeName(n, annotation) {
	const p = PRINTED_BY_FUNC.get(n);
	if (p) return p;
	if (annotation && /^[A-Za-z_]/.test(annotation)) {
		return annotation.replace(/`\d+/g, '').replace(/[<>]/g, '_').replace(/\+/g, '.').replace(/::/g, '.');
	}
	return `f_${n}`;
}

function flatTranslate(tree, cls, lines) {
	const method = {
		file: tree.file, type: cls, name: tree.name, func: null, funcName: null, how: 'listing',
		isStatic: tree.mods.includes('static'), params: tree.paramsRaw,
	};
	const pc = new PCtx(method, tree);
	pc.fieldCSTypes = new Map();
	for (const c of Object.keys(fieldTables)) {
		for (const entry of fieldTables[c]) {
			for (const [name, cs] of Object.entries(entry.fieldTypes || {})) pc.fieldCSTypes.set(`${entry.name}.${name}`, cs);
		}
	}

	// locals: the listing addresses them by index, the IL2CPP ABI is (this, [methodInfo], args...)
	const ops = parseListingOps(lines, tree);
	let maxLocal = -1;
	for (const o of ops) {
		const i = localIndexOf(o);
		if (i != null && i > maxLocal) maxLocal = i;
	}
	const specs = tree.paramNames.map((n, i) => ({ name: n || `arg${i}`, ...csParamSpec(tree.params[i] || '') }));
	const idxBase = method.isStatic ? 0 : 1;
	const nW = maxLocal + 1;
	const paramTargets = new Set();
	if (!method.isStatic && nW > 0) { pc.rename.set('0', 'this'); pc.locals.set('this', obj(cls)); }
	let idx = idxBase;
	// the C# parameters occupy the slots right after `this` (IL2CPP appends a hidden methodInfo slot
	// *last*; without the wasm function we cannot tell whether it is present, so it is never asserted).
	// Every other index the listing addresses is an unnamed wasm local and is rendered by its index.
	for (let k = 0; k < specs.length && idx < nW; k++, idx++) {
		const s = specs[k];
		pc.rename.set(String(idx), s.name);
		pc.locals.set(s.name, s.ref ? ptr(T.unknown) : csFromName(s.text, pc));
		paramTargets.add(s.name);
	}
	for (; idx < nW; idx++) {
		pc.rename.set(String(idx), `local${idx}`);
		pc.declare(`local${idx}`, ptr(T.unknown));
	}
	const nameOf = (i) => pc.rename.get(String(i)) || `local${i}`;
	const localTypeOf = (i) => pc.locals.get(nameOf(i)) || T.unknown;

	const stack = [];
	const ast = [];
	const push = (node, t) => stack.push({ node, t });
	const pop = (o) => { if (!stack.length) throw new Error(`stack underflow at \`${o.op}\``); return stack.pop(); };
	const emit = (e) => ast.push({ k: 'expr', e });
	const isVoidRet = !tree.ret || tree.ret === 'void';
	for (let k = 0; k < ops.length; k++) {
		const o = ops[k];
		const op = o.op;
		if (op === 'End') { if (k !== ops.length - 1) throw new Error('block structure'); break; }
		if (op === 'Nop') continue;
		const li = localIndexOf(o);
		if (li != null) {
			const nm = nameOf(li);
			const t = localTypeOf(li);
			if (op.startsWith('LocalGet')) { push({ k: 'name', n: nm }, t); continue; }
			const v = pop(o);
			emit({ k: 'assign', target: { k: 'name', n: nm }, value: v.node });
			if (op.startsWith('LocalTee')) push({ k: 'name', n: nm }, t);
			continue;
		}
		if (op === 'GlobalGet' || op === 'GlobalSet') {
			const n = o.args[0] === '0' ? 'g_a' : `g_${o.args[0]}`;
			if (op === 'GlobalGet') push({ k: 'name', n }, ptr(T.unknown));
			else emit({ k: 'assign', target: { k: 'name', n }, value: pop(o).node });
			continue;
		}
		if (op === 'I32Const' || op === 'I64Const' || op === 'F32Const' || op === 'F64Const') {
			let raw = String(o.args[0]).trim();
			let t = T.int;
			if (op === 'I64Const') { if (!/[lL]$/.test(raw)) raw += 'L'; t = T.long; }
			else if (op === 'F32Const') { if (!/[fF]$/.test(raw)) raw += 'f'; t = T.float; }
			else if (op === 'F64Const') { if (!/[dD]$/.test(raw)) raw += 'D'; t = T.double; }
			push({ k: 'num', raw }, t);
			continue;
		}
		const memNode = (addr, off, txt) => ({
			k: 'index', base: addr, idx: { k: 'num', raw: String(off) }, type: { k: 'wasmtype', txt, align: 1 },
		});
		if (FLAT_LOADS[op]) {
			const addr = pop(o);
			const off = parseInt(o.args[1] !== undefined ? o.args[1] : '0', 10);
			const txt = FLAT_LOADS[op];
			push(memNode(addr.node, off, txt), mapWasm(txt));
			continue;
		}
		if (FLAT_STORES[op]) {
			const value = pop(o);
			const addr = pop(o);
			const off = parseInt(o.args[1] !== undefined ? o.args[1] : '0', 10);
			emit({ k: 'assign', target: memNode(addr.node, off, FLAT_STORES[op]), value: value.node });
			continue;
		}
		if (op === 'Call') {
			const n = parseInt(o.args[0], 10);
			if (!(n >= 0)) throw new Error(`unresolved call target (${o.args[0]})`);
			const rec = NAMES.byFunc[String(n)];
			if (!rec) throw new Error(`unknown callee func${n}`);
			const params = rec[1] || [];
			if (stack.length < params.length) throw new Error(`stack underflow calling func${n}`);
			const argv = [];
			for (let q = 0; q < params.length; q++) argv.unshift(pop(o).node);
			const node = { k: 'call', name: calleeName(n, o.annotation), args: argv };
			if (rec[2] && rec[2] !== 'void') push(node, mapWasm(rec[2]));
			else emit(node);
			continue;
		}
		if (FLAT_BINOPS[op]) {
			const b = pop(o);
			const a = pop(o);
			const bin = { k: 'bin', op: FLAT_BINOPS[op], a: a.node, b: b.node };
			push(bin, PREC[FLAT_BINOPS[op]] <= 9 ? T.int : wider(a.t, b.t));
			continue;
		}
		if (op === 'I32Eqz' || op === 'I64Eqz') {
			push({ k: 'eqz', a: pop(o).node }, T.int);
			continue;
		}
		if (FLAT_CONVS[op]) {
			const node = { k: 'call', name: FLAT_CONVS[op], args: [pop(o).node] };
			push(node, typeOf(node, pc));
			continue;
		}
		if (op === 'Select' || op === 'SelectIf') {
			const c = pop(o);
			const b = pop(o);
			const a = pop(o);
			push({ k: 'select_if', args: [a.node, b.node, c.node] }, wider(a.t, b.t));
			continue;
		}
		if (op === 'Drop') {
			const v = pop(o);
			if (v.node.k === 'call' || v.node.k === 'index') emit(v.node);
			continue;
		}
		if (op === 'Return') {
			ast.push({ k: 'return', e: isVoidRet || !stack.length ? null : pop(o).node });
			continue;
		}
		if (op === 'Unreachable') { ast.push({ k: 'unreachable' }); continue; }
		throw new Error(`unsupported opcode \`${op}\``);
	}
	// the value left on the stack at the function's `End` is the result
	if (stack.length) {
		const top = stack[stack.length - 1];
		if (!isVoidRet) ast.push({ k: 'return', e: top.node });
		else for (const v of stack) if (v.node.k === 'call' || v.node.k === 'index') emit(v.node);
	}
	// a listing that writes local 0 (`this`) becomes a plain pointer local, as in the dcmp path
	if (!method.isStatic && ast.some((s) => s.k === 'expr' && s.e.k === 'assign' && s.e.target.k === 'name' && s.e.target.n === 'this')) {
		pc.rename.set('this', 'this_');
		pc.declare('this_', ptr(T.unknown));
		pc.notes.add('`this` is written by the listing; rendered as the pointer local `this_`');
	}
	return { lines: assemble(pc, method, tree, ast, paramTargets), pc };
}

// ===================================================================================== driver
function fmtErr(e, method) {
	return `${method.file} ${method.type}::${method.name} (func${method.func}): ${e.message}`;
}

if (has('--check')) {
	let ok = 0;
	const errors = [];
	const constructStats = new Map();
	for (const m of DATA.methods) {
		const tree = findTree(m);
		try {
			const r = translate(m, tree);
			ok++;
			for (const n of r.pc.notes) constructStats.set(n, (constructStats.get(n) || 0) + 1);
		} catch (e) {
			errors.push(fmtErr(e, m));
		}
	}
	console.log(JSON.stringify({ total: DATA.methods.length, translated: ok, failed: errors.length }, null, 2));
	console.log('--- notes seen ---');
	for (const [k, v] of [...constructStats].sort((a, b) => b[1] - a[1])) console.log(`  ${String(v).padStart(5)}  ${k}`);
	console.log('--- errors (first 40) ---');
	for (const e of errors.slice(0, 40)) console.log('  ' + e);
	process.exit(0);
}

if (has('--ast')) {
	const af = argOf('--file'), at = argOf('--method'), an = ARGV[ARGV.indexOf('--method') + 2];
	for (const m of DATA.methods) {
		if (af && m.file !== af) continue;
		if (at && !(m.type === at && m.name === an)) continue;
		console.log('===== ' + m.file + ' :: ' + m.type + '::' + m.name);
		console.log(JSON.stringify(parseBody(m.body), null, 1));
	}
	process.exit(0);
}
if (has('--file') || has('--method')) {
	const wantFile = argOf('--file');
	const wantType = argOf('--method');
	const wantName = wantType ? ARGV[ARGV.indexOf('--method') + 2] : null;
	for (const m of DATA.methods) {
		if (wantFile && m.file !== wantFile) continue;
		if (wantType && !(m.type === wantType && m.name === wantName)) continue;
		const tree = findTree(m);
		try {
			const r = translate(m, tree);
			console.log(`\n===== ${m.file} :: ${m.type}::${m.name}  (func${m.func}, ${r.info.w} wasm params, ${r.info.cs} cs params, hidden ${r.info.hidden}) =====`);
			console.log(r.lines.join('\n'));
			for (const n of r.pc.notes) console.log(`// note: ${n}`);
		} catch (e) {
			console.log(`\n===== ${m.file} :: ${m.type}::${m.name}  FAILED: ${e.message}`);
		}
	}
	process.exit(0);
}

if (has('--all')) {
	const out = [];
	const failures = [];
	for (const m of DATA.methods) {
		const tree = findTree(m);
		if (!tree) { failures.push({ ...m, reason: 'no tree signature' }); continue; }
		try {
			const r = translate(m, tree);
			out.push({
				file: m.file, type: m.type, name: m.name, func: m.func, how: m.how, ops: tree.ops,
				sigLine: tree.sigLine, openLine: tree.openLine, markerLine: tree.markerLine,
				lastListing: tree.lastListing, closeLine: tree.closeLine,
				lines: r.lines, notes: [...r.pc.notes],
				records: [...r.pc.records.values()].map((x) => ({ rec: x.rec, fields: x.fields.map((f) => ({ name: f.name, cs: csType(f.type), off: f.offset })) })),
			});
		} catch (e) {
			failures.push({ file: m.file, type: m.type, name: m.name, func: m.func, reason: e.message });
		}
	}
	// the tree methods the dcmp pass did not cover: their straight-line ISIL listings are simulated
	// (keys are basenames so they match whichever layout the tree is in)
	const covered = new Set(out.map((m) => `${path.basename(m.file)}:${m.markerLine}`));
	let flatOK = 0, flatBail = 0;
	for (const [file, entry] of TREE) {
		if (!inScope(file)) continue;
		const cls = classOfFile(entry.lines);
		for (const t of entry.methods) {
			if (covered.has(`${path.basename(file)}:${t.markerLine}`)) continue;
			try {
				const r = flatTranslate(t, cls, entry.lines);
				flatOK++;
				out.push({
					file, type: cls, name: t.name, func: null, how: 'listing', ops: t.ops,
					sigLine: t.sigLine, openLine: t.openLine, markerLine: t.markerLine,
					lastListing: t.lastListing, closeLine: t.closeLine,
					lines: r.lines, notes: [...r.pc.notes], records: [],
				});
			} catch (e) {
				flatBail++;
				failures.push({ file, type: cls, name: t.name, func: null, reason: `listing: ${e.message}` });
			}
		}
	}
	fs.writeFileSync(path.join(__dirname, 'asm2cs_out.json'), JSON.stringify({ methods: out, failures }, null, 1));
	console.log(JSON.stringify({ translated: out.length - flatOK, flat: flatOK, flatBailed: flatBail, failed: failures.length - flatBail }, null, 2));
	for (const f of failures.slice(0, 30)) console.log(`  ${f.file} ${f.type}::${f.name} (func${f.func}): ${f.reason}`);
	process.exit(0);
}

if (has('--flat')) {
	const wantFile = argOf('--file');
	const covered = new Set();
	for (const m of DATA.methods) {
		const t = findTree(m);
		if (t) covered.add(`${path.basename(m.file)}:${t.markerLine}`);
	}
	let ok = 0, bail = 0;
	for (const [file, entry] of TREE) {
		if (!inScope(file)) continue;
		if (wantFile && file !== wantFile && path.basename(file) !== wantFile) continue;
		const cls = classOfFile(entry.lines);
		for (const t of entry.methods) {
			if (covered.has(`${path.basename(file)}:${t.markerLine}`)) continue;
			console.log(`\n===== ${file} :: ${cls}::${t.name} (${t.ops} ops) =====`);
			for (let q = t.markerLine; q <= t.lastListing; q++) console.log(entry.lines[q]);
			try {
				const r = flatTranslate(t, cls, entry.lines);
				ok++;
				console.log(r.lines.join('\n'));
			} catch (e) {
				bail++;
				console.log(`  BAIL: ${e.message}`);
			}
		}
	}
	console.log(`\n--- flat listings: ${ok} translated, ${bail} bailed out ---`);
	process.exit(0);
}

if (has('--expr')) {
	const src = argOf('--expr');
	const pc = new PCtx({ file: '-', type: 'T', name: 'm', func: 0, how: '-', isStatic: false, params: '' }, null);
	pc.fieldCSTypes = new Map();
	try {
		const ast = parseBody(src);
		console.log('ast: ' + JSON.stringify(ast));
		console.log('csharp:\n' + stmts(ast, pc, 0).join('\n'));
	} catch (e) {
		console.log('ERR ' + e.message);
	}
	process.exit(0);
}

console.log('usage: node asm2cs_dcmp.js --check | --file <name.cs> | --method <Type> <Name> | --flat [--file <name.cs>] | --all');
