// Assembly-CSharp :: Inventory
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Inventory : MonoBehaviour // TypeDefIndex: 5640
{
	// Fields
	[HideInInspector]
	public List<ItemUI> inventorySlotList; // 0x10
	[HideInInspector]
	public List<ItemUI> hotBarSlotList; // 0x14
	public GameObject itemUIPrefab; // 0x18
	public GameObject content; // 0x1C
	public GameObject hotBar; // 0x20
	private ItemUI draggedItemUI; // 0x24
	private ItemUI hoverItemUI; // 0x28
	private ItemUI pressedItemUI; // 0x2C
	private ItemUI previousPressedItemUI; // 0x30

	// Methods

	// RVA: 0x38A0 Offset: 0x38A0 VA: 0x38A0
	private void Start() { }

	// RVA: 0x38A1 Offset: 0x38A1 VA: 0x38A1
	private void OnEnable() { }

	// RVA: 0x38A2 Offset: 0x38A2 VA: 0x38A2
	private void OnDisable() { }

	// RVA: 0x38A3 Offset: 0x38A3 VA: 0x38A3
	private void OnDestroy() { }

	// RVA: 0x38A4 Offset: 0x38A4 VA: 0x38A4
	public void ResetInventory(List<InventoryItem> skipList) { }

	// RVA: 0x38A5 Offset: 0x38A5 VA: 0x38A5
	private void StaticEventHandler_OnItemUIClickChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs) { }

	// RVA: 0x38A6 Offset: 0x38A6 VA: 0x38A6
	private void StaticEventHandler_OnItemUIChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs) { }

	// RVA: 0x38A7 Offset: 0x38A7 VA: 0x38A7
	private void StaticEventHandler_OnItemUIHoverChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs) { }

	// RVA: 0x38A8 Offset: 0x38A8 VA: 0x38A8
	public void MoveAndSwapItemUI() { }

	// RVA: 0x38A9 Offset: 0x38A9 VA: 0x38A9
	public void SwapTwoItemUI(ItemUIType itemUIType) { }

	// RVA: 0x38AA Offset: 0x38AA VA: 0x38AA
	public void SwapItemUIWithEmptySlot(ItemUIType itemUITypee) { }

	// RVA: 0x38AB Offset: 0x38AB VA: 0x38AB
	public void MoveItemToHotBar() { }

	// RVA: 0x38AC Offset: 0x38AC VA: 0x38AC
	public void InitializeInventorySlotList(int quantity) { }

	// RVA: 0x38AD Offset: 0x38AD VA: 0x38AD
	public void InitializeHotBarSlotList(int quantity) { }

	// RVA: 0x38AE Offset: 0x38AE VA: 0x38AE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Inventory$$Start ----
// C#: void Inventory__Start (Inventory_o* __this, const MethodInfo* method);

void Inventory__Start(Inventory_o *__this,MethodInfo *method)

