// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomBool
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class RandomBool : Action // TypeDefIndex: 6159
{
	// Fields
	[Tooltip("The variable to store the result")]
	public SharedBool storeResult; // 0x2C

	// Methods

	// RVA: 0x40F1 Offset: 0x40F1 VA: 0x40F1 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40F2 Offset: 0x40F2 VA: 0x40F2
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomBool$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomBool__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomBool_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomBool__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomBool_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 param1;
  
  if (DAT_ram_00664dc1 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664dc1 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  fVar1 = unnamed_function_44585(0);
  unnamed_function_61192(param1,(uint)(fVar1 < 0.5),DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomBool$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomBool___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomBool_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

