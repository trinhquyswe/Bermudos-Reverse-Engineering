// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector4
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareSharedVector4 : Conditional // TypeDefIndex: 5984
{
	// Fields
	[Tooltip("The first variable to compare")]
	public SharedVector4 variable; // 0x2C
	[Tooltip("The variable to compare to")]
	public SharedVector4 compareTo; // 0x30

	// Methods

	// RVA: 0x3E88 Offset: 0x3E88 VA: 0x3E88 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E89 Offset: 0x3E89 VA: 0x3E89 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E8A Offset: 0x3E8A VA: 0x3E8A
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector4$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector4__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector4_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector4__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector4_o *__this,
               MethodInfo *method)

{
  float4 local_10;
  float4 local_c;
  float4 local_8;
  float4 local_4;
  
  if (DAT_ram_00664c9f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d48);
    DAT_ram_00664c9f = '\x01';
  }
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d48);
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d48);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector4$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector4__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector4_o* __this, const MethodInfo* method);

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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector4$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector4___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector4_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

