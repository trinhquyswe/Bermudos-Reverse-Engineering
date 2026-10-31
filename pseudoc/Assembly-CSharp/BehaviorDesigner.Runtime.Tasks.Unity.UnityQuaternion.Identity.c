// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Identity
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Identity : Action // TypeDefIndex: 6073
{
	// Fields
	[RequiredField]
	[Tooltip("The identity")]
	public SharedQuaternion storeResult; // 0x2C

	// Methods

	// RVA: 0x3FD4 Offset: 0x3FD4 VA: 0x3FD4 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FD5 Offset: 0x3FD5 VA: 0x3FD5 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FD6 Offset: 0x3FD6 VA: 0x3FD6
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Identity$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Identity__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Identity_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Identity__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Identity_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664d3b == '\0') {
    unnamed_function_1099(&DAT_ram_00565cec);
    DAT_ram_00664d3b = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_8 = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_10 = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  unnamed_function_61198(param1,&local_10,DAT_ram_00565cec);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Identity$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Identity__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Identity_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Identity__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Identity_o *__this,
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
  __this->storeResult = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion.Identity$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Identity___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityQuaternion_Identity_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

