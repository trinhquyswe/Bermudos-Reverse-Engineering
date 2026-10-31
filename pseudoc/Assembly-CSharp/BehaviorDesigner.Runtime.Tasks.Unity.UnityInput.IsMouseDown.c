// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsMouseDown
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsMouseDown : Conditional // TypeDefIndex: 6196
{
	// Fields
	[Tooltip("The button index")]
	public SharedInt buttonIndex; // 0x2C

	// Methods

	// RVA: 0x4171 Offset: 0x4171 VA: 0x4171 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4172 Offset: 0x4172 VA: 0x4172 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4173 Offset: 0x4173 VA: 0x4173
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsMouseDown$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseDown__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseDown_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseDown__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseDown_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664e00 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664e00 = '\x01';
  }
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cb8);
  unnamed_function_12094(param1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsMouseDown$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseDown__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseDown_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->intVariable = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsMouseDown$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseDown___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsMouseDown_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

