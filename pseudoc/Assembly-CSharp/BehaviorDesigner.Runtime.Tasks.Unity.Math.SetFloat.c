// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.SetFloat
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetFloat : Action // TypeDefIndex: 6163
{
	// Fields
	[Tooltip("The float value to set")]
	public SharedFloat floatValue; // 0x2C
	[Tooltip("The variable to store the result")]
	public SharedFloat storeResult; // 0x30

	// Methods

	// RVA: 0x40FC Offset: 0x40FC VA: 0x40FC Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40FD Offset: 0x40FD VA: 0x40FD Slot: 16
	public override void OnReset() { }

	// RVA: 0x40FE Offset: 0x40FE VA: 0x40FE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.SetFloat$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_SetFloat__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_SetFloat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_SetFloat__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_SetFloat_o *__this,MethodInfo *method)

{
  float param2;
  undefined4 param1;
  
  if (DAT_ram_00664dc7 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664dc7 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d00);
  unnamed_function_61227(param1,param2,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.SetFloat$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_SetFloat__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_SetFloat_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.SetFloat$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_SetFloat___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_SetFloat_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

