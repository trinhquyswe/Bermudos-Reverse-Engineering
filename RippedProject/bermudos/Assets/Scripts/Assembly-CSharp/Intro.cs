// Intro.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Intro.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class Intro : MonoBehaviour
{
	// Fields
	private IntroSO[] introSOList; // 0x10
	private Image introImage; // 0x14
	private Image map; // 0x18
	private TextMeshProUGUI introText; // 0x1C
	private Button nextBtn; // 0x20
	private int introIndex; // 0x24
	private TMPWriter tmpWriter; // 0x28

	// Methods

	// wasm func86442 -> ram:81a369e4  [Intro::Awake]
	private void Awake()
	{
			uint uVar1;
			uint uVar2;

			if (cRam006648ed == '\0') {
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x56a754);
				unnamed_function_1099(0x56a758);
				unnamed_function_1099(0x559830);
				unnamed_function_1099(0x55cef8);
				unnamed_function_1099(0x566818);
				cRam006648ed = '\x01';
			}
			uVar2 = *(uint *)(this.tmpWriter + 0x34);
			uVar1 = unnamed_function_95402(uRam00559830);
			unnamed_function_71904(uVar1,this,uRam0056a754,0);
			UnityEngine.Events.UnityEvent.Invoke(uVar2,uVar1,uRam00566818);
			uVar2 = *(uint *)(this.nextBtn + 0xb4);
			uVar1 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar1,this,uRam0056a758,0);
			UnityEngine.Events.UnityEvent.AddListener(uVar2,uVar1,0);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar1,0,0);
			return;
	}

	// wasm func86443 -> ram:81a36ac6  [Intro::OnDestroy]
	private void OnDestroy()
	{
			uint uVar1;
			uint uVar2;
			ulong uStack_20;
			uint uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam006648ee == '\0') {
				unnamed_function_1099(0x56a750);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d344);
				unnamed_function_1099(0x56d380);
				cRam006648ee = '\x01';
			}
			uVar1 = unnamed_function_44644(this.map,0);
			unnamed_function_44686(uVar1,1,0);
			uVar1 = unnamed_function_44644(this.map,0);
			uVar1 = UnityEngine.GameObject.AddComponent(uVar1,0);
			uStack_8 = 0x41000000;
			uStack_18 = 0x41000000;
			uStack_10 = 0x4100000041000000;
			uStack_20 = 0x4100000041000000;
			uVar1 = DG.Tweening.ShortcutExtensions.DOLocalRotateQuaternion(uVar1,&uStack_20,0x40200000,0);
			uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar1,1,uRam0056d380);
			uVar2 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar2,this,uRam0056a750,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar1,uVar2,uRam0056d344);
			return;
	}

	// wasm func86444 -> ram:81a36bb9  [Intro::Start]
	private void Start()
	{
			uint uVar1;

			uVar1 = unnamed_function_44644(this.nextBtn,0);
			unnamed_function_44686(uVar1,1,0);
			return;
	}

	// wasm func86445 -> ram:81a36bd0  [Intro::OnFinishWriter]
	private void OnFinishWriter(TMPWriter tmpWriter)
	{
			uint uVar1;
			int iVar2;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam006648ef == '\0') {
				unnamed_function_1099(0x56a75c);
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x55984c);
				unnamed_function_1099(0x575bb0);
				cRam006648ef = '\x01';
			}
			uStack_8 = 0x3f800000;
			uStack_10 = 0x3f8000003f800000;
			iVar2 = **(int **)(this + 0x14);
			uStack_18 = 0x3f800000;
			uStack_20 = 0x3f8000003f800000;
			(**(code **)((ulong)*(uint *)(iVar2 + 0x178) * 4))
								(*(int **)(this + 0x14),&uStack_20,*(uint *)(iVar2 + 0x17c));
			uVar1 = unnamed_function_44644(this.nextBtn,0);
			unnamed_function_44686(uVar1,0,0);
			if (this.introIndex < *(int *)(this.introSOList + 0xc)) {
				unnamed_function_16520
									(this.introImage,
									 *(uint *)
										(*(int *)(this.introSOList + this.introIndex * 4 + 0x10) + 0xc),0);
				if (this.introImage != 0) {
					DG.Tweening.DOTweenModuleUI.DOColor_1(this.introImage,0x3f800000,0x40000000,0);
				}
				iVar2 = **(int **)(this + 0x1c);
				(**(code **)((ulong)*(uint *)(iVar2 + 0x2d0) * 4))
									(*(int **)(this + 0x1c),
									 *(uint *)
										(*(int *)(this.introSOList + this.introIndex * 4 + 0x10) + 0x10),
									 *(uint *)(iVar2 + 0x2d4));
			}
			else {
				if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c4f8);
				}
				UnityEngine.SceneManagement.SceneManager.LoadScene_1(uRam00575bb0,0);
				uVar1 = unnamed_function_95402(uRam0055984c);
				unnamed_function_71914(uVar1,this,uRam0056a75c,0);
				UnityEngine.SceneManagement.SceneManager.LoadFirstScene_Internal(uVar1,0);
			}
			this.introIndex = this.introIndex + 1;
			return;
	}

	// wasm func86446 -> ram:81a36d61  [Intro::OnNextBtnClick]
	private void OnNextBtnClick()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;
			uint[] auStack_8 = new uint[2];

			auStack_8[0] = param_2;
			if (cRam006648f0 == '\0') {
				unnamed_function_1099(0x56a75c);
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x55984c);
				unnamed_function_1099(0x575bb0);
				cRam006648f0 = '\x01';
			}
			uVar1 = UnityEngine.SceneManagement.Scene.IsValid(auStack_8,0);
			iVar2 = System.String.Equals(uVar1,uRam00575bb0,0);
			if ((iVar2 != 0) && (iVar2 = UnityEngine.SceneManagement.Scene.get_name(auStack_8,0), iVar2 != 0)
				 ) {
				iVar2 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				GameManager.TransitionToGame(**(uint **)(iVar2 + 0x5c),0,0);
				uVar1 = unnamed_function_95402(uRam0055984c);
				unnamed_function_71914(uVar1,this,uRam0056a75c,0);
				if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c4f8);
				}
				UnityEngine.SceneManagement.SceneManager.add_sceneLoaded(uVar1,0);
			}
			return;
	}

	// wasm func86447 -> ram:81a36e6c  [Intro::OnSceneLoaded]
	private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
	{
			int iVar1;

			if (cRam006648f1 == '\0') {
				unnamed_function_1099(0x55e1b4);
				cRam006648f1 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e1b4);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86448 -> ram:81a36ea9  [Intro::WaitUntilIntroEnable]
	private IEnumerator WaitUntilIntroEnable()
	{
			uint uVar1;

			if (cRam006648f2 == '\0') {
				unnamed_function_1099(0x559b98);
				cRam006648f2 = '\x01';
			}
			uVar1 = Mono.Security.ASN1Convert.ToOid(uRam00559b98,4);
			this.introSOList = uVar1;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func86449 -> ram:81a36ee5  [Intro::.ctor]
	public Intro()
	{
			uint uVar1;
			int iVar2;
			uint uVar3;

			if (cRam006648f3 == '\0') {
				unnamed_function_1099(0x56a754);
				unnamed_function_1099(0x56a758);
				unnamed_function_1099(0x559830);
				unnamed_function_1099(0x55cef8);
				unnamed_function_1099(0x566810);
				cRam006648f3 = '\x01';
			}
			uVar1 = unnamed_function_44644(this.map,0);
			unnamed_function_44686(uVar1,0,0);
			uVar3 = *(uint *)(this.tmpWriter + 0x34);
			uVar1 = unnamed_function_95402(uRam00559830);
			unnamed_function_71904(uVar1,this,uRam0056a754,0);
			UnityEngine.Events.UnityEvent.ctor(uVar3,uVar1,uRam00566810);
			if (cRam006648f1 == '\0') {
				unnamed_function_1099(0x55e1b4);
				cRam006648f1 = '\x01';
			}
			iVar2 = unnamed_function_95402(uRam0055e1b4);
			*(int *)(iVar2 + 0x10) = this;
			*(uint *)(iVar2 + 8) = 0;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar2,0);
			uVar3 = *(uint *)(this.nextBtn + 0xb4);
			uVar1 = unnamed_function_95402(uRam0055cef8);
			UnityEngine.Events.UnityEventBase.GetValidMethodInfo(uVar1,this,uRam0056a758,0);
			UnityEngine.Events.UnityEvent.ctor(uVar3,uVar1,0);
			UnityEngine.ExcludeFromPresetAttribute.ctor(this.introImage,1,0);
			return;
	}

	// no recovered body in Intro.c
	private void _Start_b__9_0()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86450 -> ram:81a36ff7  [Intro+<WaitUntilIntroEnable>d__13::System.IDisposable.Dispose]
	uint Intro__WaitUntilIntroEnable_d__13_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			uint uVar2;
			int iVar3;
			int *piVar4;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			ulong uStack_8;

			uVar1 = 0;
			if (cRam006648f4 == '\0') {
				unnamed_function_1099(0x55d134);
				cRam006648f4 = '\x01';
			}
			if (*(int *)(param_1 + 8) == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				uVar2 = unnamed_function_95402(uRam0055d134);
				UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime
									(uVar2,0x40000000,0);
				uVar1 = 1;
				*(uint *)(param_1 + 8) = 1;
				*(uint *)(param_1 + 0xc) = uVar2;
			}
			else if (*(int *)(param_1 + 8) == 1) {
				iVar3 = *(int *)(param_1 + 0x10);
				*(uint *)(param_1 + 8) = 0xffffffff;
				piVar4 = *(int **)(iVar3 + 0x14);
				uStack_8 = 0x3f8000003f800000;
				uStack_10 = 0x3f8000003f800000;
				uStack_18 = 0x3f8000003f800000;
				uStack_20 = 0x3f8000003f800000;
				(**(code **)((ulong)*(uint *)(*piVar4 + 0x178) * 4))
									(piVar4,&uStack_20,*(uint *)(*piVar4 + 0x17c));
				Intro.OnFinishWriter(iVar3,piVar4);
			}
			return uVar1;
	}

	// wasm func86451 -> ram:81a370eb  [Intro+<WaitUntilIntroEnable>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void Intro__WaitUntilIntroEnable_d__13_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f48c);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

