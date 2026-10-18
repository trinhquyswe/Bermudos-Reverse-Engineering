// AnimatePlayer.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in AnimatePlayer.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
[RequireComponent(typeof(AttackEvent))]
[RequireComponent(typeof(Player))]
[RequireComponent(typeof(AnimateEvent))]
[RequireComponent(typeof(IdleEvent))]
[RequireComponent(typeof(MovementByVelocityEvent))]
public class AnimatePlayer : MonoBehaviour
{
	// Fields
	private Player player; // 0x10
	private DieEvent dieEvent; // 0x14
	private Coroutine attackAnimationCoroutine; // 0x18
	private bool isAttacking; // 0x1C

	// Methods

	// wasm func86876 -> ram:81a489dc  [AnimatePlayer::Awake]
	private void Awake()
	{
			bool bVar1;
			int iVar2;
			uint uVar3;
			int iVar4;
			int iVar5;
			uint uVar6;
			int iVar7;

			if (cRam00664a81 == '\0') {
				unnamed_function_1099(0x5579fc);
				unnamed_function_1099(0x5579a8);
				unnamed_function_1099(0x5579d4);
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x557ac4);
				unnamed_function_1099(0x557af4);
				unnamed_function_1099(0x557aa8);
				unnamed_function_1099(0x566dd4);
				unnamed_function_1099(0x566dd8);
				unnamed_function_1099(0x566ddc);
				unnamed_function_1099(0x566de0);
				unnamed_function_1099(0x566de4);
				unnamed_function_1099(0x566de8);
				unnamed_function_1099(0x566dec);
				unnamed_function_1099(0x565d78);
				cRam00664a81 = '\x01';
			}
			iVar5 = *(int *)(this.player + 0x20);
			uVar3 = unnamed_function_95402(uRam00557aa8);
			unnamed_function_60334(uVar3,this,uRam00566dd4,0);
			if (cRam00664a7c == '\0') {
				unnamed_function_1099(0x557aa8);
				cRam00664a7c = '\x01';
			}
			iVar7 = *(int *)(iVar5 + 0x10);
			do {
				iVar2 = 0;
				iVar4 = unnamed_function_85158(iVar7,uVar3,0);
				uVar6 = uRam00557aa8;
				if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam00557aa8), iVar2 == 0)) {
					unnamed_function_1116(iVar4,uVar6);
					do {
						halt_trap();
					} while( true );
				}
				iVar2 = System.Net.WebOperation.ctor(iVar5 + 0x10,iVar2,iVar7);
				bVar1 = iVar7 != iVar2;
				iVar7 = iVar2;
			} while (bVar1);
			uVar6 = *(uint *)(this.player + 0x1c);
			uVar3 = unnamed_function_95402(uRam005579fc);
			UnityEngine.UIElements.VisualElement.get_layout(uVar3,this,uRam00566de8,0);
			Idle.ctor(uVar6,uVar3,0);
			uVar6 = *(uint *)(this.player + 0x10);
			uVar3 = unnamed_function_95402(uRam00557af4);
			unnamed_function_60334(uVar3,this,uRam00566dec,0);
			MovementByVelocity.ctor(uVar6,uVar3,0);
			iVar5 = *(int *)(this.player + 0x24);
			uVar3 = unnamed_function_95402(uRam005579a8);
			UnityEngine.UIElements.VisualElement.get_layout(uVar3,this,uRam00566dd8,0);
			if (cRam00664a8d == '\0') {
				unnamed_function_1099(0x5579a8);
				cRam00664a8d = '\x01';
			}
			iVar7 = *(int *)(iVar5 + 0x10);
			do {
				iVar2 = 0;
				iVar4 = unnamed_function_85158(iVar7,uVar3,0);
				uVar6 = uRam005579a8;
				if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam005579a8), iVar2 == 0)) {
					unnamed_function_1116(iVar4,uVar6);
					do {
						halt_trap();
					} while( true );
				}
				iVar2 = System.Net.WebOperation.ctor(iVar5 + 0x10,iVar2,iVar7);
				bVar1 = iVar7 != iVar2;
				iVar7 = iVar2;
			} while (bVar1);
			iVar5 = *(int *)(this.player + 0x30);
			uVar3 = unnamed_function_95402(uRam00557ac4);
			unnamed_function_60334(uVar3,this,uRam00566ddc,0);
			if (cRam00664b34 == '\0') {
				unnamed_function_1099(0x557ac4);
				cRam00664b34 = '\x01';
			}
			iVar7 = *(int *)(iVar5 + 0x10);
			do {
				iVar2 = 0;
				iVar4 = unnamed_function_85158(iVar7,uVar3,0);
				uVar6 = uRam00557ac4;
				if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam00557ac4), iVar2 == 0)) {
					unnamed_function_1116(iVar4,uVar6);
					do {
						halt_trap();
					} while( true );
				}
				iVar2 = System.Net.WebOperation.ctor(iVar5 + 0x10,iVar2,iVar7);
				bVar1 = iVar7 != iVar2;
				iVar7 = iVar2;
			} while (bVar1);
			iVar5 = this.dieEvent;
			uVar3 = unnamed_function_95402(uRam005579d4);
			UnityEngine.UIElements.VisualElement.get_layout(uVar3,this,uRam00566de0,0);
			if (cRam00664b37 == '\0') {
				unnamed_function_1099(0x5579d4);
				cRam00664b37 = '\x01';
			}
			iVar7 = *(int *)(iVar5 + 0x10);
			do {
				iVar2 = 0;
				iVar4 = unnamed_function_85158(iVar7,uVar3,0);
				uVar6 = uRam005579d4;
				if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam005579d4), iVar2 == 0)) {
					unnamed_function_1116(iVar4,uVar6);
					do {
						halt_trap();
					} while( true );
				}
				iVar2 = System.Net.WebOperation.ctor(iVar5 + 0x10,iVar2,iVar7);
				bVar1 = iVar7 != iVar2;
				iVar7 = iVar2;
			} while (bVar1);
			iVar5 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
				iVar5 = System.Threading.Monitor.Enter_1(iVar5);
			}
			iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
			if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
				iVar5 = System.Threading.Monitor.Enter_1(iVar5);
			}
			iVar7 = **(int **)(iVar5 + 0x5c);
			uVar6 = *(uint *)(iVar7 + 0x20);
			uVar3 = unnamed_function_95402(uRam005579ec);
			unnamed_function_60038(uVar3,this,uRam00566de4,0);
			iVar5 = unnamed_function_85158(uVar6,uVar3,0);
			uVar3 = uRam005579ec;
			if (iVar5 != 0) {
				iVar2 = unnamed_function_1112(iVar5,uRam005579ec);
				if (iVar2 == 0) {
					unnamed_function_1116(iVar5,uVar3);
					do {
						halt_trap();
					} while( true );
				}
				*(int *)(iVar7 + 0x20) = iVar2;
				uVar3 = uRam005579ec;
				iVar7 = unnamed_function_1112(iVar5,uRam005579ec);
				if (iVar7 != 0) {
					return;
				}
				unnamed_function_1116(iVar5,uVar3);
				do {
					halt_trap();
				} while( true );
			}
			*(uint *)(iVar7 + 0x20) = 0;
			return;
	}

	// wasm func86879 -> ram:81a48f15  [AnimatePlayer::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			int iVar2;
			int iVar3;
			uint uVar4;
			int iVar5;
			int iVar6;
			uint uVar7;

			if (cRam00664a82 == '\0') {
				unnamed_function_1099(0x5579fc);
				unnamed_function_1099(0x5579a8);
				unnamed_function_1099(0x5579d4);
				unnamed_function_1099(0x557ac4);
				unnamed_function_1099(0x557af4);
				unnamed_function_1099(0x557aa8);
				unnamed_function_1099(0x566dd4);
				unnamed_function_1099(0x566dd8);
				unnamed_function_1099(0x566ddc);
				unnamed_function_1099(0x566de0);
				unnamed_function_1099(0x566de8);
				unnamed_function_1099(0x566dec);
				cRam00664a82 = '\x01';
			}
			iVar6 = *(int *)(this.player + 0x20);
			uVar4 = unnamed_function_95402(uRam00557aa8);
			unnamed_function_60334(uVar4,this,uRam00566dd4,0);
			if (cRam00664a7d == '\0') {
				unnamed_function_1099(0x557aa8);
				cRam00664a7d = '\x01';
			}
			iVar2 = *(int *)(iVar6 + 0x10);
			while( true ) {
				iVar3 = 0;
				iVar5 = unnamed_function_85160(iVar2,uVar4,0);
				uVar7 = uRam00557aa8;
				if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam00557aa8), iVar3 == 0)) break;
				iVar3 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar3,iVar2);
				bVar1 = iVar2 == iVar3;
				iVar2 = iVar3;
				if (bVar1) {
					uVar7 = *(uint *)(this.player + 0x1c);
					uVar4 = unnamed_function_95402(uRam005579fc);
					UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566de8,0);
					IdleEvent.add_OnIdle(uVar7,uVar4,0);
					uVar7 = *(uint *)(this.player + 0x10);
					uVar4 = unnamed_function_95402(uRam00557af4);
					unnamed_function_60334(uVar4,this,uRam00566dec,0);
					MovementByVelocityEvent.add_OnMovementByVelocity(uVar7,uVar4,0);
					iVar6 = *(int *)(this.player + 0x24);
					uVar4 = unnamed_function_95402(uRam005579a8);
					UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566dd8,0);
					if (cRam00664a8e == '\0') {
						unnamed_function_1099(0x5579a8);
						cRam00664a8e = '\x01';
					}
					iVar2 = *(int *)(iVar6 + 0x10);
					while( true ) {
						iVar3 = 0;
						iVar5 = unnamed_function_85160(iVar2,uVar4,0);
						uVar7 = uRam005579a8;
						if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579a8), iVar3 == 0)) break;
						iVar3 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar3,iVar2);
						bVar1 = iVar2 == iVar3;
						iVar2 = iVar3;
						if (bVar1) {
							iVar6 = this.dieEvent;
							uVar4 = unnamed_function_95402(uRam005579d4);
							UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566de0,0);
							if (cRam00664b38 == '\0') {
								unnamed_function_1099(0x5579d4);
								cRam00664b38 = '\x01';
							}
							iVar2 = *(int *)(iVar6 + 0x10);
							while( true ) {
								iVar3 = 0;
								iVar5 = unnamed_function_85160(iVar2,uVar4,0);
								uVar7 = uRam005579d4;
								if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579d4), iVar3 == 0))
								break;
								iVar3 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar3,iVar2);
								bVar1 = iVar2 == iVar3;
								iVar2 = iVar3;
								if (bVar1) {
									iVar6 = *(int *)(this.player + 0x30);
									uVar4 = unnamed_function_95402(uRam00557ac4);
									unnamed_function_60334(uVar4,this,uRam00566ddc,0);
									if (cRam00664b35 == '\0') {
										unnamed_function_1099(0x557ac4);
										cRam00664b35 = '\x01';
									}
									iVar2 = *(int *)(iVar6 + 0x10);
									while( true ) {
										iVar3 = 0;
										iVar5 = unnamed_function_85160(iVar2,uVar4,0);
										uVar7 = uRam00557ac4;
										if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam00557ac4), iVar3 == 0))
										break;
										iVar3 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar3,iVar2);
										bVar1 = iVar2 == iVar3;
										iVar2 = iVar3;
										if (bVar1) {
											return;
										}
									}
									unnamed_function_1116(iVar5,uVar7);
									do {
										halt_trap();
									} while( true );
								}
							}
							unnamed_function_1116(iVar5,uVar7);
							do {
								halt_trap();
							} while( true );
						}
					}
					unnamed_function_1116(iVar5,uVar7);
					do {
						halt_trap();
					} while( true );
				}
			}
			unnamed_function_1116(iVar5,uVar7);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86882 -> ram:81a49375  [AnimatePlayer::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			bool bVar1;
			int iVar2;
			uint uVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam00664a83 == '\0') {
				unnamed_function_1099(0x5579fc);
				unnamed_function_1099(0x5579a8);
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x557ac4);
				unnamed_function_1099(0x557af4);
				unnamed_function_1099(0x566dd8);
				unnamed_function_1099(0x566ddc);
				unnamed_function_1099(0x566de4);
				unnamed_function_1099(0x566de8);
				unnamed_function_1099(0x566dec);
				unnamed_function_1099(0x55c620);
				unnamed_function_1099(0x565d78);
				cRam00664a83 = '\x01';
			}
			if (param_2 == 0) {
				uVar5 = *(uint *)(this.player + 0x1c);
				uVar3 = unnamed_function_95402(uRam005579fc);
				UnityEngine.UIElements.VisualElement.get_layout(uVar3,this,uRam00566de8,0);
				IdleEvent.add_OnIdle(uVar5,uVar3,0);
				uVar5 = *(uint *)(this.player + 0x10);
				uVar3 = unnamed_function_95402(uRam00557af4);
				unnamed_function_60334(uVar3,this,uRam00566dec,0);
				MovementByVelocityEvent.add_OnMovementByVelocity(uVar5,uVar3,0);
				iVar6 = *(int *)(this.player + 0x24);
				uVar3 = unnamed_function_95402(uRam005579a8);
				UnityEngine.UIElements.VisualElement.get_layout(uVar3,this,uRam00566dd8,0);
				if (cRam00664a8e == '\0') {
					unnamed_function_1099(0x5579a8);
					cRam00664a8e = '\x01';
				}
				iVar7 = *(int *)(iVar6 + 0x10);
				while( true ) {
					iVar2 = 0;
					iVar4 = unnamed_function_85160(iVar7,uVar3,0);
					uVar5 = uRam005579a8;
					if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam005579a8), iVar2 == 0)) break;
					iVar2 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar2,iVar7);
					bVar1 = iVar7 == iVar2;
					iVar7 = iVar2;
					if (bVar1) {
						iVar6 = *(int *)(this.player + 0x30);
						uVar3 = unnamed_function_95402(uRam00557ac4);
						unnamed_function_60334(uVar3,this,uRam00566ddc,0);
						if (cRam00664b35 == '\0') {
							unnamed_function_1099(0x557ac4);
							cRam00664b35 = '\x01';
						}
						iVar7 = *(int *)(iVar6 + 0x10);
						while( true ) {
							iVar2 = 0;
							iVar4 = unnamed_function_85160(iVar7,uVar3,0);
							uVar5 = uRam00557ac4;
							if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam00557ac4), iVar2 == 0))
							break;
							iVar2 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar2,iVar7);
							bVar1 = iVar7 == iVar2;
							iVar7 = iVar2;
							if (bVar1) {
								AnimatePlayer.InitializeAimAnimationParameters(this,iVar2);
								uVar3 = *(uint *)(this.player + 0x44);
								if (*(int *)(iRam0055c620 + 0x74) == 0) {
									unnamed_function_94848(iRam0055c620);
								}
								UnityEngine.Animator.GetBool_1
													(uVar3,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0xc),1,0);
								return;
							}
						}
						unnamed_function_1116(iVar4,uVar5);
						do {
							halt_trap();
						} while( true );
					}
				}
				unnamed_function_1116(iVar4,uVar5);
				do {
					halt_trap();
				} while( true );
			}
			if ((param_2 != 1) && (param_2 == 2)) {
				uVar5 = *(uint *)(this.player + 0x1c);
				uVar3 = unnamed_function_95402(uRam005579fc);
				UnityEngine.UIElements.VisualElement.get_layout(uVar3,this,uRam00566de8,0);
				Idle.ctor(uVar5,uVar3,0);
				uVar5 = *(uint *)(this.player + 0x10);
				uVar3 = unnamed_function_95402(uRam00557af4);
				unnamed_function_60334(uVar3,this,uRam00566dec,0);
				MovementByVelocity.ctor(uVar5,uVar3,0);
				iVar6 = *(int *)(this.player + 0x24);
				uVar3 = unnamed_function_95402(uRam005579a8);
				UnityEngine.UIElements.VisualElement.get_layout(uVar3,this,uRam00566dd8,0);
				if (cRam00664a8d == '\0') {
					unnamed_function_1099(0x5579a8);
					cRam00664a8d = '\x01';
				}
				iVar7 = *(int *)(iVar6 + 0x10);
				do {
					iVar2 = 0;
					iVar4 = unnamed_function_85158(iVar7,uVar3,0);
					uVar5 = uRam005579a8;
					if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam005579a8), iVar2 == 0)) {
						unnamed_function_1116(iVar4,uVar5);
						do {
							halt_trap();
						} while( true );
					}
					iVar2 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar2,iVar7);
					bVar1 = iVar7 != iVar2;
					iVar7 = iVar2;
				} while (bVar1);
				iVar6 = *(int *)(this.player + 0x30);
				uVar3 = unnamed_function_95402(uRam00557ac4);
				unnamed_function_60334(uVar3,this,uRam00566ddc,0);
				if (cRam00664b34 == '\0') {
					unnamed_function_1099(0x557ac4);
					cRam00664b34 = '\x01';
				}
				iVar7 = *(int *)(iVar6 + 0x10);
				do {
					iVar2 = 0;
					iVar4 = unnamed_function_85158(iVar7,uVar3,0);
					uVar5 = uRam00557ac4;
					if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam00557ac4), iVar2 == 0)) {
						unnamed_function_1116(iVar4,uVar5);
						do {
							halt_trap();
						} while( true );
					}
					iVar2 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar2,iVar7);
					bVar1 = iVar7 != iVar2;
					iVar7 = iVar2;
				} while (bVar1);
				iVar6 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
					iVar6 = System.Threading.Monitor.Enter_1(iVar6);
				}
				iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
				if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
					iVar6 = System.Threading.Monitor.Enter_1(iVar6);
				}
				iVar7 = **(int **)(iVar6 + 0x5c);
				uVar5 = *(uint *)(iVar7 + 0x20);
				uVar3 = unnamed_function_95402(uRam005579ec);
				unnamed_function_60038(uVar3,this,uRam00566de4,0);
				iVar6 = unnamed_function_85160(uVar5,uVar3,0);
				uVar3 = uRam005579ec;
				if (iVar6 == 0) {
					*(uint *)(iVar7 + 0x20) = 0;
					return;
				}
				iVar2 = unnamed_function_1112(iVar6,uRam005579ec);
				if (iVar2 == 0) {
					unnamed_function_1116(iVar6,uVar3);
					do {
						halt_trap();
					} while( true );
				}
				*(int *)(iVar7 + 0x20) = iVar2;
				uVar3 = uRam005579ec;
				iVar7 = unnamed_function_1112(iVar6,uRam005579ec);
				if (iVar7 == 0) {
					unnamed_function_1116(iVar6,uVar3);
					do {
						halt_trap();
					} while( true );
				}
			}
			return;
	}

	// wasm func86884 -> ram:81a49902  [AnimatePlayer::GameStateChanged_OnPlayer]
	private void GameStateChanged_OnPlayer(GameState gameState)
	{
			AnimatePlayer.DieEvent_OnDie(this,this);
			AnimatePlayer.InitializeStateAnimationParameters(this,*(uint *)(gameState + 8),this);
			return;
	}

	// wasm func86887 -> ram:81a49bb7  [AnimatePlayer::AnimatePlayer_OnAnimate]
	private void AnimatePlayer_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs)
	{
			uint uVar1;

			if (cRam00664a84 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a84 = '\x01';
			}
			if (this.attackAnimationCoroutine == 0) {
				AnimatePlayer.InitializeAimAnimationParameters(this,this);
				uVar1 = *(uint *)(this.player + 0x44);
				if (*(int *)(iRam0055c620 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c620);
				}
				UnityEngine.Animator.GetBool_1(uVar1,**(uint **)(iRam0055c620 + 0x5c),1,0);
			}
			return;
	}

	// wasm func86888 -> ram:81a49c20  [AnimatePlayer::IdleEvent_OnIdle]
	private void IdleEvent_OnIdle(IdleEvent idleEvent)
	{
			uint uVar1;

			if (cRam00664a85 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a85 = '\x01';
			}
			if (this.attackAnimationCoroutine == 0) {
				AnimatePlayer.InitializeAimAnimationParameters(this,this);
				uVar1 = *(uint *)(this.player + 0x44);
				if (*(int *)(iRam0055c620 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c620);
				}
				UnityEngine.Animator.GetBool_1
									(uVar1,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 4),1,0);
			}
			return;
	}

	// wasm func86889 -> ram:81a49c8a  [AnimatePlayer::MovementByVelocityEvent_OnMovementByVelocity]
	private void MovementByVelocityEvent_OnMovementByVelocity(MovementByVelocityEvent movementByVelocityEvent, MovementByVelocityArgs movementByVelocityArgs)
	{
			bool bVar1;
			int iVar2;
			int iVar3;
			uint uVar4;
			int iVar5;
			uint uVar6;
			int iVar7;

			if (cRam00664a86 == '\0') {
				unnamed_function_1099(0x5579fc);
				unnamed_function_1099(0x5579a8);
				unnamed_function_1099(0x557af4);
				unnamed_function_1099(0x566dd8);
				unnamed_function_1099(0x566de8);
				unnamed_function_1099(0x566dec);
				unnamed_function_1099(0x55c620);
				cRam00664a86 = '\x01';
			}
			uVar6 = *(uint *)(this.player + 0x1c);
			uVar4 = unnamed_function_95402(uRam005579fc);
			UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566de8,0);
			IdleEvent.add_OnIdle(uVar6,uVar4,0);
			uVar6 = *(uint *)(this.player + 0x10);
			uVar4 = unnamed_function_95402(uRam00557af4);
			unnamed_function_60334(uVar4,this,uRam00566dec,0);
			MovementByVelocityEvent.add_OnMovementByVelocity(uVar6,uVar4,0);
			iVar7 = *(int *)(this.player + 0x24);
			uVar4 = unnamed_function_95402(uRam005579a8);
			UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566dd8,0);
			if (cRam00664a8e == '\0') {
				unnamed_function_1099(0x5579a8);
				cRam00664a8e = '\x01';
			}
			iVar2 = *(int *)(iVar7 + 0x10);
			while( true ) {
				iVar3 = 0;
				iVar5 = unnamed_function_85160(iVar2,uVar4,0);
				uVar6 = uRam005579a8;
				if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579a8), iVar3 == 0)) break;
				iVar3 = System.Net.WebOperation.ctor(iVar7 + 0x10,iVar3,iVar2);
				bVar1 = iVar2 == iVar3;
				iVar2 = iVar3;
				if (bVar1) {
					AnimatePlayer.InitializeAimAnimationParameters(this,iVar3);
					uVar4 = *(uint *)(this.player + 0x44);
					if (*(int *)(iRam0055c620 + 0x74) == 0) {
						unnamed_function_94848(iRam0055c620);
					}
					UnityEngine.Animator.GetBool_1
										(uVar4,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0xc),1,0);
					return;
				}
			}
			unnamed_function_1116(iVar5,uVar6);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86890 -> ram:81a49e23  [AnimatePlayer::DestroyedEvent_OnDestroyed]
	private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
	{
			int iVar1;
			uint uVar2;

			if (cRam00664a87 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a87 = '\x01';
			}
			AnimatePlayer.InitializeAimAnimationParameters(this,this);
			uVar2 = *(uint *)(this.player + 0x44);
			if (*(int *)(iRam0055c620 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.GetBool_1
								(uVar2,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 8),1,0);
			if (this.attackAnimationCoroutine != 0) {
				UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackAnimationCoroutine,0);
			}
			if (cRam00664a8c == '\0') {
				unnamed_function_1099(0x55d780);
				cRam00664a8c = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055d780);
			*(int *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			uVar2 = UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			this.attackAnimationCoroutine = uVar2;
			return;
	}

	// wasm func86892 -> ram:81a49f3d  [AnimatePlayer::AttackEvent_OnAttack]
	private void AttackEvent_OnAttack(AttackEvent attackEvent)
	{
			bool bVar1;
			int iVar2;
			int iVar3;
			uint uVar4;
			int iVar5;
			uint uVar6;
			int iVar7;

			if (cRam00664a88 == '\0') {
				unnamed_function_1099(0x5579fc);
				unnamed_function_1099(0x5579a8);
				unnamed_function_1099(0x557af4);
				unnamed_function_1099(0x566dd8);
				unnamed_function_1099(0x566de8);
				unnamed_function_1099(0x566dec);
				cRam00664a88 = '\x01';
			}
			uVar6 = *(uint *)(this.player + 0x1c);
			uVar4 = unnamed_function_95402(uRam005579fc);
			UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566de8,0);
			Idle.ctor(uVar6,uVar4,0);
			uVar6 = *(uint *)(this.player + 0x10);
			uVar4 = unnamed_function_95402(uRam00557af4);
			unnamed_function_60334(uVar4,this,uRam00566dec,0);
			MovementByVelocity.ctor(uVar6,uVar4,0);
			iVar7 = *(int *)(this.player + 0x24);
			uVar4 = unnamed_function_95402(uRam005579a8);
			UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566dd8,0);
			if (cRam00664a8d == '\0') {
				unnamed_function_1099(0x5579a8);
				cRam00664a8d = '\x01';
			}
			iVar2 = *(int *)(iVar7 + 0x10);
			while( true ) {
				iVar3 = 0;
				iVar5 = unnamed_function_85158(iVar2,uVar4,0);
				uVar6 = uRam005579a8;
				if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579a8), iVar3 == 0)) break;
				iVar3 = System.Net.WebOperation.ctor(iVar7 + 0x10,iVar3,iVar2);
				bVar1 = iVar2 == iVar3;
				iVar2 = iVar3;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar5,uVar6);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86885 -> ram:81a4991b  [AnimatePlayer::DieEvent_OnDie]
	private void DieEvent_OnDie(DieEvent dieEvent)
	{
			uint uVar1;

			if (cRam00664a89 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a89 = '\x01';
			}
			uVar1 = *(uint *)(this.player + 0x44);
			if (*(int *)(iRam0055c620 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.GetBool_1
								(uVar1,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x10),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.player + 0x44),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x1c),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.player + 0x44),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x20),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.player + 0x44),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x24),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.player + 0x44),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x28),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.player + 0x44),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x18),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.player + 0x44),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x2c),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.player + 0x44),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x30),0,0);
			return;
	}

	// wasm func86883 -> ram:81a49850  [AnimatePlayer::InitializeAimAnimationParameters]
	private void InitializeAimAnimationParameters()
	{
			uint uVar1;

			if (cRam00664a8a == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a8a = '\x01';
			}
			uVar1 = *(uint *)(this.player + 0x44);
			if (*(int *)(iRam0055c620 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.GetBool_1(uVar1,**(uint **)(iRam0055c620 + 0x5c),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.player + 0x44),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 4),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.player + 0x44),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 8),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.player + 0x44),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0xc),0,0);
			return;
	}

	// wasm func86886 -> ram:81a49a46  [AnimatePlayer::InitializeStateAnimationParameters]
	private void InitializeStateAnimationParameters()
	{
			int iVar1;
			uint uVar2;
			int iVar3;

			if (cRam00664a8b == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a8b = '\x01';
			}
			if (param_2 == 0) {
				uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x44);
				iVar1 = 0x10;
				iVar3 = *(int *)(iRam0055c620 + 0x74);
			}
			else if (param_2 == 1) {
				uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x44);
				iVar1 = 0x1c;
				iVar3 = *(int *)(iRam0055c620 + 0x74);
			}
			else if (param_2 == 2) {
				uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x44);
				iVar1 = 0x20;
				iVar3 = *(int *)(iRam0055c620 + 0x74);
			}
			else if (param_2 == 3) {
				uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x44);
				iVar1 = 0x24;
				iVar3 = *(int *)(iRam0055c620 + 0x74);
			}
			else if (param_2 == 4) {
				uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x44);
				iVar1 = 0x28;
				iVar3 = *(int *)(iRam0055c620 + 0x74);
			}
			else if (param_2 == 5) {
				uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x44);
				iVar1 = 0x18;
				iVar3 = *(int *)(iRam0055c620 + 0x74);
			}
			else if (param_2 == 6) {
				uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x44);
				iVar1 = 0x2c;
				iVar3 = *(int *)(iRam0055c620 + 0x74);
			}
			else {
				if (param_2 != 7) {
					return;
				}
				uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x44);
				iVar1 = 0x30;
				iVar3 = *(int *)(iRam0055c620 + 0x74);
			}
			if (iVar3 == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.GetBool_1
								(uVar2,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + iVar1),1,0);
			return;
	}

	// wasm func86891 -> ram:81a49ede  [AnimatePlayer::SetAimAnimationParameters]
	private void SetAimAnimationParameters(AimDirection aimDirection)
	{
			int iVar1;
			uint uVar2;

			if (this.attackAnimationCoroutine != 0) {
				UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackAnimationCoroutine,0);
			}
			if (cRam00664a8c == '\0') {
				unnamed_function_1099(0x55d780);
				cRam00664a8c = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055d780);
			*(int *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			uVar2 = UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			this.attackAnimationCoroutine = uVar2;
			return;
	}

	// wasm func86893 -> ram:81a4a08e  [AnimatePlayer::PlayAttackAnimation]
	private void PlayAttackAnimation()
	{
			int iVar1;

			if (cRam00664a8c == '\0') {
				unnamed_function_1099(0x55d780);
				cRam00664a8c = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055d780);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// no recovered body in AnimatePlayer.c
	private IEnumerator PlayAttackAnimationCoroutine()
	{
		// <no recovered body>
	}

	// no recovered body in AnimatePlayer.c
	public AnimatePlayer()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86858 -> ram:81a47f43  [AnimatePlayer+<PlayAttackAnimationCoroutine>d__18::System.Collections.IEnumerator.get_Current]
	void AnimatePlayer__PlayAttackAnimationCoroutine_d__18_System_Collections_IEnumerator_get_Current(int param_1, uint param_2)
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			int iVar5;

			if (cRam00664a8d == '\0') {
				unnamed_function_1099(0x5579a8);
				cRam00664a8d = '\x01';
			}
			iVar3 = *(int *)(param_1 + 0x10);
			while( true ) {
				iVar4 = 0;
				iVar5 = unnamed_function_85158(iVar3,param_2,0);
				uVar2 = uRam005579a8;
				if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam005579a8), iVar4 == 0)) break;
				iVar4 = System.Net.WebOperation.ctor(param_1 + 0x10,iVar4,iVar3);
				bVar1 = iVar3 == iVar4;
				iVar3 = iVar4;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar5,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86894 -> ram:81a4a0cc  [AnimatePlayer+<PlayAttackAnimationCoroutine>d__18::System.IDisposable.Dispose]
	uint AnimatePlayer__PlayAttackAnimationCoroutine_d__18_System_IDisposable_Dispose(int param_1)
	{
			ulong uVar1;
			float fVar2;
			uint uVar3;
			int iVar4;
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

			uVar3 = 0;
			iVar4 = *(int *)(param_1 + 8);
			if (iVar4 == 0) {
				*(uint *)(param_1 + 0x14) = 0;
				*(ulong *)(param_1 + 8) = 1;
				uVar3 = 1;
			}
			else if ((iVar4 == 1) || (iVar4 == 2)) {
				iVar4 = *(int *)(param_1 + 0x10);
				*(uint *)(param_1 + 8) = 0xffffffff;
				UnityEngine.Animator.GetAnimatorStateInfo
									(&uStack_50,*(uint *)(*(int *)(iVar4 + 0x10) + 0x44),0,0);
				uStack_8 = uStack_30;
				uStack_10 = uStack_38;
				uStack_18 = uStack_40;
				uStack_20 = uStack_48;
				uVar1 = uStack_20;
				uStack_28 = uStack_50;
				uStack_20._4_4_ = (float)((ulong)uStack_48 >> 0x20);
				if (1.0 <= uStack_20._4_4_) {
					*(uint *)(iVar4 + 0x18) = 0;
				}
				else {
					uStack_20 = uVar1;
					UnityEngine.Animator.GetAnimatorStateInfo
										(&uStack_50,*(uint *)(*(int *)(iVar4 + 0x10) + 0x44),0,0);
					uStack_8 = uStack_30;
					uStack_10 = uStack_38;
					uStack_18 = uStack_40;
					uStack_20 = uStack_48;
					uVar1 = uStack_20;
					uStack_28 = uStack_50;
					uStack_20._4_4_ = (float)((ulong)uStack_48 >> 0x20);
					fVar2 = uStack_20._4_4_;
					if (uStack_20._4_4_ < *(float *)(param_1 + 0x14)) {
						uStack_20 = uVar1;
						UnityEngine.MonoBehaviour.StopCoroutine(iVar4,*(uint *)(iVar4 + 0x18),0);
						*(uint *)(iVar4 + 0x18) = 0;
					}
					*(float *)(param_1 + 0x14) = fVar2;
					*(ulong *)(param_1 + 8) = 2;
					uVar3 = 1;
				}
			}
			return uVar3;
	}

	// wasm func86895 -> ram:81a4a222  [AnimatePlayer+<PlayAttackAnimationCoroutine>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void AnimatePlayer__PlayAttackAnimationCoroutine_d__18_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56ea18);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

