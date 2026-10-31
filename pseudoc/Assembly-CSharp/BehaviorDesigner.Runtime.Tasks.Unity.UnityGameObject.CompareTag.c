// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.CompareTag
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareTag : Conditional // TypeDefIndex: 6201
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The tag to compare against")]
	public SharedString tag; // 0x30

	// Methods

	// RVA: 0x4180 Offset: 0x4180 VA: 0x4180 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4181 Offset: 0x4181 VA: 0x4181 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4182 Offset: 0x4182 VA: 0x4182
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.CompareTag$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareTag__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareTag_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareTag__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareTag_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param2;
  
  if (DAT_ram_00664e05 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664e05 = '\x01';
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  uVar1 = unnamed_function_51881(__ret,uVar1,0);
  param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  unnamed_function_44655(uVar1,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.CompareTag$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareTag__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareTag_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareTag__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareTag_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664e06 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664e06 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->tag = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.CompareTag$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareTag___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_CompareTag_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

