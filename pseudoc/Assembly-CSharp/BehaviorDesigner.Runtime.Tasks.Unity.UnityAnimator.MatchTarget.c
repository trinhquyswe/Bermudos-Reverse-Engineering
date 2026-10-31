// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.MatchTarget
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MatchTarget : Action // TypeDefIndex: 6305
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The position we want the body part to reach")]
	public SharedVector3 matchPosition; // 0x30
	[Tooltip("The rotation in which we want the body part to be")]
	public SharedQuaternion matchRotation; // 0x34
	[Tooltip("The body part that is involved in the match")]
	public AvatarTarget targetBodyPart; // 0x38
	[Tooltip("Weights for matching position")]
	public Vector3 weightMaskPosition; // 0x3C
	[Tooltip("Weights for matching rotation")]
	public float weightMaskRotation; // 0x48
	[Tooltip("Start time within the animation clip")]
	public float startNormalizedTime; // 0x4C
	[Tooltip("End time within the animation clip")]
	public float targetNormalizedTime; // 0x50
	private Animator animator; // 0x54
	private GameObject prevGameObject; // 0x58

	// Methods

	// RVA: 0x430D Offset: 0x430D VA: 0x430D Slot: 5
	public override void OnStart() { }

	// RVA: 0x430E Offset: 0x430E VA: 0x430E Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x430F Offset: 0x430F VA: 0x430F Slot: 16
	public override void OnReset() { }

	// RVA: 0x4310 Offset: 0x4310 VA: 0x4310
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.MatchTarget$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animator_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664ed6 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664ed6 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pAVar2 = (Animator_o *)unnamed_function_73836(param1,DAT_ram_00569a50);
    __this->prevGameObject = param1;
    __this->animator = pAVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.MatchTarget$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664ed7 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565ce8);
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664ed7 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x54);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x54);
    unnamed_function_61245(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d38);
    unnamed_function_61197(&local_20,*(undefined4 *)(__ret + 0x34),DAT_ram_00565ce8);
    param4 = *(undefined4 *)(__ret + 0x38);
    local_28 = 0;
    local_30 = 0;
    local_38 = *(undefined4 *)(__ret + 0x44);
    local_40 = *(undefined8 *)(__ret + 0x3c);
    unnamed_function_45411(&local_30,&local_40,*(float *)(__ret + 0x48),0);
    local_48 = local_8;
    local_58 = local_18;
    local_68 = local_28;
    local_50 = local_10;
    local_60 = local_20;
    local_70 = local_30;
    unnamed_function_45451
              (uVar2,&local_50,&local_60,param4,&local_70,*(float *)(__ret + 0x4c),
               *(float *)(__ret + 0x50),0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_1760 /* "Animator is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.MatchTarget$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget_o *__this,
               MethodInfo *method)

{
  Vector3_o *pVVar1;
  Quaternion_o *pQVar2;
  undefined8 uVar3;
  Quaternion_o local_40;
  Vector3_o local_30;
  Quaternion_o local_20;
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
  __this->matchPosition = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_40._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_40._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_20._0_8_ = local_40._0_8_;
  local_20._8_8_ = local_40._8_8_;
  pQVar2 = BehaviorDesigner_Runtime_SharedQuaternion__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->targetBodyPart = Root;
  __this->matchRotation = (BehaviorDesigner_Runtime_SharedQuaternion_o *)pQVar2;
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  uVar3 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  (__this->weightMaskPosition).z =
       *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  (__this->weightMaskPosition).x = (float)(int)uVar3;
  (__this->weightMaskPosition).y = (float)(int)((ulonglong)uVar3 >> 0x20);
  __this->targetNormalizedTime = 1.0;
  __this->weightMaskRotation = 0.0;
  __this->startNormalizedTime = 0.0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.MatchTarget$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_MatchTarget_o *__this,
               MethodInfo *method)

{
  __this->targetNormalizedTime = 1.0;
  unnamed_function_51834(__this,0);
  return;
}

