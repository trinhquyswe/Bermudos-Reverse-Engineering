// MenuInGame.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in MenuInGame.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class MenuInGame : MonoBehaviour
{
	// Fields
	private Button exitButton; // 0x10
	private Button resumeButton; // 0x14
	private TextMeshProUGUI exitText; // 0x18
	private TextMeshProUGUI resumeText; // 0x1C
	private TMPWriter exitTMPWriter; // 0x20
	private TMPWriter resumeTMPWriter; // 0x24
	private InputSystem_Actions inputSystem_Actions; // 0x28
	public Ease ease; // 0x2C

	// Methods

	// wasm func86469 -> ram:81a37e44  [MenuInGame::Awake]
	private void Awake()
	{
			uint uVar1;
			uint uVar2;
			uint[] auStack_8 = new uint[2];

			if (cRam00664904 == '\0') {
				unnamed_function_1099(0x557a90);
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x56af38);
				cRam00664904 = '\x01';
			}
			auStack_8[0] = this.inputSystem_Actions;
			uVar1 = InputSystem_Actions_UIActions.get_UseItem(auStack_8,0);
			UnityEngine.InputSystem.InputAction.ToString(uVar1,0);
			auStack_8[0] = this.inputSystem_Actions;
			uVar1 = InputSystem_Actions_UIActions.get_UseItem(auStack_8,0);
			uVar2 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar2,this,uRam0056af38,0);
			UnityEngine.InputSystem.InputAction.add_performed(uVar1,uVar2,0);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar1,0,0);
			return;
	}

	// wasm func86470 -> ram:81a37f0d  [MenuInGame::OnDestroy]
	private void OnDestroy()
	{
			uint uVar1;
			int iVar2;
			ulong uStack_40;
			ulong uStack_38;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			float fStack_18;
			uint uStack_14;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664905 == '\0') {
				unnamed_function_1099(0x567f0c);
				unnamed_function_1099(0x56d37c);
				unnamed_function_1099(0x56d380);
				unnamed_function_1099(0x56d3d8);
				unnamed_function_1099(0x56d3e0);
				unnamed_function_1099(0x571ce0);
				unnamed_function_1099(0x571ce4);
				cRam00664905 = '\x01';
			}
			uVar1 = unnamed_function_44644(this,0);
			iVar2 = UnityEngine.GameObject.set_layer(uVar1,0);
			uVar1 = unnamed_function_44644(this,0);
			if (iVar2 == 0) {
				unnamed_function_44686(uVar1,1,0);
				TMPEffects.Components.TMPEffectComponent.get_TextComponent
									(this.exitTMPWriter,uRam00571ce0,0);
				TMPEffects.Components.TMPEffectComponent.get_TextComponent
									(this.resumeTMPWriter,uRam00571ce4,0);
				uVar1 = System.Linq.Enumerable.Count(this,0);
				if (cRam00664829 == '\0') {
					unnamed_function_1099(0x55d048);
					cRam00664829 = '\x01';
				}
				uStack_30 = **(ulong **)(iRam0055d048 + 0x5c);
				uStack_28 = *(uint *)(*(ulong **)(iRam0055d048 + 0x5c) + 1);
				uStack_10 = uStack_30;
				uStack_8 = uStack_28;
				UnityEngine.Transform.get_localScale(uVar1,&uStack_30,0);
				uVar1 = System.Linq.Enumerable.Count(this,0);
				uVar1 = DG.Tweening.ShortcutExtensions.DOScale(uVar1,0x3f800000,0x3f000000,0);
				uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase
													(uVar1,this.ease,uRam0056d380);
				DG.Tweening.TweenSettingsExtensions.SetTarget(uVar1,1,uRam0056d3e0);
				uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f0c);
				iVar2 = UnityEngine.RefreshRate.ToString(0);
				uStack_14 = 0;
				fStack_18 = (float)-iVar2;
				uStack_38 = (ulong)(uint)fStack_18;
				UnityEngine.RectTransform.get_anchoredPosition_Injected(uVar1,&uStack_38,0);
				if (cRam0066482a == '\0') {
					unnamed_function_1099(0x55d024);
					cRam0066482a = '\x01';
				}
				uStack_40 = **(ulong **)(iRam0055d024 + 0x5c);
				uStack_20 = uStack_40;
				uVar1 = DG.Tweening.DOTweenModuleUI.DOScale(uVar1,&uStack_40,0x3f000000,0,0);
				uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase
													(uVar1,this.ease,uRam0056d37c);
				DG.Tweening.TweenSettingsExtensions.SetTarget(uVar1,1,uRam0056d3d8);
			}
			else {
				unnamed_function_44686(uVar1,0,0);
			}
			return;
	}

	// wasm func86471 -> ram:81a3811c  [MenuInGame::OpenMenu]
	private void OpenMenu()
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664906 == '\0') {
				unnamed_function_1099(0x56af3c);
				unnamed_function_1099(0x56af40);
				unnamed_function_1099(0x55cef8);
				cRam00664906 = '\x01';
			}
			uVar2 = *(uint *)(this.exitButton + 0xb4);
			uVar1 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar1,this,uRam0056af3c,0);
			UnityEngine.Events.UnityEvent.ctor(uVar2,uVar1,0);
			uVar2 = *(uint *)(this.resumeButton + 0xb4);
			uVar1 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar1,this,uRam0056af40,0);
			UnityEngine.Events.UnityEvent.ctor(uVar2,uVar1,0);
			uVar1 = unnamed_function_44644(this,0);
			unnamed_function_44686(uVar1,0,0);
			return;
	}

	// wasm func86472 -> ram:81a381c6  [MenuInGame::Start]
	private void Start()
	{
			int *piVar1;
			uint uVar2;
			int iVar3;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam00664907 == '\0') {
				unnamed_function_1099(0x567ea8);
				cRam00664907 = '\x01';
			}
			if (cRam006649c9 == '\0') {
				unnamed_function_1099(0x55c894);
				cRam006649c9 = '\x01';
			}
			iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x2c);
			if (iVar3 != 0) {
				(**(code **)((ulong)*(uint *)(iVar3 + 0xc) * 4))
									(*(uint *)(iVar3 + 0x20),*(uint *)(iVar3 + 0x14));
			}
			piVar1 = (int *)UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ea8);
			uStack_8 = 0;
			uStack_10 = 0;
			uStack_18 = 0;
			uStack_20 = 0;
			(**(code **)((ulong)*(uint *)(*piVar1 + 0x178) * 4))
								(piVar1,&uStack_20,*(uint *)(*piVar1 + 0x17c));
			uVar2 = unnamed_function_44644(this.exitButton,0);
			unnamed_function_44686(uVar2,0,0);
			uVar2 = unnamed_function_44644(this.resumeButton,0);
			unnamed_function_44686(uVar2,0,0);
			if (cRam006649ab == '\0') {
				unnamed_function_1099(0x55c894);
				cRam006649ab = '\x01';
			}
			iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 4);
			if (iVar3 != 0) {
				(**(code **)((ulong)*(uint *)(iVar3 + 0xc) * 4))
									(*(uint *)(iVar3 + 0x20),*(uint *)(iVar3 + 0x14));
			}
			if (cRam00664908 == '\0') {
				unnamed_function_1099(0x55e33c);
				cRam00664908 = '\x01';
			}
			iVar3 = unnamed_function_95402(uRam0055e33c);
			*(uint *)(iVar3 + 8) = 0;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar3,0);
			return;
	}

	// wasm func86475 -> ram:81a383b9  [MenuInGame::Exit]
	private void Exit()
	{
			int iVar1;

			if (cRam00664908 == '\0') {
				unnamed_function_1099(0x55e33c);
				cRam00664908 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e33c);
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86476 -> ram:81a383ef  [MenuInGame::WaitMapTransitionEvent]
	private IEnumerator WaitMapTransitionEvent()
	{
			uint uVar1;

			UnityEngine.Time.get_timeScale(0x3f800000,0);
			uVar1 = unnamed_function_44644(this,0);
			unnamed_function_44686(uVar1,0,0);
			return;
	}

	// no recovered body in MenuInGame.c
	private void ResumeGame()
	{
		// <no recovered body>
	}

	// no recovered body in MenuInGame.c
	public MenuInGame()
	{
		// <no recovered body>
	}

	// no recovered body in MenuInGame.c
	private void _Awake_b__8_0(InputAction.CallbackContext ctx)
	{
		// <no recovered body>
	}

	// no recovered body in MenuInGame.c
	private void _OnDestroy_b__9_0(InputAction.CallbackContext ctx)
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86478 -> ram:81a38419  [MenuInGame+<WaitMapTransitionEvent>d__13::System.IDisposable.Dispose]
	uint MenuInGame__WaitMapTransitionEvent_d__13_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;

			if (cRam00664909 == '\0') {
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x55d134);
				unnamed_function_1099(0x575bac);
				cRam00664909 = '\x01';
			}
			if (*(int *)(param_1 + 8) != 0) {
				if (*(int *)(param_1 + 8) == 1) {
					*(uint *)(param_1 + 8) = 0xffffffff;
					if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
						unnamed_function_94848(iRam0055c4f8);
					}
					UnityEngine.SceneManagement.SceneManager.LoadScene_1(uRam00575bac,0);
				}
				return 0;
			}
			*(uint *)(param_1 + 8) = 0xffffffff;
			uVar1 = unnamed_function_95402(uRam0055d134);
			UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime(uVar1,0x3e99999a,0)
			;
			*(uint *)(param_1 + 8) = 1;
			*(uint *)(param_1 + 0xc) = uVar1;
			return 1;
	}

	// wasm func86479 -> ram:81a384bb  [MenuInGame+<WaitMapTransitionEvent>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void MenuInGame__WaitMapTransitionEvent_d__13_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f598);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

