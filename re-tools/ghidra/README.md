# Ghidra / PyGhidra C-pseudocode pass

Second decompilation path for the game code, alongside the original wabt
`wasm-decompile` pass in `Decompiled/Wasm/`. Where wabt emits stack-style
pseudo-C (`l0`, `l1`, `a[15] = b[0]`), Ghidra emits **structured C** with named
locals, `if`/`while`/`switch` recovery, function signatures and the Emscripten
C-stack reconstructed by the WebAssembly plugin.

Output: `Decompiled/C/Assembly-CSharp/<Type>.c` — one file per Assembly-CSharp
type, one function per game method (`Decompiled/C/Assembly-CSharp/_index.tsv`
maps `funcIdx -> type -> method`).

## Toolchain

| Piece | Version | Role |
|---|---|---|
| Ghidra | 12.1.4 (`C:\Users\usopp\tools\ghidra_12.1.4`) | decompiler |
| ghidra-wasm-plugin | 2.4.0, built for 12.1.4 | WebAssembly loader + SLEIGH processor + dyncall analysis |
| PyGhidra | 3.1.0 (CPython 3.13) | runs the headless `.py` scripts (Ghidra 12 no longer ships Jython) |
| JDK | 21 (`JAVA_HOME`) | Ghidra runtime |

`GHIDRA_INSTALL_DIR` must point at the Ghidra install directory.

### pyghidra argument order (important)

pyghidra's parser declares `script_args` with `nargs=argparse.REMAINDER` and its
`script_path` action grabs everything after the script path, so **every pyghidra
option must be given before the two positionals** (`<binary> <script.py>`):

```powershell
# correct
pyghidra --project-path P --project-name N -X mx7g --skip-analysis B.wasm S.py a1 a2 a3 a4
# wrong: the options are silently appended to the script's own args
pyghidra B.wasm S.py --project-path P --project-name N --skip-analysis
```

Getting this wrong does not error: `--project-path`/`--project-name` fall back to
defaults (project created next to the binary, named `<binary>_ghidra`) and
`--skip-analysis` is dropped, so Ghidra runs a **full analysis** of the whole
module (hours). `run_export.ps1` now orders the arguments correctly and warns if
the summary JSON was not produced.

## Why not REA?

REA's `open_binary` rejects WebAssembly (`unsupported binary format`), so the REA
MCP server cannot bind `build.wasm`. Its Ghidra provider is used only for the
targets it accepts (native ELF/PE and managed assemblies, e.g. the Il2CppDumper
`DummyDll/`). The wasm decompilation runs through Ghidra headless (`pyghidra`)
directly.

## Naming

The program is imported from `Decompiled/build.named.wasm` (the original module
plus the `name` custom section that Cpp2IL recovered from
`global-metadata.dat`). The plugin names every function from that section, so
`func21524` becomes `Ammo::SetAmmoPlayer`. Function indices are resolved to
Ghidra addresses with the plugin API
`WasmLoader.getFunctionAddress(AddressFactory, WasmModule, funcIdx)`.

## Scripts

| Script | What it does |
|---|---|
| `build_index.js` | parses `Decompiled/Wasm/Assembly-CSharp/*.c` and emits `asmcs_index.json` (734 game functions: wasm index, type, method) |
| `export_asmcs.py` | Ghidra/PyGhidra script: for each index, resolves the function, decompiles it and writes the per-type `.c` tree + `_index.tsv` + a summary JSON. Resumable via a JSONL cache (4th arg); checkpoints every 50 functions |
| `run_export.ps1` | wrapper: `pyghidra <wasm> export_asmcs.py <index> <outdir> <summary> <cache> -X mx7g`. Defaults to `--skip-analysis`; `-FullAnalysis` adds auto-analysis. Reuses an existing project (same path+name+binary) instead of re-importing |
| `verify_export.js` | checks the exported tree against the index: function/type counts, missing or unexpected funcs, empty bodies, and true unresolved stubs |

## Run

```powershell
node build_index.js
.\run_export.ps1                 # import (creates ~117k named functions) + decompile the 734 game funcs
node verify_export.js            # validate the produced tree
```

The default mode runs in two stages:

1. **Import** with `--skip-analysis`. The loader's `WasmLoader.load()` already
   creates all ~118k wasm functions with their recovered IL2CPP names, so the
   import is fast (measured: ~40 s for the 48.6 MB module) and no full analysis
   is needed.
2. **Targeted pre-analysis**, inside `export_asmcs.py`: the plugin's
   `WasmPreAnalyzer` is run over *only* the 734 target functions.

Stage 2 is required, and is the part that is easy to get wrong. The WebAssembly
processor is stack-based and its instruction decoder depends on per-address
*context* (operand sizes, branch targets, stack effect, the Emscripten C stack
pointer). `WasmPreAnalyzer.added()` computes that context
(`WasmFunctionAnalysis.applyContext`) and disassembles each function.
**Without it the disassembler mis-decodes the LEB128 operands and the decompiler
emits `halt_baddata()`/`halt_trap()` stubs instead of code** — the first run of
this pipeline produced exactly that for all 734 functions.

Running the plugin's *full* auto-analysis instead does the same thing for all
~118k functions and takes hours; `WasmPreAnalyzer.added()` only touches the
addresses it is handed, so restricting it to the 734 targets is a few seconds.
`-FullAnalysis` exists only as a fallback.

Measured on this machine: import ~40 s (first run), pre-analysis ~1-5 s,
decompiling the 734 functions ~11 s, i.e. well under a minute end to end.
PyGhidra reopens an already-imported program when the project path+name and
binary match, so later runs skip the import entirely (~15 s).

Verified result: 734/734 functions decompiled, 141/141 type files, no
unresolved stubs (`node verify_export.js` → `VERIFY_OK`).

The input `Decompiled/build.named.wasm` and `Decompiled/build.dcmp` come from the
earlier pipeline stages; see `../../RE_REPORT.md` and `../../Decompiled/README.md`.
