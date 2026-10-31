// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetStringToHash
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetStringToHash : Action // TypeDefIndex: 6300
{
	// Fields
	[Tooltip("The name of the state to convert to a hash code")]
	public SharedString stateName; // 0x2C
	[RequiredField]
	[Tooltip("The hash value")]
	public SharedInt storeValue; // 0x30

	// Methods

	// RVA: 0x42FA Offset: 0x42FA VA: 0x42FA Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x42FB Offset: 0x42FB VA: 0x42FB Slot: 16
	public override void OnReset() { }

	// RVA: 0x42FC Offset: 0x42FC VA: 0x42FC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetStringToHash$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetStringToHash__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetStringToHash_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetStringToHash__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetStringToHash_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  
  if (DAT_ram_00664eca == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664eca = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  uVar1 = unnamed_function_45407(uVar1,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetStringToHash$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetStringToHash__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetStringToHash_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetStringToHash__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetStringToHash_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedInt_o *pBVar2;
  
  if (DAT_ram_00664ecb == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664ecb = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->stateName = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->storeValue = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetStringToHash$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetStringToHash___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetStringToHash_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

