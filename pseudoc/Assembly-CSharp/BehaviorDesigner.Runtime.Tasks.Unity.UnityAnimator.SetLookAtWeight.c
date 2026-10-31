// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtWeight
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetLookAtWeight : Action // TypeDefIndex: 6316
{
	// Fields
	[Tooltip("(0-1) the global weight of the LookAt, multiplier for other parameters.")]
	public SharedFloat weight; // 0x2C
	[Tooltip("(0-1) determines how much the body is involved in the LookAt.")]
	public float bodyWeight; // 0x30
	[Tooltip("(0-1) determines how much the head is involved in the LookAt.")]
	public float headWeight; // 0x34
	[Tooltip("(0-1) determines how much the eyes are involved in the LookAt.")]
	public float eyesWeight; // 0x38
	[Tooltip("(0-1) 0.0 means the character is completely unrestrained in motion, 1.0 means he's completely clamped (look at becomes impossible), and 0.5 means he'll be able to move on half of the possible range (180 degrees).")]
	public float clampWeight; // 0x3C
	private Animator animator; // 0x40
	private bool weightSet; // 0x44

	// Methods

	// RVA: 0x4343 Offset: 0x4343 VA: 0x4343 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4344 Offset: 0x4344 VA: 0x4344 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4345 Offset: 0x4345 VA: 0x4345 Slot: 28
	public override void OnAnimatorIK() { }

	// RVA: 0x4346 Offset: 0x4346 VA: 0x4346 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4347 Offset: 0x4347 VA: 0x4347
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtWeight$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight_o *__this,
               MethodInfo *method)

{
  Animator_o *pAVar1;
  
  if (DAT_ram_00664eee == '\0') {
    unnamed_function_1099(&DAT_ram_0056cec0);
    DAT_ram_00664eee = '\x01';
  }
  pAVar1 = (Animator_o *)unnamed_function_69916(__this,DAT_ram_0056cec0);
  __this->weightSet = false;
  __this->animator = pAVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtWeight$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664eef == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664eef = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x40);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52416(StringLiteral_1760 /* "Animator is null" */,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtWeight$$OnAnimatorIK ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight__OnAnimatorIK (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight__OnAnimatorIK
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float param2;
  Animator_o *pAVar2;
  
  if (DAT_ram_00664ef0 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d00);
    DAT_ram_00664ef0 = '\x01';
  }
  pAVar2 = __this->animator;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(pAVar2,0,0);
  if (iVar1 == 0) {
    pAVar2 = __this->animator;
    param2 = unnamed_function_61226(__this->weight,DAT_ram_00565d00);
    unnamed_function_45438
              (pAVar2,param2,__this->bodyWeight,__this->headWeight,__this->eyesWeight,
               __this->clampWeight,0);
    __this->weightSet = true;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtWeight$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->eyesWeight = 0.0;
  __this->clampWeight = 0.5;
  __this->bodyWeight = 0.0;
  __this->headWeight = 1.0;
  __this->weight = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtWeight$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtWeight_o *__this,
               MethodInfo *method)

{
  __this->clampWeight = 0.5;
  __this->headWeight = 1.0;
  unnamed_function_51834(__this,0);
  return;
}

