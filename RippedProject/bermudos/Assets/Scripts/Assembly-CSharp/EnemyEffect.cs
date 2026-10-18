// EnemyEffect.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in EnemyEffect.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class EnemyEffect : Effect
{
	// Fields
	private PoiseEvent poiseEvent; // 0x3C
	private EnemyMovement enemyMovement; // 0x40
	private Coroutine pushEnemyByAmmoCoroutine; // 0x44

	// Methods

	// wasm func87023 -> ram:81a4ede4  [EnemyEffect::Awake]
	private void Awake()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664adc == '\0') {
				unnamed_function_1099(0x557b08);
				unnamed_function_1099(0x568eb8);
				cRam00664adc = '\x01';
			}
			iVar7 = this.poiseEvent;
			uVar5 = unnamed_function_95402(uRam00557b08);
			unnamed_function_60334(uVar5,this,uRam00568eb8,0);
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

	// wasm func87024 -> ram:81a4eeaf  [EnemyEffect::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664add == '\0') {
				unnamed_function_1099(0x557b08);
				unnamed_function_1099(0x568eb8);
				cRam00664add = '\x01';
			}
			iVar7 = this.poiseEvent;
			uVar5 = unnamed_function_95402(uRam00557b08);
			unnamed_function_60334(uVar5,this,uRam00568eb8,0);
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

	// no recovered body in EnemyEffect.c
	private void OnDisable()
	{
		// <no recovered body>
	}

	// wasm func87025 -> ram:81a4ef79  [EnemyEffect::PoiseEvent_onPoiseEvent]
	private void PoiseEvent_onPoiseEvent(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
	{
			UnityEngine.ParticleSystem.Stop_1(*(uint *)(this + 0x38),0);
			UnityEngine.ParticleSystem.Stop_1(*(uint *)(this + 0x34),0);
			return;
	}

	// wasm func86842 -> ram:81a4758b  [EnemyEffect::Start]
	private void Start()
	{
		uint param_2 = 0; // IL2CPP hidden slot
		uint param_3 = 0; // IL2CPP hidden slot
		uint param_4 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;

			uVar1 = unnamed_function_44644(this,0);
			iVar2 = UnityEngine.GameObject.set_layer(uVar1,0);
			if (iVar2 != 0) {
				if (cRam00664ade == '\0') {
					unnamed_function_1099(0x55ddcc);
					cRam00664ade = '\x01';
				}
				iVar2 = unnamed_function_95402(uRam0055ddcc);
				*(uint *)(iVar2 + 0x18) = this;
				*(uint *)(iVar2 + 8) = 0;
				*(uint *)(iVar2 + 0x1c) = param_3;
				*(uint *)(iVar2 + 0x14) = param_2;
				*(uint *)(iVar2 + 0x10) = param_4;
				UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar2,0);
			}
			return;
	}

	// wasm func87026 -> ram:81a4ef92  [EnemyEffect::CallDamageFlashEffect]
	public void CallDamageFlashEffect(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
	{
			int iVar1;

			if (cRam00664ade == '\0') {
				unnamed_function_1099(0x55ddcc);
				cRam00664ade = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ddcc);
			*(uint *)(iVar1 + 0x18) = this;
			*(uint *)(iVar1 + 8) = 0;
			*(uint *)(iVar1 + 0x1c) = defaultMaterial;
			*(uint *)(iVar1 + 0x14) = damageFlash;
			*(uint *)(iVar1 + 0x10) = spriteRenderers;
			return iVar1;
	}

	// wasm func86837 -> ram:81a46fbe  [EnemyEffect::DamageFlashCoroutine]
	private IEnumerator DamageFlashCoroutine(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
	{
			byte[] auVar1 = new byte[8];
			uint uVar2;
			int iVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			float fVar7;
			byte[] auStack_8 = new byte[8];

			uVar2 = unnamed_function_44644(this,0);
			iVar3 = UnityEngine.GameObject.set_layer(uVar2,0);
			if (iVar3 != 0) {
				UnityEngine.RaycastHit2D.op_Implicit(auStack_8,*(uint *)(this + 0x20),0);
				auVar1 = auStack_8;
				fVar4 = *(float *)(this + 0x2c);
				UnityEngine.RaycastHit2D.op_Implicit(auStack_8,*(uint *)(this + 0x20),0);
				fVar5 = *damageFlash;
				fVar6 = damageFlash[1];
				if (cRam006634ad == '\0') {
					unnamed_function_1099(0x55bab8);
					cRam006634ad = '\x01';
				}
				fVar5 = auStack_8._0_4_ - fVar5;
				fVar6 = auStack_8._4_4_ - fVar6;
				if (*(int *)(iRam0055bab8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055bab8);
				}
				fVar7 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
				if (1e-05 < fVar7) {
					fVar6 = fVar6 / fVar7;
					fVar5 = fVar5 / fVar7;
				}
				else {
					if (cRam0066482a == '\0') {
						unnamed_function_1099(0x55d024);
						cRam0066482a = '\x01';
					}
					fVar6 = (*(float **)(iRam0055d024 + 0x5c))[1];
					fVar5 = **(float **)(iRam0055d024 + 0x5c);
				}
				if (cRam00664adf == '\0') {
					unnamed_function_1099(0x55ddd0);
					cRam00664adf = '\x01';
				}
				iVar3 = unnamed_function_95402(uRam0055ddd0);
				*(uint *)(iVar3 + 0x1c) = 0;
				*(float *)(iVar3 + 0x18) = fVar4 * fVar6 + auVar1._4_4_;
				*(float *)(iVar3 + 0x14) = fVar4 * fVar5 + auVar1._0_4_;
				*(int *)(iVar3 + 0x10) = this;
				*(uint *)(iVar3 + 8) = 0;
				uVar2 = UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar3,0);
				this.pushEnemyByAmmoCoroutine = uVar2;
			}
			return;
	}

	// wasm func87027 -> ram:81a4efe4  [EnemyEffect::DamagePushEfect]
	public void DamagePushEfect(Vector3 ammo)
	{
			int iVar1;

			if (cRam00664adf == '\0') {
				unnamed_function_1099(0x55ddd0);
				cRam00664adf = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ddd0);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			*(ulong *)(iVar1 + 0x14) = *ammo;
			*(uint *)(iVar1 + 0x1c) = *(uint *)(ammo + 1);
			return iVar1;
	}

	// wasm func86918 -> ram:81a4b440  [EnemyEffect::PushEnemyByAmmo]
	private IEnumerator PushEnemyByAmmo(Vector3 targetPosition)
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
			fVar7 = targetPosition[2];
			fVar8 = targetPosition[1];
			fVar9 = *targetPosition;
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
			if (cRam00664ae0 == '\0') {
				unnamed_function_1099(0x55ddd4);
				cRam00664ae0 = '\x01';
			}
			iVar5 = unnamed_function_95402(uRam0055ddd4);
			*(float *)(iVar5 + 0x1c) = fVar3 + fVar6 * fVar7;
			*(float *)(iVar5 + 0x18) = fVar2 + fVar6 * fVar8;
			*(float *)(iVar5 + 0x14) = fVar1 + fVar6 * fVar9;
			*(int *)(iVar5 + 0x10) = this;
			*(uint *)(iVar5 + 8) = 0;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar5,0);
			return;
	}

	// wasm func87028 -> ram:81a4f035  [EnemyEffect::PushEnemyByWeapon]
	public void PushEnemyByWeapon(Vector3 playerPosition)
	{
			int iVar1;

			if (cRam00664ae0 == '\0') {
				unnamed_function_1099(0x55ddd4);
				cRam00664ae0 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ddd4);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			*(ulong *)(iVar1 + 0x14) = *playerPosition;
			*(uint *)(iVar1 + 0x1c) = *(uint *)(playerPosition + 1);
			return iVar1;
	}

	// wasm func86919 -> ram:81a4b5e2  [EnemyEffect::PushEnemyByWeaponCoroutine]
	private IEnumerator PushEnemyByWeaponCoroutine(Vector3 targetPosition)
	{
			UnityEngine.ParticleSystem.Play(*(uint *)(this + 0x38),0);
			return;
	}

	// no recovered body in EnemyEffect.c
	public void BloodEffect()
	{
		// <no recovered body>
	}

	// no recovered body in EnemyEffect.c
	public EnemyEffect()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func87029 -> ram:81a4f087  [EnemyEffect+<DamageFlashCoroutine>d__9::System.IDisposable.Dispose]
	uint EnemyEffect__DamageFlashCoroutine_d__9_System_IDisposable_Dispose(int param_1)
	{
			int iVar1;
			float fVar2;
			uint uVar3;
			int iVar4;
			int iVar5;
			uint uVar6;
			float fVar7;
			float fVar8;
			ulong uStack_10;
			ulong uStack_8;

			fVar7 = 0.0;
			iVar1 = 0;
			if (cRam00664ae1 == '\0') {
				unnamed_function_1099(0x579c48);
				unnamed_function_1099(0x579c44);
				cRam00664ae1 = '\x01';
			}
			iVar4 = *(int *)(param_1 + 0x18);
			iVar5 = *(int *)(param_1 + 8);
			if (iVar5 == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				*(uint *)(param_1 + 0x24) = 0;
				iVar5 = *(int *)(param_1 + 0x10);
				*(int *)(param_1 + 0x20) = iVar5;
			}
			else {
				if (iVar5 == 1) {
					*(uint *)(param_1 + 8) = 0xffffffff;
					fVar7 = *(float *)(param_1 + 0x2c);
					if (1.0 <= fVar7) {
						UnityEngine.Renderer.GetSharedMaterial
											(*(uint *)(param_1 + 0x28),*(uint *)(param_1 + 0x1c),0);
						*(ulong *)(param_1 + 8) = 2;
						return 1;
					}
					goto code_r0x81a4f1c6;
				}
				if (iVar5 != 2) {
					return 0;
				}
				*(uint *)(param_1 + 0x28) = 0;
				*(uint *)(param_1 + 8) = 0xffffffff;
				iVar1 = *(int *)(param_1 + 0x24) + 1;
				*(int *)(param_1 + 0x24) = iVar1;
				iVar5 = *(int *)(param_1 + 0x20);
			}
			if (*(int *)(iVar5 + 0xc) <= iVar1) {
				*(uint *)(param_1 + 0x20) = 0;
				return 0;
			}
			uVar6 = *(uint *)(iVar5 + iVar1 * 4 + 0x10);
			*(uint *)(param_1 + 0x28) = uVar6;
			UnityEngine.Renderer.GetSharedMaterial(uVar6,*(uint *)(param_1 + 0x14),0);
			uVar6 = UnityEngine.Renderer.get_bounds(*(uint *)(param_1 + 0x28),0);
			uStack_8 = *(ulong *)(iVar4 + 0x18);
			uStack_10 = *(ulong *)(iVar4 + 0x10);
			UnityEngine.Material.SetFloat(uVar6,uRam00579c48,&uStack_10,0);
			*(uint *)(param_1 + 0x2c) = 0;
		code_r0x81a4f1c6:
			fVar2 = (float)UnityEngine.Time.get_time(0);
			fVar7 = fVar7 + fVar2 * 10.0;
			*(float *)(param_1 + 0x2c) = fVar7;
			uVar6 = UnityEngine.Renderer.get_bounds(*(uint *)(param_1 + 0x28),0);
			fVar2 = fVar7;
			if (1.0 <= fVar7) {
				fVar2 = 1.0;
			}
			fVar8 = 0.0;
			if (0.0 <= fVar7) {
				fVar8 = fVar2 + 0.0;
			}
			uVar3 = UnityEngine.AnimationCurve.get_length(*(uint *)(iVar4 + 0x24),fVar8,0);
			UnityEngine.Material.SetInt(uVar6,uRam00579c44,uVar3,0);
			*(ulong *)(param_1 + 8) = 1;
			return 1;
	}

	// wasm func87030 -> ram:81a4f23b  [EnemyEffect+<DamageFlashCoroutine>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void EnemyEffect__DamageFlashCoroutine_d__9_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f11c);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87031 -> ram:81a4f263  [EnemyEffect+<PushEnemyByAmmo>d__11::System.IDisposable.Dispose]
	uint EnemyEffect__PushEnemyByAmmo_d__11_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			uint uVar2;
			float fVar3;
			int iVar4;
			int iVar5;
			float fVar6;
			float fVar7;
			float fVar8;
			float fVar9;
			float fVar10;
			float fVar11;
			ulong uStack_28;
			uint uStack_20;
			float fStack_18;
			float fStack_14;
			uint uStack_10;
			byte[] auStack_8 = new byte[8];

			uVar2 = 0;
			iVar4 = *(int *)(param_1 + 0x10);
			uVar1 = 0xffffffff;
			iVar5 = *(int *)(param_1 + 8);
			if (iVar5 == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				UnityEngine.RaycastHit2D.op_Implicit(auStack_8,*(uint *)(iVar4 + 0x20),0);
				*(ulong *)(param_1 + 0x28) = 0;
				*(int *)(param_1 + 0x24) = auStack_8._4_4_;
				*(int *)(param_1 + 0x20) = auStack_8._0_4_;
				fVar3 = 0.0;
			}
			else {
				if (iVar5 != 1) {
					if (iVar5 != 2) {
						return 0;
					}
					goto code_r0x81a4f3d1;
				}
				*(uint *)(param_1 + 8) = 0xffffffff;
				fVar3 = *(float *)(param_1 + 0x2c);
			}
			uVar1 = 2;
			fVar6 = *(float *)(iVar4 + 0x30);
			if (fVar3 < fVar6) {
				fVar7 = *(float *)(param_1 + 0x18);
				fVar8 = *(float *)(param_1 + 0x24);
				fVar9 = *(float *)(param_1 + 0x14);
				fVar10 = *(float *)(param_1 + 0x20);
				UnityEngine.RaycastHit2D.op_Implicit(auStack_8,*(uint *)(iVar4 + 0x20),0);
				iVar5 = UnityEngine.AI.NavMeshAgent.set_updateUpAxis
													(*(uint *)(*(int *)(iVar4 + 0x40) + 0x20),0);
				if (iVar5 != 0) {
					uStack_10 = 0;
					uStack_20 = 0;
					fVar3 = fVar3 / fVar6;
					fVar6 = fVar3;
					if (1.0 <= fVar3) {
						fVar6 = 1.0;
					}
					fVar11 = 0.0;
					if (0.0 <= fVar3) {
						fVar11 = fVar6;
					}
					fStack_14 = (fVar8 + fVar11 * (fVar7 - fVar8)) - auStack_8._4_4_;
					fStack_18 = (fVar10 + fVar11 * (fVar9 - fVar10)) - auStack_8._0_4_;
					uStack_28 = CONCAT44(fStack_14,fStack_18);
					UnityEngine.AI.NavMeshAgent.Warp
										(*(uint *)(*(int *)(iVar4 + 0x40) + 0x20),&uStack_28,0);
				}
				fVar6 = *(float *)(param_1 + 0x2c);
				fVar3 = (float)UnityEngine.Time.get_fixedUnscaledDeltaTime(0);
				*(float *)(param_1 + 0x2c) = fVar6 + fVar3;
				uVar1 = 1;
			}
			*(uint *)(param_1 + 0xc) = *(uint *)(iVar4 + 0x28);
			uVar2 = 1;
		code_r0x81a4f3d1:
			*(uint *)(param_1 + 8) = uVar1;
			return uVar2;
	}

	// wasm func87032 -> ram:81a4f3e4  [EnemyEffect+<PushEnemyByAmmo>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void EnemyEffect__PushEnemyByAmmo_d__11_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f120);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87033 -> ram:81a4f40c  [EnemyEffect+<PushEnemyByWeaponCoroutine>d__13::System.IDisposable.Dispose]
	uint EnemyEffect__PushEnemyByWeaponCoroutine_d__13_System_IDisposable_Dispose(int param_1)
	{
			float fVar1;
			float fVar2;
			float fVar3;
			uint uVar4;
			uint uVar5;
			int iVar6;
			int iVar7;
			float fVar8;
			float fVar9;
			float fVar10;
			float fVar11;
			float fVar12;
			float fVar13;
			float fVar14;
			float fVar15;
			float *pfVar16;
			float fVar17;
			ulong uStack_30;
			float fStack_28;
			float fStack_20;
			float fStack_1c;
			float fStack_18;
			float fStack_10;
			float fStack_c;
			float fStack_8;

			uVar4 = 0;
			iVar6 = *(int *)(param_1 + 0x10);
			uVar5 = 0xffffffff;
			iVar7 = *(int *)(param_1 + 8);
			if (iVar7 == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				UnityEngine.RaycastHit2D.op_Implicit(&fStack_10,*(uint *)(iVar6 + 0x20),0);
				*(ulong *)(param_1 + 0x28) = 0;
				*(float *)(param_1 + 0x24) = fStack_c;
				*(float *)(param_1 + 0x20) = fStack_10;
				fVar17 = 0.0;
			}
			else {
				if (iVar7 != 1) {
					if (iVar7 != 2) {
						return 0;
					}
					goto code_r0x81a4f637;
				}
				*(uint *)(param_1 + 8) = 0xffffffff;
				fVar17 = *(float *)(param_1 + 0x2c);
			}
			uVar5 = 2;
			fVar8 = *(float *)(iVar6 + 0x30);
			if (fVar17 < fVar8) {
				fVar9 = *(float *)(param_1 + 0x18);
				fVar10 = *(float *)(param_1 + 0x24);
				fVar11 = *(float *)(param_1 + 0x1c);
				fVar12 = *(float *)(param_1 + 0x28);
				fVar13 = *(float *)(param_1 + 0x14);
				fVar14 = *(float *)(param_1 + 0x20);
				uVar5 = System.Linq.Enumerable.Count(iVar6,0);
				UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar5,0);
				fVar3 = fStack_8;
				fVar2 = fStack_c;
				fVar1 = fStack_10;
				uVar5 = System.Linq.Enumerable.Count(iVar6,0);
				UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar5,0);
				fVar17 = fVar17 / fVar8;
				fVar8 = fVar17;
				if (1.0 <= fVar17) {
					fVar8 = 1.0;
				}
				fVar15 = 0.0;
				if (0.0 <= fVar17) {
					fVar15 = fVar8;
				}
				fVar12 = fVar12 + fVar15 * (fVar11 - fVar12);
				fVar10 = fVar10 + fVar15 * (fVar9 - fVar10);
				fVar14 = fVar14 + fVar15 * (fVar13 - fVar14);
				if (cRam00664829 == '\0') {
					unnamed_function_1099(0x55d048);
					cRam00664829 = '\x01';
				}
				pfVar16 = *(float **)(iRam0055d048 + 0x5c);
				fVar17 = (fVar14 - fStack_10) - *pfVar16;
				fVar8 = (fVar10 - fStack_c) - pfVar16[1];
				fVar9 = (fVar12 - fStack_8) - pfVar16[2];
				if ((9.9999994e-11 <= fVar17 * fVar17 + fVar8 * fVar8 + fVar9 * fVar9) &&
					 (iVar7 = UnityEngine.AI.NavMeshAgent.set_updateUpAxis
															(*(uint *)(*(int *)(iVar6 + 0x40) + 0x20),0), iVar7 != 0)) {
					fStack_28 = fVar12 - fVar3;
					fStack_1c = fVar10 - fVar2;
					fStack_20 = fVar14 - fVar1;
					uStack_30 = CONCAT44(fStack_1c,fStack_20);
					fStack_18 = fStack_28;
					UnityEngine.AI.NavMeshAgent.Warp
										(*(uint *)(*(int *)(iVar6 + 0x40) + 0x20),&uStack_30,0);
				}
				fVar8 = *(float *)(param_1 + 0x2c);
				fVar17 = (float)UnityEngine.Time.get_fixedUnscaledDeltaTime(0);
				*(float *)(param_1 + 0x2c) = fVar8 + fVar17;
				uVar5 = 1;
			}
			*(uint *)(param_1 + 0xc) = *(uint *)(iVar6 + 0x28);
			uVar4 = 1;
		code_r0x81a4f637:
			*(uint *)(param_1 + 8) = uVar5;
			return uVar4;
	}

	// wasm func87034 -> ram:81a4f64a  [EnemyEffect+<PushEnemyByWeaponCoroutine>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void EnemyEffect__PushEnemyByWeaponCoroutine_d__13_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f124);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87035 -> ram:81a4f671  [EnemyEffect+<PushEnemyByWeaponCoroutine>d__13::System.Collections.IEnumerator.get_Current]
	void EnemyEffect__PushEnemyByWeaponCoroutine_d__13_System_Collections_IEnumerator_get_Current(uint param_1)
	{
			uint uVar1;

			if (cRam00664ae2 == '\0') {
				unnamed_function_1099(0x56b930);
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x55984c);
				cRam00664ae2 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam0055984c);
			unnamed_function_71914(uVar1,param_1,uRam0056b930,0);
			if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c4f8);
			}
			UnityEngine.SceneManagement.SceneManager.LoadFirstScene_Internal(uVar1,0);
			return;
	}
}

