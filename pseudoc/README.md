# Assembly-CSharp pseudo-C (~/pseudoc)

Reconstructed code for the Unity WebGL/IL2CPP build in this folder.

## What this is

Each `.c` file combines:

1. the **C# skeleton** of a type from `webgl1/il2cppdumper/dump.cs`
   (declaration, attributes, fields with IL2CPP offsets, method list), and
2. **pseudo-C** recovered by the Ghidra 12.1.4 Wasm decompiler for every
   method that has a body in `build.wasm`, decompiled against **real IL2CPP
   struct types** built from the dump.cs field offsets.

Coverage: 149 types (one file each) / 937 methods from `Assembly-CSharp.dll`, 0 decompile
failures. 2,123 distinct native functions (generic code is shared). The Ghidra
project now holds 1,233 enums and 951 `/il2cpp` structures.

## Address mapping (important)

`ScriptMethod.Address` in `script.json` is **not** a wasm function index.
It is an index into the wasm function table:

```
table[Address] -> ram:<function address>   // getFunctionAddress() disagrees
```

Validated against `dump.cs` field offsets, e.g.:

| method | expected field | pseudo-C |
|---|---|---|
| `Ammo$$GetAmmoMoveDirection` | `Vector2 ammoMoveDirection; // 0x4C` | `*__ret = __this->ammoMoveDirection;` |
| `Ammo$$SetTargetPosition` | `Vector2 target; // 0x3C` | `(__this->target).x = target->x;` |
| `Health$$TakeDamage` | `int currentHealth; // 0x10` | `__this->currentHealth = __this->currentHealth - damageAmount;` |
| `Ammo$$Awake` | `enemyEffect 0x14, playerEffect 0x18, destroyedEvent 0x1C, ammoVisual 0x20, ammoAnimation 0x24` | `GetComponent` results stored in exactly those fields |

## Type reconstruction

`tools/il2cpp_ghidra.py types` reads `dump.cs` and rebuilds the `/il2cpp` data
types on every run:

- one structure per managed class: `klass` (`void*`), `monitor` (`void*`),
  `pad_8` (8 bytes, the `MonoBehaviour`/`Object` base region), then one member
  per dump.cs field at its exact offset
- **value types** are built from their own dump.cs field offsets, recursively:
  `Vector2/3/4`, `Quaternion`, `Color`, `Color32`, `Rect`, `Bounds`,
  `Matrix4x4`, `LayerMask`, `ContactFilter2D`, and every game struct. Members
  are visible, e.g. `(__this->enemyLayerMask).m_Mask`. Fields marked
  `[Ignore(DoesNotContributeToSize = True)]` are skipped so the real overset
  fields win (`Color32` = `r,g,b,a` bytes, not the `rgba` int).
- **enums** become real Ghidra enums with every `public const` member and the
  `value__` storage size (1/2/4/8 bytes). Field access and comparisons then
  decompile symbolically: `if (__this->ammoState == Linear)`,
  `CallEnemyStateEvent(..., Chasing, ...)`.
- primitives stay scalar; every other class/interface/array/string field
  becomes a pointer to `Type_o`, so chains such as
  `__this->ammoDetailsSO->ammoSpeedAnimationCurve` decompile cleanly.

Member data comes from `dump.cs`, not `il2cpp.h`: the dump gives exact field
offsets for value types too, which is more reliable than replaying C layout.

Signatures from `script.json` are then rewritten onto the native functions
using the wasm ABI:

- struct returned by value -> `void f(Ret_o *__ret, ...)` (wasm sret)
- struct passed by value -> pointer (`Vector3_o *target`)
- instance method -> `__this` first; static -> no `__this`
- last argument is always `MethodInfo *method`

## Reading the output

- The pseudo-C prototype is the real native signature; the `// C#:` line above
  it is the original managed declaration for comparison.
- `__this->field` names come from the reconstructed struct, so most offset
  arithmetic is gone. Where a raw offset remains, it is annotated:
  `param2 + 0x1c /* healthEvent */`.
- `StringLiteral_N /* "text" */` shows the actual string constant.
- `unnamed_function_<n>` are functions without C# names (engine/runtime helpers
  and methods of other assemblies). `unnamed_function_1099` is IL2CPP metadata
  class initialization, seen at the start of most methods.
