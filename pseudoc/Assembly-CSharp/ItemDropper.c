// Assembly-CSharp :: ItemDropper
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ItemDropper : MonoBehaviour // TypeDefIndex: 5648
{
	// Fields
	[SerializeField]
	private List<ItemSO> itemSOList; // 0x10
	private DestroyedEvent destroyedEvent; // 0x14

	// Methods

	// RVA: 0x38E1 Offset: 0x38E1 VA: 0x38E1
	private void Awake() { }

	// RVA: 0x38E2 Offset: 0x38E2 VA: 0x38E2
	private void OnEnable() { }

	// RVA: 0x38E3 Offset: 0x38E3 VA: 0x38E3
	private void OnDisable() { }

	// RVA: 0x38E4 Offset: 0x38E4 VA: 0x38E4
	private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs) { }

	// RVA: 0x38E5 Offset: 0x38E5 VA: 0x38E5
	private void DropItemOnDeath() { }

	// RVA: 0x38E6 Offset: 0x38E6 VA: 0x38E6
	public void .ctor() { }
}

===== C# end =====
*/

// ---- ItemDropper$$Awake ----
// C#: void ItemDropper__Awake (ItemDropper_o* __this, const MethodInfo* method);

void ItemDropper__Awake(ItemDropper_o *__this,MethodInfo *method)

{
  DestroyedEvent_o *pDVar1;
  
  if (DAT_ram_006648da == '\0') {
    unnamed_function_1099(&DAT_ram_00567e70);
    DAT_ram_006648da = '\x01';
  }
  pDVar1 = (DestroyedEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e70);
  __this->destroyedEvent = pDVar1;
  return;
}

// ---- ItemDropper$$OnEnable ----
// C#: void ItemDropper__OnEnable (ItemDropper_o* __this, const MethodInfo* method);

void ItemDropper__OnEnable(ItemDropper_o *__this,MethodInfo *method)

{
  System_Action_DestroyedEvent__DestroyedEventArgs__o *value;
  DestroyedEvent_o *__this_00;
  
  if (DAT_ram_006648db == '\0') {
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a7c8);
    DAT_ram_006648db = '\x01';
  }
  __this_00 = __this->destroyedEvent;
  value = (System_Action_DestroyedEvent__DestroyedEventArgs__o *)
          unnamed_function_95402(System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
  unnamed_function_60334(value,__this,DAT_ram_0056a7c8,0);
  DestroyedEvent__add_OnDestroyed(__this_00,value,(MethodInfo *)0x0);
  return;
}

// ---- ItemDropper$$OnDisable ----
// C#: void ItemDropper__OnDisable (ItemDropper_o* __this, const MethodInfo* method);

void ItemDropper__OnDisable(ItemDropper_o *__this,MethodInfo *method)

{
  System_Action_DestroyedEvent__DestroyedEventArgs__o *value;
  DestroyedEvent_o *__this_00;
  
  if (DAT_ram_006648dc == '\0') {
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a7c8);
    DAT_ram_006648dc = '\x01';
  }
  __this_00 = __this->destroyedEvent;
  value = (System_Action_DestroyedEvent__DestroyedEventArgs__o *)
          unnamed_function_95402(System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
  unnamed_function_60334(value,__this,DAT_ram_0056a7c8,0);
  DestroyedEvent__remove_OnDestroyed(__this_00,value,(MethodInfo *)0x0);
  return;
}

// ---- ItemDropper$$DestroyedEvent_OnDestroyed ----
// C#: void ItemDropper__DestroyedEvent_OnDestroyed (ItemDropper_o* __this, DestroyedEvent_o* destroyedEvent, DestroyedEventArgs_o* destroyedEventArgs, const MethodInfo* method);

void ItemDropper__DestroyedEvent_OnDestroyed
               (ItemDropper_o *__this,DestroyedEvent_o *destroyedEvent,
               DestroyedEventArgs_o *destroyedEventArgs,MethodInfo *method)

{
  if (destroyedEventArgs->playerDied == false) {
    ItemDropper__DropItemOnDeath(__this,(MethodInfo *)destroyedEventArgs);
  }
  return;
}

// ---- ItemDropper$$DropItemOnDeath ----
// C#: void ItemDropper__DropItemOnDeath (ItemDropper_o* __this, const MethodInfo* method);

void ItemDropper__DropItemOnDeath(ItemDropper_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 param1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_006648dd == '\0') {
    unnamed_function_1099(&DAT_ram_00569abc);
    unnamed_function_1099(&DAT_ram_00563438);
    unnamed_function_1099(&DAT_ram_0056343c);
    unnamed_function_1099(&DAT_ram_0056b548);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648dd = '\x01';
  }
  uVar1 = unnamed_function_44584(0,__this->itemSOList[3]._opaque,0);
  iVar2 = unnamed_function_6529(__this->itemSOList,uVar1,DAT_ram_0056343c);
  iVar3 = unnamed_function_44584(0,100,0);
  if ((float)iVar3 < *(float *)(iVar2 + 0x1c)) {
    param1 = *(undefined4 *)(iVar2 + 0x10);
    uVar1 = unnamed_function_44643(__this,0);
    unnamed_function_44960(&local_10,uVar1,0);
    if (DAT_ram_006603e8 == '\0') {
      unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
      DAT_ram_006603e8 = '\x01';
    }
    local_18 = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
    local_20 = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    local_28 = local_8;
    local_38 = local_18;
    local_30 = local_10;
    local_40 = local_20;
    uVar1 = unnamed_function_86418(param1,&local_30,&local_40,DAT_ram_0056b548);
    iVar3 = unnamed_function_73836(uVar1,DAT_ram_00569abc);
    *(int *)(iVar3 + 0x18) = iVar2;
  }
  return;
}

// ---- ItemDropper$$.ctor ----
// C#: void ItemDropper___ctor (ItemDropper_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

