// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedQuaternion
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedQuaternion : Action // TypeDefIndex: 5993
{
	// Fields
	[Tooltip("The value to set the SharedQuaternion to")]
	public SharedQuaternion targetValue; // 0x2C
	[Tooltip("The SharedQuaternion to set")]
	[RequiredField]
	public SharedQuaternion targetVariable; // 0x30

	// Methods

	// RVA: 0x3EA3 Offset: 0x3EA3 VA: 0x3EA3 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3EA4 Offset: 0x3EA4 VA: 0x3EA4 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3EA5 Offset: 0x3EA5 VA: 0x3EA5
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedQuaternion$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedQuaternion__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedQuaternion_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedQuaternion__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedQuaternion_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664ca8 == '\0') {
    unnamed_function_1099(&DAT_ram_00565ce8);
    unnamed_function_1099(&DAT_ram_00565cec);
    DAT_ram_00664ca8 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565ce8);
  local_18 = local_8;
  local_20 = local_10;
  unnamed_function_61198(param1,&local_20,DAT_ram_00565cec);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedQuaternion$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedQuaternion__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedQuaternion_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedQuaternion__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedQuaternion_o
                *__this,MethodInfo *method)

{
  Quaternion_o *pQVar1;
  Quaternion_o local_40;
  Quaternion_o local_30;
  Quaternion_o local_20;
  Quaternion_o local_10;
  
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_30._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_30._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_10._0_8_ = local_30._0_8_;
  local_10._8_8_ = local_30._8_8_;
  pQVar1 = BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->variable = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_40._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_40._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_20._0_8_ = local_40._0_8_;
  local_20._8_8_ = local_40._8_8_;
  pQVar1 = BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->compareTo = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedQuaternion$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedQuaternion___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedQuaternion_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

