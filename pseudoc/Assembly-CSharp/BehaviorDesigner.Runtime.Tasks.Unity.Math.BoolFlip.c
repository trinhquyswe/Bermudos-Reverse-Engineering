// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolFlip
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class BoolFlip : Action // TypeDefIndex: 6140
{
	// Fields
	[Tooltip("The bool to flip the value of")]
	public SharedBool boolVariable; // 0x2C

	// Methods

	// RVA: 0x40C7 Offset: 0x40C7 VA: 0x40C7 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40C8 Offset: 0x40C8 VA: 0x40C8 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40C9 Offset: 0x40C9 VA: 0x40C9
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolFlip$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolFlip__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolFlip_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolFlip__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolFlip_o *__this,MethodInfo *method)

{
  uint uVar1;
  undefined4 param1;
  
  if (DAT_ram_00664db0 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664db0 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  uVar1 = unnamed_function_61191(param1,DAT_ram_00565c78);
  unnamed_function_61192(param1,uVar1 ^ 1,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolFlip$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolFlip__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolFlip_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolFlip__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolFlip_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664db1 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664db1 = '\x01';
  }
  unnamed_function_61192(__this->boolVariable,0,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolFlip$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolFlip___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolFlip_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

