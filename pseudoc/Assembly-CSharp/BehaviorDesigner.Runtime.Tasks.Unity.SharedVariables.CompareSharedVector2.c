// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector2
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareSharedVector2 : Conditional // TypeDefIndex: 5982
{
	// Fields
	[Tooltip("The first variable to compare")]
	public SharedVector2 variable; // 0x2C
	[Tooltip("The variable to compare to")]
	public SharedVector2 compareTo; // 0x30

	// Methods

	// RVA: 0x3E82 Offset: 0x3E82 VA: 0x3E82 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E83 Offset: 0x3E83 VA: 0x3E83 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E84 Offset: 0x3E84 VA: 0x3E84
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector2$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector2__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector2_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector2__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector2_o *__this,
               MethodInfo *method)

{
  float4 local_8;
  float4 local_4;
  
  if (DAT_ram_00664c9d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d28);
    DAT_ram_00664c9d = '\x01';
  }
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d28);
  unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d28);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector2$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector2__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector2_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector2__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector2_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar1;
  Vector2_o local_20;
  Vector2_o local_18;
  Vector2_o local_10;
  Vector2_o local_8;
  
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  local_18 = **(Vector2_o **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  local_8 = local_18;
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           BehaviorDesigner_Runtime_SharedVector2__op_Implicit(&local_18,(MethodInfo *)0x0);
  __this->variable = pBVar1;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  local_20 = **(Vector2_o **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  local_10 = local_20;
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           BehaviorDesigner_Runtime_SharedVector2__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->compareTo = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedVector2$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector2___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedVector2_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

