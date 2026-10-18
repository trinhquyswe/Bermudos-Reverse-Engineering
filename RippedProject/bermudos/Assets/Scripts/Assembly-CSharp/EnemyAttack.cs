// EnemyAttack.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in EnemyAttack.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class EnemyAttack : MonoBehaviour
{
	// Fields
	private Enemy enemy; // 0x10
	private Transform shootPosition; // 0x14
	private AmmoDetailsSO ammoDetailsSO; // 0x18
	private float attackDistance; // 0x1C

	// Methods

	// wasm func87079 -> ram:81a516dc  [EnemyAttack::Awake]
	private void Awake()
	{
			uint uVar1;

			if (cRam00664af6 == '\0') {
				unnamed_function_1099(0x572c90);
				cRam00664af6 = '\x01';
			}
			uVar1 = UnityEngine.Random.InitState(0x40000000,0x40400000,0);
			unnamed_function_44717(this,uRam00572c90,0x40400000,uVar1,0);
			return;
	}

	// wasm func87071 -> ram:81a511b2  [EnemyAttack::Start]
	private void Start()
	{
			int iVar1;
			int *piVar2;
			uint *puVar3;
			int iVar4;
			uint uVar5;
			uint uVar6;
			uint uVar7;
			ulong uStack_60;
			uint uStack_58;
			ulong uStack_50;
			ulong uStack_48;
			ulong uStack_40;
			uint uStack_38;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664af7 == '\0') {
				unnamed_function_1099(0x55b280);
				unnamed_function_1099(0x565d64);
				unnamed_function_1099(0x565d78);
				cRam00664af7 = '\x01';
			}
			iVar4 = *(int *)(iRam00565d64 + 0x10);
			if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
				iVar4 = System.Threading.Monitor.Enter_1(iVar4);
			}
			iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
			if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
				iVar4 = System.Threading.Monitor.Enter_1(iVar4);
			}
			uVar5 = *(uint *)(this.ammoDetailsSO + 0x2c);
			uVar6 = **(uint **)(iVar4 + 0x5c);
			UnityEngine.Camera.get_farClipPlane(&uStack_10,this.shootPosition,0);
			if (cRam006603e8 == '\0') {
				unnamed_function_1099(0x55c148);
				cRam006603e8 = '\x01';
			}
			uStack_48 = (*(ulong **)(iRam0055c148 + 0x5c))[1];
			uStack_50 = **(ulong **)(iRam0055c148 + 0x5c);
			uStack_38 = uStack_8;
			uStack_40 = uStack_10;
			uStack_20 = uStack_50;
			uStack_18 = uStack_48;
			iVar1 = PoolManager.CreatePool(uVar6,uVar5,&uStack_40,&uStack_50,0);
			iVar4 = iRam0055b280;
			if (iVar1 != 0) {
				piVar2 = (int *)unnamed_function_1112(iVar1,iRam0055b280);
				if (piVar2 == (int *)0x0) {
					unnamed_function_1116(iVar1,iVar4);
					do {
						halt_trap();
					} while( true );
				}
				uVar5 = this.ammoDetailsSO;
				iVar4 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
					iVar4 = System.Threading.Monitor.Enter_1(iVar4);
				}
				iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
				if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
					iVar4 = System.Threading.Monitor.Enter_1(iVar4);
				}
				uVar7 = 0;
				uVar6 = System.Linq.Enumerable.Count(*(uint *)(**(int **)(iVar4 + 0x5c) + 0x10),0);
				UnityEngine.Camera.get_farClipPlane(&uStack_30,uVar6,0);
				uStack_8 = uStack_28;
				uStack_10 = uStack_30;
				iVar4 = *piVar2;
				if (*(ushort *)(iVar4 + 0xb6) != 0) {
					do {
						if (iRam0055b280 == *(int *)(*(int *)(iVar4 + 0x58) + uVar7 * 8)) {
							puVar3 = (uint *)(iVar4 + *(int *)(*(int *)(iVar4 + 0x58) + uVar7 * 8 + 4) * 8 + 0xc0);
							goto code_r0x81a513c4;
						}
						uVar7 = uVar7 + 1;
					} while (*(ushort *)(iVar4 + 0xb6) != uVar7);
				}
				puVar3 = (uint *)unnamed_function_95091(piVar2,iRam0055b280,0);
		code_r0x81a513c4:
				uStack_58 = uStack_8;
				uStack_60 = uStack_10;
				(**(code **)((ulong)*puVar3 * 4))(piVar2,uVar5,&uStack_60,puVar3[1]);
			}
			return;
	}

	// wasm func87080 -> ram:81a51729  [EnemyAttack::Shoot]
	public void Shoot()
	{
			float fVar1;
			float fVar2;
			uint uVar3;
			int iVar4;
			float fStack_10;
			float fStack_c;

			if (cRam00664af8 == '\0') {
				unnamed_function_1099(0x565d78);
				cRam00664af8 = '\x01';
			}
			iVar4 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
				iVar4 = System.Threading.Monitor.Enter_1(iVar4);
			}
			iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
			if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
				iVar4 = System.Threading.Monitor.Enter_1(iVar4);
			}
			uVar3 = System.Linq.Enumerable.Count(*(uint *)(**(int **)(iVar4 + 0x5c) + 0x10),0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar3,0);
			fVar2 = fStack_c;
			fVar1 = fStack_10;
			uVar3 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar3,0);
			if (cRam0065b3eb == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam0065b3eb = '\x01';
			}
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			if (SQRT((fVar1 - fStack_10) * (fVar1 - fStack_10) + (fVar2 - fStack_c) * (fVar2 - fStack_c)) <
					this.attackDistance) {
				EnemyMovement__StopEnemyCoroutine_d__19.get_Current
									(*(uint *)(this.enemy + 0x18),2,&fStack_10);
			}
			return;
	}

	// wasm func87081 -> ram:81a51840  [EnemyAttack::CallEnemyAttackState]
	private void CallEnemyAttackState()
	{
			this.attackDistance = 0x41000000;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func87082 -> ram:81a51857  [EnemyAttack::.ctor]
	public EnemyAttack()
	{
			uint uVar1;
			int iVar2;

			if (cRam00664af9 == '\0') {
				unnamed_function_1099(0x56c1bc);
				unnamed_function_1099(0x565d78);
				cRam00664af9 = '\x01';
			}
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar1 = Esper.ESave.SaveFileSetup.GenerateAESTokens
												(*(uint *)(**(int **)(iVar2 + 0x5c) + 0x18),0);
			iVar2 = unnamed_function_60732(uVar1,*(uint *)(this.shootPosition + 0x18),0);
			if (iVar2 != 0) {
				iVar2 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				uVar1 = Esper.ESave.SaveFileSetup.GenerateAESTokens
													(*(uint *)(**(int **)(iVar2 + 0x5c) + 0x18),0);
				uVar1 = Esper.ESave.SaveFile.HasData
													(uVar1,*(uint *)(this.shootPosition + 0x18),0,uRam0056c1bc);
				this.ammoDetailsSO = uVar1;
			}
			return;
	}
}

