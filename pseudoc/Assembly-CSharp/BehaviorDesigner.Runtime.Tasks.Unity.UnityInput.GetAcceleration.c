// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetAcceleration
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetAcceleration : Action // TypeDefIndex: 6185
{
	// Fields
	[RequiredField]
	[Tooltip("The stored result")]
	public SharedVector3 storeResult; // 0x2C

	// Methods

	// RVA: 0x4150 Offset: 0x4150 VA: 0x4150 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4151 Offset: 0x4151 VA: 0x4151 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4152 Offset: 0x4152 VA: 0x4152
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetAcceleration$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664df2 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d3c);
    DAT_ram_00664df2 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  unnamed_function_12116(&local_10,0);
  local_18 = local_8;
  local_20 = local_10;
  unnamed_function_61246(param1,&local_20,DAT_ram_00565d3c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetAcceleration$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration_o *__this,
               MethodInfo *method)

{
  Vector3_o *pVVar1;
  Vector3_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_20._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_20.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_20._0_8_;
  local_10.z = local_20.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->storeResult = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetAcceleration$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

