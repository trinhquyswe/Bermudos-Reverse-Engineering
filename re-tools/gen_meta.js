'use strict';
// Give every reconstructed / authored script a Unity .meta file, unless it already has one (the
// existing files kept the .meta AssetRipper emitted, which preserves the asset GUIDs the scenes and
// prefabs reference).
//
// GUIDs are deterministic: md5 of the asset path relative to `Assets/` - stable across machines and
// runs, and checked for collisions. The file format copies what AssetRipper writes for the scripts it
// exports from this project.
//
// Usage: node gen_meta.js [--apply] <dir> [<dir> ...]

const fs = require('fs');
const path = require('path');
const crypto = require('crypto');

const args = process.argv.slice(2);
const APPLY = args.includes('--apply');
const DIRS = args.filter((a) => !a.startsWith('--'));

const ASSETS_ROOT = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl\\RippedProject\\ExportedProject\\Assets';

if (!DIRS.length) {
	console.error('usage: node gen_meta.js [--apply] <dir> [<dir> ...]');
	process.exit(1);
}

const TPL = (guid, timeCreated) => `fileFormatVersion: 2
guid: ${guid}
timeCreated: ${timeCreated}
licenseType: Free
MonoImporter:
  serializedVersion: 2
  externalObjects: {}
  defaultReferences: []
  executionOrder: 0
  icon: {fileID: 0}
  userData:
  assetBundleName:
  assetBundleVariant:
`;

const guids = new Set();

// collect existing guids first so a new one can never collide
const all = [];
for (const d of DIRS) {
	(function walk(dir) {
		for (const e of fs.readdirSync(dir, { withFileTypes: true })) {
			const p = path.join(dir, e.name);
			if (e.isDirectory()) walk(p);
			else if (p.endsWith('.cs')) all.push(p);
		}
	})(d);
}
for (const p of all) {
	const meta = p + '.meta';
	if (fs.existsSync(meta)) {
		const m = /^guid:\s*([0-9a-f]+)/m.exec(fs.readFileSync(meta, 'utf8'));
		if (m) guids.add(m[1]);
	}
}

const timeCreated = Math.floor(Date.now() / 1000);
let created = 0;
for (const p of all) {
	const meta = p + '.meta';
	if (fs.existsSync(meta)) continue;
	const rel = path.relative(ASSETS_ROOT, p).replace(/\\/g, '/');
	let guid = crypto.createHash('md5').update(rel).digest('hex');
	let salt = 0;
	while (guids.has(guid)) guid = crypto.createHash('md5').update(`${rel}#${++salt}`).digest('hex');
	guids.add(guid);
	created++;
	console.log(`  ${rel}  ->  ${guid}`);
	if (APPLY) fs.writeFileSync(meta, TPL(guid, timeCreated), 'utf8');
}

console.log(`${APPLY ? 'APPLIED' : 'REPORT'}: ${created} .meta file(s) ${APPLY ? 'written' : 'to write'} for ${all.length} script(s)`);
