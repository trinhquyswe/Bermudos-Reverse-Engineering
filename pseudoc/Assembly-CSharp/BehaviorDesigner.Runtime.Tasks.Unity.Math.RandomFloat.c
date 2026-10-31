// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomFloat
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class RandomFloat : Action // TypeDefIndex: 6160
{
	// Fields
	[Tooltip("The minimum amount")]
	public SharedFloat min; // 0x2C
	[Tooltip("The maximum amount")]
	public SharedFloat max; // 0x30
	[Tooltip("Is the maximum value inclusive?")]
	public bool inclusive; // 0x34
	[Tooltip("The variable to store the result")]
	public SharedFloat storeResult; // 0x38

	// Methods

	// RVA: 0x40F3 Offset: 0x40F3 VA: 0x40F3 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40F4 Offset: 0x40F4 VA: 0x40F4 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40F5 Offset: 0x40F5 VA: 0x40F5
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomFloat$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomFloat__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomFloat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomFloat__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomFloat_o *__this,MethodInfo *method)

{
  char cVar1;
  float param1;
  float fVar2;
  undefined4 param1_00;
  
  if (DAT_ram_00664dc2 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664dc2 = '\x01';
  }
  cVar1 = *(char *)(__ret + 0x34);
  param1_00 = *(undefined4 *)(__ret + 0x38);
  param1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d00);
  fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  if (cVar1 == '\0') {
    fVar2 = fVar2 + -1e-05;
  }
  fVar2 = unnamed_function_44583(param1,fVar2,0);
  unnamed_function_61227(param1_00,fVar2,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomFloat$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomFloat__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomFloat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomFloat__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomFloat_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  if (DAT_ram_00664dc3 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664dc3 = '\x01';
  }
  unnamed_function_61227(__this->min,0.0,DAT_ram_00565d04);
  unnamed_function_61227(__this->max,0.0,DAT_ram_00565d04);
  __this->inclusive = false;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.RandomFloat$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomFloat___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_RandomFloat_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

