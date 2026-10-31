// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.GetRotation
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetRotation : Action // TypeDefIndex: 6044
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The rotation of the Rigidbody")]
	[RequiredField]
	public SharedQuaternion storeValue; // 0x30
	private Rigidbody rigidbody; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x3F65 Offset: 0x3F65 VA: 0x3F65 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3F66 Offset: 0x3F66 VA: 0x3F66 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3F67 Offset: 0x3F67 VA: 0x3F67 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3F68 Offset: 0x3F68 VA: 0x3F68
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.GetRotation$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Rigidbody_o *pRVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664d06 == '\0') {
    unnamed_function_1099(&DAT_ram_00569aec);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664d06 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pRVar2 = (Rigidbody_o *)unnamed_function_73836(param1,DAT_ram_00569aec);
    __this->prevGameObject = param1;
    __this->rigidbody = pRVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.GetRotation$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664d07 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565cec);
    unnamed_function_1099(&StringLiteral_6477 /* "Rigidbody is null" */);
    DAT_ram_00664d07 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x30);
    unnamed_function_15242(&local_10,*(undefined4 *)(__ret + 0x34),0);
    local_18 = local_8;
    local_20 = local_10;
    unnamed_function_61198(uVar2,&local_20,DAT_ram_00565cec);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6477 /* "Rigidbody is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.GetRotation$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation_o *__this,
               MethodInfo *method)

{
  Quaternion_o *pQVar1;
  Quaternion_o local_20;
  Quaternion_o local_10;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_20._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_20._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_10._0_8_ = local_20._0_8_;
  local_10._8_8_ = local_20._8_8_;
  pQVar1 = BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->storeValue = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.GetRotation$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_GetRotation_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

