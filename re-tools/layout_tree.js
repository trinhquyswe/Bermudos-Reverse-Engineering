'use strict';
// Reorganise the reconstructed game assembly into the subsystem layout described by layout.json.
//
//   node layout_tree.js [--dry] [--base <ref>]
//
// The game's 160 root-level Assembly-CSharp scripts (see layout.json) are moved - with their .meta
// files, so the GUIDs the scenes/prefabs reference stay attached - into subsystem folders:
//
//   Assembly-CSharp/Core/  Player/  Combat/  Enemies/  Items/  Audio/  UI/  Effects/  AI/
//                    Systems/  Events/                     + TMPro/Examples/ for TMP samples
//
// Idempotent: a file already in its target folder is left alone. Run it after apply_cs.js. Folder
// .meta files are deliberately not written: this project carries none anywhere (AssetRipper omitted
// them), and Unity recreates them on import - folder GUIDs are not referenced by any asset.
//
// With --base <ref> the raw-listing tree is restored first (git restore), so the whole pipeline
// [restore -> asm2cs_dcmp.js --all -> apply_cs.js -> layout_tree.js] can be re-run from scratch.

const fs = require('fs');
const path = require('path');
const { execFileSync } = require('child_process');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const DIR = path.join(REPO, 'RippedProject/ExportedProject/Assets/Scripts/Assembly-CSharp');
const args = process.argv.slice(2);
const DRY = args.includes('--dry');
const baseIdx = args.indexOf('--base');
const BASE = baseIdx >= 0 ? args[baseIdx + 1] : null;

if (BASE) {
	execFileSync('git', ['-C', REPO, 'restore', '--source=' + BASE, '--worktree', '--',
		'RippedProject/ExportedProject/Assets/Scripts/Assembly-CSharp'], { stdio: 'inherit' });
}

const layout = JSON.parse(fs.readFileSync(path.join(__dirname, 'layout.json'), 'utf8'));
const moves = [];
for (const [folder, files] of Object.entries(layout)) {
	if (folder.startsWith('_')) continue;
	for (const f of files) moves.push([f, folder]);
}
for (const [folder, files] of Object.entries(layout._examples || {})) {
	for (const f of files) moves.push([f, folder]);
}

const report = { moved: 0, already: 0, missing: [], stray: [] };
for (const [file, folder] of moves) {
	const src = path.join(DIR, `${file}.cs`);
	const dstDir = path.join(DIR, folder);
	const dst = path.join(dstDir, `${file}.cs`);
	if (fs.existsSync(dst) && !fs.existsSync(src)) { report.already++; continue; }
	if (!fs.existsSync(src)) { report.missing.push(file); continue; }
	if (!DRY) {
		fs.mkdirSync(dstDir, { recursive: true });
		fs.renameSync(src, dst);
		if (fs.existsSync(`${src}.meta`)) fs.renameSync(`${src}.meta`, `${dst}.meta`);
	}
	report.moved++;
}

// anything still loose at the root that no rule claimed
const planned = new Set(moves.map(([f]) => `${f}.cs`));
for (const e of fs.readdirSync(DIR, { withFileTypes: true })) {
	if (e.isFile() && e.name.endsWith('.cs') && !planned.has(e.name)) report.stray.push(e.name);
}

const counts = {};
for (const [file, folder] of moves) counts[folder] = (counts[folder] || 0) + 1;
console.log('layout: ' + Object.entries(counts).map(([k, v]) => `${k} ${v}`).join(', '));
console.log(JSON.stringify({ ...report, stray: report.stray.length, files: moves.length, dryRun: DRY }, null, 1));
if (report.missing.length) console.log('not found (neither source nor target): ' + report.missing.join(', '));
if (report.stray.length) console.log('left at root: ' + report.stray.join(', '));
