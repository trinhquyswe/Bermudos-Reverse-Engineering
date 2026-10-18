// ChatController.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in ChatController.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class ChatController : MonoBehaviour
{
	// Fields
	public TMP_InputField ChatInputField; // 0x10
	public TMP_Text ChatDisplayOutput; // 0x14
	public Scrollbar ChatScrollbar; // 0x18

	// Methods

	// wasm func86173 -> ram:81a23400  [ChatController::OnEnable]
	private void OnEnable()
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664841 == '\0') {
				unnamed_function_1099(0x567b4c);
				unnamed_function_1099(0x55982c);
				unnamed_function_1099(0x566800);
				cRam00664841 = '\x01';
			}
			uVar2 = *(uint *)(this.ChatInputField + 300);
			uVar1 = unnamed_function_95402(uRam0055982c);
			unnamed_function_71904(uVar1,this,uRam00567b4c,0);
			UnityEngine.Events.UnityEvent.Invoke(uVar2,uVar1,uRam00566800);
			return;
	}

	// wasm func86174 -> ram:81a2346d  [ChatController::OnDisable]
	private void OnDisable()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;
			uint uVar3;
			int *piVar4;
			int iVar5;
			uint uStack_c;
			ulong uStack_8;

			if (cRam00664842 == '\0') {
				unnamed_function_1099(0x55a984);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x559cf4);
				unnamed_function_1099(0x55c8d8);
				unnamed_function_1099(0x570ae4);
				unnamed_function_1099(0x571d48);
				unnamed_function_1099(0x57aef0);
				unnamed_function_1099(0x571c5c);
				unnamed_function_1099(0x5796c8);
				cRam00664842 = '\x01';
			}
			TMPro.TMP.InputField.get_text
								(this.ChatInputField,**(uint **)(iRam0055c8d8 + 0x5c),0);
			if (*(int *)(iRam0055a984 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a984);
			}
			uStack_8 = unnamed_function_82222(0);
			iVar1 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,8);
			*(uint *)(iVar1 + 0x10) = uRam005796c8;
			uStack_c = System.DateTime.GetHashCode(&uStack_8,0);
			uVar2 = System.Int32.GetHashCode(&uStack_c,uRam0057aef0,0);
			*(uint *)(iVar1 + 0x14) = uVar2;
			*(uint *)(iVar1 + 0x18) = uRam00571c5c;
			uStack_c = System.DateTime.get_Millisecond(&uStack_8,0);
			uVar2 = System.Int32.GetHashCode(&uStack_c,uRam0057aef0,0);
			*(uint *)(iVar1 + 0x1c) = uVar2;
			*(uint *)(iVar1 + 0x20) = uRam00571c5c;
			uStack_c = System.DateTime.get_Month(&uStack_8,0);
			uVar2 = System.Int32.GetHashCode(&uStack_c,uRam0057aef0,0);
			*(uint *)(iVar1 + 0x24) = uVar2;
			uVar2 = uRam00571d48;
			*(uint *)(iVar1 + 0x2c) = param_2;
			*(uint *)(iVar1 + 0x28) = uVar2;
			uVar2 = UnityEngine.Object.get_name(iVar1,0);
			uVar3 = this.ChatDisplayOutput;
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar1 = UnityEngine.Camera.get_targetTexture(uVar3,0,0);
			if (iVar1 != 0) {
				iVar1 = **(int **)(this + 0x14);
				uVar3 = (**(code **)((ulong)*(uint *)(iVar1 + 0x2c8) * 4))
													(*(int **)(this + 0x14),*(uint *)(iVar1 + 0x2cc));
				iVar1 = System.String.Equals(uVar3,**(uint **)(iRam0055c8d8 + 0x5c),0);
				piVar4 = *(int **)(this + 0x14);
				iVar5 = *piVar4;
				if (iVar1 == 0) {
					uVar3 = (**(code **)((ulong)*(uint *)(iVar5 + 0x2c8) * 4))
														(piVar4,*(uint *)(iVar5 + 0x2cc));
					uVar2 = unnamed_function_81504(uVar3,uRam00570ae4,uVar2,0);
					(**(code **)((ulong)*(uint *)(*piVar4 + 0x2d0) * 4))
										(piVar4,uVar2,*(uint *)(*piVar4 + 0x2d4));
				}
				else {
					(**(code **)((ulong)*(uint *)(iVar5 + 0x2d0) * 4))
										(piVar4,uVar2,*(uint *)(iVar5 + 0x2d4));
				}
			}
			TMPro.TMP.InputField.Validate(this.ChatInputField,0);
			UnityEngine.UI.Scrollbar.get_value(this.ChatScrollbar,0,0);
			return;
	}

	// no recovered body in ChatController.c
	private void AddToChatOutput(string newText)
	{
		// <no recovered body>
	}

	// wasm func86175 -> ram:81a236c1  [ChatController::.ctor]
	public ChatController()
	{
			uint uVar1;
			uint uVar2;
			int *piVar3;
			int iVar4;
			uint uStack_4;

			if (cRam00664843 == '\0') {
				unnamed_function_1099(0x5771f4);
				unnamed_function_1099(0x570c18);
				unnamed_function_1099(0x574364);
				cRam00664843 = '\x01';
			}
			uStack_4 = 0;
			piVar3 = *(int **)(this + 0x10);
			uVar1 = uRam00574364;
			if (-1 < *(int *)(this.ChatScrollbar + 0xcc)) {
				uStack_4 = *(uint *)(this.ChatDisplayOutput + 0xcc);
				uVar1 = UnityEngine.Rendering.AsyncGPUReadbackRequest.GetData(&uStack_4,0);
				uStack_4 = *(uint *)(this.ChatScrollbar + 0xcc);
				uVar2 = UnityEngine.Rendering.AsyncGPUReadbackRequest.GetData(&uStack_4,0);
				uVar1 = System.Int32.ToString_1(uRam005771f4,uVar1,uRam00570c18,uVar2,0);
			}
			iVar4 = *piVar3;
			(**(code **)((ulong)*(uint *)(iVar4 + 0x2d0) * 4))
								(piVar3,uVar1,*(uint *)(iVar4 + 0x2d4));
			return;
	}
}

