// Enemy.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Enemy.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[RequireComponent(typeof(EnemyStateEvent))]
[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(Health))]
[RequireComponent(typeof(EnemyEffect))]
[RequireComponent(typeof(AnimateEvent))]
[RequireComponent(typeof(HealthEvent))]
[RequireComponent(typeof(Rigidbody2D))]
[RequireComponent(typeof(SpriteRenderer))]
[RequireComponent(typeof(PoiseEvent))]
[DisallowMultipleComponent]
[RequireComponent(typeof(AttackEvent))]
[RequireComponent(typeof(MoveByEnemyAIEvent))]
[RequireComponent(typeof(IdleEvent))]
public class Enemy : MonoBehaviour
{
	// Fields
	public AnimateEvent animateEvent; // 0x10
	public HealthEvent healthEvent; // 0x14
	public EnemyStateEvent enemyStateEvent; // 0x18
	public Animator animator; // 0x1C
	public Health health; // 0x20
	public EnemyEffect enemyEffect; // 0x24
	public PoiseEvent poiseEvent; // 0x28
	private SpriteRenderer spriteRenderer; // 0x2C
	public IdleEvent idleEvent; // 0x30
	public MoveByEnemyAIEvent moveByEnemyAIEvent; // 0x34
	public AttackEvent attackEvent; // 0x38
	public EnemyAI enemyAI; // 0x3C
	public AnimationEnemyType animationEnemyType; // 0x40
	public string mapKey; // 0x44
	public int enemyID; // 0x48

	// Methods

	// wasm func87054 -> ram:81a5017b  [Enemy::Awake]
	private void Awake()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664aed == '\0') {
				unnamed_function_1099(0x557acc);
				unnamed_function_1099(0x568eac);
				cRam00664aed = '\x01';
			}
			iVar7 = this.healthEvent;
			uVar5 = unnamed_function_95402(uRam00557acc);
			unnamed_function_60334(uVar5,this,uRam00568eac,0);
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

	// wasm func87055 -> ram:81a50246  [Enemy::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664aee == '\0') {
				unnamed_function_1099(0x557acc);
				unnamed_function_1099(0x568eac);
				cRam00664aee = '\x01';
			}
			iVar7 = this.healthEvent;
			uVar5 = unnamed_function_95402(uRam00557acc);
			unnamed_function_60334(uVar5,this,uRam00568eac,0);
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

	// wasm func87056 -> ram:81a50310  [Enemy::OnDisable]
	private void OnDisable()
	{
		uint param_2 = 0; // IL2CPP hidden slot
		uint param_3 = 0; // IL2CPP hidden slot
			this.enemyID = param_3;
			this.mapKey = param_2;
			return;
	}

	// wasm func87057 -> ram:81a50321  [Enemy::InitializeEnemy]
	public void InitializeEnemy(string mapName, int enemyID)
	{
			if (*(int *)(mapName + 0xc) < 1) {
				Enemy.HealthEvent_OnHealthLost(this,mapName);
			}
			return;
	}

	// wasm func87058 -> ram:81a50338  [Enemy::HealthEvent_OnHealthLost]
	private void HealthEvent_OnHealthLost(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
	{
			int iVar1;
			int iVar2;
			int iVar3;

			if (cRam00664aef == '\0') {
				unnamed_function_1099(0x567e70);
				unnamed_function_1099(0x55ab64);
				cRam00664aef = '\x01';
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
			*(byte *)(iVar2 + 8) = 0;
			iVar3 = *(int *)(iVar1 + 0x10);
			if (iVar3 != 0) {
				(**(code **)((ulong)*(uint *)(iVar3 + 0xc) * 4))
									(*(uint *)(iVar3 + 0x20),iVar1,iVar2,*(uint *)(iVar3 + 0x14));
			}
			return;
	}

	// no recovered body in Enemy.c
	private void EnemyDestroyed()
	{
		// <no recovered body>
	}

	// wasm func87059 -> ram:81a503de  [Enemy::.ctor]
	public Enemy()
	{
			uint uVar1;

			if (cRam00664af0 == '\0') {
				unnamed_function_1099(0x567e80);
				unnamed_function_1099(0x567e88);
				unnamed_function_1099(0x567e8c);
				unnamed_function_1099(0x567e78);
				cRam00664af0 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e78);
			this.animator = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e8c);
			this.enemyStateEvent = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e80);
			this.healthEvent = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e88);
			this.animateEvent = uVar1;
			return;
	}
}

