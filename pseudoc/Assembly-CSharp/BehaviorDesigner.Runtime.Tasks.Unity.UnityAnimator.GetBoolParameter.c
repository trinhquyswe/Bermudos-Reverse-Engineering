// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetBoolParameter
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetBoolParameter : Action // TypeDefIndex: 6292
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the parameter")]
	public SharedString paramaterName; // 0x30
	[Tooltip("The value of the bool parameter")]
	[RequiredField]
	public SharedBool storeValue; // 0x34
	private Animator animator; // 0x38
	private GameObject prevGameObject; // 0x3C

	// Methods

	// RVA: 0x42DA Offset: 0x42DA VA: 0x42DA Slot: 5
	public override void OnStart() { }

	// RVA: 0x42DB Offset: 0x42DB VA: 0x42DB Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x42DC Offset: 0x42DC VA: 0x42DC Slot: 16
	public override void OnReset() { }

	// RVA: 0x42DD Offset: 0x42DD VA: 0x42DD
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetBoolParameter$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animator_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664eb6 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664eb6 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetBoolParameter$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664eb7 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565c7c);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664eb7 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x38);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_1760 /* "Animator is null" */,0);
    return;
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  param1_00 = *(undefined4 *)(__ret + 0x38);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  uVar2 = unnamed_function_45418(param1_00,uVar2,0);
  unnamed_function_61192(param1,uVar2,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetBoolParameter$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  
  if (DAT_ram_00664eb8 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664eb8 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->paramaterName = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->storeValue = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetBoolParameter$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetBoolParameter_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