{
  OnInventoryChangedEventArgs_o *__this_00;
  int iVar1;
  
  if (DAT_ram_006649cc == '\0') {
    unnamed_function_1099(&OnInventoryChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649cc = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x30);
  if (iVar1 != 0) {
    __this_00 = (OnInventoryChangedEventArgs_o *)
                unnamed_function_95402(OnInventoryChangedEventArgs_TypeInfo);
    OnInventoryChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
    __this_00->inventory = __this;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this_00,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- Inventory$$OnEnable ----
// C#: void Inventory__OnEnable (Inventory_o* __this, const MethodInfo* method);

void Inventory__OnEnable(Inventory_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  System_Action_OnItemUIChangedEventArgs__o *pSVar2;
  MethodInfo local_30;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_006648b3 == '\0') {
    unnamed_function_1099(&System_Action_OnItemUIChangedEventArgs__TypeInfo);
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a768);
    unnamed_function_1099(&DAT_ram_0056a76c);
    unnamed_function_1099(&DAT_ram_0056a770);
    unnamed_function_1099(&DAT_ram_0056d380);
    DAT_ram_006648b3 = '\x01';
  }
  uVar1 = unnamed_function_44643(__this,0);
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_30._16_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_30._24_4_ = *(undefined4 *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10 = local_30._16_8_;
  local_8 = local_30._24_4_;
  unnamed_function_44982(uVar1,&local_30.field_0x10,0);
  uVar1 = unnamed_function_44643(__this,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(uVar1,0,0);
  uVar1 = unnamed_function_44643(__this,0);
  if (DAT_ram_00662a53 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00662a53 = '\x01';
  }
  local_30._8_4_ = *(undefined4 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x14);
  local_30._0_8_ = *(undefined8 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0xc);
  uVar1 = unnamed_function_13884(uVar1,&local_30,0.5,0);
  unnamed_function_70031(uVar1,0x1b,DAT_ram_0056d380);
  pSVar2 = (System_Action_OnItemUIChangedEventArgs__o *)
           unnamed_function_95402(System_Action_OnItemUIChangedEventArgs__TypeInfo);
  unnamed_function_60074(pSVar2,__this,DAT_ram_0056a768,0);
  StaticEventHandler__add_OnItemUIEndDragChanged(pSVar2,&local_30);
  pSVar2 = (System_Action_OnItemUIChangedEventArgs__o *)
           unnamed_function_95402(System_Action_OnItemUIChangedEventArgs__TypeInfo);
  unnamed_function_60074(pSVar2,__this,DAT_ram_0056a770,0);
  StaticEventHandler__add_OnItemUIHoverChanged(pSVar2,&local_30);
  pSVar2 = (System_Action_OnItemUIChangedEventArgs__o *)
           unnamed_function_95402(System_Action_OnItemUIChangedEventArgs__TypeInfo);
  unnamed_function_60074(pSVar2,__this,DAT_ram_0056a76c,0);
  StaticEventHandler__add_OnItemUIClickChanged(pSVar2,&local_30);
  return;
}

// ---- Inventory$$OnDisable ----
// C#: void Inventory__OnDisable (Inventory_o* __this, const MethodInfo* method);

void Inventory__OnDisable(Inventory_o *__this,MethodInfo *method)

{
  System_Action_OnItemUIChangedEventArgs__o *pSVar1;
  
  if (DAT_ram_006648b4 == '\0') {
    unnamed_function_1099(&System_Action_OnItemUIChangedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a768);
    unnamed_function_1099(&DAT_ram_0056a76c);
    unnamed_function_1099(&DAT_ram_0056a770);
    DAT_ram_006648b4 = '\x01';
  }
  pSVar1 = (System_Action_OnItemUIChangedEventArgs__o *)
           unnamed_function_95402(System_Action_OnItemUIChangedEventArgs__TypeInfo);
  unnamed_function_60074(pSVar1,__this,DAT_ram_0056a768,0);
  StaticEventHandler__remove_OnItemUIEndDragChanged(pSVar1,(MethodInfo *)__this);
  pSVar1 = (System_Action_OnItemUIChangedEventArgs__o *)
           unnamed_function_95402(System_Action_OnItemUIChangedEventArgs__TypeInfo);
  unnamed_function_60074(pSVar1,__this,DAT_ram_0056a770,0);
  StaticEventHandler__remove_OnItemUIHoverChanged(pSVar1,(MethodInfo *)__this);
  pSVar1 = (System_Action_OnItemUIChangedEventArgs__o *)
           unnamed_function_95402(System_Action_OnItemUIChangedEventArgs__TypeInfo);
  unnamed_function_60074(pSVar1,__this,DAT_ram_0056a76c,0);
  StaticEventHandler__remove_OnItemUIClickChanged(pSVar1,(MethodInfo *)__this);
  return;
}

// ---- Inventory$$OnDestroy ----
// C#: void Inventory__OnDestroy (Inventory_o* __this, const MethodInfo* method);

void Inventory__OnDestroy(Inventory_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_006648b5 == '\0') {
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    DAT_ram_006648b5 = '\x01';
  }
  param1 = unnamed_function_44643(__this,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(param1,0,0);
  return;
}

// ---- Inventory$$ResetInventory ----
// C#: void Inventory__ResetInventory (Inventory_o* __this, System_Collections_Generic_List_InventoryItem__o* skipList, const MethodInfo* method);

void Inventory__ResetInventory
               (Inventory_o *__this,System_Collections_Generic_List_InventoryItem__o *skipList,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_20;
  undefined8 *puStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_006648b6 == '\0') {
    unnamed_function_1099(&DAT_ram_00561290);
    unnamed_function_1099(&DAT_ram_00561294);
    unnamed_function_1099(&DAT_ram_00561298);
    unnamed_function_1099(&DAT_ram_0056341c);
    unnamed_function_1099(&DAT_ram_00563448);
    DAT_ram_006648b6 = '\x01';
  }
  unnamed_function_6549(&local_20,__this->inventorySlotList,DAT_ram_00563448);
  local_8 = local_18;
  local_10 = CONCAT44(puStack_1c,local_20);
  local_20 = 0;
  puStack_1c = &local_10;
code_r0x81a31d62:
  do {
    DAT_ram_005ddf34 = 0;
    iVar1 = import::env::invoke_iii
                      (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10,
                       DAT_ram_00561294);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar2 == 1) {
      param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a31e47;
    }
    if (iVar1 == 0) {
      iVar1 = 5;
      iVar2 = local_20;
      goto code_r0x81a31e93;
    }
    iVar2 = local_8._4_4_;
    if (*(int *)(local_8._4_4_ + 0x20) != 0) {
      DAT_ram_005ddf34 = 0;
      iVar4 = import::env::invoke_iiii
                        (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x32,skipList,
                         *(int *)(local_8._4_4_ + 0x20),DAT_ram_0056341c);
      iVar1 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar1 == 1) {
        param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a31e47;
      }
      if (iVar4 != 0) goto code_r0x81a31d62;
    }
    DAT_ram_005ddf34 = 0;
    import::env::invoke_vii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x14,iVar2,&local_20);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
  } while (iVar2 != 1);
  param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a31e47:
  iVar2 = import::env::getTempRet0();
  iVar1 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
  if (iVar2 == iVar1) {
    piVar3 = (int *)import::env::__cxa_begin_catch(param1);
    iVar2 = *piVar3;
    iVar1 = 0;
    DAT_ram_005ddf34 = 0;
    local_20 = iVar2;
    import::env::invoke_v(0x3a);
    iVar4 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar4 != 1) {
code_r0x81a31e93:
      DAT_ram_005ddf34 = 0;
      if (iVar2 != 0) {
        unnamed_function_1088(iVar2);
        do {
          halt_trap();
        } while( true );
      }
      if ((iVar1 != 0) &&
         ((((iVar1 == 1 || (iVar1 == 2)) || (iVar1 == 3)) || ((iVar1 == 4 || (iVar1 != 5)))))) {
        DAT_ram_005ddf34 = 0;
        return;
      }
      unnamed_function_6549(&local_20,__this->hotBarSlotList,DAT_ram_00563448);
      local_8 = local_18;
      local_10 = CONCAT44(puStack_1c,local_20);
      local_20 = 0;
      puStack_1c = &local_10;
code_r0x81a31f2d:
      do {
        DAT_ram_005ddf34 = 0;
        iVar1 = import::env::invoke_iii
                          (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10,
                           DAT_ram_00561294);
        iVar2 = DAT_ram_005ddf34;
        DAT_ram_005ddf34 = 0;
        if (iVar2 == 1) {
          param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
          goto code_r0x81a32015;
        }
        iVar2 = local_20;
        if (iVar1 == 0) goto code_r0x81a3205d;
        iVar2 = local_8._4_4_;
        if (*(int *)(local_8._4_4_ + 0x20) != 0) {
          DAT_ram_005ddf34 = 0;
          iVar4 = import::env::invoke_iiii
                            (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x32,skipList,
                             *(int *)(local_8._4_4_ + 0x20),DAT_ram_0056341c);
          iVar1 = DAT_ram_005ddf34;
          DAT_ram_005ddf34 = 0;
          if (iVar1 == 1) {
            param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
            goto code_r0x81a32015;
          }
          if (iVar4 != 0) goto code_r0x81a31f2d;
        }
        DAT_ram_005ddf34 = 0;
        import::env::invoke_vii
                  (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x14,iVar2,&local_20);
        iVar2 = DAT_ram_005ddf34;
        DAT_ram_005ddf34 = 0;
      } while (iVar2 != 1);
      param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a32015:
      iVar2 = import::env::getTempRet0();
      iVar1 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
      if (iVar2 == iVar1) {
        piVar3 = (int *)import::env::__cxa_begin_catch(param1);
        iVar2 = *piVar3;
        DAT_ram_005ddf34 = 0;
        local_20 = iVar2;
        import::env::invoke_v(0x3a);
        iVar1 = DAT_ram_005ddf34;
        DAT_ram_005ddf34 = 0;
        if (iVar1 != 1) {
code_r0x81a3205d:
          DAT_ram_005ddf34 = 0;
          if (iVar2 == 0) {
            DAT_ram_005ddf34 = 0;
            return;
          }
          unnamed_function_1088(iVar2);
          do {
            halt_trap();
          } while( true );
        }
        param1 = import::env::__cxa_find_matching_catch_2();
        import::env::getTempRet0();
      }
      DAT_ram_005ddf34 = 0;
      import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x16,&local_20);
      goto joined_r0x81a320ae;
    }
    param1 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  DAT_ram_005ddf34 = 0;
  import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x15,&local_20);
