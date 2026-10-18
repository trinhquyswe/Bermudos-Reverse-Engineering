# Bermudos — Full Reverse Engineering Report

Target: Unity WebGL game **"Bermudos"** (company *Mitsuha*, version 0.1)
Engine: Unity 2022.3.44f1, IL2CPP backend, WebGL/WASM, metadata version 31.

## Deliverables

| Folder | Contents |
|--------|----------|
| `Dump/` | Il2CppDumper output: `dump.cs` (structure), `il2cpp.h`, `script.json`, `stringliteral.json`, `DummyDll/` |
| `Decompiled/` | **Real reversed code from the wasm binary** (see `Decompiled/README.md`) — includes both the wabt pass (`Wasm/`) and the Ghidra structured-C pass (`C/`) |
| `RippedProject/ExportedProject/` | AssetRipper asset extraction as a Unity project (Assets, Scenes, Textures, Audio, Materials, Prefabs…) |
| `Extracted/` | Decompressed `webgl.data` (unpacked assets, `global-metadata.dat`, `data.unity3d`, etc.) |
| `Build/` | Original WebGL build (`webgl.wasm`, `webgl.data`, `webgl.framework.js`, `webgl.loader.js`) — 86 MB, **not tracked** (the pipeline's input; restore it before re-running the tools) |
| `re-tools/` | The Node scripts + Roslyn syntax gate that produced the reconstructed code and this report (see `re-tools/README.md`); `re-tools/ghidra/` holds the PyGhidra/Ghidra structured-C pass (see `re-tools/ghidra/README.md`) |
| `AssemblyCSharp_Classes.csv` | Index of all Assembly-CSharp types (741) from `dump.cs` |

## Recovering real code (not stubs)

AssetRipper writes dummy `MonoBehaviour` stubs for IL2CPP WebGL because its WebGL
handler never populates the IL2CPP binary/metadata paths
(`Files use the 'Unknown' scripting backend.`). The actual logic lives only in the
`.wasm` module. It was recovered with:

1. **Il2CppDumper 6.7.46** → metadata structure + wasm method pointers.
2. **Cpp2IL 2022.1.0-pre-release.21** (WASM + metadata v31) → recovered IL2CPP→wasm
   function names; emitted `namesection.dat` and per-method bytecode listings.
3. **`build.named.wasm`** = original wasm + recovered `name` section (validated).
4. **wabt 1.0.37 `wasm-decompile`** → readable pseudo-C of the whole module
   (`build.dcmp`, ~117k functions, cross-calls resolved to real names).
5. Regrouped functions back into C# classes:
   * `Decompiled/Wasm/Assembly-CSharp/<Type>.c` — decompiled code per game class.
   * `Decompiled/CSharp/Assembly-CSharp/<Type>.cs` — recovered class structure
     (types/fields/method signatures) with the decompiled body per method.

Coverage of the finished tree: **719 `.cs` files** (every Assembly-CSharp type, plus 65
nested/compiler-generated types kept in their owner's file), **708 carrying recovered
disassembly**, 0 placeholders — see the reconstruction section below.

### Second pass: Ghidra structured C (`Decompiled/C/`)

The 734 game methods were decompiled a second time, independently, with **Ghidra
12.1.4 + ghidra-wasm-plugin 2.4.0** running headless through **PyGhidra** (see
`re-tools/ghidra/README.md`). Output: `Decompiled/C/Assembly-CSharp/<Type>.c`,
one file per type, plus `_index.tsv`.

Why a second pass: wabt's `wasm-decompile` emits stack-machine pseudo-C, while
Ghidra emits **structured C** — recovered `if`/`while`/`switch`, named locals,
function signatures and the Emscripten C stack reconstructed from the wasm
globals. Cross-checking one against the other is a strong correctness signal,
since aliasing must agree for the same wasm function.

* Input: `Decompiled/build.named.wasm` (the module plus Cpp2IL's recovered `name`
  section), so every function arrives with its IL2CPP name.
* Function indices are resolved with the plugin's own API
  (`WasmLoader.getFunctionAddress`), so numbering matches `_index.tsv` exactly.
* The wasm processor's decoder needs per-address context (operand sizes, branch
  targets, C stack pointer), which the plugin computes in `WasmPreAnalyzer`.
  That analyzer is run over **only the 734 targets** (~1-5 s) rather than over the
  whole module (~118k functions, hours). Without it the decompiler emits
  `halt_baddata()` stubs — the failure mode hit and fixed during this pass.
* Result: **734/734 functions decompiled, 141/141 type files, no unresolved
  stubs** (`node re-tools/ghidra/verify_export.js` → `VERIFY_OK`); end-to-end run
  well under a minute.
* Spot-check against the metadata: `Ammo::SetAmmoPlayer` writes one 8-byte value
  at `+0x3C` in both passes, matching `private Vector2 target; // 0x3C` in
  `Dump/dump.cs`.
* Caveat: Cpp2IL's IL2CPP↔wasm name matching is a heuristic, so an occasional
  callee name may be wrong. Both passes name the same call sites identically, so
  they corroborate rather than independently verify each name; the wasm function
  index is authoritative.

## Game architecture (from the recovered code)

The game is a **2D top‑down action RPG** built around an event-driven,
component-based (ScriptableObject + UnityEvent-style) design.

### Core / state
- `GameManager` (singleton): `GameState` machine (`Intro` → `Play` → `EngagedBoss`),
  win/intro UI, `SaveBossState`, `InitializeEnemyManagerData`.
- `GameResources`, `GameState`, `SingletonMonobehaviour<T>`.
- `Intro` (cutscene/title), `Bonfire` + `RestUI` (save/rest points, Elden-Ring style).

### Player
- `Player` — wired to many events: `MovementByVelocityEvent`, `MovementToPositionEvent`,
  `AnimateEvent`, `AttackEvent`, `DealDamageEvent`, `HealthEvent`, `DestroyedEvent`,
  `BashEvent`, `DashEvent`, `StaminaEvent`, plus `Stamina`, `Rage`, `InventoryManager`,
  `PlayerEffect`, `PlayerShadow`, `PlayerControl`, `AnimatePlayer`.
- Movement via `MovementByVelocity` / `MovementToPosition` + `MovementDetailsSO`.
- Stats/abilities: `Health`, `HealthBar`, `Stamina`, `Rage`, `Dash`, `Bash`, `MeleeSkills`,
  `RangedSkills`, `SkillsAction`, `MeleeSkillAction`.

### Combat
- `Ammo` (implements `IFireable`), `AmmoVisual`, `AmmoAnimation`, `AmmoHitEffect`,
  `AmmoDetailsSO`, `Arrow`, `Beam`, `BeamByPlayer`.
- Damage: `DealDamage`, `DealContactDamage`, `ReceiveDamage`, `ReceiveContactDamage`,
  `AttackEvent`, `DealDamageEvent`.

### Enemies / Boss
- `Enemy`, `EnemyAI`, `EnemyAttack`, `EnemyMovement`, `EnemyManager`,
  `EnemyManagerData`, `EnemyManagerDetailsSO`, `EnemyStateEvent`, `AnimateEnemy`,
  `EnemyEffect`.
- `Boss`, `BossManager`, `BossHealthBar`, `BossMap`, `BossEffect`, `AnimateBoss`.

### Items / inventory
- `Inventory`, `InventoryManager`, `Item`, `ItemConsumer`, `PickUp`, `AmmoDetailsSO`
  and other ScriptableObject data containers.

### Audio / presentation
- `AudioManager`, `SoundEffectManager`, `MusicManager`, `SoundEffectSO`.
- `CinemachineManager`, `EfxManager`, `Effect` (→ `PlayerEffect`/`EnemyEffect`/`BossEffect`),
  all-in-1 sprite shader, URP, TextMeshPro + TMPEffects.

### Systems / AI / save
- Behaviour trees: **BehaviorDesigner** (`BehaviorDesigner.Runtime.Tasks.*`).
- Navigation: **NavMeshPlus** (`NavmeshManager`) + `Unity.AI.Navigation`.
- Input: **Unity Input System** (`InputSystem_Actions`, `PlayerControl`).
- Persistence: **ESave** (`Esper.ESave.*`, `SaveFileSetup`, `ESaveHelperExtensions`).
- Tweening: **DOTween** (heavily used e.g. in `BossManager` UI animations).

### Namespaces seen in the recovered code
Global (game) types; `Esper.ESave.*`; `UnityEngine.InputSystem.LowLevel.*`;
`BehaviorDesigner.Runtime.Tasks.*`; `DG.Tweening.*` (DOTween); `NavMeshPlus.*`;
`TMPro` / `TMPEffects.*`; Unity packages (`UnityEngine.*`, `Unity.*`).

## Notes / limitations
- Decompiled output is structurally faithful (control flow, calls, constants, field
  offsets) but is decompiler pseudo-C, not the original C#.
- Raw object offsets (`this[4]`) map to fields via the `// 0xNN` offsets in `dump.cs`.
- A few methods were fully inlined by IL2CPP and have no standalone body
  (marked `// <no wasm mapping>`).
- Third-party assemblies are unmodified public libraries; their functions are named
  in `Decompiled/build.dcmp` if needed.

## C# source reconstruction (`RippedProject/ExportedProject/Assets/Scripts`)

The recovered classes were restructured in place inside the AssetRipper project tree
(`Assets/Scripts/Assembly-CSharp`, 719 `.cs` files; 584 existing stubs overwritten,
35 added; `.meta` GUIDs preserved by matching filenames). The game's own 160 scripts now sit in
subsystem folders inside that assembly (see *Project layout* below).

Steps done so far:

1. **Namespaces + usings** — each file gets its real namespace and only the `using`
   set it needs (library-aware; BehaviorDesigner/DOTween files avoid `using System;`
   so `Action`/`Task` don't become ambiguous).
2. **Valid declarations** — `.ctor`/`.cctor` renamed, dump artifacts dropped, so every
   declaration parses.
3. **Semantic cleanups** — real `event` declarations (34), `implicit`/`explicit`
   operators (25), real properties with recovered bodies (21),
   `[EditorBrowsable(EditorBrowsableState.Never)]` fixed.
4. **Real bodies for the event system** — 34 `Call*Event` invokers and 21 event-args
   constructors rewritten as reconstructed C# (commit `3c00e1fc`).
5. **Recovered disassembly as method bodies** — every pseudo-code comment *and* the
   inferred bodies from step 4 were replaced with the **actual per-method wasm
   disassembly** recovered by Cpp2IL (`Decompiled/isil/IsilDump/…`), so the tree
   carries recovered evidence rather than inference:

   | | |
   |---|---|
   | files rewritten | 608 |
   | members with instruction-level disassembly | 2540 |
   | instructions embedded | 123,296 |
   | members with no recovered body (`// <no wasm mapping>`) | 36 |
   | types with no ISIL file (10 enums, no bodies) | 10 |

   Matching is by namespace + type name, then method name + arity (parameter types
   used as a tie-breaker); constructors map to `.ctor`/`.cctor`, property accessors to
   `get_`/`set_`, conversion operators to `op_Implicit`/`op_Explicit`. The inferred
   bodies from step 4 remain available in commit `3c00e1fc`.
6. **`Call` target resolution** — every `Call N` operand is annotated with the function
   name recovered in the wasm `name` custom section (`Decompiled/build.named.wasm`):

   ```
   //   0x3690 Call 86824   ; Ammo::Update
   //   0x36A6 Call 44879   ; UnityEngine.Time::get_time
   ```

   | | |
   |---|---|
   | call sites | 17,383 |
   | annotated with a recovered name | 5,714 (722 distinct functions) |
   | left as raw indices (no recovered name) | 11,669 over 136 distinct targets |

   The module has 478 imported + 117,320 defined functions but only 52,902 carry a
   recovered name, so the remaining call targets are IL2CPP runtime helpers with no
   managed method to attribute them to. Any raw `Call N` can still be looked up in
   `Decompiled/build.dcmp` through its `// funcN` comment, and the hottest of them are
   identified in the appendix at the end of this report.

   **Caveat:** for functions merged by identical-code-folding the recovered name can be
   semantically wrong. Worked example: index `1144` is named
   `System.Net.WebOperation::.ctor`, but its body (visible as `func1144` in
   `build.dcmp`) is an atomic compare-and-swap, i.e. `Interlocked.CompareExchange`.

7. **Coverage completion** — the first reconstruction pass wrote one file per *simple* type
   name, so types sharing a name overwrote each other and 100 files stayed as AssetRipper
   `Dummy class` placeholders. The layout is now driven from the metadata instead: one file
   per Assembly-CSharp type at its namespace-derived path. This recovered the missing types
   and removed the collisions:

   | | |
   |---|---|
   | AssetRipper placeholder files remaining | 0 (was 100) |
   | types with no file of their own | 0 (was 9: the game's global `Idle`, six `…Unity.Timeline` tasks, two `…Unity.Collider` tasks) |
   | files whose declaration belonged to a different type | 0 (was 9) |
   | method bodies carrying disassembly | 2,942 |
   | `// <no wasm mapping>` members | 8 (all genuinely empty ISIL entries) |
   | instructions embedded | 141,031 |

   Member matching is now rename-aware: the declarations rename compiler-generated members
   (`<Start>b__5_0` → `Start_b__5_0`), so names are compared ignoring `<>`, `.`, `_`, generic
   arity and case. That alone recovered 28 more bodies (36 → 8 unmapped).

   The 65 compiler-generated / nested types (coroutine state machines, closures, nested event
   and action types) have an ISIL file of their own but no `.cs` file, because their IL2CPP
   names are not legal C# identifiers. Their recovered code is kept as a comment block at the
   end of the owner's body (`// ---- nested types recovered from wasm … ----`): 47 owner files,
   377 methods, 55,621 instructions. This replaced the last wabt pseudo-code in the tree
   (32 files carried one) — the only pseudo-code left in the repo is the one committed at the
   earlier stages.

   Default parameter values that `dump.cs` prints without values are recovered from the ISIL
   signatures; 10 such signatures exist and 2 declarations in the tree were still missing them
   (`CallMapChangedEvent(Map map = null)`, `GetMousePositionInUI(… Camera uiCamera = null)`).

8. **wasm → C# translation of the 160 root files** — the instruction-level listings were replaced
   with a mechanical C# rendering of the wasm function the metadata names for each method
   (`re-tools/asm2cs_dcmp.js`), so the game's own classes now read as C# with the IL2CPP idioms
   left visible. 801 bodies: 743 matched wasm functions, 44 simulated from the listing, 14 kept
   verbatim (see *wasm → C# translation* below for the identification, the naming rules and the
   legend). The 559 BehaviorDesigner/TMPro files keep their listings — they are out of scope. The
   raw listings remain in `Decompiled/isil/`, and the translation source is `Decompiled/build.dcmp`.
9. **Subsystem layout** — the 160 game scripts were moved, `.meta` files included, out of the
   assembly root into the subsystem folders of `re-tools/layout.json` (`Core`, `Player`, `Combat`,
   `Enemies`, `Items`, `Audio`, `UI`, `Effects`, `AI`, `Systems`, `Events`, plus `TMPro/Examples`
   for the sample scripts the build compiled into the assembly). No `.cs` is left at the assembly
   root. See *Project layout* below.

Every step was verified with a Roslyn syntax pass: **719 files, 0 syntax errors**.
(Unity references are unavailable, so this validates parse-ability, not compilation.)

### Project layout (subsystem folders)

The 160 game scripts were flat in `Assets/Scripts/Assembly-CSharp/`; they are now grouped by the
subsystem the recovered architecture shows (the same grouping as *Game architecture* above). The
`.meta` files moved with them, so every GUID the scenes/prefabs reference stays attached, and the
assembly name (`Assembly-CSharp`) is unchanged:

| folder | files | contents |
|---|---|---|
| `Core/` | 14 | `GameManager`, `GameState`, `GameResources`, the singletons, `Intro`, `Bonfire`, map/transition |
| `Player/` | 17 | player controller, animation, shadow, stamina/rage, dash/bash, skills, movement |
| `Combat/` | 19 | health/poise/damage, weapon, ammo, projectiles (`Arrow`, `Beam`) |
| `Enemies/` | 16 | enemy + boss systems, their animation, state and data |
| `Items/` | 14 | inventory, items, pickups, notes, item UI |
| `Audio/` | 6 | audio managers and their ScriptableObjects |
| `UI/` | 7 | menus, HUD bars, instruction/hotbar UI |
| `Effects/` | 6 | `Effect` and its player/enemy/boss subclasses, camera, rain |
| `AI/` | 13 | the game's BehaviorDesigner tasks (actions and conditionals) |
| `Systems/` | 7 | input, navmesh, pooling, helpers, settings |
| `Events/` | 38 | `StaticEventHandler`, the `*Event` components and the `*EventArgs` classes |
| `TMPro/Examples/` | 3 | `ChatController`, `DropdownSample`, `EnvMapAnimator` — TextMesh Pro sample scripts that the build compiled into the assembly, not game code |

The layout is data (`re-tools/layout.json`) applied by `re-tools/layout_tree.js`, the last step of
`regen.ps1`, so the pipeline stays reproducible. `re-tools/scope.js` scopes the translator and the
applier to exactly these files, so the 559 BehaviorDesigner/TMPro files in the subfolders keep
their headers, bodies and line endings — a basename match would have hit
`BehaviorDesigner/Runtime/Tasks/Idle.cs`, which shares its name with the game's `Idle.cs`.

Two deliberate decisions:

* **No namespaces were introduced.** `dump.cs` places every one of the 160 types in the **global**
  namespace, so per-folder namespaces (`Bermudos.Player`…) would be an invention: they would need
  `using` lines added across the tree and could not be checked (no Unity assemblies here, so the
  tree is parse-verified only).
* **No `.asmdef` was added.** Unity reserves the name `Assembly-CSharp` for a predefined assembly
  and rejects an asmdef that uses it, and the game shipped as that single implicit assembly (its
  metadata has no separate game assembly). An asmdef under a new name would be a deviation whose
  references to the other 30-odd assemblies could not be verified here.

Folder `.meta` files are not written: this project carries none anywhere (AssetRipper omitted them)
and Unity recreates them on import — folder GUIDs are not referenced by any asset.

### Event system (architecture)

The game uses an event hub: `StaticEventHandler` (19 events) plus per-component
`*Event` MonoBehaviours (15 events). The delegate shapes are certain from metadata:

| Delegate shape | Body pattern (now carried as recovered disassembly) |
|---|---|
| `Action` | `OnX?.Invoke();` |
| `Action<TArgs>` | `OnX?.Invoke(new TArgs { field = param });` |
| `Action<TThis, TArgs>` | `OnX?.Invoke(this, new TArgs { field = param });` |
| `Action<TThis>` | `OnX?.Invoke(this);` |
| `Action<A,B,…>` (no args class) | `OnX?.Invoke(a, b, …);` |

Event-args classes (`*EventArgs`, `*Args`) use a **parameterless ctor with public
fields** (e.g. `MapChangedEventArgs` → `public Map map;`) that callers populate with an
object initializer. This is confirmed by the Cpp2IL ISIL disassembly of
`MapChangedEventArgs..ctor`, which only runs the metadata/base-init prologue and stores
no field. Signatures also recovered **default parameter values** that `dump.cs` dropped
(e.g. `CallMapChangedEvent(Map map = null)`,
`CallInstructionChangedEvent(string instructionText, int displayCount = -1, bool isActive = true)`).

### Body-fidelity findings (important)

- `Decompiled/isil/IsilDump/Assembly-CSharp/<Type>.txt` contains **per-method wasm
  disassembly** (instruction level: `0x…` addresses, `Call N`, field offsets). Method bodies no
  longer carry it — they carry the mechanical C# translation of the matched wasm function — but it
  remains the evidence of record for the 14 methods whose listing is kept verbatim, and the decoder
  input for the 44 listing-simulated bodies.
- Its **method attribution is only partly reliable**: `AnimateEvent.add_OnAnimate`
  matches a real add-accessor with the correct field offset (`0x10`), but
  `AnimateEventArgs..ctor` shows an unrelated `GameObject`/`Animator` function, and the
  `Call*Event` invokers of `AttackEvent`, `AnimateEvent` and `DieEvent` all show the same
  4-instruction thunk (`LocalGet 0; I32Const 0; Call 44622`). Treat a single method's
  disassembly as evidence to corroborate, not as ground truth.
- Bodies are **recovered code but not original C#**: they are *mechanical* translations of the wasm
  function the metadata names for each method, so the IL2CPP idioms (`g_a`, the metadata-usage table,
  `call_indirect`, unnamed wasm locals) remain visible instead of being guessed away. See below.

### wasm → C# translation (`re-tools/asm2cs_dcmp.js`)

Every in-scope method body in `Assembly-CSharp` is a mechanical C# rendering of its wasm function,
produced by `re-tools/asm2cs_dcmp.js` from the wabt structured listing (`Decompiled/build.dcmp`); the
raw per-instruction listings live only in `Decompiled/isil/`. The script is a tokenizer + recursive
descent parser + printer: it parses the wabt body into an AST (statements, block/if *expressions*,
labels/gotos, `br_table`), prints C# with Allman braces, and hoists every local (including the `__tN`
temporaries it introduces for wabt's expression-valued blocks) to the top of the method. Run
`node re-tools/asm2cs_dcmp.js --check` (743/743 translated, 0 failures) or `regen.ps1` to rebuild and
re-apply the whole tree.

| | |
|---|---|
| method bodies translated from a matched wasm function | **743** |
| … identified by exact bytecode match / by name-section order | 651 / 92 |
| method bodies translated from the raw ISIL listing (stack simulation, see below) | **44** |
| method bodies whose listing is kept verbatim | **14** |
| tree files rewritten | 149 of 160 |
| Roslyn syntax check over all 719 generated files | **0 errors** |
| `call_indirect(...)` sites left visible | 68 |
| field names recovered from `dump.cs` offsets (`this.x`, `x.field`) | 147 types / 823 fields |

Legend for what deliberately stays "IL2CPP-shaped":

| Idiom | Meaning |
|---|---|
| `g_a` | IL2CPP evaluation-stack pointer (the frame grows downwards: `g_a = g_a - 16`) |
| `d_p444444444444044P44p44444444[i]` | il2cpp metadata-usage table (class/type/method/string literals) |
| `f_xxxx` | call into a wasm function wabt could not name |
| `call_indirect(...)` | unresolved indirect call (the target is the first argument) |
| `Rec_xxxx` | anonymous wabt record type, declared once inside the class with its byte offsets |
| `localN` | unnamed wasm local slot in a listing-simulated body (N is the local index) |
| `this_` | the managed instance pointer where the code *writes* it (a plain `byte*` local) |

Naming rules: object-rooted offset chains become `base.field` when the offset lands on a field of that
class in `dump.cs` (the access width is used to pick the offset scale, since wabt writes
`base[offset/align]`); wasm parameters map positionally to `(this, args…)` — IL2CPP appends its hidden
`methodInfo` slot *after* the managed arguments, so a slot the name section does not name keeps its
wabt letter and is declared as `byte*`. `select_if`/`eqz`/`min`/`max` and the numeric conversions print
as C# conditionals/`== 0`/`Mathf.*`/casts. Boolean stores keep their numeric literal
(`this.isFirstOnEnable = 0;`) because that is literally what the wasm does.

The **44 listing-simulated** bodies are the methods whose wasm function could not be matched to the
method at all. Most are tiny straight-line listings (a 4-op field store, `Nop; End`, a single load), so
the wasm operand stack is simulated directly and the result printed through the same printer; each such
body says so in its own header line. The remaining **14** (5 lambda bodies and 9 property accessors that
contain real control flow, e.g. `BossManager::Start_b__5_0`, `InputSystem_Actions::get_UI`) keep their
raw listing plus an explanatory note rather than being guessed.

Caveat that matters when reading the tree: Cpp2IL's attribution of a wasm function to a method is only
partly reliable, and the binary went through ICF/linker merging. Some bodies are therefore *bytecode-
exact* matches whose recovered names are unrelated to the C# method (the documented example is
`HelperUtilities.GetDirectionVectorFromAngle`, whose body is a `FontAsset` routine). Those bodies are
translated faithfully, name-section names and all — they are evidence about the binary, not a claim
about what the C# method did.

### Override verification (base types resolved against the metadata)

All 1,468 `override` members in the tree were resolved through their base-type chain against
the IL2CPP metadata (which covers *every* assembly, not just Assembly-CSharp). Resolution is
using-aware, so a base reached through `using X;` or `using Action = A.B.Action;` resolves the
way the compiler would:

| | |
|---|---|
| override members | 1,468 |
| verified against a metadata-declared member | 1,467 |
| … owned by a base outside Assembly-CSharp (`BehaviorDesigner.Runtime.Tasks.Task` 1,359, `.ParentTask` 89, `.Composite` 4, `TMPro.TMP_InputValidator` 2, …) | 1,454 |
| overrides of `System.Object` members (reached through the implicit root) | 1 (`InputSystem_Actions.Finalize`) |
| mismatches | **0** |
| unresolved base chains | **0** (was 36) |

### Bodiless members

Members that have no body at all in the metadata (abstract methods, interface members —
`dump.cs` prints them as `…;`) are emitted as plain signatures, and body embedding skips them.
`IFireable.InitialiseAmmo(AmmoDetailsSO, Vector3)` is the only such member in the tree; it no
longer receives an unrelated body.

### Base-type binding fix

Bases arrive from the metadata as *simple* names, which left two binding problems: the eight
global-namespace task classes had been handed `using Action = System.Action;` (so
`Spinny : Action` bound to a delegate type instead of `BehaviorDesigner.Runtime.Tasks.Action`),
and two attribute classes did not import the namespace holding their base. Both are fixed in
place (`re-tools/fix_bd_bases.js`), then re-checked:

| | |
|---|---|
| `using Action = System.Action;` → `using Action = BehaviorDesigner.Runtime.Tasks.Action;` | 8 files (`DeadAction`, `EndPhase1`, `EnterPhase2`, `FireEyeAttackLoop`, `FireOpenMouthLoop`, `ReceiveDamageAction`, `SkillsAction`, `Spinny`) |
| `using BehaviorDesigner.Runtime.Tasks;` added for base `ObjectDrawerAttribute` | 2 files (`FloatSliderAttribute`, `IntSliderAttribute`) |
| remaining mis-bound bases | 0 |

## Behavior Designer runtime (`Assets/Scripts/BehaviorDesigner.Runtime`)

**Finding.** 509 of the reconstructed classes are Behavior Designer tasks: they derive from
`BehaviorDesigner.Runtime.Tasks.Task`/`Action`/`Conditional`/`Composite`/`Decorator`, carry the
designer's attributes (463 `[TaskCategory]`, 495 `[TaskDescription]`, 41 `[TaskIcon]`) and use
its shared variables. Two more bind to it through `Behavior`/`ExternalBehavior`
(`BehaviorTree`, `ExternalBehaviorTree`). That runtime is a *separate, proprietary third-party
assembly* (`BehaviorDesigner.Runtime.dll`, 67 types), which AssetRipper exported as
`Dummy class` stubs — 7 placeholder files in this folder.

**Decision.** The runtime is deliberately **not** reverse-engineered: it is a paid third-party
asset and its own code is not recoverable in useful form (its interface members, e.g.
`IBehavior`'s 8 methods, map to 13,104 unrelated instructions; the whole assembly is 67 types /
~600 methods of which the recovered disassembly is largely IL2CPP glue). Instead the folder
holds an **authored, API-compatible replacement** behaviour-tree runtime, so the reconstructed
game code has a framework to bind to and the tree has a real engine underneath it.

Names, namespaces, base types, member signatures and enum values follow `dump.cs`
(e.g. `TaskStatus` = `Inactive/Failure/Success/Running` = `0/1/2/3`, `AbortType` = `None/Self/
LowerPriority/Both`, `UpdateIntervalType` = `EveryFrame/SpecifySeconds/Manual`); the
implementation is written for this repository and marked as authored in every file header
(`NOTICE.md` documents the provenance and how to swap in the real asset).

| what | contents |
|---|---|
| `BehaviorDesigner/Runtime/Tasks` | `Task`, `Action`, `Conditional`, `ParentTask`, `Composite`, `Decorator`, `BehaviorReference`, `TaskStatus`, `AbortType`, the designer attributes |
| `BehaviorDesigner/Runtime` | `Behavior`, `BehaviorManager`, `BehaviorSource`, `ExternalBehavior`, `GlobalVariables`, `VariableSynchronizer`, `BehaviorGameGUI`, `SharedVariable`/`SharedVariable<T>`/`SharedGenericVariable`, `IBehavior`, `IVariableSource`, `UpdateIntervalType` |
| root | `AOTLinker` (marker component the scenes reference) |
| engine | real tick loop (root task per frame, task lifecycle `OnAwake`→`OnStart`→`OnUpdate`→`OnEnd`, scene callbacks forwarded to the tasks, events, variables), working `Sequence`/`Selector`/`Inverter`/`Wait`/`Log` in `…Tasks.Replacement`, and a runnable demo tree (`ReplacementBehaviorTree`) so the replacement is usable on its own |
| deliberately absent | Behavior Designer's own built-in tasks (`Sequence`, `Selector`, `Repeater`, …) — the game's copies already exist under `Assembly-CSharp/BehaviorDesigner/Runtime/Tasks`, so duplicating them here would collide |

Verification:

| | |
|---|---|
| overridden members the tree expects on Behavior Designer types (distinct) | 35 (`Task` 20, `ParentTask` 13, `Composite` 2) — missing from the replacement: **0** |
| Roslyn syntax pass over the folder | 28 files, 0 syntax errors |
| AssetRipper `Dummy class` stubs remaining in the folder | 0 (was 7) |
| `.meta` files generated (deterministic GUIDs, md5 of the asset path) | 21 in this folder, plus 35 tree files that had none |

## Remaining known issues

- 65 nested / compiler-generated types have no `.cs` file of their own (their IL2CPP names are
  not legal C# identifiers); they stay inside the owner's file, and where the metadata names a wasm
  function for one of their methods that body is translated in place (its owner name keeps the
  angle brackets rendered as `_`).
- ISIL method attribution is only partly reliable (identical-code-folding merges functions), so
  a single method's listing is evidence to corroborate, not ground truth; the 14 bodies that could
  not be translated even by stack simulation keep it verbatim.
- The tree is a documentation artifact: bodies are mechanical C# translations of wasm functions, so
  they still mention IL2CPP runtime artefacts (`g_a`, `d_p444444444444044P44p44444444`, `f_xxxx`,
  `call_indirect`). The tree parses (Roslyn, 0 errors over 719 files) but does not compile as C#.
- The subsystem layout (folders, names) is a reconstruction choice of this report, not evidence: the
  metadata only says which assembly a type belongs to. The mapping is `re-tools/layout.json` and is
  meant to be edited — `node re-tools/layout_tree.js` re-applies it.

## Appendix: identity of the hot unnamed call targets

11,669 of the `Call N` sites in the tree address a function that the wasm `name` section does
not name (136 distinct targets). They are not game methods: the call sites are spread over
unrelated classes, which is the signature of toolchain/runtime glue. The 20 hottest are
identified here from two evidence sources only - the call sites in the recovered tree, and the
body of `funcN` in `Decompiled/build.dcmp` (regenerate with `re-tools/helper_table.js`).

| `Call N` | call sites | `build.dcmp` | body | evidence in the body | wrapper chain | called from (recovered classes) |
|---|---|---|---|---|---|---|
| `1099` | 5560 | `f_hpa` (3 lines) | thin wrapper | thin wrapper | `f_jlje(#94961)` | AnimatePlayer (76); GameManager (65); InputSystem_Actions (64) |
| `94848` | 1240 | `f_ahje` (200 lines) | 166 statements | C++ exception plumbing (`cxa_find_matching_catch`/`resumeException`); codegen invocation (`env_invoke_*`); large body (200 lines) | - | TMPro.TMP_DigitValidator (15); Inventory (10); TMPro.Examples.TMP_TextSelector_B (10) |
| `95402` | 864 | `f_icke` (36 lines) | 29 statements | - | - | InputSystem_Actions (65); AnimatePlayer (32); TMPro.Examples.TextMeshProFloatingText (28) |
| `61203` | 596 | `f_zmlc` (5 lines) | 3 statements | dynamic dispatch (`call_indirect`) | - | BehaviorDesigner.Runtime.Tasks.Unity.Math.IntComparison (14); BehaviorDesigner.Runtime.Tasks.Unity.Math.IntClamp (12); BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedGameObject (10) |
| `44710` | 322 | `f_qcnb` (9 lines) | 6 statements | calls managed code (UnityEngine_Object_Equals#44680) | - | Bash (4); BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedFloat (3); BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedInt (3) |
| `516` | 260 | `f_ws` (3 lines) | thin wrapper | thin wrapper | `f_ss(#512)` | InputSystem_Actions (260) |
| `520` | 220 | `f_at` (17 lines) | 12 statements | - | - | InputSystem_Actions (220) |
| `44644` | 174 | `f_canb` (5 lines) | 3 statements | dynamic dispatch (`call_indirect`) | - | Ammo (12); Inventory (12); InventoryManager (10) |
| `1116` | 161 | `f_ypa` (22 lines) | 18 statements | C++ exception plumbing (`cxa_find_matching_catch`/`resumeException`); codegen invocation (`env_invoke_*`) | - | AnimatePlayer (19); StaticEventHandler (18); InventoryManager (10) |
| `1112` | 157 | `f_upa` (3 lines) | thin wrapper | thin wrapper | `f_lcke(#95405)` | AnimatePlayer (19); StaticEventHandler (12); BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogFormat (10) |
| `61226` | 146 | `f_wnlc` (5 lines) | 3 statements | dynamic dispatch (`call_indirect`) | - | BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatComparison (14); BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatClamp (12); BehaviorDesigner.Runtime.Tasks.StunAction (5) |
| `61227` | 135 | `f_xnlc` (8 lines) | 5 statements | dynamic dispatch (`call_indirect`) | - | BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatComparison (9); BehaviorDesigner.Runtime.Tasks.Wait (6); BehaviorDesigner.Runtime.Tasks.StunAction (3) |
| `44686` | 123 | `f_sbnb` (5 lines) | 3 statements | dynamic dispatch (`call_indirect`) | - | GameManager (17); Inventory (12); InventoryManager (9) |
| `519` | 100 | `f_zs` (28 lines) | 21 statements | - | - | InputSystem_Actions (100) |
| `94961` | 97 | `f_jlje` (50 lines) | 39 statements | - | - | EnemyEffect (6); MusicManager (6); NavmeshManager (4) |
| `61245` | 91 | `f_polc` (18 lines) | 14 statements | dynamic dispatch (`call_indirect`) | - | BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.Normalize (6); BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Linecast (3); BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics.Raycast (3) |
| `61204` | 82 | `f_anlc` (8 lines) | 5 statements | dynamic dispatch (`call_indirect`) | - | BehaviorDesigner.Runtime.Tasks.Unity.Math.IntComparison (9); BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindGameObjectsWithTag (3); BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindWithTag (3) |
| `85158` | 80 | `f_iyud` (28 lines) | 23 statements | dynamic dispatch (`call_indirect`); calls managed code (multiple_8_System_RuntimeType_op_Equality#7721, System_String_Format_4#82707) | - | StaticEventHandler (18); AnimatePlayer (9); AnimateEnemy (3) |
| `60160` | 78 | `f_wyjc` (26 lines) | 20 statements | calls managed code (System_Text_Encoding_get_UTF8#1122) | - | InputSystem_Actions (60); PlayerControl (16); MenuInGame (1) |
| `10` | 74 | `env_cxa_find_matching_catch_3` | imported host function | imported from the JS host (`env_*`) | - | EnemyManager (21); InventoryManager (8); Inventory (7) |

What the bodies show:

| group | hot members | evidence in the body |
|---|---|---|
| managed invocation + C++ exception unwinding | `94848`, `1116`, the import `10` (`env_cxa_find_matching_catch_3`) | calls `env_invoke_*`, then `env_cxa_find_matching_catch` / `env_resumeException` |
| dynamic dispatch | `61203`, `44644`, `61226`, `61227`, `44686`, `61245`, `61204`, `85158` | the callee slot is read out of the object (`a[2]`, `(d[0])[n]`) and invoked with `call_indirect` |
| thin wrappers over another unnamed helper | `1099` -> `f_jlje`, `1112` -> `f_lcke`, `516` -> `f_ss` | a single call in the body; `f_jlje` resolves a *tagged* pointer (`a[0] & 1`, tag `>> 29`, `br_table` over the IL2CPP metadata tables, result written back to `a[0]`), `516` guards on a stdio-style flag byte |
| glue in front of managed code | `44710` -> `UnityEngine.Object::Equals`, `60160` -> `System.Text.Encoding::get_UTF8`, `85158` -> `System.RuntimeType::op_Equality` / `System.String::Format` | the named callee is a managed method |
| toolchain helpers (libc / libc++) | `519` (integer -> decimal: `a / 10`, `\| 48`), `520`, `95402` | no managed callee, numeric/pointer loops |

Caveats: the caller lists come from the recovered bodies, whose method attribution is only
partly reliable (see the caveat in step 6), so they read as "this call appears in these files"
rather than "this class calls it"; and the role of each helper is read off the decompiled body -
no name can be recovered for a function the name section leaves unnamed.
