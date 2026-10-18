'use strict';
// How often does each "hard" construct actually occur, and which bodies are purely straight-line?
const fs = require('fs');
const path = require('path');
const data = JSON.parse(fs.readFileSync(path.join(__dirname, 'dcmp_bodies.json'), 'utf8'));

const c = {
	bodies: 0, structLocal: 0, structFieldUse: 0, structPtrArith: 0, bareStructArg: 0,
	ifExpr: 0, ifExprMulti: 0, callIndirect: 0, label: 0, loop: 0, brTable: 0, selectIf: 0,
	tryCatch: 0, unreachable: 0, commaAssign: 0, nestedAssign: 0, cast: 0, globals: 0,
	straightLine: 0, noCalls: 0,
};
const structShapes = new Map();
const hard = [];
for (const m of data.methods) {
	const b = m.body;
	if (!b) continue;
	c.bodies++;
	const isHard = [];
	// struct locals:  var x:{ a:..., b:... }
	const structVars = new Map();
	for (const mm of b.matchAll(/var\s+(\w+):\s*\{([^}]*)\}/g)) {
		structVars.set(mm[1], mm[2]);
		const shape = mm[2].replace(/\s+/g, ' ').trim();
		structShapes.set(shape, (structShapes.get(shape) || 0) + 1);
	}
	if (structVars.size) { c.structLocal++; isHard.push('structLocal'); }
	for (const [v] of structVars) {
		const fieldRe = new RegExp(`\\b${v}\\.[a-z]+\\b`, 'g');
		const plusRe = new RegExp(`\\b${v}\\s*[+-]\\s*\\d`, 'g');
		const bareRe = new RegExp(`[(,]\\s*${v}\\s*[,)]`, 'g');
		const fields = (b.match(fieldRe) || []).length;
		const plus = (b.match(plusRe) || []).length;
		const bare = (b.match(bareRe) || []).length;
		if (fields) c.structFieldUse++;
		if (plus) { c.structPtrArith++; isHard.push('structPtrArith'); }
		if (bare > plus) { c.bareStructArg++; isHard.push('bareStructArg'); }
	}
	if (/\(if\s*\(/.test(b)) { c.ifExpr++; isHard.push('ifExpr'); }
	// multi-statement if-expression: branch containing ';' before closing
	for (const mm of b.matchAll(/\(if\s*\([^)]*\)\s*\{([^{}]*)\}\s*else\s*\{([^{}]*)\}/g)) {
		if (mm[1].includes(';') || mm[2].includes(';')) { c.ifExprMulti++; break; }
	}
	if (/call_indirect\s*\(/.test(b)) { c.callIndirect++; isHard.push('callIndirect'); }
	if (/^\s*label\s/m.test(b)) { c.label++; isHard.push('label'); }
	if (/\bloop\s+\w+\s*\{/.test(b)) { c.loop++; isHard.push('loop'); }
	if (/br_table\[/.test(b)) { c.brTable++; isHard.push('brTable'); }
	if (/select_if\s*\(/.test(b)) { c.selectIf++; isHard.push('selectIf'); }
	if (/\btry\s*\{|\bcatch\b/.test(b)) { c.tryCatch++; isHard.push('tryCatch'); }
	if (/unreachable/.test(b)) c.unreachable++;
	if (/\((\s*\w+\s*=[^=)]*)\)/.test(b)) c.nestedAssign++;
	if (/:(\w+)/.test(b)) c.cast++;
	if (/d_p\w+\[/.test(b)) c.globals++;
	if (!/[(,)]\s*\w+\s*\(/.test(b)) c.noCalls++;
	if (!isHard.length) { c.straightLine++; }
	else hard.push(`${m.type}::${m.name} [${isHard.join(',')}]`);
}
console.log(JSON.stringify(c, null, 2));
console.log('\nstruct shapes:');
for (const [s, n] of structShapes) console.log(`  ${n}x  {${s}}`);
console.log(`\nnon-straight-line bodies: ${hard.length}`);
console.log(hard.slice(0, 40).join('\n'));
