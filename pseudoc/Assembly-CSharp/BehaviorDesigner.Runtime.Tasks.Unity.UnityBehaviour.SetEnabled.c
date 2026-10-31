// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.SetEnabled
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetEnabled : Action // TypeDefIndex: 6254
{
	// Fields
	[Tooltip("The Behavior to use")]
	public SharedBehaviour specifiedObject; // 0x2C
	[Tooltip("The enabled/disabled state")]
	public SharedBool enabled; // 0x30

	// Methods

	// RVA: 0x4243 Offset: 0x4243 VA: 0x4243 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4244 Offset: 0x4244 VA: 0x4244 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4245 Offset: 0x4245 VA: 0x4245
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.SetEnabled$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_SetEnabled__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_SetEnabled_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_SetEnabled__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_SetEnabled_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined4 param2;
  
  if (DAT_ram_00664e69 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565c6c);
    unnamed_function_1099(&StringLiteral_6839 /* "SpecifiedObject is null" */);
    DAT_ram_00664e69 = '\x01';
  }
  if (*(int *)(__ret + 0x2c) == 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6839 /* "SpecifiedObject is null" */,0);
    return;
  }
  param1 = unnamed_function_61203(*(int *)(__ret + 0x2c),DAT_ram_00565c6c);
  param2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
  unnamed_function_44620(param1,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.SetEnabled$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_SetEnabled__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_SetEnabled_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_SetEnabled__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_SetEnabled_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  if (DAT_ram_00664e6a == '\0') {
    unnamed_function_1099(&DAT_ram_00565c70);
    DAT_ram_00664e6a = '\x01';
  }
  unnamed_function_61204(__this->specifiedObject,0,DAT_ram_00565c70);
  pBVar1 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->enabled = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.SetEnabled$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_SetEnabled___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_SetEnabled_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

