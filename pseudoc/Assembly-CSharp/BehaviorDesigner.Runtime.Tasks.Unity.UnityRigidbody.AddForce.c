// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForce
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AddForce : Action // TypeDefIndex: 6031
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The amount of force to apply")]
	public SharedVector3 force; // 0x30
	[Tooltip("The type of force")]
	public ForceMode forceMode; // 0x34
	private Rigidbody rigidbody; // 0x38
	private GameObject prevGameObject; // 0x3C

	// Methods

	// RVA: 0x3F31 Offset: 0x3F31 VA: 0x3F31 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3F32 Offset: 0x3F32 VA: 0x3F32 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3F33 Offset: 0x3F33 VA: 0x3F33 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3F34 Offset: 0x3F34 VA: 0x3F34
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForce$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Rigidbody_o *pRVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664ceb == '\0') {
    unnamed_function_1099(&DAT_ram_00569aec);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664ceb = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForce$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664cec == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&StringLiteral_6477 /* "Rigidbody is null" */);
    DAT_ram_00664cec = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x38);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x38);
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
    local_18 = local_8;
    local_20 = local_10;
    unnamed_function_15250(uVar2,&local_20,*(undefined4 *)(__ret + 0x34),0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6477 /* "Rigidbody is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForce$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector3_o *param1;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664ced == '\0') {
    unnamed_function_1099(&DAT_ram_00565d3c);
    DAT_ram_00664ced = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  param1 = __this->force;
  if (param1 != (BehaviorDesigner_Runtime_SharedVector3_o *)0x0) {
    if (DAT_ram_00664829 == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_00664829 = '\x01';
    }
    local_8 = *(undefined4 *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
    local_10 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
    unnamed_function_61246(param1,&local_10,DAT_ram_00565d3c);
  }
  __this->forceMode = Force;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody.AddForce$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody_AddForce_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

