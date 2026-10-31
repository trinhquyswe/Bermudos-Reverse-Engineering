// Assembly-CSharp :: ItemUI
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ItemUI : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerClickHandler, IBeginDragHandler, IDragHandler, IEndDragHandler // TypeDefIndex: 5651
{
	// Fields
	[HideInInspector]
	public int itemId; // 0x10
	public Image SelectorImg; // 0x14
	public Image ItemImg; // 0x18
	public TextMeshProUGUI quantityText; // 0x1C
	public InventoryItem inventoryItem; // 0x20
	[HideInInspector]
	public ItemUIType ItemUIType; // 0x24
	public Inventory inventory; // 0x28
	private GameObject itemUICopy; // 0x2C
	[HideInInspector]
	public bool isHasItem; // 0x30
	private RectTransform rectTransform; // 0x34

	// Methods

	// RVA: 0x38E9 Offset: 0x38E9 VA: 0x38E9
	private void Awake() { }

	// RVA: 0x38EA Offset: 0x38EA VA: 0x38EA
	private void OnEnable() { }

	// RVA: 0x3656 Offset: 0x3656 VA: 0x3656
	public void ResetItemUI() { }

	// RVA: 0x38EB Offset: 0x38EB VA: 0x38EB Slot: 6
	public void OnBeginDrag(PointerEventData eventData) { }

	// RVA: 0x38EC Offset: 0x38EC VA: 0x38EC Slot: 7
	public void OnDrag(PointerEventData eventData) { }

	// RVA: 0x38ED Offset: 0x38ED VA: 0x38ED Slot: 8
	public void OnEndDrag(PointerEventData eventData) { }

	// RVA: 0x38EE Offset: 0x38EE VA: 0x38EE Slot: 5
	public void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x38EF Offset: 0x38EF VA: 0x38EF Slot: 4
	public void OnPointerEnter(PointerEventData eventData) { }

	// RVA: 0x38F0 Offset: 0x38F0 VA: 0x38F0
	public void .ctor() { }
}

===== C# end =====
*/

// ---- ItemUI$$ResetItemUI ----
// C#: void ItemUI__ResetItemUI (ItemUI_o* __this, const MethodInfo* method);

void ItemUI__ResetItemUI(ItemUI_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_ram_006648e0 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_006648e0 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->SelectorImg,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->ItemImg,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->quantityText,0);
  unnamed_function_44686(uVar1,0,0);
  iVar2 = __this->quantityText->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
            (__this->quantityText,StringLiteral_1 /* "" */,*(undefined4 *)(iVar2 + 0x2d4));
  unnamed_function_16520(__this->ItemImg,0,0);
  iVar2 = __this->quantityText->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
            (__this->quantityText,StringLiteral_1 /* "" */,*(undefined4 *)(iVar2 + 0x2d4));
  __this->isHasItem = false;
  __this->inventoryItem = (InventoryItem_o *)0x0;
  return;
}

// ---- ItemUI$$Awake ----
// C#: void ItemUI__Awake (ItemUI_o* __this, const MethodInfo* method);

void ItemUI__Awake(ItemUI_o *__this,MethodInfo *method)

{
  RectTransform_o *pRVar1;
  
  if (DAT_ram_006648de == '\0') {
    unnamed_function_1099(&DAT_ram_00567f0c);
    DAT_ram_006648de = '\x01';
  }
  pRVar1 = (RectTransform_o *)unnamed_function_65370(__this,DAT_ram_00567f0c);
  __this->rectTransform = pRVar1;
  return;
}

// ---- ItemUI$$OnEnable ----
// C#: void ItemUI__OnEnable (ItemUI_o* __this, const MethodInfo* method);

