# BehaviorDesigner.Runtime — authored replacement (not recovered code)

Bermudos ships **Behavior Designer** (Opsive) as `BehaviorDesigner.Runtime.dll`. The game's own
`Assembly-CSharp` code derives from it heavily (509 task classes + `BehaviorTree` /
`ExternalBehaviorTree`), but the DLL itself is a third-party, proprietary runtime, so it is
**not** reverse-engineered in this repository.

AssetRipper left the classes it could see as `Dummy class. This could have happened…` stubs in this
folder. Those stubs are replaced here with a **hand-written, API-compatible behaviour-tree runtime**,
so the reconstructed game code has a framework to bind to and the tree can actually be run.

Provenance:

| | |
|---|---|
| type names, namespaces, base types, member signatures, enum values | IL2CPP metadata (`Dump/dump.cs`), e.g. `TaskStatus` = `Inactive/Failure/Success/Running` = `0/1/2/3`, `AbortType` = `None/Self/LowerPriority/Both` |
| implementation | written for this repository (a small, readable behaviour-tree engine), **not** decompiled |
| everything under `Assets/Scripts/Assembly-CSharp` | unchanged recovered code |

Scope: the base classes and services the reconstructed code needs — `Task`, `Action`,
`Conditional`, `ParentTask`, `Composite`, `Decorator`, `BehaviorReference`, the shared-variable
types, the designer attributes, `Behavior`/`BehaviorManager`/`BehaviorSource`/`GlobalVariables`.

Behaviour Designer's *built-in* tasks (Sequence, Selector, …) are not duplicated here; the game's
own copies are in `Assembly-CSharp` (as recovered disassembly). `Runtime/Tasks/Replacement/`
contains a few working composites of our own so the replacement engine is usable on its own.

Swapping in the real asset: delete this folder's contents and drop `BehaviorDesigner.Runtime.dll`
into the project — the APIs line up.

`.meta` files for the new scripts were generated with deterministic GUIDs (md5 of the asset path),
so the folder imports cleanly without asset-guid churn.
