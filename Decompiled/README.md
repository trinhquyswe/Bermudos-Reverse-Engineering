# Bermudos — Reversed Code (from the WebAssembly binary)

This folder contains the **actual reversed game code**, recovered from the shipped
IL2CPP WebAssembly binary (`Build/webgl.wasm/build.wasm`) — not the empty
placeholder scripts that AssetRipper emits when it cannot detect the IL2CPP backend.

## Why the AssetRipper `.cs` files were empty

Unity's IL2CPP pipeline compiles all C# into C++ and then into native code. In a
**WebGL** build the "native code" is a `.wasm` module and the metadata lives in
`Il2CppData/Metadata/global-metadata.dat`. AssetRipper's WebGL handler does not
populate the IL2CPP binary/metadata paths, so it reports
`Files use the 'Unknown' scripting backend.` and writes dummy `MonoBehaviour`
stubs. The real method bodies only exist as WebAssembly.

## Pipeline used

1. **Il2CppDumper 6.7.46** — `Dump/dump.cs`, `il2cpp.h`, `script.json`,
   `stringliteral.json`: full type/field/method structure + wasm method pointers.
2. **Cpp2IL 2022.1.0-pre-release.21** (supports metadata v31 + WASM) — reads the
   wasm + `global-metadata.dat` and recovers the IL2CPP→wasm function names.
   * `namesec/namesection.dat` — a wasm `name` custom section mapping every wasm
     function to its IL2CPP type/method.
   * `isil/` — per-method raw wasm bytecode listings (named).
3. **`build.named.wasm`** — original wasm with that name section appended
   (valid, verified with `wasm-validate`). Open it in browser devtools / any wasm
   tool to see real method names.
4. **wabt 1.0.37 `wasm-decompile`** — decompiles `build.named.wasm` into readable
   pseudo-C (`build.dcmp`, ~175 MB), with all cross-calls resolved to real names
   (e.g. `DG_Tweening_ShortcutExtensions_DOMoveZ`, `UnityEngine_GameObject_AddComponent`).
5. **extract.js / merge.js** — regroup the decompiled functions back into their
   C# classes and merge with the metadata structure.

## Contents

| Path | What it is |
|------|------------|
| `Wasm/Assembly-CSharp/<Type>.c` | **Real decompiled code** per game class (141 classes, uncommented pseudo-C, call names resolved) |
| `C/Assembly-CSharp/<Type>.c` | **Ghidra structured-C** decompilation of the same 734 game methods (see below) |
| `CSharp/Assembly-CSharp/<Type>.cs` | Recovered C# classes (accurate types/fields/signatures) with the decompiled wasm body attached to each method |
| `Wasm/_AssemblyCSharp_index.tsv` | func index → class → method map (734 game functions) |
| `C/Assembly-CSharp/_index.tsv` | same map for the Ghidra pass, plus the Ghidra function name and address |
| `build.named.wasm` | wasm + recovered symbol names |
| `namesec/namesection.dat` | the recovered wasm name section |
| `isil/IsilDump/<Assembly>/<Type>.txt` | per-method raw wasm bytecode (named) |
| `build.dcmp` | full pseudo-C decompilation of the whole module (~117k functions) |

## `C/` — the Ghidra structured-C pass

A second, independent decompilation of the 734 `Assembly-CSharp` game methods,
produced with Ghidra 12.1.4 + the ghidra-wasm-plugin (see
`../re-tools/ghidra/README.md`). Where the wabt pass emits stack-machine style
pseudo-C (`l0`, `l1`, `a[15] = b[0]`), Ghidra emits **structured C**: recovered
`if`/`while`/`do` control flow, `switch` tables, named locals, function
signatures and the Emscripten C stack reconstructed from the wasm globals.

Example (`Ammo::SetAmmoPlayer`, wasm func21524):

```c
// wabt (Wasm/Assembly-CSharp/Ammo.c)      // Ghidra (C/Assembly-CSharp/Ammo.c)
function Ammo_SetAmmoPlayer(a, b, c) {      void Ammo__SetAmmoPlayer(int param_1, undefined8 *param_2)
  a[15] = b[0]                              {
}                                             *(undefined8 *)(param_1 + 0x3c) = *param_2;
                                              return;
                                            }
```

Both agree with the metadata: `a[15]` / `param_1 + 0x3c` is `Ammo.target`
(`dump.cs`: `private Vector2 target; // 0x3C`), stored as one 8-byte Vector2.

Properties of this tree:

* **Coverage is complete**: all 734 game functions decompile to real bodies — no
  unresolved stubs (`node ../re-tools/ghidra/verify_export.js` → `VERIFY_OK`).
* Call names, field offsets (`param_1 + 0x34`) and constants are real. As with
  the wabt pass, Cpp2IL's IL2CPP↔wasm function-name matching is a heuristic, so
  an occasional callee name may be wrong; the two passes name the *same* call
  sites identically, so they corroborate rather than correct each other.
* `halt_trap()` marks wasm `unreachable` (typically dead branches after a
  `return`/`br`); it is normal inside fully decompiled functions.
* Callees whose names were not recovered appear as `unnamed_function_<addr>`;
  Cpp2IL recovered names for roughly half of the module's ~118k functions.
* Types/locals are decompiler-inferred (`int param_1`, `undefined8`), because
  wasm has no static types at the instruction level.

## Reading the decompiled `.c` / `.cs` output

* Pseudo-C is **structurally faithful**: control flow, calls, constants and field
  offsets are real. It is decompiler output, not original C# — naming/typing is
  approximated by the decompiler.
* Call-name attribution is *mostly* correct but can occasionally be wrong: Cpp2IL
  matched IL2CPP metadata to wasm functions with an imperfect signature heuristic
  (it warned on some methods), so a resolved callee name here and there may be
  mismatched. The call target index (e.g. `func86845`) is authoritative.
* `int_ptr`, `ubyte_ptr`, `long_ptr@4` etc. are decompiler-inferred pointers.
* `d_p<hex>[N]:int` are the runtime metadata-string tables (the literal content
  is in `Dump/stringliteral.json` and the `data` segments of `build.dcmp`).
* `f_xxxx(...)` are internal IL2CPP runtime helpers; `multiple_<Type>_<method>`
  denotes a generic method instantiation.
* Field access `this[4]`, `this[12]` are raw object offsets —
  `Dump/dump.cs` lists each field with its `// 0xNN` offset so they can be mapped
  back to `Player.playerEffect`, etc.
* A few metadata methods have no wasm body (fully inlined by IL2CPP); they are
  shown as `// <no wasm mapping>`.

## Scope / coverage

* `Assembly-CSharp` = the game's own code (252 scripts): 141 classes yield 734
  decompiled functions. The remaining types are enums/interfaces/data holders or
  were fully inlined.
* Third-party assemblies (DOTween, Cinemachine, BehaviorDesigner, ESave,
  NavMeshPlus, TMP/TMPEffects, Unity packages) are unmodified public libraries and
  are fully named inside `build.dcmp` if needed.
