// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedBool
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedBool : Action // TypeDefIndex: 5985
{
	// Fields
	[Tooltip("The value to set the SharedBool to")]
	public SharedBool targetValue; // 0x2C
	[Tooltip("The SharedBool to set")]
	[RequiredField]
	public SharedBool targetVariable; // 0x30

	// Methods

	// RVA: 0x3E8B Offset: 0x3E8B VA: 0x3E8B Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E8C Offset: 0x3E8C VA: 0x3E8C Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E8D Offset: 0x3E8D VA: 0x3E8D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedBool$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedBool__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedBool_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedBool__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedBool_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664ca0 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664ca0 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c78);
  unnamed_function_61192(param1,param2,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedBool$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedBool__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedBool_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedBool__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedBool_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->targetValue = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->targetVariable = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedBool$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedBool___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedBool_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

