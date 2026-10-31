// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsMouseUp
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsMouseUp : Conditional // TypeDefIndex: 6197
{
	// Fields
	[Tooltip("The button index")]
	public SharedInt buttonIndex; // 0x2C

	// Methods

	// RVA: 0x4174 Offset: 0x4174 VA: 0x4174 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4175 Offset: 0x4175 VA: 0x4175 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4176 Offset: 0x4176 VA: 0x4176
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsMouseUp$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseUp__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseUp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseUp__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseUp_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664e01 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664e01 = '\x01';
  }
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cb8);
  unnamed_function_12095(param1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsMouseUp$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseUp__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseUp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->intVariable = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsMouseUp$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseUp___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseUp_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