joined_r0x81a320ae:
  if (DAT_ram_005ddf34 != 1) {
    DAT_ram_005ddf34 = 0;
    import::env::__resumeException(param1);
    do {
      halt_trap();
    } while( true );
  }
  DAT_ram_005ddf34 = 0;
  import::env::__cxa_find_matching_catch_3(0);
  import::env::getTempRet0();
  unnamed_function_642();
  do {
    halt_trap();
  } while( true );
}

// ---- Inventory$$StaticEventHandler_OnItemUIClickChanged ----
// C#: void Inventory__StaticEventHandler_OnItemUIClickChanged (Inventory_o* __this, OnItemUIChangedEventArgs_o* onItemUIChangedEventArgs, const MethodInfo* method);

void Inventory__StaticEventHandler_OnItemUIClickChanged
               (Inventory_o *__this,OnItemUIChangedEventArgs_o *onItemUIChangedEventArgs,
               MethodInfo *method)

{
  ItemUI_o **ppIVar1;
  int param2;
  int iVar2;
  undefined4 uVar3;
  ItemUI_o *param1;
  ItemUI_o *pIVar4;
  
  if (DAT_ram_006648b7 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648b7 = '\x01';
  }
  pIVar4 = __this->pressedItemUI;
  __this->previousPressedItemUI = pIVar4;
  __this->pressedItemUI = onItemUIChangedEventArgs->itemUI;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  ppIVar1 = &__this->pressedItemUI;
  param2 = unnamed_function_44710(pIVar4,0,0);
  if (param2 == 0) {
    pIVar4 = *ppIVar1;
    param1 = __this->previousPressedItemUI;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar2 = unnamed_function_44679(param1,pIVar4,0);
    if (iVar2 == 0) {
      return;
    }
    uVar3 = unnamed_function_44644((*ppIVar1)->SelectorImg,0);
    unnamed_function_44686(uVar3,1,0);
    ppIVar1 = &__this->previousPressedItemUI;
  }
  uVar3 = unnamed_function_44644((*ppIVar1)->SelectorImg,0);
  unnamed_function_44686(uVar3,param2,0);
  return;
}

