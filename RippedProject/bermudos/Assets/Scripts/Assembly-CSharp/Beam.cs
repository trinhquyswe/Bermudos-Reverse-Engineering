// Beam.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Beam.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class Beam : MonoBehaviour
{
	// Fields
	private bool isColliding; // 0x10
	private int damageBeam; // 0x14
	private Animator animator; // 0x18
	private LayerMask enemyLayerMask; // 0x1C
	private LayerMask bossLayerMask; // 0x20
	private LayerMask playerLayerMask; // 0x24
	private LayerMask bashAmmoLayerMask; // 0x28
	public float amountScaleY; // 0x2C
	private SoundEffectSO beamSoundEffect; // 0x30
	private SoundEffectSO beamPlayerSoundEffect; // 0x34

	// Methods

	// wasm func86610 -> ram:81a3f0eb  [Beam::Awake]
	private void Awake()
	{
			ulong uVar1;
			uint uVar2;
			uint uVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			ulong uStack_80;
			uint uStack_78;
			uint uStack_70;
			float fStack_6c;
			uint uStack_68;
			uint[] auStack_60 = new uint[2];
			uint uStack_58;
			ulong uStack_50;
			ulong uStack_48;
			ulong uStack_40;
			ulong uStack_38;
			uint uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			uint uStack_8;

			UnityEngine.Animator.GetAnimatorStateInfo(&uStack_50,this.animator,0,0);
			uStack_8 = uStack_30;
			uStack_10 = uStack_38;
			uStack_18 = uStack_40;
			uStack_20 = uStack_48;
			uVar1 = uStack_20;
			uStack_28 = uStack_50;
			uStack_20._4_4_ = (float)((ulong)uStack_48 >> 0x20);
			fVar5 = uStack_20._4_4_;
			uStack_20 = uVar1;
			uVar2 = System.Linq.Enumerable.Count(this,0);
			uVar3 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Transform.set_localRotation(auStack_60,uVar3,0);
			fVar4 = this.amountScaleY;
			uVar3 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Transform.set_localRotation(auStack_60,uVar3,0);
			uStack_68 = uStack_58;
			uStack_78 = uStack_58;
			fVar5 = fVar5 / 1.5;
			fVar6 = fVar5;
			if (1.0 <= fVar5) {
				fVar6 = 1.0;
			}
			fStack_6c = 0.0;
			if (0.0 <= fVar5) {
				fStack_6c = fVar6 + 0.0;
			}
			fStack_6c = fVar4 * fStack_6c;
			uStack_70 = auStack_60[0];
			uStack_80 = CONCAT44(fStack_6c,auStack_60[0]);
			UnityEngine.Transform.get_localScale(uVar2,&uStack_80,0);
			return;
	}

	// wasm func86611 -> ram:81a3f1f5  [Beam::LateUpdate]
	private void LateUpdate()
	{
			uint uVar1;
			uint uVar2;
			uint uVar3;
			int iVar4;
			uint *puVar5;

			if (cRam00664957 == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam00664957 = '\x01';
			}
			uVar3 = this.bashAmmoLayerMask;
			uVar1 = unnamed_function_44644(this,0);
			uVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
			iVar4 = *(int *)(iRam00565d6c + 0x10);
			if ((int)(uVar3 & 1 << (uVar2 & 0x1f)) < 1) {
				if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
					iVar4 = System.Threading.Monitor.Enter_1(iVar4);
				}
				iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
				if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
					iVar4 = System.Threading.Monitor.Enter_1(iVar4);
				}
				puVar5 = (uint *)(this + 0x30);
			}
			else {
				if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
					iVar4 = System.Threading.Monitor.Enter_1(iVar4);
				}
				iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
				if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
					iVar4 = System.Threading.Monitor.Enter_1(iVar4);
				}
				puVar5 = (uint *)(this + 0x34);
			}
			SoundEffectManager.Start(**(uint **)(iVar4 + 0x5c),*puVar5,puVar5);
			return;
	}

	// wasm func86612 -> ram:81a3f2cc  [Beam::Start]
	private void Start()
	{
			uint uVar1;

			if (cRam00664958 == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam00664958 = '\x01';
			}
			uVar1 = unnamed_function_44644(this,0);
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			unnamed_function_44782(uVar1,0);
			return;
	}

	// wasm func86613 -> ram:81a3f317  [Beam::EyeAttackEnd]
	public void EyeAttackEnd()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			uint uVar6;
			uint uVar7;
			uint uVar8;
			ulong uStack_40;
			uint uStack_38;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664959 == '\0') {
				unnamed_function_1099(0x567e34);
				unnamed_function_1099(0x567e84);
				unnamed_function_1099(0x567ef4);
				unnamed_function_1099(0x567f04);
				unnamed_function_1099(0x567fe8);
				cRam00664959 = '\x01';
			}
			if (this.isColliding == '\0') {
				uVar5 = this.playerLayerMask;
				uVar1 = unnamed_function_44644(param_2,0);
				uVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
				if (0 < (int)(uVar5 & 1 << (uVar2 & 0x1f))) {
					uVar1 = UnityEngine.GameObject.get_activeInHierarchy(param_2,uRam00567ef4);
					uVar6 = System.Linq.Enumerable.Count(this,0);
					UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar6,0);
					uStack_18 = uStack_10;
					uStack_20 = uStack_10;
					PlayerEffect.DamageFlashCoroutine(uVar1,&uStack_20,0);
					uVar1 = UnityEngine.GameObject.get_activeInHierarchy(param_2,uRam00567ef4);
					iVar3 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
					uVar8 = *(uint *)(iVar3 + 0x18);
					iVar3 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
					uVar7 = *(uint *)(iVar3 + 0x1c);
					uVar6 = unnamed_function_65381(param_2,uRam00567fe8);
					PlayerEffect.Update(uVar1,uVar8,uVar7,uVar6,0);
				}
				iVar3 = UnityEngine.GameObject.get_activeInHierarchy(param_2,uRam00567f04);
				if (iVar3 != 0) {
					ReceiveDamage.Awake(iVar3,this.damageBeam,0);
				}
				uVar5 = this.enemyLayerMask;
				uVar1 = unnamed_function_44644(param_2,0);
				uVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
				if (0 < (int)(uVar5 & 1 << (uVar2 & 0x1f))) {
					iVar3 = UnityEngine.GameObject.get_activeInHierarchy(param_2,uRam00567e84);
					if (iVar3 != 0) {
						uVar1 = System.Linq.Enumerable.Count(this,0);
						UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar1,0);
						uStack_28 = uStack_8;
						uStack_30 = uStack_10;
						EnemyEffect.DamageFlashCoroutine(iVar3,&uStack_30,0);
					}
					iVar3 = UnityEngine.GameObject.get_activeInHierarchy(param_2,uRam00567e84);
					if (iVar3 != 0) {
						iVar4 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
						uVar6 = *(uint *)(iVar4 + 0x18);
						iVar4 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
						uVar8 = *(uint *)(iVar4 + 0x1c);
						uVar1 = unnamed_function_65381(param_2,uRam00567fe8);
						EnemyEffect.Start(iVar3,uVar6,uVar8,uVar1,0);
					}
				}
				uVar5 = this.bossLayerMask;
				uVar1 = unnamed_function_44644(param_2,0);
				uVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
				if (0 < (int)(uVar5 & 1 << (uVar2 & 0x1f))) {
					iVar3 = UnityEngine.GameObject.get_activeInHierarchy(param_2,uRam00567e34);
					if (iVar3 != 0) {
						uVar1 = System.Linq.Enumerable.Count(this,0);
						UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar1,0);
						uStack_38 = uStack_8;
						uStack_40 = uStack_10;
						BossEffect.PoiseEvent_onPoiseEvent(iVar3,&uStack_40,0);
					}
					iVar3 = UnityEngine.GameObject.get_activeInHierarchy(param_2,uRam00567e34);
					if (iVar3 != 0) {
						BossEffect.PushEnemyByWeaponCoroutine(iVar3,0);
					}
				}
				this.isColliding = 1;
			}
			return;
	}

	// wasm func86614 -> ram:81a3f558  [Beam::OnTriggerEnter2D]
	private void OnTriggerEnter2D(Collider2D collision)
	{
			this.damageBeam = 0x14;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func86615 -> ram:81a3f56a  [Beam::.ctor]
	public Beam()
	{
			uint uVar1;

			if (cRam0066495a == '\0') {
				unnamed_function_1099(0x567e30);
				unnamed_function_1099(0x567ed8);
				unnamed_function_1099(0x567f60);
				cRam0066495a = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e30);
			this.isColliding = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f60);
			this.damageBeam = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ed8);
			this.bossLayerMask = uVar1;
			return;
	}
}

