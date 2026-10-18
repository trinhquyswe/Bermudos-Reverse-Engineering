// MeleeSkills.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in MeleeSkills.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class MeleeSkills : MonoBehaviour
{
	// Fields
	private Boss boss; // 0x10
	private Weapon weapon; // 0x14
	public float minDistance; // 0x18
	private LayerMask playerLayer; // 0x1C
	private MovementToPositionEvent movementToPositionEvent; // 0x20
	private ContactFilter2D contactFilter2D; // 0x24
	private Coroutine activeSkillCoroutine; // 0x40
	private WaitForFixedUpdate waitForFixedUpdate; // 0x44
	private SoundEffectSO slashSoundEffect; // 0x48
	public bool isAttacking; // 0x4C
	public float speed; // 0x50
	public float cooldown; // 0x54
	private float previousDistance; // 0x58
	private int count; // 0x5C

	// Methods

	// wasm func86616 -> ram:81a3f5d4  [MeleeSkills::Awake]
	private void Awake()
	{
			this.isAttacking = 0;
			UnityEngine.ContactFilter2D.CheckConsistency(this + 0x24,this.playerLayer,0);
			this.contactFilter2D = 0x101;
			return;
	}

	// wasm func86617 -> ram:81a3f5f6  [MeleeSkills::Start]
	private void Start()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			int iVar5;
			uint uVar6;
			uint uVar7;
			uint uVar8;
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

			if (cRam0066495b == '\0') {
				unnamed_function_1099(0x5599e8);
				unnamed_function_1099(0x567ef4);
				unnamed_function_1099(0x567f04);
				unnamed_function_1099(0x567fe8);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x55bf98);
				unnamed_function_1099(0x565d6c);
				cRam0066495b = '\x01';
			}
			Weapon.Start(this.weapon,0);
			iVar5 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
				iVar5 = System.Threading.Monitor.Enter_1(iVar5);
			}
			iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
			if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
				iVar5 = System.Threading.Monitor.Enter_1(iVar5);
			}
			SoundEffectManager.Start(**(uint **)(iVar5 + 0x5c),this.slashSoundEffect,iVar5);
			iVar5 = Mono.Security.ASN1Convert.ToOid(uRam005599e8,1);
			uVar6 = *(uint *)(this.weapon + 0x14);
			uStack_8 = *(uint *)(this + 0x3c);
			uStack_10 = *(ulong *)(this + 0x34);
			uStack_18 = *(ulong *)(this + 0x2c);
			uStack_20 = this.contactFilter2D;
			if (*(int *)(iRam0055bf98 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bf98);
			}
			uStack_30 = uStack_8;
			uStack_38 = uStack_10;
			uStack_40 = uStack_18;
			uStack_48 = uStack_20;
			iVar2 = unnamed_function_16341(uVar6,&uStack_48,iVar5,0);
			if (0 < iVar2) {
				iVar1 = 0;
				do {
					uVar6 = *(uint *)(iVar5 + iVar1 * 4 + 0x10);
					if (*(int *)(iRam0055be2c + 0x74) == 0) {
						unnamed_function_94848(iRam0055be2c);
					}
					iVar3 = UnityEngine.Camera.get_targetTexture(uVar6,0,0);
					if (iVar3 != 0) {
						iVar3 = UnityEngine.GameObject.get_activeInHierarchy(uVar6,uRam00567f04);
						if (iVar3 != 0) {
							ReceiveDamage.Awake(iVar3,param_2,0);
						}
						iVar3 = UnityEngine.GameObject.get_activeInHierarchy(uVar6,uRam00567ef4);
						if (iVar3 != 0) {
							uVar7 = System.Linq.Enumerable.Count(this,0);
							UnityEngine.Camera.get_farClipPlane(&uStack_20,uVar7,0);
							uStack_28 = uStack_20;
							uStack_50 = uStack_20;
							PlayerEffect.DamageFlashCoroutine(iVar3,&uStack_50,0);
						}
						iVar3 = UnityEngine.GameObject.get_activeInHierarchy(uVar6,uRam00567ef4);
						if (iVar3 != 0) {
							iVar4 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
							uVar7 = *(uint *)(iVar4 + 0x18);
							iVar4 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
							uVar8 = *(uint *)(iVar4 + 0x1c);
							uVar6 = unnamed_function_65381(uVar6,uRam00567fe8);
							PlayerEffect.Update(iVar3,uVar7,uVar8,uVar6,0);
						}
					}
					iVar1 = iVar1 + 1;
				} while (iVar1 != iVar2);
			}
			return;
	}

	// wasm func86618 -> ram:81a3f84f  [MeleeSkills::DealDamage]
	public void DealDamage(int damage)
	{
			int iVar1;
			uint uVar2;

			if (this.activeSkillCoroutine != 0) {
				UnityEngine.MonoBehaviour.StopCoroutine(this,this.activeSkillCoroutine,0);
			}
			if (cRam0066495c == '\0') {
				unnamed_function_1099(0x55e338);
				cRam0066495c = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e338);
			*(uint *)(iVar1 + 0x14) = damage;
			*(int *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			uVar2 = UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			this.activeSkillCoroutine = uVar2;
			return;
	}

	// wasm func86620 -> ram:81a3f8cb  [MeleeSkills::PlayActiveSkill]
	public void PlayActiveSkill(int skill)
	{
			int iVar1;

			if (cRam0066495c == '\0') {
				unnamed_function_1099(0x55e338);
				cRam0066495c = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e338);
			*(uint *)(iVar1 + 0x14) = skill;
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86619 -> ram:81a3f8b4  [MeleeSkills::ActiveSkill]
	private IEnumerator ActiveSkill(int skill)
	{
			if (this.activeSkillCoroutine != 0) {
				UnityEngine.MonoBehaviour.StopCoroutine(this,this.activeSkillCoroutine,0);
			}
			return;
	}

	// wasm func86621 -> ram:81a3f90f  [MeleeSkills::StopActiveSkillRoutine]
	private void StopActiveSkillRoutine()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;
			int iVar3;

			if (cRam0066495d == '\0') {
				unnamed_function_1099(0x576924);
				cRam0066495d = '\x01';
			}
			uVar1 = UnityEngine.Collision2D.get_rigidbody(param_2,0);
			iVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
			iVar3 = UnityEngine.LayerMask.LayerToName(uRam00576924,0);
			if (iVar2 != iVar3) {
				if (this.activeSkillCoroutine != 0) {
					UnityEngine.MonoBehaviour.StopCoroutine(this,this.activeSkillCoroutine,0);
				}
				this.isAttacking = 1;
			}
			return;
	}

	// wasm func86622 -> ram:81a3f96a  [MeleeSkills::OnCollisionEnter2D]
	private void OnCollisionEnter2D(Collision2D collision)
	{
			uint uVar1;

			if (cRam0066495e == '\0') {
				unnamed_function_1099(0x55d130);
				cRam0066495e = '\x01';
			}
			this.minDistance = 0x40000000;
			uVar1 = unnamed_function_95402(uRam0055d130);
			this.waitForFixedUpdate = uVar1;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// no recovered body in MeleeSkills.c
	public MeleeSkills()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86623 -> ram:81a3f9b0  [MeleeSkills+<ActiveSkill>d__18::System.IDisposable.Dispose]
	uint MeleeSkills__ActiveSkill_d__18_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			float fVar7;
			float *pfVar8;
			float fVar9;
			float fVar10;
			int iVar11;
			ulong uVar12;
			int iVar13;
			uint uVar14;
			ulong uVar15;
			float fStack_20;
			float fStack_1c;
			float fStack_18;
			ulong uStack_10;
			float fStack_8;

			if (cRam0066495f == '\0') {
				unnamed_function_1099(0x55c620);
				unnamed_function_1099(0x565d78);
				cRam0066495f = '\x01';
			}
			iVar3 = *(int *)(param_1 + 0x10);
			if (*(int *)(param_1 + 8) == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				iVar13 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar13 + 0xbd) & 1) == 0) {
					iVar13 = System.Threading.Monitor.Enter_1(iVar13);
				}
				iVar13 = *(int *)(*(int *)(iVar13 + 0x60) + 8);
				if ((*(byte *)(iVar13 + 0xbd) & 1) == 0) {
					iVar13 = System.Threading.Monitor.Enter_1(iVar13);
				}
				uVar1 = System.Linq.Enumerable.Count(*(uint *)(**(int **)(iVar13 + 0x5c) + 0x10),0);
				UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar1,0);
				*(ulong *)(param_1 + 0x18) = uStack_10;
				*(float *)(param_1 + 0x20) = fStack_8;
				fVar4 = *(float *)(param_1 + 0x1c);
				fVar5 = *(float *)(param_1 + 0x20);
				fVar6 = *(float *)(param_1 + 0x18);
				uVar1 = System.Linq.Enumerable.Count(iVar3,0);
				UnityEngine.Camera.get_farClipPlane(&fStack_20,uVar1,0);
				fVar9 = fStack_18;
				fVar10 = fStack_1c;
				fVar7 = fStack_20;
				if (cRam0066482c == '\0') {
					unnamed_function_1099(0x55bab8);
					cRam0066482c = '\x01';
				}
				fVar5 = fVar5 - fVar9;
				fVar4 = fVar4 - fVar10;
				fVar6 = fVar6 - fVar7;
				if (*(int *)(iRam0055bab8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055bab8);
				}
				fVar7 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
				if (1e-05 < fVar7) {
					fVar5 = fVar5 / fVar7;
					fVar6 = fVar6 / fVar7;
					fVar4 = fVar4 / fVar7;
				}
				else {
					if (cRam00664829 == '\0') {
						unnamed_function_1099(0x55d048);
						cRam00664829 = '\x01';
					}
					pfVar8 = *(float **)(iRam0055d048 + 0x5c);
					fVar5 = pfVar8[2];
					fVar6 = *pfVar8;
					fVar4 = pfVar8[1];
				}
				*(float *)(param_1 + 0x24) = fVar6;
				*(float *)(param_1 + 0x2c) = fVar5;
				*(float *)(param_1 + 0x28) = fVar4;
				uVar1 = *(uint *)(*(int *)(iVar3 + 0x10) + 0x24);
				if (*(int *)(iRam0055c620 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c620);
				}
				UnityEngine.Animator.SetTrigger
									(uVar1,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x88),0);
			}
			else {
				if (*(int *)(param_1 + 8) != 1) {
					return 0;
				}
				*(uint *)(param_1 + 8) = 0xffffffff;
			}
			fVar9 = *(float *)(param_1 + 0x1c);
			fVar5 = *(float *)(param_1 + 0x18);
			uVar1 = System.Linq.Enumerable.Count(iVar3,0);
			UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar1,0);
			fVar10 = uStack_10._4_4_;
			fVar7 = (float)uStack_10;
			if (cRam0065b3eb == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam0065b3eb = '\x01';
			}
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar5 = fVar5 - fVar7;
			fVar9 = fVar9 - fVar10;
			if ((SQRT(fVar5 * fVar5 + fVar9 * fVar9) <= *(float *)(iVar3 + 0x18)) ||
				 (2 < *(int *)(iVar3 + 0x5c))) {
				uVar1 = 0;
				*(uint *)(iVar3 + 0x5c) = 0;
				UnityEngine.Animator.SetTrigger
									(*(uint *)(*(int *)(iVar3 + 0x10) + 0x24),*(uint *)(param_1 + 0x14),0);
				*(byte *)(iVar3 + 0x4c) = 1;
			}
			else {
				fVar9 = *(float *)(param_1 + 0x1c);
				fVar5 = *(float *)(param_1 + 0x18);
				uVar1 = System.Linq.Enumerable.Count(iVar3,0);
				UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar1,0);
				fVar10 = uStack_10._4_4_;
				fVar7 = (float)uStack_10;
				if (cRam0065b3eb == '\0') {
					unnamed_function_1099(0x55bab8);
					cRam0065b3eb = '\x01';
				}
				if (*(int *)(iRam0055bab8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055bab8);
				}
				fVar5 = fVar5 - fVar7;
				fVar9 = fVar9 - fVar10;
				if (*(float *)(iVar3 + 0x58) == SQRT(fVar5 * fVar5 + fVar9 * fVar9)) {
					*(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + 1;
				}
				fVar7 = *(float *)(param_1 + 0x1c);
				fVar10 = *(float *)(param_1 + 0x18);
				uVar1 = System.Linq.Enumerable.Count(iVar3,0);
				UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar1,0);
				if (cRam0065b3eb == '\0') {
					unnamed_function_1099(0x55bab8);
					cRam0065b3eb = '\x01';
				}
				if (*(int *)(iRam0055bab8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055bab8);
				}
				fVar10 = fVar10 - (float)uStack_10;
				fVar7 = fVar7 - uStack_10._4_4_;
				*(float *)(iVar3 + 0x58) = SQRT(fVar10 * fVar10 + fVar7 * fVar7);
				iVar13 = *(int *)(iVar3 + 0x20);
				uVar14 = *(uint *)(param_1 + 0x20);
				uVar15 = *(ulong *)(param_1 + 0x18);
				uVar1 = System.Linq.Enumerable.Count(iVar3,0);
				UnityEngine.Camera.get_farClipPlane(&fStack_20,uVar1,0);
				uVar12 = *(ulong *)(param_1 + 0x24);
				uVar1 = *(uint *)(iVar3 + 0x50);
				fStack_8 = fStack_18;
				uStack_10 = CONCAT44(fStack_1c,fStack_20);
				if (cRam00664930 == '\0') {
					unnamed_function_1099(0x55bc80);
					cRam00664930 = '\x01';
				}
				iVar11 = *(int *)(iVar13 + 0x10);
				if (iVar11 != 0) {
					iVar2 = unnamed_function_95402(uRam0055bc80);
					if (cRam00664931 == '\0') {
						unnamed_function_1099(0x55ad18);
						cRam00664931 = '\x01';
					}
					if (*(int *)(iRam0055ad18 + 0x74) == 0) {
						unnamed_function_94848(iRam0055ad18);
					}
					*(uint *)(iVar2 + 0x10) = uVar14;
					*(ulong *)(iVar2 + 8) = uVar15;
					*(ulong *)(iVar2 + 0x14) = uStack_10;
					*(float *)(iVar2 + 0x1c) = fStack_8;
					*(byte *)(iVar2 + 0x2c) = 1;
					*(ulong *)(iVar2 + 0x24) = uVar12;
					*(uint *)(iVar2 + 0x20) = uVar1;
					(**(code **)((ulong)*(uint *)(iVar11 + 0xc) * 4))
										(*(uint *)(iVar11 + 0x20),iVar13,iVar2,*(uint *)(iVar11 + 0x14));
				}
				uVar14 = *(uint *)(iVar3 + 0x44);
				uVar1 = 1;
				*(uint *)(param_1 + 8) = 1;
				*(uint *)(param_1 + 0xc) = uVar14;
			}
			return uVar1;
	}

	// wasm func86624 -> ram:81a3fec9  [MeleeSkills+<ActiveSkill>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void MeleeSkills__ActiveSkill_d__18_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f58c);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86625 -> ram:81a3fef0  [MeleeSkills+<ActiveSkill>d__18::System.Collections.IEnumerator.get_Current]
	void MeleeSkills__ActiveSkill_d__18_System_Collections_IEnumerator_get_Current(int param_1)
	{
			uint uVar1;

			if (cRam00664960 == '\0') {
				unnamed_function_1099(0x567e18);
				cRam00664960 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(param_1,uRam00567e18);
			*(uint *)(param_1 + 0x10) = uVar1;
			return;
	}
}

