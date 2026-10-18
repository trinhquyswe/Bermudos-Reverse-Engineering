'use strict';
// Print the metadata (namespace, header, fields, method signatures) of the BehaviorDesigner runtime
// types that the recovered tree binds to. This is API *shape* used to author a compatible
// replacement runtime - the implementation is written by hand, not recovered.
//
// Usage: node bd_meta.js [Name ...]

const fs = require('fs');
const path = require('path');

const DUMP = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\Dump\\dump.cs';
const names = process.argv.slice(2);
if (!names.length) names.push('TaskStatus', 'Task', 'Action', 'Conditional', 'ParentTask', 'Composite',
	'Decorator', 'BehaviorReference', 'ObjectDrawerAttribute', 'TaskCategoryAttribute', 'TaskDescriptionAttribute',
	'TaskIconAttribute', 'RequiredFieldAttribute', 'Behavior', 'ExternalBehavior', 'BehaviorSource',
	'BehaviorManager', 'IBehavior', 'IVariableSource', 'SharedVariable', 'SharedGenericVariable', 'GlobalVariables');

const lines = fs.readFileSync(DUMP, 'utf8').split(/\r?\n/);
const want = new Set(names);
const out = [];
let lastNs = '';
for (let i = 0; i < lines.length; i++) {
	const nsM = /^\/\/ Namespace:[ \t]*(.*)$/.exec(lines[i]);
	if (nsM) { lastNs = nsM[1].trim(); continue; }
	const m = /^\s*((?:public|internal|private|protected)[\w\s]*?\b(class|struct|interface|enum)\s+([A-Za-z0-9_`]+)(?:<[^>]*>)?(?=[\s:<])[^{]*?)\s*\/\/ TypeDefIndex:\s*(\d+)\s*$/.exec(lines[i]);
	if (!m) continue;
	const name = m[3].replace(/`.*/, '');
	if (!want.has(name) || !lastNs.startsWith('BehaviorDesigner')) continue;
	const t = { ns: lastNs, name, kind: m[2], header: m[1].trim(), idx: parseInt(m[4], 10), fields: [], methods: [] };
	i++;
	while (i < lines.length && lines[i].trim() !== '{') i++;
	i++;
	let section = null;
	for (; i < lines.length; i++) {
		const L = lines[i];
		if (L === '}') break;
		const T = L.trim();
		if (T === '// Fields') { section = 'f'; continue; }
		if (T === '// Methods') { section = 'm'; continue; }
		if (T.startsWith('//') || !T || T.startsWith('[')) continue;
		if (section === 'f') t.fields.push(T.replace(/\s*\/\/ 0x[0-9A-Fa-f]+$/, ''));
		else if (section === 'm' && (T.includes('{ }') || /^(?:public|private|protected|internal)\b[^;{]*\([^;{]*\)\s*;$/.test(T))) t.methods.push(T.replace(/\s*\{\s*\}\s*$/, ''));
	}
	out.push(t);
}

for (const t of out) {
	console.log(`\n// ===== ${t.ns}.${t.name}   (${t.kind}, TypeDefIndex ${t.idx}) =====`);
	console.log(`${t.header}   // ${t.ns}.${t.name}`);
	if (t.fields.length) { console.log('  // fields'); for (const f of t.fields) console.log('    ' + f); }
	if (t.methods.length) { console.log('  // methods'); for (const mm of t.methods) console.log('    ' + mm); }
}
