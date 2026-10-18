// PlayerEffect.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in PlayerEffect.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class PlayerEffect : Effect
{
	// Fields
	private Player player; // 0x3C
	private Coroutine pushPlayerByEnemyCoroutine; // 0x40
	public bool isDashing; // 0x44
	private float dashEffectDuration; // 0x48

	// Methods

	// wasm func87036 -> ram:81a4f6df  [PlayerEffect::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam00664ae3 == '\0') {
				unnamed_function_1099(0x56b930);
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x55984c);
				cRam00664ae3 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam0055984c);
			unnamed_function_71914(uVar1,this,uRam0056b930,0);
			if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c4f8);
			}
			UnityEngine.SceneManagement.SceneManager.add_sceneLoaded(uVar1,0);
			return;
	}

	// wasm func87037 -> ram:81a4f74d  [PlayerEffect::OnDisable]
	private void OnDisable()
	{
			if (this.pushPlayerByEnemyCoroutine != 0) {
				UnityEngine.MonoBehaviour.StopCoroutine(this,this.pushPlayerByEnemyCoroutine,0);
			}
			return;
	}

	// wasm func87038 -> ram:81a4f764  [PlayerEffect::OnSceneLoaded]
	private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
	{
			uint uVar1;

			if (cRam00664ae4 == '\0') {
				unnamed_function_1099(0x567ef0);
				unnamed_function_1099(0x567f18);
				cRam00664ae4 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ef0);
			this.player = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f18);
			*(uint *)(this + 0x20) = uVar1;
			return;
	}

	// wasm func87039 -> ram:81a4f7b3  [PlayerEffect::Awake]
	private void Awake()
	{
			if (this.isDashing != '\0') {
				PlayerEffect.PushPlayerByEnemy(this,this);
			}
			return;
	}

	// wasm func86841 -> ram:81a4751f  [PlayerEffect::Update]
	private void Update()
	{
		uint param_2 = 0; // IL2CPP hidden slot
		uint param_3 = 0; // IL2CPP hidden slot
		uint param_4 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;

			uVar1 = unnamed_function_44644(this,0);
			iVar2 = UnityEngine.GameObject.set_layer(uVar1,0);
			if (iVar2 != 0) {
				if (cRam00664ae5 == '\0') {
					unnamed_function_1099(0x55e5f8);
					cRam00664ae5 = '\x01';
				}
				iVar2 = unnamed_function_95402(uRam0055e5f8);
				*(uint *)(iVar2 + 0x18) = this;
				*(uint *)(iVar2 + 8) = 0;
				*(uint *)(iVar2 + 0x1c) = param_3;
				*(uint *)(iVar2 + 0x14) = param_2;
				*(uint *)(iVar2 + 0x10) = param_4;
				UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar2,0);
			}
			return;
	}

	// wasm func87042 -> ram:81a4fa4d  [PlayerEffect::CallDamageFlashEffect]
	public void CallDamageFlashEffect(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
	{
			int iVar1;

			if (cRam00664ae5 == '\0') {
				unnamed_function_1099(0x55e5f8);
				cRam00664ae5 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e5f8);
			*(uint *)(iVar1 + 0x18) = this;
			*(uint *)(iVar1 + 8) = 0;
			*(uint *)(iVar1 + 0x1c) = defaultMaterial;
			*(uint *)(iVar1 + 0x14) = damageFlash;
			*(uint *)(iVar1 + 0x10) = spriteRenderers;
			return iVar1;
	}

	// wasm func86835 -> ram:81a46d70  [PlayerEffect::DamageFlashCoroutine]
	private IEnumerator DamageFlashCoroutine(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
	{
			byte[] auVar1 = new byte[8];
			uint uVar2;
			int iVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			float fVar7;
			ulong uVar8;
			byte[] auStack_8 = new byte[8];

			if (this.pushPlayerByEnemyCoroutine != 0) {
				UnityEngine.MonoBehaviour.StopCoroutine(this,this.pushPlayerByEnemyCoroutine,0);
			}
			uVar2 = unnamed_function_44644(this,0);
			iVar3 = UnityEngine.GameObject.set_layer(uVar2,0);
			if (iVar3 != 0) {
				UnityEngine.RaycastHit2D.op_Implicit(auStack_8,*(uint *)(this + 0x20),0);
				auVar1 = auStack_8;
				fVar4 = *(float *)(this + 0x2c);
				UnityEngine.RaycastHit2D.op_Implicit(auStack_8,*(uint *)(this + 0x20),0);
				uVar8 = *damageFlash;
				if (cRam006634ad == '\0') {
					unnamed_function_1099(0x55bab8);
					cRam006634ad = '\x01';
				}
				fVar5 = auStack_8._4_4_ - (float)((ulong)uVar8 >> 0x20);
				fVar6 = auStack_8._0_4_ - (float)uVar8;
				if (*(int *)(iRam0055bab8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055bab8);
				}
				fVar7 = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
				if (1e-05 < fVar7) {
					fVar5 = fVar5 / fVar7;
					fVar6 = fVar6 / fVar7;
				}
				else {
					if (cRam0066482a == '\0') {
						unnamed_function_1099(0x55d024);
						cRam0066482a = '\x01';
					}
					fVar5 = (*(float **)(iRam0055d024 + 0x5c))[1];
					fVar6 = **(float **)(iRam0055d024 + 0x5c);
				}
				if (cRam00664ae6 == '\0') {
					unnamed_function_1099(0x55e5fc);
					cRam00664ae6 = '\x01';
				}
				iVar3 = unnamed_function_95402(uRam0055e5fc);
				*(uint *)(iVar3 + 0x1c) = 0;
				*(float *)(iVar3 + 0x18) = fVar4 * fVar5 + auVar1._4_4_;
				*(float *)(iVar3 + 0x14) = fVar4 * fVar6 + auVar1._0_4_;
				*(int *)(iVar3 + 0x10) = this;
				*(uint *)(iVar3 + 8) = 0;
				uVar2 = UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar3,0);
				this.pushPlayerByEnemyCoroutine = uVar2;
			}
			return;
	}

	// wasm func87043 -> ram:81a4fa9f  [PlayerEffect::DamagePushEfect]
	public void DamagePushEfect(Vector2 damageSource)
	{
			int iVar1;

			if (cRam00664ae6 == '\0') {
				unnamed_function_1099(0x55e5fc);
				cRam00664ae6 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e5fc);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			*(ulong *)(iVar1 + 0x14) = *damageSource;
			*(uint *)(iVar1 + 0x1c) = *(uint *)(damageSource + 1);
			return iVar1;
	}

	// wasm func87040 -> ram:81a4f7c7  [PlayerEffect::PushPlayerByEnemy]
	private IEnumerator PushPlayerByEnemy(Vector3 targetPosition)
	{
			uint uVar1;
			float fVar2;
			uint uVar3;
			int *piVar4;
			float fVar5;
			int iVar6;
			uint uVar7;
			uint uVar8;
			ulong uStack_40;
			ulong uStack_38;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664ae7 == '\0') {
				unnamed_function_1099(0x567fe8);
				unnamed_function_1099(0x55c000);
				unnamed_function_1099(0x565d64);
				cRam00664ae7 = '\x01';
			}
			uVar1 = unnamed_function_65381(this,uRam00567fe8);
			fVar5 = this.dashEffectDuration;
			if (0.0 < fVar5) {
				fVar2 = (float)UnityEngine.Time.get_time(0);
				this.dashEffectDuration = fVar5 - fVar2;
			}
			else {
				iVar6 = *(int *)(iRam00565d64 + 0x10);
				if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
					iVar6 = System.Threading.Monitor.Enter_1(iVar6);
				}
				iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
				if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
					iVar6 = System.Threading.Monitor.Enter_1(iVar6);
				}
				uVar7 = **(uint **)(iVar6 + 0x5c);
				iVar6 = UnityEngine.MonoBehaviour.InvokeRepeating(&uStack_40);
				uVar8 = *(uint *)(iVar6 + 0x28);
				uVar3 = System.Linq.Enumerable.Count(this.player,0);
				UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar3,0);
				if (cRam006603e8 == '\0') {
					unnamed_function_1099(0x55c148);
					cRam006603e8 = '\x01';
				}
				uStack_38 = (*(ulong **)(iRam0055c148 + 0x5c))[1];
				uStack_40 = **(ulong **)(iRam0055c148 + 0x5c);
				uStack_28 = uStack_8;
				uStack_30 = uStack_10;
				uStack_20 = uStack_40;
				uStack_18 = uStack_38;
				piVar4 = (int *)PoolManager.CreatePool(uVar7,uVar8,&uStack_30,&uStack_40,0);
				if (piVar4 != (int *)0x0) {
					if (((uint)*(byte *)(*piVar4 + 0xb8) < (uint)*(byte *)(iRam0055c000 + 0xb8)) ||
						 (*(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iRam0055c000 + 0xb8) * 4 + -4) !=
							iRam0055c000)) {
						unnamed_function_1116(piVar4,iRam0055c000);
						do {
							halt_trap();
						} while( true );
					}
				}
				uVar3 = unnamed_function_44644(piVar4,0);
				unnamed_function_44686(uVar3,1,0);
				PlayerShadow.DisablePlayerShadow(piVar4,uVar1,&uStack_40);
				this.dashEffectDuration = 0x3d0f5c29;
			}
			return;
	}

	// wasm func87045 -> ram:81a4fb0d  [PlayerEffect::DashShadowPlayerEffect]
	private void DashShadowPlayerEffect()
	{
			uint uVar1;

			this.dashEffectDuration = 0x3d4ccccd;
			if (cRam00664ada == '\0') {
				unnamed_function_1099(0x55d130);
				cRam00664ada = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam0055d130);
			*(uint *)(this + 0x30) = 0x3e800000;
			*(uint *)(this + 0x28) = uVar1;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// no recovered body in PlayerEffect.c
	public PlayerEffect()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func87044 -> ram:81a4faf0  [PlayerEffect+<PushPlayerByEnemy>d__12::System.Collections.IEnumerator.get_Current]
	void PlayerEffect__PushPlayerByEnemy_d__12_System_Collections_IEnumerator_get_Current(uint param_1, uint param_2)
	{
			uint uVar1;

			uVar1 = unnamed_function_44644(param_1,0);
			unnamed_function_44686(uVar1,1,0);
			PlayerShadow.DisablePlayerShadow(param_1,param_2,param_1);
			return;
	}

	// wasm func87046 -> ram:81a4fb62  [PlayerEffect+<DamageFlashCoroutine>d__10::System.IDisposable.Dispose]
	uint PlayerEffect__DamageFlashCoroutine_d__10_System_IDisposable_Dispose(int param_1)
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
			if (cRam00664ae8 == '\0') {
				unnamed_function_1099(0x579c48);
				unnamed_function_1099(0x579c44);
				cRam00664ae8 = '\x01';
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
					goto code_r0x81a4fca1;
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
		code_r0x81a4fca1:
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

	// wasm func87047 -> ram:81a4fd16  [PlayerEffect+<DamageFlashCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void PlayerEffect__DamageFlashCoroutine_d__10_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f714);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87048 -> ram:81a4fd3e  [PlayerEffect+<PushPlayerByEnemy>d__12::System.IDisposable.Dispose]
	uint PlayerEffect__PushPlayerByEnemy_d__12_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			int iVar2;
			uint uVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			ulong uStack_18;
			ulong uStack_10;
			byte[] auStack_8 = new byte[8];

			uVar1 = 0;
			iVar2 = *(int *)(param_1 + 0x10);
			if (*(int *)(param_1 + 8) == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				UnityEngine.RaycastHit2D.op_Implicit(auStack_8,*(uint *)(iVar2 + 0x20),0);
				*(ulong *)(param_1 + 0x28) = 0;
				*(int *)(param_1 + 0x24) = auStack_8._4_4_;
				*(int *)(param_1 + 0x20) = auStack_8._0_4_;
				fVar5 = 0.0;
			}
			else {
				if (*(int *)(param_1 + 8) != 1) {
					return 0;
				}
				*(uint *)(param_1 + 8) = 0xffffffff;
				fVar5 = *(float *)(param_1 + 0x2c);
			}
			if (fVar5 < *(float *)(iVar2 + 0x30)) {
				fVar5 = fVar5 / *(float *)(iVar2 + 0x30);
				fVar6 = fVar5;
				if (1.0 <= fVar5) {
					fVar6 = 1.0;
				}
				fVar4 = 0.0;
				if (0.0 <= fVar5) {
					fVar4 = fVar6;
				}
				uStack_18 = CONCAT44(*(float *)(param_1 + 0x24) +
														 fVar4 * (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24)),
														 *(float *)(param_1 + 0x20) +
														 fVar4 * (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20)));
				uStack_10 = uStack_18;
				UnityEngine.Rigidbody2D.get_rotation(*(uint *)(iVar2 + 0x20),&uStack_18,0);
				fVar6 = *(float *)(param_1 + 0x2c);
				fVar5 = (float)UnityEngine.Time.get_fixedUnscaledDeltaTime(0);
				*(float *)(param_1 + 0x2c) = fVar6 + fVar5;
				uVar3 = *(uint *)(iVar2 + 0x28);
				uVar1 = 1;
				*(uint *)(param_1 + 8) = 1;
				*(uint *)(param_1 + 0xc) = uVar3;
			}
			return uVar1;
	}

	// wasm func87049 -> ram:81a4fe63  [PlayerEffect+<PushPlayerByEnemy>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void PlayerEffect__PushPlayerByEnemy_d__12_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f718);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

