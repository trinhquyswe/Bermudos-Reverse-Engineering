// RestUI.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in RestUI.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class RestUI : MonoBehaviour
{
	// Fields
	private Image restImage; // 0x10
	private TextMeshProUGUI restText; // 0x14

	// Methods

	// no recovered body in RestUI.c
	private void Awake()
	{
		// <no recovered body>
	}

	// wasm func86934 -> ram:81a4bb15  [RestUI::Start]
	private void Start()
	{
			uint uVar1;

			if (cRam00664aa7 == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x56bfd4);
				cRam00664aa7 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00559fb4);
			unnamed_function_82700(uVar1,this,uRam0056bfd4,0);
			StaticEventHandler.CallPressRestEvent(uVar1,0);
			return;
	}

	// wasm func86935 -> ram:81a4bb64  [RestUI::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam00664aa8 == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x56bfd4);
				cRam00664aa8 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00559fb4);
			unnamed_function_82700(uVar1,this,uRam0056bfd4,0);
			StaticEventHandler.add_OnRestInBonfire(uVar1,0);
			return;
	}

	// wasm func86936 -> ram:81a4bbb4  [RestUI::OnDestroy]
	private void OnDestroy()
	{
			uint uVar1;
			uint uVar2;
			uint uVar3;

			if (cRam00664aa9 == '\0') {
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x56bfd0);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d374);
				cRam00664aa9 = '\x01';
			}
			uVar1 = unnamed_function_44644(this.restImage,0);
			unnamed_function_44686(uVar1,1,0);
			uVar1 = unnamed_function_44644(this.restText,0);
			unnamed_function_44686(uVar1,1,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			uVar1 = DG.Tweening.DOTween.To_15(0);
			uVar2 = DG.Tweening.DOTweenModuleUI.DOColor
												(this.restText,0x3f800000,0x3f800000,0);
			uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar2,4,uRam0056d374);
			uVar2 = DG.Tweening.TweenParams.cctor(uVar1,uVar2,0);
			uVar3 = DG.Tweening.DOTweenModuleUI.DOColor_1
												(this.restImage,0x3f19999a,0x3f800000,0);
			uVar3 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar3,4,uRam0056d374);
			DG.Tweening.TweenSettingsExtensions.Prepend(uVar2,uVar3,0);
			uVar2 = DG.Tweening.DOTweenModuleUI.DOColor(this.restText,0,0x3f800000,0);
			uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar2,4,uRam0056d374);
			uVar1 = DG.Tweening.TweenParams.cctor(uVar1,uVar2,0);
			uVar2 = DG.Tweening.DOTweenModuleUI.DOColor_1(this.restImage,0,0x3f800000,0);
			uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar2,4,uRam0056d374);
			uVar1 = DG.Tweening.TweenSettingsExtensions.Prepend(uVar1,uVar2,0);
			uVar2 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar2,this,uRam0056bfd0,0);
			DG.Tweening.TweenSettingsExtensions.PrependInterval(uVar1,uVar2,0);
			return;
	}

	// no recovered body in RestUI.c
	private void ShowRestUI()
	{
		// <no recovered body>
	}

	// no recovered body in RestUI.c
	public RestUI()
	{
		// <no recovered body>
	}

	// wasm func86937 -> ram:81a4bd00  [RestUI::<ShowRestUI>b__6_0]
	private void _ShowRestUI_b__6_0()
	{
			uint uVar1;

			if (cRam00664aaa == '\0') {
				unnamed_function_1099(0x567e18);
				unnamed_function_1099(0x567e34);
				unnamed_function_1099(0x567e70);
				unnamed_function_1099(0x567e9c);
				unnamed_function_1099(0x567efc);
				unnamed_function_1099(0x567f18);
				cRam00664aaa = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e9c);
			this.restImage = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e70);
			this.restText = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567efc);
			*(uint *)(this + 0x18) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e34);
			*(uint *)(this + 0x20) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e18);
			*(uint *)(this + 0x24) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f18);
			*(uint *)(this + 0x1c) = uVar1;
			return;
	}
}

