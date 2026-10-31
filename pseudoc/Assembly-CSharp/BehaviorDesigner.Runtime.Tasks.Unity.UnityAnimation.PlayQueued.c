// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.PlayQueued
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class PlayQueued : Action // TypeDefIndex: 6330
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the animation")]
	public SharedString animationName; // 0x30
	[Tooltip("Specifies when the animation should start playing")]
	public QueueMode queue; // 0x34
	[Tooltip("The play mode of the animation")]
	public PlayMode playMode; // 0x38
	private Animation animation; // 0x3C
	private GameObject prevGameObject; // 0x40

	// Methods

	// RVA: 0x437D Offset: 0x437D VA: 0x437D Slot: 5
	public override void OnStart() { }

	// RVA: 0x437E Offset: 0x437E VA: 0x437E Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x437F Offset: 0x437F VA: 0x437F Slot: 16
	public override void OnReset() { }

	// RVA: 0x4380 Offset: 0x4380 VA: 0x4380
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.PlayQueued$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animation_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664f14 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a4c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664f14 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pAVar2 = (Animation_o *)unnamed_function_73836(param1,DAT_ram_00569a4c);
    __this->prevGameObject = param1;
    __this->animation = pAVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.PlayQueued$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664f15 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&StringLiteral_1756 /* "Animation is null" */);
    DAT_ram_00664f15 = '\x01';
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
    unnamed_function_52416(StringLiteral_1756 /* "Animation is null" */,0);
    return;
  }
  param1 = *(undefined4 *)(__ret + 0x3c);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  unnamed_function_45376(param1,uVar2,*(undefined4 *)(__ret + 0x34),*(undefined4 *)(__ret + 0x38),0)
  ;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.PlayQueued$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664f16 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d10);
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664f16 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  unnamed_function_61204(__this->animationName,StringLiteral_1 /* "" */,DAT_ram_00565d10);
  __this->queue = CompleteOthers;
  __this->playMode = StopSameLayer;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.PlayQueued$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_PlayQueued_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

