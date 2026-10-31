// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.InterruptMatchTarget
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class InterruptMatchTarget : Action // TypeDefIndex: 6301
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("CompleteMatch will make the gameobject match the target completely at the next frame")]
	public bool completeMatch; // 0x30
	private Animator animator; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x42FD Offset: 0x42FD VA: 0x42FD Slot: 5
	public override void OnStart() { }

	// RVA: 0x42FE Offset: 0x42FE VA: 0x42FE Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x42FF Offset: 0x42FF VA: 0x42FF Slot: 16
	public override void OnReset() { }

	// RVA: 0x4300 Offset: 0x4300 VA: 0x4300
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.InterruptMatchTarget$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animator_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664ecc == '\0') {
    unnamed_function_1099(&DAT_ram_00569a50);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664ecc = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.InterruptMatchTarget$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664ecd == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_1760 /* "Animator is null" */);
    DAT_ram_00664ecd = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_1760 /* "Animator is null" */,0);
    return;
  }
  unnamed_function_45452(*(undefined4 *)(__ret + 0x34),(uint)*(byte *)(__ret + 0x30),0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.InterruptMatchTarget$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget_o *__this,
               MethodInfo *method)

{
  __this->completeMatch = true;
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator.InterruptMatchTarget$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimator_InterruptMatchTarget_o *__this,
               MethodInfo *method)

{
  __this->completeMatch = true;
  unnamed_function_51834(__this,0);
  return;
}

