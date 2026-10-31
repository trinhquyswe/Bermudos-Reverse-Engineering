// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.GetCenter
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetCenter : Action // TypeDefIndex: 6223
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The center of the CharacterController")]
	[RequiredField]
	public SharedVector3 storeValue; // 0x30
	private CharacterController characterController; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x41C8 Offset: 0x41C8 VA: 0x41C8 Slot: 5
	public override void OnStart() { }

	// RVA: 0x41C9 Offset: 0x41C9 VA: 0x41C9 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x41CA Offset: 0x41CA VA: 0x41CA Slot: 16
	public override void OnReset() { }

	// RVA: 0x41CB Offset: 0x41CB VA: 0x41CB
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.GetCenter$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  CharacterController_o *pCVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664e2a == '\0') {
    unnamed_function_1099(&DAT_ram_00569a80);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664e2a = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.GetCenter$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664e2b == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d3c);
    unnamed_function_1099(&StringLiteral_2634 /* "CharacterController is null" */);
    DAT_ram_00664e2b = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x30);
    unnamed_function_15275(&local_10,*(undefined4 *)(__ret + 0x34),0);
    local_18 = local_8;
    local_20 = local_10;
    unnamed_function_61246(uVar2,&local_20,DAT_ram_00565d3c);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_2634 /* "CharacterController is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.GetCenter$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetAngularVelocity__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetAngularVelocity_o *__this,
               MethodInfo *method)

{
  Vector3_o *pVVar1;
  Vector3_o local_20;
  Vector3_o local_10;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_20._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_20.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_20._0_8_;
  local_10.z = local_20.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->storeValue = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.GetCenter$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_GetCenter_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

