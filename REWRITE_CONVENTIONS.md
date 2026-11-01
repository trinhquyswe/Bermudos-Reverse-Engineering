# Pseudo-C# → Real C# Rewrite Conventions (Assembly-CSharp full sweep)

Source of truth: `webgl1\pseudoc-cs\Assembly-CSharp\<Name>.cs` (Ghidra P1 output).
Target: `webgl1\reconstruction project\ExportedProject\Assets\Scripts\Assembly-CSharp\<Name>.cs`
(overwrite the AssetRipper dummy in place; never touch the `.meta` files).

Unity version: **2022.3.44f1**, C# 9. Original code was in the **global namespace** — keep it there.

## Non-negotiable rules

1. **Class/field/method signatures come from the skeleton** (the part of the pseudo file before the
   first method body). Keep exact serialized field names, `public`/`private` visibility and
   `[HideInInspector]`/`[SerializeField]`/`[CompilerGenerated]` attributes — Unity scene assets bind
   serialized fields by name. Offsets `// 0x10` comments may be dropped.
2. **No Raw.\*, no DAT_ram_\*, no unnamed_function_N, no CONCAT44/param_N/local_\*/LAB_\* in output.**
   Every such construct must be translated to real C# or, if truly unrecoverable, to the most
   plausible equivalent with a `// TODO(il2cpp):` comment explaining what was guessed.
3. Output must be **compilable C# for Unity 2022.3** — Unity APIs are those of 2022.3
   (`RuntimeInitializeOnLoadMethod`, `FindObjectsByType`, `Object.FindFirstObjectByType`, etc. are
   allowed; `FindObjectOfType` is obsolete but still compiles — either is fine).
4. Third-party APIs available in the project: **DOTween (`DG.Tweening` incl. Module extensions,
   `ShortcutExtensions`), ESave (`Esper.ESave.*`), TMPEffects, Cinemachine, NavMeshPlus, TMP**.
   Use them as referenced in the pseudo-code; when the pseudo-code inlines a DOTween call, write the
   idiomatic DOTween call (e.g. `DOTweenModuleUI.DOFade(img, 1f, 2f)` → `img.DOFade(1f, 2f)`).
5. Cross-assembly APIs (e.g. `Esper.ESave.SaveFile`, `TMPEffects.*`) — believe the method/property names
   seen in the pseudo-code; when a call was resolved to `Type.Method(...)` trust that pairing.
6. Do **not** invent fields or methods that are not in the game. If a referenced member can't be
   identified, reproduce the call as a TODO comment, not as a random guess that compiles but lies.

## Translation table (learn these, they repeat everywhere)

| Pseudo pattern | Real C# |
|---|---|
| `(T)UnityEngine.Component.GetComponent<object>(this,DAT_x)` before assigning to field `f` | `GetComponent<f's declared type>()` |
| `UnityEngine.GameObject.GetComponent<object>(go, DAT_x)` assigned to T | `go.GetComponent<T>()` |
| `UnityEngine.Transform.get_position(t)` / `set_position(t,v)` | `t.position` / `t.position = v` |
| Same applied to any `UnityEngine.*` getter/setter (`get_name`, `get_gameObject`, `set_enabled`, `set_anchoredPosition`…) | native property / field access |
| `UnityEngine.Mathf.*_core(this, ...)` and Mathf helpers | `Mathf.xxx(...)`, `Mathf.Sqrt`, `Mathf.Abs` etc. |
| `new HealthEventArgs(); e.healthAmount = v;` (two lines, ctor + writes) | object initializer or plain assignments |
| `Raw.DelegateInvoke(d)(d[8],x,d[5])` / `Raw.DelegateInvoke(iVar3)(...)` | `d?.Invoke(x)` — inline event delegate invocation |
| OnEnable/OnDisable inlined `System.Delegate.Combine` + `Interlocked.CompareExchange` loop around `X.add_Y` / `remove_Y` on field of class X | `someComponent.SomeEvent += Handler;` / `-= Handler;` |
| Same in the event class itself (add_/remove_ compiler-generated bodies) | declare `public event Action<...> OnXChanged;` and let the compiler emit add/remove |
| Static field access via `Raw.Read/Deref(Raw.Read<object>(DAT_TypeInfo + 0x5c)...)` chains that fetch instances of singletons (GameResources, SoundEffectManager, AudioManager, PoolManager, GameManager…) | `Singleton.Instance.member` |
| `unnamed_function_####` resolved to `System.String.Equals` / `op_Equality` on strings | `a == b` (or `string.Equals(a, b, StringComparison.Ordinal)` when ordinal is implied) |
| `System.Delegate.Combine(a,b)` assigned to a static delegate field | `StaticEventHandler.SomeEvent += Handler;` (see StaticEventHandler) |
| `int[] local_18 = new int[2]; local_18[0]=...;` used as byref receiver | pass the actual by-ref argument / use the value directly |
| `UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync(GetSceneAt(1).name)` etc. | keep runtime effect identical; write idiomatic scene ops |
| `UnityEngine.Rigidbody2D.set_constraints(rb, 7)` | `rb.constraints = (RigidbodyConstraints2D)7;` — keep the numeric value but comment the meaning (7 = FreezeAll for 2D: FreezePositionX/Y+Z-rot; 4 = FreezeRotation) |
| Vector literals (`Raw.Write<long>` packing two floats, `0x3f800000...` = packed floats) | `new Vector2(x, y)` — decode the float bits (e.g. `0x3f800000` = 1f) |
| `Raw.Read<float>`/`Write` around transform ops | restore as plain transform math |
| `Player___c_TypeInfo` / `<Type>_<c>` cached lambdas | write the lambda / closure inline as normal code (cached delegate creation may be omitted) |

Note on packed longs: little-endian `0xAAAAAAAA3F800000` = low dword `0x3f800000` (1f), high dword
`0xAAAAAAAA`. Only decode when the value is obviously a float pair (Vector2/Color); else keep TODO.

## Style

- File header: none (no pseudo-C# legend, no RVA comments). Optionally a one-line file comment.
- `GetComponent` chains with `== null` fallback guards → use ?. where behavior-equivalent; prefer
  explicit `if (x != null)` when the pseudo-code branches.
- Coroutines: `IEnumerator` methods with `WaitForSeconds` etc. as seen.
- Keep Unity message order: `Awake` → `OnEnable`/`OnDisable` → `Start` → `Update`.
- Nested class methods (e.g. `<PlayerWrapper>c__AnonStorey`) become lambdas/local functions inside
  the logical owner method.

## Process per file

1. Read the pseudo file fully.
2. Match skeleton → target class (MonoBehaviour/ScriptableObject/enum/plain class per skeleton base type;
   enums from `dump.cs` / the pseudo file itself).
3. Rewrite every method body; handler names keep the P1-decompiled verb (`X_OnY` style) when present,
   else pick a conventional name.
4. Overwrite `...\ExportedProject\Assets\Scripts\Assembly-CSharp\<Name>.cs` with the final code.
5. Report a per-file status list: `clean` (fully reconstructed) / `approx` (semantics reconstructed,
   some literals/branches guessed) / `todo` (genuinely unrecoverable chunks left marked).
