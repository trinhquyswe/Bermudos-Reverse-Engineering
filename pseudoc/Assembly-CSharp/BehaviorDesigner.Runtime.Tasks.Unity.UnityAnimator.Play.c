// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.Play
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Play : Action // TypeDefIndex: 6306
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the state")]
	public SharedString stateName; // 0x30
	[Tooltip("The layer where the state is")]
	public int layer; // 0x34
	[Tooltip("The normalized time at which the state will play")]
	public float normalizedTime; // 0x38
	private Animator animator; // 0x3C
	private GameObject prevGameObject; // 0x40

	// Methods

	// RVA: 0x4311 Offset: 0x4311 VA: 0x4311 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4312 Offset: 0x4312 VA: 0x4312 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4313 Offset: 0x4313 VA: 0x4313 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4314 Offset: 0x4314 VA: 0x4314
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.Play$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play_o *__this,MethodInfo *method
               )

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animator_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664ed8 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664ed8 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.Play$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664ed9 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664ed9 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x3c);
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
  param1 = *(undefined4 *)(__ret + 0x3c);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  unnamed_function_45458(param1,uVar2,*(undefined4 *)(__ret + 0x34),*(float *)(__ret + 0x38),0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.Play$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play_o *__this,MethodInfo *method
               )

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664eda == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664eda = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->layer = -1;
  __this->normalizedTime = -INFINITY;
  __this->stateName = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.Play$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_Play_o *__this,MethodInfo *method
               )

{
  __this->layer = -1;
  __this->normalizedTime = -INFINITY;
  unnamed_function_51834(__this,0);
  return;
}

