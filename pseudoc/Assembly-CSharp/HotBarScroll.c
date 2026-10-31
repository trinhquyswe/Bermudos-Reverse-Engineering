// Assembly-CSharp :: HotBarScroll
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HotBarScroll : MonoBehaviour // TypeDefIndex: 5639
{
	// Fields
	[SerializeField]
	private Image itemIcom; // 0x10
	private TextMeshProUGUI itemQuantity; // 0x14
	private int currentIndex; // 0x18
	private Sprite emptyItemSprite; // 0x1C

	// Methods

	// RVA: 0x3897 Offset: 0x3897 VA: 0x3897
	private void Awake() { }

	// RVA: 0x3898 Offset: 0x3898 VA: 0x3898
	private void OnDestroy() { }

	// RVA: 0x3899 Offset: 0x3899 VA: 0x3899
	private void OnGameStateChange_HotBar(GameState gameState) { }

	// RVA: 0x389A Offset: 0x389A VA: 0x389A
	private void StaticEventHandler_OnItemChanged(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs) { }

	// RVA: 0x389B Offset: 0x389B VA: 0x389B
	private void StaticEventHandler_OnMoveItemToHotBar(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs) { }

	// RVA: 0x389C Offset: 0x389C VA: 0x389C
	private void Start() { }

	// RVA: 0x389D Offset: 0x389D VA: 0x389D
	private void Update() { }

	// RVA: 0x389E Offset: 0x389E VA: 0x389E
	private void ChangedItem(int scrollValue) { }

	// RVA: 0x389F Offset: 0x389F VA: 0x389F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- HotBarScroll$$Awake ----
// C#: void HotBarScroll__Awake (HotBarScroll_o* __this, const MethodInfo* method);

void HotBarScroll__Awake(HotBarScroll_o *__this,MethodInfo *method)

{
  TextMeshProUGUI_o *pTVar1;
  System_Action_OnInventoryItemChangedEventArgs__o *pSVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 param1;
  
  if (DAT_ram_006648ac == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567f78);
    unnamed_function_1099(&DAT_ram_00569e5c);
    unnamed_function_1099(&DAT_ram_00569e60);
    unnamed_function_1099(&DAT_ram_00569e64);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_006648ac = '\x01';
  }
  pTVar1 = (TextMeshProUGUI_o *)unnamed_function_65372(__this,DAT_ram_00567f78);
  __this->itemQuantity = pTVar1;
  pSVar2 = (System_Action_OnInventoryItemChangedEventArgs__o *)
           unnamed_function_95402(System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
  unnamed_function_60074(pSVar2,__this,DAT_ram_00569e60,0);
  StaticEventHandler__add_OnItemChanged(pSVar2,(MethodInfo *)__this);
  pSVar2 = (System_Action_OnInventoryItemChangedEventArgs__o *)
           unnamed_function_95402(System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
  unnamed_function_60074(pSVar2,__this,DAT_ram_00569e64,0);
  StaticEventHandler__add_OnMoveItemToHotBar(pSVar2,(MethodInfo *)__this);
  iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar6 = **(int **)(iVar5 + 0x5c);
  param1 = *(undefined4 *)(iVar6 + 0x20);
  uVar3 = unnamed_function_95402(System_Action_GameState__TypeInfo);
  unnamed_function_60038(uVar3,__this,DAT_ram_00569e5c,0);
  iVar5 = unnamed_function_85158(param1,uVar3,0);
  uVar3 = System_Action_GameState__TypeInfo;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar6 + 0x20) = 0;
    return;
  }
  iVar4 = unnamed_function_1112(iVar5,System_Action_GameState__TypeInfo);
  if (iVar4 == 0) {
    unnamed_function_1116(iVar5,uVar3);
    do {
      halt_trap();
    } while( true );
  }
  *(int *)(iVar6 + 0x20) = iVar4;
  uVar3 = System_Action_GameState__TypeInfo;
  iVar6 = unnamed_function_1112(iVar5,System_Action_GameState__TypeInfo);
  if (iVar6 != 0) {
    return;
  }
  unnamed_function_1116(iVar5,uVar3);
  do {
    halt_trap();
  } while( true );
}

// ---- HotBarScroll$$OnDestroy ----
// C#: void HotBarScroll__OnDestroy (HotBarScroll_o* __this, const MethodInfo* method);

void HotBarScroll__OnDestroy(HotBarScroll_o *__this,MethodInfo *method)

