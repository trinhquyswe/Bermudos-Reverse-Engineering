// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatComparison
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class FloatComparison : Conditional // TypeDefIndex: 6146
{
	// Fields
	[Tooltip("The operation to perform")]
	public FloatComparison.Operation operation; // 0x2C
	[Tooltip("The first float")]
	public SharedFloat float1; // 0x30
	[Tooltip("The second float")]
	public SharedFloat float2; // 0x34

	// Methods

	// RVA: 0x40D3 Offset: 0x40D3 VA: 0x40D3 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40D4 Offset: 0x40D4 VA: 0x40D4 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40D5 Offset: 0x40D5 VA: 0x40D5
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatComparison$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatComparison__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatComparison_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatComparison__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatComparison_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664db5 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    DAT_ram_00664db5 = '\x01';
  }
  iVar1 = *(int *)(__ret + 0x2c);
  if (iVar1 == 0) {
    unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
    return;
  }
  if (iVar1 == 1) {
    unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
    return;
  }
  if (iVar1 == 2) {
    unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
    if (DAT_ram_006634ac == '\0') {
      unnamed_function_1099(&UnityEngine_Mathf_TypeInfo);
      DAT_ram_006634ac = '\x01';
    }
    return;
  }
  if (iVar1 == 3) {
    unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
    if (DAT_ram_006634ac == '\0') {
      unnamed_function_1099(&UnityEngine_Mathf_TypeInfo);
      DAT_ram_006634ac = '\x01';
    }
    return;
  }
  if (iVar1 == 4) {
    unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
    return;
  }
  if (iVar1 == 5) {
    unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatComparison$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatComparison__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatComparison_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatComparison__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatComparison_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664db6 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664db6 = '\x01';
  }
  __this->operation = LessThan;
  unnamed_function_61227(__this->float1,0.0,DAT_ram_00565d04);
  unnamed_function_61227(__this->float2,0.0,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatComparison$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatComparison___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatComparison_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

