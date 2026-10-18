// HealthBar.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in HealthBar.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class HealthBar : MonoBehaviour
{
	// Fields
	private Slider healthBar; // 0x10
	private Slider easeHealthBar; // 0x14
	private float lerpSpeed; // 0x18

	// Methods

	// wasm func87159 -> ram:81a551f5  [HealthBar::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664b3e == '\0') {
				unnamed_function_1099(0x557acc);
				unnamed_function_1099(0x569e38);
				unnamed_function_1099(0x565d78);
				cRam00664b3e = '\x01';
			}
			iVar7 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
				iVar7 = System.Threading.Monitor.Enter_1(iVar7);
			}
			iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 8);
			if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
				iVar7 = System.Threading.Monitor.Enter_1(iVar7);
			}
			iVar7 = *(int *)(*(int *)(**(int **)(iVar7 + 0x5c) + 0x10) + 0x2c);
			uVar5 = unnamed_function_95402(uRam00557acc);
			unnamed_function_60334(uVar5,this,uRam00569e38,0);
			if (cRam00664b40 == '\0') {
				unnamed_function_1099(0x557acc);
				cRam00664b40 = '\x01';
			}
			iVar4 = *(int *)(iVar7 + 0x10);
			while( true ) {
				iVar3 = 0;
				iVar6 = unnamed_function_85160(iVar4,uVar5,0);
				uVar2 = uRam00557acc;
				if ((iVar6 != 0) && (iVar3 = unnamed_function_1112(iVar6,uRam00557acc), iVar3 == 0)) break;
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

	// no recovered body in HealthBar.c
	private void OnDisable()
	{
		// <no recovered body>
	}

	// no recovered body in HealthBar.c
	private void HealthEvent_OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
	{
		// <no recovered body>
	}

	// no recovered body in HealthBar.c
	private void Update()
	{
		// <no recovered body>
	}

	// wasm func86939 -> ram:81a4be86  [HealthBar::.ctor]
	public HealthBar()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			int iVar5;

			if (cRam00664b3f == '\0') {
				unnamed_function_1099(0x557acc);
				cRam00664b3f = '\x01';
			}
			iVar3 = this.healthBar;
			while( true ) {
				iVar4 = 0;
				iVar5 = unnamed_function_85158(iVar3,param_2,0);
				uVar2 = uRam00557acc;
				if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557acc), iVar4 == 0)) break;
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

