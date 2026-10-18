// Player.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Player.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[RequireComponent(typeof(IdleEvent))]
[RequireComponent(typeof(DealDamageEvent))]
[DisallowMultipleComponent]
[RequireComponent(typeof(PlayerEffect))]
[RequireComponent(typeof(MovementToPositionEvent))]
[RequireComponent(typeof(AnimateEvent))]
[RequireComponent(typeof(Stamina))]
[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(DashEvent))]
[RequireComponent(typeof(HealthEvent))]
[RequireComponent(typeof(AttackEvent))]
[RequireComponent(typeof(MovementByVelocityEvent))]
[RequireComponent(typeof(DestroyedEvent))]
[RequireComponent(typeof(StaminaEvent))]
[RequireComponent(typeof(BashEvent))]
public class Player : MonoBehaviour
{
	// Fields
	public MovementByVelocityEvent movementByVelocityEvent; // 0x10
	public MovementToPositionEvent movementToPositionEvent; // 0x14
	public MovementDetailsSO movementDetails; // 0x18
	public IdleEvent idleEvent; // 0x1C
	public AnimateEvent animateEvent; // 0x20
	public AttackEvent attackEvent; // 0x24
	public DealDamageEvent dealDamageEvent; // 0x28
	public HealthEvent healthEvent; // 0x2C
	public DestroyedEvent destroyedEvent; // 0x30
	public BashEvent bashEvent; // 0x34
	public DashEvent dashEvent; // 0x38
	public StaminaEvent staminaEvent; // 0x3C
	public Stamina stamina; // 0x40
	public Animator animator; // 0x44
	public PlayerEffect playerEffect; // 0x48
	public Rage rage; // 0x4C
	public InventoryManager inventoryManager; // 0x50
	private DieEvent dieEvent; // 0x54
	public Vector2[] spawnPosition; // 0x58
	public SoundEffectSO runSoundEffect; // 0x5C
	public SoundEffectSO dashSoundEffect; // 0x60
	public SoundEffectSO attackSoundEffect; // 0x64
	public SoundEffectSO dieSoundEffect; // 0x68
	private bool isDead; // 0x6C

	// Methods

	// wasm func86568 -> ram:81a3c621  [Player::Awake]
	private void Awake()
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			uint uVar4;
			int iVar5;