// ---- Inventory$$StaticEventHandler_OnItemUIChanged ----
// C#: void Inventory__StaticEventHandler_OnItemUIChanged (Inventory_o* __this, OnItemUIChangedEventArgs_o* onItemUIChangedEventArgs, const MethodInfo* method);

void Inventory__StaticEventHandler_OnItemUIChanged
               (Inventory_o *__this,OnItemUIChangedEventArgs_o *onItemUIChangedEventArgs,
               MethodInfo *method)

{
  __this->draggedItemUI = onItemUIChangedEventArgs->itemUI;
  return;
}

// ---- Inventory$$StaticEventHandler_OnItemUIHoverChanged ----
// C#: void Inventory__StaticEventHandler_OnItemUIHoverChanged (Inventory_o* __this, OnItemUIChangedEventArgs_o* onItemUIChangedEventArgs, const MethodInfo* method);

void Inventory__StaticEventHandler_OnItemUIHoverChanged
               (Inventory_o *__this,OnItemUIChangedEventArgs_o *onItemUIChangedEventArgs,
               MethodInfo *method)

{
  int iVar1;
  ItemUI_o *param1;
  
  if (DAT_ram_006648b8 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648b8 = '\x01';
  }
  param1 = __this->draggedItemUI;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,0,0);
  if (iVar1 != 0) {
    __this->hoverItemUI = onItemUIChangedEventArgs->itemUI;
    Inventory__MoveAndSwapItemUI(__this,(MethodInfo *)__this);
    __this->draggedItemUI = (ItemUI_o *)0x0;
  }
  return;
}

