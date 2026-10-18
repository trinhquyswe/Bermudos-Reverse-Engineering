// BossHealthBar.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in BossHealthBar.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class BossHealthBar : MonoBehaviour
{
	// Fields
	private Slider healthBar; // 0x10
	private Slider easeHealthBar; // 0x14
	private float lerpSpeed; // 0x18
	private HealthEvent healthEvent; // 0x1C

	// Methods

	// wasm func87139 -> ram:81a54414  [BossHealthBar::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664b2b == '\0') {
				unnamed_function_1099(0x557a2c);
				unnamed_function_1099(0x557acc);
				unnamed_function_1099(0x567894);
				unnamed_function_1099(0x567898);
				unnamed_function_1099(0x55be2c);
				cRam00664b2b = '\x01';
			}
			uVar5 = unnamed_function_95402(uRam00557a2c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar5,this,uRam00567898,0);
			StaticEventHandler.add_OnBossChanged(uVar5,0);
			uVar5 = this.healthEvent;
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar6 = UnityEngine.Camera.get_targetTexture(uVar5,0,0);
			if (iVar6 != 0) {
				iVar6 = this.healthEvent;
				uVar5 = unnamed_function_95402(uRam00557acc);
				unnamed_function_60334(uVar5,this,uRam00567894,0);
				if (cRam00664b40 == '\0') {
					unnamed_function_1099(0x557acc);
					cRam00664b40 = '\x01';
				}
				iVar3 = *(int *)(iVar6 + 0x10);
				do {
					iVar4 = 0;
					iVar7 = unnamed_function_85160(iVar3,uVar5,0);
					uVar2 = uRam00557acc;
					if ((iVar7 != 0) && (iVar4 = unnamed_function_1112(iVar7,uRam00557acc), iVar4 == 0)) {
						unnamed_function_1116(iVar7,uVar2);
						do {
							halt_trap();
						} while( true );
					}
					iVar4 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar4,iVar3);
					bVar1 = iVar3 != iVar4;
					iVar3 = iVar4;
				} while (bVar1);
			}
			return;
	}

	// wasm func87140 -> ram:81a54548  [BossHealthBar::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664b2c == '\0') {
				unnamed_function_1099(0x557acc);
				unnamed_function_1099(0x567894);
				cRam00664b2c = '\x01';
			}
			iVar7 = *(int *)(*(int *)(param_2 + 8) + 0x10);
			this.healthEvent = iVar7;
			uVar5 = unnamed_function_95402(uRam00557acc);
			unnamed_function_60334(uVar5,this,uRam00567894,0);
			if (cRam00664b3f == '\0') {
				unnamed_function_1099(0x557acc);
				cRam00664b3f = '\x01';
			}
			iVar3 = *(int *)(iVar7 + 0x10);
			while( true ) {
				iVar4 = 0;
				iVar6 = unnamed_function_85158(iVar3,uVar5,0);
				uVar2 = uRam00557acc;
				if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557acc), iVar4 == 0)) break;
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

	// no recovered body in BossHealthBar.c
	private void StaticEventHandler_OnBossChanged(OnBossChangedEventArgs onBossChangedEventArgs)
	{
		// <no recovered body>
	}

	// no recovered body in BossHealthBar.c
	private void HealthEvent_OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
	{
		// <no recovered body>
	}

	// no recovered body in BossHealthBar.c
	private void Update()
	{
		// <no recovered body>
	}

	// wasm func87144 -> ram:81a54703  [BossHealthBar::.ctor]
	public BossHealthBar()
	{
			uint uVar1;

			if (cRam00664b2d == '\0') {
				unnamed_function_1099(0x567e70);
				unnamed_function_1099(0x567e74);
				unnamed_function_1099(0x567ef0);
				cRam00664b2d = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e70);
			this.healthBar = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ef0);
			this.easeHealthBar = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e74);
			this.lerpSpeed = uVar1;
			return;
	}
}

