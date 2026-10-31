// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFade
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CrossFade : Action // TypeDefIndex: 6325
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the animation")]
	public SharedString animationName; // 0x30
	[Tooltip("The speed of the animation. Use a negative value to play the animation backwards")]
	public SharedFloat animationSpeed; // 0x34
	[Tooltip("The amount of time it takes to blend")]
	public SharedFloat fadeLength; // 0x38
	[Tooltip("The play mode of the animation")]
	public PlayMode playMode; // 0x3C
	private Animation animation; // 0x40
	private GameObject prevGameObject; // 0x44

	// Methods

	// RVA: 0x4369 Offset: 0x4369 VA: 0x4369 Slot: 5
	public override void OnStart() { }

	// RVA: 0x436A Offset: 0x436A VA: 0x436A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x436B Offset: 0x436B VA: 0x436B Slot: 16
	public override void OnReset() { }

	// RVA: 0x436C Offset: 0x436C VA: 0x436C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFade$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animation_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664f05 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a4c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664f05 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFade$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 param1;
  
  if (DAT_ram_00664f06 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&StringLiteral_1756 /* "Animation is null" */);
    DAT_ram_00664f06 = '\x01';
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
    unnamed_function_52416(StringLiteral_1756 /* "Animation is null" */,0);
    return;
  }
  uVar4 = *(undefined4 *)(__ret + 0x40);
  uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  uVar3 = unnamed_function_45369(uVar4,uVar3,0);
  fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  unnamed_function_45386(uVar3,fVar2,0);
  uVar4 = *(undefined4 *)(__ret + 0x40);
  uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  uVar3 = unnamed_function_45369(uVar4,uVar3,0);
  fVar2 = unnamed_function_45385(uVar3,0);
  if (fVar2 < 0.0) {
    uVar4 = *(undefined4 *)(__ret + 0x40);
    uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
    uVar3 = unnamed_function_45369(uVar4,uVar3,0);
    param1 = *(undefined4 *)(__ret + 0x40);
    uVar4 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
    uVar4 = unnamed_function_45369(param1,uVar4,0);
    fVar2 = unnamed_function_45387(uVar4,0);
    unnamed_function_45384(uVar3,fVar2,0);
  }
  uVar4 = *(undefined4 *)(__ret + 0x40);
  uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x38),DAT_ram_00565d00);
  unnamed_function_45373(uVar4,uVar3,fVar2,*(undefined4 *)(__ret + 0x3c),0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFade$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  if (DAT_ram_00664f07 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d10);
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664f07 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  unnamed_function_61204(__this->animationName,StringLiteral_1 /* "" */,DAT_ram_00565d10);
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(1.0,(MethodInfo *)0x0);
  __this->animationSpeed = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.3,(MethodInfo *)0x0);
  __this->playMode = StopSameLayer;
  __this->fadeLength = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.CrossFade$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_CrossFade_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(1.0,(MethodInfo *)0x0);
  __this->animationSpeed = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.3,(MethodInfo *)0x0);
  __this->fadeLength = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

