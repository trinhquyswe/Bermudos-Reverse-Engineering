// PlayerControl.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in PlayerControl.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[RequireComponent(typeof(MovementByVelocityEvent))]
[DisallowMultipleComponent]
[RequireComponent(typeof(Player))]
public class PlayerControl : MonoBehaviour
{
	// Fields
	private Player player; // 0x10
	private InputSystem_Actions inputSystem_Actions; // 0x14
	private InputAction move; // 0x18
	private InputAction fire; // 0x1C
	private InputAction rightClick; // 0x20
	private InputAction spaceClick; // 0x24
	private InputAction beam; // 0x28
	private InputAction openInventory; // 0x2C
	private InputAction useItemAction; // 0x30
	private InputAction restAction; // 0x34
	private BeamByPlayer beamByPlayer; // 0x38
	private InventoryManager inventoryManager; // 0x3C
	private ItemConsumer useItem; // 0x40
	private Vector2 direction; // 0x44
	private Vector2 lastMoveDirection; // 0x4C
	private Vector2 previousLastDirection; // 0x54
	private float dashCooldownTimer; // 0x5C
	private float bashCooldownTimer; // 0x60
	private bool isRunningSoundPlaying; // 0x64

	// Methods

	// wasm func86582 -> ram:81a3d533  [PlayerControl::Awake]
	private void Awake()
	{
			uint uVar1;
			uint uVar2;
			int iVar3;
			uint[] auStack_10 = new uint[2];
			uint[] auStack_8 = new uint[2];

			if (cRam00664949 == '\0') {
				unnamed_function_1099(0x557a90);
				unnamed_function_1099(0x56b920);
				unnamed_function_1099(0x56b928);
				unnamed_function_1099(0x56b92c);
				unnamed_function_1099(0x56b910);
				unnamed_function_1099(0x56b914);
				unnamed_function_1099(0x56b918);
				unnamed_function_1099(0x56b91c);
				unnamed_function_1099(0x56f704);
				unnamed_function_1099(0x55e5dc);
				cRam00664949 = '\x01';
			}
			auStack_8[0] = this.inputSystem_Actions;
			uVar1 = UnityEngine.InputSystem.DefaultInputActions.PlayerActions.ctor(auStack_8,0);
			this.move = uVar1;
			auStack_8[0] = this.inputSystem_Actions;
			uVar1 = UnityEngine.InputSystem.DefaultInputActions.PlayerActions.get_Look
												(auStack_8,0);
			this.fire = uVar1;
			auStack_8[0] = this.inputSystem_Actions;
			uVar1 = UnityEngine.InputSystem.DefaultInputActions.UIActions.ctor(auStack_8,0);
			this.beam = uVar1;
			auStack_8[0] = this.inputSystem_Actions;
			uVar1 = UnityEngine.InputSystem.DefaultInputActions.UIActions.get_TrackedDeviceOrientation
												(auStack_8,0);
			this.rightClick = uVar1;
			auStack_8[0] = this.inputSystem_Actions;
			uVar1 = InputSystem_Actions_PlayerActions.get_RightClick(auStack_8,0);
			this.spaceClick = uVar1;
			auStack_10[0] = this.inputSystem_Actions;
			uVar1 = InputSystem_Actions_UIActions.get_TrackedDeviceOrientation(auStack_10,0);
			this.openInventory = uVar1;
			auStack_10[0] = this.inputSystem_Actions;
			uVar1 = InputSystem_Actions_UIActions.get_OpenInventory(auStack_10,0);
			this.useItemAction = uVar1;
			auStack_8[0] = this.inputSystem_Actions;
			uVar1 = UnityEngine.InputSystem.DefaultInputActions.UIActions.get_Navigate
												(auStack_8,0);
			this.restAction = uVar1;
			unnamed_function_48914(this.move,0);
			unnamed_function_48914(this.fire,0);
			unnamed_function_48914(this.beam,0);
			unnamed_function_48914(this.rightClick,0);
			unnamed_function_48914(this.spaceClick,0);
			unnamed_function_48914(this.useItemAction,0);
			unnamed_function_48914(this.restAction,0);
			uVar2 = this.fire;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b920,0);
			UnityEngine.InputSystem.InputAction.remove_canceled(uVar2,uVar1,0);
			uVar2 = this.beam;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b910,0);
			UnityEngine.InputSystem.InputAction.remove_canceled(uVar2,uVar1,0);
			uVar2 = this.rightClick;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b928,0);
			UnityEngine.InputSystem.InputAction.remove_canceled(uVar2,uVar1,0);
			uVar2 = this.rightClick;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b914,0);
			UnityEngine.InputSystem.InputAction.remove_started(uVar2,uVar1,0);
			uVar2 = this.spaceClick;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b92c,0);
			UnityEngine.InputSystem.InputAction.remove_canceled(uVar2,uVar1,0);
			uVar2 = this.openInventory;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b918,0);
			UnityEngine.InputSystem.InputAction.remove_canceled(uVar2,uVar1,0);
			uVar2 = this.useItemAction;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b91c,0);
			UnityEngine.InputSystem.InputAction.remove_canceled(uVar2,uVar1,0);
			uVar1 = this.restAction;
			if (*(int *)(iRam0055e5dc + 0x74) == 0) {
				unnamed_function_94848(iRam0055e5dc);
			}
			iVar3 = *(int *)(*(int *)(iRam0055e5dc + 0x5c) + 4);
			if (iVar3 == 0) {
				if (*(int *)(iRam0055e5dc + 0x74) == 0) {
					unnamed_function_94848(iRam0055e5dc);
				}
				uVar2 = **(uint **)(iRam0055e5dc + 0x5c);
				iVar3 = unnamed_function_95402(uRam00557a90);
				unnamed_function_60160(iVar3,uVar2,uRam0056f704,0);
				*(int *)(*(int *)(iRam0055e5dc + 0x5c) + 4) = iVar3;
			}
			UnityEngine.InputSystem.InputAction.remove_canceled(uVar1,iVar3,0);
			return;
	}

	// wasm func86583 -> ram:81a3d89e  [PlayerControl::OnEnable]
	private void OnEnable()
	{
			uint uVar1;
			uint uVar2;
			int iVar3;

			if (cRam0066494a == '\0') {
				unnamed_function_1099(0x557a90);
				unnamed_function_1099(0x56b920);
				unnamed_function_1099(0x56b928);
				unnamed_function_1099(0x56b92c);
				unnamed_function_1099(0x56b900);
				unnamed_function_1099(0x56b904);
				unnamed_function_1099(0x56b908);
				unnamed_function_1099(0x56b90c);
				unnamed_function_1099(0x56f700);
				unnamed_function_1099(0x55e5dc);
				cRam0066494a = '\x01';
			}
			UnityEngine.InputSystem.InputAction.ToString(this.move,0);
			UnityEngine.InputSystem.InputAction.ToString(this.fire,0);
			UnityEngine.InputSystem.InputAction.ToString(this.beam,0);
			UnityEngine.InputSystem.InputAction.ToString(this.rightClick,0);
			UnityEngine.InputSystem.InputAction.ToString(this.spaceClick,0);
			UnityEngine.InputSystem.InputAction.ToString(this.openInventory,0);
			UnityEngine.InputSystem.InputAction.ToString(this.useItemAction,0);
			UnityEngine.InputSystem.InputAction.ToString(this.restAction,0);
			uVar2 = this.fire;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b920,0);
			UnityEngine.InputSystem.InputAction.add_performed(uVar2,uVar1,0);
			uVar2 = this.beam;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b900,0);
			UnityEngine.InputSystem.InputAction.add_performed(uVar2,uVar1,0);
			uVar2 = this.rightClick;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b928,0);
			UnityEngine.InputSystem.InputAction.add_performed(uVar2,uVar1,0);
			uVar2 = this.rightClick;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b904,0);
			UnityEngine.InputSystem.InputAction.add_canceled(uVar2,uVar1,0);
			uVar2 = this.spaceClick;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b92c,0);
			UnityEngine.InputSystem.InputAction.add_performed(uVar2,uVar1,0);
			uVar2 = this.openInventory;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b908,0);
			UnityEngine.InputSystem.InputAction.add_performed(uVar2,uVar1,0);
			uVar2 = this.useItemAction;
			uVar1 = unnamed_function_95402(uRam00557a90);
			unnamed_function_60160(uVar1,this,uRam0056b90c,0);
			UnityEngine.InputSystem.InputAction.add_performed(uVar2,uVar1,0);
			uVar1 = this.restAction;
			if (*(int *)(iRam0055e5dc + 0x74) == 0) {
				unnamed_function_94848(iRam0055e5dc);
			}
			iVar3 = *(int *)(*(int *)(iRam0055e5dc + 0x5c) + 8);
			if (iVar3 == 0) {
				if (*(int *)(iRam0055e5dc + 0x74) == 0) {
					unnamed_function_94848(iRam0055e5dc);
				}
				uVar2 = **(uint **)(iRam0055e5dc + 0x5c);
				iVar3 = unnamed_function_95402(uRam00557a90);
				unnamed_function_60160(iVar3,uVar2,uRam0056f700,0);
				*(int *)(*(int *)(iRam0055e5dc + 0x5c) + 8) = iVar3;
			}
			UnityEngine.InputSystem.InputAction.add_performed(uVar1,iVar3,0);
			return;
	}

	// wasm func86584 -> ram:81a3db3a  [PlayerControl::OnDisable]
	private void OnDisable()
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			uint uVar5;

			if (cRam0066494b == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x56b924);
				unnamed_function_1099(0x565d78);
				cRam0066494b = '\x01';
			}
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
			unnamed_function_60038(uVar1,this,uRam0056b924,0);
			iVar3 = unnamed_function_85160(uVar5,uVar1,0);
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

	// wasm func86585 -> ram:81a3dc2d  [PlayerControl::OnDestroy]
	private void OnDestroy()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			uint uVar5;

			if (cRam0066494c == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x56b924);
				unnamed_function_1099(0x565d78);
				cRam0066494c = '\x01';
			}
			if ((param_2 & 0xfffffffe) == 2) {
				unnamed_function_48914(this.openInventory,0);
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
				unnamed_function_60038(uVar1,this,uRam0056b924,0);
				iVar3 = unnamed_function_85160(uVar5,uVar1,0);
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
				if (iVar4 == 0) {
					unnamed_function_1116(iVar3,uVar1);
					do {
						halt_trap();
					} while( true );
				}
			}
			return;
	}

	// wasm func86586 -> ram:81a3dd38  [PlayerControl::OnGameStateChange]
	private void OnGameStateChange(GameState gameState)
	{
			float fVar1;
			int iVar2;

			fVar1 = (float)TMPEffects.Components.TMPWriter.HideAllCharacters(0);
			if (this.bashCooldownTimer < fVar1) {
				fVar1 = (float)TMPEffects.Components.TMPWriter.HideAllCharacters(0);
				this.bashCooldownTimer = fVar1 + 0.5;
				BashEvent.remove_OnBash(*(uint *)(this.player + 0x34),0,this);
				if (cRam006649ba == '\0') {
					unnamed_function_1099(0x55c894);
					cRam006649ba = '\x01';
				}
				iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x18);
				if (iVar2 != 0) {
					(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
										(*(uint *)(iVar2 + 0x20),*(uint *)(iVar2 + 0x14));
				}
			}
			return;
	}

	// wasm func86589 -> ram:81a3de86  [PlayerControl::OnRightMouseClick]
	private void OnRightMouseClick(InputAction.CallbackContext ctx)
	{
			int iVar1;
			float fVar2;
			int iVar3;
			int iVar4;
			ulong uVar5;
			float fVar6;

			if (cRam0066494d == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam0066494d = '\x01';
			}
			uVar5 = this.direction;
			if (cRam0066482a == '\0') {
				unnamed_function_1099(0x55d024);
				cRam0066482a = '\x01';
			}
			fVar2 = (float)uVar5 - (float)**(ulong **)(iRam0055d024 + 0x5c);
			fVar6 = (float)((ulong)uVar5 >> 0x20) -
							(float)((ulong)**(ulong **)(iRam0055d024 + 0x5c) >> 0x20);
			if ((9.9999994e-11 <= fVar2 * fVar2 + fVar6 * fVar6) &&
				 (fVar2 = (float)UnityEngine.Rendering.Universal.ScriptableRenderer.InternalStartRendering(0),
				 this.dashCooldownTimer < fVar2)) {
				iVar3 = *(int *)(iRam00565d6c + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				SoundEffectManager.Start
									(**(uint **)(iVar3 + 0x5c),*(uint *)(this.player + 0x60),
									 this);
				fVar2 = (float)UnityEngine.Rendering.Universal.ScriptableRenderer.InternalStartRendering(0);
				this.dashCooldownTimer = fVar2 + 1.0;
				uVar5 = this.direction;
				iVar3 = *(int *)(this.player + 0x38);
				if (cRam00664986 == '\0') {
					unnamed_function_1099(0x55a800);
					cRam00664986 = '\x01';
				}
				iVar4 = *(int *)(iVar3 + 0x10);
				if (iVar4 != 0) {
					iVar1 = unnamed_function_95402(uRam0055a800);
					if (cRam00664987 == '\0') {
						unnamed_function_1099(0x55ad18);
						cRam00664987 = '\x01';
					}
					if (*(int *)(iRam0055ad18 + 0x74) == 0) {
						unnamed_function_94848(iRam0055ad18);
					}
					*(ulong *)(iVar1 + 8) = uVar5;
					(**(code **)((ulong)*(uint *)(iVar4 + 0xc) * 4))
										(*(uint *)(iVar4 + 0x20),iVar3,iVar1,*(uint *)(iVar4 + 0x14));
				}
				if (cRam006649bd == '\0') {
					unnamed_function_1099(0x55c894);
					cRam006649bd = '\x01';
				}
				iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x1c);
				if (iVar3 != 0) {
					(**(code **)((ulong)*(uint *)(iVar3 + 0xc) * 4))
										(*(uint *)(iVar3 + 0x20),*(uint *)(iVar3 + 0x14));
				}
			}
			return;
	}

	// wasm func86592 -> ram:81a3e130  [PlayerControl::OnSpaceClick]
	private void OnSpaceClick(InputAction.CallbackContext ctx)
	{
			if (10.0 < *(float *)(*(int *)(this.player + 0x40) + 0x14)) {
				AttackEvent.remove_OnAttack(*(uint *)(this.player + 0x24),0);
			}
			return;
	}

	// wasm func86593 -> ram:81a3e154  [PlayerControl::OnFireClick]
	private void OnFireClick(InputAction.CallbackContext ctx)
	{
			float fVar1;

			if (cRam0066494e == '\0') {
				unnamed_function_1099(0x56a010);
				cRam0066494e = '\x01';
			}
			PlayerControl.Update(this,this);
			fVar1 = (float)unnamed_function_73970(this.rightClick,uRam0056a010);
			if (0.0 < fVar1) {
				BashEvent.remove_OnBash(*(uint *)(this.player + 0x34),1,this);
			}
			return;
	}

	// wasm func86594 -> ram:81a3e1a8  [PlayerControl::Update]
	private void Update()
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			float fVar5;
			ulong uVar6;
			float fVar7;
			ulong uStack_108;
			ulong uStack_100;
			ulong uStack_f8;
			ulong uStack_f0;
			ulong uStack_e8;
			ulong uStack_e0;
			ulong uStack_d8;
			ulong uStack_d0;
			ulong uStack_c8;
			ulong uStack_c0;
			ulong uStack_b8;
			ulong uStack_b0;
			ulong uStack_a8;
			ulong uStack_a0;
			ulong uStack_98;
			ulong uStack_90;
			ulong uStack_88;
			ulong uStack_80;
			ulong uStack_78;
			ulong uStack_70;
			ulong uStack_68;
			ulong uStack_60;
			ulong uStack_58;
			ulong uStack_50;
			ulong uStack_48;
			ulong uStack_40;
			ulong uStack_38;
			ulong uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			float fStack_8;
			float fStack_4;

			uVar1 = 0;
			if (cRam0066494f == '\0') {
				unnamed_function_1099(0x56a010);
				unnamed_function_1099(0x56a014);
				unnamed_function_1099(0x565d6c);
				cRam0066494f = '\x01';
			}
			unnamed_function_73973(&fStack_8,this.move,uRam0056a014);
			if ((((fStack_8 == 0.0 && fStack_4 != 0.0) || ((fStack_8 != 0.0 && (fStack_4 == 0.0)))) &&
					(this.direction != 0.0)) && (*(float *)(this + 0x48) != 0.0)) {
				this.lastMoveDirection = this.direction;
			}
			unnamed_function_73973(&fStack_8,this.move,uRam0056a014);
			this.direction = CONCAT44(fStack_4,fStack_8);
			if (cRam0066482a == '\0') {
				unnamed_function_1099(0x55d024);
				cRam0066482a = '\x01';
			}
			fStack_8 = fStack_8 - (float)**(ulong **)(iRam0055d024 + 0x5c);
			fStack_4 = fStack_4 - (float)((ulong)**(ulong **)(iRam0055d024 + 0x5c) >> 0x20);
			if (fStack_8 * fStack_8 + fStack_4 * fStack_4 < 9.9999994e-11) {
				if (*(byte *)(this + 100) != '\0') {
					iVar3 = *(int *)(iRam00565d6c + 0x10);
					if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
						iVar3 = System.Threading.Monitor.Enter_1(iVar3);
					}
					iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
					if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
						iVar3 = System.Threading.Monitor.Enter_1(iVar3);
					}
					SoundEffectManager.PlaySoundEffect
										(**(uint **)(iVar3 + 0x5c),*(uint *)(this.player + 0x5c),
										 this);
					*(byte *)(this + 100) = 0;
				}
				iVar3 = *(int *)(this.player + 0x1c);
				iVar4 = *(int *)(iVar3 + 0x10);
				if (iVar4 != 0) {
					(**(code **)((ulong)*(uint *)(iVar4 + 0xc) * 4))
										(*(uint *)(iVar4 + 0x20),iVar3,*(uint *)(iVar4 + 0x14));
				}
				uStack_90 = this.lastMoveDirection;
				fVar5 = (float)this.previousLastDirection - (float)uStack_90;
				fVar7 = (float)((ulong)this.previousLastDirection >> 0x20) -
								(float)((ulong)uStack_90 >> 0x20);
				if (fVar5 * fVar5 + fVar7 * fVar7 < 9.9999994e-11) {
					return;
				}
				this.previousLastDirection = uStack_90;
				uStack_58 = 0xbf35c28fbf35c28f;
				uStack_98 = 0xbf35c28fbf35c28f;
				uStack_50 = uStack_90;
				iVar3 = HelperUtilities.ValidateCheckEnumerableValues(&uStack_90,&uStack_98,0x3c23d70a,0);
				if (iVar3 != 0) {
					AnimateEvent.remove_OnAnimate(*(uint *)(this.player + 0x20),7,0);
					return;
				}
				uStack_a0 = this.lastMoveDirection;
				uStack_68 = 0xbf35c28f3f35c28f;
				uStack_a8 = 0xbf35c28f3f35c28f;
				uStack_60 = uStack_a0;
				iVar3 = HelperUtilities.ValidateCheckEnumerableValues(&uStack_a0,&uStack_a8,0x3c23d70a,0);
				if (iVar3 == 0) {
					uStack_b0 = this.lastMoveDirection;
					uStack_78 = 0x3f35c28fbf35c28f;
					uStack_b8 = 0x3f35c28fbf35c28f;
					uStack_70 = uStack_b0;
					iVar3 = HelperUtilities.ValidateCheckEnumerableValues(&uStack_b0,&uStack_b8,0x3c23d70a,0);
					if (iVar3 != 0) {
						AnimateEvent.remove_OnAnimate(*(uint *)(this.player + 0x20),2,0);
						return;
					}
					uStack_c0 = this.lastMoveDirection;
					uStack_88 = 0x3f35c28f3f35c28f;
					uStack_c8 = 0x3f35c28f3f35c28f;
					uStack_80 = uStack_c0;
					iVar3 = HelperUtilities.ValidateCheckEnumerableValues(&uStack_c0,&uStack_c8,0x3c23d70a,0);
					if (iVar3 == 0) {
						return;
					}
					AnimateEvent.remove_OnAnimate(*(uint *)(this.player + 0x20),1,0);
					return;
				}
				AnimateEvent.remove_OnAnimate(*(uint *)(this.player + 0x20),6,0);
				return;
			}
			fVar5 = (float)unnamed_function_73970(this.fire,uRam0056a010);
			if (fVar5 != 0.0) {
				return;
			}
			uVar6 = this.direction;
			if (cRam00663576 == '\0') {
				unnamed_function_1099(0x55d024);
				cRam00663576 = '\x01';
			}
			iVar3 = *(int *)(iRam0055d024 + 0x5c);
			fVar5 = (float)uVar6 - (float)*(ulong *)(iVar3 + 0x10);
			fVar7 = (float)((ulong)uVar6 >> 0x20) -
							(float)((ulong)*(ulong *)(iVar3 + 0x10) >> 0x20);
			if (9.9999994e-11 <= fVar5 * fVar5 + fVar7 * fVar7) {
				uVar1 = 5;
				uVar6 = this.direction;
				if (cRam00661a11 == '\0') {
					unnamed_function_1099(0x55d024);
					cRam00661a11 = '\x01';
					iVar3 = *(int *)(iRam0055d024 + 0x5c);
				}
				fVar5 = (float)uVar6 - (float)*(ulong *)(iVar3 + 0x18);
				fVar7 = (float)((ulong)uVar6 >> 0x20) -
								(float)((ulong)*(ulong *)(iVar3 + 0x18) >> 0x20);
				if (9.9999994e-11 <= fVar5 * fVar5 + fVar7 * fVar7) {
					uVar1 = 4;
					uVar6 = this.direction;
					if (cRam00661a13 == '\0') {
						unnamed_function_1099(0x55d024);
						cRam00661a13 = '\x01';
						iVar3 = *(int *)(iRam0055d024 + 0x5c);
					}
					fVar5 = (float)uVar6 - (float)*(ulong *)(iVar3 + 0x20);
					fVar7 = (float)((ulong)uVar6 >> 0x20) -
									(float)((ulong)*(ulong *)(iVar3 + 0x20) >> 0x20);
					if (9.9999994e-11 <= fVar5 * fVar5 + fVar7 * fVar7) {
						uVar1 = 3;
						uVar6 = this.direction;
						if (cRam00661a14 == '\0') {
							unnamed_function_1099(0x55d024);
							cRam00661a14 = '\x01';
							iVar3 = *(int *)(iRam0055d024 + 0x5c);
						}
						fVar5 = (float)uVar6 - (float)*(ulong *)(iVar3 + 0x28);
						fVar7 = (float)((ulong)uVar6 >> 0x20) -
										(float)((ulong)*(ulong *)(iVar3 + 0x28) >> 0x20);
						if (9.9999994e-11 <= fVar5 * fVar5 + fVar7 * fVar7) {
							uStack_d0 = this.direction;
							uStack_18 = 0xbf35c28fbf35c28f;
							uStack_d8 = 0xbf35c28fbf35c28f;
							uVar1 = 7;
							uStack_10 = uStack_d0;
							iVar3 = HelperUtilities.ValidateCheckEnumerableValues(&uStack_d0,&uStack_d8,0x3c23d70a,0)
							;
							if (iVar3 == 0) {
								uStack_e0 = this.direction;
								uStack_28 = 0xbf35c28f3f35c28f;
								uStack_e8 = 0xbf35c28f3f35c28f;
								uVar1 = 6;
								uStack_20 = uStack_e0;
								iVar3 = HelperUtilities.ValidateCheckEnumerableValues
																	(&uStack_e0,&uStack_e8,0x3c23d70a,0);
								if (iVar3 == 0) {
									uStack_f0 = this.direction;
									uStack_38 = 0x3f35c28fbf35c28f;
									uStack_f8 = 0x3f35c28fbf35c28f;
									uVar1 = 2;
									uStack_30 = uStack_f0;
									iVar3 = HelperUtilities.ValidateCheckEnumerableValues
																		(&uStack_f0,&uStack_f8,0x3c23d70a,0);
									if (iVar3 == 0) {
										uStack_100 = this.direction;
										uStack_48 = 0x3f35c28f3f35c28f;
										uStack_108 = 0x3f35c28f3f35c28f;
										uVar1 = 1;
										uStack_40 = uStack_100;
										iVar3 = HelperUtilities.ValidateCheckEnumerableValues
																			(&uStack_100,&uStack_108,0x3c23d70a,0);
										if (iVar3 == 0) goto code_r0x81a3e5d4;
									}
								}
							}
						}
					}
				}
			}
			AnimateEvent.remove_OnAnimate(*(uint *)(this.player + 0x20),uVar1,0);
		code_r0x81a3e5d4:
			uVar6 = this.direction;
			iVar3 = *(int *)(this.player + 0x10);
			iVar4 = *(int *)(this.player + 0x18);
			fVar5 = *(float *)(iVar4 + 0xc);
			fVar7 = *(float *)(iVar4 + 0x10);
			if (fVar5 != fVar7) {
				fVar5 = (float)UnityEngine.Random.InitState(fVar5,fVar7,0);
			}
			if (cRam00664929 == '\0') {
				unnamed_function_1099(0x55bc7c);
				cRam00664929 = '\x01';
			}
			iVar4 = *(int *)(iVar3 + 0x10);
			if (iVar4 != 0) {
				iVar2 = unnamed_function_95402(uRam0055bc7c);
				if (cRam0066492a == '\0') {
					unnamed_function_1099(0x55ad18);
					cRam0066492a = '\x01';
				}
				if (*(int *)(iRam0055ad18 + 0x74) == 0) {
					unnamed_function_94848(iRam0055ad18);
				}
				*(float *)(iVar2 + 0x10) = fVar5;
				*(ulong *)(iVar2 + 8) = uVar6;
				(**(code **)((ulong)*(uint *)(iVar4 + 0xc) * 4))
									(*(uint *)(iVar4 + 0x20),iVar3,iVar2,*(uint *)(iVar4 + 0x14));
			}
			if (*(byte *)(this + 100) == '\0') {
				iVar3 = *(int *)(iRam00565d6c + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				GameResources.get_Instance
									(**(uint **)(iVar3 + 0x5c),*(uint *)(this.player + 0x5c),1,
									 this);
				*(byte *)(this + 100) = 1;
			}
			return;
	}

	// no recovered body in PlayerControl.c
	private void MovementInput()
	{
		// <no recovered body>
	}

	// no recovered body in PlayerControl.c
	public PlayerControl()
	{
		// <no recovered body>
	}

	// no recovered body in PlayerControl.c
	private void _OnEnable_b__20_0(InputAction.CallbackContext ctx)
	{
		// <no recovered body>
	}

	// no recovered body in PlayerControl.c
	private void _OnEnable_b__20_1(InputAction.CallbackContext ctx)
	{
		// <no recovered body>
	}

	// no recovered body in PlayerControl.c
	private void _OnEnable_b__20_2(InputAction.CallbackContext ctx)
	{
		// <no recovered body>
	}

	// no recovered body in PlayerControl.c
	private void _OnEnable_b__20_3(InputAction.CallbackContext ctx)
	{
		// <no recovered body>
	}

	// no recovered body in PlayerControl.c
	private void _OnDisable_b__21_0(InputAction.CallbackContext ctx)
	{
		// <no recovered body>
	}

	// no recovered body in PlayerControl.c
	private void _OnDisable_b__21_1(InputAction.CallbackContext ctx)
	{
		// <no recovered body>
	}

	// no recovered body in PlayerControl.c
	private void _OnDisable_b__21_2(InputAction.CallbackContext ctx)
	{
		// <no recovered body>
	}

	// wasm func86600 -> ram:81a3eb23  [PlayerControl::<OnDisable>b__21_3]
	private void _OnDisable_b__21_3(InputAction.CallbackContext ctx)
	{
			uint uVar1;

			if (cRam00664950 == '\0') {
				unnamed_function_1099(0x55e5dc);
				cRam00664950 = '\x01';
			}
			uVar1 = unnamed_function_95402(iRam0055e5dc);
			**(uint **)(iRam0055e5dc + 0x5c) = uVar1;
			return;
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86603 -> ram:81a3ebef  [PlayerControl+<>c::<OnDisable>b__21_4]
	void PlayerControl___c__OnDisable_b__21_4(int param_1)
	{
			uint uVar1;
			int iVar2;
			int iVar3;

			iVar3 = 0;
			if (cRam00664951 == '\0') {
				unnamed_function_1099(0x565d60);
				cRam00664951 = '\x01';
			}
			SingletonMonobehaviourPersistent_1.ctor(param_1,uRam00565d60);
			uVar1 = unnamed_function_44644(param_1,0);
			uVar1 = UnityEngine.GameObject.AddComponent(uVar1,0);
			*(uint *)(param_1 + 0x14) = uVar1;
			iVar2 = *(int *)(param_1 + 0x10);
			if (0 < *(int *)(iVar2 + 0xc)) {
				do {
					iVar2 = iVar2 + iVar3 * 0xc;
					PoolManager.Awake(param_1,*(uint *)(iVar2 + 0x14),*(uint *)(iVar2 + 0x10),
														 *(uint *)(iVar2 + 0x18),iVar3);
					iVar3 = iVar3 + 1;
					iVar2 = *(int *)(param_1 + 0x10);
				} while (iVar3 < *(int *)(iVar2 + 0xc));
			}
			return;
	}
}

