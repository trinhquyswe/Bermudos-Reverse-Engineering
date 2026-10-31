// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.LerpAngle
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class LerpAngle : Action // TypeDefIndex: 6158
{
	// Fields
	[Tooltip("The from value")]
	public SharedFloat fromValue; // 0x2C
	[Tooltip("The to value")]
	public SharedFloat toValue; // 0x30
	[Tooltip("The amount to lerp")]
	public SharedFloat lerpAmount; // 0x34
	[RequiredField]
	[Tooltip("The lerp resut")]
	public SharedFloat storeResult; // 0x38

	// Methods

	// RVA: 0x40EE Offset: 0x40EE VA: 0x40EE Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40EF Offset: 0x40EF VA: 0x40EF Slot: 16
	public override void OnReset() { }

	// RVA: 0x40F0 Offset: 0x40F0 VA: 0x40F0
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.LerpAngle$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_LerpAngle__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_LerpAngle_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_LerpAngle__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_LerpAngle_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 param1;
  float fVar4;
  float fVar5;
  
  if (DAT_ram_00664dc0 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664dc0 = '\x01';
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
  fVar2 = (fVar2 - fVar1) + FLOOR((fVar2 - fVar1) / 360.0) * -360.0;
  fVar5 = fVar2;
  if (360.0 <= fVar2) {
    fVar5 = 360.0;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar5;
  }
  fVar5 = fVar3 + -360.0;
  if (fVar3 <= 180.0) {
    fVar5 = fVar3;
  }
  unnamed_function_61227(param1,fVar1 + fVar4 * fVar5,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.LerpAngle$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_LerpAngle__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_LerpAngle_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.LerpAngle$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_LerpAngle___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_LerpAngle_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

