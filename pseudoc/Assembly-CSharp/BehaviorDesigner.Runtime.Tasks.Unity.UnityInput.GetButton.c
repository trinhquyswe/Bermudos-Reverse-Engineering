// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetButton
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetButton : Action // TypeDefIndex: 6188
{
	// Fields
	[Tooltip("The name of the button")]
	public SharedString buttonName; // 0x2C
	[RequiredField]
	[Tooltip("The stored result")]
	public SharedBool storeResult; // 0x30

	// Methods

	// RVA: 0x4159 Offset: 0x4159 VA: 0x4159 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x415A Offset: 0x415A VA: 0x415A Slot: 16
	public override void OnReset() { }

	// RVA: 0x415B Offset: 0x415B VA: 0x415B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetButton$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetButton__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetButton_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetButton__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetButton_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  
  if (DAT_ram_00664df7 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664df7 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  uVar1 = unnamed_function_12087(uVar1,0);
  unnamed_function_61192(param1,uVar1,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetButton$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetButton__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetButton_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetButton__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetButton_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  
  if (DAT_ram_00664df8 == '\0') {
    unnamed_function_1099(&StringLiteral_3903 /* "Fire1" */);
    DAT_ram_00664df8 = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_3903 /* "Fire1" */,(MethodInfo *)0x0);
  __this->buttonName = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->storeResult = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetButton$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetButton___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetButton_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

