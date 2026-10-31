// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsButtonUp
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsButtonUp : Conditional // TypeDefIndex: 6193
{
	// Fields
	[Tooltip("The name of the button")]
	public SharedString buttonName; // 0x2C

	// Methods

	// RVA: 0x4168 Offset: 0x4168 VA: 0x4168 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4169 Offset: 0x4169 VA: 0x4169 Slot: 16
	public override void OnReset() { }

	// RVA: 0x416A Offset: 0x416A VA: 0x416A
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsButtonUp$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsButtonUp__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsButtonUp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsButtonUp__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsButtonUp_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664dfe == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664dfe = '\x01';
  }
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  unnamed_function_12089(param1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsButtonUp$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsButtonUp__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsButtonUp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsButtonUp__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsButtonUp_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664dff == '\0') {
    unnamed_function_1099(&StringLiteral_3903 /* "Fire1" */);
    DAT_ram_00664dff = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_3903 /* "Fire1" */,(MethodInfo *)0x0);
  __this->buttonName = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.IsButtonUp$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsButtonUp___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_IsButtonUp_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

