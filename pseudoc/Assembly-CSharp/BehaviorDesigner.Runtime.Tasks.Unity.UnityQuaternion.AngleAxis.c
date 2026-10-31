// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.AngleAxis
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AngleAxis : Action // TypeDefIndex: 6069
{
	// Fields
	[Tooltip("The number of degrees")]
	public SharedFloat degrees; // 0x2C
	[Tooltip("The axis direction")]
	public SharedVector3 axis; // 0x30
	[Tooltip("The stored result")]
	[RequiredField]
	public SharedQuaternion storeResult; // 0x34

	// Methods

	// RVA: 0x3FC8 Offset: 0x3FC8 VA: 0x3FC8 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FC9 Offset: 0x3FC9 VA: 0x3FC9 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FCA Offset: 0x3FCA VA: 0x3FCA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.AngleAxis$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_AngleAxis__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_AngleAxis_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_AngleAxis__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_AngleAxis_o *__this,
               MethodInfo *method)

{
  float param2;
  undefined4 param1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664d37 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565cec);
    DAT_ram_00664d37 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d00);
  unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
  local_28 = local_8;
  local_30 = local_10;
  unnamed_function_8668(&local_20,param2,&local_30,0);
  local_38 = local_18;
  local_40 = local_20;
  unnamed_function_61198(param1,&local_40,DAT_ram_00565cec);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.AngleAxis$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_AngleAxis__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_AngleAxis_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_AngleAxis__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_AngleAxis_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  Vector3_o *pVVar2;
  Quaternion_o *pQVar3;
  Quaternion_o local_40;
  Vector3_o local_30;
  Quaternion_o local_20;
  Vector3_o local_10;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->degrees = pBVar1;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_30._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_30.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_30._0_8_;
  local_10.z = local_30.z;
  pVVar2 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->axis = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar2;
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_40._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_40._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_20._0_8_ = local_40._0_8_;
  local_20._8_8_ = local_40._8_8_;
  pQVar3 = BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->storeResult = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar3;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.AngleAxis$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_AngleAxis___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_AngleAxis_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

