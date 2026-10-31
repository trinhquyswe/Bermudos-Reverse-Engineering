// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedFloat
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareSharedFloat : Conditional // TypeDefIndex: 5971
{
	// Fields
	[Tooltip("The first variable to compare")]
	public SharedFloat variable; // 0x2C
	[Tooltip("The variable to compare to")]
	public SharedFloat compareTo; // 0x30

	// Methods

	// RVA: 0x3E61 Offset: 0x3E61 VA: 0x3E61 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E62 Offset: 0x3E62 VA: 0x3E62 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E63 Offset: 0x3E63 VA: 0x3E63
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedFloat$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedFloat__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedFloat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedFloat__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedFloat_o *__this,
               MethodInfo *method)

{
  float param2;
  float4 local_4;
  
  if (DAT_ram_00664c8f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    DAT_ram_00664c8f = '\x01';
  }
  local_4 = (float4)unnamed_function_61226(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d00);
  param2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  unnamed_function_84031(&local_4,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedFloat$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedFloat__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedFloat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedFloat__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedFloat_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar1,0.0,DAT_ram_00565d04);
  __this->variable = pBVar1;
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar1,0.0,DAT_ram_00565d04);
  __this->compareTo = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedFloat$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedFloat___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedFloat_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

