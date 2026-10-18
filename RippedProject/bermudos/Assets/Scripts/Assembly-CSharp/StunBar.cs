// StunBar.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in StunBar.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class StunBar : MonoBehaviour
{
	// Fields
	private PoiseEvent poiseEvent; // 0x10
	private Slider stunBar; // 0x14
	private float stunTime; // 0x18

	// Methods

	// wasm func87102 -> ram:81a52db0  [StunBar::Awake]
	private void Awake()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664b0c == '\0') {
				unnamed_function_1099(0x557b08);
				unnamed_function_1099(0x56cbd0);
				cRam00664b0c = '\x01';
			}
			iVar7 = this.poiseEvent;
			uVar5 = unnamed_function_95402(uRam00557b08);
			unnamed_function_60334(uVar5,this,uRam0056cbd0,0);
			if (cRam00664b44 == '\0') {
				unnamed_function_1099(0x557b08);
				cRam00664b44 = '\x01';
			}
			iVar3 = *(int *)(iVar7 + 0x10);
			while( true ) {
				iVar4 = 0;
				iVar6 = unnamed_function_85158(iVar3,uVar5,0);
				uVar2 = uRam00557b08;
				if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557b08), iVar4 == 0)) break;
				iVar4 = System.Net.WebOperation.ctor(iVar7 + 0x10,iVar4,iVar3);
				bVar1 = iVar3 == iVar4;
				iVar3 = iVar4;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar6,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87103 -> ram:81a52e7b  [StunBar::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664b0d == '\0') {
				unnamed_function_1099(0x557b08);
				unnamed_function_1099(0x56cbd0);
				cRam00664b0d = '\x01';
			}
			iVar7 = this.poiseEvent;
			uVar5 = unnamed_function_95402(uRam00557b08);
			unnamed_function_60334(uVar5,this,uRam0056cbd0,0);
			if (cRam00664b45 == '\0') {
				unnamed_function_1099(0x557b08);
				cRam00664b45 = '\x01';
			}
			iVar3 = *(int *)(iVar7 + 0x10);
			while( true ) {
				iVar4 = 0;
				iVar6 = unnamed_function_85160(iVar3,uVar5,0);
				uVar2 = uRam00557b08;
				if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557b08), iVar4 == 0)) break;
				iVar4 = System.Net.WebOperation.ctor(iVar7 + 0x10,iVar4,iVar3);
				bVar1 = iVar3 == iVar4;
				iVar3 = iVar4;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar6,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87104 -> ram:81a52f45  [StunBar::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;

			if (*(float *)(param_2 + 0xc) <= 0.0) {
				uVar1 = *(uint *)(param_2 + 0x14);
				this.stunTime = uVar1;
				UnityEngine.UI.Slider.get_maxValue(this.stunBar,uVar1,0);
				iVar2 = **(int **)(this + 0x14);
				(**(code **)((ulong)*(uint *)(iVar2 + 0x238) * 4))
									(*(int **)(this + 0x14),this.stunTime,
									 *(uint *)(iVar2 + 0x23c));
			}
			return;
	}

	// wasm func87105 -> ram:81a52f91  [StunBar::PoiseEvent_OnPoise]
	private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
	{
			float fVar1;
			float fVar2;
			int *piVar3;
			int iVar4;

			iVar4 = **(int **)(this + 0x14);
			fVar1 = (float)(**(code **)((ulong)*(uint *)(iVar4 + 0x230) * 4))
															 (*(int **)(this + 0x14),*(uint *)(iVar4 + 0x234));
			if (0.0 < fVar1) {
				piVar3 = *(int **)(this + 0x14);
				fVar1 = (float)(**(code **)((ulong)*(uint *)(*piVar3 + 0x230) * 4))
																 (piVar3,*(uint *)(*piVar3 + 0x234));
				fVar2 = (float)UnityEngine.Time.get_time(0);
				(**(code **)((ulong)*(uint *)(*piVar3 + 0x238) * 4))
									(piVar3,fVar1 - fVar2,*(uint *)(*piVar3 + 0x23c));
			}
			return;
	}

	// no recovered body in StunBar.c
	private void Update()
	{
		// <no recovered body>
	}

	// wasm func87106 -> ram:81a52ff0  [StunBar::.ctor]
	public StunBar()
	{
			uint uVar1;

			if (cRam00664b0e == '\0') {
				unnamed_function_1099(0x567f68);
				cRam00664b0e = '\x01';
			}
			uVar1 = unnamed_function_65372(this,uRam00567f68);
			this.stunTime = uVar1;
			return;
	}
}