// ---- Inventory$$MoveAndSwapItemUI ----
// C#: void Inventory__MoveAndSwapItemUI (Inventory_o* __this, const MethodInfo* method);

void Inventory__MoveAndSwapItemUI(Inventory_o *__this,MethodInfo *method)

{
  int iVar1;
  OnInventoryItemChangedEventArgs_o *__this_00;
  undefined4 uVar2;
  ItemUI_o *pIVar3;
  ItemUI_o *param1;
  ItemUIType IVar4;
  TextMeshProUGUI_o *pTVar5;
  TextMeshProUGUI_o *pTVar6;
  InventoryItem_o *pIVar7;
  undefined1 local_1;
  
  if (DAT_ram_006648b9 == '\0') {
    unnamed_function_1099(&bool_TypeInfo);
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648b9 = '\x01';
  }
  pIVar3 = __this->hoverItemUI;
  param1 = __this->draggedItemUI;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,pIVar3,0);
  if (iVar1 != 0) {
    return;
  }
  IVar4 = __this->draggedItemUI->ItemUIType;
  if (IVar4 == Inventory) {
    pIVar3 = __this->hoverItemUI;
    if (pIVar3->ItemUIType == Inventory) {
      if (pIVar3->isHasItem == false) {
        Inventory__SwapItemUIWithEmptySlot(__this,Inventory,(MethodInfo *)__this);
        uVar2 = unnamed_function_44644(__this->draggedItemUI->ItemImg,0);
        unnamed_function_44686(uVar2,0,0);
        uVar2 = unnamed_function_44644(__this->draggedItemUI->quantityText,0);
        unnamed_function_44686(uVar2,0,0);
        __this->draggedItemUI->isHasItem = false;
        return;
      }
      Inventory__SwapTwoItemUI(__this,Inventory,(MethodInfo *)__this);
      return;
    }
    if (pIVar3->ItemUIType == HotBar) {
      local_1 = __this->draggedItemUI->inventoryItem->isOnHotBar;
      uVar2 = unnamed_function_1113(bool_TypeInfo,&local_1);
      if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Debug_TypeInfo);
      }
      unnamed_function_52407(uVar2,0);
      if (__this->draggedItemUI->inventoryItem->isOnHotBar != false) {
        return;
      }
      uVar2 = unnamed_function_44644(__this->hoverItemUI->ItemImg,0);
      unnamed_function_44686(uVar2,1,0);
      uVar2 = unnamed_function_44644(__this->hoverItemUI->quantityText,0);
      unnamed_function_44686(uVar2,1,0);
      unnamed_function_16520
                (__this->hoverItemUI->ItemImg,__this->draggedItemUI->ItemImg[0x20]._opaque,0);
      pTVar5 = __this->hoverItemUI->quantityText;
      pTVar6 = __this->draggedItemUI->quantityText;
      iVar1 = pTVar6->_opaque;
      uVar2 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2c8) * 4))
                        (pTVar6,*(undefined4 *)(iVar1 + 0x2cc));
      iVar1 = pTVar5->_opaque;
      (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
                (pTVar5,uVar2,*(undefined4 *)(iVar1 + 0x2d4));
      pIVar3 = __this->hoverItemUI;
      pIVar7 = __this->draggedItemUI->inventoryItem;
      pIVar3->inventoryItem = pIVar7;
      iVar1 = pIVar3->itemId;
      pIVar7->isOnHotBar = true;
      pIVar7->hotbarSlot = iVar1;
      if (DAT_ram_006649db == '\0') {
        unnamed_function_1099(&OnInventoryItemChangedEventArgs_TypeInfo);
        unnamed_function_1099(&StaticEventHandler_TypeInfo);
        DAT_ram_006649db = '\x01';
      }
      iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x44);
      if (iVar1 == 0) {
        return;
      }
      __this_00 = (OnInventoryItemChangedEventArgs_o *)
                  unnamed_function_95402(OnInventoryItemChangedEventArgs_TypeInfo);
      OnInventoryItemChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
      __this_00->inventoryItem = pIVar7;
      (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
                (*(undefined4 *)(iVar1 + 0x20),__this_00,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  else if (IVar4 == HotBar) {
    pIVar3 = __this->hoverItemUI;
    if (pIVar3->ItemUIType == Inventory) {
      return;
    }
  }
  else {
    pIVar3 = __this->hoverItemUI;
  }
  if (pIVar3->isHasItem == false) {
    Inventory__SwapItemUIWithEmptySlot(__this,HotBar,(MethodInfo *)__this);
  }
  else {
    Inventory__SwapTwoItemUI(__this,HotBar,(MethodInfo *)__this);
  }
  return;
}

// ---- Inventory$$SwapTwoItemUI ----
// C#: void Inventory__SwapTwoItemUI (Inventory_o* __this, int32_t itemUIType, const MethodInfo* method);

void Inventory__SwapTwoItemUI(Inventory_o *__this,ItemUIType itemUIType,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  TextMeshProUGUI_o *pTVar4;
  InventoryItem_o *pIVar5;
  ItemUI_o *pIVar6;
  int iVar7;
  TextMeshProUGUI_o *pTVar8;
  InventoryItem_o *pIVar9;
  
  if (DAT_ram_006648ba == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    DAT_ram_006648ba = '\x01';
  }
  iVar3 = __this->draggedItemUI->ItemImg[0x20]._opaque;
  pTVar4 = __this->draggedItemUI->quantityText;
  iVar7 = pTVar4->_opaque;
  uVar1 = (**(code **)((ulonglong)*(uint *)(iVar7 + 0x2c8) * 4))
                    (pTVar4,*(undefined4 *)(iVar7 + 0x2cc));
  pIVar5 = __this->draggedItemUI->inventoryItem;
  unnamed_function_16520
            (__this->draggedItemUI->ItemImg,__this->hoverItemUI->ItemImg[0x20]._opaque,0);
  pTVar4 = __this->draggedItemUI->quantityText;
  pTVar8 = __this->hoverItemUI->quantityText;
  iVar7 = pTVar8->_opaque;
  uVar2 = (**(code **)((ulonglong)*(uint *)(iVar7 + 0x2c8) * 4))
                    (pTVar8,*(undefined4 *)(iVar7 + 0x2cc));
  iVar7 = pTVar4->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar7 + 0x2d0) * 4))
            (pTVar4,uVar2,*(undefined4 *)(iVar7 + 0x2d4));
  pIVar9 = __this->hoverItemUI->inventoryItem;
  __this->draggedItemUI->inventoryItem = pIVar9;
  uVar2 = unnamed_function_83644(&pIVar9->inventorySlot,0);
  uVar2 = unnamed_function_81364(uVar2,__this->draggedItemUI->inventoryItem->itemSO->itemName,0);
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(uVar2,0);
  iVar7 = 0x14;
  if (itemUIType == Inventory) {
    iVar7 = 0x10;
  }
  *(int *)((int)&__this->draggedItemUI->inventoryItem->klass + iVar7) =
       __this->draggedItemUI->itemId;
  unnamed_function_16520(__this->hoverItemUI->ItemImg,iVar3,0);
  pTVar4 = __this->hoverItemUI->quantityText;
  iVar3 = pTVar4->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x2d0) * 4))
            (pTVar4,uVar1,*(undefined4 *)(iVar3 + 0x2d4));
  pIVar6 = __this->hoverItemUI;
  pIVar6->inventoryItem = pIVar5;
  *(int *)((int)&pIVar5->klass + iVar7) = pIVar6->itemId;
  return;
}

