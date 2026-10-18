#!/usr/bin/env node
// Verify the Ghidra C tree (Decompiled/C/Assembly-CSharp) against the requested index.
//
//   node verify_export.js [index.json] [out_dir]
//
// Reports: functions requested vs. exported, per-type file count, missing/failed
// function indices, and any .c file whose body is empty or too small to be real.
const fs = require('fs');
const path = require('path');

const repo = path.resolve(__dirname, '..', '..');
const indexPath = process.argv[2] || path.join(__dirname, 'asmcs_index.json');
const outDir = process.argv[3] || path.join(repo, 'Decompiled', 'C', 'Assembly-CSharp');

const index = JSON.parse(fs.readFileSync(indexPath, 'utf8'));
const entries = index.entries;
const wantFunc = new Set(entries.map((e) => Number(e.func)));
const wantTypes = new Set(entries.map((e) => e.type));

if (!fs.existsSync(outDir)) {
  console.error('FAIL: output dir does not exist: ' + outDir);
  process.exit(2);
}

const files = fs.readdirSync(outDir).filter((f) => f.endsWith('.c'));
const gotFunc = new Set();
const perType = new Map();
const shortBodies = [];
const tsvPath = path.join(outDir, '_index.tsv');

if (!fs.existsSync(tsvPath)) {
  console.error('FAIL: missing _index.tsv');
  process.exit(2);
}
for (const line of fs.readFileSync(tsvPath, 'utf8').split(/\r?\n/)) {
  if (!line || line.startsWith('func\t')) continue;
  const [func] = line.split('\t');
  gotFunc.add(Number(func));
}

for (const f of files) {
  const txt = fs.readFileSync(path.join(outDir, f), 'utf8');
  const n = (txt.match(/^\/\/ ---- /gm) || []).length;
  perType.set(f, n);
  // A function is an unresolved stub only when its whole body is the
  // disassembler's trap loop (halt_trap is also normal in dead/unreachable
  // branches of fully-decompiled functions, so presence alone means nothing).
  const blocks = txt.split(/^\/\/ ---- /m).slice(1);
  for (const b of blocks) {
    const head = b.split('\n')[0];
    const body = b
      .split('\n')
      .slice(1)
      .join('\n')
      .replace(/\/\*[\s\S]*?\*\//g, '')
      .replace(/\/\/[^\n]*/g, '')
      .replace(/\s+/g, '')
      .replace(/;+$/, '');
    if (/^do\{halt_trap\(\);?\}while\(true\);?$/.test(body)) {
      shortBodies.push(f + ' :: ' + head.trim());
    }
  }
}

const missing = [...wantFunc].filter((n) => !gotFunc.has(n));
const extra = [...gotFunc].filter((n) => !wantFunc.has(n));
const emptyFiles = [...perType.entries()].filter(([, n]) => n === 0).map(([f]) => f);
const missingTypeFiles = [...wantTypes].filter((t) => !files.includes(t + '.c'));

const ok = missing.length === 0 && extra.length === 0 && emptyFiles.length === 0 && missingTypeFiles.length === 0;

console.log('index requested : %d functions across %d types', entries.length, wantTypes.size);
console.log('exported        : %d functions across %d type files', gotFunc.size, files.length);
console.log('missing funcs   : %d%s', missing.length, missing.length ? ' -> ' + missing.slice(0, 20).join(',') : '');
console.log('unexpected funcs: %d%s', extra.length, extra.length ? ' -> ' + extra.slice(0, 20).join(',') : '');
console.log('empty type files: %d%s', emptyFiles.length, emptyFiles.length ? ' -> ' + emptyFiles.join(', ') : '');
console.log('missing type .c : %d%s', missingTypeFiles.length, missingTypeFiles.length ? ' -> ' + missingTypeFiles.join(', ') : '');
console.log('unresolved stubs: %d%s', shortBodies.length, shortBodies.length ? ' -> ' + shortBodies.slice(0, 10).join(', ') : '');

const biggest = [...perType.entries()].sort((a, b) => b[1] - a[1]).slice(0, 8);
console.log('largest types   : ' + biggest.map(([f, n]) => f.replace(/\.c$/, '') + '(' + n + ')').join(', '));

console.log(ok ? 'VERIFY_OK' : 'VERIFY_INCOMPLETE');
process.exit(ok ? 0 : 1);
