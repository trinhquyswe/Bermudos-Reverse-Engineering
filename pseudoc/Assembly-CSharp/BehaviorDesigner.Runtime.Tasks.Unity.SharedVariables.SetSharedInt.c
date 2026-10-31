// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedInt
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedInt : Action // TypeDefIndex: 5990
{
	// Fields
	[Tooltip("The value to set the SharedInt to")]
	public SharedInt targetValue; // 0x2C
	[Tooltip("The SharedInt to set")]
	[RequiredField]
	public SharedInt targetVariable; // 0x30

	// Methods

	// RVA: 0x3E9A Offset: 0x3E9A VA: 0x3E9A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E9B Offset: 0x3E9B VA: 0x3E9B Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E9C Offset: 0x3E9C VA: 0x3E9C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedInt$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedInt__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedInt__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedInt_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664ca5 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664ca5 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cb8);
  unnamed_function_61204(param1,param2,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedInt$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedInt__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedInt__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedInt_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->targetValue = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->targetVariable = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedInt$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedInt___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedInt_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

