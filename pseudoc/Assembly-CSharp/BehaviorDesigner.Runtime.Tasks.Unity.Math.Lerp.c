// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.Lerp
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Lerp : Action // TypeDefIndex: 6157
{
	// Fields
	[Tooltip("The from value")]
	public SharedFloat fromValue; // 0x2C
	[Tooltip("The to value")]
	public SharedFloat toValue; // 0x30
	[Tooltip("The amount to lerp")]
	public SharedFloat lerpAmount; // 0x34
	[Tooltip("The lerp resut")]
	[RequiredField]
	public SharedFloat storeResult; // 0x38

	// Methods

	// RVA: 0x40EB Offset: 0x40EB VA: 0x40EB Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40EC Offset: 0x40EC VA: 0x40EC Slot: 16
	public override void OnReset() { }

	// RVA: 0x40ED Offset: 0x40ED VA: 0x40ED
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.Lerp$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_Lerp__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_Lerp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_Lerp__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_Lerp_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 param1;
  float fVar4;
  float fVar5;
  
  if (DAT_ram_00664dbf == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664dbf = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x38);
  fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d00);
  fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  fVar3 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  fVar5 = fVar3;
  if (1.0 <= fVar3) {
    fVar5 = 1.0;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar5;
  }
  unnamed_function_61227(param1,fVar1 + (fVar2 - fVar1) * fVar4,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.Lerp$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_Lerp__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_Lerp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_Lerp__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_Lerp_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->fromValue = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->toValue = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->lerpAmount = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.Lerp$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_Lerp___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_Lerp_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

