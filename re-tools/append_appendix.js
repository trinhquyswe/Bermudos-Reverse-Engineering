'use strict';
// Append (or replace, so it is re-runnable) the "hot unnamed call targets" appendix in RE_REPORT.md,
// using the table produced by helper_table.js.

const fs = require('fs');
const path = require('path');

const REPO = 'C:\\Users\\usopp\\Downloads\\webgl1\\webgl';
const REPORT = path.join(REPO, 'RE_REPORT.md');
const TABLE = path.join(__dirname, 'helper_table.md');

const MARKER = '## Appendix: identity of the hot unnamed call targets';

const table = fs.readFileSync(TABLE, 'utf8').trimEnd();
let src = fs.readFileSync(REPORT, 'utf8');
const eol = (src.match(/\r\n/g) || []).length > (src.match(/(?<!\r)\n/g) || []).length ? '\r\n' : '\n';
src = src.split(/\r?\n/).join('\n');

const appendix = [
	MARKER,
	'',
	'11,669 of the `Call N` sites in the tree address a function that the wasm `name` section does',
	'not name (136 distinct targets). They are not game methods: the call sites are spread over',
	'unrelated classes, which is the signature of toolchain/runtime glue. The 20 hottest are',
	'identified here from two evidence sources only - the call sites in the recovered tree, and the',
	'body of `funcN` in `Decompiled/build.dcmp` (regenerate with `re-tools/helper_table.js`).',
	'',
	table,
	'',
	'What the bodies show:',
	'',
	'| group | hot members | evidence in the body |',
	'|---|---|---|',
	'| managed invocation + C++ exception unwinding | `94848`, `1116`, the import `10` (`env_cxa_find_matching_catch_3`) | calls `env_invoke_*`, then `env_cxa_find_matching_catch` / `env_resumeException` |',
	'| dynamic dispatch | `61203`, `44644`, `61226`, `61227`, `44686`, `61245`, `61204`, `85158` | the callee slot is read out of the object (`a[2]`, `(d[0])[n]`) and invoked with `call_indirect` |',
	'| thin wrappers over another unnamed helper | `1099` -> `f_jlje`, `1112` -> `f_lcke`, `516` -> `f_ss` | a single call in the body; `f_jlje` resolves a *tagged* pointer (`a[0] & 1`, tag `>> 29`, `br_table` over the IL2CPP metadata tables, result written back to `a[0]`), `516` guards on a stdio-style flag byte |',
	'| glue in front of managed code | `44710` -> `UnityEngine.Object::Equals`, `60160` -> `System.Text.Encoding::get_UTF8`, `85158` -> `System.RuntimeType::op_Equality` / `System.String::Format` | the named callee is a managed method |',
	'| toolchain helpers (libc / libc++) | `519` (integer -> decimal: `a / 10`, `\\| 48`), `520`, `95402` | no managed callee, numeric/pointer loops |',
	'',
	'Caveats: the caller lists come from the recovered bodies, whose method attribution is only',
	'partly reliable (see the caveat in step 6), so they read as "this call appears in these files"',
	'rather than "this class calls it"; and the role of each helper is read off the decompiled body -',
	'no name can be recovered for a function the name section leaves unnamed.',
].join('\n');

const at = src.indexOf(MARKER);
src = at >= 0 ? src.slice(0, at).trimEnd() + '\n\n' + appendix + '\n' : src.trimEnd() + '\n\n' + appendix + '\n';

fs.writeFileSync(REPORT, eol === '\r\n' ? src.split('\n').join('\r\n') : src, 'utf8');
console.log(`RE_REPORT.md: appendix ${at >= 0 ? 'replaced' : 'appended'} (${appendix.split('\n').length} lines), eol=${JSON.stringify(eol)}`);
