// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.IntAbs
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IntAbs : Action // TypeDefIndex: 6149
{
	// Fields
	[Tooltip("The int to return the absolute value of")]
	public SharedInt intVariable; // 0x2C

	// Methods

	// RVA: 0x40D9 Offset: 0x40D9 VA: 0x40D9 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40DA Offset: 0x40DA VA: 0x40DA Slot: 16
	public override void OnReset() { }

	// RVA: 0x40DB Offset: 0x40DB VA: 0x40DB
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntAbs$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664db8 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664db8 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  iVar1 = unnamed_function_61203(param1,DAT_ram_00565cb8);
  if (DAT_ram_0065f10a == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0065f10a = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  unnamed_function_61204(param1,iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntAbs$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->intVariable = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntAbs$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntAbs_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

