// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.GetEnabled
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetEnabled : Action // TypeDefIndex: 6252
{
	// Fields
	[Tooltip("The Behavior to use")]
	public SharedBehaviour specifiedObject; // 0x2C
	[RequiredField]
	[Tooltip("The enabled/disabled state")]
	public SharedBool storeValue; // 0x30

	// Methods

	// RVA: 0x423D Offset: 0x423D VA: 0x423D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x423E Offset: 0x423E VA: 0x423E Slot: 16
	public override void OnReset() { }

	// RVA: 0x423F Offset: 0x423F VA: 0x423F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.GetEnabled$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_GetEnabled__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_GetEnabled_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_GetEnabled__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_GetEnabled_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  
  if (DAT_ram_00664e65 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c6c);
    unnamed_function_1099(&DAT_ram_00565c7c);
    unnamed_function_1099(&StringLiteral_6839 /* "SpecifiedObject is null" */);
    DAT_ram_00664e65 = '\x01';
  }
  if (*(int *)(__ret + 0x2c) == 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6839 /* "SpecifiedObject is null" */,0);
    return;
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar1 = unnamed_function_61203(*(int *)(__ret + 0x2c),DAT_ram_00565c6c);
  uVar1 = unnamed_function_44619(uVar1,0);
  unnamed_function_61192(param1,uVar1,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.GetEnabled$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_GetEnabled__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_GetEnabled_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_GetEnabled__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_GetEnabled_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  if (DAT_ram_00664e66 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c70);
    DAT_ram_00664e66 = '\x01';
  }
  unnamed_function_61204(__this->specifiedObject,0,DAT_ram_00565c70);
  pBVar1 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->storeValue = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.GetEnabled$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_GetEnabled___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_GetEnabled_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

