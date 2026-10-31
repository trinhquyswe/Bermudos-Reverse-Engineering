// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatAbs
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class FloatAbs : Action // TypeDefIndex: 6143
{
	// Fields
	[Tooltip("The float to return the absolute value of")]
	public SharedFloat floatVariable; // 0x2C

	// Methods

	// RVA: 0x40CD Offset: 0x40CD VA: 0x40CD Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40CE Offset: 0x40CE VA: 0x40CE Slot: 16
	public override void OnReset() { }

	// RVA: 0x40CF Offset: 0x40CF VA: 0x40CF
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatAbs$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 param1;
  
  if (DAT_ram_00664db3 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664db3 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  fVar1 = unnamed_function_61226(param1,DAT_ram_00565d00);
  unnamed_function_61227(param1,ABS(fVar1),DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatAbs$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->floatVariable = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatAbs$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatAbs_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

