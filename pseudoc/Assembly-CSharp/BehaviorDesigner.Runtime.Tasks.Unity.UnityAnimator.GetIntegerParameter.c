// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetIntegerParameter
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetIntegerParameter : Action // TypeDefIndex: 6297
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the parameter")]
	public SharedString paramaterName; // 0x30
	[Tooltip("The value of the integer parameter")]
	[RequiredField]
	public SharedInt storeValue; // 0x34
	private Animator animator; // 0x38
	private GameObject prevGameObject; // 0x3C

	// Methods

	// RVA: 0x42EE Offset: 0x42EE VA: 0x42EE Slot: 5
	public override void OnStart() { }

	// RVA: 0x42EF Offset: 0x42EF VA: 0x42EF Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x42F0 Offset: 0x42F0 VA: 0x42F0 Slot: 16
	public override void OnReset() { }

	// RVA: 0x42F1 Offset: 0x42F1 VA: 0x42F1
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetIntegerParameter$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animator_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664ec3 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664ec3 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetIntegerParameter$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664ec4 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565cbc);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664ec4 = '\x01';
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
  uVar2 = unnamed_function_45421(param1_00,uVar2,0);
  unnamed_function_61204(param1,uVar2,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetIntegerParameter$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedInt_o *pBVar2;
  
  if (DAT_ram_00664ec5 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664ec5 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->paramaterName = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->storeValue = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.GetIntegerParameter$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_GetIntegerParameter_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

