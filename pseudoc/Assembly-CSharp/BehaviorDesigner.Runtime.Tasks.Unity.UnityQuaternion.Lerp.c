// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Lerp
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Lerp : Action // TypeDefIndex: 6075
{
	// Fields
	[Tooltip("The from rotation")]
	public SharedQuaternion fromQuaternion; // 0x2C
	[Tooltip("The to rotation")]
	public SharedQuaternion toQuaternion; // 0x30
	[Tooltip("The amount to lerp")]
	public SharedFloat amount; // 0x34
	[RequiredField]
	[Tooltip("The stored result")]
	public SharedQuaternion storeResult; // 0x38

	// Methods

	// RVA: 0x3FDA Offset: 0x3FDA VA: 0x3FDA Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FDB Offset: 0x3FDB VA: 0x3FDB Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FDC Offset: 0x3FDC VA: 0x3FDC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Lerp$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Lerp__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Lerp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Lerp__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Lerp_o *__this,
               MethodInfo *method)

{
  float param4;
  undefined4 param1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664d3d == '\0') {
    unnamed_function_1099(&DAT_ram_00565ce8);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565cec);
    DAT_ram_00664d3d = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x38);
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565ce8);
  unnamed_function_61197(&local_20,*(undefined4 *)(__ret + 0x30),DAT_ram_00565ce8);
  param4 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  local_38 = local_8;
  local_48 = local_18;
  local_40 = local_10;
  local_50 = local_20;
  unnamed_function_8662(&local_30,&local_40,&local_50,param4,0);
  local_58 = local_28;
  local_60 = local_30;
  unnamed_function_61198(param1,&local_60,DAT_ram_00565cec);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Lerp$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Lerp__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Lerp_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Lerp__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Lerp_o *__this,
               MethodInfo *method)

{
  Quaternion_o *pQVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar2;
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
  __this->toQuaternion = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  __this->storeResult = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  __this->fromQuaternion = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->amount = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Lerp$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Lerp___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Lerp_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

