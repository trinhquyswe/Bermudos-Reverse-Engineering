// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.IsPlaying
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsPlaying : Conditional // TypeDefIndex: 6328
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the animation")]
	public SharedString animationName; // 0x30
	private Animation animation; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4375 Offset: 0x4375 VA: 0x4375 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4376 Offset: 0x4376 VA: 0x4376 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4377 Offset: 0x4377 VA: 0x4377 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4378 Offset: 0x4378 VA: 0x4378
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.IsPlaying$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animation_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664f0e == '\0') {
    unnamed_function_1099(&DAT_ram_00569a4c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664f0e = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.IsPlaying$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param2;
  undefined4 uVar2;
  
  if (DAT_ram_00664f0f == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&StringLiteral_1756 /* "Animation is null" */);
    DAT_ram_00664f0f = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
    iVar1 = unnamed_function_81507(uVar2,0);
    uVar2 = *(undefined4 *)(__ret + 0x34);
    if (iVar1 == 0) {
      param2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
      unnamed_function_45368(uVar2,param2,0);
      return;
    }
    unnamed_function_45367(uVar2,0);
    return;
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52416(StringLiteral_1756 /* "Animation is null" */,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.IsPlaying$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664f10 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d10);
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664f10 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  unnamed_function_61204(__this->animationName,StringLiteral_1 /* "" */,DAT_ram_00565d10);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.IsPlaying$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_IsPlaying_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

