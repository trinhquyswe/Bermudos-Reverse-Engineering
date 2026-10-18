// Spinny.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Spinny.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class Spinny : Action
{
	// Fields
	private Animator animator; // 0x2C
	private Vector2 direction; // 0x30
	private Weapon weapon; // 0x38
	private DealContactDamage dealContactDamage; // 0x3C
	private Rigidbody2D rb; // 0x40
	private float speed; // 0x44
	private int damage; // 0x48
	private bool isColliding; // 0x4C
	private MeleeSkills meleeSkills; // 0x50
	private BoxCollider2D boxCollider2D; // 0x54
	private SoundEffectSO spinnySoundEffect; // 0x58
	private float spinnyTime; // 0x5C

	// Methods

	// wasm func87006 -> ram:81a4e315  [Spinny::OnAwake]
	public override void OnAwake()
	{
			uint uVar1;
			uint uVar2;
			int iVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			ulong uStack_30;
			uint uStack_28;
			float fStack_20;
			float fStack_1c;
			float fStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664ad2 == '\0') {
				unnamed_function_1099(0x567e38);
				unnamed_function_1099(0x55bf98);
				unnamed_function_1099(0x55c620);
				unnamed_function_1099(0x565d6c);
				unnamed_function_1099(0x565d78);
				cRam00664ad2 = '\x01';
			}
			UnityEngine.Rigidbody2D.get_drag(this.rb,0,0);
			uVar2 = this.boxCollider2D;
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy
												(*(uint *)(**(int **)(iVar3 + 0x5c) + 0x10),uRam00567e38);
			if (*(int *)(iRam0055bf98 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bf98);
			}
			UnityEngine.Physics2D.get_queriesHitTriggers(uVar2,uVar1,0);
			uVar2 = UnityEngine.GameObject.AddComponent(*(uint *)(this + 8),0);
			uStack_8 = 0x3fc00000;
			uStack_28 = 0x3fc00000;
			uStack_10 = 0x3fc000003fc00000;
			uStack_30 = 0x3fc000003fc00000;
			UnityEngine.Transform.get_localScale(uVar2,&uStack_30,0);
			*(byte *)(this.dealContactDamage + 0x24) = 0;
			this.isColliding = 0;
			uVar2 = this.animator;
			if (*(int *)(iRam0055c620 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.SetTrigger
								(uVar2,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x98),0);
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			uVar2 = System.Linq.Enumerable.Count(*(uint *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
			UnityEngine.Camera.get_farClipPlane(&fStack_20,uVar2,0);
			fVar6 = fStack_18;
			fVar4 = fStack_1c;
			fVar5 = fStack_20;
			UnityEngine.Camera.get_farClipPlane(&fStack_20,*(uint *)(this + 0xc),0);
			if (cRam0066482c == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam0066482c = '\x01';
			}
			fVar4 = fVar4 - fStack_1c;
			fVar5 = fVar5 - fStack_20;
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + (fVar6 - fStack_18) * (fVar6 - fStack_18));
			if (1e-05 < fVar6) {
				fVar4 = fVar4 / fVar6;
				fVar5 = fVar5 / fVar6;
			}
			else {
				if (cRam00664829 == '\0') {
					unnamed_function_1099(0x55d048);
					cRam00664829 = '\x01';
				}
				fVar4 = (*(float **)(iRam0055d048 + 0x5c))[1];
				fVar5 = **(float **)(iRam0055d048 + 0x5c);
			}
			this.direction = CONCAT44(fVar4,fVar5);
			*(uint *)(this.dealContactDamage + 0x14) = this.damage;
			iVar3 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			GameResources.get_Instance(**(uint **)(iVar3 + 0x5c),this.spinnySoundEffect,1,0);
			this.spinnyTime = 0x40a00000;
			return;
	}

	// wasm func87007 -> ram:81a4e633  [Spinny::OnStart]
	public override void OnStart()
	{
			ulong uStack_10;
			ulong uStack_8;

			uStack_10 = CONCAT44(this.speed *
													 (float)((ulong)this.direction >> 0x20),
													 this.speed * (float)this.direction);
			uStack_8 = uStack_10;
			UnityEngine.Rigidbody2D.get_velocity_Injected(this.rb,&uStack_10,0);
			return;
	}

	// wasm func87008 -> ram:81a4e68e  [Spinny::OnFixedUpdate]
	public override void OnFixedUpdate()
	{
			uint uVar1;
			float fVar2;
			float fVar3;

			uVar1 = 2;
			if ((this.isColliding == '\0') && (fVar3 = this.spinnyTime, 0.0 <= fVar3)) {
				fVar2 = (float)UnityEngine.Time.get_time(0);
				this.spinnyTime = fVar3 - fVar2;
				uVar1 = 3;
			}
			return uVar1;
	}

	// wasm func87009 -> ram:81a4e6c4  [Spinny::OnUpdate]
	public override TaskStatus OnUpdate()
	{
			Weapon.Start(this.weapon,0);
			return;
	}

	// wasm func87010 -> ram:81a4e6d2  [Spinny::OnLateUpdate]
	public override void OnLateUpdate()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;
			int iVar3;

			if (cRam00664ad3 == '\0') {
				unnamed_function_1099(0x5734ac);
				cRam00664ad3 = '\x01';
			}
			uVar1 = UnityEngine.Collision2D.get_rigidbody(param_2,0);
			iVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
			iVar3 = UnityEngine.LayerMask.LayerToName(uRam005734ac,0);
			if (iVar2 == iVar3) {
				this.isColliding = 1;
			}
			return;
	}

	// wasm func87011 -> ram:81a4e71a  [Spinny::OnCollisionEnter2D]
	public override void OnCollisionEnter2D(Collision2D collision)
	{
			uint uVar1;
			int iVar2;
			uint uVar3;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			uint uStack_10;
			ulong uStack_8;

			if (cRam00664ad4 == '\0') {
				unnamed_function_1099(0x567e38);
				unnamed_function_1099(0x55bf98);
				unnamed_function_1099(0x565d6c);
				unnamed_function_1099(0x565d78);
				cRam00664ad4 = '\x01';
			}
			iVar2 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			SoundEffectManager.PlaySoundEffect
								(**(uint **)(iVar2 + 0x5c),this.spinnySoundEffect,0);
			UnityEngine.Rigidbody2D.get_drag(this.rb,0x47c35000,0);
			uVar3 = this.boxCollider2D;
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy
												(*(uint *)(**(int **)(iVar2 + 0x5c) + 0x10),uRam00567e38);
			if (*(int *)(iRam0055bf98 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bf98);
			}
			UnityEngine.Physics2D.IgnoreCollision(uVar3,uVar1,0,0);
			uVar3 = this.rb;
			if (cRam0066482a == '\0') {
				unnamed_function_1099(0x55d024);
				cRam0066482a = '\x01';
			}
			uStack_20 = **(ulong **)(iRam0055d024 + 0x5c);
			uStack_8 = uStack_20;
			UnityEngine.Rigidbody2D.get_velocity_Injected(uVar3,&uStack_20,0);
			*(byte *)(this.dealContactDamage + 0x24) = 1;
			uVar3 = UnityEngine.GameObject.AddComponent(*(uint *)(this + 8),0);
			uStack_10 = 0x40400000;
			uStack_28 = 0x40400000;
			uStack_18 = 0x4040000040400000;
			uStack_30 = 0x4040000040400000;
			UnityEngine.Transform.get_localScale(uVar3,&uStack_30,0);
			return;
	}

	// wasm func87012 -> ram:81a4e8e3  [Spinny::OnEnd]
	public override void OnEnd()
	{
			this.spinnyTime = 0x40a00000;
			this.speed = 0xa40a00000;
			BehaviorDesigner.Runtime.ObjectPool.cctor(this,0);
			return;
	}

	// wasm func87013 -> ram:81a4e905  [Spinny::.ctor]
	public Spinny()
	{
			uint uVar1;

			if (cRam00664ad5 == '\0') {
				unnamed_function_1099(0x567e18);
				unnamed_function_1099(0x567efc);
				unnamed_function_1099(0x567f18);
				cRam00664ad5 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f18);
			*(uint *)(this + 0x20) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e18);
			this.rb = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567efc);
			this.speed = uVar1;
			return;
	}
}

