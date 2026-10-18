// Group wasm-decompile output functions back into their C# (Assembly-CSharp) classes.
const fs = require('fs');
const readline = require('readline');
const path = require('path');

const csvPath = process.argv[2];
const dcmpPath = process.argv[3];
const outRoot = process.argv[4];

// ---- load Assembly-CSharp top-level type names ----
const types = new Set();
for (const line of fs.readFileSync(csvPath, 'utf8').split(/\r?\n/)) {
  const m = line.match(/^"(\d+)","(.+)"$/);
  if (!m) continue;
  const n = m[2];
  if (n.includes('.')) continue;   // nested types
  if (n.startsWith('<')) continue; // <Module> etc.
  types.add(n);
}

function matchType(fnName) {
  // try every prefix ending right before an underscore
  let idx = fnName.indexOf('_');
  while (idx > 0) {
    const cand = fnName.slice(0, idx);
    if (types.has(cand)) return cand;
    idx = fnName.indexOf('_', idx + 1);
  }
  return null;
}

// ---- scan dcmp ----
const outDir = path.join(outRoot, 'Assembly-CSharp');
fs.mkdirSync(outDir, { recursive: true });

const writers = new Map();
function writerFor(t) {
  let w = writers.get(t);
  if (!w) {
    const p = path.join(outDir, t + '.c');
    w = fs.createWriteStream(p);
    w.write('// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile\n');
    w.write('// Type: ' + t + '  (Assembly-CSharp)\n\n');
    writers.set(t, w);
  }
  return w;
}

const index = fs.createWriteStream(path.join(outRoot, '_AssemblyCSharp_index.tsv'));
index.write('func\ttype\tmethod\n');

const rl = readline.createInterface({ input: fs.createReadStream(dcmpPath), crlfDelay: Infinity });

let buf = null;    // current function lines
let curName = null;
let matched = null;
let inside = false;
let counts = new Map();
let total = 0;

rl.on('line', (line) => {
  if (!inside) {
    if (line.startsWith('function ')) {
      inside = true;
      buf = [line];
      // function NAME(args) { // funcNNN
      const m = line.match(/^function ([^(]+)\(/);
      curName = m ? m[1].trim() : null;
      const fm = line.match(/\/\/ (func\d+)\s*$/);
      curFuncId = fm ? fm[1] : '';
      matched = curName ? matchType(curName) : null;
    }
  } else {
    buf.push(line);
    if (line === '}') {
      inside = false;
      if (matched) {
        writerFor(matched).write(buf.join('\n') + '\n\n');
        index.write(curFuncId + '\t' + matched + '\t' + curName + '\n');
        counts.set(matched, (counts.get(matched) || 0) + 1);
        total++;
      }
      buf = null; curName = null; matched = null;
    }
  }
});

rl.on('close', () => {
  for (const w of writers.values()) w.end();
  index.end();
  const sorted = [...counts.entries()].sort((a, b) => b[1] - a[1]);
  console.log('total game functions extracted:', total);
  console.log('types with code:', counts.size, '/', types.size);
  console.log('top types:');
  for (const [t, c] of sorted.slice(0, 25)) console.log('  ' + t + ': ' + c);
});
