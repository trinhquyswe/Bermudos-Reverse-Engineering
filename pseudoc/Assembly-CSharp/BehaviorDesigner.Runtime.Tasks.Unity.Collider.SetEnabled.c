// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Collider.SetEnabled
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetEnabled : Action // TypeDefIndex: 6218
{
	// Fields
	[Tooltip("The Behavior to use")]
	public SharedCollider specifiedCollider; // 0x2C
	[Tooltip("The enabled/disabled state")]
	public SharedBool enabled; // 0x30

	// Methods

	// RVA: 0x41B5 Offset: 0x41B5 VA: 0x41B5 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x41B6 Offset: 0x41B6 VA: 0x41B6 Slot: 16
	public override void OnReset() { }

	// RVA: 0x41B7 Offset: 0x41B7 VA: 0x41B7
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Collider.SetEnabled$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Collider_SetEnabled__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Collider_SetEnabled_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Collider_SetEnabled__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Collider_SetEnabled_o *__this,MethodInfo *method
               )

{
  undefined4 param1;
  undefined4 param2;
  
  if (DAT_ram_00664e20 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565c84);
    unnamed_function_1099(&StringLiteral_6838 /* "SpecifiedCollider is null" */);
    DAT_ram_00664e20 = '\x01';
  }
  if (*(int *)(__ret + 0x2c) == 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6838 /* "SpecifiedCollider is null" */,0);
    return;
  }
  param1 = unnamed_function_61203(*(int *)(__ret + 0x2c),DAT_ram_00565c84);
  param2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
  unnamed_function_15257(param1,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Collider.SetEnabled$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Collider_SetEnabled__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Collider_SetEnabled_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Collider_SetEnabled__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Collider_SetEnabled_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  if (DAT_ram_00664e21 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c88);
    DAT_ram_00664e21 = '\x01';
  }
  unnamed_function_61204(__this->specifiedCollider,0,DAT_ram_00565c88);
  pBVar1 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->enabled = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Collider.SetEnabled$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Collider_SetEnabled___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Collider_SetEnabled_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

