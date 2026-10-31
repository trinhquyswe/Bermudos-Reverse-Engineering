// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.CrossFade
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CrossFade : Action // TypeDefIndex: 6290
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the state")]
	public SharedString stateName; // 0x30
	[Tooltip("The duration of the transition. Value is in source state normalized time")]
	public SharedFloat transitionDuration; // 0x34
	[Tooltip("The layer where the state is")]
	public int layer; // 0x38
	[Tooltip("The normalized time at which the state will play")]
	public float normalizedTime; // 0x3C
	private Animator animator; // 0x40
	private GameObject prevGameObject; // 0x44

	// Methods

	// RVA: 0x42D2 Offset: 0x42D2 VA: 0x42D2 Slot: 5
	public override void OnStart() { }

	// RVA: 0x42D3 Offset: 0x42D3 VA: 0x42D3 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x42D4 Offset: 0x42D4 VA: 0x42D4 Slot: 16
	public override void OnReset() { }

	// RVA: 0x42D5 Offset: 0x42D5 VA: 0x42D5
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.CrossFade$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animator_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664eb1 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664eb1 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.CrossFade$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float param3;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664eb2 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664eb2 = '\x01';
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
  param1 = *(undefined4 *)(__ret + 0x40);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  param3 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  unnamed_function_45455
            (param1,uVar2,param3,*(undefined4 *)(__ret + 0x38),*(float *)(__ret + 0x3c),0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.CrossFade$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar2;
  
  if (DAT_ram_00664eb3 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664eb3 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->stateName = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->layer = -1;
  __this->normalizedTime = -INFINITY;
  __this->transitionDuration = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.CrossFade$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_CrossFade_o *__this,
               MethodInfo *method)

{
  __this->layer = -1;
  __this->normalizedTime = -INFINITY;
  unnamed_function_51834(__this,0);
  return;
}

