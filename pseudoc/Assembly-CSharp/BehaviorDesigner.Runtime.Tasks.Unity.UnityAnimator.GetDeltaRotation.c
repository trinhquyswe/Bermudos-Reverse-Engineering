// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetDeltaRotation
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetDeltaRotation : Action // TypeDefIndex: 6294
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The avatar delta rotation")]
	[RequiredField]
	public SharedQuaternion storeValue; // 0x30
	private Animator animator; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x42E2 Offset: 0x42E2 VA: 0x42E2 Slot: 5
	public override void OnStart() { }

	// RVA: 0x42E3 Offset: 0x42E3 VA: 0x42E3 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x42E4 Offset: 0x42E4 VA: 0x42E4 Slot: 16
	public override void OnReset() { }

	// RVA: 0x42E5 Offset: 0x42E5 VA: 0x42E5
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetDeltaRotation$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animator_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664ebb == '\0') {
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664ebb = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetDeltaRotation$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664ebc == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565cec);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664ebc = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(__ret + 0x30);
    unnamed_function_45430(&local_10,*(undefined4 *)(__ret + 0x34),0);
    local_18 = local_8;
    local_20 = local_10;
    unnamed_function_61198(uVar2,&local_20,DAT_ram_00565cec);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_1760 /* "Animator is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetDeltaRotation$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedQuaternion_o *param1;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664ebd == '\0') {
    unnamed_function_1099(&DAT_ram_00565cec);
    DAT_ram_00664ebd = '\x01';
  }
  param1 = __this->storeValue;
  if (param1 != (BehaviorDesigner_Runtime_SharedQuaternion_o *)0x0) {
    if (DAT_ram_006603e8 == '\0') {
      unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
      DAT_ram_006603e8 = '\x01';
    }
    local_8 = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
    local_10 = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
    unnamed_function_61198(param1,&local_10,DAT_ram_00565cec);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetDeltaRotation$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetDeltaRotation_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