// ---- Inventory$$SwapItemUIWithEmptySlot ----
// C#: void Inventory__SwapItemUIWithEmptySlot (Inventory_o* __this, int32_t itemUITypee, const MethodInfo* method);

void Inventory__SwapItemUIWithEmptySlot
               (Inventory_o *__this,ItemUIType itemUITypee,MethodInfo *method)

{
  undefined4 uVar1;
  TextMeshProUGUI_o *pTVar2;
  ItemUI_o *pIVar3;
  TextMeshProUGUI_o *pTVar4;
  ItemUI_o *pIVar5;
  InventoryItem_o *pIVar6;
  int iVar7;
  
  uVar1 = unnamed_function_44644(__this->hoverItemUI->ItemImg,0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(__this->hoverItemUI->quantityText,0);
  unnamed_function_44686(uVar1,1,0);
  unnamed_function_16520
            (__this->hoverItemUI->ItemImg,__this->draggedItemUI->ItemImg[0x20]._opaque,0);
  pTVar2 = __this->hoverItemUI->quantityText;
  pTVar4 = __this->draggedItemUI->quantityText;
  iVar7 = pTVar4->_opaque;
  uVar1 = (**(code **)((ulonglong)*(uint *)(iVar7 + 0x2c8) * 4))
                    (pTVar4,*(undefined4 *)(iVar7 + 0x2cc));
  iVar7 = pTVar2->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar7 + 0x2d0) * 4))
            (pTVar2,uVar1,*(undefined4 *)(iVar7 + 0x2d4));
  pIVar3 = __this->hoverItemUI;
  pIVar5 = __this->draggedItemUI;
  pIVar6 = pIVar5->inventoryItem;
  pIVar3->inventoryItem = pIVar6;
  iVar7 = 0x14;
  if (itemUITypee == Inventory) {
    iVar7 = 0x10;
  }
  *(int *)((int)&pIVar6->klass + iVar7) = pIVar3->itemId;
  pIVar3->isHasItem = true;
  uVar1 = unnamed_function_44644(pIVar5->ItemImg,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->draggedItemUI->quantityText,0);
  unnamed_function_44686(uVar1,0,0);
  pIVar3 = __this->draggedItemUI;
  pIVar3->inventoryItem = (InventoryItem_o *)0x0;
  pIVar3->isHasItem = false;
  return;
}

