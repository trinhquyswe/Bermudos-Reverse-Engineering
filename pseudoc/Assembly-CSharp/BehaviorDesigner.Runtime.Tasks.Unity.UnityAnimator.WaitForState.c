// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.WaitForState
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class WaitForState : Action // TypeDefIndex: 6323
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the state")]
	public SharedString stateName; // 0x30
	[Tooltip("The layer where the state is")]
	public SharedInt layer; // 0x34
	private Animator animator; // 0x38
	private GameObject prevGameObject; // 0x3C
	private int stateHash; // 0x40

	// Methods

	// RVA: 0x4360 Offset: 0x4360 VA: 0x4360 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x4361 Offset: 0x4361 VA: 0x4361 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4362 Offset: 0x4362 VA: 0x4362 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4363 Offset: 0x4363 VA: 0x4363 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4364 Offset: 0x4364 VA: 0x4364
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.WaitForState$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState__OnAwake (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState__OnAwake
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  int iVar1;
  
  if (DAT_ram_00664efe == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664efe = '\x01';
  }
  param1 = unnamed_function_61203(__this->stateName,DAT_ram_00565d0c);
  iVar1 = unnamed_function_45407(param1,0);
  __this->stateHash = iVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.WaitForState$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  GameObject_o *param1;
  int iVar2;
  Animator_o *param1_00;
  undefined4 param4;
  GameObject_o *param2;
  undefined4 local_4;
  
  if (DAT_ram_00664eff == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&StringLiteral_3661 /* "Error: The Animator does not have the state " */);
    unnamed_function_1099(&StringLiteral_267 /* " on layer " */);
    DAT_ram_00664eff = '\x01';
  }
  uVar1 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,uVar1,0);
  param2 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44679(param1,param2,0);
  if (iVar2 != 0) {
    param1_00 = (Animator_o *)unnamed_function_73836(param1,DAT_ram_00569a50);
    __this->prevGameObject = param1;
    __this->animator = param1_00;
    uVar1 = unnamed_function_61203(__this->layer,DAT_ram_00565cb8);
    iVar2 = unnamed_function_45467(param1_00,uVar1,__this->stateHash,0);
    if (iVar2 == 0) {
      uVar1 = unnamed_function_61203(__this->stateName,DAT_ram_00565d0c);
      local_4 = unnamed_function_61203(__this->layer,DAT_ram_00565cb8);
      param4 = unnamed_function_83644(&local_4,0);
      uVar1 = unnamed_function_81508(StringLiteral_3661 /* "Error: The Animator does not have the state " */,uVar1,StringLiteral_267 /* " on layer " */,param4,0);
      if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Debug_TypeInfo);
      }
      unnamed_function_52411(uVar1,0);
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.WaitForState$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param2;
  undefined4 local_50 [20];
  
  if (DAT_ram_00664f00 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664f00 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x38);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    param2 = *(undefined4 *)(__ret + 0x38);
    uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
    unnamed_function_45444(local_50,param2,uVar2,0);
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_1760 /* "Animator is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.WaitForState$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedInt_o *pBVar2;
  
  if (DAT_ram_00664f01 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664f01 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->stateName = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(-1,(MethodInfo *)0x0);
  __this->layer = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.WaitForState$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_WaitForState_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(-1,(MethodInfo *)0x0);
  __this->layer = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

