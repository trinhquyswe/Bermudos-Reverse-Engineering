// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForceAtPosition
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AddForceAtPosition : Action // TypeDefIndex: 6032
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The amount of force to apply")]
	public SharedVector3 force; // 0x30
	[Tooltip("The position of the force")]
	public SharedVector3 position; // 0x34
	[Tooltip("The type of force")]
	public ForceMode forceMode; // 0x38
	private Rigidbody rigidbody; // 0x3C
	private GameObject prevGameObject; // 0x40

	// Methods

	// RVA: 0x3F35 Offset: 0x3F35 VA: 0x3F35 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3F36 Offset: 0x3F36 VA: 0x3F36 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3F37 Offset: 0x3F37 VA: 0x3F37 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3F38 Offset: 0x3F38 VA: 0x3F38
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForceAtPosition$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Rigidbody_o *pRVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664cee == '\0') {
    unnamed_function_1099(&DAT_ram_00569aec);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664cee = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForceAtPosition$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664cef == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&StringLiteral_6477 /* "Rigidbody is null" */);
    DAT_ram_00664cef = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x3c);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x3c);
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
    unnamed_function_61245(&local_20,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d38);
    local_28 = local_8;
    local_38 = local_18;
    local_30 = local_10;
    local_40 = local_20;
    unnamed_function_15254(uVar2,&local_30,&local_40,*(undefined4 *)(__ret + 0x38),0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6477 /* "Rigidbody is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForceAtPosition$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition_o *__this,
               MethodInfo *method)

{
  Vector3_o *pVVar1;
  Vector3_o local_40;
  Vector3_o local_30;
  Vector3_o local_20;
  Vector3_o local_10;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_30._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_30.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_30._0_8_;
  local_10.z = local_30.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->force = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_40._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_40.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_20._0_8_ = local_40._0_8_;
  local_20.z = local_40.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->forceMode = Force;
  __this->position = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForceAtPosition$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForceAtPosition_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

