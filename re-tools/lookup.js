'use strict';
// Look up dcmp printed names in dcmp_names.json.
// Usage: node lookup.js System_Net_WebOperation_ctor Idle_ctor multiple_UnityEngine_Animator_SetTrigger f_hpa
const fs = require('fs');
const path = require('path');
const d = JSON.parse(fs.readFileSync(path.join(__dirname, 'dcmp_names.json'), 'utf8'));
for (const k of process.argv.slice(2)) {
	const v = d.byPrinted[k];
	if (!v) { console.log(`${k}: (not defined in dcmp)`); continue; }
	console.log(`${k}:  func${v[0]}  orig=${v[1] || '(unnamed)'}  params=[${v[2].join(', ')}]  ret=${v[3]}`);
}
