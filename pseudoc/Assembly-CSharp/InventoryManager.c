// Assembly-CSharp :: InventoryManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class InventoryManager : MonoBehaviour // TypeDefIndex: 5643
{
	// Fields
	public List<InventoryItem> inventoryItemList; // 0x10
	public List<ItemSO> itemSOList; // 0x14
	private Inventory inventory; // 0x18
	private SaveFileSetup saveFileSetup; // 0x1C
	private SaveFile saveFile; // 0x20
	public Image inventoryInstructionImg; // 0x24
	private string instructionText; // 0x28
	private bool isInstruction; // 0x2C

	// Properties
	public List<InventoryItem> HotBarItem { get; }

	// Methods

	// RVA: 0x38B3 Offset: 0x38B3 VA: 0x38B3
	public List<InventoryItem> get_HotBarItem() { }

	// RVA: 0x38B4 Offset: 0x38B4 VA: 0x38B4
	private void Awake() { }

	// RVA: 0x38B5 Offset: 0x38B5 VA: 0x38B5
	private void OnEnable() { }

	// RVA: 0x38B6 Offset: 0x38B6 VA: 0x38B6
	private void OnDisable() { }

	// RVA: 0x38B7 Offset: 0x38B7 VA: 0x38B7
	private void Instance_OnGameStateChange(GameState gameState) { }

	// RVA: 0x38B8 Offset: 0x38B8 VA: 0x38B8
	private void StaticEventHandler_OnInventoryChanged(OnInventoryChangedEventArgs onInventoryChangedEventArgs) { }

	// RVA: 0x38B9 Offset: 0x38B9 VA: 0x38B9
	private void Start() { }

	// RVA: 0x38BA Offset: 0x38BA VA: 0x38BA
	public void ToggleInventory() { }

	// RVA: 0x38BB Offset: 0x38BB VA: 0x38BB
	private void LoadItemsToInventory() { }

	// RVA: 0x38BC Offset: 0x38BC VA: 0x38BC
	private void SetInventorySlot(ItemUI slot, InventoryItem item) { }

	// RVA: 0x38BD Offset: 0x38BD VA: 0x38BD
	public void CollectIntentoryItem(ItemSO itemSO) { }

	// RVA: 0x38BE Offset: 0x38BE VA: 0x38BE
	public void LoadItemFromJson() { }

	// RVA: 0x38BF Offset: 0x38BF VA: 0x38BF
	private void SaveItemToJson() { }

	// RVA: 0x38C0 Offset: 0x38C0 VA: 0x38C0
	private void OnApplicationQuit() { }

	// RVA: 0x38C1 Offset: 0x38C1 VA: 0x38C1
	private void StaticEventHandler_OnExit() { }

	// RVA: 0x38C2 Offset: 0x38C2 VA: 0x38C2
	public void .ctor() { }
}

===== C# end =====
*/

// ---- InventoryManager$$get_HotBarItem ----
// C#: System_Collections_Generic_List_InventoryItem__o* InventoryManager__get_HotBarItem (InventoryManager_o* __this, const MethodInfo* method);

