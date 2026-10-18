# Reconstruction tooling

The scripts that produced the reconstructed code under
`RippedProject/ExportedProject/Assets/Scripts` and the findings in `RE_REPORT.md`. They are plain
Node scripts (written and run on Node 24) that drive the third-party tools listed below; none of
those tools or their archives are tracked here.

## Inputs the scripts expect

Each script has a `REPO` constant at the top with the absolute repository path it was run from, and
reads its inputs from there (`Dump/dump.cs`, `Decompiled/…`, `Extracted/…`, `Build/…`). See
`RE_REPORT.md` for how those are produced; `Build/` is the game's own WebGL build and is not tracked
(86 MB), so a fresh clone needs it restored before re-running the pipeline from the start.

Third-party tools used, in order: **Il2CppDumper 6.7.46**, **Cpp2IL 2022.1.0-pre-release.21**
(WebGL + metadata v31), **wabt 1.0.37** (`wasm-decompile`, `wasm-validate`), **binaryen 116/123**,
**AssetRipper** (the version is recorded in `RippedProject/`). `syncheck/` is a small Roslyn
program: `dotnet run -- <dir>` parses every `.cs` under `<dir>` and reports the ones with syntax
errors — the project's last syntax gate.

## Pipeline order

| # | script | what it does |
|---|---|---|
| 1 | `build_types.js` | one `.cs` file per Assembly-CSharp type from `Dump/dump.cs`, at its canonical namespace path, with fields/properties/method signatures |
| 1b | `add_nested.js` | appends the disassembly of nested/compiler-generated types (names that are not legal C# identifiers) to their owner's file |
| 2 | `add_usings.js`, `fix_decls.js`, `fix_members.js`, `fix_defaults.js` | namespaces + minimal `using` sets, valid declarations, real properties, parameter defaults |
| 3 | `fix_event_bodies.js` | real bodies for the event system (the `Call*Event` forwarding methods) |
| 4 | `embed_isil.js` | embeds the per-method WebAssembly disassembly recovered by Cpp2IL ISIL into the corresponding method body |
| 5 | `annotate_calls.js` | resolves every `Call N` operand through the wasm `name` custom section |
| 6 | `gap_recon.js`, `gap_recon2.js`, `gap_recon3.js`, `find_missing_types.js` | finds and recovers the types the first pass missed / collided on |

## Validation

| script | what it checks |
|---|---|
| `check_canonical.js` | the set of canonical metadata paths equals the set of file paths in the tree |
| `check_coverage.js` | every metadata type has a file, no `Dummy class` placeholders, no un-annotated bodies |
| `count_bodiless.js` | members with no body in the metadata (abstract/interface) are emitted as plain signatures |
| `count_calls.js` | call-site / annotated / raw-index counts quoted in the report |
| `diff_stage.js`, `classify_diff.js`, `explain_changes.js` | diff a staging tree against the live tree and explain each change |
| `verify_ctors.js` | constructor / static-constructor bodies are attributed correctly |
| `verify_overrides.js` | every `override` resolves to a member declared by its base chain (base types resolved against `dump.cs`, `using`/alias aware); prints JSON stats |
| `syncheck/` | Roslyn syntax pass over a directory |

## Behavior Designer work

| script | what it does |
|---|---|
| `bd_meta.js`, `bd_meta_1.txt`, `bd_meta_2.txt` | dumps the Behavior Designer runtime members from `dump.cs` (the API surface the replacement had to match) |
| `bd_surface.js`, `bd_surface2.js`, `bd_surface2.json`, `bd_uses.js` | inventories what the recovered tree actually uses from that runtime (base types, attributes, enums, shared variables) |
| `bd_name_uses.js` | lists every non-comment use of the runtime type names that the tree binds through a `using`/alias |
| `fix_bd_bases.js` | binds Behavior Designer base types correctly (alias rewrites + missing `using`s) |
| `replacement_surface.js` | proves the authored replacement declares every member the tree overrides on Behavior Designer types |
| `gen_meta.js`, `fix_header_blank.js` | deterministic `.meta` files (md5 of the asset path) and header-format normalization |

## Wasm inspection and the report

| script | what it does |
|---|---|
| `peek_dcmp.js`, `scan_dcmp.js` | scan `Decompiled/build.dcmp` (166 MB) for a token / show the function-definition format |
| `dcmp_lines.js`, `dcmp_func.js` | print a line range of `build.dcmp`, or the body of `funcN` (defined function or import) |
| `helper_table.js`, `helper_table.json`, `helper_table.md` | identify the hot *unnamed* call targets from their callers + decompiled body (the appendix of `RE_REPORT.md`) |
| `append_appendix.js` | writes that appendix into `RE_REPORT.md` (re-runnable) |

## wasm → C# translation (`Decompiled/build.dcmp` → the tree)

| # | script | what it does |
|---|---|---|
| 1 | `dcmp_bodies.js` | parses `Decompiled/build.dcmp` and emits `dcmp_bodies.json` (743 in-scope method bodies: wabt structured body + signature + `funcN` + `how` + the `dump.cs` field tables incl. C# field types) and `dcmp_names.json` (printed name → `funcN`/original name/param types/result, both directions) |
| 2 | `asm2cs_dcmp.js` | **the translator**: tokenizer + recursive-descent parser + printer. Rebuilds structured control flow from the wasm block structure (`br`/`br_if` → `if`/`else`/`break`/`continue`, `loop` → `while (true)`, `br_table` → `switch`) and drops two pieces of IL2CPP scaffolding (class-initializer guards, the `Monitor.Enter` type check). `--check` translates all 743 matched bodies, `--file`/`--method`/`--ast`/`--expr` inspect one, `--flat` shows the listing-simulated fallback, `--all` writes `asm2cs_out.json` (743 matched + 44 listing-simulated + the 14 it declines) |
| 3 | `apply_cs.js` | rewrites the 149 touched tree files: replaces each `// ---- wasm disassembly` block with the translated body, inserts the `Rec_*` record declarations, the per-file idiom legend and the per-method `// wasm funcN …` header (`--dry` reports only) |
| 4 | `layout_tree.js` | moves the 160 game scripts (with their `.meta` files) into their subsystem folders per `layout.json`; `--base <ref>` restores the raw-listing tree first, so this script alone can re-run the whole loop (`--dry` reports only) |
| 5 | `regen.ps1` | the whole loop in order: `git clean` the moved files, `git restore` the tree from the base commit (that order — restored files are not in the index, so a later clean would delete them) → `--all` → `apply_cs.js` → `layout_tree.js`; every step's exit code is checked (native git failures do not throw in PowerShell) and the result is byte-identical on re-run |

## Ghidra C → C# (`Assembly-CSharp/*.c` → `Assembly-CSharp/*.cs`)

A second, independent path: `c2cs.js` renders one `.cs` per type directly from the Ghidra
decompiler C that sits in `RippedProject/bermudos/Assets/Scripts/Assembly-CSharp/*.c`. It does
**not** touch the `.c` evidence files — it writes the `.cs` alongside them.

    node c2cs.js [--dir <asm-c dir>] [--dump <dump.cs>] [--only A,B] [--dry]

| what | source |
|---|---|
| type kind, base list, attributes, field names/types + `0xNN` offsets, property and method signatures | `Dump/dump.cs` (Assembly-CSharp TypeDef range `5534..6341`) |
| method bodies | the matching `.c` function (by header `// ---- Type::Member`, falling back to the flattened name) |

Translation legend (also written into each file's header): `param_1` → `this`; `*(T *)(this + 0xNN)`
→ `this.<field>` when the offset matches a metadata field; `A__B(` → `A.B(` resolved through the
call map built from every `.c` symbol, with a heuristic for non-Assembly-CSharp callees;
`undefined1/2/4/8`, `ulonglong`, `char` → `byte/ushort/uint/ulong/byte`; `T x [N];` →
`T[] x = new T[N];`; `::` → `.`; compiler-generated names (`<X>d__10`, `<asset>k__BackingField`)
sanitized. `goto code_r0x…`, `halt_trap()`, `CONCAT44`, pointer arithmetic, `unnamed_function_N`
and `iRam…`/`uRam…`/`cRam…` are kept verbatim. An event's `[CompilerGenerated]` backing field plus
its `add_`/`remove_` accessors are folded back into a single `event` member. `.c` functions with no
metadata member (lambdas, nested state machines, closures) are appended under a
`// ---- members with no metadata member …` banner. Output is ASCII, UTF-8 without BOM, CRLF.

Last run: 141 type files, 0 without metadata; 734 `.c` functions, 618 bodies rendered, 179 members
without a recovered body, 116 `.c` functions with no metadata member. The gate is clean:

    dotnet run --project syncheck -- RippedProject/bermudos/Assets/Scripts/Assembly-CSharp
    # parsed 141 files; 0 with syntax errors; 0 errors total

`scope.js` is what keeps the loop honest: it answers "is this `.cs` one of the game scripts?"
from `layout.json`, accepting both the raw state (files at the assembly root) and the laid-out
state (files in their subsystem folder). Every step of the loop uses it, so the 559
BehaviorDesigner/TMPro files in the assembly's subfolders keep their listings, headers and line
endings — a basename match would have rewritten `BehaviorDesigner/Runtime/Tasks/Idle.cs`, which
shares its name with the game's `Idle.cs`.

The analysis tools below (`asm2cs_map.js`, `wasm_index.js`, the `check_*`/`list_*` helpers) still
expect the **raw state** of the tree (game scripts at the assembly root). Get it back with

    git clean -fdq -- RippedProject/ExportedProject/Assets/Scripts/Assembly-CSharp
    git restore --source=ae723914 --worktree -- RippedProject/ExportedProject/Assets/Scripts/Assembly-CSharp

(clean *before* restore: the restored files are not in the index, so cleaning afterwards deletes them)
and restore the committed layout afterwards with `node layout_tree.js`.

Supporting/diagnostic helpers: `asm2cs_map.js` (Tier A: name-section + call-order mapping),
`wasm_index.js` (Tier B: exact bytecode match of the tree listing), `combine_ids.js` (merge),
`check_confidence.js`, `dcmp_census.js`, `dcmp_hardcount.js`, `dcmp_lexical.js`, `pick_funcs.js`,
`find_fragment.js`, `lookup.js`, `show_body.js`, `list_kept.js`, `flat_review.js`.

`extract.js` and `merge.js` are the earliest stage: unpacking `Build/webgl.data` (Unity's compression
wrapper) and merging per-assembly decompiler output.
