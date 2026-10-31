// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatClamp
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class FloatClamp : Action // TypeDefIndex: 6144
{
	// Fields
	[Tooltip("The float to clamp")]
	public SharedFloat floatVariable; // 0x2C
	[Tooltip("The maximum value of the float")]
	public SharedFloat minValue; // 0x30
	[Tooltip("The maximum value of the float")]
	public SharedFloat maxValue; // 0x34

	// Methods

	// RVA: 0x40D0 Offset: 0x40D0 VA: 0x40D0 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40D1 Offset: 0x40D1 VA: 0x40D1 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40D2 Offset: 0x40D2 VA: 0x40D2
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatClamp$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatClamp__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatClamp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatClamp__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatClamp_o *__this,MethodInfo *method)

{
  float fVar1;
  float param2;
  float fVar2;
  undefined4 param1;
  
  if (DAT_ram_00664db4 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664db4 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  fVar1 = unnamed_function_61226(param1,DAT_ram_00565d00);
  param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  if (param2 <= fVar1) {
    param2 = fVar2;
  }
  unnamed_function_61227(param1,param2,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatClamp$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatClamp__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatClamp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatClamp__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatClamp_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->floatVariable = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->minValue = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->maxValue = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatClamp$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatClamp___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatClamp_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

