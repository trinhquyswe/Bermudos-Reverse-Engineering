// Assembly-CSharp :: InventoryDescription
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class InventoryDescription : MonoBehaviour // TypeDefIndex: 5641
{
	// Fields
	private ItemUI itemUI; // 0x10
	[SerializeField]
	private Image image; // 0x14
	[SerializeField]
	private TextMeshProUGUI titleText; // 0x18
	[SerializeField]
	private TextMeshProUGUI descriptionText; // 0x1C

	// Methods

	// RVA: 0x38AF Offset: 0x38AF VA: 0x38AF
	private void OnEnable() { }

	// RVA: 0x38B0 Offset: 0x38B0 VA: 0x38B0
	private void OnDisable() { }

	// RVA: 0x38B1 Offset: 0x38B1 VA: 0x38B1
	private void StaticEventHandler_OnItemUIClickChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs) { }

	// RVA: 0x38B2 Offset: 0x38B2 VA: 0x38B2
	public void .ctor() { }
}

===== C# end =====
*/

// ---- InventoryDescription$$OnEnable ----
// C#: void InventoryDescription__OnEnable (InventoryDescription_o* __this, const MethodInfo* method);

void InventoryDescription__OnEnable(InventoryDescription_o *__this,MethodInfo *method)

{
  System_Action_OnItemUIChangedEventArgs__o *value;
  
  if (DAT_ram_006648be == '\0') {
    unnamed_function_1099(&System_Action_OnItemUIChangedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a774);
    DAT_ram_006648be = '\x01';
  }
  value = (System_Action_OnItemUIChangedEventArgs__o *)
          unnamed_function_95402(System_Action_OnItemUIChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_0056a774,0);
  StaticEventHandler__add_OnItemUIClickChanged(value,(MethodInfo *)__this);
  return;
}

// ---- InventoryDescription$$OnDisable ----
// C#: void InventoryDescription__OnDisable (InventoryDescription_o* __this, const MethodInfo* method);

void InventoryDescription__OnDisable(InventoryDescription_o *__this,MethodInfo *method)

{
  System_Action_OnItemUIChangedEventArgs__o *value;
  
  if (DAT_ram_006648bf == '\0') {
    unnamed_function_1099(&System_Action_OnItemUIChangedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a774);
    DAT_ram_006648bf = '\x01';
  }
  value = (System_Action_OnItemUIChangedEventArgs__o *)
          unnamed_function_95402(System_Action_OnItemUIChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_0056a774,0);
  StaticEventHandler__remove_OnItemUIClickChanged(value,(MethodInfo *)__this);
  return;
}

// ---- InventoryDescription$$StaticEventHandler_OnItemUIClickChanged ----
// C#: void InventoryDescription__StaticEventHandler_OnItemUIClickChanged (InventoryDescription_o* __this, OnItemUIChangedEventArgs_o* onItemUIChangedEventArgs, const MethodInfo* method);

void InventoryDescription__StaticEventHandler_OnItemUIClickChanged
               (InventoryDescription_o *__this,OnItemUIChangedEventArgs_o *onItemUIChangedEventArgs,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  ItemUI_o *param1_00;
  
  if (DAT_ram_006648c0 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648c0 = '\x01';
  }
  param1_00 = onItemUIChangedEventArgs->itemUI;
  __this->itemUI = param1_00;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1_00,0,0);
  if (iVar1 != 0) {
    param1 = unnamed_function_44644(__this->image,0);
    unnamed_function_44686(param1,1,0);
    unnamed_function_16520(__this->image,__this->itemUI->inventoryItem->itemSO->itemIcon,0);
    iVar1 = __this->titleText->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
              (__this->titleText,__this->itemUI->inventoryItem->itemSO->itemName,
               *(undefined4 *)(iVar1 + 0x2d4));
    iVar1 = __this->descriptionText->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
              (__this->descriptionText,__this->itemUI->inventoryItem->itemSO->itemDescription,
               *(undefined4 *)(iVar1 + 0x2d4));
  }
  return;
}

// ---- InventoryDescription$$.ctor ----
// C#: void InventoryDescription___ctor (InventoryDescription_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

