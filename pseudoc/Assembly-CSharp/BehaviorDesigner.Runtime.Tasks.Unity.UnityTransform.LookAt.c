// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.LookAt
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class LookAt : Action // TypeDefIndex: 5930
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The GameObject to look at. If null the world position will be used.")]
	public SharedGameObject targetLookAt; // 0x30
	[Tooltip("Point to look at")]
	public SharedVector3 worldPosition; // 0x34
	[Tooltip("Vector specifying the upward direction")]
	public Vector3 worldUp; // 0x38
	private Transform targetTransform; // 0x44
	private GameObject prevGameObject; // 0x48

	// Methods

	// RVA: 0x3DCC Offset: 0x3DCC VA: 0x3DCC Slot: 5
	public override void OnStart() { }

	// RVA: 0x3DCD Offset: 0x3DCD VA: 0x3DCD Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3DCE Offset: 0x3DCE VA: 0x3DCE Slot: 16
	public override void OnReset() { }

	// RVA: 0x3DCF Offset: 0x3DCF VA: 0x3DCF
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.LookAt$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  RuleTile_TilingRuleOutput_Transform RVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664c44 == '\0') {
    unnamed_function_1099(&DAT_ram_00569b30);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664c44 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    RVar2 = unnamed_function_73836(param1,DAT_ram_00569b30);
    __this->prevGameObject = param1;
    __this->targetTransform = RVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.LookAt$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664c45 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&StringLiteral_8077 /* "Transform is null" */);
    DAT_ram_00664c45 = '\x01';
  }
  uVar3 = *(undefined4 *)(__ret + 0x44);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar3,0,0);
  if (iVar1 == 0) {
    uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c9c);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar1 = unnamed_function_44679(uVar3,0,0);
    uVar3 = *(undefined4 *)(__ret + 0x44);
    if (iVar1 == 0) {
      unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d38);
      local_18 = local_8;
      local_20 = local_10;
      local_28 = *(undefined4 *)(__ret + 0x40);
      local_30 = *(undefined8 *)(__ret + 0x38);
      unnamed_function_44999(uVar3,&local_20,&local_30,0);
    }
    else {
      uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c9c);
      uVar2 = unnamed_function_44683(uVar2,0);
      unnamed_function_44998(uVar3,uVar2,0);
    }
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_8077 /* "Transform is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.LookAt$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector3_o *pBVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->targetLookAt = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_0066482b == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_0066482b = '\x01';
  }
  pvVar2 = *(void **)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x20);
  uVar3 = *(undefined8 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x18);
  if (DAT_ram_00664b98 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
    DAT_ram_00664b98 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector3_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
  if (DAT_ram_00664b99 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d34);
    DAT_ram_00664b99 = '\x01';
  }
  pBVar1[5].monitor = pvVar2;
  *(undefined8 *)&pBVar1[4].monitor = uVar3;
  __this->worldPosition = pBVar1;
  if (DAT_ram_0066482b == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_0066482b = '\x01';
  }
  uVar3 = *(undefined8 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x18);
  (__this->worldUp).z = *(float *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x20);
  (__this->worldUp).x = (float)(int)uVar3;
  (__this->worldUp).y = (float)(int)((ulonglong)uVar3 >> 0x20);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.LookAt$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_LookAt_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