// ---- Inventory$$MoveItemToHotBar ----
// C#: void Inventory__MoveItemToHotBar (Inventory_o* __this, const MethodInfo* method);

void Inventory__MoveItemToHotBar(Inventory_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  TextMeshProUGUI_o *pTVar2;
  ItemUI_o *pIVar3;
  TextMeshProUGUI_o *pTVar4;
  InventoryItem_o *pIVar5;
  int iVar6;
  
  uVar1 = unnamed_function_44644(__this->hoverItemUI->ItemImg,0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(__this->hoverItemUI->quantityText,0);
  unnamed_function_44686(uVar1,1,0);
  unnamed_function_16520
            (__this->hoverItemUI->ItemImg,__this->draggedItemUI->ItemImg[0x20]._opaque,0);
  pTVar2 = __this->hoverItemUI->quantityText;
  pTVar4 = __this->draggedItemUI->quantityText;
  iVar6 = pTVar4->_opaque;
  uVar1 = (**(code **)((ulonglong)*(uint *)(iVar6 + 0x2c8) * 4))
                    (pTVar4,*(undefined4 *)(iVar6 + 0x2cc));
  iVar6 = pTVar2->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar6 + 0x2d0) * 4))
            (pTVar2,uVar1,*(undefined4 *)(iVar6 + 0x2d4));
  pIVar3 = __this->hoverItemUI;
  pIVar5 = __this->draggedItemUI->inventoryItem;
  pIVar3->inventoryItem = pIVar5;
  iVar6 = pIVar3->itemId;
  pIVar5->isOnHotBar = true;
  pIVar5->hotbarSlot = iVar6;
  return;
}

// ---- Inventory$$InitializeInventorySlotList ----
// C#: void Inventory__InitializeInventorySlotList (Inventory_o* __this, int32_t quantity, const MethodInfo* method);

void Inventory__InitializeInventorySlotList(Inventory_o *__this,int quantity,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  undefined4 uVar2;
  undefined4 param2;
  int param2_00;
  GameObject_o *param1_00;
  List_o *param1_01;
  uint uVar3;
  int local_4;
  
  if (DAT_ram_006648bb == '\0') {
    unnamed_function_1099(&DAT_ram_00569ac0);
    unnamed_function_1099(&DAT_ram_00563444);
    unnamed_function_1099(&DAT_ram_0056b51c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_6767 /* "Slot " */);
    DAT_ram_006648bb = '\x01';
  }
  local_4 = 0;
  if (0 < quantity) {
    do {
      param1_00 = __this->itemUIPrefab;
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Object_TypeInfo);
      }
      param1 = unnamed_function_51907(param1_00,DAT_ram_0056b51c);
      uVar2 = unnamed_function_44683(param1,0);
      param2 = unnamed_function_44683(__this->content,0);
      unnamed_function_44985(uVar2,param2,0,0);
      uVar2 = unnamed_function_83644(&local_4,0);
      uVar2 = unnamed_function_81364(StringLiteral_6767 /* "Slot " */,uVar2,0);
      unnamed_function_44770(param1,uVar2,0);
      param2_00 = unnamed_function_73836(param1,DAT_ram_00569ac0);
      *(int *)(param2_00 + 0x10) = local_4;
      *(undefined1 *)(param2_00 + 0x30) = 0;
      *(undefined8 *)(param2_00 + 0x20) = 0;
      iVar1 = DAT_ram_00563444;
      param1_01 = __this->inventorySlotList;
      param1_01[4]._opaque = param1_01[4]._opaque + 1;
      uVar3 = param1_01[3]._opaque;
      if (uVar3 < *(uint *)(param1_01[2]._opaque + 0xc)) {
        param1_01[3]._opaque = uVar3 + 1;
        *(int *)(param1_01[2]._opaque + uVar3 * 4 + 0x10) = param2_00;
      }
      else {
        unnamed_function_6534
                  (param1_01,param2_00,
                   *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
      }
      local_4 = local_4 + 1;
    } while (local_4 < quantity);
  }
  return;
}

