// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.SetBool
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetBool : Action // TypeDefIndex: 6162
{
	// Fields
	[Tooltip("The bool value to set")]
	public SharedBool boolValue; // 0x2C
	[Tooltip("The variable to store the result")]
	public SharedBool storeResult; // 0x30

	// Methods

	// RVA: 0x40F9 Offset: 0x40F9 VA: 0x40F9 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40FA Offset: 0x40FA VA: 0x40FA Slot: 16
	public override void OnReset() { }

	// RVA: 0x40FB Offset: 0x40FB VA: 0x40FB
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.SetBool$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_SetBool__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_SetBool_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_SetBool__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_SetBool_o *__this,MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664dc6 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664dc6 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c78);
  unnamed_function_61192(param1,param2,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.SetBool$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_SetBool__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_SetBool_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_SetBool__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_SetBool_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->boolValue = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.SetBool$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_SetBool___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_SetBool_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