{
  System_Action_OnInventoryItemChangedEventArgs__o *pSVar1;
  
  if (DAT_ram_006648ad == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00569e60);
    unnamed_function_1099(&DAT_ram_00569e64);
    DAT_ram_006648ad = '\x01';
  }
  pSVar1 = (System_Action_OnInventoryItemChangedEventArgs__o *)
           unnamed_function_95402(System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
  unnamed_function_60074(pSVar1,__this,DAT_ram_00569e60,0);
  StaticEventHandler__remove_OnItemChanged(pSVar1,(MethodInfo *)__this);
  pSVar1 = (System_Action_OnInventoryItemChangedEventArgs__o *)
           unnamed_function_95402(System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
  unnamed_function_60074(pSVar1,__this,DAT_ram_00569e64,0);
  StaticEventHandler__remove_OnMoveItemToHotBar(pSVar1,(MethodInfo *)__this);
  return;
}

// ---- HotBarScroll$$OnGameStateChange_HotBar ----
// C#: void HotBarScroll__OnGameStateChange_HotBar (HotBarScroll_o* __this, int32_t gameState, const MethodInfo* method);

void HotBarScroll__OnGameStateChange_HotBar
               (HotBarScroll_o *__this,GameState gameState,MethodInfo *method)

{
  undefined4 uVar1;
  System_Collections_Generic_List_InventoryItem__o *pSVar2;
  int iVar3;
  int iVar4;
  Image_o *param1;
  TextMeshProUGUI_o *pTVar5;
  int iVar6;
  undefined4 param1_00;
  
  if (DAT_ram_006648ae == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_00569e5c);
    unnamed_function_1099(&DAT_ram_00563428);
    unnamed_function_1099(&DAT_ram_0056342c);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_006648ae = '\x01';
  }
  if ((gameState & ~Begin) == Instruct) {
    uVar1 = unnamed_function_44644(__this,0);
    unnamed_function_44686(uVar1,1,0);
    __this->emptyItemSprite = (Sprite_o *)__this->itemIcom[0x20]._opaque;
    iVar4 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = unnamed_function_95087(iVar4);
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = unnamed_function_95087(iVar4);
    }
    pSVar2 = InventoryManager__get_HotBarItem
                       (*(InventoryManager_o **)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 0x50),
                        (MethodInfo *)__this);
    if (pSVar2[3]._opaque != 0) {
      __this->currentIndex = 0;
      param1 = __this->itemIcom;
      iVar4 = *(int *)(DAT_ram_00565d78 + 0x10);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = unnamed_function_95087(iVar4);
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = unnamed_function_95087(iVar4);
      }
      pSVar2 = InventoryManager__get_HotBarItem
                         (*(InventoryManager_o **)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 0x50)
                          ,(MethodInfo *)__this);
      iVar4 = unnamed_function_6529(pSVar2,__this->currentIndex,DAT_ram_0056342c);
      unnamed_function_16520(param1,*(undefined4 *)(*(int *)(iVar4 + 8) + 0x14),0);
      pTVar5 = __this->itemQuantity;
      iVar4 = *(int *)(DAT_ram_00565d78 + 0x10);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = unnamed_function_95087(iVar4);
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = unnamed_function_95087(iVar4);
      }
      pSVar2 = InventoryManager__get_HotBarItem
                         (*(InventoryManager_o **)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 0x50)
                          ,(MethodInfo *)__this);
      iVar4 = unnamed_function_6529(pSVar2,__this->currentIndex,DAT_ram_0056342c);
      uVar1 = unnamed_function_83644(iVar4 + 0xc,0);
      iVar4 = pTVar5->_opaque;
      (**(code **)((ulonglong)*(uint *)(iVar4 + 0x2d0) * 4))
                (pTVar5,uVar1,*(undefined4 *)(iVar4 + 0x2d4));
      iVar4 = *(int *)(DAT_ram_00565d78 + 0x10);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = unnamed_function_95087(iVar4);
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = unnamed_function_95087(iVar4);
      }
      iVar6 = **(int **)(iVar4 + 0x5c);
      param1_00 = *(undefined4 *)(iVar6 + 0x20);
      uVar1 = unnamed_function_95402(System_Action_GameState__TypeInfo);
      unnamed_function_60038(uVar1,__this,DAT_ram_00569e5c,0);
      iVar4 = unnamed_function_85160(param1_00,uVar1,0);
      uVar1 = System_Action_GameState__TypeInfo;
      if (iVar4 == 0) {
        *(undefined4 *)(iVar6 + 0x20) = 0;
        return;
      }
      iVar3 = unnamed_function_1112(iVar4,System_Action_GameState__TypeInfo);
      if (iVar3 == 0) {
        unnamed_function_1116(iVar4,uVar1);
        do {
          halt_trap();
        } while( true );
      }
      *(int *)(iVar6 + 0x20) = iVar3;
      uVar1 = System_Action_GameState__TypeInfo;
      iVar6 = unnamed_function_1112(iVar4,System_Action_GameState__TypeInfo);
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

