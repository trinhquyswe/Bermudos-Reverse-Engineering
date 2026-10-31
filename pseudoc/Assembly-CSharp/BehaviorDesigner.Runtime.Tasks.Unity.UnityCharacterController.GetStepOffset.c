// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.GetStepOffset
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetStepOffset : Action // TypeDefIndex: 6227
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[RequiredField]
	[Tooltip("The step offset of the CharacterController")]
	public SharedFloat storeValue; // 0x30
	private CharacterController characterController; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x41D8 Offset: 0x41D8 VA: 0x41D8 Slot: 5
	public override void OnStart() { }

	// RVA: 0x41D9 Offset: 0x41D9 VA: 0x41D9 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x41DA Offset: 0x41DA VA: 0x41DA Slot: 16
	public override void OnReset() { }

	// RVA: 0x41DB Offset: 0x41DB VA: 0x41DB
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.GetStepOffset$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset_o
                *__this,MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  CharacterController_o *pCVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664e32 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a80);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664e32 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.GetStepOffset$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset_o *__this
               ,MethodInfo *method)

{
  int iVar1;
  float param2;
  undefined4 uVar2;
  
  if (DAT_ram_00664e33 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    unnamed_function_1099(&StringLiteral_2634 /* "CharacterController is null" */);
    DAT_ram_00664e33 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_2634 /* "CharacterController is null" */,0);
    return;
  }
  uVar2 = *(undefined4 *)(__ret + 0x30);
  param2 = unnamed_function_15280(*(undefined4 *)(__ret + 0x34),0);
  unnamed_function_61227(uVar2,param2,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.GetStepOffset$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_AddTorque__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_AddTorque_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->torque = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.GetStepOffset$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetStepOffset_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