System_Collections_Generic_List_InventoryItem__o *
InventoryManager__get_HotBarItem(InventoryManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  System_Collections_Generic_List_InventoryItem__o *pSVar2;
  List_o *param1;
  int iVar3;
  undefined4 param2;
  
  if (DAT_ram_006648c1 == '\0') {
    unnamed_function_1099(&DAT_ram_00569184);
    unnamed_function_1099(&DAT_ram_0056931c);
    unnamed_function_1099(&DAT_ram_00569384);
    unnamed_function_1099(&System_Func_InventoryItem__int__TypeInfo);
    unnamed_function_1099(&System_Func_InventoryItem__bool__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056f490);
    unnamed_function_1099(&DAT_ram_0056f494);
    unnamed_function_1099(&InventoryManager___c_TypeInfo);
    DAT_ram_006648c1 = '\x01';
  }
  param1 = __this->inventoryItemList;
  if (*(int *)(InventoryManager___c_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(InventoryManager___c_TypeInfo);
  }
  iVar3 = *(int *)(*(int *)(InventoryManager___c_TypeInfo + 0x5c) + 4);
  if (iVar3 == 0) {
    if (*(int *)(InventoryManager___c_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(InventoryManager___c_TypeInfo);
    }
    uVar1 = **(undefined4 **)(InventoryManager___c_TypeInfo + 0x5c);
    iVar3 = unnamed_function_95402(System_Func_InventoryItem__bool__TypeInfo);
    unnamed_function_74372(iVar3,uVar1,DAT_ram_0056f490,0);
    *(int *)(*(int *)(InventoryManager___c_TypeInfo + 0x5c) + 4) = iVar3;
  }
  uVar1 = unnamed_function_71505(param1,iVar3,DAT_ram_00569384);
  if (*(int *)(InventoryManager___c_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(InventoryManager___c_TypeInfo);
  }
  iVar3 = *(int *)(*(int *)(InventoryManager___c_TypeInfo + 0x5c) + 8);
  if (iVar3 == 0) {
    if (*(int *)(InventoryManager___c_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(InventoryManager___c_TypeInfo);
    }
    param2 = **(undefined4 **)(InventoryManager___c_TypeInfo + 0x5c);
    iVar3 = unnamed_function_95402(System_Func_InventoryItem__int__TypeInfo);
    unnamed_function_74373(iVar3,param2,DAT_ram_0056f494,0);
    *(int *)(*(int *)(InventoryManager___c_TypeInfo + 0x5c) + 8) = iVar3;
  }
  uVar1 = unnamed_function_71720(uVar1,iVar3,DAT_ram_00569184);
  pSVar2 = (System_Collections_Generic_List_InventoryItem__o *)
           unnamed_function_71779(uVar1,DAT_ram_0056931c);
  return pSVar2;
}

// ---- InventoryManager$$Awake ----
// C#: void InventoryManager__Awake (InventoryManager_o* __this, const MethodInfo* method);

void InventoryManager__Awake(InventoryManager_o *__this,MethodInfo *method)

{
  SaveFileSetup_o *param1;
  SaveFile_o *pSVar1;
  
  if (DAT_ram_006648c2 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f1c);
    DAT_ram_006648c2 = '\x01';
  }
  param1 = (SaveFileSetup_o *)unnamed_function_65370(__this,DAT_ram_00567f1c);
  __this->saveFileSetup = param1;
  pSVar1 = (SaveFile_o *)unnamed_function_60744(param1,0);
  __this->saveFile = pSVar1;
  return;
}

// ---- InventoryManager$$OnEnable ----
// C#: void InventoryManager__OnEnable (InventoryManager_o* __this, const MethodInfo* method);

void InventoryManager__OnEnable(InventoryManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  System_Action_OnInventoryChangedEventArgs__o *value;
  int *param1;
  int iVar4;
  int iVar5;
  undefined4 param1_00;
  
  if (DAT_ram_006648c3 == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryChangedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a778);
    unnamed_function_1099(&DAT_ram_0056a77c);
    unnamed_function_1099(&DAT_ram_0056a780);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_006648c3 = '\x01';
  }
  iVar4 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  iVar5 = **(int **)(iVar4 + 0x5c);
  param1_00 = *(undefined4 *)(iVar5 + 0x20);
  uVar2 = unnamed_function_95402(System_Action_GameState__TypeInfo);
  unnamed_function_60038(uVar2,__this,DAT_ram_0056a778,0);
  iVar4 = unnamed_function_85158(param1_00,uVar2,0);
  uVar2 = System_Action_GameState__TypeInfo;
  if (iVar4 == 0) {
    *(undefined4 *)(iVar5 + 0x20) = 0;
  }
  else {
    iVar3 = unnamed_function_1112(iVar4,System_Action_GameState__TypeInfo);
    if (iVar3 == 0) {
      unnamed_function_1116(iVar4,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar5 + 0x20) = iVar3;
    uVar2 = System_Action_GameState__TypeInfo;
    iVar5 = unnamed_function_1112(iVar4,System_Action_GameState__TypeInfo);
    if (iVar5 == 0) {
      unnamed_function_1116(iVar4,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  value = (System_Action_OnInventoryChangedEventArgs__o *)
          unnamed_function_95402(System_Action_OnInventoryChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_0056a780,0);
  StaticEventHandler__add_OnInventoryChanged(value,(MethodInfo *)__this);
  uVar2 = unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(uVar2,__this,DAT_ram_0056a77c,0);
  if (DAT_ram_006649c7 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c7 = '\x01';
  }
  iVar4 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x2c);
  while ((param1 = (int *)unnamed_function_85158(iVar4,uVar2,0), param1 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1))) {
    iVar5 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x2c,param1,iVar4);
    bVar1 = iVar4 == iVar5;
    iVar4 = iVar5;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- InventoryManager$$OnDisable ----
// C#: void InventoryManager__OnDisable (InventoryManager_o* __this, const MethodInfo* method);

void InventoryManager__OnDisable(InventoryManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  System_Action_OnInventoryChangedEventArgs__o *value;
  int *param1;
  int iVar4;
  int iVar5;
  undefined4 param1_00;
  
  if (DAT_ram_006648c4 == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryChangedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a778);
    unnamed_function_1099(&DAT_ram_0056a77c);
    unnamed_function_1099(&DAT_ram_0056a780);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_006648c4 = '\x01';
  }
  iVar4 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  iVar5 = **(int **)(iVar4 + 0x5c);
  param1_00 = *(undefined4 *)(iVar5 + 0x20);
  uVar2 = unnamed_function_95402(System_Action_GameState__TypeInfo);
  unnamed_function_60038(uVar2,__this,DAT_ram_0056a778,0);
  iVar4 = unnamed_function_85160(param1_00,uVar2,0);
  uVar2 = System_Action_GameState__TypeInfo;
  if (iVar4 == 0) {
    *(undefined4 *)(iVar5 + 0x20) = 0;
  }
  else {
    iVar3 = unnamed_function_1112(iVar4,System_Action_GameState__TypeInfo);
    if (iVar3 == 0) {
      unnamed_function_1116(iVar4,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar5 + 0x20) = iVar3;
    uVar2 = System_Action_GameState__TypeInfo;
    iVar5 = unnamed_function_1112(iVar4,System_Action_GameState__TypeInfo);
    if (iVar5 == 0) {
      unnamed_function_1116(iVar4,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  value = (System_Action_OnInventoryChangedEventArgs__o *)
          unnamed_function_95402(System_Action_OnInventoryChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_0056a780,0);
  StaticEventHandler__remove_OnInventoryChanged(value,(MethodInfo *)__this);
  uVar2 = unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(uVar2,__this,DAT_ram_0056a77c,0);
  if (DAT_ram_006649c8 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c8 = '\x01';
  }
  iVar4 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x2c);
  while ((param1 = (int *)unnamed_function_85160(iVar4,uVar2,0), param1 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1))) {
    iVar5 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x2c,param1,iVar4);
    bVar1 = iVar4 == iVar5;
    iVar4 = iVar5;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- InventoryManager$$Instance_OnGameStateChange ----
// C#: void InventoryManager__Instance_OnGameStateChange (InventoryManager_o* __this, int32_t gameState, const MethodInfo* method);

void InventoryManager__Instance_OnGameStateChange
               (InventoryManager_o *__this,GameState gameState,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (DAT_ram_006648c5 == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a778);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_006648c5 = '\x01';
  }
  if (gameState == Instruct) {
    __this->isInstruction = true;
    iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = **(int **)(iVar3 + 0x5c);
    uVar4 = *(undefined4 *)(iVar3 + 0x20);
    uVar1 = unnamed_function_95402(System_Action_GameState__TypeInfo);
    unnamed_function_60038(uVar1,__this,DAT_ram_0056a778,0);
    piVar5 = (int *)(iVar3 + 0x20);
    iVar3 = unnamed_function_85160(uVar4,uVar1,0);
    uVar1 = System_Action_GameState__TypeInfo;
    if (iVar3 != 0) {
      iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
      if (iVar2 == 0) {
        unnamed_function_1116(iVar3,uVar1);
        do {
          halt_trap();
        } while( true );
      }
      *piVar5 = iVar2;
      uVar1 = System_Action_GameState__TypeInfo;
      iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
      if (iVar2 != 0) {
        return;
      }
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
  }
  else {
    if (gameState != Play) {
      return;
    }
    InventoryManager__LoadItemFromJson(__this,(MethodInfo *)__this);
    iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = **(int **)(iVar3 + 0x5c);
    uVar4 = *(undefined4 *)(iVar3 + 0x20);
    uVar1 = unnamed_function_95402(System_Action_GameState__TypeInfo);
    unnamed_function_60038(uVar1,__this,DAT_ram_0056a778,0);
    piVar5 = (int *)(iVar3 + 0x20);
    iVar3 = unnamed_function_85160(uVar4,uVar1,0);
    uVar1 = System_Action_GameState__TypeInfo;
    if (iVar3 != 0) {
      iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
      if (iVar2 == 0) {
        unnamed_function_1116(iVar3,uVar1);
        do {
          halt_trap();
        } while( true );
      }
      *piVar5 = iVar2;
      uVar1 = System_Action_GameState__TypeInfo;
      iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
      if (iVar2 != 0) {
        return;
      }
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
  }
  *piVar5 = 0;
  return;
}

// ---- InventoryManager$$StaticEventHandler_OnInventoryChanged ----
// C#: void InventoryManager__StaticEventHandler_OnInventoryChanged (InventoryManager_o* __this, OnInventoryChangedEventArgs_o* onInventoryChangedEventArgs, const MethodInfo* method);

void InventoryManager__StaticEventHandler_OnInventoryChanged
               (InventoryManager_o *__this,
               OnInventoryChangedEventArgs_o *onInventoryChangedEventArgs,MethodInfo *method)

{
  undefined4 param1;
  Inventory_o *param1_00;
  
  param1_00 = onInventoryChangedEventArgs->inventory;
  __this->inventory = param1_00;
  param1 = unnamed_function_44644(param1_00,0);
  unnamed_function_44686(param1,0,0);
  Inventory__InitializeInventorySlotList(__this->inventory,0x46,(MethodInfo *)__this);
  Inventory__InitializeHotBarSlotList(__this->inventory,10,(MethodInfo *)__this);
  return;
}

// ---- InventoryManager$$Start ----
// C#: void InventoryManager__Start (InventoryManager_o* __this, const MethodInfo* method);

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
               (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *__this,MethodInfo *method)

{
  return;
}

// ---- InventoryManager$$ToggleInventory ----
// C#: void InventoryManager__ToggleInventory (InventoryManager_o* __this, const MethodInfo* method);

void InventoryManager__ToggleInventory(InventoryManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  System_Collections_Generic_List_InventoryItem__o *pSVar3;
  string_o *psVar4;
  
  if (DAT_ram_006648c6 == '\0') {
    unnamed_function_1099(&DAT_ram_00563428);
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_006648c6 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->inventory,0);
  iVar2 = unnamed_function_44687(uVar1,0);
  if (iVar2 == 0) {
    Inventory__ResetInventory
              (__this->inventory,
               (System_Collections_Generic_List_InventoryItem__o *)__this->inventoryItemList,
               (MethodInfo *)__this);
    InventoryManager__LoadItemsToInventory(__this,(MethodInfo *)__this);
    if ((__this->isInstruction != false) && (0 < __this->inventoryItemList[3]._opaque)) {
      psVar4 = __this->instructionText;
      if (DAT_ram_006649de == '\0') {
        unnamed_function_1099(&StaticEventHandler_TypeInfo);
        DAT_ram_006649de = '\x01';
      }
      iVar2 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x48);
      if (iVar2 != 0) {
        (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                  (*(undefined4 *)(iVar2 + 0x20),psVar4,0xffffffff,1,*(undefined4 *)(iVar2 + 0x14));
      }
    }
    uVar1 = unnamed_function_44644(__this->inventory,0);
    unnamed_function_44686(uVar1,1,0);
  }
  else {
    uVar1 = unnamed_function_44644(__this->inventory,0);
    unnamed_function_44686(uVar1,0,0);
    pSVar3 = InventoryManager__get_HotBarItem(__this,(MethodInfo *)__this);
    if (0 < pSVar3[3]._opaque) {
      __this->isInstruction = false;
    }
    uVar1 = StringLiteral_1 /* "" */;
    if (DAT_ram_006649de == '\0') {
      unnamed_function_1099(&StaticEventHandler_TypeInfo);
      DAT_ram_006649de = '\x01';
    }
    iVar2 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x48);
    if (iVar2 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                (*(undefined4 *)(iVar2 + 0x20),uVar1,0xfffffff7,0,*(undefined4 *)(iVar2 + 0x14));
      return;
    }
  }
  return;
}

// ---- InventoryManager$$LoadItemsToInventory ----
// C#: void InventoryManager__LoadItemsToInventory (InventoryManager_o* __this, const MethodInfo* method);

void InventoryManager__LoadItemsToInventory(InventoryManager_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  List_o *pLVar6;
  int iVar7;
  int local_20;
  undefined8 *puStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar7 = 0;
  if (DAT_ram_006648c7 == '\0') {
    unnamed_function_1099(&DAT_ram_00561290);
    unnamed_function_1099(&DAT_ram_00561294);
    unnamed_function_1099(&DAT_ram_00561298);
    unnamed_function_1099(&DAT_ram_00563448);
    unnamed_function_1099(&DAT_ram_00563428);
    unnamed_function_1099(&DAT_ram_0056344c);
    unnamed_function_1099(&DAT_ram_0056342c);
    DAT_ram_006648c7 = '\x01';
  }
  local_8 = 0;
  local_10 = 0;
  pLVar6 = __this->inventoryItemList;
  if (0 < pLVar6[3]._opaque) {
    do {
      iVar1 = unnamed_function_6529(pLVar6,iVar7,DAT_ram_0056342c);
      pLVar6 = __this->inventory->inventorySlotList;
      if (*(int *)(iVar1 + 0x10) < 0) {
        unnamed_function_6549(&local_20,pLVar6,DAT_ram_00563448);
        local_8 = local_18;
        local_10 = CONCAT44(puStack_1c,local_20);
        local_20 = 0;
        puStack_1c = &local_10;
        do {
          DAT_ram_005ddf34 = 0;
          iVar2 = import::env::invoke_iii
                            (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10,
                             DAT_ram_00561294);
          iVar4 = DAT_ram_005ddf34;
          DAT_ram_005ddf34 = 0;
          if (iVar4 == 1) goto code_r0x81a33e9c;
          if (iVar2 == 0) goto code_r0x81a33ef8;
          iVar4 = local_8._4_4_;
        } while (*(char *)(local_8._4_4_ + 0x30) != '\0');
        DAT_ram_005ddf34 = 0;
        uVar3 = import::env::invoke_iii
                          (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x1b,
                           *(undefined4 *)(local_8._4_4_ + 0x18),0);
        if (DAT_ram_005ddf34 != 1) {
          DAT_ram_005ddf34 = 0;
          import::env::invoke_viii(s___Scripting__UnityEngine__XR__Me_ram_00001f0e + 0x24,uVar3,1,0)
          ;
          if (DAT_ram_005ddf34 != 1) {
            DAT_ram_005ddf34 = 0;
            uVar3 = import::env::invoke_iii
                              (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x1b,
                               *(undefined4 *)(iVar4 + 0x1c),0);
            if (DAT_ram_005ddf34 != 1) {
              DAT_ram_005ddf34 = 0;
              import::env::invoke_viii
                        (s___Scripting__UnityEngine__XR__Me_ram_00001f0e + 0x24,uVar3,1,0);
              if (DAT_ram_005ddf34 != 1) {
                DAT_ram_005ddf34 = 0;
                import::env::invoke_viii
                          (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1a,
                           *(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(*(int *)(iVar1 + 8) + 0x14)
                           ,0);
                if (DAT_ram_005ddf34 != 1) {
                  piVar5 = *(int **)(iVar4 + 0x1c);
                  DAT_ram_005ddf34 = 0;
                  uVar3 = import::env::invoke_iii
                                    (s___Scripting__Unity__Profiling__P_ram_000008ea + 0x31,
                                     iVar1 + 0xc,0);
                  if (DAT_ram_005ddf34 != 1) {
                    iVar2 = *piVar5;
                    DAT_ram_005ddf34 = 0;
                    import::env::invoke_viii
                              (*(undefined4 *)(iVar2 + 0x2d0),piVar5,uVar3,
                               *(undefined4 *)(iVar2 + 0x2d4));
                    iVar2 = DAT_ram_005ddf34;
                    DAT_ram_005ddf34 = 0;
                    if (iVar2 != 1) {
                      *(undefined1 *)(iVar4 + 0x30) = 1;
                      *(int *)(iVar4 + 0x20) = iVar1;
                      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
                      goto code_r0x81a33ef8;
                    }
                  }
                }
              }
            }
          }
        }
code_r0x81a33e9c:
        DAT_ram_005ddf34 = 0;
        uVar3 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        iVar4 = import::env::getTempRet0();
        iVar2 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
        if (iVar4 != iVar2) {
code_r0x81a33fb3:
          DAT_ram_005ddf34 = 0;
          import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1b,&local_20);
          iVar7 = DAT_ram_005ddf34;
          DAT_ram_005ddf34 = 0;
          if (iVar7 == 1) {
            import::env::__cxa_find_matching_catch_3(0);
            import::env::getTempRet0();
            unnamed_function_642();
            do {
              halt_trap();
            } while( true );
          }
          import::env::__resumeException(uVar3);
          do {
            halt_trap();
          } while( true );
        }
        piVar5 = (int *)import::env::__cxa_begin_catch(uVar3);
        iVar2 = *piVar5;
        DAT_ram_005ddf34 = 0;
        local_20 = iVar2;
        import::env::invoke_v(0x3a);
        iVar4 = DAT_ram_005ddf34;
        DAT_ram_005ddf34 = 0;
        if (iVar4 == 1) {
          uVar3 = import::env::__cxa_find_matching_catch_2();
          import::env::getTempRet0();
          goto code_r0x81a33fb3;
        }
        if (iVar2 != 0) {
          unnamed_function_1088(iVar2);
          do {
            halt_trap();
          } while( true );
        }
      }
      else {
        iVar4 = unnamed_function_6529(pLVar6,*(int *)(iVar1 + 0x10),DAT_ram_0056344c);
        uVar3 = unnamed_function_44644(*(undefined4 *)(iVar4 + 0x18),0);
        unnamed_function_44686(uVar3,1,0);
        uVar3 = unnamed_function_44644(*(undefined4 *)(iVar4 + 0x1c),0);
        unnamed_function_44686(uVar3,1,0);
        unnamed_function_16520
                  (*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(*(int *)(iVar1 + 8) + 0x14),0);
        piVar5 = *(int **)(iVar4 + 0x1c);
        uVar3 = unnamed_function_83644(iVar1 + 0xc,0);
        iVar2 = *piVar5;
        (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
                  (piVar5,uVar3,*(undefined4 *)(iVar2 + 0x2d4));
        *(undefined1 *)(iVar4 + 0x30) = 1;
        *(int *)(iVar4 + 0x20) = iVar1;
      }
code_r0x81a33ef8:
      if (-1 < *(int *)(iVar1 + 0x14)) {
        iVar4 = unnamed_function_6529
                          (__this->inventory->hotBarSlotList,*(int *)(iVar1 + 0x14),DAT_ram_0056344c
                          );
        uVar3 = unnamed_function_44644(*(undefined4 *)(iVar4 + 0x18),0);
        unnamed_function_44686(uVar3,1,0);
        uVar3 = unnamed_function_44644(*(undefined4 *)(iVar4 + 0x1c),0);
        unnamed_function_44686(uVar3,1,0);
        unnamed_function_16520
                  (*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(*(int *)(iVar1 + 8) + 0x14),0);
        piVar5 = *(int **)(iVar4 + 0x1c);
        uVar3 = unnamed_function_83644(iVar1 + 0xc,0);
        iVar2 = *piVar5;
        (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
                  (piVar5,uVar3,*(undefined4 *)(iVar2 + 0x2d4));
        *(undefined1 *)(iVar4 + 0x30) = 1;
        *(int *)(iVar4 + 0x20) = iVar1;
      }
      iVar7 = iVar7 + 1;
      pLVar6 = __this->inventoryItemList;
    } while (iVar7 < pLVar6[3]._opaque);
  }
  return;
}

// ---- InventoryManager$$SetInventorySlot ----
// C#: void InventoryManager__SetInventorySlot (InventoryManager_o* __this, ItemUI_o* slot, InventoryItem_o* item, const MethodInfo* method);

void InventoryManager__SetInventorySlot
               (InventoryManager_o *__this,ItemUI_o *slot,InventoryItem_o *item,MethodInfo *method)

{
  undefined4 uVar1;
  TextMeshProUGUI_o *pTVar2;
  int iVar3;
  
  uVar1 = unnamed_function_44644(slot->ItemImg,0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(slot->quantityText,0);
  unnamed_function_44686(uVar1,1,0);
  unnamed_function_16520(slot->ItemImg,item->itemSO->itemIcon,0);
  pTVar2 = slot->quantityText;
  uVar1 = unnamed_function_83644(&item->quantity,0);
  iVar3 = pTVar2->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x2d0) * 4))
            (pTVar2,uVar1,*(undefined4 *)(iVar3 + 0x2d4));
  slot->isHasItem = true;
  slot->inventoryItem = item;
  return;
}

// ---- InventoryManager$$CollectIntentoryItem ----
// C#: void InventoryManager__CollectIntentoryItem (InventoryManager_o* __this, ItemSO_o* itemSO, const MethodInfo* method);

void InventoryManager__CollectIntentoryItem
               (InventoryManager_o *__this,ItemSO_o *itemSO,MethodInfo *method)

{
  int iVar1;
  InventoryItem_o *pIVar2;
  OnInventoryItemChangedEventArgs_o *__this_00;
  int iVar3;
  List_o *pLVar4;
  ItemSO_o *param1;
  uint uVar5;
  
  if (DAT_ram_006648c8 == '\0') {
    unnamed_function_1099(&InventoryItem_TypeInfo);
    unnamed_function_1099(&DAT_ram_00563418);
    unnamed_function_1099(&DAT_ram_00563428);
    unnamed_function_1099(&DAT_ram_0056342c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648c8 = '\x01';
  }
  pLVar4 = __this->inventoryItemList;
  if (0 < pLVar4[3]._opaque) {
    iVar1 = 0;
    do {
      pIVar2 = (InventoryItem_o *)unnamed_function_6529(pLVar4,iVar1,DAT_ram_0056342c);
      param1 = pIVar2->itemSO;
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Object_TypeInfo);
      }
      iVar3 = unnamed_function_44710(param1,itemSO,0);
      if (iVar3 != 0) {
        if (9 < pIVar2->quantity) {
          return;
        }
        pIVar2->quantity = pIVar2->quantity + 1;
        if (DAT_ram_006649c0 == '\0') {
          unnamed_function_1099(&OnInventoryItemChangedEventArgs_TypeInfo);
          unnamed_function_1099(&StaticEventHandler_TypeInfo);
          DAT_ram_006649c0 = '\x01';
        }
        iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x20);
        if (iVar1 == 0) {
          return;
        }
        __this_00 = (OnInventoryItemChangedEventArgs_o *)
                    unnamed_function_95402(OnInventoryItemChangedEventArgs_TypeInfo);
        OnInventoryItemChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
        __this_00->inventoryItem = pIVar2;
        (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
                  (*(undefined4 *)(iVar1 + 0x20),__this_00,*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar1 = iVar1 + 1;
      pLVar4 = __this->inventoryItemList;
    } while (iVar1 < pLVar4[3]._opaque);
  }
  iVar3 = unnamed_function_95402(InventoryItem_TypeInfo);
  *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
  *(undefined8 *)(iVar3 + 0xc) = 0xffffffff00000001;
  *(ItemSO_o **)(iVar3 + 8) = itemSO;
  iVar1 = DAT_ram_00563418;
  pLVar4 = __this->inventoryItemList;
  pLVar4[4]._opaque = pLVar4[4]._opaque + 1;
  uVar5 = pLVar4[3]._opaque;
  if (*(uint *)(pLVar4[2]._opaque + 0xc) <= uVar5) {
    unnamed_function_6534
              (pLVar4,iVar3,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
    return;
  }
  pLVar4[3]._opaque = uVar5 + 1;
  *(int *)(pLVar4[2]._opaque + uVar5 * 4 + 0x10) = iVar3;
  return;
}

// ---- InventoryManager$$LoadItemFromJson ----
// C#: void InventoryManager__LoadItemFromJson (InventoryManager_o* __this, const MethodInfo* method);

/* WARNING: Removing unreachable block (ram,0x81a337cd) */

void InventoryManager__LoadItemFromJson(InventoryManager_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined4 param1;
  int iVar3;
  int *piVar4;
  List_o *param2;
  uint uVar5;
  int local_18;
  undefined8 *local_14;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_006648c9 == '\0') {
    unnamed_function_1099(&DAT_ram_00561284);
    unnamed_function_1099(&DAT_ram_00561288);
    unnamed_function_1099(&DAT_ram_0056128c);
    unnamed_function_1099(&InventoryItem_TypeInfo);
    unnamed_function_1099(&DAT_ram_00563418);
    unnamed_function_1099(&DAT_ram_00563434);
    unnamed_function_1099(&DAT_ram_0056c1c0);
    DAT_ram_006648c9 = '\x01';
  }
  local_8 = 0;
  local_10 = 0;
  unnamed_function_6549(&local_10,__this->itemSOList,DAT_ram_00563434);
  local_18 = 0;
  local_14 = &local_10;
  while( true ) {
    do {
      DAT_ram_005ddf34 = 0;
      iVar1 = import::env::invoke_iii
                        (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10,
                         DAT_ram_00561288);
      iVar3 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar3 == 1) {
        param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a338c3;
      }
      iVar3 = local_18;
      if (iVar1 == 0) goto code_r0x81a3390b;
      iVar1 = local_8._4_4_;
      DAT_ram_005ddf34 = 0;
      iVar2 = import::env::invoke_iiii
                        (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x17,__this->saveFile,
                         *(undefined4 *)(local_8._4_4_ + 0xc),0);
      iVar3 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar3 == 1) {
        param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a338c3;
      }
    } while (iVar2 == 0);
    DAT_ram_005ddf34 = 0;
    iVar2 = import::env::invoke_iiiii
                      (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x18,__this->saveFile,
                       *(undefined4 *)(iVar1 + 0xc),0,DAT_ram_0056c1c0);
    iVar3 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar3 == 1) break;
    DAT_ram_005ddf34 = 0;
    iVar3 = import::env::invoke_ii(0x10c,InventoryItem_TypeInfo);
    if (DAT_ram_005ddf34 == 1) {
      DAT_ram_005ddf34 = 0;
      param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a338c3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined1 *)(iVar3 + 0x18) = *(undefined1 *)(iVar2 + 0x14);
    iVar1 = DAT_ram_00563418;
    param2 = __this->inventoryItemList;
    param2[4]._opaque = param2[4]._opaque + 1;
    uVar5 = param2[3]._opaque;
    if (uVar5 < *(uint *)(param2[2]._opaque + 0xc)) {
      param2[3]._opaque = uVar5 + 1;
      *(int *)(param2[2]._opaque + uVar5 * 4 + 0x10) = iVar3;
    }
    else {
      DAT_ram_005ddf34 = 0;
      import::env::invoke_viii
                (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3b,param2,iVar3,
                 *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
      iVar3 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar3 == 1) {
        param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a338c3:
        iVar3 = import::env::getTempRet0();
        iVar1 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
        if (iVar3 == iVar1) {
          piVar4 = (int *)import::env::__cxa_begin_catch(param1);
          iVar3 = *piVar4;
          DAT_ram_005ddf34 = 0;
          local_18 = iVar3;
          import::env::invoke_v(0x3a);
          iVar1 = DAT_ram_005ddf34;
          DAT_ram_005ddf34 = 0;
          if (iVar1 != 1) {
code_r0x81a3390b:
            DAT_ram_005ddf34 = 0;
            if (iVar3 != 0) {
              unnamed_function_1088(iVar3);
              do {
                halt_trap();
              } while( true );
            }
            return;
          }
          param1 = import::env::__cxa_find_matching_catch_2();
          import::env::getTempRet0();
        }
        DAT_ram_005ddf34 = 0;
        import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x19,&local_18);
        iVar3 = DAT_ram_005ddf34;
        DAT_ram_005ddf34 = 0;
        if (iVar3 != 1) {
          import::env::__resumeException(param1);
          do {
            halt_trap();
          } while( true );
        }
        import::env::__cxa_find_matching_catch_3(0);
        import::env::getTempRet0();
        unnamed_function_642();
        do {
          halt_trap();
        } while( true );
      }
    }
  }
  param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
  goto code_r0x81a338c3;
}

// ---- InventoryManager$$SaveItemToJson ----
// C#: void InventoryManager__SaveItemToJson (InventoryManager_o* __this, const MethodInfo* method);

void InventoryManager__SaveItemToJson(InventoryManager_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  List_o *pLVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = 0;
  if (DAT_ram_006648ca == '\0') {
    unnamed_function_1099(&ItemJson_TypeInfo);
    unnamed_function_1099(&DAT_ram_00563428);
    unnamed_function_1099(&DAT_ram_0056342c);
    unnamed_function_1099(&DAT_ram_0056c1a4);
    DAT_ram_006648ca = '\x01';
  }
  unnamed_function_60728(__this->saveFile,0);
  pLVar4 = __this->inventoryItemList;
  if (0 < pLVar4[3]._opaque) {
    do {
      iVar2 = unnamed_function_6529(pLVar4,iVar6,DAT_ram_0056342c);
      uVar7 = *(undefined8 *)(iVar2 + 0xc);
      uVar5 = *(undefined4 *)(iVar2 + 0x14);
      uVar1 = *(undefined1 *)(iVar2 + 0x18);
      iVar3 = unnamed_function_95402(ItemJson_TypeInfo);
      *(undefined1 *)(iVar3 + 0x14) = uVar1;
      *(undefined4 *)(iVar3 + 0x10) = uVar5;
      *(undefined8 *)(iVar3 + 8) = uVar7;
      unnamed_function_60813
                (__this->saveFile,*(undefined4 *)(*(int *)(iVar2 + 8) + 0xc),iVar3,DAT_ram_0056c1a4)
      ;
      iVar6 = iVar6 + 1;
      pLVar4 = __this->inventoryItemList;
    } while (iVar6 < pLVar4[3]._opaque);
  }
  iVar6 = 0;
  unnamed_function_60714(__this->saveFile,0,0);
  pLVar4 = __this->inventoryItemList;
  if (0 < pLVar4[3]._opaque) {
    do {
      iVar2 = unnamed_function_6529(pLVar4,iVar6,DAT_ram_0056342c);
      uVar7 = *(undefined8 *)(iVar2 + 0xc);
      uVar5 = *(undefined4 *)(iVar2 + 0x14);
      uVar1 = *(undefined1 *)(iVar2 + 0x18);
      iVar3 = unnamed_function_95402(ItemJson_TypeInfo);
      *(undefined1 *)(iVar3 + 0x14) = uVar1;
      *(undefined4 *)(iVar3 + 0x10) = uVar5;
      *(undefined8 *)(iVar3 + 8) = uVar7;
      uVar5 = unnamed_function_42591(iVar3,0);
      unnamed_function_44558(*(undefined4 *)(*(int *)(iVar2 + 8) + 0xc),uVar5,0);
      iVar6 = iVar6 + 1;
      pLVar4 = __this->inventoryItemList;
    } while (iVar6 < pLVar4[3]._opaque);
  }
  return;
}

// ---- InventoryManager$$OnApplicationQuit ----
// C#: void InventoryManager__OnApplicationQuit (InventoryManager_o* __this, const MethodInfo* method);

void InventoryManager__OnApplicationQuit(InventoryManager_o *__this,MethodInfo *method)

{
  InventoryManager__SaveItemToJson(__this,(MethodInfo *)__this);
  return;
}

// ---- InventoryManager$$StaticEventHandler_OnExit ----
// C#: void InventoryManager__StaticEventHandler_OnExit (InventoryManager_o* __this, const MethodInfo* method);

void InventoryManager__OnApplicationQuit(InventoryManager_o *__this,MethodInfo *method)

{
  InventoryManager__SaveItemToJson(__this,(MethodInfo *)__this);
  return;
}

// ---- InventoryManager$$.ctor ----
// C#: void InventoryManager___ctor (InventoryManager_o* __this, const MethodInfo* method);

void InventoryManager___ctor(InventoryManager_o *__this,MethodInfo *method)

{
  List_o *pLVar1;
  
  if (DAT_ram_006648cb == '\0') {
    unnamed_function_1099(&DAT_ram_00563430);
    unnamed_function_1099(&DAT_ram_00563414);
    unnamed_function_1099(&System_Collections_Generic_List_ItemSO__TypeInfo);
    unnamed_function_1099(&System_Collections_Generic_List_InventoryItem__TypeInfo);
    unnamed_function_1099(&StringLiteral_3380 /* "Drag the item to the hotbar to use it." */);
    DAT_ram_006648cb = '\x01';
  }
  pLVar1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_InventoryItem__TypeInfo)
  ;
  unnamed_function_5132(pLVar1,DAT_ram_00563414);
  __this->inventoryItemList = pLVar1;
  pLVar1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_ItemSO__TypeInfo);
  unnamed_function_5132(pLVar1,DAT_ram_00563430);
  __this->itemSOList = pLVar1;
  __this->instructionText = StringLiteral_3380 /* "Drag the item to the hotbar to use it." */;
  unnamed_function_44622(__this,0);
  return;
}

