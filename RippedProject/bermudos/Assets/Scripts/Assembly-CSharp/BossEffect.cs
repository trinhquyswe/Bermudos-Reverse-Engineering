// BossEffect.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in BossEffect.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class BossEffect : Effect
{
	// Fields
	public bool isPhase2; // 0x3C
	private Animator animator; // 0x40
	private PoiseEvent poiseEvent; // 0x44

	// Methods

	// wasm func87014 -> ram:81a4e970  [BossEffect::Awake]
	private void Awake()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664ad6 == '\0') {
				unnamed_function_1099(0x557b08);
				unnamed_function_1099(0x567890);
				cRam00664ad6 = '\x01';
			}
			iVar7 = this.poiseEvent;
			uVar5 = unnamed_function_95402(uRam00557b08);
			unnamed_function_60334(uVar5,this,uRam00567890,0);
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

	// wasm func87015 -> ram:81a4ea3b  [BossEffect::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664ad7 == '\0') {
				unnamed_function_1099(0x557b08);
				unnamed_function_1099(0x567890);
				cRam00664ad7 = '\x01';
			}
			iVar7 = this.poiseEvent;
			uVar5 = unnamed_function_95402(uRam00557b08);
			unnamed_function_60334(uVar5,this,uRam00567890,0);
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

	// no recovered body in BossEffect.c
	private void OnDisable()
	{
		// <no recovered body>
	}

	// wasm func86838 -> ram:81a47150  [BossEffect::PoiseEvent_onPoiseEvent]
	private void PoiseEvent_onPoiseEvent(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
	{
			float fVar1;
			float fVar2;
			float fVar3;
			uint uVar4;
			int iVar5;
			float fVar6;
			float fVar7;
			float fVar8;
			float fVar9;
			float fVar10;
			float *pfVar11;
			float fStack_10;
			float fStack_c;
			float fStack_8;

			uVar4 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar4,0);
			fVar3 = fStack_8;
			fVar2 = fStack_c;
			fVar1 = fStack_10;
			fVar6 = *(float *)(this + 0x2c);
			uVar4 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar4,0);
			fVar7 = poiseEvent[2];
			fVar8 = poiseEvent[1];
			fVar9 = *poiseEvent;
			if (cRam0066482c == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam0066482c = '\x01';
			}
			fVar7 = fStack_8 - fVar7;
			fVar8 = fStack_c - fVar8;
			fVar9 = fStack_10 - fVar9;
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar10 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
			if (1e-05 < fVar10) {
				fVar7 = fVar7 / fVar10;
				fVar8 = fVar8 / fVar10;
				fVar9 = fVar9 / fVar10;
			}
			else {
				if (cRam00664829 == '\0') {
					unnamed_function_1099(0x55d048);
					cRam00664829 = '\x01';
				}
				pfVar11 = *(float **)(iRam0055d048 + 0x5c);
				fVar7 = pfVar11[2];
				fVar8 = pfVar11[1];
				fVar9 = *pfVar11;
			}
			if (cRam00664ad8 == '\0') {
				unnamed_function_1099(0x55d860);
				cRam00664ad8 = '\x01';
			}
			iVar5 = unnamed_function_95402(uRam0055d860);
			*(float *)(iVar5 + 0x1c) = fVar3 + fVar6 * fVar7;
			*(float *)(iVar5 + 0x18) = fVar2 + fVar6 * fVar8;
			*(float *)(iVar5 + 0x14) = fVar1 + fVar6 * fVar9;
			*(int *)(iVar5 + 0x10) = this;
			*(uint *)(iVar5 + 8) = 0;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar5,0);
			return;
	}

	// wasm func87018 -> ram:81a4eb86  [BossEffect::PushBossByWeapon]
	public void PushBossByWeapon(Vector3 playerPosition)
	{
			int iVar1;

			if (cRam00664ad8 == '\0') {
				unnamed_function_1099(0x55d860);
				cRam00664ad8 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055d860);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			*(ulong *)(iVar1 + 0x14) = *playerPosition;
			*(uint *)(iVar1 + 0x1c) = *(uint *)(playerPosition + 1);
			return iVar1;
	}

	// wasm func86844 -> ram:81a47698  [BossEffect::PushEnemyByWeaponCoroutine]
	private IEnumerator PushEnemyByWeaponCoroutine(Vector3 targetPosition)
	{
			byte cVar1;
			uint uVar2;
			int iVar3;

			if (cRam00664ad9 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664ad9 = '\x01';
			}
			cVar1 = this.isPhase2;
			uVar2 = this.animator;
			if (*(int *)(iRam0055c620 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			iVar3 = 0x6c;
			if (cVar1 == '\0') {
				iVar3 = 0x38;
			}
			UnityEngine.Animator.SetTrigger
								(uVar2,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + iVar3),0);
			return;
	}

	// no recovered body in BossEffect.c
	public void OuchEffect()
	{
		// <no recovered body>
	}

	// no recovered body in BossEffect.c
	public BossEffect()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func87017 -> ram:81a4eb51  [BossEffect+<PushEnemyByWeaponCoroutine>d__8::System.Collections.IEnumerator.get_Current]
	void BossEffect__PushEnemyByWeaponCoroutine_d__8_System_Collections_IEnumerator_get_Current(int param_1, uint param_2)
	{
			uint[] auStack_8 = new uint[2];

			auStack_8[0] = *(uint *)(param_1 + 0x34);
			UnityEngine.ParticleSystem.MainModule.set_startLifetime(auStack_8,param_2,0);
			UnityEngine.ParticleSystem.Play(*(uint *)(param_1 + 0x34),0);
			return;
	}

	// wasm func87020 -> ram:81a4ec21  [BossEffect+<PushEnemyByWeaponCoroutine>d__8::System.IDisposable.Dispose]
	uint BossEffect__PushEnemyByWeaponCoroutine_d__8_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			float fVar5;
			float fVar6;
			float fVar7;
			ulong uStack_18;
			ulong uStack_10;
			byte[] auStack_8 = new byte[8];

			uVar2 = 0;
			iVar3 = *(int *)(param_1 + 0x10);
			uVar1 = 0xffffffff;
			iVar4 = *(int *)(param_1 + 8);
			if (iVar4 == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				UnityEngine.RaycastHit2D.op_Implicit(auStack_8,*(uint *)(iVar3 + 0x20),0);
				*(ulong *)(param_1 + 0x28) = 0;
				*(int *)(param_1 + 0x24) = auStack_8._4_4_;
				*(int *)(param_1 + 0x20) = auStack_8._0_4_;
				fVar6 = 0.0;
			}
			else {
				if (iVar4 != 1) {
					if (iVar4 != 2) {
						return 0;
					}
					goto code_r0x81a4ed3f;
				}
				*(uint *)(param_1 + 8) = 0xffffffff;
				fVar6 = *(float *)(param_1 + 0x2c);
			}
			uVar1 = 2;
			if (fVar6 < *(float *)(iVar3 + 0x30)) {
				fVar6 = fVar6 / *(float *)(iVar3 + 0x30);
				fVar7 = fVar6;
				if (1.0 <= fVar6) {
					fVar7 = 1.0;
				}
				fVar5 = 0.0;
				if (0.0 <= fVar6) {
					fVar5 = fVar7;
				}
				uStack_18 = CONCAT44(*(float *)(param_1 + 0x24) +
														 fVar5 * (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24)),
														 *(float *)(param_1 + 0x20) +
														 fVar5 * (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20)));
				uStack_10 = uStack_18;
				UnityEngine.Rigidbody2D.get_rotation(*(uint *)(iVar3 + 0x20),&uStack_18,0);
				fVar7 = *(float *)(param_1 + 0x2c);
				fVar6 = (float)UnityEngine.Time.get_fixedUnscaledDeltaTime(0);
				*(float *)(param_1 + 0x2c) = fVar7 + fVar6;
				uVar1 = 1;
			}
			*(uint *)(param_1 + 0xc) = *(uint *)(iVar3 + 0x28);
			uVar2 = 1;
		code_r0x81a4ed3f:
			*(uint *)(param_1 + 8) = uVar1;
			return uVar2;
	}

	// wasm func87021 -> ram:81a4ed52  [BossEffect+<PushEnemyByWeaponCoroutine>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void BossEffect__PushEnemyByWeaponCoroutine_d__8_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56eb38);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

