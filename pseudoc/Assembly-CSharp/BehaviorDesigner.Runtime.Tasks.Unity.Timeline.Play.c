// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Play
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Play : Action // TypeDefIndex: 5948
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("An asset to instantiate a playable from.")]
	public PlayableAsset playableAsset; // 0x30
	[Tooltip("Should the task be stopped when the timeline has stopped playing?")]
	public SharedBool stopWhenComplete; // 0x34
	private PlayableDirector playableDirector; // 0x38
	private GameObject prevGameObject; // 0x3C
	private bool playbackStarted; // 0x40

	// Methods

	// RVA: 0x3E14 Offset: 0x3E14 VA: 0x3E14 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3E15 Offset: 0x3E15 VA: 0x3E15 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E16 Offset: 0x3E16 VA: 0x3E16 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E17 Offset: 0x3E17 VA: 0x3E17
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Play$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play_o *__this,MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  PlayableDirector_o *pPVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664c68 == '\0') {
    unnamed_function_1099(&DAT_ram_00569adc);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664c68 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pPVar2 = (PlayableDirector_o *)unnamed_function_73836(param1,DAT_ram_00569adc);
    __this->prevGameObject = param1;
    __this->playableDirector = pPVar2;
  }
  __this->playbackStarted = false;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Play$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_ram_00664c69 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&StringLiteral_6074 /* "PlayableDirector is null" */);
    DAT_ram_00664c69 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x38);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 == 0) {
    if (*(char *)(__ret + 0x40) == '\0') {
      uVar2 = *(undefined4 *)(__ret + 0x30);
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Object_TypeInfo);
      }
      iVar1 = unnamed_function_44710(uVar2,0,0);
      if (iVar1 == 0) {
        unnamed_function_63397(*(undefined4 *)(__ret + 0x38),*(undefined4 *)(__ret + 0x30),0);
      }
      else {
        unnamed_function_63399(*(undefined4 *)(__ret + 0x38),0);
      }
      *(undefined1 *)(__ret + 0x40) = 1;
      unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78);
    }
    else {
      iVar1 = unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78);
      if ((iVar1 == 0) ||
         (iVar1 = unnamed_function_63391(*(undefined4 *)(__ret + 0x38),0), iVar1 != 1)) {
        return;
      }
    }
    return;
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52416(StringLiteral_6074 /* "PlayableDirector is null" */,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Play$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->playableAsset = (PlayableAsset_o *)0x0;
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar1[4].monitor = 0;
  __this->stopWhenComplete = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Play$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Play_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

