// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Resume
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Resume : Action // TypeDefIndex: 5949
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("Should the task be stopped when the timeline has stopped playing?")]
	public SharedBool stopWhenComplete; // 0x30
	private PlayableDirector playableDirector; // 0x34
	private GameObject prevGameObject; // 0x38
	private bool playbackStarted; // 0x3C

	// Methods

	// RVA: 0x3E18 Offset: 0x3E18 VA: 0x3E18 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3E19 Offset: 0x3E19 VA: 0x3E19 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E1A Offset: 0x3E1A VA: 0x3E1A Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E1B Offset: 0x3E1B VA: 0x3E1B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Resume$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume_o *__this,MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  PlayableDirector_o *pPVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664c6a == '\0') {
    unnamed_function_1099(&DAT_ram_00569adc);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664c6a = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Resume$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664c6b == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&StringLiteral_6074 /* "PlayableDirector is null" */);
    DAT_ram_00664c6b = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 == 0) {
    if (*(char *)(__ret + 0x3c) == '\0') {
      unnamed_function_63405(*(undefined4 *)(__ret + 0x34),0);
      *(undefined1 *)(__ret + 0x3c) = 1;
      unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
    }
    else {
      iVar1 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
      if ((iVar1 == 0) ||
         (iVar1 = unnamed_function_63391(*(undefined4 *)(__ret + 0x34),0), iVar1 != 1)) {
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Resume$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_PerformInterruption__OnReset
               (BehaviorDesigner_Runtime_Tasks_PerformInterruption_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  __this->interruptTasks = (BehaviorDesigner_Runtime_Tasks_Interrupt_o *)0x0;
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
  __this->interruptSuccess = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Resume$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_Resume_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

