// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.IntComparison
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IntComparison : Conditional // TypeDefIndex: 6152
{
	// Fields
	[Tooltip("The operation to perform")]
	public IntComparison.Operation operation; // 0x2C
	[Tooltip("The first integer")]
	public SharedInt integer1; // 0x30
	[Tooltip("The second integer")]
	public SharedInt integer2; // 0x34

	// Methods

	// RVA: 0x40DF Offset: 0x40DF VA: 0x40DF Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40E0 Offset: 0x40E0 VA: 0x40E0 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40E1 Offset: 0x40E1 VA: 0x40E1
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntComparison$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_IntComparison__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntComparison_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntComparison__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_IntComparison_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664dba == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664dba = '\x01';
  }
  iVar1 = *(int *)(__ret + 0x2c);
  if (iVar1 == 0) {
    unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
    return;
  }
  if (iVar1 == 1) {
    unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
    return;
  }
  if (iVar1 == 2) {
    unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
    return;
  }
  if (iVar1 == 3) {
    unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
    return;
  }
  if (iVar1 == 4) {
    unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
    return;
  }
  if (iVar1 == 5) {
    unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntComparison$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntComparison__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntComparison_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntComparison__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntComparison_o *__this,MethodInfo *method
               )

{
  if (DAT_ram_00664dbb == '\0') {
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664dbb = '\x01';
  }
  __this->operation = LessThan;
  unnamed_function_61204(__this->integer1,0,DAT_ram_00565cbc);
  unnamed_function_61204(__this->integer2,0,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntComparison$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntComparison___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntComparison_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

