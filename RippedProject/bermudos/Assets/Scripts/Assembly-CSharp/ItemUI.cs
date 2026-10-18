// ItemUI.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in ItemUI.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class ItemUI : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerClickHandler, IBeginDragHandler, IDragHandler, IEndDragHandler
{
	// Fields
	public int itemId; // 0x10
	public Image SelectorImg; // 0x14
	public Image ItemImg; // 0x18
	public TextMeshProUGUI quantityText; // 0x1C
	public InventoryItem inventoryItem; // 0x20
	public ItemUIType ItemUIType; // 0x24
	public Inventory inventory; // 0x28
	private GameObject itemUICopy; // 0x2C
	public bool isHasItem; // 0x30
	private RectTransform rectTransform; // 0x34

	// Methods

	// wasm func86420 -> ram:81a35b93  [ItemUI::Awake]
	private void Awake()
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			uint uVar4;

			uVar4 = 0;
			if (cRam006648df == '\0') {
				unnamed_function_1099(0x567eb0);
				cRam006648df = '\x01';
			}
			uVar1 = System.Linq.Enumerable.Count(this,0);
			iVar2 = UnityEngine.Transform.set_localScale(uVar1,0);
			if (iVar2 != 0) {
				uVar1 = System.Linq.Enumerable.Count(iVar2,0);
				iVar3 = UnityEngine.Transform.set_localScale(uVar1,0);
				if (iVar3 == 0) {
					this.inventory = 0;
					return;
				}
				if (iVar2 == 0) {
					this = 0;
				}
				uVar1 = System.Linq.Enumerable.Count(iVar3,0);
				iVar2 = UnityEngine.Transform.set_localScale(uVar1,0);
				if (iVar2 != 0) {
					if (iVar3 == 0) {
						this = 0;
					}
					uVar1 = System.Linq.Enumerable.Count(iVar2,0);
					iVar3 = UnityEngine.Transform.set_localScale(uVar1,0);
					if (iVar3 == 0) {
						this.inventory = 0;
						return;
					}
					if (iVar2 == 0) {
						this = 0;
					}
					uVar1 = System.Linq.Enumerable.Count(iVar3,0);
					iVar2 = UnityEngine.Transform.set_localScale(uVar1,0);
					if (iVar2 != 0) {
						uVar4 = UnityEngine.GameObject.get_activeInHierarchy(iVar2,uRam00567eb0);
					}
				}
			}
			this.inventory = uVar4;
			return;
	}

	// wasm func86421 -> ram:81a35c5d  [ItemUI::OnEnable]
	private void OnEnable()
	{
			uint uVar1;
			uint uVar2;
			int iVar3;
			ulong uStack_70;
			uint uStack_68;
			ulong uStack_60;
			ulong uStack_58;
			ulong uStack_50;
			ulong uStack_48;
			ulong uStack_40;
			ulong uStack_38;
			uint uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam006648e1 == '\0') {
				unnamed_function_1099(0x569ae4);
				unnamed_function_1099(0x56b51c);
				unnamed_function_1099(0x55be2c);
				cRam006648e1 = '\x01';
			}
			if (this.inventoryItem != 0) {
				uVar1 = unnamed_function_44644(this.SelectorImg,0);
				unnamed_function_44686(uVar1,0,0);
				uVar1 = unnamed_function_44644(this,0);
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				uVar1 = unnamed_function_51907(uVar1,uRam0056b51c);
				this.itemUICopy = uVar1;
				uVar1 = UnityEngine.Object.set_name(uVar1,uRam00569ae4);
				UnityEngine.RectTransform.set_anchoredPosition(&uStack_8,this.rectTransform,0);
				uStack_40 = uStack_8;
				UnityEngine.RectTransform.get_sizeDelta_Injected(uVar1,&uStack_40,0);
				UnityEngine.RectTransform.set_sizeDelta(&uStack_10,this.rectTransform,0);
				uStack_48 = uStack_10;
				UnityEngine.RectTransform.get_pivot_Injected(uVar1,&uStack_48,0);
				UnityEngine.RectTransform.get_rect(&uStack_18,this.rectTransform,0);
				uStack_50 = uStack_18;
				UnityEngine.RectTransform.get_anchorMin_Injected(uVar1,&uStack_50,0);
				UnityEngine.RectTransform.set_anchorMin(&uStack_20,this.rectTransform,0);
				uStack_58 = uStack_20;
				UnityEngine.RectTransform.get_anchorMax_Injected(uVar1,&uStack_58,0);
				UnityEngine.RectTransform.set_anchorMax(&uStack_28,this.rectTransform,0);
				uStack_60 = uStack_28;
				UnityEngine.RectTransform.get_anchoredPosition_Injected(uVar1,&uStack_60,0);
				iVar3 = this.ItemUIType;
				uVar1 = UnityEngine.GameObject.AddComponent(this.itemUICopy,0);
				if (iVar3 == 0) {
					uVar2 = System.Linq.Enumerable.Count(this.inventory,0);
				}
				else {
					uVar2 = System.Linq.Enumerable.Count(this,0);
					uVar2 = UnityEngine.Transform.set_localScale(uVar2,0);
					uVar2 = UnityEngine.Transform.set_localScale(uVar2,0);
				}
				UnityEngine.Transform.SetParent(uVar1,uVar2,0,0);
				uVar1 = UnityEngine.GameObject.AddComponent(this.itemUICopy,0);
				HelperUtilities.ValidateCheckPositiveRange(&uStack_38,this.rectTransform,0,0);
				uStack_68 = uStack_30;
				uStack_70 = uStack_38;
				UnityEngine.Transform.ctor(uVar1,&uStack_70,0);
			}
			return;
	}

	// no recovered body in ItemUI.c
	public void ResetItemUI()
	{
		// <no recovered body>
	}

	// wasm func86422 -> ram:81a35e50  [ItemUI::OnBeginDrag]
	public void OnBeginDrag(PointerEventData eventData)
	{
			int iVar1;
			uint uVar2;
			ulong uStack_20;
			uint uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam006648e2 == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam006648e2 = '\x01';
			}
			uVar2 = this.itemUICopy;
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar1 = UnityEngine.Camera.get_targetTexture(uVar2,0,0);
			if (iVar1 != 0) {
				uVar2 = UnityEngine.GameObject.AddComponent(this.itemUICopy,0);
				HelperUtilities.ValidateCheckPositiveRange(&uStack_10,this.rectTransform,0,0);
				uStack_18 = uStack_8;
				uStack_20 = uStack_10;
				UnityEngine.Transform.ctor(uVar2,&uStack_20,0);
			}
			return;
	}

	// wasm func86423 -> ram:81a35eec  [ItemUI::OnDrag]
	public void OnDrag(PointerEventData eventData)
	{
			int iVar1;
			int iVar2;
			uint uVar3;

			if (cRam006648e3 == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam006648e3 = '\x01';
			}
			if (this.inventoryItem != 0) {
				if (cRam006649cf == '\0') {
					unnamed_function_1099(0x55bea4);
					unnamed_function_1099(0x55c894);
					cRam006649cf = '\x01';
				}
				iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x34);
				if (iVar2 != 0) {
					iVar1 = unnamed_function_95402(uRam0055bea4);
					OnInventoryChangedEventArgs.ctor(iVar1,0);
					*(int *)(iVar1 + 8) = this;
					(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
										(*(uint *)(iVar2 + 0x20),iVar1,*(uint *)(iVar2 + 0x14));
				}
				uVar3 = this.itemUICopy;
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				unnamed_function_44782(uVar3,0);
			}
			return;
	}

	// wasm func86425 -> ram:81a36010  [ItemUI::OnEndDrag]
	public void OnEndDrag(PointerEventData eventData)
	{
			int iVar1;
			int iVar2;

			if (this.inventoryItem != 0) {
				if (cRam006649d5 == '\0') {
					unnamed_function_1099(0x55bea4);
					unnamed_function_1099(0x55c894);
					cRam006649d5 = '\x01';
				}
				iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x3c);
				if (iVar2 != 0) {
					iVar1 = unnamed_function_95402(uRam0055bea4);
					OnInventoryChangedEventArgs.ctor(iVar1,0);
					*(int *)(iVar1 + 8) = this;
					(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
										(*(uint *)(iVar2 + 0x20),iVar1,*(uint *)(iVar2 + 0x14));
				}
			}
			return;
	}

	// wasm func86427 -> ram:81a360f3  [ItemUI::OnPointerClick]
	public void OnPointerClick(PointerEventData eventData)
	{
			int iVar1;
			int iVar2;

			if (cRam006649d2 == '\0') {
				unnamed_function_1099(0x55bea4);
				unnamed_function_1099(0x55c894);
				cRam006649d2 = '\x01';
			}
			iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x38);
			if (iVar2 != 0) {
				iVar1 = unnamed_function_95402(uRam0055bea4);
				OnInventoryChangedEventArgs.ctor(iVar1,0);
				*(uint *)(iVar1 + 8) = this;
				(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
									(*(uint *)(iVar2 + 0x20),iVar1,*(uint *)(iVar2 + 0x14));
			}
			return;
	}

	// no recovered body in ItemUI.c
	public void OnPointerEnter(PointerEventData eventData)
	{
		// <no recovered body>
	}

	// wasm func86429 -> ram:81a361cb  [ItemUI::.ctor]
	public ItemUI()
	{
			uint uVar1;

			if (cRam006648e4 == '\0') {
				unnamed_function_1099(0x567f0c);
				cRam006648e4 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f0c);
			this.itemId = uVar1;
			return;
	}
}

