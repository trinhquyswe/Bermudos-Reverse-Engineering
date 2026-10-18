// EnemyMovement.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in EnemyMovement.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
[RequireComponent(typeof(NavMeshAgent))]
[RequireComponent(typeof(Enemy))]
public class EnemyMovement : MonoBehaviour
{
	// Fields
	private Vector2 startPosition; // 0x10
	private Vector2 roamingPosition; // 0x18
	public NavMeshAgent navMeshAgent; // 0x20
	private bool hasInitializedRoamingPosition; // 0x24
	private Enemy enemy; // 0x28
	private float maxDistance; // 0x2C

	// Methods

	// wasm func87091 -> ram:81a5291a  [EnemyMovement::Awake]
	private void Awake()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664b01 == '\0') {
				unnamed_function_1099(0x557b08);
				unnamed_function_1099(0x568ec0);
				cRam00664b01 = '\x01';
			}
			iVar7 = *(int *)(this.enemy + 0x28);
			uVar5 = unnamed_function_95402(uRam00557b08);
			unnamed_function_60334(uVar5,this,uRam00568ec0,0);
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

	// wasm func87092 -> ram:81a529e8  [EnemyMovement::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664b02 == '\0') {
				unnamed_function_1099(0x557b08);
				unnamed_function_1099(0x568ec0);
				cRam00664b02 = '\x01';
			}
			iVar7 = *(int *)(this.enemy + 0x28);
			uVar5 = unnamed_function_95402(uRam00557b08);
			unnamed_function_60334(uVar5,this,uRam00568ec0,0);
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

	// wasm func87093 -> ram:81a52ab5  [EnemyMovement::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;

			if (*(float *)(param_2 + 0xc) <= 0.0) {
				uVar2 = *(uint *)(param_2 + 0x14);
				AttackEvent.remove_OnAttack(*(uint *)(this.enemy + 0x30),0);
				if (cRam00664b07 == '\0') {
					unnamed_function_1099(0x55ddd8);
					cRam00664b07 = '\x01';
				}
				iVar1 = unnamed_function_95402(uRam0055ddd8);
				*(uint *)(iVar1 + 0x14) = uVar2;
				*(int *)(iVar1 + 0x10) = this;
				*(uint *)(iVar1 + 8) = 0;
				UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			}
			return;
	}

	// wasm func87095 -> ram:81a52b82  [EnemyMovement::PoiseEvent_OnPoise]
	private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
	{
			uint uVar1;
			ulong[] auStack_10 = new ulong[2];

			UnityEngine.AI.NavMeshAgent.set_acceleration(this.navMeshAgent,0,0);
			UnityEngine.AI.NavMeshAgent.set_updateRotation(this.navMeshAgent,0,0);
			UnityEngine.AI.NavMeshAgent.get_speed(this.navMeshAgent,0x40400000,0);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(auStack_10,uVar1,0);
			this.startPosition = auStack_10[0];
			return;
	}

	// wasm func87065 -> ram:81a508d9  [EnemyMovement::Start]
	private void Start()
	{
			uint uVar1;
			float fVar2;
			ulong uVar3;
			float fVar4;
			ulong uStack_30;
			uint uStack_28;
			float fStack_20;
			float fStack_1c;
			ulong uStack_10;
			uint uStack_8;

			if (this.hasInitializedRoamingPosition == '\0') {
				EnemyMovement.GoBackToStartPosition(&fStack_20,this,&uStack_30);
				uStack_30 = CONCAT44(fStack_1c,fStack_20);
				this.hasInitializedRoamingPosition = 1;
				this.roamingPosition = uStack_30;
			}
			else {
				uStack_30 = this.roamingPosition;
			}
			uStack_8 = 0;
			uStack_28 = 0;
			uStack_10 = uStack_30;
			UnityEngine.AI.NavMeshBuilder.UpdateNavMeshDataAsyncListInternal_Injected
								(this.navMeshAgent,&uStack_30,0);
			UnityEngine.AI.NavMeshAgent.get_destination(this.navMeshAgent,0x3f800000,0);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_20,uVar1,0);
			fVar4 = fStack_1c;
			fVar2 = fStack_20;
			uVar3 = this.roamingPosition;
			if (cRam0065b3eb == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam0065b3eb = '\x01';
			}
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar2 = fVar2 - (float)uVar3;
			fVar4 = fVar4 - (float)((ulong)uVar3 >> 0x20);
			if (SQRT(fVar2 * fVar2 + fVar4 * fVar4) <= 1.0) {
				EnemyMovement.GoBackToStartPosition(&fStack_20,this,&uStack_30);
				this.roamingPosition = CONCAT44(fStack_1c,fStack_20);
			}
			return;
	}

	// wasm func87066 -> ram:81a50a07  [EnemyMovement::MoveRoamingPosition]
	public void MoveRoamingPosition()
	{
			float fVar1;
			float fVar2;
			uint uVar3;
			int iVar4;
			float fStack_10;
			float fStack_c;

			if (cRam00664b03 == '\0') {
				unnamed_function_1099(0x565d78);
				cRam00664b03 = '\x01';
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
					5.0) {
				EnemyMovement__StopEnemyCoroutine_d__19.get_Current
									(*(uint *)(this.enemy + 0x18),1,&fStack_10);
			}
			return;
	}

	// wasm func87068 -> ram:81a50cfa  [EnemyMovement::FindPlayer]
	public void FindPlayer()
	{
			uint uVar1;
			int iVar2;
			uint uVar3;
			ulong uStack_20;
			uint uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664b04 == '\0') {
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x565d78);
				cRam00664b04 = '\x01';
			}
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar3 = *(uint *)(**(int **)(iVar2 + 0x5c) + 0x10);
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar2 = UnityEngine.Camera.get_targetTexture(uVar3,0,0);
			if ((iVar2 != 0) &&
				 (iVar2 = UnityEngine.AI.NavMeshAgent.set_updateUpAxis(this.navMeshAgent,0),
				 iVar2 != 0)) {
				UnityEngine.AI.NavMeshAgent.get_destination(this.navMeshAgent,0x40000000,0);
				uVar3 = this.navMeshAgent;
				iVar2 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				uVar1 = System.Linq.Enumerable.Count(*(uint *)(**(int **)(iVar2 + 0x5c) + 0x10),0);
				UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar1,0);
				uStack_18 = uStack_8;
				uStack_20 = uStack_10;
				UnityEngine.AI.NavMeshBuilder.UpdateNavMeshDataAsyncListInternal_Injected
									(uVar3,&uStack_20,0);
			}
			return;
	}

	// wasm func87069 -> ram:81a50e3c  [EnemyMovement::MoveToPlayer]
	public void MoveToPlayer()
	{
			uint uVar1;
			ulong uVar2;
			float fStack_10;
			float fStack_c;

			this.maxDistance = 0x41700000;
			uVar1 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar1,0);
			uVar2 = this.startPosition;
			if (cRam0065b3eb == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam0065b3eb = '\x01';
			}
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fStack_10 = fStack_10 - (float)uVar2;
			fStack_c = fStack_c - (float)((ulong)uVar2 >> 0x20);
			if (this.maxDistance < SQRT(fStack_10 * fStack_10 + fStack_c * fStack_c)) {
				EnemyMovement__StopEnemyCoroutine_d__19.get_Current
									(*(uint *)(this.enemy + 0x18),4,this);
			}
			return;
	}

	// wasm func87070 -> ram:81a50ef7  [EnemyMovement::GetDistanceToStartPosition]
	public void GetDistanceToStartPosition()
	{
			float fVar1;
			float fVar2;
			int iVar3;
			uint uVar4;
			float fVar5;
			ulong uVar6;
			float fVar7;
			ulong uStack_30;
			uint uStack_28;
			float fStack_20;
			float fStack_1c;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664b05 == '\0') {
				unnamed_function_1099(0x565d78);
				cRam00664b05 = '\x01';
			}
			iVar3 = UnityEngine.AI.NavMeshAgent.set_updateUpAxis(this.navMeshAgent,0);
			if (iVar3 != 0) {
				UnityEngine.AI.NavMeshAgent.get_destination(this.navMeshAgent,0x40000000,0);
				uStack_30 = this.startPosition;
				uStack_8 = 0;
				uStack_28 = 0;
				uStack_10 = uStack_30;
				UnityEngine.AI.NavMeshBuilder.UpdateNavMeshDataAsyncListInternal_Injected
									(this.navMeshAgent,&uStack_30,0);
				iVar3 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				uVar4 = System.Linq.Enumerable.Count(*(uint *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
				UnityEngine.Camera.get_farClipPlane(&fStack_20,uVar4,0);
				fVar1 = fStack_1c;
				fVar5 = fStack_20;
				uVar4 = System.Linq.Enumerable.Count(this,0);
				UnityEngine.Camera.get_farClipPlane(&fStack_20,uVar4,0);
				fVar2 = fStack_1c;
				fVar7 = fStack_20;
				if (cRam0065b3eb == '\0') {
					unnamed_function_1099(0x55bab8);
					cRam0065b3eb = '\x01';
				}
				if (*(int *)(iRam0055bab8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055bab8);
				}
				if (SQRT((fVar5 - fVar7) * (fVar5 - fVar7) + (fVar1 - fVar2) * (fVar1 - fVar2)) <= 5.0) {
					uVar6 = this.startPosition;
					uVar4 = System.Linq.Enumerable.Count(this,0);
					UnityEngine.Camera.get_farClipPlane(&fStack_20,uVar4,0);
					fVar7 = fStack_1c;
					fVar5 = fStack_20;
					if (cRam0065b3eb == '\0') {
						unnamed_function_1099(0x55bab8);
						cRam0065b3eb = '\x01';
					}
					if (*(int *)(iRam0055bab8 + 0x74) == 0) {
						unnamed_function_94848(iRam0055bab8);
					}
					fVar5 = (float)uVar6 - fVar5;
					fVar7 = (float)((ulong)uVar6 >> 0x20) - fVar7;
					if (SQRT(fVar5 * fVar5 + fVar7 * fVar7) <= this.maxDistance + -5.0) {
						EnemyMovement__StopEnemyCoroutine_d__19.get_Current
											(*(uint *)(this.enemy + 0x18),1,&uStack_30);
					}
				}
				uVar4 = System.Linq.Enumerable.Count(this,0);
				UnityEngine.Camera.get_farClipPlane(&fStack_20,uVar4,0);
				uVar6 = this.startPosition;
				if (cRam0065b3eb == '\0') {
					unnamed_function_1099(0x55bab8);
					cRam0065b3eb = '\x01';
				}
				if (*(int *)(iRam0055bab8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055bab8);
				}
				fStack_20 = fStack_20 - (float)uVar6;
				fStack_1c = fStack_1c - (float)((ulong)uVar6 >> 0x20);
				if (SQRT(fStack_20 * fStack_20 + fStack_1c * fStack_1c) < 2.0) {
					EnemyMovement__StopEnemyCoroutine_d__19.get_Current
										(*(uint *)(this.enemy + 0x18),0,&uStack_30);
				}
			}
			return;
	}

	// wasm func87073 -> ram:81a51497  [EnemyMovement::GoBackToStartPosition]
	public void GoBackToStartPosition()
	{
		int param_2 = 0; // IL2CPP hidden slot
			ulong uVar1;
			int iVar2;
			float fVar3;
			ulong uVar4;
			ulong uStack_58;
			uint uStack_50;
			ulong[] auStack_48 = new ulong[2];
			float fStack_38;
			float fStack_34;
			uint uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			uint uStack_8;

			uStack_8 = 0;
			uStack_10 = 0;
			uStack_18 = 0;
			uStack_20 = 0;
			uStack_28 = 0;
			iVar2 = UnityEngine.AI.NavMeshAgent.set_updateUpAxis(*(uint *)(param_2 + 0x20),0);
			if (iVar2 == 0) {
				*this = *(ulong *)(param_2 + 0x18);
			}
			else {
				uVar4 = *(ulong *)(param_2 + 0x10);
				HelperUtilities.GetAngleFromVector(auStack_48,0);
				uVar1 = auStack_48[0];
				fVar3 = (float)UnityEngine.Random.InitState(0x3f800000,0x40a00000,0);
				fStack_34 = fVar3 * (float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar4 >> 0x20);
				fStack_38 = fVar3 * (float)uVar1 + (float)uVar4;
				*(ulong *)(param_2 + 0x18) = CONCAT44(fStack_34,fStack_38);
				uStack_30 = 0;
				uStack_50 = 0;
				uStack_58 = CONCAT44(fStack_34,fStack_38);
				UnityEngine.AI.NavMesh.Internal_CallOnNavMeshPreUpdate
									(&uStack_58,&uStack_28,0x41200000,1,0);
				System.Runtime.InteropServices.MemoryMarshal.AsMemory(auStack_48,&uStack_28,0);
				*this = auStack_48[0];
			}
			return;
	}

	// no recovered body in EnemyMovement.c
	public Vector2 GetRoamingPosition()
	{
		// <no recovered body>
	}

	// wasm func87094 -> ram:81a52b27  [EnemyMovement::GetAimDirection]
	public void GetAimDirection(bool isPlayerDir)
	{
			int iVar1;

			AttackEvent.remove_OnAttack(*(uint *)(this.enemy + 0x30),0);
			if (cRam00664b07 == '\0') {
				unnamed_function_1099(0x55ddd8);
				cRam00664b07 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ddd8);
			*(uint *)(iVar1 + 0x14) = isPlayerDir;
			*(int *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			return;
	}

	// wasm func87096 -> ram:81a52bd9  [EnemyMovement::StopEnemy]
	private void StopEnemy(float stunTime)
	{
			int iVar1;

			if (cRam00664b07 == '\0') {
				unnamed_function_1099(0x55ddd8);
				cRam00664b07 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ddd8);
			*(uint *)(iVar1 + 0x14) = stunTime;
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func87097 -> ram:81a52c1d  [EnemyMovement::StopEnemyCoroutine]
	private IEnumerator StopEnemyCoroutine(float stunTime)
	{
			this.maxDistance = 0x41700000;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// no recovered body in EnemyMovement.c
	public EnemyMovement()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func87072 -> ram:81a51409  [EnemyMovement+<StopEnemyCoroutine>d__19::System.Collections.IEnumerator.get_Current]
	void EnemyMovement__StopEnemyCoroutine_d__19_System_Collections_IEnumerator_get_Current(int param_1, uint param_2)
	{
			int iVar1;
			int iVar2;

			if (cRam00664b09 == '\0') {
				unnamed_function_1099(0x55aca8);
				cRam00664b09 = '\x01';
			}
			iVar2 = *(int *)(param_1 + 0x10);
			if (iVar2 != 0) {
				iVar1 = unnamed_function_95402(uRam0055aca8);
				if (cRam00664b0a == '\0') {
					unnamed_function_1099(0x55ad18);
					cRam00664b0a = '\x01';
				}
				if (*(int *)(iRam0055ad18 + 0x74) == 0) {
					unnamed_function_94848(iRam0055ad18);
				}
				*(uint *)(iVar1 + 8) = param_2;
				(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
									(*(uint *)(iVar2 + 0x20),param_1,iVar1,*(uint *)(iVar2 + 0x14));
			}
			return;
	}

	// wasm func87098 -> ram:81a52c34  [EnemyMovement+<StopEnemyCoroutine>d__19::System.IDisposable.Dispose]
	uint EnemyMovement__StopEnemyCoroutine_d__19_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			uint *puVar2;
			int iVar3;
			uint uVar4;

			if (cRam00664b08 == '\0') {
				unnamed_function_1099(0x55d134);
				cRam00664b08 = '\x01';
			}
			puVar2 = (uint *)(param_1 + 8);
			iVar3 = *(int *)(param_1 + 0x10);
			if (*(int *)(param_1 + 8) == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				UnityEngine.AI.NavMeshAgent.get_isStopped(*(uint *)(iVar3 + 0x20),1,0);
				*(uint *)(*(int *)(*(int *)(iVar3 + 0x28) + 0x3c) + 0x20) = 5;
				uVar4 = *(uint *)(param_1 + 0x14);
				uVar1 = unnamed_function_95402(uRam0055d134);
				UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime(uVar1,uVar4,0);
				*(uint *)(param_1 + 0xc) = uVar1;
				uVar1 = 1;
			}
			else {
				if (*(int *)(param_1 + 8) != 1) {
					return 0;
				}
				*puVar2 = 0xffffffff;
				UnityEngine.AI.NavMeshAgent.get_isStopped(*(uint *)(iVar3 + 0x20),0,0);
				AttackEvent.remove_OnAttack(*(uint *)(*(int *)(iVar3 + 0x28) + 0x34),0);
				puVar2 = (uint *)(*(int *)(*(int *)(iVar3 + 0x28) + 0x3c) + 0x20);
				uVar1 = 0;
			}
			*puVar2 = 1;
			return uVar1;
	}

	// wasm func87099 -> ram:81a52d01  [EnemyMovement+<StopEnemyCoroutine>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void EnemyMovement__StopEnemyCoroutine_d__19_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f128);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

