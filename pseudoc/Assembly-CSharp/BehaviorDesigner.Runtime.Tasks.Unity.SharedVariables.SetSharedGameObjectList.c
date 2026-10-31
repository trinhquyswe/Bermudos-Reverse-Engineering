// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedGameObjectList
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedGameObjectList : Action // TypeDefIndex: 5989
{
	// Fields
	[Tooltip("The value to set the SharedGameObjectList to.")]
	public SharedGameObjectList targetValue; // 0x2C
	[RequiredField]
	[Tooltip("The SharedGameObjectList to set")]
	public SharedGameObjectList targetVariable; // 0x30

	// Methods

	// RVA: 0x3E97 Offset: 0x3E97 VA: 0x3E97 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E98 Offset: 0x3E98 VA: 0x3E98 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E99 Offset: 0x3E99 VA: 0x3E99
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedGameObjectList$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObjectList__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObjectList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObjectList__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObjectList_o
               *__this,MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664ca4 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c44);
    unnamed_function_1099(&DAT_ram_00565c48);
    DAT_ram_00664ca4 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c44);
  unnamed_function_61204(param1,param2,DAT_ram_00565c48);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedGameObjectList$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObjectList__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObjectList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedGameObjectList$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObjectList___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedGameObjectList_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

