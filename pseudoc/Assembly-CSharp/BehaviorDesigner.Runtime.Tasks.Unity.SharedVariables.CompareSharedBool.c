// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedBool
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareSharedBool : Conditional // TypeDefIndex: 5969
{
	// Fields
	[Tooltip("The first variable to compare")]
	public SharedBool variable; // 0x2C
	[Tooltip("The variable to compare to")]
	public SharedBool compareTo; // 0x30

	// Methods

	// RVA: 0x3E5B Offset: 0x3E5B VA: 0x3E5B Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E5C Offset: 0x3E5C VA: 0x3E5C Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E5D Offset: 0x3E5D VA: 0x3E5D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedBool$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedBool__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedBool_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedBool__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedBool_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined1 local_1;
  
  if (DAT_ram_00664c8d == '\0') {
    unnamed_function_1099(&bool_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    DAT_ram_00664c8d = '\x01';
  }
  uVar1 = unnamed_function_61191(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c78);
  local_1 = (undefined1)uVar1;
  uVar1 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
  if (*(int *)(bool_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(bool_TypeInfo);
  }
  unnamed_function_82782(&local_1,uVar1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedBool$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedBool__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedBool_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedBool__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedBool_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar1[4].monitor = 0;
  __this->variable = pBVar1;
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar1[4].monitor = 0;
  __this->compareTo = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedBool$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedBool___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedBool_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

