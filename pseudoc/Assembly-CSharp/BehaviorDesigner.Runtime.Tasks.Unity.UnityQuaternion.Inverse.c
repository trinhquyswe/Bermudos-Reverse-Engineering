// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Inverse
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Inverse : Action // TypeDefIndex: 6074
{
	// Fields
	[Tooltip("The target quaternion")]
	public SharedQuaternion targetQuaternion; // 0x2C
	[Tooltip("The stored quaternion")]
	[RequiredField]
	public SharedQuaternion storeResult; // 0x30

	// Methods

	// RVA: 0x3FD7 Offset: 0x3FD7 VA: 0x3FD7 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FD8 Offset: 0x3FD8 VA: 0x3FD8 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FD9 Offset: 0x3FD9 VA: 0x3FD9
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Inverse$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Inverse__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Inverse_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Inverse__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Inverse_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664d3c == '\0') {
    unnamed_function_1099(&DAT_ram_00565ce8);
    unnamed_function_1099(&DAT_ram_00565cec);
    DAT_ram_00664d3c = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565ce8);
  local_28 = local_8;
  local_30 = local_10;
  unnamed_function_8656(&local_20,&local_30,0);
  local_38 = local_18;
  local_40 = local_20;
  unnamed_function_61198(param1,&local_40,DAT_ram_00565cec);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Inverse$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Inverse__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Inverse_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Inverse__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Inverse_o *__this,
               MethodInfo *method)

{
  Quaternion_o *pQVar1;
  Quaternion_o local_20;
  Quaternion_o local_10;
  
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_20._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_20._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_10._0_8_ = local_20._0_8_;
  local_10._8_8_ = local_20._8_8_;
  pQVar1 = BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->targetQuaternion = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  __this->storeResult = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Inverse$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Inverse___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Inverse_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