- `DG_Tweening_*_TypeInfo`, `Player___c_TypeInfo`, `..._TypeInfo` are runtime
  `Il2CppClass*` objects; they are used by IL2CPP for type checks and
  `GetComponent<T>` style calls.

## Limitations

- Ghidra decompiles wasm's operand stack into stack slots; expect `local_XX`
  temporaries and occasional `CONCAT44` instead of clean struct values.
- Only types reachable from `Assembly-CSharp` were reconstructed. Helpers that
  belong to other assemblies stay `unnamed_function_N` with untyped params.
- Enum names are printable only where the datatype survives to the comparison:
  direct field reads and typed parameters. Values routed through untyped
  helpers (most `unnamed_function_N`) or rebuilt into `int` switch slots still
  show numbers.
- Enums with a signed underlying type and negative members are left as plain
  integers: Ghidra enums created from PyGhidra are unsigned, so `-1` would
  display as `4294967295`. `[Flags]` combinations only print a name when a
  member has exactly that value.
- Generic/shared implementations are decompiled once; methods that share code
  point at the same function.
- `pad_8` is opaque base-class state; it is not a real field.

## Tool

`tools/il2cpp_ghidra.py` (needs the Ghidra project in the parent folder and the
PyGhidra Python environment):

```
python tools/il2cpp_ghidra.py info
python tools/il2cpp_ghidra.py find "Player$$" 40
python tools/il2cpp_ghidra.py decomp "Player$$DieEvent_OnDie"
python tools/il2cpp_ghidra.py decomp "table#14745"
python tools/il2cpp_ghidra.py apply  --assembly Assembly-CSharp   # names
python tools/il2cpp_ghidra.py types  --assembly Assembly-CSharp   # structs + signatures
python tools/il2cpp_ghidra.py export --assembly Assembly-CSharp   # this folder
```

`apply`/`types` write into the Ghidra project (and save it); `export`
regenerates this folder from the current project state.

## pseudo-C# view (`~/pseudoc-cs`)

`tools/c2cs.py --assembly Assembly-CSharp` rewrites this folder into
`pseudoc-cs/Assembly-CSharp/*.cs` — the same methods as readable pseudo-C#.
It runs the P0 pass in `tools/infer_cs.py` first, then the P1 pass.

This is a **reading aid, not compilable C#**: lambdas, `foreach`, `async`,
LINQ and generic sharing were already lowered by the AOT compiler, so they
appear here as loops / state machines / `unnamed_function_N` calls.

P0 transformations applied (text-level, no decompilation):

- C function frame (signature line, outer braces, C local temp block,
  trailing `return;`) replaced by the C# declaration from dump.cs
  (`void .ctor` → `TypeName()`, exact header when found in skeleton)
- `Recv__Method(recv, ...)` → `recv.Method(...)`; static → `Type.Method(...)`;
  `get_X` → property read; `set_X` → `recv.X = v`; `$$.ctor` → `new T(...)`
- `MethodInfo *method` args dropped; `->` → `.`; `__this` → `this`
- IL2CPP class-init prologues removed (`if (DAT_... == '\0') {
  unnamed_function_1099... }` blocks; also nested ones)
- `StringLiteral_N` → real literal; `halt_trap()` → `throw null;`
- sret pattern `*__ret = e; return;` → `return e;`
- cosmetic: `Ammo_o*` → `Ammo`, continuation lines re-joined
- standalone class-init statements `X = unnamed_function_95087(X);` removed
- `unnamed_function_1144(&f, v, c)` → `Interlocked.CompareExchange(ref f, v, c)`
- `unnamed_function_1112(obj, T_TypeInfo)` → `(obj as T)`

Still visible on purpose (P1/P2 scope): `unnamed_function_N` runtime helpers
(GetComponent, boxing, delegates...), `DAT_ram_*` TypeInfo globals, raw
offset derefs `*(int *)(x + 0x14)`, virtual calls `(**(code **)...`, compiler
temps (`iVar1`, `local_10`).

Native calls with exactly one managed name are renamed to `Type.Method(`.
Ambiguous ones keep the `unnamed_function_N` name and get a
`/* candidates: ... */` comment before the call.

```
python tools/c2cs.py --assembly Assembly-CSharp
```

regenerates `pseudoc-cs/` without touching Ghidra or this folder.
