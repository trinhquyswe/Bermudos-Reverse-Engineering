// Build the wasm-function-index -> (Assembly-CSharp type, method) map from the
// prior wabt decompilation tree (Decompiled/Wasm/Assembly-CSharp/<Type>.c).
//
// Each function definition in those files looks like:
//   function Ammo_SetAmmoPlayer(a:long_ptr@4, ...) { // func21524
// The containing file name is authoritative for the type; the method is the
// function name with the "<Type>_" prefix stripped.
//
// Output: re-tools/ghidra/asmcs_index.json
//   { "types": [...], "entries": [ { "func": 21524, "type": "Ammo",
//                                     "method": "SetAmmoPlayer", "file": "Ammo.c" }, ... ] }
const fs = require("fs");
const path = require("path");

const REPO = "C:\\Users\\usopp\\Downloads\\webgl1\\webgl";
const SRC = path.join(REPO, "Decompiled", "Wasm", "Assembly-CSharp");
const OUT = path.join(REPO, "re-tools", "ghidra", "asmcs_index.json");

// Handles both "function Name(a:int) { // funcN" and "function Name(a:int):int { // funcN"
const FnRe = /^\s*function\s+([A-Za-z_$][\w$]*)\s*\(.*?\)\s*(?::[^{]*)?\{\s*\/\/\s*func(\d+)/;

const files = fs.readdirSync(SRC).filter((f) => f.endsWith(".c")).sort();
const entries = [];
const types = [];
const seenFunc = new Map();

for (const file of files) {
  const type = file.slice(0, -2); // strip ".c"
  types.push(type);
  const text = fs.readFileSync(path.join(SRC, file), "utf8");
  const prefix = type + "_";
  for (const line of text.split(/\r?\n/)) {
    const m = FnRe.exec(line);
    if (!m) continue;
    const func = Number(m[2]);
    const rawName = m[1];
    const method = rawName.startsWith(prefix) ? rawName.slice(prefix.length) : rawName;
    if (seenFunc.has(func)) {
      // keep the first, but record the collision for review
      entries.push({ func, type, method, file, duplicateOf: seenFunc.get(func) });
      continue;
    }
    seenFunc.set(func, type + "::" + method);
    entries.push({ func, type, method, file });
  }
}

const unique = entries.filter((e) => !e.duplicateOf);
const byFunc = [...seenFunc.keys()].sort((a, b) => a - b);

fs.mkdirSync(path.dirname(OUT), { recursive: true });
fs.writeFileSync(
  OUT,
  JSON.stringify({ types: types.sort(), entries: unique, duplicates: entries.filter((e) => e.duplicateOf) }, null, 0)
);

console.log("types           = " + types.length);
console.log("total defs      = " + entries.length);
console.log("unique funcs    = " + unique.length);
console.log("duplicate funcs = " + entries.filter((e) => e.duplicateOf).length);
console.log("func idx range  = " + byFunc[0] + " .. " + byFunc[byFunc.length - 1]);
console.log("out             = " + OUT);
