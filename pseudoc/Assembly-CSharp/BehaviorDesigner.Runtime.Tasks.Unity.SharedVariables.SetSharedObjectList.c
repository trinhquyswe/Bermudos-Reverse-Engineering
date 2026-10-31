// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedObjectList
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedObjectList : Action // TypeDefIndex: 5992
{
	// Fields
	[Tooltip("The value to set the SharedObjectList to.")]
	public SharedObjectList targetValue; // 0x2C
	[Tooltip("The SharedObjectList to set")]
	[RequiredField]
	public SharedObjectList targetVariable; // 0x30

	// Methods

	// RVA: 0x3EA0 Offset: 0x3EA0 VA: 0x3EA0 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3EA1 Offset: 0x3EA1 VA: 0x3EA1 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3EA2 Offset: 0x3EA2 VA: 0x3EA2
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedObjectList$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObjectList__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObjectList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObjectList__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObjectList_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664ca7 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c50);
    unnamed_function_1099(&DAT_ram_00565c54);
    DAT_ram_00664ca7 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c50);
  unnamed_function_61204(param1,param2,DAT_ram_00565c54);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedObjectList$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObjectList__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObjectList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedObjectList$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObjectList___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObjectList_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

