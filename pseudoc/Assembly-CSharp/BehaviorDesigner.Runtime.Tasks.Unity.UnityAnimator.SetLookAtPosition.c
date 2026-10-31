// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtPosition
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetLookAtPosition : Action // TypeDefIndex: 6315
{
	// Fields
	[Tooltip("The position to lookAt")]
	public SharedVector3 position; // 0x2C
	private Animator animator; // 0x30
	private bool positionSet; // 0x34

	// Methods

	// RVA: 0x433E Offset: 0x433E VA: 0x433E Slot: 5
	public override void OnStart() { }

	// RVA: 0x433F Offset: 0x433F VA: 0x433F Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4340 Offset: 0x4340 VA: 0x4340 Slot: 28
	public override void OnAnimatorIK() { }

	// RVA: 0x4341 Offset: 0x4341 VA: 0x4341 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4342 Offset: 0x4342 VA: 0x4342
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtPosition$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition_o *__this,
               MethodInfo *method)

{
  Animator_o *pAVar1;
  
  if (DAT_ram_00664eeb == '\0') {
    unnamed_function_1099(&DAT_ram_0056cec0);
    DAT_ram_00664eeb = '\x01';
  }
  pAVar1 = (Animator_o *)unnamed_function_69916(__this,DAT_ram_0056cec0);
  __this->positionSet = false;
  __this->animator = pAVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtPosition$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664eec == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664eec = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtPosition$$OnAnimatorIK ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition__OnAnimatorIK (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition__OnAnimatorIK
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Animator_o *pAVar2;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664eed == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d38);
    DAT_ram_00664eed = '\x01';
  }
  pAVar2 = __this->animator;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(pAVar2,0,0);
  if (iVar1 == 0) {
    pAVar2 = __this->animator;
    unnamed_function_61245(&local_10,__this->position,DAT_ram_00565d38);
    local_18 = local_8;
    local_20 = local_10;
    unnamed_function_45435(pAVar2,&local_20,0);
    __this->positionSet = true;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtPosition$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityInput_GetAcceleration_o *__this,
               MethodInfo *method)

{
  Vector3_o *pVVar1;
  Vector3_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_20._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  local_20.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = local_20._0_8_;
  local_10.z = local_20.z;
  pVVar1 = BehaviorDesigner_Runtime_SharedVector3__op_Implicit(&local_20,(MethodInfo *)0x0);
  __this->storeResult = (BehaviorDesigner_Runtime_SharedVector3_o *)pVVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.SetLookAtPosition$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_SetLookAtPosition_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

