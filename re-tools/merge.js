// Merge recovered structure (dump.cs) with decompiled wasm bodies -> real .cs files.
const fs = require('fs');
const path = require('path');

const dumpPath = process.argv[2];     // Dump/dump.cs
const wasmDir  = process.argv[3];     // Decompiled/Wasm/Assembly-CSharp  (*.c)
const outDir   = process.argv[4];     // Decompiled/CSharp/Assembly-CSharp

const ASCRANGE = [5534, 6341];

// ---------- 1. read decompiled bodies from the per-type .c files ----------
const bodiesByType = new Map(); // type -> Map(shortName -> bodyText)
for (const file of fs.readdirSync(wasmDir)) {
  if (!file.endsWith('.c')) continue;
  const type = file.slice(0, -2);
  const txt = fs.readFileSync(path.join(wasmDir, file), 'utf8');
  const map = new Map();
  const re = /^function ([A-Za-z0-9_$]+)\(([^\n]*)\)\s*\{[^\n]*\n([\s\S]*?)^\}$/gm;
  let m;
  while ((m = re.exec(txt)) !== null) {
    const full = m[1];
    const args = m[2];
    const body = m[3].replace(/\s+$/,'');
    const short = full.startsWith(type + '_') ? full.slice(type.length + 1) : full;
    map.set(short, { full, args, body });
  }
  bodiesByType.set(type, map);
}

// normalise a name for loose matching (handles ctor / compiler-generated)
const norm = s => s.replace(/[<>.$`_]/g, '').toLowerCase();
function findBody(map, dumpName) {
  if (!map) return null;
  for (const [short, v] of map) if (short === dumpName) return v;
  const n = norm(dumpName);
  for (const [short, v] of map) if (norm(short) === n) return v;
  // compiler-generated: decompiled has leading 'c' or trailing _b__NN
  for (const [short, v] of map) {
    if (norm(short).endsWith(n) || n.endsWith(norm(short))) return v;
  }
  return null;
}

// ---------- 2. parse dump.cs ----------
const lines = fs.readFileSync(dumpPath, 'utf8').split(/\r?\n/);
const types = [];               // {name, header, attrs, fields[], methods[]}
let i = 0;
const declRe = /^(\s*)((?:public|internal|private|protected)[\w\s]*?\b(?:class|struct|interface|enum)\s+([A-Za-z0-9_]+)(?=[\s:<])[^{]*?)\s*\/\/ TypeDefIndex:\s*(\d+)\s*$/;
while (i < lines.length) {
  const m = lines[i].match(declRe);
  if (m) {
    const idx = parseInt(m[4], 10);
    const name = m[3];
    if (idx >= ASCRANGE[0] && idx < ASCRANGE[1]) {
      const t = { name, idx, header: m[2].trim(), attrs: [], fields: [], methods: [] };
      // preceding attribute/namespace lines
      let j = i - 1;
      const pre = [];
      while (j >= 0 && (lines[j].startsWith('[') || lines[j].startsWith('// Namespace') || lines[j].startsWith('// '))) { pre.unshift(lines[j]); j--; }
      t.attrs = pre;
      // find opening brace
      i++;
      while (i < lines.length && lines[i].trim() !== '{') i++;
      i++; // skip {
      let section = null;
      for (; i < lines.length; i++) {
        const L = lines[i];
        if (L === '}') break;
        if (L.trim() === '// Fields') { section = 'fields'; continue; }
        if (L.trim() === '// Methods') { section = 'methods'; continue; }
        if (section === 'fields') {
          if (L.trim().startsWith('//')) continue;
          if (L.includes(';')) t.fields.push(L.replace(/\s*\/\/ 0x[0-9A-Fa-f]+$/, '').trim());
        } else if (section === 'methods') {
          if (L.trim().startsWith('//')) continue;
          if (L.includes('{ }') || L.endsWith('{ }')) {
            t.methods.push({ sig: L.trim().replace(/\s*\{\s*\}\s*$/, '') });
          } else if (L.startsWith('[') || L.trim().startsWith('[')) {
            // attribute for next method - stash on a rolling buffer is overkill; ignore
          }
        }
      }
      types.push(t);
      continue;
    }
  }
  i++;
}

// ---------- 3. write .cs ----------
fs.mkdirSync(outDir, { recursive: true });
let written = 0, withBodies = 0;
for (const t of types) {
  const map = bodiesByType.get(t.name);
  const usedBodies = new Set();
  let out = '';
  out += '// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).\n';
  out += '// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code\n';
  out += '// recovered from the WebAssembly binary, not original C#.\n\n';
  if (t.attrs.length) out += t.attrs.join('\n') + '\n';
  out += t.header + '\n{\n';
  if (t.fields.length) {
    out += '\t// Fields\n';
    for (const f of t.fields) out += '\t' + f + '\n';
    out += '\n';
  }
  if (t.methods.length) {
    out += '\t// Methods\n';
    for (const mth of t.methods) {
      const nameM = mth.sig.match(/([A-Za-z0-9_<>$.`]+)\s*\(/);
      const dumpName = nameM ? nameM[1].replace(/^.*[.:]/, '') : null;
      const bodyObj = dumpName ? findBody(map, dumpName) : null;
      out += '\t' + mth.sig + '\n';
      if (bodyObj) {
        usedBodies.add(bodyObj.full);
        out += '\t{\n';
        out += '\t\t// ---- decompiled from wasm (' + bodyObj.full + ') ----\n';
        for (const bl of bodyObj.body.split('\n')) out += '\t\t// ' + bl + '\n';
        out += '\t}\n\n';
        withBodies++;
      } else {
        out += '\t{\n\t\t// <no wasm mapping>\n\t}\n\n';
      }
    }
  }
  // leftover decompiler functions (compiler-generated / nested)
  if (map) {
    const leftovers = [...map.values()].filter(v => !usedBodies.has(v.full));
    if (leftovers.length) {
      out += '\t// ---- Additional recovered functions (compiler-generated / synthetic) ----\n';
      for (const v of leftovers) {
        out += '\t// ' + v.full + '(' + v.args + ')\n';
        for (const bl of v.body.split('\n')) out += '\t// ' + bl + '\n';
        out += '\n';
      }
    }
  }
  out += '}\n';
  fs.writeFileSync(path.join(outDir, t.name + '.cs'), out);
  written++;
}

console.log('types written:', written, 'methods with real bodies:', withBodies);
