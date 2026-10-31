// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedObject
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedObject : Action // TypeDefIndex: 5991
{
	// Fields
	[Tooltip("The value to set the SharedObject to")]
	public SharedObject targetValue; // 0x2C
	[Tooltip("The SharedTransform to set")]
	[RequiredField]
	public SharedObject targetVariable; // 0x30

	// Methods

	// RVA: 0x3E9D Offset: 0x3E9D VA: 0x3E9D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E9E Offset: 0x3E9E VA: 0x3E9E Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E9F Offset: 0x3E9F VA: 0x3E9F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedObject$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObject__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObject_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObject__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObject_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664ca6 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cdc);
    unnamed_function_1099(&DAT_ram_00565ce0);
    DAT_ram_00664ca6 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cdc);
  unnamed_function_61204(param1,param2,DAT_ram_00565ce0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedObject$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObject__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObject_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedObject$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObject___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedObject_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

