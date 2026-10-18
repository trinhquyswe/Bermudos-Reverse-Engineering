// MapTransition.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in MapTransition.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class MapTransition : MonoBehaviour
{
	// Fields
	private Image image; // 0x10
	private TextMeshProUGUI text; // 0x14
	private bool isLoadedMap; // 0x18
	public float transitonTime; // 0x1C

	// Methods

	// no recovered body in MapTransition.c
	private void Awake()
	{
		// <no recovered body>
	}

	// wasm func86496 -> ram:81a39412  [MapTransition::Start]
	private void Start()
	{
			bool bVar1;
			int iVar2;
			uint uVar3;
			int *piVar4;
			int iVar5;

			if (cRam00664912 == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x56ad9c);
				cRam00664912 = '\x01';
			}
			uVar3 = System.Linq.Enumerable.Count(this,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar3,0,0);
			uVar3 = unnamed_function_95402(iRam00559fb4);
			unnamed_function_82700(uVar3,this,uRam0056ad9c,0);
			if (cRam006649aa == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x55c894);
				cRam006649aa = '\x01';
			}
			iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 4);
			while ((piVar4 = (int *)unnamed_function_85160(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
						 (iRam00559fb4 == *piVar4))) {
				iVar5 = System.Net.WebOperation.ctor(*(int *)(iRam0055c894 + 0x5c) + 4,piVar4,iVar2);
				bVar1 = iVar2 == iVar5;
				iVar2 = iVar5;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(piVar4,iRam00559fb4);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86498 -> ram:81a395a9  [MapTransition::OnDestroy]
	private void OnDestroy()
	{
			uint uVar1;
			uint uVar2;
			uint uVar3;

			if (cRam00664913 == '\0') {
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x56ad98);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d374);
				cRam00664913 = '\x01';
			}
			uVar1 = unnamed_function_44644(this.image,0);
			unnamed_function_44686(uVar1,1,0);
			uVar1 = unnamed_function_44644(this.text,0);
			unnamed_function_44686(uVar1,1,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			uVar1 = DG.Tweening.DOTween.To_15(0);
			uVar2 = DG.Tweening.DOTweenModuleUI.DOColor_1
												(this.image,0x3f800000,this.transitonTime * 0.5,0);
			uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar2,4,uRam0056d374);
			uVar2 = DG.Tweening.TweenParams.cctor(uVar1,uVar2,0);
			uVar3 = DG.Tweening.DOTweenModuleUI.DOColor
												(this.text,0x3f800000,this.transitonTime * 0.5,0);
			uVar3 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar3,4,uRam0056d374);
			DG.Tweening.TweenSettingsExtensions.Prepend(uVar2,uVar3,0);
			uVar2 = DG.Tweening.DOTweenModuleUI.DOColor_1
												(this.image,0,this.transitonTime * 0.5,0);
			uVar1 = DG.Tweening.TweenParams.cctor(uVar1,uVar2,0);
			uVar2 = DG.Tweening.DOTweenModuleUI.DOColor
												(this.text,0,this.transitonTime * 0.5,0);
			uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar2,4,uRam0056d374);
			uVar1 = DG.Tweening.TweenSettingsExtensions.Prepend(uVar1,uVar2,0);
			uVar2 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar2,this,uRam0056ad98,0);
			DG.Tweening.TweenSettingsExtensions.PrependInterval(uVar1,uVar2,0);
			return;
	}

	// wasm func86499 -> ram:81a396fe  [MapTransition::OnMapTransition]
	private void OnMapTransition()
	{
			this.transitonTime = 0x3f000000;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// no recovered body in MapTransition.c
	public MapTransition()
	{
		// <no recovered body>
	}

	// wasm func86500 -> ram:81a39715  [MapTransition::<OnMapTransition>b__7_0]
	private void _OnMapTransition_b__7_0()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;

			if (cRam00664914 == '\0') {
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x5762e0);
				unnamed_function_1099(0x57355c);
				unnamed_function_1099(0x576924);
				cRam00664914 = '\x01';
			}
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			if ((*(int *)(**(int **)(iVar2 + 0x5c) + 0x1c) == 2) &&
				 (iVar2 = System.String.Equals
														(*(uint *)(this.image + 0x10),uRam005762e0,0),
				 uVar1 = uRam0057355c, iVar2 != 0)) {
				if (cRam006649de == '\0') {
					unnamed_function_1099(0x55c894);
					cRam006649de = '\x01';
				}
				iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x48);
				if (iVar2 != 0) {
					(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
										(*(uint *)(iVar2 + 0x20),uVar1,0xffffffff,1,*(uint *)(iVar2 + 0x14));
					return;
				}
			}
			else {
				iVar2 = UnityEngine.Component.GetComponents(param_2,uRam00576924,0);
				if ((iVar2 != 0) && (this.text == '\0')) {
					if (cRam00664915 == '\0') {
						unnamed_function_1099(0x55ece8);
						cRam00664915 = '\x01';
					}
					iVar2 = unnamed_function_95402(uRam0055ece8);
					*(uint *)(iVar2 + 0x14) = param_2;
					*(int *)(iVar2 + 0x10) = this;
					*(uint *)(iVar2 + 8) = 0;
					UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar2,0);
					this.text = 1;
				}
			}
			return;
	}
}

