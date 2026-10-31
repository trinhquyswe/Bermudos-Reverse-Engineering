// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.IntClamp
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IntClamp : Action // TypeDefIndex: 6150
{
	// Fields
	[Tooltip("The int to clamp")]
	public SharedInt intVariable; // 0x2C
	[Tooltip("The maximum value of the int")]
	public SharedInt minValue; // 0x30
	[Tooltip("The maximum value of the int")]
	public SharedInt maxValue; // 0x34

	// Methods

	// RVA: 0x40DC Offset: 0x40DC VA: 0x40DC Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40DD Offset: 0x40DD VA: 0x40DD Slot: 16
	public override void OnReset() { }

	// RVA: 0x40DE Offset: 0x40DE VA: 0x40DE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntClamp$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_IntClamp__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntClamp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntClamp__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_IntClamp_o *__this,MethodInfo *method)

{
  int iVar1;
  int param2;
  int iVar2;
  undefined4 param1;
  
  if (DAT_ram_00664db9 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664db9 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  iVar1 = unnamed_function_61203(param1,DAT_ram_00565cb8);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
  iVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  if (param2 <= iVar1) {
    param2 = iVar2;
  }
  unnamed_function_61204(param1,param2,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntClamp$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntClamp__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntClamp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntClamp__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntClamp_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->intVariable = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->minValue = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->maxValue = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntClamp$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntClamp___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntClamp_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

