// Boss.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Boss.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class Boss : MonoBehaviour
{
	// Fields
	public HealthEvent healthEvent; // 0x10
	public DestroyedEvent destroyedEvent; // 0x14
	public PoiseEvent poiseEvent; // 0x18
	public Rigidbody2D rb; // 0x1C
	public BossEffect bossEffect; // 0x20
	public Animator animator; // 0x24
	public bool isPhaseTwo; // 0x28

	// Methods

	// wasm func86938 -> ram:81a4bdbc  [Boss::Awake]
	private void Awake()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664aab == '\0') {
				unnamed_function_1099(0x557acc);
				unnamed_function_1099(0x56788c);
				cRam00664aab = '\x01';
			}
			iVar7 = this.healthEvent;
			uVar5 = unnamed_function_95402(uRam00557acc);
			unnamed_function_60334(uVar5,this,uRam0056788c,0);
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

	// wasm func86940 -> ram:81a4bf06  [Boss::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664aac == '\0') {
				unnamed_function_1099(0x557acc);
				unnamed_function_1099(0x56788c);
				cRam00664aac = '\x01';
			}
			iVar7 = this.healthEvent;
			uVar5 = unnamed_function_95402(uRam00557acc);
			unnamed_function_60334(uVar5,this,uRam0056788c,0);
			if (cRam00664b40 == '\0') {
				unnamed_function_1099(0x557acc);
				cRam00664b40 = '\x01';
			}
			iVar3 = *(int *)(iVar7 + 0x10);
			while( true ) {
				iVar4 = 0;
				iVar6 = unnamed_function_85160(iVar3,uVar5,0);
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

	// wasm func86942 -> ram:81a4c04f  [Boss::OnDisable]
	private void OnDisable()
	{
			int iVar1;

			if (cRam00664aad == '\0') {
				unnamed_function_1099(0x579c00);
				cRam00664aad = '\x01';
			}
			StaticEventHandler.remove_OnBossChanged(this,0);
			iVar1 = UnityEngine.MonoBehaviour.InvokeRepeating(this);
			UnityEngine.Material.SetInt(*(uint *)(iVar1 + 0x30),uRam00579c00,0,0);
			return;
	}

	// wasm func86943 -> ram:81a4c094  [Boss::Start]
	private void Start()
	{
			int iVar1;

			if (cRam00664aae == '\0') {
				unnamed_function_1099(0x55d85c);
				cRam00664aae = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055d85c);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86944 -> ram:81a4c0d2  [Boss::BossAttack]
	public IEnumerator BossAttack()
	{
		int param_2 = 0; // IL2CPP hidden slot
		int param_3 = 0; // IL2CPP hidden slot
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;

			if (cRam00664aaf == '\0') {
				unnamed_function_1099(0x557acc);
				unnamed_function_1099(0x56788c);
				cRam00664aaf = '\x01';
			}
			if (*(int *)(param_3 + 0xc) < 1) {
				Boss.HealthEvent_OnHealthLost(this,param_3);
				uVar5 = unnamed_function_95402(uRam00557acc);
				unnamed_function_60334(uVar5,this,uRam0056788c,0);
				if (cRam00664b40 == '\0') {
					unnamed_function_1099(0x557acc);
					cRam00664b40 = '\x01';
				}
				iVar4 = *(int *)(param_2 + 0x10);
				do {
					iVar3 = 0;
					iVar6 = unnamed_function_85160(iVar4,uVar5,0);
					uVar2 = uRam00557acc;
					if ((iVar6 != 0) && (iVar3 = unnamed_function_1112(iVar6,uRam00557acc), iVar3 == 0)) {
						unnamed_function_1116(iVar6,uVar2);
						do {
							halt_trap();
						} while( true );
					}
					iVar3 = System.Net.WebOperation.ctor(param_2 + 0x10,iVar3,iVar4);
					bVar1 = iVar4 != iVar3;
					iVar4 = iVar3;
				} while (bVar1);
			}
			return;
	}

	// wasm func86945 -> ram:81a4c1a9  [Boss::HealthEvent_OnHealthLost]
	private void HealthEvent_OnHealthLost(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
	{
			int iVar1;
			int iVar2;
			int iVar3;

			if (cRam00664ab0 == '\0') {
				unnamed_function_1099(0x567e70);
				unnamed_function_1099(0x55ab64);
				cRam00664ab0 = '\x01';
			}
			iVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e70);
			iVar2 = unnamed_function_95402(uRam0055ab64);
			if (cRam00664b36 == '\0') {
				unnamed_function_1099(0x55ad18);
				cRam00664b36 = '\x01';
			}
			if (*(int *)(iRam0055ad18 + 0x74) == 0) {
				unnamed_function_94848(iRam0055ad18);
			}
			*(byte *)(iVar2 + 9) = 1;
			iVar3 = *(int *)(iVar1 + 0x10);
			if (iVar3 != 0) {
				(**(code **)((ulong)*(uint *)(iVar3 + 0xc) * 4))
									(*(uint *)(iVar3 + 0x20),iVar1,iVar2,*(uint *)(iVar3 + 0x14));
			}
			return;
	}

	// no recovered body in Boss.c
	private void EnemyDestroyed()
	{
		// <no recovered body>
	}

	// no recovered body in Boss.c
	public Boss()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86947 -> ram:81a4c287  [Boss+<BossAttack>d__11::System.IDisposable.Dispose]
	uint Boss__BossAttack_d__11_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;

			if (cRam00664ab1 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664ab1 = '\x01';
			}
			if (*(int *)(param_1 + 8) != 0) {
				if (*(int *)(param_1 + 8) == 1) {
					*(uint *)(param_1 + 8) = 0xffffffff;
					uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x24);
					if (*(int *)(iRam0055c620 + 0x74) == 0) {
						unnamed_function_94848(iRam0055c620);
					}
					UnityEngine.Animator.SetTrigger
										(uVar1,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x4c),0);
				}
				return 0;
			}
			*(uint *)(param_1 + 8) = 0xffffffff;
			uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x24);
			if (*(int *)(iRam0055c620 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.SetTrigger
								(uVar1,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x48),0);
			*(ulong *)(param_1 + 8) = 1;
			return 1;
	}

	// wasm func86948 -> ram:81a4c340  [Boss+<BossAttack>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void Boss__BossAttack_d__11_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56eb34);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86949 -> ram:81a4c368  [Boss+<BossAttack>d__11::System.Collections.IEnumerator.get_Current]
	void Boss__BossAttack_d__11_System_Collections_IEnumerator_get_Current(int param_1)
	{
			int iVar1;
			uint uVar2;
			uint uVar3;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam00664ab2 == '\0') {
				unnamed_function_1099(0x56789c);
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d340);
				unnamed_function_1099(0x56d37c);
				cRam00664ab2 = '\x01';
			}
			if (cRam00664ab4 == '\0') {
				unnamed_function_1099(0x57be08);
				cRam00664ab4 = '\x01';
			}
			iVar1 = UnityEngine.PlayerPrefs.GetString_1(uRam0057be08,0);
			if ((iVar1 == 0) || (iVar1 = UnityEngine.PlayerPrefs.GetInt(uRam0057be08,0), iVar1 != 1)) {
				uStack_8 = 0x4416000045098000;
				uStack_10 = 0x4416000045098000;
				uVar2 = DG.Tweening.DOTweenModuleUI.DOPivotY
													(*(uint *)(param_1 + 0x10),&uStack_10,0x3f800000,0,0);
				uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar2,0x1b,uRam0056d37c);
				uVar3 = unnamed_function_95402(uRam0055cd74);
				DG.Tweening.Color2.op_Multiply(uVar3,param_1,uRam0056789c,0);
				DG.Tweening.TweenSettingsExtensions.From_6(uVar2,uVar3,uRam0056d340);
			}
			else {
				unnamed_function_44686(*(uint *)(param_1 + 0x20),0,0);
				iVar1 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
					iVar1 = System.Threading.Monitor.Enter_1(iVar1);
				}
				iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
				if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
					iVar1 = System.Threading.Monitor.Enter_1(iVar1);
				}
				iVar1 = **(int **)(iVar1 + 0x5c);
				if (cRam00664b1b == '\0') {
					unnamed_function_1099(0x565d58);
					cRam00664b1b = '\x01';
				}
				*(uint *)(iVar1 + 0x1c) = 3;
				if (cRam00664b1f == '\0') {
					unnamed_function_1099(0x567f18);
					cRam00664b1f = '\x01';
				}
				uVar2 = UnityEngine.GameObject.get_activeInHierarchy
													(*(uint *)(iVar1 + 0x10),uRam00567f18);
				UnityEngine.Rigidbody2D.get_mass(uVar2,0x3f000000,0);
				iVar1 = *(int *)(iVar1 + 0x20);
				if (iVar1 != 0) {
					(**(code **)((ulong)*(uint *)(iVar1 + 0xc) * 4))
										(*(uint *)(iVar1 + 0x20),3,*(uint *)(iVar1 + 0x14));
				}
				uVar2 = unnamed_function_44644(param_1,0);
				unnamed_function_44686(uVar2,0,0);
			}
			return;
	}
}

