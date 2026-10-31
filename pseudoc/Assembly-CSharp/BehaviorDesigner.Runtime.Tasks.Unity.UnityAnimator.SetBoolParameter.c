// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetBoolParameter
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetBoolParameter : Action // TypeDefIndex: 6309
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the parameter")]
	public SharedString paramaterName; // 0x30
	[Tooltip("The value of the bool parameter")]
	public SharedBool boolValue; // 0x34
	[Tooltip("Should the value be reverted back to its original value after it has been set?")]
	public bool setOnce; // 0x38
	private int hashID; // 0x3C
	private Animator animator; // 0x40
	private GameObject prevGameObject; // 0x44

	// Methods

	// RVA: 0x4319 Offset: 0x4319 VA: 0x4319 Slot: 5
	public override void OnStart() { }

	// RVA: 0x431A Offset: 0x431A VA: 0x431A Slot: 6
	public override TaskStatus OnUpdate() { }

	[IteratorStateMachine(typeof(SetBoolParameter.<ResetValue>d__9))]
	// RVA: 0x431B Offset: 0x431B VA: 0x431B
	public IEnumerator ResetValue(bool origVale) { }

	// RVA: 0x431C Offset: 0x431C VA: 0x431C Slot: 16
	public override void OnReset() { }

	// RVA: 0x431D Offset: 0x431D VA: 0x431D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetBoolParameter$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animator_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664edd == '\0') {
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664edd = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetBoolParameter$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param3;
  undefined4 uVar2;
  undefined4 param1;
  undefined4 param2;
  
  if (DAT_ram_00664ede == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664ede = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x40);
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
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  uVar2 = unnamed_function_45407(uVar2,0);
  *(undefined4 *)(__ret + 0x3c) = uVar2;
  uVar2 = unnamed_function_45419(*(undefined4 *)(__ret + 0x40),uVar2,0);
  param1 = *(undefined4 *)(__ret + 0x40);
  param2 = *(undefined4 *)(__ret + 0x3c);
  param3 = unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78);
  unnamed_function_45420(param1,param2,param3,0);
  if (*(char *)(__ret + 0x38) != '\0') {
    if (DAT_ram_00664edf == '\0') {
      unnamed_function_1099
                (&
                 BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__ResetValue_d__9_TypeInfo
                );
      DAT_ram_00664edf = '\x01';
    }
    iVar1 = unnamed_function_95402
                      (
                      BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__ResetValue_d__9_TypeInfo
                      );
    *(char *)(iVar1 + 0x14) = (char)uVar2;
    *(BehaviorDesigner_Runtime_Tasks_TaskStatus *)(iVar1 + 0x10) = __ret;
    *(undefined4 *)(iVar1 + 8) = 0;
    unnamed_function_51874(__ret,iVar1,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetBoolParameter$$ResetValue ----
// C#: System_Collections_IEnumerator_o* BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__ResetValue (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter_o* __this, bool origVale, const MethodInfo* method);

System_Collections_IEnumerator_o *
BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__ResetValue
          (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter_o *__this,
          bool origVale,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664edf == '\0') {
    unnamed_function_1099
              (&
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__ResetValue_d__9_TypeInfo
              );
    DAT_ram_00664edf = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402
                     (
                     BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__ResetValue_d__9_TypeInfo
                     );
  *(bool *)&pSVar1[5]._opaque = origVale;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetBoolParameter$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  
  if (DAT_ram_00664ee0 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664ee0 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->paramaterName = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->boolValue = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetBoolParameter$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetBoolParameter_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

