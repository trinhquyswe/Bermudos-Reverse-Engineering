// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedFloat
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedFloat : Action // TypeDefIndex: 5987
{
	// Fields
	[Tooltip("The value to set the SharedFloat to")]
	public SharedFloat targetValue; // 0x2C
	[RequiredField]
	[Tooltip("The SharedFloat to set")]
	public SharedFloat targetVariable; // 0x30

	// Methods

	// RVA: 0x3E91 Offset: 0x3E91 VA: 0x3E91 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E92 Offset: 0x3E92 VA: 0x3E92 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E93 Offset: 0x3E93 VA: 0x3E93
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedFloat$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedFloat__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedFloat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedFloat__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedFloat_o *__this,
               MethodInfo *method)

{
  float param2;
  undefined4 param1;
  
  if (DAT_ram_00664ca2 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664ca2 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d00);
  unnamed_function_61227(param1,param2,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedFloat$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedFloat__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedFloat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedFloat__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedFloat_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->targetValue = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->targetVariable = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedFloat$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedFloat___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedFloat_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

