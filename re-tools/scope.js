'use strict';
// scope.js - which tree files this phase translates.
//
// A file counts as in scope when the project layout (layout.json) lists it: either at the root of
// Assembly-CSharp/ (the raw-listing state the pipeline runs on, restored from the base commit) or
// inside its subsystem folder.  Matching basenames alone would be wrong, because the assembly also
// contains BehaviorDesigner / TMPro code with colliding names - e.g. the game's root-level Idle.cs
// versus .../BehaviorDesigner/Runtime/Tasks/Idle.cs.
const fs = require('fs');
const path = require('path');

const LAYOUT = JSON.parse(fs.readFileSync(path.join(__dirname, 'layout.json'), 'utf8'));

// folder -> Set(basename without .cs)
const dirs = new Map();
for (const [folder, files] of Object.entries(LAYOUT)) {
	if (folder.startsWith('_')) continue;
	dirs.set(folder, new Set(files));
}
for (const [folder, files] of Object.entries(LAYOUT._examples || {})) dirs.set(folder, new Set(files));

// every game script, wherever it sits
const all = new Set();
for (const files of dirs.values()) for (const f of files) all.add(f);

/** `rel` is a .cs path relative to Assembly-CSharp (either separator). */
function inScope(rel) {
	const norm = rel.split('\\').join('/');
	const i = norm.lastIndexOf('/');
	const name = (i < 0 ? norm : norm.slice(i + 1)).replace(/\.cs$/, '');
	if (i < 0) return all.has(name); // flat (raw-listing) state: game scripts sit at the root
	const s = dirs.get(norm.slice(0, i));
	return !!s && s.has(name);
}

module.exports = { inScope, dirs, LAYOUT };
