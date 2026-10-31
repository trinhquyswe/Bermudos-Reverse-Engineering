// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetAngleToTarget
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetAngleToTarget : Action // TypeDefIndex: 5915
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The target object to measure the angle to. If null the targetPosition will be used.")]
	public SharedGameObject targetObject; // 0x30
	[Tooltip("The world position to measure an angle to. If the targetObject is also not null, this value is used as an offset from that object's position.")]
	public SharedVector3 targetPosition; // 0x34
	[Tooltip("Ignore height differences when calculating the angle?")]
	public SharedBool ignoreHeight; // 0x38
	[RequiredField]
	[Tooltip("The angle to the target")]
	public SharedFloat storeValue; // 0x3C
	private Transform targetTransform; // 0x40
	private GameObject prevGameObject; // 0x44

	// Methods

	// RVA: 0x3D90 Offset: 0x3D90 VA: 0x3D90 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3D91 Offset: 0x3D91 VA: 0x3D91 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D92 Offset: 0x3D92 VA: 0x3D92 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D93 Offset: 0x3D93 VA: 0x3D93
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetAngleToTarget$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  RuleTile_TilingRuleOutput_Transform RVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664c26 == '\0') {
    unnamed_function_1099(&DAT_ram_00569b30);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664c26 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetAngleToTarget$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget_o *__this,
               MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  int iVar4;
  double dVar5;
  undefined4 uVar6;
  float4 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float4 local_10;
  undefined1 local_30 [8];
  float4 local_28;
  float4 local_20;
  float4 local_1c;
  float4 local_18;
  float4 local_8;
  
  if (DAT_ram_00664c27 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d04);
    unnamed_function_1099(&StringLiteral_8077 /* "Transform is null" */);
    DAT_ram_00664c27 = '\x01';
  }
  uVar6 = *(undefined4 *)(__ret + 0x40);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar4 = unnamed_function_44710(uVar6,0,0);
  if (iVar4 == 0) {
    uVar6 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c9c);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar4 = unnamed_function_44679(uVar6,0,0);
    if (iVar4 == 0) {
      unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d38);
      fVar9 = (float)local_10;
      fVar3 = local_10;
      fVar7 = local_8;
    }
    else {
      uVar6 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c9c);
      uVar6 = unnamed_function_44683(uVar6,0);
      unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d38);
      local_28 = local_8;
      unnamed_function_45006(&local_20,uVar6,local_30,0);
      fVar9 = (float)local_1c;
      fVar3 = local_20;
      fVar7 = local_18;
    }
    iVar4 = unnamed_function_61191(*(undefined4 *)(__ret + 0x38),DAT_ram_00565c78);
    if (iVar4 != 0) {
      unnamed_function_44960(&local_10,*(undefined4 *)(__ret + 0x40),0);
      fVar9 = (float)local_10;
    }
    unnamed_function_44960(&local_10,*(undefined4 *)(__ret + 0x40),0);
    fVar2 = local_8;
    fVar10 = (float)local_10;
    fVar1 = local_10;
    uVar6 = *(undefined4 *)(__ret + 0x3c);
    unnamed_function_44976(&local_10,*(undefined4 *)(__ret + 0x40),0);
    fVar8 = (float)fVar7 - (float)fVar2;
    fVar9 = fVar9 - fVar10;
    fVar10 = (float)fVar3 - (float)fVar1;
    if (DAT_ram_0065a9c2 == '\0') {
      unnamed_function_1099(&System_Math_TypeInfo);
      DAT_ram_0065a9c2 = '\x01';
    }
    if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_Math_TypeInfo);
    }
    fVar11 = SQRT((fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) *
                  ((float)local_10 * (float)local_10 + (float)local_10 * (float)local_10 +
                  (float)local_8 * (float)local_8));
    if (fVar11 < 1e-15) {
      fVar9 = 0.0;
    }
    else {
      fVar11 = (fVar10 * (float)local_10 + fVar9 * (float)local_10 + fVar8 * (float)local_8) /
               fVar11;
      fVar9 = fVar11;
      if (1.0 <= fVar11) {
        fVar9 = 1.0;
      }
      fVar10 = -1.0;
      if (-1.0 <= fVar11) {
        fVar10 = fVar9;
      }
      if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(System_Math_TypeInfo);
      }
      dVar5 = unnamed_function_8249((double)fVar10);
      fVar9 = (float)dVar5 * 57.29578;
    }
    unnamed_function_61227(uVar6,fVar9,DAT_ram_00565d04);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_8077 /* "Transform is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetAngleToTarget$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector3_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  BehaviorDesigner_Runtime_SharedFloat_o *param1;
  void *pvVar3;
  undefined8 uVar4;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->targetObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  pvVar3 = *(void **)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  uVar4 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
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
  pBVar1[5].monitor = pvVar3;
  *(undefined8 *)&pBVar1[4].monitor = uVar4;
  __this->targetPosition = pBVar1;
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar2[4].monitor = 1;
  __this->ignoreHeight = pBVar2;
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  param1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(param1,0.0,DAT_ram_00565d04);
  __this->storeValue = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetAngleToTarget$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetAngleToTarget_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar1[4].monitor = 1;
  __this->ignoreHeight = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

