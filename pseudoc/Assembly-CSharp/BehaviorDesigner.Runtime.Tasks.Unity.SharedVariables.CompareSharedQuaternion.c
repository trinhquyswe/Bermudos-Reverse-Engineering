// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedQuaternion
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareSharedQuaternion : Conditional // TypeDefIndex: 5977
{
	// Fields
	[Tooltip("The first variable to compare")]
	public SharedQuaternion variable; // 0x2C
	[Tooltip("The variable to compare to")]
	public SharedQuaternion compareTo; // 0x30

	// Methods

	// RVA: 0x3E73 Offset: 0x3E73 VA: 0x3E73 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E74 Offset: 0x3E74 VA: 0x3E74 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E75 Offset: 0x3E75 VA: 0x3E75
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedQuaternion$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedQuaternion__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedQuaternion_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedQuaternion__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedQuaternion_o
               *__this,MethodInfo *method)

{
  int iVar1;
  float4 local_30;
  float4 local_2c;
  float4 local_28;
  float4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664c97 == '\0') {
    unnamed_function_1099(&DAT_ram_00565ce8);
    DAT_ram_00664c97 = '\x01';
  }
  unnamed_function_61197(&local_20,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565ce8);
  local_8 = local_18;
  local_10 = local_20;
  unnamed_function_61197(&local_30,*(undefined4 *)(__ret + 0x30),DAT_ram_00565ce8);
  iVar1 = unnamed_function_84031(&local_10,(float)local_30,0);
  if (((iVar1 != 0) &&
      (iVar1 = unnamed_function_84031((uint)&local_10 | 4,(float)local_2c,0), iVar1 != 0)) &&
     (iVar1 = unnamed_function_84031(&local_8,(float)local_28,0), iVar1 != 0)) {
    unnamed_function_84031((int)&local_8 + 4,(float)local_24,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedQuaternion$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedQuaternion__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedQuaternion_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedQuaternion$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedQuaternion___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedQuaternion_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

