// Instruction.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Instruction.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class Instruction : MonoBehaviour
{
	// Fields
	private TextMeshProUGUI instructionText; // 0x10
	private TextMeshProUGUI displayCount; // 0x14

	// Methods

	// wasm func86437 -> ram:81a364d8  [Instruction::Start]
	private void Start()
	{
			uint uVar1;
			int iVar2;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			float fStack_18;
			float fStack_10;
			float fStack_c;
			float fStack_8;

			if (cRam006648e9 == '\0') {
				unnamed_function_1099(0x56d380);
				cRam006648e9 = '\x01';
			}
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (cRam00662a53 == '\0') {
				unnamed_function_1099(0x55d048);
				cRam00662a53 = '\x01';
			}
			iVar2 = *(int *)(iRam0055d048 + 0x5c);
			fStack_18 = *(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x14);
			fStack_c = *(float *)(iVar2 + 0x10) + *(float *)(iVar2 + 0x10);
			fStack_10 = *(float *)(iVar2 + 0xc) + *(float *)(iVar2 + 0xc);
			uStack_20 = CONCAT44(fStack_c,fStack_10);
			fStack_8 = fStack_18;
			UnityEngine.Transform.get_localScale(uVar1,&uStack_20,0);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (cRam00662a53 == '\0') {
				unnamed_function_1099(0x55d048);
				cRam00662a53 = '\x01';
			}
			uStack_28 = *(uint *)(*(int *)(iRam0055d048 + 0x5c) + 0x14);
			uStack_30 = *(ulong *)(*(int *)(iRam0055d048 + 0x5c) + 0xc);
			uVar1 = DG.Tweening.ShortcutExtensions.DOLocalRotateQuaternion(uVar1,&uStack_30,0x3e99999a,0);
			DG.Tweening.TweenSettingsExtensions.SetEase(uVar1,0x1b,uRam0056d380);
			return;
	}

	// wasm func86438 -> ram:81a365fc  [Instruction::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam006648ea == '\0') {
				unnamed_function_1099(0x557b40);
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x56a718);
				cRam006648ea = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557b40);
			unnamed_function_60359(uVar1,this,uRam0056a718,0);
			StaticEventHandler.add_OnInstructionChanged(uVar1,this);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar1,0,0);
			return;
	}

	// wasm func86440 -> ram:81a36716  [Instruction::OnDestroy]
	private void OnDestroy()
	{
		uint param_2 = 0; // IL2CPP hidden slot
		uint param_3 = 0; // IL2CPP hidden slot
		int param_4 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;
			int *piVar3;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			float fStack_18;
			float fStack_10;
			float fStack_c;
			float fStack_8;
			uint uStack_4;

			uStack_4 = param_3;
			if (cRam006648eb == '\0') {
				unnamed_function_1099(0x56d380);
				unnamed_function_1099(0x56d3e0);
				unnamed_function_1099(0x57185c);
				unnamed_function_1099(0x570a3c);
				cRam006648eb = '\x01';
			}
			if (param_3 == 0xffffffff) {
				uVar1 = unnamed_function_44644(this,0);
				unnamed_function_44686(uVar1,1,0);
				iVar2 = **(int **)(this + 0x10);
				(**(code **)((ulong)*(uint *)(iVar2 + 0x2d0) * 4))
									(*(int **)(this + 0x10),param_2,*(uint *)(iVar2 + 0x2d4));
				iVar2 = **(int **)(this + 0x14);
				(**(code **)((ulong)*(uint *)(iVar2 + 0x2d0) * 4))
									(*(int **)(this + 0x14),uRam00570a3c,*(uint *)(iVar2 + 0x2d4));
			}
			else {
				if (param_3 < 3) {
					uVar1 = System.Linq.Enumerable.Count(this,0);
					if (cRam00662a53 == '\0') {
						unnamed_function_1099(0x55d048);
						cRam00662a53 = '\x01';
					}
					iVar2 = *(int *)(iRam0055d048 + 0x5c);
					fStack_18 = *(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x14);
					fStack_c = *(float *)(iVar2 + 0x10) + *(float *)(iVar2 + 0x10);
					fStack_10 = *(float *)(iVar2 + 0xc) + *(float *)(iVar2 + 0xc);
					uStack_20 = CONCAT44(fStack_c,fStack_10);
					fStack_8 = fStack_18;
					UnityEngine.Transform.get_localScale(uVar1,&uStack_20,0);
					uVar1 = System.Linq.Enumerable.Count(this,0);
					if (cRam00662a53 == '\0') {
						unnamed_function_1099(0x55d048);
						cRam00662a53 = '\x01';
					}
					uStack_28 = *(uint *)(*(int *)(iRam0055d048 + 0x5c) + 0x14);
					uStack_30 = *(ulong *)(*(int *)(iRam0055d048 + 0x5c) + 0xc);
					uVar1 = DG.Tweening.ShortcutExtensions.DOLocalRotateQuaternion(uVar1,&uStack_30,0x3e99999a,0)
					;
					uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar1,0x1b,uRam0056d380);
					DG.Tweening.TweenSettingsExtensions.SetTarget(uVar1,1,uRam0056d3e0);
					uVar1 = unnamed_function_44644(this,0);
					unnamed_function_44686(uVar1,1,0);
					iVar2 = **(int **)(this + 0x10);
					(**(code **)((ulong)*(uint *)(iVar2 + 0x2d0) * 4))
										(*(int **)(this + 0x10),param_2,*(uint *)(iVar2 + 0x2d4));
					uVar1 = UnityEngine.Rendering.AsyncGPUReadbackRequest.GetData(&uStack_4,0);
					piVar3 = *(int **)(this + 0x14);
					uVar1 = Mono.Security.X509.X509Crl.X509CrlEntry.ctor(uVar1,uRam0057185c,0);
					iVar2 = *piVar3;
					(**(code **)((ulong)*(uint *)(iVar2 + 0x2d0) * 4))
										(piVar3,uVar1,*(uint *)(iVar2 + 0x2d4));
				}
				else {
					uVar1 = unnamed_function_44644(this,0);
					unnamed_function_44686(uVar1,0,0);
				}
				if (param_4 == 0) {
					uVar1 = unnamed_function_44644(this,0);
					unnamed_function_44686(uVar1,0,0);
				}
			}
			return;
	}

	// no recovered body in Instruction.c
	private void OnInstructionChanged(string instruction, int displayCount = -1, bool isActive = True)
	{
		// <no recovered body>
	}

	// wasm func86441 -> ram:81a3695a  [Instruction::.ctor]
	public Instruction()
	{
			uint uVar1;

			if (cRam006648ec == '\0') {
				unnamed_function_1099(0x567f64);
				unnamed_function_1099(0x567f74);
				unnamed_function_1099(0x567f78);
				cRam006648ec = '\x01';
			}
			uVar1 = unnamed_function_65372(this,uRam00567f74);
			*(uint *)(this + 0x28) = uVar1;
			uVar1 = unnamed_function_65372(this,uRam00567f78);
			*(uint *)(this + 0x1c) = uVar1;
			uVar1 = unnamed_function_65372(this,uRam00567f64);
			*(uint *)(this + 0x20) = uVar1;
			uVar1 = unnamed_function_44644(uVar1,0);
			unnamed_function_44686(uVar1,0,0);
			UnityEngine.ExcludeFromPresetAttribute.ctor(this.displayCount,0,0);
			return;
	}
}

