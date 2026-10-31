// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetAxisRaw
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetAxisRaw : Action // TypeDefIndex: 6187
{
	// Fields
	[Tooltip("The name of the axis")]
	public SharedString axisName; // 0x2C
	[Tooltip("Axis values are in the range -1 to 1. Use the multiplier to set a larger range")]
	public SharedFloat multiplier; // 0x30
	[Tooltip("The stored result")]
	[RequiredField]
	public SharedFloat storeResult; // 0x34

	// Methods

	// RVA: 0x4156 Offset: 0x4156 VA: 0x4156 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4157 Offset: 0x4157 VA: 0x4157 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4158 Offset: 0x4158 VA: 0x4158
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetAxisRaw$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAxisRaw__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAxisRaw_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAxisRaw__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAxisRaw_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  float param2;
  int iVar1;
  float fVar2;
  
  if (DAT_ram_00664df5 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664df5 = '\x01';
  }
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  param2 = unnamed_function_12085(param1,0);
  iVar1 = unnamed_function_51865(*(undefined4 *)(__ret + 0x30),0);
  if (iVar1 == 0) {
    fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    param2 = param2 * fVar2;
  }
  unnamed_function_61227(*(undefined4 *)(__ret + 0x34),param2,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetAxisRaw$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAxisRaw__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAxisRaw_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAxisRaw__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAxisRaw_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar2;
  
  if (DAT_ram_00664df6 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664df6 = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->axisName = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(1.0,(MethodInfo *)0x0);
  __this->multiplier = pBVar2;
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->storeResult = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityInput.GetAxisRaw$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAxisRaw___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAxisRaw_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