// ---- HotBarScroll$$StaticEventHandler_OnItemChanged ----
// C#: void HotBarScroll__StaticEventHandler_OnItemChanged (HotBarScroll_o* __this, OnInventoryItemChangedEventArgs_o* onInventoryItemChangedEventArgs, const MethodInfo* method);

void HotBarScroll__StaticEventHandler_OnItemChanged
               (HotBarScroll_o *__this,
               OnInventoryItemChangedEventArgs_o *onInventoryItemChangedEventArgs,MethodInfo *method
               )

{
  System_Collections_Generic_List_InventoryItem__o *pSVar1;
  undefined4 uVar2;
  int iVar3;
  MethodInfo *pMVar4;
  int iVar5;
  TextMeshProUGUI_o *pTVar6;
  
  if (DAT_ram_006648af == '\0') {
    unnamed_function_1099(&DAT_ram_00563428);
    unnamed_function_1099(&DAT_ram_0056342c);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_006648af = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  pMVar4 = *(MethodInfo **)(*(int *)(iVar3 + 0x60) + 8);
  if ((pMVar4[5].field_0x1d & 1) == 0) {
    pMVar4 = (MethodInfo *)unnamed_function_95087(pMVar4);
  }
  pSVar1 = InventoryManager__get_HotBarItem
                     (*(InventoryManager_o **)
                       (*(int *)(**(int **)&pMVar4[2].field_0x1c + 0x10) + 0x50),pMVar4);
  if (pSVar1[3]._opaque != 0) {
    iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    pMVar4 = *(MethodInfo **)(*(int *)(iVar3 + 0x60) + 8);
    if ((pMVar4[5].field_0x1d & 1) == 0) {
      pMVar4 = (MethodInfo *)unnamed_function_95087(pMVar4);
    }
    pSVar1 = InventoryManager__get_HotBarItem
                       (*(InventoryManager_o **)
                         (*(int *)(**(int **)&pMVar4[2].field_0x1c + 0x10) + 0x50),pMVar4);
    iVar3 = unnamed_function_6529(pSVar1,__this->currentIndex,DAT_ram_0056342c);
    if (iVar3 != 0) {
      iVar5 = onInventoryItemChangedEventArgs->inventoryItem->hotbarSlot;
      iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = unnamed_function_95087(iVar3);
      }
      pMVar4 = *(MethodInfo **)(*(int *)(iVar3 + 0x60) + 8);
      if ((pMVar4[5].field_0x1d & 1) == 0) {
        pMVar4 = (MethodInfo *)unnamed_function_95087(pMVar4);
      }
      pSVar1 = InventoryManager__get_HotBarItem
                         (*(InventoryManager_o **)
                           (*(int *)(**(int **)&pMVar4[2].field_0x1c + 0x10) + 0x50),pMVar4);
      iVar3 = unnamed_function_6529(pSVar1,__this->currentIndex,DAT_ram_0056342c);
      if (iVar5 == *(int *)(iVar3 + 0x14)) {
        unnamed_function_16520
                  (__this->itemIcom,onInventoryItemChangedEventArgs->inventoryItem->itemSO->itemIcon
                   ,0);
        pTVar6 = __this->itemQuantity;
        uVar2 = unnamed_function_83644(&onInventoryItemChangedEventArgs->inventoryItem->quantity,0);
        iVar3 = pTVar6->_opaque;
        (**(code **)((ulonglong)*(uint *)(iVar3 + 0x2d0) * 4))
                  (pTVar6,uVar2,*(undefined4 *)(iVar3 + 0x2d4));
        if (onInventoryItemChangedEventArgs->inventoryItem->quantity == 0) {
          unnamed_function_16520(__this->itemIcom,__this->emptyItemSprite,0);
          iVar3 = __this->itemQuantity->_opaque;
          (**(code **)((ulonglong)*(uint *)(iVar3 + 0x2d0) * 4))
                    (__this->itemQuantity,StringLiteral_1 /* "" */,*(undefined4 *)(iVar3 + 0x2d4));
        }
      }
    }
  }
  return;
}

