// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.RotateTowards
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class RotateTowards : Action // TypeDefIndex: 6077
{
	// Fields
	[Tooltip("The from rotation")]
	public SharedQuaternion fromQuaternion; // 0x2C
	[Tooltip("The to rotation")]
	public SharedQuaternion toQuaternion; // 0x30
	[Tooltip("The maximum degrees delta")]
	public SharedFloat maxDeltaDegrees; // 0x34
	[Tooltip("The stored result")]
	[RequiredField]
	public SharedQuaternion storeResult; // 0x38

	// Methods

	// RVA: 0x3FE0 Offset: 0x3FE0 VA: 0x3FE0 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FE1 Offset: 0x3FE1 VA: 0x3FE1 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FE2 Offset: 0x3FE2 VA: 0x3FE2
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.RotateTowards$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_RotateTowards__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_RotateTowards_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_RotateTowards__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_RotateTowards_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 param1;
  float fVar6;
  float4 local_20;
  float4 local_30;
  float4 local_18;
  float4 local_28;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664d3f == '\0') {
    unnamed_function_1099(&DAT_ram_00565ce8);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565cec);
    DAT_ram_00664d3f = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x38);
  unnamed_function_61197(&local_40,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565ce8);
  unnamed_function_61197(&local_50,*(undefined4 *)(__ret + 0x30),DAT_ram_00565ce8);
  fVar5 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  _local_28 = local_38;
  uVar2 = _local_28;
  _local_18 = local_48;
  uVar4 = _local_18;
  _local_30 = local_40;
  uVar1 = _local_30;
  _local_20 = local_50;
  uVar3 = _local_20;
  local_8 = 0;
  local_10 = 0;
  local_30 = (float4)local_40;
  local_20 = (float4)local_50;
  local_30 = (float4)((ulonglong)local_40 >> 0x20);
  local_20 = (float4)((ulonglong)local_50 >> 0x20);
  local_28 = (float4)local_38;
  local_18 = (float4)local_48;
  local_28 = (float4)((ulonglong)local_38 >> 0x20);
  local_18 = (float4)((ulonglong)local_48 >> 0x20);
  fVar6 = ABS((float)local_30 * (float)local_20 + (float)local_30 * (float)local_20 +
              (float)local_28 * (float)local_18 + (float)local_28 * (float)local_18);
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  _local_30 = uVar1;
  _local_28 = uVar2;
  _local_20 = uVar3;
  _local_18 = uVar4;
  if (fVar6 <= 0.999999) {
    fVar6 = unnamed_function_8251(fVar6);
    fVar6 = (fVar6 + fVar6) * 57.29578;
    if (fVar6 != 0.0) {
      local_68 = local_38;
      local_78 = local_48;
      local_70 = local_40;
      local_80 = local_50;
      fVar5 = fVar5 / fVar6;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      unnamed_function_8660(&local_10,&local_70,&local_80,fVar5,0);
      goto code_r0x81a768a2;
    }
  }
  local_8 = local_48;
  local_10 = local_50;
code_r0x81a768a2:
  local_58 = local_8;
  local_88 = local_8;
  local_60 = local_10;
  local_90 = local_10;
  unnamed_function_61198(param1,&local_90,DAT_ram_00565cec);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.RotateTowards$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_RotateTowards__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_RotateTowards_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.RotateTowards$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_RotateTowards___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_RotateTowards_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

