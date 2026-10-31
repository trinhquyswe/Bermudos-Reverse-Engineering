// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.Find
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Find : Action // TypeDefIndex: 6204
{
	// Fields
	[Tooltip("The GameObject name to find")]
	public SharedString gameObjectName; // 0x2C
	[Tooltip("The object found by name")]
	[RequiredField]
	public SharedGameObject storeValue; // 0x30

	// Methods

	// RVA: 0x4189 Offset: 0x4189 VA: 0x4189 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x418A Offset: 0x418A VA: 0x418A Slot: 16
	public override void OnReset() { }

	// RVA: 0x418B Offset: 0x418B VA: 0x418B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.Find$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Find__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Find_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Find__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Find_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  
  if (DAT_ram_00664e09 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664e09 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  uVar1 = unnamed_function_44699(uVar1,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c9c);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  unnamed_function_44679(uVar1,0,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.Find$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Find__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Find_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.Find$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Find___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_Find_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

