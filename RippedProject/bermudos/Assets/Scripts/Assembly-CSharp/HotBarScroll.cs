// HotBarScroll.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in HotBarScroll.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class HotBarScroll : MonoBehaviour
{
	// Fields
	private Image itemIcom; // 0x10
	private TextMeshProUGUI itemQuantity; // 0x14
	private int currentIndex; // 0x18
	private Sprite emptyItemSprite; // 0x1C

	// Methods

	// wasm func86326 -> ram:81a3085a  [HotBarScroll::Awake]
	private void Awake()
	{
			uint uVar1;

			if (cRam006648ad == '\0') {
				unnamed_function_1099(0x557a38);
				unnamed_function_1099(0x569e60);
				unnamed_function_1099(0x569e64);
				cRam006648ad = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a38);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam00569e60,0);
			StaticEventHandler.add_OnItemChanged(uVar1,this);
			uVar1 = unnamed_function_95402(uRam00557a38);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam00569e64,0);
			StaticEventHandler.add_OnMoveItemToHotBar(uVar1,this);
			return;
	}

	// wasm func86329 -> ram:81a30a05  [HotBarScroll::OnDestroy]
	private void OnDestroy()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			int *piVar5;
			int iVar6;

			if (cRam006648ae == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x569e5c);
				unnamed_function_1099(0x563428);
				unnamed_function_1099(0x56342c);
				unnamed_function_1099(0x565d78);
				cRam006648ae = '\x01';
			}
			if ((param_2 & 0xfffffffe) == 2) {
				uVar1 = unnamed_function_44644(this,0);
				unnamed_function_44686(uVar1,1,0);
				this.emptyItemSprite = *(uint *)(this.itemIcom + 0x80);
				iVar4 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
					iVar4 = System.Threading.Monitor.Enter_1(iVar4);
				}
				iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
				if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
					iVar4 = System.Threading.Monitor.Enter_1(iVar4);
				}
				iVar4 = InventoryDescription.ctor
													(*(uint *)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 0x50),this);
				if (*(int *)(iVar4 + 0xc) != 0) {
					this.currentIndex = 0;
					uVar1 = this.itemIcom;
					iVar4 = *(int *)(iRam00565d78 + 0x10);
					if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
						iVar4 = System.Threading.Monitor.Enter_1(iVar4);
					}
					iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
					if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
						iVar4 = System.Threading.Monitor.Enter_1(iVar4);
					}
					uVar2 = InventoryDescription.ctor
														(*(uint *)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 0x50),this);
					iVar4 = unnamed_function_6529(uVar2,this.currentIndex,uRam0056342c);
					unnamed_function_16520(uVar1,*(uint *)(*(int *)(iVar4 + 8) + 0x14),0);
					piVar5 = *(int **)(this + 0x14);
					iVar4 = *(int *)(iRam00565d78 + 0x10);
					if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
						iVar4 = System.Threading.Monitor.Enter_1(iVar4);
					}
					iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
					if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
						iVar4 = System.Threading.Monitor.Enter_1(iVar4);
					}
					uVar1 = InventoryDescription.ctor
														(*(uint *)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 0x50),this);
					iVar4 = unnamed_function_6529(uVar1,this.currentIndex,uRam0056342c);
					uVar1 = UnityEngine.Rendering.AsyncGPUReadbackRequest.GetData(iVar4 + 0xc,0);
					iVar4 = *piVar5;
					(**(code **)((ulong)*(uint *)(iVar4 + 0x2d0) * 4))
										(piVar5,uVar1,*(uint *)(iVar4 + 0x2d4));
					iVar4 = *(int *)(iRam00565d78 + 0x10);
					if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
						iVar4 = System.Threading.Monitor.Enter_1(iVar4);
					}
					iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
					if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
						iVar4 = System.Threading.Monitor.Enter_1(iVar4);
					}
					iVar6 = **(int **)(iVar4 + 0x5c);
					uVar2 = *(uint *)(iVar6 + 0x20);
					uVar1 = unnamed_function_95402(uRam005579ec);
					unnamed_function_60038(uVar1,this,uRam00569e5c,0);
					iVar4 = unnamed_function_85160(uVar2,uVar1,0);
					uVar1 = uRam005579ec;
					if (iVar4 == 0) {
						*(uint *)(iVar6 + 0x20) = 0;
						return;
					}
					iVar3 = unnamed_function_1112(iVar4,uRam005579ec);
					if (iVar3 == 0) {
						unnamed_function_1116(iVar4,uVar1);
						do {
							halt_trap();
						} while( true );
					}
					*(int *)(iVar6 + 0x20) = iVar3;
					uVar1 = uRam005579ec;
					iVar6 = unnamed_function_1112(iVar4,uRam005579ec);
					if (iVar6 == 0) {
						unnamed_function_1116(iVar4,uVar1);
						do {
							halt_trap();
						} while( true );
					}
				}
			}
			return;
	}

	// wasm func86331 -> ram:81a30e0c  [HotBarScroll::OnGameStateChange_HotBar]
	private void OnGameStateChange_HotBar(GameState gameState)
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int *piVar4;

			if (cRam006648af == '\0') {
				unnamed_function_1099(0x563428);
				unnamed_function_1099(0x56342c);
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x570a3c);
				cRam006648af = '\x01';
			}
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = InventoryDescription.ctor
												(*(uint *)(*(int *)(**(int **)(iVar2 + 0x5c) + 0x10) + 0x50),iVar2);
			if (*(int *)(iVar2 + 0xc) != 0) {
				iVar2 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				uVar1 = InventoryDescription.ctor
													(*(uint *)(*(int *)(**(int **)(iVar2 + 0x5c) + 0x10) + 0x50),iVar2);
				iVar2 = unnamed_function_6529(uVar1,this.currentIndex,uRam0056342c);
				if (iVar2 != 0) {
					iVar3 = *(int *)(*(int *)(gameState + 8) + 0x14);
					iVar2 = *(int *)(iRam00565d78 + 0x10);
					if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
						iVar2 = System.Threading.Monitor.Enter_1(iVar2);
					}
					iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
					if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
						iVar2 = System.Threading.Monitor.Enter_1(iVar2);
					}
					uVar1 = InventoryDescription.ctor
														(*(uint *)(*(int *)(**(int **)(iVar2 + 0x5c) + 0x10) + 0x50),iVar2);
					iVar2 = unnamed_function_6529(uVar1,this.currentIndex,uRam0056342c);
					if (iVar3 == *(int *)(iVar2 + 0x14)) {
						unnamed_function_16520
											(this.itemIcom,
											 *(uint *)(*(int *)(*(int *)(gameState + 8) + 8) + 0x14),0);
						piVar4 = *(int **)(this + 0x14);
						uVar1 = UnityEngine.Rendering.AsyncGPUReadbackRequest.GetData
															(*(int *)(gameState + 8) + 0xc,0);
						iVar2 = *piVar4;
						(**(code **)((ulong)*(uint *)(iVar2 + 0x2d0) * 4))
											(piVar4,uVar1,*(uint *)(iVar2 + 0x2d4));
						if (*(int *)(*(int *)(gameState + 8) + 0xc) == 0) {
							unnamed_function_16520(this.itemIcom,this.emptyItemSprite,0);
							iVar2 = **(int **)(this + 0x14);
							(**(code **)((ulong)*(uint *)(iVar2 + 0x2d0) * 4))
												(*(int **)(this + 0x14),uRam00570a3c,*(uint *)(iVar2 + 0x2d4));
						}
					}
				}
			}
			return;
	}

	// wasm func86332 -> ram:81a30fef  [HotBarScroll::StaticEventHandler_OnItemChanged]
	private void StaticEventHandler_OnItemChanged(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs)
	{
			uint uVar1;
			int iVar2;
			int *piVar3;

			if (cRam006648b0 == '\0') {
				unnamed_function_1099(0x563428);
				unnamed_function_1099(0x565d78);
				cRam006648b0 = '\x01';
			}
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = InventoryDescription.ctor
												(*(uint *)(*(int *)(**(int **)(iVar2 + 0x5c) + 0x10) + 0x50),iVar2);
			if (*(int *)(iVar2 + 0xc) == 1) {
				unnamed_function_16520
									(this.itemIcom,
									 *(uint *)(*(int *)(*(int *)(onInventoryItemChangedEventArgs + 8) + 8) + 0x14),0);
				piVar3 = *(int **)(this + 0x14);
				uVar1 = UnityEngine.Rendering.AsyncGPUReadbackRequest.GetData(*(int *)(onInventoryItemChangedEventArgs + 8) + 0xc,0);
				iVar2 = *piVar3;
				(**(code **)((ulong)*(uint *)(iVar2 + 0x2d0) * 4))
									(piVar3,uVar1,*(uint *)(iVar2 + 0x2d4));
			}
			return;
	}

	// no recovered body in HotBarScroll.c
	private void StaticEventHandler_OnMoveItemToHotBar(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs)
	{
		// <no recovered body>
	}

	// wasm func86334 -> ram:81a310c3  [HotBarScroll::Start]
	private void Start()
	{
			int iVar1;
			byte[] auStack_10 = new byte[8];
			byte[] auStack_8 = new byte[4];
			float fStack_4;

			if (cRam006648b1 == '\0') {
				unnamed_function_1099(0x562374);
				cRam006648b1 = '\x01';
			}
			if (cRam00662ee9 == '\0') {
				unnamed_function_1099(0x55bc38);
				cRam00662ee9 = '\x01';
			}
			if ((**(int **)(iRam0055bc38 + 0x5c) != 0) &&
				 (unnamed_function_50385
										(auStack_8,*(uint *)(**(int **)(iRam0055bc38 + 0x5c) + 0x124),uRam00562374),
				 fStack_4 != 0.0)) {
				if (ABS(fStack_4) < 2.1474836e+09) {
					iVar1 = (int)fStack_4;
				}
				else {
					iVar1 = -0x80000000;
				}
				HotBarScroll.Update(this,iVar1,auStack_10);
			}
			return;
	}

	// wasm func86335 -> ram:81a31175  [HotBarScroll::Update]
	private void Update()
	{
		int param_2 = 0; // IL2CPP hidden slot
			byte bVar1;
			uint uVar2;
			int iVar3;
			uint uVar4;
			int *piVar5;
			int iVar6;

			if (cRam006648b2 == '\0') {
				unnamed_function_1099(0x563428);
				unnamed_function_1099(0x56342c);
				unnamed_function_1099(0x565d78);
				cRam006648b2 = '\x01';
			}
			if (param_2 < 0) {
				iVar3 = this.currentIndex + -1;
				this.currentIndex = iVar3;
				if (iVar3 < 0) {
					iVar3 = *(int *)(iRam00565d78 + 0x10);
					if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
						iVar3 = System.Threading.Monitor.Enter_1(iVar3);
					}
					iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
					if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
						iVar3 = System.Threading.Monitor.Enter_1(iVar3);
					}
					iVar3 = InventoryDescription.ctor
														(*(uint *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),this);
					this.currentIndex = *(int *)(iVar3 + 0xc) + -1;
				}
				iVar3 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = InventoryDescription.ctor
													(*(uint *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),this);
				if (*(int *)(iVar3 + 0xc) == 0) {
					return;
				}
				uVar4 = this.itemIcom;
				iVar3 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				uVar2 = InventoryDescription.ctor
													(*(uint *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),this);
				iVar3 = unnamed_function_6529(uVar2,this.currentIndex,uRam0056342c);
				unnamed_function_16520(uVar4,*(uint *)(*(int *)(iVar3 + 8) + 0x14),0);
				piVar5 = *(int **)(this + 0x14);
				iVar3 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				bVar1 = *(byte *)(iVar3 + 0xbd);
			}
			else {
				iVar6 = this.currentIndex + 1;
				this.currentIndex = iVar6;
				iVar3 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = InventoryDescription.ctor
													(*(uint *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),this);
				if (*(int *)(iVar3 + 0xc) + -1 < iVar6) {
					this.currentIndex = 0;
				}
				iVar3 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = InventoryDescription.ctor
													(*(uint *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),this);
				if (*(int *)(iVar3 + 0xc) == 0) {
					return;
				}
				uVar4 = this.itemIcom;
				iVar3 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				uVar2 = InventoryDescription.ctor
													(*(uint *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),this);
				iVar3 = unnamed_function_6529(uVar2,this.currentIndex,uRam0056342c);
				unnamed_function_16520(uVar4,*(uint *)(*(int *)(iVar3 + 8) + 0x14),0);
				piVar5 = *(int **)(this + 0x14);
				iVar3 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				bVar1 = *(byte *)(iVar3 + 0xbd);
			}
			if ((bVar1 & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			uVar4 = InventoryDescription.ctor
												(*(uint *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),this);
			iVar3 = unnamed_function_6529(uVar4,this.currentIndex,uRam0056342c);
			uVar4 = UnityEngine.Rendering.AsyncGPUReadbackRequest.GetData(iVar3 + 0xc,0);
			(**(code **)((ulong)*(uint *)(*piVar5 + 0x2d0) * 4))
								(piVar5,uVar4,*(uint *)(*piVar5 + 0x2d4));
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			uVar4 = InventoryDescription.ctor
												(*(uint *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),this);
			uVar4 = unnamed_function_6529(uVar4,this.currentIndex,uRam0056342c);
			if (cRam006649d8 == '\0') {
				unnamed_function_1099(0x55bea0);
				unnamed_function_1099(0x55c894);
				cRam006649d8 = '\x01';
			}
			iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x40);
			if (iVar3 != 0) {
				iVar6 = unnamed_function_95402(uRam0055bea0);
				ItemConsumer.UsePotion(iVar6,0);
				*(uint *)(iVar6 + 8) = uVar4;
				(**(code **)((ulong)*(uint *)(iVar3 + 0xc) * 4))
									(*(uint *)(iVar3 + 0x20),iVar6,*(uint *)(iVar3 + 0x14));
			}
			return;
	}

	// no recovered body in HotBarScroll.c
	private void ChangedItem(int scrollValue)
	{
		// <no recovered body>
	}

	// no recovered body in HotBarScroll.c
	public HotBarScroll()
	{
		// <no recovered body>
	}
}

