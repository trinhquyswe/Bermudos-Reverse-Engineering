// StaminaBar.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in StaminaBar.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class StaminaBar : MonoBehaviour
{
	// Fields
	private Slider staminaBar; // 0x10
	private Slider easeStaminaBar; // 0x14
	private float lerpSpeed; // 0x18

	// Methods

	// wasm func87174 -> ram:81a5583b  [StaminaBar::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664b4c == '\0') {
				unnamed_function_1099(0x557b10);
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x56c9cc);
				cRam00664b4c = '\x01';
			}
			iVar7 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
				iVar7 = System.Threading.Monitor.Enter_1(iVar7);
			}
			iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 8);
			if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
				iVar7 = System.Threading.Monitor.Enter_1(iVar7);
			}
			iVar7 = *(int *)(*(int *)(**(int **)(iVar7 + 0x5c) + 0x10) + 0x3c);
			uVar5 = unnamed_function_95402(uRam00557b10);
			unnamed_function_60334(uVar5,this,uRam0056c9cc,0);
			if (cRam00664b4e == '\0') {
				unnamed_function_1099(0x557b10);
				cRam00664b4e = '\x01';
			}
			iVar4 = *(int *)(iVar7 + 0x10);
			while( true ) {
				iVar3 = 0;
				iVar6 = unnamed_function_85160(iVar4,uVar5,0);
				uVar2 = uRam00557b10;
				if ((iVar6 != 0) && (iVar3 = unnamed_function_1112(iVar6,uRam00557b10), iVar3 == 0)) break;
				iVar3 = System.Net.WebOperation.ctor(iVar7 + 0x10,iVar3,iVar4);
				bVar1 = iVar4 == iVar3;
				iVar4 = iVar3;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar6,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// no recovered body in StaminaBar.c
	private void OnDisable()
	{
		// <no recovered body>
	}

	// no recovered body in StaminaBar.c
	private void StaminaEvent_OnStaminaChanged(StaminaEvent staminaEvent, StaminaEventArgs staminaEventArgs)
	{
		// <no recovered body>
	}

	// no recovered body in StaminaBar.c
	private void Update()
	{
		// <no recovered body>
	}

	// wasm func87173 -> ram:81a557bb  [StaminaBar::.ctor]
	public StaminaBar()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			int iVar5;

			if (cRam00664b4d == '\0') {
				unnamed_function_1099(0x557b10);
				cRam00664b4d = '\x01';
			}
			iVar3 = this.staminaBar;
			while( true ) {
				iVar4 = 0;
				iVar5 = unnamed_function_85158(iVar3,param_2,0);
				uVar2 = uRam00557b10;
				if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557b10), iVar4 == 0)) break;
				iVar4 = System.Net.WebOperation.ctor(this + 0x10,iVar4,iVar3);
				bVar1 = iVar3 == iVar4;
				iVar3 = iVar4;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar5,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