void ItemUI__OnEnable(ItemUI_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  Inventory_o *pIVar4;
  
  pIVar4 = (Inventory_o *)0x0;
  if (DAT_ram_006648df == '\0') {
    unnamed_function_1099(&DAT_ram_00567eb0);
    DAT_ram_006648df = '\x01';
  }
  uVar1 = unnamed_function_44643(__this,0);
  iVar2 = unnamed_function_44958(uVar1,0);
  if (iVar2 != 0) {
    uVar1 = unnamed_function_44643(iVar2,0);
    iVar3 = unnamed_function_44958(uVar1,0);
    if (iVar3 == 0) {
      __this->inventory = (Inventory_o *)0x0;
      return;
    }
    if (iVar2 == 0) {
      __this = (ItemUI_o *)0x0;
    }
    uVar1 = unnamed_function_44643(iVar3,0);
    iVar2 = unnamed_function_44958(uVar1,0);
    if (iVar2 != 0) {
      if (iVar3 == 0) {
        __this = (ItemUI_o *)0x0;
      }
      uVar1 = unnamed_function_44643(iVar2,0);
      iVar3 = unnamed_function_44958(uVar1,0);
      if (iVar3 == 0) {
        __this->inventory = (Inventory_o *)0x0;
        return;
      }
      if (iVar2 == 0) {
        __this = (ItemUI_o *)0x0;
      }
      uVar1 = unnamed_function_44643(iVar3,0);
      iVar2 = unnamed_function_44958(uVar1,0);
      if (iVar2 != 0) {
        pIVar4 = (Inventory_o *)unnamed_function_65370(iVar2,DAT_ram_00567eb0);
      }
    }
  }
  __this->inventory = pIVar4;
  return;
}

// ---- ItemUI$$OnBeginDrag ----
// C#: void ItemUI__OnBeginDrag (ItemUI_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void ItemUI__OnBeginDrag(ItemUI_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
                        MethodInfo *method)

{
  undefined4 uVar1;
  GameObject_o *param1;
  undefined4 uVar2;
  ItemUIType IVar3;
  Vector3_o local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  Vector3_o local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_006648e1 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ae4);
    unnamed_function_1099(&DAT_ram_0056b51c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648e1 = '\x01';
  }
  if (__this->inventoryItem != (InventoryItem_o *)0x0) {
    uVar1 = unnamed_function_44644(__this->SelectorImg,0);
    unnamed_function_44686(uVar1,0,0);
    uVar1 = unnamed_function_44644(__this,0);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    param1 = (GameObject_o *)unnamed_function_51907(uVar1,DAT_ram_0056b51c);
    __this->itemUICopy = param1;
    uVar1 = unnamed_function_73836(param1,DAT_ram_00569ae4);
    unnamed_function_44937(&local_8,__this->rectTransform,0);
    local_40 = local_8;
    unnamed_function_44939(uVar1,&local_40,0);
    unnamed_function_44940(&local_10,__this->rectTransform,0);
    local_48 = local_10;
    unnamed_function_44942(uVar1,&local_48,0);
    unnamed_function_44928(&local_18,__this->rectTransform,0);
    local_50 = local_18;
    unnamed_function_44930(uVar1,&local_50,0);
    unnamed_function_44931(&local_20,__this->rectTransform,0);
    local_58 = local_20;
    unnamed_function_44933(uVar1,&local_58,0);
    unnamed_function_44934(&local_28,__this->rectTransform,0);
    local_60 = local_28;
    unnamed_function_44936(uVar1,&local_60,0);
    IVar3 = __this->ItemUIType;
    uVar1 = unnamed_function_44683(__this->itemUICopy,0);
    if (IVar3 == Inventory) {
      uVar2 = unnamed_function_44643(__this->inventory,0);
    }
    else {
      uVar2 = unnamed_function_44643(__this,0);
      uVar2 = unnamed_function_44958(uVar2,0);
      uVar2 = unnamed_function_44958(uVar2,0);
    }
    unnamed_function_44985(uVar1,uVar2,0,0);
    uVar1 = unnamed_function_44683(__this->itemUICopy,0);
    HelperUtilities__GetMousePositionInUI
              (&local_38,(UnityEngine_RectTransform_o *)__this->rectTransform,
               (UnityEngine_Camera_o *)0x0,(MethodInfo *)0x0);
    local_70.z = local_38.z;
    local_70.x = local_38.x;
    local_70.y = local_38.y;
    unnamed_function_44962(uVar1,&local_70,0);
  }
  return;
}

