'use strict';
// Print the dcmp body of an in-scope method (for translator debugging).
// Usage: node show_body.js <Type> <Name> [maxLines]
const fs = require('fs');
const path = require('path');
const d = JSON.parse(fs.readFileSync(path.join(__dirname, 'dcmp_bodies.json'), 'utf8'));
const [type, name, max] = process.argv.slice(2);
const m = d.methods.find((x) => x.type === type && x.name === name);
if (!m) { console.log('not found'); process.exit(1); }
const lines = (m.body || '').split('\n');
const n = max ? parseInt(max, 10) : lines.length;
console.log(`### ${m.type}::${m.name} (func${m.func}, ${lines.length} lines)`);
for (let i = 0; i < Math.min(n, lines.length); i++) console.log(`${i + 1}: ${lines[i]}`);
