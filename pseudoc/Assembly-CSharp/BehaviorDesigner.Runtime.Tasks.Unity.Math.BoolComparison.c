// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolComparison
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class BoolComparison : Conditional // TypeDefIndex: 6139
{
	// Fields
	[Tooltip("The first bool")]
	public SharedBool bool1; // 0x2C
	[Tooltip("The second bool")]
	public SharedBool bool2; // 0x30

	// Methods

	// RVA: 0x40C4 Offset: 0x40C4 VA: 0x40C4 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40C5 Offset: 0x40C5 VA: 0x40C5 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40C6 Offset: 0x40C6 VA: 0x40C6
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolComparison$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolComparison__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolComparison_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolComparison__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolComparison_o *__this,MethodInfo *method
               )

{
  if (DAT_ram_00664daf == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    DAT_ram_00664daf = '\x01';
  }
  unnamed_function_61191(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c78);
  unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolComparison$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolComparison__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolComparison_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolComparison$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolComparison___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolComparison_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

