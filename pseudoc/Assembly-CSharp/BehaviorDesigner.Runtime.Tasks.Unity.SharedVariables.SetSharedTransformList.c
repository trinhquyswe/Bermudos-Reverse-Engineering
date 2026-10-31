// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedTransformList
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedTransformList : Action // TypeDefIndex: 5997
{
	// Fields
	[Tooltip("The value to set the SharedTransformList to.")]
	public SharedTransformList targetValue; // 0x2C
	[RequiredField]
	[Tooltip("The SharedTransformList to set")]
	public SharedTransformList targetVariable; // 0x30

	// Methods

	// RVA: 0x3EAF Offset: 0x3EAF VA: 0x3EAF Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3EB0 Offset: 0x3EB0 VA: 0x3EB0 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3EB1 Offset: 0x3EB1 VA: 0x3EB1
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedTransformList$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransformList__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransformList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransformList__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransformList_o *__this
               ,MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664cad == '\0') {
    unnamed_function_1099(&DAT_ram_00565c5c);
    unnamed_function_1099(&DAT_ram_00565c60);
    DAT_ram_00664cad = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c5c);
  unnamed_function_61204(param1,param2,DAT_ram_00565c60);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedTransformList$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransformList__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransformList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedTransformList$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransformList___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedTransformList_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

