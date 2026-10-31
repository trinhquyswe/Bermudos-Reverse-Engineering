// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.FromToRotation
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class FromToRotation : Action // TypeDefIndex: 6072
{
	// Fields
	[Tooltip("The from rotation")]
	public SharedVector3 fromDirection; // 0x2C
	[Tooltip("The to rotation")]
	public SharedVector3 toDirection; // 0x30
	[Tooltip("The stored result")]
	[RequiredField]
	public SharedQuaternion storeResult; // 0x34

	// Methods

	// RVA: 0x3FD1 Offset: 0x3FD1 VA: 0x3FD1 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FD2 Offset: 0x3FD2 VA: 0x3FD2 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FD3 Offset: 0x3FD3 VA: 0x3FD3
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.FromToRotation$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_FromToRotation__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_FromToRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_FromToRotation__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_FromToRotation_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664d3a == '\0') {
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565cec);
    DAT_ram_00664d3a = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  unnamed_function_61245(&local_20,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
  local_38 = local_8;
  local_48 = local_18;
  local_40 = local_10;
  local_50 = local_20;
  unnamed_function_8654(&local_30,&local_40,&local_50,0);
  local_58 = local_28;
  local_60 = local_30;
  unnamed_function_61198(param1,&local_60,DAT_ram_00565cec);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.FromToRotation$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_FromToRotation__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_FromToRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_FromToRotation__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_FromToRotation_o *__this,
               MethodInfo *method)

{
  Vector3_o *pVVar1;
  Quaternion_o *pQVar2;
  Quaternion_o local_40;
  Vector3_o local_30;
  Quaternion_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_30._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_30.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_30._0_8_;
  local_10.z = local_30.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->fromDirection = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  __this->toDirection = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_40._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_40._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_20._0_8_ = local_40._0_8_;
  local_20._8_8_ = local_40._8_8_;
  pQVar2 = BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->storeResult = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.FromToRotation$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_FromToRotation___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_FromToRotation_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

