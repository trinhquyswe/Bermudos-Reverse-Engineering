// SettingManager.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in SettingManager.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class SettingManager : MonoBehaviour
{
	// Fields
	private Button controlsBtn; // 0x10
	private Button audioBtn; // 0x14
	private Button backBtn; // 0x18
	private TextMeshProUGUI controlsText; // 0x1C
	private TextMeshProUGUI audioText; // 0x20
	private Image controlsPanel; // 0x24
	private Image audioPanel; // 0x28
	private float aplha; // 0x2C
	private float startFontSize; // 0x30

	// Methods

	// wasm func86461 -> ram:81a3780d  [SettingManager::Awake]
	private void Awake()
	{
			uint uVar1;
			uint uVar2;

			if (cRam006648fd == '\0') {
				unnamed_function_1099(0x56c438);
				unnamed_function_1099(0x56c43c);
				unnamed_function_1099(0x56c434);
				unnamed_function_1099(0x55cef8);
				cRam006648fd = '\x01';
			}
			uVar2 = *(uint *)(this.controlsBtn + 0xb4);
			uVar1 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar1,this,uRam0056c43c,0);
			UnityEngine.Events.UnityEvent.ctor(uVar2,uVar1,0);
			uVar2 = *(uint *)(this.audioBtn + 0xb4);
			uVar1 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar1,this,uRam0056c438,0);
			UnityEngine.Events.UnityEvent.ctor(uVar2,uVar1,0);
			uVar2 = *(uint *)(this.backBtn + 0xb4);
			uVar1 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar1,this,uRam0056c434,0);
			UnityEngine.Events.UnityEvent.ctor(uVar2,uVar1,0);
			this.aplha = 0x412000003f000000;
			return;
	}

	// wasm func86462 -> ram:81a378f1  [SettingManager::Start]
	private void Start()
	{
			uint uVar1;

			if (cRam006648fe == '\0') {
				unnamed_function_1099(0x55a7d4);
				cRam006648fe = '\x01';
			}
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar1,0,0);
			return;
	}

	// wasm func86463 -> ram:81a3793e  [SettingManager::OnDestroy]
	private void OnDestroy()
	{
			uint uVar1;
			int iVar2;

			if (cRam006648ff == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam006648ff = '\x01';
			}
			uVar1 = unnamed_function_44644(this.audioPanel,0);
			unnamed_function_44686(uVar1,0,0);
			uVar1 = unnamed_function_44644(this.controlsPanel,0);
			unnamed_function_44686(uVar1,1,0);
			iVar2 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar1 = **(uint **)(iVar2 + 0x5c);
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			SoundEffectManager.Start(uVar1,*(uint *)(iVar2 + 0x60),this);
			SettingManager.OpenAudio
								(this,this.controlsText,this.audioText,this);
			return;
	}

	// wasm func86465 -> ram:81a37be1  [SettingManager::OpenControls]
	private void OpenControls()
	{
			uint uVar1;
			int iVar2;

			if (cRam00664900 == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam00664900 = '\x01';
			}
			uVar1 = unnamed_function_44644(this.controlsPanel,0);
			unnamed_function_44686(uVar1,0,0);
			uVar1 = unnamed_function_44644(this.audioPanel,0);
			unnamed_function_44686(uVar1,1,0);
			iVar2 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar1 = **(uint **)(iVar2 + 0x5c);
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			SoundEffectManager.Start(uVar1,*(uint *)(iVar2 + 0x60),this);
			SettingManager.OpenAudio
								(this,this.audioText,this.controlsText,this);
			return;
	}

	// wasm func86464 -> ram:81a379e8  [SettingManager::OpenAudio]
	private void OpenAudio()
	{
		int param_2 = 0; // IL2CPP hidden slot
		int * param_3 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;
			uint uVar3;
			int iVar4;
			byte[] auStack_20 = new byte[8];
			ulong uStack_18;
			byte[] auStack_10 = new byte[8];
			uint uStack_8;
			uint uStack_4;

			if (cRam00664901 == '\0') {
				unnamed_function_1099(0x557db8);
				unnamed_function_1099(0x557de0);
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x56d374);
				unnamed_function_1099(0x56f9cc);
				unnamed_function_1099(0x56f9d0);
				unnamed_function_1099(0x55e864);
				cRam00664901 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e864);
			*(int *)(iVar1 + 0xc) = param_2;
			TMPro.TMP.Text.get_fontSize(param_3,this.startFontSize,0);
			iVar4 = **(int **)(this + 0x20);
			(**(code **)((ulong)*(uint *)(iVar4 + 0x170) * 4))
								(auStack_10,*(int **)(this + 0x20),*(uint *)(iVar4 + 0x174));
			iVar4 = **(int **)(this + 0x20);
			(**(code **)((ulong)*(uint *)(iVar4 + 0x170) * 4))
								(auStack_10,*(int **)(this + 0x20),*(uint *)(iVar4 + 0x174));
			iVar4 = **(int **)(this + 0x20);
			(**(code **)((ulong)*(uint *)(iVar4 + 0x170) * 4))
								(auStack_10,*(int **)(this + 0x20),*(uint *)(iVar4 + 0x174));
			uStack_4 = this.aplha;
			uStack_18 = CONCAT44(uStack_4,uStack_8);
			(**(code **)((ulong)*(uint *)(*param_3 + 0x178) * 4))
								(param_3,auStack_20,*(uint *)(*param_3 + 0x17c));
			*(uint *)(iVar1 + 8) = *(uint *)(*(int *)(iVar1 + 0xc) + 0x148);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.Goto(0,0);
			uVar2 = DG.Tweening.DOTweenModuleUI.DOColor(*(uint *)(iVar1 + 0xc),0x3f800000,0x3f000000,0)
			;
			DG.Tweening.TweenSettingsExtensions.SetEase(uVar2,0x1d,uRam0056d374);
			uVar2 = unnamed_function_95402(uRam00557db8);
			unnamed_function_78188(uVar2,iVar1,uRam0056f9cc,0);
			uVar3 = unnamed_function_95402(uRam00557de0);
			unnamed_function_78211(uVar3,iVar1,uRam0056f9d0,0);
			DG.Tweening.DOTween.ManualUpdate(uVar2,uVar3,0x41480000,0x3f000000,0);
			return;
	}

	// no recovered body in SettingManager.c
	private void Effect(TextMeshProUGUI currentText, TextMeshProUGUI previousText)
	{
		// <no recovered body>
	}

	// wasm func86466 -> ram:81a37c8b  [SettingManager::.ctor]
	public SettingManager()
	{
			int iVar1;
			int iVar2;
			uint uVar3;

			if (cRam00664902 == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam00664902 = '\x01';
			}
			iVar2 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar3 = **(uint **)(iVar2 + 0x5c);
			iVar1 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			SoundEffectManager.Start(uVar3,*(uint *)(iVar1 + 0x60),iVar2);
			uVar3 = unnamed_function_44644(this,0);
			unnamed_function_44686(uVar3,0,0);
			return;
	}

	// no recovered body in SettingManager.c
	private void _Start_b__10_0()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86467 -> ram:81a37d0e  [SettingManager+<>c__DisplayClass14_0::<Effect>b__0]
	void SettingManager___c__DisplayClass14_0__Effect_b__0(int param_1, uint param_2)
	{
			*(uint *)(param_1 + 8) = param_2;
			TMPro.TMP.Text.get_fontSize(*(uint *)(param_1 + 0xc),param_2,0);
			return;
	}

	// wasm func86468 -> ram:81a37d26  [SettingManager+<>c__DisplayClass14_0::<Effect>b__1]
	void SettingManager___c__DisplayClass14_0__Effect_b__1(int param_1)
	{
			uint uVar1;
			uint uVar2;
			uint[] auStack_8 = new uint[2];

			if (cRam00664903 == '\0') {
				unnamed_function_1099(0x557a90);
				unnamed_function_1099(0x567f78);
				unnamed_function_1099(0x567f34);
				unnamed_function_1099(0x55b644);
				unnamed_function_1099(0x56af34);
				cRam00664903 = '\x01';
			}
			uVar1 = unnamed_function_65372(*(uint *)(param_1 + 0x10),uRam00567f78);
			*(uint *)(param_1 + 0x18) = uVar1;
			uVar1 = unnamed_function_65372(*(uint *)(param_1 + 0x14),uRam00567f78);
			*(uint *)(param_1 + 0x1c) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy
												(*(uint *)(param_1 + 0x18),uRam00567f34);
			*(uint *)(param_1 + 0x20) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy
												(*(uint *)(param_1 + 0x1c),uRam00567f34);
			*(uint *)(param_1 + 0x24) = uVar1;
			uVar1 = unnamed_function_95402(uRam0055b644);
			InputSystem_Actions.get_asset(uVar1,0);
			*(uint *)(param_1 + 0x28) = uVar1;
			auStack_8[0] = uVar1;
			uVar1 = InputSystem_Actions_UIActions.get_UseItem(auStack_8,0);
			unnamed_function_48914(uVar1,0);
			auStack_8[0] = *(uint *)(param_1 + 0x28);
			uVar1 = InputSystem_Actions_UIActions.get_UseItem(auStack_8,0);
			uVar2 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar2,param_1,uRam0056af34,0);
			UnityEngine.InputSystem.InputAction.remove_canceled(uVar1,uVar2,0);
			return;
	}
}

