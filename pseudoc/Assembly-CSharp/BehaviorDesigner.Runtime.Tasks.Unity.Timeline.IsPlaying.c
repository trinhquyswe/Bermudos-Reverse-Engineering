// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Timeline.IsPlaying
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsPlaying : Conditional // TypeDefIndex: 5946
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	private PlayableDirector playableDirector; // 0x30
	private GameObject prevGameObject; // 0x34

	// Methods

	// RVA: 0x3E0C Offset: 0x3E0C VA: 0x3E0C Slot: 5
	public override void OnStart() { }

	// RVA: 0x3E0D Offset: 0x3E0D VA: 0x3E0D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E0E Offset: 0x3E0E VA: 0x3E0E Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E0F Offset: 0x3E0F VA: 0x3E0F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.IsPlaying$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying_o *__this,MethodInfo *method
               )

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  PlayableDirector_o *pPVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664c64 == '\0') {
    unnamed_function_1099(&DAT_ram_00569adc);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664c64 = '\x01';
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
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.IsPlaying$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664c65 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_6074 /* "PlayableDirector is null" */);
    DAT_ram_00664c65 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 == 0) {
    unnamed_function_63391(*(undefined4 *)(__ret + 0x30),0);
    return;
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52416(StringLiteral_6074 /* "PlayableDirector is null" */,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.IsPlaying$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused_o *__this,MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Timeline.IsPlaying$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPlaying_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

