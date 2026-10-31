// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.IsGrounded
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsGrounded : Conditional // TypeDefIndex: 6230
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	private CharacterController characterController; // 0x30
	private GameObject prevGameObject; // 0x34

	// Methods

	// RVA: 0x41E5 Offset: 0x41E5 VA: 0x41E5 Slot: 5
	public override void OnStart() { }

	// RVA: 0x41E6 Offset: 0x41E6 VA: 0x41E6 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x41E7 Offset: 0x41E7 VA: 0x41E7 Slot: 16
	public override void OnReset() { }

	// RVA: 0x41E8 Offset: 0x41E8 VA: 0x41E8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.IsGrounded$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  CharacterController_o *pCVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664e39 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a80);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664e39 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pCVar2 = (CharacterController_o *)unnamed_function_73836(param1,DAT_ram_00569a80);
    __this->prevGameObject = param1;
    __this->characterController = pCVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.IsGrounded$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664e3a == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_2634 /* "CharacterController is null" */);
    DAT_ram_00664e3a = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 == 0) {
    unnamed_function_15270(*(undefined4 *)(__ret + 0x30),0);
    return;
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52416(StringLiteral_2634 /* "CharacterController is null" */,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.IsGrounded$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused_o *__this,MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.IsGrounded$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_IsGrounded_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