			if (cRam0066493e == '\0') {
				unnamed_function_1099(0x5579d4);
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x557acc);
				unnamed_function_1099(0x56b8dc);
				unnamed_function_1099(0x56b8e0);
				unnamed_function_1099(0x56b8e4);
				unnamed_function_1099(0x565d78);
				cRam0066493e = '\x01';
			}
			if (cRam006649b1 == '\0') {
				unnamed_function_1099(0x55beac);
				unnamed_function_1099(0x55c894);
				cRam006649b1 = '\x01';
			}
			iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0xc);
			if (iVar3 != 0) {
				iVar5 = unnamed_function_95402(uRam0055beac);
				MapChangedEventArgs.ctor(iVar5,0);
				*(int *)(iVar5 + 8) = this;
				(**(code **)((ulong)*(uint *)(iVar3 + 0xc) * 4))
									(*(uint *)(iVar3 + 0x20),iVar5,*(uint *)(iVar3 + 0x14));
			}
			uVar4 = this.healthEvent;
			uVar1 = unnamed_function_95402(uRam00557acc);
			unnamed_function_60334(uVar1,this,uRam0056b8e4,0);
			HealthBar.ctor(uVar4,uVar1,0);
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar5 = **(int **)(iVar3 + 0x5c);
			uVar4 = *(uint *)(iVar5 + 0x20);
			uVar1 = unnamed_function_95402(uRam005579ec);
			unnamed_function_60038(uVar1,this,uRam0056b8e0,0);
			iVar3 = unnamed_function_85158(uVar4,uVar1,0);
			uVar1 = uRam005579ec;
			if (iVar3 == 0) {
				*(uint *)(iVar5 + 0x20) = 0;
			}
			else {
				iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
				if (iVar2 == 0) {
					unnamed_function_1116(iVar3,uVar1);
					do {
						halt_trap();
					} while( true );
				}
				*(int *)(iVar5 + 0x20) = iVar2;
				uVar1 = uRam005579ec;
				iVar5 = unnamed_function_1112(iVar3,uRam005579ec);
				if (iVar5 == 0) {
					unnamed_function_1116(iVar3,uVar1);
					do {
						halt_trap();
					} while( true );
				}
			}
			uVar4 = this.dieEvent;
			uVar1 = unnamed_function_95402(uRam005579d4);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056b8dc,0);
			DestroyedEventArgs.ctor(uVar4,uVar1,0);
			return;
	}

	// wasm func86570 -> ram:81a3c86e  [Player::OnEnable]
	private void OnEnable()
	{
			uint uVar1;
			uint uVar2;

			if (cRam0066493f == '\0') {
				unnamed_function_1099(0x5579d4);
				unnamed_function_1099(0x557acc);
				unnamed_function_1099(0x56b8dc);
				unnamed_function_1099(0x56b8e4);
				cRam0066493f = '\x01';
			}
			uVar2 = this.healthEvent;
			uVar1 = unnamed_function_95402(uRam00557acc);
			unnamed_function_60334(uVar1,this,uRam0056b8e4,0);
			HealthEvent.add_OnHealthChanged(uVar2,uVar1,0);
			uVar2 = this.dieEvent;
			uVar1 = unnamed_function_95402(uRam005579d4);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056b8dc,0);
			DieEvent.add_OnDie(uVar2,uVar1,0);
			return;
	}

	// wasm func86571 -> ram:81a3c907  [Player::OnDisable]
	private void OnDisable()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			ulong[] auStack_10 = new ulong[2];

			uVar1 = System.Linq.Enumerable.Count(param_2,0);
			UnityEngine.Camera.get_farClipPlane(auStack_10,uVar1,0);
			*this = auStack_10[0];
			return;
	}

	// no recovered body in Player.c
	public Vector2 GetPlayerPosition()
	{
		// <no recovered body>
	}

	// wasm func86573 -> ram:81a3cdf4  [Player::DieEvent_OnDie]
	private void DieEvent_OnDie(DieEvent dieEvent)
	{
			int iVar1;
			byte uVar2;
			uint uVar3;

			if (cRam00664941 == '\0') {
				unnamed_function_1099(0x55ab64);
				cRam00664941 = '\x01';
			}
			if (*(int *)(dieEvent + 0xc) < 1) {
				if (this.isDead == '\0') {
					return;
				}
				uVar3 = this.destroyedEvent;
				iVar1 = unnamed_function_95402(uRam0055ab64);
				DestroyedEvent.ctor(iVar1,0);
				*(byte *)(iVar1 + 8) = 1;
				DestroyedEvent.remove_OnDestroyed(uVar3,iVar1,0);
				uVar2 = 0;
			}
			else {
				uVar2 = 1;
			}
			this.isDead = uVar2;
			return;
	}

	// wasm func86574 -> ram:81a3ce62  [Player::HealthEvent_OnHealthChanged]
	private void HealthEvent_OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			ulong uStack_20;
			uint uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664942 == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x56b8e0);
				unnamed_function_1099(0x565d78);
				cRam00664942 = '\x01';
			}
			if (healthEvent == 0) {
				uVar1 = unnamed_function_44644(this,0);
				uVar1 = UnityEngine.GameObject.AddComponent(uVar1,0);
				uStack_20 = *(ulong *)(this.spawnPosition + 0x10);
				uStack_8 = 0;
				uStack_18 = 0;
				uStack_10 = uStack_20;
				UnityEngine.Transform.ctor(uVar1,&uStack_20,0);
				iVar3 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar4 = **(int **)(iVar3 + 0x5c);
				uVar5 = *(uint *)(iVar4 + 0x20);
				uVar1 = unnamed_function_95402(uRam005579ec);
				unnamed_function_60038(uVar1,this,uRam0056b8e0,0);
				iVar3 = unnamed_function_85160(uVar5,uVar1,0);
				uVar1 = uRam005579ec;
				if (iVar3 == 0) {
					*(uint *)(iVar4 + 0x20) = 0;
				}
				else {
					iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
					if (iVar2 == 0) {
						unnamed_function_1116(iVar3,uVar1);
						do {
							halt_trap();
						} while( true );
					}
					*(int *)(iVar4 + 0x20) = iVar2;
					uVar1 = uRam005579ec;
					iVar4 = unnamed_function_1112(iVar3,uRam005579ec);
					if (iVar4 == 0) {
						unnamed_function_1116(iVar3,uVar1);
						do {
							halt_trap();
						} while( true );
					}
				}
			}
			return;
	}

	// wasm func86575 -> ram:81a3cfb9  [Player::GameStateChanged_OnPlayer]
	private void GameStateChanged_OnPlayer(GameState gameState)
	{
			uint uVar1;
			int iVar2;
			int iVar3;

			if (cRam00664943 == '\0') {
				unnamed_function_1099(0x569a5c);
				unnamed_function_1099(0x572aa0);
				cRam00664943 = '\x01';
			}
			uVar1 = UnityEngine.Collision2D.get_rigidbody(this,0);
			iVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
			iVar3 = UnityEngine.LayerMask.LayerToName(uRam00572aa0,0);
			if (iVar2 == iVar3) {
				uVar1 = UnityEngine.Collision2D.get_rigidbody(this,0);
				iVar2 = UnityEngine.Object.set_name(uVar1,uRam00569a5c);
				if (*(byte *)(iVar2 + 0x28) != '\0') {
					UnityEngine.Rigidbody2D.set_isKinematic(*(uint *)(iVar2 + 0x1c),7,0);
				}
			}
			return;
	}

	// wasm func86576 -> ram:81a3d02b  [Player::OnCollisionStay2D]
	private void OnCollisionStay2D(Collision2D collision)
	{
			uint uVar1;
			int iVar2;
			int iVar3;

			if (cRam00664944 == '\0') {
				unnamed_function_1099(0x569a5c);
				unnamed_function_1099(0x572aa0);
				cRam00664944 = '\x01';
			}
			uVar1 = UnityEngine.Collision2D.get_rigidbody(this,0);
			iVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
			iVar3 = UnityEngine.LayerMask.LayerToName(uRam00572aa0,0);
			if (iVar2 == iVar3) {
				uVar1 = UnityEngine.Collision2D.get_rigidbody(this,0);
				iVar2 = UnityEngine.Object.set_name(uVar1,uRam00569a5c);
				if (*(byte *)(iVar2 + 0x28) != '\0') {
					UnityEngine.Rigidbody2D.set_isKinematic(*(uint *)(iVar2 + 0x1c),4,0);
				}
			}
			return;
	}

	// wasm func86577 -> ram:81a3d09d  [Player::OnCollisionExit2D]
	private void OnCollisionExit2D(Collision2D collision)
	{
			uint uVar1;

			if (cRam00664945 == '\0') {
				unnamed_function_1099(0x559d94);
				cRam00664945 = '\x01';
			}
			uVar1 = Mono.Security.ASN1Convert.ToOid(uRam00559d94,2);
			this.spawnPosition = uVar1;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func86578 -> ram:81a3d0d8  [Player::.ctor]
	public Player()
	{
			uint uVar1;

			if (cRam00664946 == '\0') {
				unnamed_function_1099(0x55e5cc);
				cRam00664946 = '\x01';
			}
			uVar1 = unnamed_function_95402(iRam0055e5cc);
			**(uint **)(iRam0055e5cc + 0x5c) = uVar1;
			return;
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86579 -> ram:81a3d118  [Player+<>c::.ctor]
	void Player___c__ctor()
	{
			uint uVar1;
			int iVar2;

			if (cRam00664947 == '\0') {
				unnamed_function_1099(0x565d58);
				unnamed_function_1099(0x565d78);
				cRam00664947 = '\x01';
			}
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar1 = unnamed_function_44644(*(uint *)(**(int **)(iVar2 + 0x5c) + 0x24),0);
			unnamed_function_44686(uVar1,0,0);
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			if (*(int *)(**(int **)(iVar2 + 0x5c) + 0x1c) == 4) {
				iVar2 = *(int *)(iRam00565d58 + 0x10);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				MusicManager.Start(**(uint **)(iVar2 + 0x5c),iVar2);
				iVar2 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				GameManager.TransitionToGame(**(uint **)(iVar2 + 0x5c),3,0);
			}
			return;
	}

	// wasm func86581 -> ram:81a3d3b1  [Player+<>c::<DieEvent_OnDie>b__28_0]
	void Player___c__DieEvent_OnDie_b__28_0(int param_1)
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			uint uVar5;

			if (cRam00664948 == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x567e2c);
				unnamed_function_1099(0x567eb4);
				unnamed_function_1099(0x567eb8);
				unnamed_function_1099(0x567ef0);
				unnamed_function_1099(0x55b644);
				unnamed_function_1099(0x56b924);
				unnamed_function_1099(0x565d78);
				cRam00664948 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(param_1,uRam00567ef0);
			*(uint *)(param_1 + 0x10) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(param_1,uRam00567e2c);
			*(uint *)(param_1 + 0x38) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(param_1,uRam00567eb4);
			*(uint *)(param_1 + 0x3c) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(param_1,uRam00567eb8);
			*(uint *)(param_1 + 0x40) = uVar1;
			uVar1 = unnamed_function_95402(uRam0055b644);
			InputSystem_Actions.get_asset(uVar1,0);
			*(uint *)(param_1 + 0x14) = uVar1;
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar4 = **(int **)(iVar3 + 0x5c);
			uVar5 = *(uint *)(iVar4 + 0x20);
			uVar1 = unnamed_function_95402(uRam005579ec);
			unnamed_function_60038(uVar1,param_1,uRam0056b924,0);
			iVar3 = unnamed_function_85158(uVar5,uVar1,0);
			uVar1 = uRam005579ec;
			if (iVar3 == 0) {
				*(uint *)(iVar4 + 0x20) = 0;
				return;
			}
			iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
			if (iVar2 == 0) {
				unnamed_function_1116(iVar3,uVar1);
				do {
					halt_trap();
				} while( true );
			}
			*(int *)(iVar4 + 0x20) = iVar2;
			uVar1 = uRam005579ec;
			iVar4 = unnamed_function_1112(iVar3,uRam005579ec);
			if (iVar4 != 0) {
				return;
			}
			unnamed_function_1116(iVar3,uVar1);
			do {
				halt_trap();
			} while( true );
	}
}