// ---- HotBarScroll$$StaticEventHandler_OnMoveItemToHotBar ----
// C#: void HotBarScroll__StaticEventHandler_OnMoveItemToHotBar (HotBarScroll_o* __this, OnInventoryItemChangedEventArgs_o* onInventoryItemChangedEventArgs, const MethodInfo* method);

void HotBarScroll__StaticEventHandler_OnMoveItemToHotBar
               (HotBarScroll_o *__this,
               OnInventoryItemChangedEventArgs_o *onInventoryItemChangedEventArgs,MethodInfo *method
               )

{
  System_Collections_Generic_List_InventoryItem__o *pSVar1;
  undefined4 uVar2;
  int iVar3;
  MethodInfo *method_00;
  TextMeshProUGUI_o *pTVar4;
  
  if (DAT_ram_006648b0 == '\0') {
    unnamed_function_1099(&DAT_ram_00563428);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_006648b0 = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  method_00 = *(MethodInfo **)(*(int *)(iVar3 + 0x60) + 8);
  if ((method_00[5].field_0x1d & 1) == 0) {
    method_00 = (MethodInfo *)unnamed_function_95087(method_00);
  }
  pSVar1 = InventoryManager__get_HotBarItem
                     (*(InventoryManager_o **)
                       (*(int *)(**(int **)&method_00[2].field_0x1c + 0x10) + 0x50),method_00);
  if (pSVar1[3]._opaque == 1) {
    unnamed_function_16520
              (__this->itemIcom,onInventoryItemChangedEventArgs->inventoryItem->itemSO->itemIcon,0);
    pTVar4 = __this->itemQuantity;
    uVar2 = unnamed_function_83644(&onInventoryItemChangedEventArgs->inventoryItem->quantity,0);
    iVar3 = pTVar4->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0x2d0) * 4))
              (pTVar4,uVar2,*(undefined4 *)(iVar3 + 0x2d4));
  }
  return;
}

// ---- HotBarScroll$$Start ----
// C#: void HotBarScroll__Start (HotBarScroll_o* __this, const MethodInfo* method);

void Ammo__DisableAmmo(Ammo_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,0,0);
  return;
}

// ---- HotBarScroll$$Update ----
// C#: void HotBarScroll__Update (HotBarScroll_o* __this, const MethodInfo* method);

void HotBarScroll__Update(HotBarScroll_o *__this,MethodInfo *method)

{
  int scrollValue;
  undefined1 auStack_8 [4];
  float4 local_4;
  
  if (DAT_ram_006648b1 == '\0') {
    unnamed_function_1099(&DAT_ram_00562374);
    DAT_ram_006648b1 = '\x01';
  }
  if (DAT_ram_00662ee9 == '\0') {
    unnamed_function_1099(&UnityEngine_InputSystem_Mouse_TypeInfo);
    DAT_ram_00662ee9 = '\x01';
  }
  if ((**(int **)(UnityEngine_InputSystem_Mouse_TypeInfo + 0x5c) != 0) &&
     (unnamed_function_50385
                (auStack_8,
                 *(undefined4 *)(**(int **)(UnityEngine_InputSystem_Mouse_TypeInfo + 0x5c) + 0x124),
                 DAT_ram_00562374), (float)local_4 != 0.0)) {
    if (ABS((float)local_4) < 2.1474836e+09) {
      scrollValue = (int)(float)local_4;
    }
    else {
      scrollValue = -0x80000000;
    }
    HotBarScroll__ChangedItem(__this,scrollValue,(MethodInfo *)&stack0xfffffff0);
  }
  return;
}

// ---- HotBarScroll$$ChangedItem ----
// C#: void HotBarScroll__ChangedItem (HotBarScroll_o* __this, int32_t scrollValue, const MethodInfo* method);

