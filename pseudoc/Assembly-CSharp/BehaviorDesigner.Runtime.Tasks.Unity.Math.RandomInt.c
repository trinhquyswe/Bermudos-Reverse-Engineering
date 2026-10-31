// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomInt
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class RandomInt : Action // TypeDefIndex: 6161
{
	// Fields
	[Tooltip("The minimum amount")]
	public SharedInt min; // 0x2C
	[Tooltip("The maximum amount")]
	public SharedInt max; // 0x30
	[Tooltip("Is the maximum value inclusive?")]
	public bool inclusive; // 0x34
	[Tooltip("The variable to store the result")]
	public SharedInt storeResult; // 0x38

	// Methods

	// RVA: 0x40F6 Offset: 0x40F6 VA: 0x40F6 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40F7 Offset: 0x40F7 VA: 0x40F7 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40F8 Offset: 0x40F8 VA: 0x40F8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomInt$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomInt__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomInt__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomInt_o *__this,MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 param1;
  
  if (DAT_ram_00664dc4 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664dc4 = '\x01';
  }
  bVar1 = *(byte *)(__ret + 0x34);
  param1 = *(undefined4 *)(__ret + 0x38);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cb8);
  iVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
  uVar2 = unnamed_function_44584(uVar2,iVar3 + (uint)bVar1,0);
  unnamed_function_61204(param1,uVar2,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomInt$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomInt__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomInt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomInt__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomInt_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  if (DAT_ram_00664dc5 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664dc5 = '\x01';
  }
  unnamed_function_61204(__this->min,0,DAT_ram_00565cbc);
  unnamed_function_61204(__this->max,0,DAT_ram_00565cbc);
  __this->inclusive = false;
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomInt$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomInt___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomInt_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

