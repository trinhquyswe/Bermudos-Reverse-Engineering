// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.SetInt
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetInt : Action // TypeDefIndex: 6164
{
	// Fields
	[Tooltip("The int value to set")]
	public SharedInt intValue; // 0x2C
	[Tooltip("The variable to store the result")]
	public SharedInt storeResult; // 0x30

	// Methods

	// RVA: 0x40FF Offset: 0x40FF VA: 0x40FF Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4100 Offset: 0x4100 VA: 0x4100 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4101 Offset: 0x4101 VA: 0x4101
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.SetInt$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_SetInt__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_SetInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_SetInt__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_SetInt_o *__this,MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664dc8 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664dc8 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cb8);
  unnamed_function_61204(param1,param2,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.SetInt$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_SetInt__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_SetInt_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.SetInt$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_SetInt___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_SetInt_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

