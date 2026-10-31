// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.GetTag
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetTag : Action // TypeDefIndex: 6208
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("Active state of the GameObject")]
	[RequiredField]
	public SharedString storeValue; // 0x30

	// Methods

	// RVA: 0x4195 Offset: 0x4195 VA: 0x4195 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4196 Offset: 0x4196 VA: 0x4196 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4197 Offset: 0x4197 VA: 0x4197
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.GetTag$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetTag__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetTag_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetTag__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetTag_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  
  if (DAT_ram_00664e10 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664e10 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  uVar1 = unnamed_function_51881(__ret,uVar1,0);
  uVar1 = unnamed_function_44689(uVar1,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565d10);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.GetTag$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetTag__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetTag_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetTag__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetTag_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664e11 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664e11 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->storeValue = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.GetTag$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetTag___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_GetTag_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

