// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedVector4
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetSharedVector4 : Action // TypeDefIndex: 6000
{
	// Fields
	[Tooltip("The value to set the SharedVector4 to")]
	public SharedVector4 targetValue; // 0x2C
	[RequiredField]
	[Tooltip("The SharedVector4 to set")]
	public SharedVector4 targetVariable; // 0x30

	// Methods

	// RVA: 0x3EB8 Offset: 0x3EB8 VA: 0x3EB8 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3EB9 Offset: 0x3EB9 VA: 0x3EB9 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3EBA Offset: 0x3EBA VA: 0x3EBA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedVector4$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedVector4__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedVector4_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedVector4__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedVector4_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664cb0 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d48);
    unnamed_function_1099(&DAT_ram_00565d4c);
    DAT_ram_00664cb0 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d48);
  local_18 = local_8;
  local_20 = local_10;
  unnamed_function_61198(param1,&local_20,DAT_ram_00565d4c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedVector4$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedVector4__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedVector4_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector4__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector4_o *__this,
               MethodInfo *method)

{
  Vector4_o *pVVar1;
  Vector4_o local_40;
  Vector4_o local_30;
  Vector4_o local_20;
  Vector4_o local_10;
  
  if (DAT_ram_00662e11 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector4_TypeInfo);
    DAT_ram_00662e11 = '\x01';
  }
  local_30._0_8_ = **(undefined8 **)(UnityEngine_Vector4_TypeInfo + 0x5c);
  local_30._8_8_ = (*(undefined8 **)(UnityEngine_Vector4_TypeInfo + 0x5c))[1];
  local_10._0_8_ = local_30._0_8_;
  local_10._8_8_ = local_30._8_8_;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector4__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->variable = (BehaviorDesigner_Runtime_SharedVector4_o *)pVVar1;
  if (DAT_ram_00662e11 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector4_TypeInfo);
    DAT_ram_00662e11 = '\x01';
  }
  local_40._0_8_ = **(undefined8 **)(UnityEngine_Vector4_TypeInfo + 0x5c);
  local_40._8_8_ = (*(undefined8 **)(UnityEngine_Vector4_TypeInfo + 0x5c))[1];
  local_20._0_8_ = local_40._0_8_;
  local_20._8_8_ = local_40._8_8_;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector4__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->compareTo = (BehaviorDesigner_Runtime_SharedVector4_o *)pVVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SetSharedVector4$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedVector4___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SetSharedVector4_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

