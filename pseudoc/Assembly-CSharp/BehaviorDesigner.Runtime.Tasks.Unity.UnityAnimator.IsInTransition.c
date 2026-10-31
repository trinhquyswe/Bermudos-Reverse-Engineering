// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.IsInTransition
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsInTransition : Conditional // TypeDefIndex: 6302
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The layer's index")]
	public SharedInt index; // 0x30
	private Animator animator; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4301 Offset: 0x4301 VA: 0x4301 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4302 Offset: 0x4302 VA: 0x4302 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4303 Offset: 0x4303 VA: 0x4303 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4304 Offset: 0x4304 VA: 0x4304
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.IsInTransition$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animator_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664ece == '\0') {
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664ece = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.IsInTransition$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664ecf == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664ecf = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    param1 = *(undefined4 *)(__ret + 0x34);
    uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    unnamed_function_45449(param1,uVar2,0);
    return;
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52416(StringLiteral_1760 /* "Animator is null" */,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.IsInTransition$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityParticleSystem_SetMaxParticles_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->maxParticles = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.IsInTransition$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_IsInTransition_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

