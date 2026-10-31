// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.IsFloatPositive
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsFloatPositive : Conditional // TypeDefIndex: 6155
{
	// Fields
	[Tooltip("The float to check if positive")]
	public SharedFloat floatVariable; // 0x2C

	// Methods

	// RVA: 0x40E5 Offset: 0x40E5 VA: 0x40E5 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40E6 Offset: 0x40E6 VA: 0x40E6 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40E7 Offset: 0x40E7 VA: 0x40E7
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IsFloatPositive$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_IsFloatPositive__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_IsFloatPositive_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IsFloatPositive__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_IsFloatPositive_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664dbd == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    DAT_ram_00664dbd = '\x01';
  }
  unnamed_function_61226(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d00);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IsFloatPositive$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IsFloatPositive__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_IsFloatPositive_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->floatVariable = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IsFloatPositive$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IsFloatPositive___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_IsFloatPositive_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

