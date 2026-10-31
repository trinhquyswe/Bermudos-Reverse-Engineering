// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.IsIntPositive
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsIntPositive : Conditional // TypeDefIndex: 6156
{
	// Fields
	[Tooltip("The int to check if positive")]
	public SharedInt intVariable; // 0x2C

	// Methods

	// RVA: 0x40E8 Offset: 0x40E8 VA: 0x40E8 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40E9 Offset: 0x40E9 VA: 0x40E9 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40EA Offset: 0x40EA VA: 0x40EA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IsIntPositive$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_IsIntPositive__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_IsIntPositive_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IsIntPositive__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_IsIntPositive_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664dbe == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    DAT_ram_00664dbe = '\x01';
  }
  unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cb8);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IsIntPositive$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IsIntPositive__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_IsIntPositive_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->intVariable = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IsIntPositive$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IsIntPositive___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_IsIntPositive_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

