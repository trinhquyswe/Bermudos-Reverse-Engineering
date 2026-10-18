// EnemyAI.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in EnemyAI.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
[RequireComponent(typeof(EnemyMovement))]
[RequireComponent(typeof(EnemyStateEvent))]
[RequireComponent(typeof(EnemyAttack))]
public class EnemyAI : MonoBehaviour
{
	// Fields
	private EnemyMovement enemyMovement; // 0x10
	private EnemyAttack enemyAttack; // 0x14
	private EnemyStateEvent enemyStateEvent; // 0x18
	private Enemy enemy; // 0x1C
	public EnemyState enemyState; // 0x20
	private Coroutine attackCoroutine; // 0x24
	private bool isAttack; // 0x28

	// Methods

	// wasm func87060 -> ram:81a50464  [EnemyAI::Awake]
	private void Awake()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			int iVar5;
			int iVar6;
			uint uVar7;

			if (cRam00664af1 == '\0') {
				unnamed_function_1099(0x557ac8);
				unnamed_function_1099(0x557b08);
				unnamed_function_1099(0x568eb0);
				unnamed_function_1099(0x568eb4);
				cRam00664af1 = '\x01';
			}
			iVar6 = this.enemyStateEvent;
			uVar7 = *(uint *)(iVar6 + 0x10);
			uVar2 = unnamed_function_95402(uRam00557ac8);
			unnamed_function_60334(uVar2,this,uRam00568eb0,0);
			iVar3 = unnamed_function_85158(uVar7,uVar2,0);
			uVar2 = uRam00557ac8;
			if (iVar3 == 0) {
				*(uint *)(iVar6 + 0x10) = 0;
			}
			else {
				iVar4 = unnamed_function_1112(iVar3,uRam00557ac8);
				if (iVar4 == 0) {
					unnamed_function_1116(iVar3,uVar2);
					do {
						halt_trap();
					} while( true );
				}
				*(int *)(iVar6 + 0x10) = iVar4;
				uVar2 = uRam00557ac8;
				iVar6 = unnamed_function_1112(iVar3,uRam00557ac8);
				if (iVar6 == 0) {
					unnamed_function_1116(iVar3,uVar2);
					do {
						halt_trap();
					} while( true );
				}
			}
			iVar3 = *(int *)(this.enemy + 0x28);
			uVar2 = unnamed_function_95402(uRam00557b08);
			unnamed_function_60334(uVar2,this,uRam00568eb4,0);
			if (cRam00664b44 == '\0') {
				unnamed_function_1099(0x557b08);
				cRam00664b44 = '\x01';
			}
			iVar6 = *(int *)(iVar3 + 0x10);
			while( true ) {
				iVar4 = 0;
				iVar5 = unnamed_function_85158(iVar6,uVar2,0);
				uVar7 = uRam00557b08;
				if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557b08), iVar4 == 0)) break;
				iVar4 = System.Net.WebOperation.ctor(iVar3 + 0x10,iVar4,iVar6);
				bVar1 = iVar6 == iVar4;
				iVar6 = iVar4;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar5,uVar7);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87061 -> ram:81a505cb  [EnemyAI::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			int iVar5;
			int iVar6;
			uint uVar7;

			if (cRam00664af2 == '\0') {
				unnamed_function_1099(0x557ac8);
				unnamed_function_1099(0x557b08);
				unnamed_function_1099(0x568eb0);
				unnamed_function_1099(0x568eb4);
				cRam00664af2 = '\x01';
			}
			iVar6 = this.enemyStateEvent;
			uVar7 = *(uint *)(iVar6 + 0x10);
			uVar2 = unnamed_function_95402(uRam00557ac8);
			unnamed_function_60334(uVar2,this,uRam00568eb0,0);
			iVar3 = unnamed_function_85160(uVar7,uVar2,0);
			uVar2 = uRam00557ac8;
			if (iVar3 == 0) {
				*(uint *)(iVar6 + 0x10) = 0;
			}
			else {
				iVar4 = unnamed_function_1112(iVar3,uRam00557ac8);
				if (iVar4 == 0) {
					unnamed_function_1116(iVar3,uVar2);
					do {
						halt_trap();
					} while( true );
				}
				*(int *)(iVar6 + 0x10) = iVar4;
				uVar2 = uRam00557ac8;
				iVar6 = unnamed_function_1112(iVar3,uRam00557ac8);
				if (iVar6 == 0) {
					unnamed_function_1116(iVar3,uVar2);
					do {
						halt_trap();
					} while( true );
				}
			}
			iVar3 = *(int *)(this.enemy + 0x28);
			uVar2 = unnamed_function_95402(uRam00557b08);
			unnamed_function_60334(uVar2,this,uRam00568eb4,0);
			if (cRam00664b44 == '\0') {
				unnamed_function_1099(0x557b08);
				cRam00664b44 = '\x01';
			}
			iVar6 = *(int *)(iVar3 + 0x10);
			while( true ) {
				iVar4 = 0;
				iVar5 = unnamed_function_85158(iVar6,uVar2,0);
				uVar7 = uRam00557b08;
				if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557b08), iVar4 == 0)) break;
				iVar4 = System.Net.WebOperation.ctor(iVar3 + 0x10,iVar4,iVar6);
				bVar1 = iVar6 == iVar4;
				iVar6 = iVar4;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar5,uVar7);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87062 -> ram:81a50731  [EnemyAI::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;

			if (*(float *)(param_2 + 0xc) <= 0.0) {
				uVar2 = *(uint *)(param_2 + 0x14);
				if (cRam00664af3 == '\0') {
					unnamed_function_1099(0x55ddc8);
					cRam00664af3 = '\x01';
				}
				iVar1 = unnamed_function_95402(uRam0055ddc8);
				*(uint *)(iVar1 + 0x14) = uVar2;
				*(uint *)(iVar1 + 0x10) = this;
				*(uint *)(iVar1 + 8) = 0;
				UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			}
			return;
	}

	// no recovered body in EnemyAI.c
	private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
	{
		// <no recovered body>
	}

	// wasm func87064 -> ram:81a507e3  [EnemyAI::OnEnemyState]
	private void OnEnemyState(EnemyStateEvent enemyStateEvent, EnemyStateEventArgs enemyStateEventArgs)
	{
			int iVar1;
			int iVar2;

			iVar1 = this.enemyState;
			if (iVar1 == 1) {
				AttackEvent.remove_OnAttack(*(uint *)(this.enemy + 0x34),0);
				EnemyMovement.FindPlayer(this.enemyMovement,this);
				EnemyMovement.MoveToPlayer(this.enemyMovement,this);
				unnamed_function_87067(this.enemyMovement,1,this);
				return;
			}
			if (iVar1 == 2) {
				if (this.isAttack != '\0') {
					iVar1 = *(int *)(this.enemy + 0x38);
					iVar2 = *(int *)(iVar1 + 0x10);
					if (iVar2 != 0) {
						(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
											(*(uint *)(iVar2 + 0x20),iVar1,*(uint *)(iVar2 + 0x14));
					}
					EnemyAttack.Start(this.enemyAttack,this);
					EnemyMovement__StopEnemyCoroutine_d__19.get_Current
										(this.enemyStateEvent,1,this);
				}
				return;
			}
			if (iVar1 != 3) {
				if (iVar1 == 4) {
					AttackEvent.remove_OnAttack(*(uint *)(this.enemy + 0x34),0);
					EnemyMovement.GetDistanceToStartPosition(this.enemyMovement,this);
					unnamed_function_87067(this.enemyMovement,0,this);
					return;
				}
				if (iVar1 == 5) {
					return;
				}
			}
			AttackEvent.remove_OnAttack(*(uint *)(this.enemy + 0x34),0);
			EnemyMovement.Start(this.enemyMovement,this);
			EnemyMovement.MoveRoamingPosition(this.enemyMovement,this);
			unnamed_function_87067(this.enemyMovement,0,this);
			return;
	}

	// wasm func87063 -> ram:81a50795  [EnemyAI::Update]
	private void Update()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			int iVar1;

			if (cRam00664af3 == '\0') {
				unnamed_function_1099(0x55ddc8);
				cRam00664af3 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ddc8);
			*(uint *)(iVar1 + 0x14) = param_2;
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			return;
	}

	// wasm func87074 -> ram:81a515a2  [EnemyAI::StopAttack]
	private void StopAttack(float stunTime)
	{
			int iVar1;

			if (cRam00664af3 == '\0') {
				unnamed_function_1099(0x55ddc8);
				cRam00664af3 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ddc8);
			*(uint *)(iVar1 + 0x14) = stunTime;
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func87075 -> ram:81a515e6  [EnemyAI::StopAttackCoroutine]
	private IEnumerator StopAttackCoroutine(float stunTime)
	{
			this.isAttack = 1;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// no recovered body in EnemyAI.c
	public EnemyAI()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func87076 -> ram:81a515f9  [EnemyAI+<StopAttackCoroutine>d__14::System.IDisposable.Dispose]
	uint EnemyAI__StopAttackCoroutine_d__14_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664af4 == '\0') {
				unnamed_function_1099(0x55d134);
				cRam00664af4 = '\x01';
			}
			if (*(int *)(param_1 + 8) != 0) {
				if (*(int *)(param_1 + 8) == 1) {
					*(uint *)(param_1 + 8) = 0xffffffff;
					*(byte *)(*(int *)(param_1 + 0x10) + 0x28) = 1;
				}
				return 0;
			}
			*(uint *)(param_1 + 8) = 0xffffffff;
			*(byte *)(*(int *)(param_1 + 0x10) + 0x28) = 0;
			uVar2 = *(uint *)(param_1 + 0x14);
			uVar1 = unnamed_function_95402(uRam0055d134);
			UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime(uVar1,uVar2,0);
			*(uint *)(param_1 + 8) = 1;
			*(uint *)(param_1 + 0xc) = uVar1;
			return 1;
	}

	// wasm func87077 -> ram:81a51681  [EnemyAI+<StopAttackCoroutine>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void EnemyAI__StopAttackCoroutine_d__14_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f118);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func87078 -> ram:81a516a8  [EnemyAI+<StopAttackCoroutine>d__14::System.Collections.IEnumerator.get_Current]
	void EnemyAI__StopAttackCoroutine_d__14_System_Collections_IEnumerator_get_Current(int param_1)
	{
			uint uVar1;

			if (cRam00664af5 == '\0') {
				unnamed_function_1099(0x567e78);
				cRam00664af5 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(param_1,uRam00567e78);
			*(uint *)(param_1 + 0x10) = uVar1;
			return;
	}
}

