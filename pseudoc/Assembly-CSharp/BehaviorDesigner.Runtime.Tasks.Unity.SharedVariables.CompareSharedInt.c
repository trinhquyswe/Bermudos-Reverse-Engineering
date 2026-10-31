// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedInt
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareSharedInt : Conditional // TypeDefIndex: 5974
{
	// Fields
	[Tooltip("The first variable to compare")]
	public SharedInt variable; // 0x2C
	[Tooltip("The variable to compare to")]
	public SharedInt compareTo; // 0x30

	// Methods

	// RVA: 0x3E6A Offset: 0x3E6A VA: 0x3E6A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E6B Offset: 0x3E6B VA: 0x3E6B Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E6C Offset: 0x3E6C VA: 0x3E6C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedInt$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedInt__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedInt__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedInt_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  undefined4 local_4;
  
  if (DAT_ram_00664c92 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664c92 = '\x01';
  }
  local_4 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cb8);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
  unnamed_function_7262(&local_4,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedInt$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedInt__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedInt__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedInt_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  if (DAT_ram_00664b7e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedInt_TypeInfo);
    DAT_ram_00664b7e = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedInt_TypeInfo);
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  pBVar1[4].monitor = (void *)0x0;
  __this->variable = pBVar1;
  if (DAT_ram_00664b7e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedInt_TypeInfo);
    DAT_ram_00664b7e = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedInt_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedInt_TypeInfo);
  if (DAT_ram_00664b7f == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb4);
    DAT_ram_00664b7f = '\x01';
  }
  pBVar1[4].monitor = (void *)0x0;
  __this->compareTo = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedInt$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedInt___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedInt_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

