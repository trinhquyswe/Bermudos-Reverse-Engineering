// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFadeQueued
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CrossFadeQueued : Action // TypeDefIndex: 6326
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the animation")]
	public SharedString animationName; // 0x30
	[Tooltip("The amount of time it takes to blend")]
	public float fadeLength; // 0x34
	[Tooltip("Specifies when the animation should start playing")]
	public QueueMode queue; // 0x38
	[Tooltip("The play mode of the animation")]
	public PlayMode playMode; // 0x3C
	private Animation animation; // 0x40
	private GameObject prevGameObject; // 0x44

	// Methods

	// RVA: 0x436D Offset: 0x436D VA: 0x436D Slot: 5
	public override void OnStart() { }

	// RVA: 0x436E Offset: 0x436E VA: 0x436E Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x436F Offset: 0x436F VA: 0x436F Slot: 16
	public override void OnReset() { }

	// RVA: 0x4370 Offset: 0x4370 VA: 0x4370
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFadeQueued$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animation_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664f08 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a4c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664f08 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFadeQueued$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664f09 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&StringLiteral_1756 /* "Animation is null" */);
    DAT_ram_00664f09 = '\x01';
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
    unnamed_function_52416(StringLiteral_1756 /* "Animation is null" */,0);
    return;
  }
  param1 = *(undefined4 *)(__ret + 0x40);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  unnamed_function_45375
            (param1,uVar2,*(float *)(__ret + 0x34),*(undefined4 *)(__ret + 0x38),
             *(undefined4 *)(__ret + 0x3c),0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFadeQueued$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664f0a == '\0') {
    unnamed_function_1099(&DAT_ram_00565d10);
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664f0a = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  unnamed_function_61204(__this->animationName,StringLiteral_1 /* "" */,DAT_ram_00565d10);
  __this->playMode = StopSameLayer;
  __this->fadeLength = 0.3;
  __this->queue = CompleteOthers;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFadeQueued$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFadeQueued_o *__this,
               MethodInfo *method)

{
  __this->fadeLength = 0.3;
  unnamed_function_51834(__this,0);
  return;
}

