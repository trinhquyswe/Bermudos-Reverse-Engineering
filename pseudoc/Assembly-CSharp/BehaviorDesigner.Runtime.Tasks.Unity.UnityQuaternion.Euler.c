// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Euler
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Euler : Action // TypeDefIndex: 6071
{
	// Fields
	[Tooltip("The euler vector")]
	public SharedVector3 eulerVector; // 0x2C
	[RequiredField]
	[Tooltip("The stored quaternion")]
	public SharedQuaternion storeResult; // 0x30

	// Methods

	// RVA: 0x3FCE Offset: 0x3FCE VA: 0x3FCE Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FCF Offset: 0x3FCF VA: 0x3FCF Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FD0 Offset: 0x3FD0 VA: 0x3FD0
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Euler$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Euler__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Euler_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Euler__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Euler_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined1 local_40 [16];
  undefined8 local_30;
  float local_28;
  float4 local_20;
  float4 local_1c;
  float4 local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664d39 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565cec);
    DAT_ram_00664d39 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61245(&local_20,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  local_28 = (float)local_18 * 0.017453292;
  local_c = (float4)((float)local_1c * 0.017453292);
  local_10 = (float4)((float)local_20 * 0.017453292);
  local_30 = CONCAT44(local_c,local_10);
  local_8 = (float4)local_28;
  unnamed_function_8664(&local_20,&local_30,0);
  unnamed_function_61198(param1,local_40,DAT_ram_00565cec);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Euler$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Euler__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Euler_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Euler__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Euler_o *__this,
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
  __this->eulerVector = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Euler$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Euler___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Euler_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

