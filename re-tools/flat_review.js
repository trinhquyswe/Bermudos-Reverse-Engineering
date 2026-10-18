'use strict';
// flat_review.js - compact side-by-side view of the listing-simulated methods.
//   node asm2cs_dcmp.js --flat | Out-File -Encoding utf8 flat_review.txt   (produces the input)
//   node flat_review.js
const fs = require('fs');
const t = fs.readFileSync(__dirname + '/flat_review.txt', 'utf8').replace(/\r/g, '');
const blocks = t.split('\n===== ').slice(1);
const out = [];
for (const b of blocks) {
	const lines = b.split('\n');
	const head = lines[0].replace(' =====', '');
	if (lines.length > 14) { out.push(`### ${head}  -- BAILED, listing kept`); continue; }
	const ops = lines.filter((l) => /0x[0-9A-Fa-f]+\s/.test(l)).map((l) => l.replace(/^\s*\/\/\s+0x[0-9A-Fa-f]+\s+/, ''));
	const body = lines.slice(1).filter((l) => !/0x[0-9A-Fa-f]+\s/.test(l) && !/---- wasm disassembly/.test(l));
	out.push(`### ${head}`);
	out.push(`  in : ${ops.join(' | ')}`);
	for (const l of body) out.push('  out: ' + l);
}
fs.writeFileSync(__dirname + '/flat_review_summary.txt', out.join('\n'), 'utf8');
console.log(`${blocks.length} blocks -> flat_review_summary.txt`);