// ---- Inventory$$InitializeHotBarSlotList ----
// C#: void Inventory__InitializeHotBarSlotList (Inventory_o* __this, int32_t quantity, const MethodInfo* method);

void Inventory__InitializeHotBarSlotList(Inventory_o *__this,int quantity,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  undefined4 uVar2;
  undefined4 param2;
  int param2_00;
  GameObject_o *param1_00;
  List_o *param1_01;
  uint uVar3;
  int local_4;
  
  if (DAT_ram_006648bc == '\0') {
    unnamed_function_1099(&DAT_ram_00569ac0);
    unnamed_function_1099(&DAT_ram_00563444);
    unnamed_function_1099(&DAT_ram_0056b51c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_6767 /* "Slot " */);
    DAT_ram_006648bc = '\x01';
  }
  local_4 = 0;
  if (0 < quantity) {
    do {
      param1_00 = __this->itemUIPrefab;
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Object_TypeInfo);
      }
      param1 = unnamed_function_51907(param1_00,DAT_ram_0056b51c);
      uVar2 = unnamed_function_44683(param1,0);
      param2 = unnamed_function_44683(__this->hotBar,0);
      unnamed_function_44985(uVar2,param2,0,0);
      uVar2 = unnamed_function_83644(&local_4,0);
      uVar2 = unnamed_function_81364(StringLiteral_6767 /* "Slot " */,uVar2,0);
      unnamed_function_44770(param1,uVar2,0);
      param2_00 = unnamed_function_73836(param1,DAT_ram_00569ac0);
      *(int *)(param2_00 + 0x10) = local_4;
      *(undefined1 *)(param2_00 + 0x30) = 0;
      *(undefined8 *)(param2_00 + 0x20) = 0x100000000;
      iVar1 = DAT_ram_00563444;
      param1_01 = __this->hotBarSlotList;
      param1_01[4]._opaque = param1_01[4]._opaque + 1;
      uVar3 = param1_01[3]._opaque;
      if (uVar3 < *(uint *)(param1_01[2]._opaque + 0xc)) {
        param1_01[3]._opaque = uVar3 + 1;
        *(int *)(param1_01[2]._opaque + uVar3 * 4 + 0x10) = param2_00;
      }
      else {
        unnamed_function_6534
                  (param1_01,param2_00,
                   *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
      }
      local_4 = local_4 + 1;
    } while (local_4 < quantity);
  }
  return;
}

// ---- Inventory$$.ctor ----
// C#: void Inventory___ctor (Inventory_o* __this, const MethodInfo* method);

void Inventory___ctor(Inventory_o *__this,MethodInfo *method)

{
  List_o *pLVar1;
  
  if (DAT_ram_006648bd == '\0') {
    unnamed_function_1099(&DAT_ram_00563440);
    unnamed_function_1099(&System_Collections_Generic_List_ItemUI__TypeInfo);
    DAT_ram_006648bd = '\x01';
  }
  pLVar1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_ItemUI__TypeInfo);
  unnamed_function_5132(pLVar1,DAT_ram_00563440);
  __this->inventorySlotList = pLVar1;
  pLVar1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_ItemUI__TypeInfo);
  unnamed_function_5132(pLVar1,DAT_ram_00563440);
  __this->hotBarSlotList = pLVar1;
  unnamed_function_44622(__this,0);
  return;
}