void HotBarScroll__ChangedItem(HotBarScroll_o *__this,int scrollValue,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_InventoryItem__o *pSVar2;
  undefined4 uVar3;
  InventoryItem_o *pIVar4;
  OnInventoryItemChangedEventArgs_o *__this_00;
  int iVar5;
  Image_o *pIVar6;
  TextMeshProUGUI_o *pTVar7;
  int iVar8;
  
  if (DAT_ram_006648b2 == '\0') {
    unnamed_function_1099(&DAT_ram_00563428);
    unnamed_function_1099(&DAT_ram_0056342c);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_006648b2 = '\x01';
  }
  if (scrollValue < 0) {
    iVar5 = __this->currentIndex + -1;
    __this->currentIndex = iVar5;
    if (iVar5 < 0) {
      iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
      if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = unnamed_function_95087(iVar5);
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
      if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = unnamed_function_95087(iVar5);
      }
      pSVar2 = InventoryManager__get_HotBarItem
                         (*(InventoryManager_o **)(*(int *)(**(int **)(iVar5 + 0x5c) + 0x10) + 0x50)
                          ,(MethodInfo *)__this);
      __this->currentIndex = pSVar2[3]._opaque + -1;
    }
    iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    pSVar2 = InventoryManager__get_HotBarItem
                       (*(InventoryManager_o **)(*(int *)(**(int **)(iVar5 + 0x5c) + 0x10) + 0x50),
                        (MethodInfo *)__this);
    if (pSVar2[3]._opaque == 0) {
      return;
    }
    pIVar6 = __this->itemIcom;
    iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    pSVar2 = InventoryManager__get_HotBarItem
                       (*(InventoryManager_o **)(*(int *)(**(int **)(iVar5 + 0x5c) + 0x10) + 0x50),
                        (MethodInfo *)__this);
    iVar5 = unnamed_function_6529(pSVar2,__this->currentIndex,DAT_ram_0056342c);
    unnamed_function_16520(pIVar6,*(undefined4 *)(*(int *)(iVar5 + 8) + 0x14),0);
    pTVar7 = __this->itemQuantity;
    iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
    bVar1 = *(byte *)(iVar5 + 0xbd);
  }
  else {
    iVar8 = __this->currentIndex + 1;
    __this->currentIndex = iVar8;
    iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    pSVar2 = InventoryManager__get_HotBarItem
                       (*(InventoryManager_o **)(*(int *)(**(int **)(iVar5 + 0x5c) + 0x10) + 0x50),
                        (MethodInfo *)__this);
    if (pSVar2[3]._opaque + -1 < iVar8) {
      __this->currentIndex = 0;
    }
    iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    pSVar2 = InventoryManager__get_HotBarItem
                       (*(InventoryManager_o **)(*(int *)(**(int **)(iVar5 + 0x5c) + 0x10) + 0x50),
                        (MethodInfo *)__this);
    if (pSVar2[3]._opaque == 0) {
      return;
    }
    pIVar6 = __this->itemIcom;
    iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    pSVar2 = InventoryManager__get_HotBarItem
                       (*(InventoryManager_o **)(*(int *)(**(int **)(iVar5 + 0x5c) + 0x10) + 0x50),
                        (MethodInfo *)__this);
    iVar5 = unnamed_function_6529(pSVar2,__this->currentIndex,DAT_ram_0056342c);
    unnamed_function_16520(pIVar6,*(undefined4 *)(*(int *)(iVar5 + 8) + 0x14),0);
    pTVar7 = __this->itemQuantity;
    iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
    bVar1 = *(byte *)(iVar5 + 0xbd);
  }
  if ((bVar1 & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  pSVar2 = InventoryManager__get_HotBarItem
                     (*(InventoryManager_o **)(*(int *)(**(int **)(iVar5 + 0x5c) + 0x10) + 0x50),
                      (MethodInfo *)__this);
  iVar5 = unnamed_function_6529(pSVar2,__this->currentIndex,DAT_ram_0056342c);
  uVar3 = unnamed_function_83644(iVar5 + 0xc,0);
  (**(code **)((ulonglong)*(uint *)(pTVar7->_opaque + 0x2d0) * 4))
            (pTVar7,uVar3,*(undefined4 *)(pTVar7->_opaque + 0x2d4));
  iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  pSVar2 = InventoryManager__get_HotBarItem
                     (*(InventoryManager_o **)(*(int *)(**(int **)(iVar5 + 0x5c) + 0x10) + 0x50),
                      (MethodInfo *)__this);
  pIVar4 = (InventoryItem_o *)unnamed_function_6529(pSVar2,__this->currentIndex,DAT_ram_0056342c);
  if (DAT_ram_006649d8 == '\0') {
    unnamed_function_1099(&OnInventoryItemChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d8 = '\x01';
  }
  iVar5 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x40);
  if (iVar5 != 0) {
    __this_00 = (OnInventoryItemChangedEventArgs_o *)
                unnamed_function_95402(OnInventoryItemChangedEventArgs_TypeInfo);
    OnInventoryItemChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
    __this_00->inventoryItem = pIVar4;
    (**(code **)((ulonglong)*(uint *)(iVar5 + 0xc) * 4))
              (*(undefined4 *)(iVar5 + 0x20),__this_00,*(undefined4 *)(iVar5 + 0x14));
  }
  return;
}

// ---- HotBarScroll$$.ctor ----
// C#: void HotBarScroll___ctor (HotBarScroll_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

