// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetRotation
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetRotation : Action // TypeDefIndex: 5927
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The rotation of the Transform")]
	[RequiredField]
	public SharedQuaternion storeValue; // 0x30
	private Transform targetTransform; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x3DC0 Offset: 0x3DC0 VA: 0x3DC0 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3DC1 Offset: 0x3DC1 VA: 0x3DC1 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3DC2 Offset: 0x3DC2 VA: 0x3DC2 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3DC3 Offset: 0x3DC3 VA: 0x3DC3
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetRotation$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  RuleTile_TilingRuleOutput_Transform RVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664c3e == '\0') {
    unnamed_function_1099(&DAT_ram_00569b30);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664c3e = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetRotation$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664c3f == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565cec);
    unnamed_function_1099(&StringLiteral_8077 /* "Transform is null" */);
    DAT_ram_00664c3f = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x30);
    unnamed_function_44965(&local_10,*(undefined4 *)(__ret + 0x34),0);
    local_18 = local_8;
    local_20 = local_10;
    unnamed_function_61198(uVar2,&local_20,DAT_ram_00565cec);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_8077 /* "Transform is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetRotation$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetLocalRotation__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetLocalRotation_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedQuaternion_o *pBVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  uVar2 = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  uVar3 = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  if (DAT_ram_00664b88 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedQuaternion_TypeInfo);
    DAT_ram_00664b88 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedQuaternion_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedQuaternion_TypeInfo);
  if (DAT_ram_00664b89 == '\0') {
    unnamed_function_1099(&DAT_ram_00565ce4);
    DAT_ram_00664b89 = '\x01';
  }
  *(undefined8 *)&pBVar1[5].monitor = uVar2;
  *(undefined8 *)&pBVar1[4].monitor = uVar3;
  __this->storeValue = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform.GetRotation$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetRotation_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

