// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Angle
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Angle : Action // TypeDefIndex: 6068
{
	// Fields
	[Tooltip("The first rotation")]
	public SharedQuaternion firstRotation; // 0x2C
	[Tooltip("The second rotation")]
	public SharedQuaternion secondRotation; // 0x30
	[RequiredField]
	[Tooltip("The stored result")]
	public SharedFloat storeResult; // 0x34

	// Methods

	// RVA: 0x3FC5 Offset: 0x3FC5 VA: 0x3FC5 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FC6 Offset: 0x3FC6 VA: 0x3FC6 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FC7 Offset: 0x3FC7 VA: 0x3FC7
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Angle$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Angle__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Angle_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Angle__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Angle_o *__this,
               MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  float4 fVar4;
  undefined4 param1;
  float fVar5;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  float4 local_4;
  
  if (DAT_ram_00664d36 == '\0') {
    unnamed_function_1099(&DAT_ram_00565ce8);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664d36 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565ce8);
  fVar4 = local_4;
  fVar3 = local_8;
  fVar2 = local_c;
  fVar1 = local_10;
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565ce8);
  fVar5 = ABS((float)fVar1 * (float)local_10 + (float)fVar2 * (float)local_c +
              (float)fVar3 * (float)local_8 + (float)fVar4 * (float)local_4);
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  if (0.999999 < fVar5) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = unnamed_function_8251(fVar5);
    fVar5 = (fVar5 + fVar5) * 57.29578;
  }
  unnamed_function_61227(param1,fVar5,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Angle$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Angle__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Angle_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Angle__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Angle_o *__this,
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
  __this->firstRotation = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  __this->secondRotation = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->storeResult = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Angle$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Angle___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Angle_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

