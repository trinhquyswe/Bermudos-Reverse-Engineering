// Inventory.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Inventory.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class Inventory : MonoBehaviour
{
	// Fields
	public List<ItemUI> inventorySlotList; // 0x10
	public List<ItemUI> hotBarSlotList; // 0x14
	public GameObject itemUIPrefab; // 0x18
	public GameObject content; // 0x1C
	public GameObject hotBar; // 0x20
	private ItemUI draggedItemUI; // 0x24
	private ItemUI hoverItemUI; // 0x28
	private ItemUI pressedItemUI; // 0x2C
	private ItemUI previousPressedItemUI; // 0x30

	// Methods

	// wasm func86338 -> ram:81a31678  [Inventory::Start]
	private void Start()
	{
			uint uVar1;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			uint uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam006648b3 == '\0') {
				unnamed_function_1099(0x557a3c);
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x56a768);
				unnamed_function_1099(0x56a76c);
				unnamed_function_1099(0x56a770);
				unnamed_function_1099(0x56d380);
				cRam006648b3 = '\x01';
			}
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (cRam00664829 == '\0') {
				unnamed_function_1099(0x55d048);
				cRam00664829 = '\x01';
			}
			uStack_20 = **(ulong **)(iRam0055d048 + 0x5c);
			uStack_18 = *(uint *)(*(ulong **)(iRam0055d048 + 0x5c) + 1);
			uStack_10 = uStack_20;
			uStack_8 = uStack_18;
			UnityEngine.Transform.get_localScale(uVar1,&uStack_20,0);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar1,0,0);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (cRam00662a53 == '\0') {
				unnamed_function_1099(0x55d048);
				cRam00662a53 = '\x01';
			}
			uStack_28 = *(uint *)(*(int *)(iRam0055d048 + 0x5c) + 0x14);
			uStack_30 = *(ulong *)(*(int *)(iRam0055d048 + 0x5c) + 0xc);
			uVar1 = DG.Tweening.ShortcutExtensions.DOLocalRotateQuaternion(uVar1,&uStack_30,0x3f000000,0);
			DG.Tweening.TweenSettingsExtensions.SetEase(uVar1,0x1b,uRam0056d380);
			uVar1 = unnamed_function_95402(uRam00557a3c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056a768,0);
			StaticEventHandler.CallInventoryChangedEvent(uVar1,&uStack_30);
			uVar1 = unnamed_function_95402(uRam00557a3c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056a770,0);
			StaticEventHandler.CallItemUIEndDragChangedEvent(uVar1,&uStack_30);
			uVar1 = unnamed_function_95402(uRam00557a3c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056a76c,0);
			StaticEventHandler.CallItemUIHoverChangedEvent(uVar1,&uStack_30);
			return;
	}

	// wasm func86342 -> ram:81a31a01  [Inventory::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam006648b4 == '\0') {
				unnamed_function_1099(0x557a3c);
				unnamed_function_1099(0x56a768);
				unnamed_function_1099(0x56a76c);
				unnamed_function_1099(0x56a770);
				cRam006648b4 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a3c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056a768,0);
			StaticEventHandler.add_OnItemUIEndDragChanged(uVar1,this);
			uVar1 = unnamed_function_95402(uRam00557a3c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056a770,0);
			StaticEventHandler.add_OnItemUIHoverChanged(uVar1,this);
			uVar1 = unnamed_function_95402(uRam00557a3c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056a76c,0);
			StaticEventHandler.add_OnItemUIClickChanged(uVar1,this);
			return;
	}

	// wasm func86346 -> ram:81a31c6e  [Inventory::OnDisable]
	private void OnDisable()
	{
			uint uVar1;

			if (cRam006648b5 == '\0') {
				unnamed_function_1099(0x55a7d4);
				cRam006648b5 = '\x01';
			}
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar1,0,0);
			return;
	}

	// wasm func86347 -> ram:81a31cbb  [Inventory::OnDestroy]
	private void OnDestroy()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;
			int iVar3;
			int *piVar4;
			int iVar5;
			int iStack_20;
			ulong *puStack_1c;
			ulong uStack_18;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam006648b6 == '\0') {
				unnamed_function_1099(0x561290);
				unnamed_function_1099(0x561294);
				unnamed_function_1099(0x561298);
				unnamed_function_1099(0x56341c);
				unnamed_function_1099(0x563448);
				cRam006648b6 = '\x01';
			}
			UnityEngine.ComputeBuffer.Release(&iStack_20,this.inventorySlotList,uRam00563448);
			uStack_8 = uStack_18;
			uStack_10 = CONCAT44(puStack_1c,iStack_20);
			iStack_20 = 0;
			puStack_1c = &uStack_10;
		code_r0x81a31d62:
			do {
				iRam005ddf34 = 0;
				iVar1 = import.env.invoke_iii(0x483,&uStack_10,uRam00561294);
				iVar3 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar3 == 1) {
					uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a31e47;
				}
				if (iVar1 == 0) {
					iVar1 = 5;
					iVar3 = iStack_20;
					goto code_r0x81a31e93;
				}
				iVar3 = uStack_8._4_4_;
				if (*(int *)(uStack_8._4_4_ + 0x20) != 0) {
					iRam005ddf34 = 0;
					iVar5 = import.env.invoke_iiii(0x862,param_2,*(int *)(uStack_8._4_4_ + 0x20),uRam0056341c);
					iVar1 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar1 == 1) {
						uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a31e47;
					}
					if (iVar5 != 0) goto code_r0x81a31d62;
				}
				iRam005ddf34 = 0;
				import.env.invoke_vii(0x3656,iVar3,&iStack_20);
				iVar3 = iRam005ddf34;
				iRam005ddf34 = 0;
			} while (iVar3 != 1);
			uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
		code_r0x81a31e47:
			iVar3 = import.env.getTempRet0();
			iVar1 = import.env.llvm_eh_typeid_for(0x4a99ec);
			if (iVar3 == iVar1) {
				piVar4 = (int *)import.env.__cxa_begin_catch(uVar2);
				iVar3 = *piVar4;
				iVar1 = 0;
				iRam005ddf34 = 0;
				iStack_20 = iVar3;
				import.env.invoke_v(0x3a);
				iVar5 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar5 != 1) {
		code_r0x81a31e93:
					iRam005ddf34 = 0;
					if (iVar3 != 0) {
						System.Net.CommandStream.ReceiveCommandResponseCallback(iVar3);
						do {
							halt_trap();
						} while( true );
					}
					if ((iVar1 != 0) &&
						 ((((iVar1 == 1 || (iVar1 == 2)) || (iVar1 == 3)) || ((iVar1 == 4 || (iVar1 != 5)))))) {
						iRam005ddf34 = 0;
						return;
					}
					UnityEngine.ComputeBuffer.Release(&iStack_20,this.hotBarSlotList,uRam00563448);
					uStack_8 = uStack_18;
					uStack_10 = CONCAT44(puStack_1c,iStack_20);
					iStack_20 = 0;
					puStack_1c = &uStack_10;
		code_r0x81a31f2d:
					do {
						iRam005ddf34 = 0;
						iVar1 = import.env.invoke_iii(0x483,&uStack_10,uRam00561294);
						iVar3 = iRam005ddf34;
						iRam005ddf34 = 0;
						if (iVar3 == 1) {
							uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
							goto code_r0x81a32015;
						}
						iVar3 = iStack_20;
						if (iVar1 == 0) goto code_r0x81a3205d;
						iVar3 = uStack_8._4_4_;
						if (*(int *)(uStack_8._4_4_ + 0x20) != 0) {
							iRam005ddf34 = 0;
							iVar5 = import.env.invoke_iiii
																(0x862,param_2,*(int *)(uStack_8._4_4_ + 0x20),uRam0056341c);
							iVar1 = iRam005ddf34;
							iRam005ddf34 = 0;
							if (iVar1 == 1) {
								uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
								goto code_r0x81a32015;
							}
							if (iVar5 != 0) goto code_r0x81a31f2d;
						}
						iRam005ddf34 = 0;
						import.env.invoke_vii(0x3656,iVar3,&iStack_20);
						iVar3 = iRam005ddf34;
						iRam005ddf34 = 0;
					} while (iVar3 != 1);
					uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
		code_r0x81a32015:
					iVar3 = import.env.getTempRet0();
					iVar1 = import.env.llvm_eh_typeid_for(0x4a99ec);
					if (iVar3 == iVar1) {
						piVar4 = (int *)import.env.__cxa_begin_catch(uVar2);
						iVar3 = *piVar4;
						iRam005ddf34 = 0;
						iStack_20 = iVar3;
						import.env.invoke_v(0x3a);
						iVar1 = iRam005ddf34;
						iRam005ddf34 = 0;
						if (iVar1 != 1) {
		code_r0x81a3205d:
							iRam005ddf34 = 0;
							if (iVar3 == 0) {
								iRam005ddf34 = 0;
								return;
							}
							System.Net.CommandStream.ReceiveCommandResponseCallback(iVar3);
							do {
								halt_trap();
							} while( true );
						}
						uVar2 = import.env.__cxa_find_matching_catch_2();
						import.env.getTempRet0();
					}
					iRam005ddf34 = 0;
					import.env.invoke_ii(0x3658,&iStack_20);
					goto joined_r0x81a320ae;
				}
				uVar2 = import.env.__cxa_find_matching_catch_2();
				import.env.getTempRet0();
			}
			iRam005ddf34 = 0;
			import.env.invoke_ii(0x3657,&iStack_20);
		joined_r0x81a320ae:
			if (iRam005ddf34 != 1) {
				iRam005ddf34 = 0;
				import.env.__resumeException(uVar2);
				do {
					halt_trap();
				} while( true );
			}
			iRam005ddf34 = 0;
			import.env.__cxa_find_matching_catch_3(0);
			import.env.getTempRet0();
			unnamed_function_642();
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86350 -> ram:81a321af  [Inventory::ResetInventory]
	public void ResetInventory(List<InventoryItem> skipList)
	{
			int iVar1;
			int *piVar2;
			int iVar3;
			int iVar4;
			uint uVar5;

			if (cRam006648b7 == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam006648b7 = '\x01';
			}
			uVar5 = this.pressedItemUI;
			this.previousPressedItemUI = uVar5;
			this.pressedItemUI = *(uint *)(skipList + 8);
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			piVar2 = (int *)(this + 0x2c);
			iVar1 = unnamed_function_44710(uVar5,0,0);
			if (iVar1 == 0) {
				iVar3 = *piVar2;
				iVar4 = this.previousPressedItemUI;
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				iVar3 = UnityEngine.Camera.get_targetTexture(iVar4,iVar3,0);
				if (iVar3 == 0) {
					return;
				}
				uVar5 = unnamed_function_44644(*(uint *)(*piVar2 + 0x14),0);
				unnamed_function_44686(uVar5,1,0);
				piVar2 = (int *)(this + 0x30);
			}
			uVar5 = unnamed_function_44644(*(uint *)(*piVar2 + 0x14),0);
			unnamed_function_44686(uVar5,iVar1,0);
			return;
	}

	// wasm func86351 -> ram:81a32284  [Inventory::StaticEventHandler_OnItemUIClickChanged]
	private void StaticEventHandler_OnItemUIClickChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
	{
			this.draggedItemUI = *(uint *)(onItemUIChangedEventArgs + 8);
			return;
	}

	// wasm func86352 -> ram:81a32291  [Inventory::StaticEventHandler_OnItemUIChanged]
	private void StaticEventHandler_OnItemUIChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
	{
			int iVar1;
			uint uVar2;

			if (cRam006648b8 == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam006648b8 = '\x01';
			}
			uVar2 = this.draggedItemUI;
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar1 = UnityEngine.Camera.get_targetTexture(uVar2,0,0);
			if (iVar1 != 0) {
				this.hoverItemUI = *(uint *)(onItemUIChangedEventArgs + 8);
				Inventory.StaticEventHandler_OnItemUIHoverChanged(this,this);
				this.draggedItemUI = 0;
			}
			return;
	}

	// wasm func86353 -> ram:81a322f9  [Inventory::StaticEventHandler_OnItemUIHoverChanged]
	private void StaticEventHandler_OnItemUIHoverChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
	{
			int iVar1;
			int iVar2;
			uint uVar3;
			uint uVar4;
			int *piVar5;
			int *piVar6;
			int iVar7;
			byte uStack_1;

			if (cRam006648b9 == '\0') {
				unnamed_function_1099(0x55a328);
				unnamed_function_1099(0x55a9bc);
				unnamed_function_1099(0x55be2c);
				cRam006648b9 = '\x01';
			}
			uVar3 = this.hoverItemUI;
			uVar4 = this.draggedItemUI;
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar1 = unnamed_function_44710(uVar4,uVar3,0);
			if (iVar1 != 0) {
				return;
			}
			iVar1 = *(int *)(this.draggedItemUI + 0x24);
			if (iVar1 == 0) {
				iVar1 = this.hoverItemUI;
				if (*(int *)(iVar1 + 0x24) == 0) {
					if (*(byte *)(iVar1 + 0x30) == '\0') {
						Inventory.SwapTwoItemUI(this,0,this);
						uVar3 = unnamed_function_44644(*(uint *)(this.draggedItemUI + 0x18),0);
						unnamed_function_44686(uVar3,0,0);
						uVar3 = unnamed_function_44644(*(uint *)(this.draggedItemUI + 0x1c),0);
						unnamed_function_44686(uVar3,0,0);
						*(byte *)(this.draggedItemUI + 0x30) = 0;
						return;
					}
					Inventory.MoveAndSwapItemUI(this,0,this);
					return;
				}
				if (*(int *)(iVar1 + 0x24) == 1) {
					uStack_1 = *(byte *)(*(int *)(this.draggedItemUI + 0x20) + 0x18);
					uVar3 = unnamed_function_1113(uRam0055a328,&uStack_1);
					if (*(int *)(iRam0055a9bc + 0x74) == 0) {
						unnamed_function_94848(iRam0055a9bc);
					}
					UnityEngine.InputSystem.Layouts.InputControlLayout.Collection.TryLoadLayout(uVar3,0);
					if (*(byte *)(*(int *)(this.draggedItemUI + 0x20) + 0x18) != '\0') {
						return;
					}
					uVar3 = unnamed_function_44644(*(uint *)(this.hoverItemUI + 0x18),0);
					unnamed_function_44686(uVar3,1,0);
					uVar3 = unnamed_function_44644(*(uint *)(this.hoverItemUI + 0x1c),0);
					unnamed_function_44686(uVar3,1,0);
					unnamed_function_16520
										(*(uint *)(this.hoverItemUI + 0x18),
										 *(uint *)(*(int *)(this.draggedItemUI + 0x18) + 0x80),0);
					piVar5 = *(int **)(this.hoverItemUI + 0x1c);
					piVar6 = *(int **)(this.draggedItemUI + 0x1c);
					iVar1 = *piVar6;
					uVar3 = (**(code **)((ulong)*(uint *)(iVar1 + 0x2c8) * 4))
														(piVar6,*(uint *)(iVar1 + 0x2cc));
					iVar1 = *piVar5;
					(**(code **)((ulong)*(uint *)(iVar1 + 0x2d0) * 4))
										(piVar5,uVar3,*(uint *)(iVar1 + 0x2d4));
					iVar1 = this.hoverItemUI;
					iVar7 = *(int *)(this.draggedItemUI + 0x20);
					*(int *)(iVar1 + 0x20) = iVar7;
					uVar3 = *(uint *)(iVar1 + 0x10);
					*(byte *)(iVar7 + 0x18) = 1;
					*(uint *)(iVar7 + 0x14) = uVar3;
					if (cRam006649db == '\0') {
						unnamed_function_1099(0x55bea0);
						unnamed_function_1099(0x55c894);
						cRam006649db = '\x01';
					}
					iVar1 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x44);
					if (iVar1 == 0) {
						return;
					}
					iVar2 = unnamed_function_95402(uRam0055bea0);
					ItemConsumer.UsePotion(iVar2,0);
					*(int *)(iVar2 + 8) = iVar7;
					(**(code **)((ulong)*(uint *)(iVar1 + 0xc) * 4))
										(*(uint *)(iVar1 + 0x20),iVar2,*(uint *)(iVar1 + 0x14));
					return;
				}
			}
			else if (iVar1 == 1) {
				iVar1 = this.hoverItemUI;
				if (*(int *)(iVar1 + 0x24) == 0) {
					return;
				}
			}
			else {
				iVar1 = this.hoverItemUI;
			}
			if (*(byte *)(iVar1 + 0x30) == '\0') {
				Inventory.SwapTwoItemUI(this,1,this);
			}
			else {
				Inventory.MoveAndSwapItemUI(this,1,this);
			}
			return;
	}

	// wasm func86354 -> ram:81a3258a  [Inventory::MoveAndSwapItemUI]
	public void MoveAndSwapItemUI()
	{
		int param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;
			uint uVar3;
			int *piVar4;
			int iVar5;
			int *piVar6;
			int iVar7;
			int iVar8;

			if (cRam006648ba == '\0') {
				unnamed_function_1099(0x55a9bc);
				cRam006648ba = '\x01';
			}
			uVar3 = *(uint *)(*(int *)(this.draggedItemUI + 0x18) + 0x80);
			piVar4 = *(int **)(this.draggedItemUI + 0x1c);
			iVar5 = *piVar4;
			uVar1 = (**(code **)((ulong)*(uint *)(iVar5 + 0x2c8) * 4))
												(piVar4,*(uint *)(iVar5 + 0x2cc));
			iVar5 = *(int *)(this.draggedItemUI + 0x20);
			unnamed_function_16520
								(*(uint *)(this.draggedItemUI + 0x18),
								 *(uint *)(*(int *)(this.hoverItemUI + 0x18) + 0x80),0);
			piVar4 = *(int **)(this.draggedItemUI + 0x1c);
			piVar6 = *(int **)(this.hoverItemUI + 0x1c);
			iVar7 = *piVar6;
			uVar2 = (**(code **)((ulong)*(uint *)(iVar7 + 0x2c8) * 4))
												(piVar6,*(uint *)(iVar7 + 0x2cc));
			iVar7 = *piVar4;
			(**(code **)((ulong)*(uint *)(iVar7 + 0x2d0) * 4))
								(piVar4,uVar2,*(uint *)(iVar7 + 0x2d4));
			iVar7 = *(int *)(this.hoverItemUI + 0x20);
			*(int *)(this.draggedItemUI + 0x20) = iVar7;
			uVar2 = UnityEngine.Rendering.AsyncGPUReadbackRequest.GetData(iVar7 + 0x10,0);
			uVar2 = Mono.Security.X509.X509Crl.X509CrlEntry.ctor
												(uVar2,*(uint *)
																(*(int *)(*(int *)(this.draggedItemUI + 0x20) + 8) + 0xc),0);
			if (*(int *)(iRam0055a9bc + 0x74) == 0) {
				unnamed_function_94848(iRam0055a9bc);
			}
			UnityEngine.InputSystem.Layouts.InputControlLayout.Collection.TryLoadLayout(uVar2,0);
			iVar7 = 0x14;
			if (param_2 == 0) {
				iVar7 = 0x10;
			}
			*(uint *)(iVar7 + *(int *)(this.draggedItemUI + 0x20)) =
					 *(uint *)(this.draggedItemUI + 0x10);
			unnamed_function_16520(*(uint *)(this.hoverItemUI + 0x18),uVar3,0);
			piVar4 = *(int **)(this.hoverItemUI + 0x1c);
			iVar8 = *piVar4;
			(**(code **)((ulong)*(uint *)(iVar8 + 0x2d0) * 4))
								(piVar4,uVar1,*(uint *)(iVar8 + 0x2d4));
			iVar8 = this.hoverItemUI;
			*(int *)(iVar8 + 0x20) = iVar5;
			*(uint *)(iVar7 + iVar5) = *(uint *)(iVar8 + 0x10);
			return;
	}

	// wasm func86355 -> ram:81a326f1  [Inventory::SwapTwoItemUI]
	public void SwapTwoItemUI(ItemUIType itemUIType)
	{
			uint uVar1;
			int *piVar2;
			int *piVar3;
			int iVar4;
			int iVar5;
			int iVar6;
			int iVar7;

			uVar1 = unnamed_function_44644(*(uint *)(this.hoverItemUI + 0x18),0);
			unnamed_function_44686(uVar1,1,0);
			uVar1 = unnamed_function_44644(*(uint *)(this.hoverItemUI + 0x1c),0);
			unnamed_function_44686(uVar1,1,0);
			unnamed_function_16520
								(*(uint *)(this.hoverItemUI + 0x18),
								 *(uint *)(*(int *)(this.draggedItemUI + 0x18) + 0x80),0);
			piVar2 = *(int **)(this.hoverItemUI + 0x1c);
			piVar3 = *(int **)(this.draggedItemUI + 0x1c);
			iVar7 = *piVar3;
			uVar1 = (**(code **)((ulong)*(uint *)(iVar7 + 0x2c8) * 4))
												(piVar3,*(uint *)(iVar7 + 0x2cc));
			iVar7 = *piVar2;
			(**(code **)((ulong)*(uint *)(iVar7 + 0x2d0) * 4))
								(piVar2,uVar1,*(uint *)(iVar7 + 0x2d4));
			iVar7 = this.hoverItemUI;
			iVar4 = this.draggedItemUI;
			iVar5 = *(int *)(iVar4 + 0x20);
			*(int *)(iVar7 + 0x20) = iVar5;
			iVar6 = 0x14;
			if (itemUIType == 0) {
				iVar6 = 0x10;
			}
			*(uint *)(iVar5 + iVar6) = *(uint *)(iVar7 + 0x10);
			*(byte *)(iVar7 + 0x30) = 1;
			uVar1 = unnamed_function_44644(*(uint *)(iVar4 + 0x18),0);
			unnamed_function_44686(uVar1,0,0);
			uVar1 = unnamed_function_44644(*(uint *)(this.draggedItemUI + 0x1c),0);
			unnamed_function_44686(uVar1,0,0);
			iVar7 = this.draggedItemUI;
			*(uint *)(iVar7 + 0x20) = 0;
			*(byte *)(iVar7 + 0x30) = 0;
			return;
	}

	// wasm func86356 -> ram:81a327e4  [Inventory::SwapItemUIWithEmptySlot]
	public void SwapItemUIWithEmptySlot(ItemUIType itemUITypee)
	{
			uint uVar1;
			int *piVar2;
			int *piVar3;
			int iVar4;
			int iVar5;

			uVar1 = unnamed_function_44644(*(uint *)(this.hoverItemUI + 0x18),0);
			unnamed_function_44686(uVar1,1,0);
			uVar1 = unnamed_function_44644(*(uint *)(this.hoverItemUI + 0x1c),0);
			unnamed_function_44686(uVar1,1,0);
			unnamed_function_16520
								(*(uint *)(this.hoverItemUI + 0x18),
								 *(uint *)(*(int *)(this.draggedItemUI + 0x18) + 0x80),0);
			piVar2 = *(int **)(this.hoverItemUI + 0x1c);
			piVar3 = *(int **)(this.draggedItemUI + 0x1c);
			iVar5 = *piVar3;
			uVar1 = (**(code **)((ulong)*(uint *)(iVar5 + 0x2c8) * 4))
												(piVar3,*(uint *)(iVar5 + 0x2cc));
			iVar5 = *piVar2;
			(**(code **)((ulong)*(uint *)(iVar5 + 0x2d0) * 4))
								(piVar2,uVar1,*(uint *)(iVar5 + 0x2d4));
			iVar5 = this.hoverItemUI;
			iVar4 = *(int *)(this.draggedItemUI + 0x20);
			*(int *)(iVar5 + 0x20) = iVar4;
			uVar1 = *(uint *)(iVar5 + 0x10);
			*(byte *)(iVar4 + 0x18) = 1;
			*(uint *)(iVar4 + 0x14) = uVar1;
			return;
	}

	// wasm func86358 -> ram:81a32902  [Inventory::MoveItemToHotBar]
	public void MoveItemToHotBar()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;
			uint uVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			uint uVar7;
			int iStack_4;

			if (cRam006648bb == '\0') {
				unnamed_function_1099(0x569ac0);
				unnamed_function_1099(0x563444);
				unnamed_function_1099(0x56b51c);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x5773f4);
				cRam006648bb = '\x01';
			}
			iStack_4 = 0;
			if (0 < param_2) {
				do {
					uVar5 = this.itemUIPrefab;
					if (*(int *)(iRam0055be2c + 0x74) == 0) {
						unnamed_function_94848(iRam0055be2c);
					}
					uVar5 = unnamed_function_51907(uVar5,uRam0056b51c);
					uVar2 = UnityEngine.GameObject.AddComponent(uVar5,0);
					uVar3 = UnityEngine.GameObject.AddComponent(this.content,0);
					UnityEngine.Transform.SetParent(uVar2,uVar3,0,0);
					uVar2 = UnityEngine.Rendering.AsyncGPUReadbackRequest.GetData(&iStack_4,0);
					uVar2 = Mono.Security.X509.X509Crl.X509CrlEntry.ctor(uRam005773f4,uVar2,0);
					UnityEngine.Object.Instantiate(uVar5,uVar2,0);
					iVar4 = UnityEngine.Object.set_name(uVar5,uRam00569ac0);
					*(int *)(iVar4 + 0x10) = iStack_4;
					*(byte *)(iVar4 + 0x30) = 0;
					*(ulong *)(iVar4 + 0x20) = 0;
					iVar1 = iRam00563444;
					iVar6 = this.inventorySlotList;
					*(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
					uVar7 = *(uint *)(iVar6 + 0xc);
					if (uVar7 < *(uint *)(*(int *)(iVar6 + 8) + 0xc)) {
						*(uint *)(iVar6 + 0xc) = uVar7 + 1;
						*(int *)(*(int *)(iVar6 + 8) + uVar7 * 4 + 0x10) = iVar4;
					}
					else {
						System.String.Substring
											(iVar6,iVar4,*(uint *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
					}
					iStack_4 = iStack_4 + 1;
				} while (iStack_4 < param_2);
			}
			return;
	}

	// wasm func86359 -> ram:81a32a75  [Inventory::InitializeInventorySlotList]
	public void InitializeInventorySlotList(int quantity)
	{
			int iVar1;
			uint uVar2;
			uint uVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			uint uVar7;
			int iStack_4;

			if (cRam006648bc == '\0') {
				unnamed_function_1099(0x569ac0);
				unnamed_function_1099(0x563444);
				unnamed_function_1099(0x56b51c);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x5773f4);
				cRam006648bc = '\x01';
			}
			iStack_4 = 0;
			if (0 < quantity) {
				do {
					uVar5 = this.itemUIPrefab;
					if (*(int *)(iRam0055be2c + 0x74) == 0) {
						unnamed_function_94848(iRam0055be2c);
					}
					uVar5 = unnamed_function_51907(uVar5,uRam0056b51c);
					uVar2 = UnityEngine.GameObject.AddComponent(uVar5,0);
					uVar3 = UnityEngine.GameObject.AddComponent(this.hotBar,0);
					UnityEngine.Transform.SetParent(uVar2,uVar3,0,0);
					uVar2 = UnityEngine.Rendering.AsyncGPUReadbackRequest.GetData(&iStack_4,0);
					uVar2 = Mono.Security.X509.X509Crl.X509CrlEntry.ctor(uRam005773f4,uVar2,0);
					UnityEngine.Object.Instantiate(uVar5,uVar2,0);
					iVar4 = UnityEngine.Object.set_name(uVar5,uRam00569ac0);
					*(int *)(iVar4 + 0x10) = iStack_4;
					*(byte *)(iVar4 + 0x30) = 0;
					*(ulong *)(iVar4 + 0x20) = 0x100000000;
					iVar1 = iRam00563444;
					iVar6 = this.hotBarSlotList;
					*(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
					uVar7 = *(uint *)(iVar6 + 0xc);
					if (uVar7 < *(uint *)(*(int *)(iVar6 + 8) + 0xc)) {
						*(uint *)(iVar6 + 0xc) = uVar7 + 1;
						*(int *)(*(int *)(iVar6 + 8) + uVar7 * 4 + 0x10) = iVar4;
					}
					else {
						System.String.Substring
											(iVar6,iVar4,*(uint *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
					}
					iStack_4 = iStack_4 + 1;
				} while (iStack_4 < quantity);
			}
			return;
	}

	// wasm func86360 -> ram:81a32beb  [Inventory::InitializeHotBarSlotList]
	public void InitializeHotBarSlotList(int quantity)
	{
			uint uVar1;

			if (cRam006648bd == '\0') {
				unnamed_function_1099(0x563440);
				unnamed_function_1099(0x558f9c);
				cRam006648bd = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00558f9c);
			System.Collections.Generic.List.cctor(uVar1,uRam00563440);
			this.inventorySlotList = uVar1;
			uVar1 = unnamed_function_95402(uRam00558f9c);
			System.Collections.Generic.List.cctor(uVar1,uRam00563440);
			this.hotBarSlotList = uVar1;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func86361 -> ram:81a32c5c  [Inventory::.ctor]
	public Inventory()
	{
			uint uVar1;

			if (cRam006648be == '\0') {
				unnamed_function_1099(0x557a3c);
				unnamed_function_1099(0x56a774);
				cRam006648be = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a3c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056a774,0);
			StaticEventHandler.CallItemUIHoverChangedEvent(uVar1,this);
			return;
	}
}