// ---- ItemUI$$OnDrag ----
// C#: void ItemUI__OnDrag (ItemUI_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void ItemUI__OnDrag(ItemUI_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
                   MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  GameObject_o *param1_00;
  Vector3_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_006648e2 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648e2 = '\x01';
  }
  param1_00 = __this->itemUICopy;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1_00,0,0);
  if (iVar1 != 0) {
    param1 = unnamed_function_44683(__this->itemUICopy,0);
    HelperUtilities__GetMousePositionInUI
              (&local_10,(UnityEngine_RectTransform_o *)__this->rectTransform,
               (UnityEngine_Camera_o *)0x0,(MethodInfo *)0x0);
    local_20.z = local_10.z;
    local_20.x = local_10.x;
    local_20.y = local_10.y;
    unnamed_function_44962(param1,&local_20,0);
  }
  return;
}

// ---- ItemUI$$OnEndDrag ----
// C#: void ItemUI__OnEndDrag (ItemUI_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void ItemUI__OnEndDrag(ItemUI_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
                      MethodInfo *method)

{
  OnItemUIChangedEventArgs_o *__this_00;
  int iVar1;
  GameObject_o *param1;
  
  if (DAT_ram_006648e3 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648e3 = '\x01';
  }
  if (__this->inventoryItem != (InventoryItem_o *)0x0) {
    if (DAT_ram_006649cf == '\0') {
      unnamed_function_1099(&OnItemUIChangedEventArgs_TypeInfo);
      unnamed_function_1099(&StaticEventHandler_TypeInfo);
      DAT_ram_006649cf = '\x01';
    }
    iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x34);
    if (iVar1 != 0) {
      __this_00 = (OnItemUIChangedEventArgs_o *)
                  unnamed_function_95402(OnItemUIChangedEventArgs_TypeInfo);
      OnItemUIChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
      __this_00->itemUI = __this;
      (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
                (*(undefined4 *)(iVar1 + 0x20),__this_00,*(undefined4 *)(iVar1 + 0x14));
    }
    param1 = __this->itemUICopy;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    unnamed_function_44782(param1,0);
  }
  return;
}

// ---- ItemUI$$OnPointerClick ----
// C#: void ItemUI__OnPointerClick (ItemUI_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void ItemUI__OnPointerClick
               (ItemUI_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  OnItemUIChangedEventArgs_o *__this_00;
  int iVar1;
  
  if (__this->inventoryItem != (InventoryItem_o *)0x0) {
    if (DAT_ram_006649d5 == '\0') {
      unnamed_function_1099(&OnItemUIChangedEventArgs_TypeInfo);
      unnamed_function_1099(&StaticEventHandler_TypeInfo);
      DAT_ram_006649d5 = '\x01';
    }
    iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x3c);
    if (iVar1 != 0) {
      __this_00 = (OnItemUIChangedEventArgs_o *)
                  unnamed_function_95402(OnItemUIChangedEventArgs_TypeInfo);
      OnItemUIChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
      __this_00->itemUI = __this;
      (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
                (*(undefined4 *)(iVar1 + 0x20),__this_00,*(undefined4 *)(iVar1 + 0x14));
    }
  }
  return;
}

// ---- ItemUI$$OnPointerEnter ----
// C#: void ItemUI__OnPointerEnter (ItemUI_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);

void ItemUI__OnPointerEnter
               (ItemUI_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  OnItemUIChangedEventArgs_o *__this_00;
  int iVar1;
  
  if (DAT_ram_006649d2 == '\0') {
    unnamed_function_1099(&OnItemUIChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d2 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x38);
  if (iVar1 != 0) {
    __this_00 = (OnItemUIChangedEventArgs_o *)
                unnamed_function_95402(OnItemUIChangedEventArgs_TypeInfo);
    OnItemUIChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
    __this_00->itemUI = __this;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this_00,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- ItemUI$$.ctor ----
// C#: void ItemUI___ctor (ItemUI_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

