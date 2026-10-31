// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetFloatParameter
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetFloatParameter : Action // TypeDefIndex: 6311
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the parameter")]
	public SharedString paramaterName; // 0x30
	[Tooltip("The value of the float parameter")]
	public SharedFloat floatValue; // 0x34
	[Tooltip("Should the value be reverted back to its original value after it has been set?")]
	public bool setOnce; // 0x38
	private int hashID; // 0x3C
	private Animator animator; // 0x40
	private GameObject prevGameObject; // 0x44

	// Methods

	// RVA: 0x4324 Offset: 0x4324 VA: 0x4324 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4325 Offset: 0x4325 VA: 0x4325 Slot: 6
	public override TaskStatus OnUpdate() { }

	[IteratorStateMachine(typeof(SetFloatParameter.<ResetValue>d__9))]
	// RVA: 0x4326 Offset: 0x4326 VA: 0x4326
	public IEnumerator ResetValue(float origVale) { }

	// RVA: 0x4327 Offset: 0x4327 VA: 0x4327 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4328 Offset: 0x4328 VA: 0x4328
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetFloatParameter$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animator_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664ee1 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664ee1 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetFloatParameter$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float param3;
  undefined4 uVar3;
  undefined4 param2;
  
  if (DAT_ram_00664ee2 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664ee2 = '\x01';
  }
  uVar3 = *(undefined4 *)(__ret + 0x40);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar3,0,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_1760 /* "Animator is null" */,0);
    return;
  }
  uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  uVar3 = unnamed_function_45407(uVar3,0);
  *(undefined4 *)(__ret + 0x3c) = uVar3;
  fVar2 = unnamed_function_45416(*(undefined4 *)(__ret + 0x40),uVar3,0);
  uVar3 = *(undefined4 *)(__ret + 0x40);
  param2 = *(undefined4 *)(__ret + 0x3c);
  param3 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  unnamed_function_45417(uVar3,param2,param3,0);
  if (*(char *)(__ret + 0x38) != '\0') {
    if (DAT_ram_00664ee3 == '\0') {
      unnamed_function_1099
                (&
                 BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__ResetValue_d__9_TypeInfo
                );
      DAT_ram_00664ee3 = '\x01';
    }
    iVar1 = unnamed_function_95402
                      (
                      BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__ResetValue_d__9_TypeInfo
                      );
    *(float *)(iVar1 + 0x14) = fVar2;
    *(BehaviorDesigner_Runtime_Tasks_TaskStatus *)(iVar1 + 0x10) = __ret;
    *(undefined4 *)(iVar1 + 8) = 0;
    unnamed_function_51874(__ret,iVar1,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetFloatParameter$$ResetValue ----
// C#: System_Collections_IEnumerator_o* BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__ResetValue (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter_o* __this, float origVale, const MethodInfo* method);

System_Collections_IEnumerator_o *
BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__ResetValue
          (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter_o *__this,
          float origVale,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664ee3 == '\0') {
    unnamed_function_1099
              (&
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__ResetValue_d__9_TypeInfo
              );
    DAT_ram_00664ee3 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402
                     (
                     BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__ResetValue_d__9_TypeInfo
                     );
  pSVar1[5]._opaque = (int)origVale;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetFloatParameter$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar2;
  
  if (DAT_ram_00664ee4 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664ee4 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->paramaterName = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->floatValue = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetFloatParameter$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetFloatParameter_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

