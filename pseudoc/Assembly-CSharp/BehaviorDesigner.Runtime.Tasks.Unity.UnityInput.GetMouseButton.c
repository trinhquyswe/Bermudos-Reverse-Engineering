// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetMouseButton
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetMouseButton : Action // TypeDefIndex: 6190
{
	// Fields
	[Tooltip("The index of the button")]
	public SharedInt buttonIndex; // 0x2C
	[RequiredField]
	[Tooltip("The stored result")]
	public SharedBool storeResult; // 0x30

	// Methods

	// RVA: 0x415F Offset: 0x415F VA: 0x415F Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4160 Offset: 0x4160 VA: 0x4160 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4161 Offset: 0x4161 VA: 0x4161
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetMouseButton$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetMouseButton__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetMouseButton_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetMouseButton__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetMouseButton_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  
  if (DAT_ram_00664dfa == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664dfa = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cb8);
  uVar1 = unnamed_function_12093(uVar1,0);
  unnamed_function_61192(param1,uVar1,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetMouseButton$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetMouseButton__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetMouseButton_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetMouseButton__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetMouseButton_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->buttonIndex = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->storeResult = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetMouseButton$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetMouseButton___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetMouseButton_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

