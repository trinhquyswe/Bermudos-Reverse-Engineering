// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.SetScheduledStartTime
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetScheduledStartTime : Action // TypeDefIndex: 6284
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("Time in seconds")]
	public SharedFloat time; // 0x30
	private AudioSource audioSource; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x42BA Offset: 0x42BA VA: 0x42BA Slot: 5
	public override void OnStart() { }

	// RVA: 0x42BB Offset: 0x42BB VA: 0x42BB Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x42BC Offset: 0x42BC VA: 0x42BC Slot: 16
	public override void OnReset() { }

	// RVA: 0x42BD Offset: 0x42BD VA: 0x42BD
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.SetScheduledStartTime$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime_o
                *__this,MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  AudioSource_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664ea5 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a54);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664ea5 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pAVar2 = (AudioSource_o *)unnamed_function_73836(param1,DAT_ram_00569a54);
    __this->prevGameObject = param1;
    __this->audioSource = pAVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.SetScheduledStartTime$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime_o *__this
               ,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  if (DAT_ram_00664ea6 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&StringLiteral_1923 /* "AudioSource is null" */);
    DAT_ram_00664ea6 = '\x01';
  }
  uVar3 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar3,0,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_1923 /* "AudioSource is null" */,0);
    return;
  }
  uVar3 = *(undefined4 *)(__ret + 0x34);
  fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  unnamed_function_63141(uVar3,(double)fVar2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.SetScheduledStartTime$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_AddTorque__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRigidbody2D_AddTorque_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->torque = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.SetScheduledStartTime$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_SetScheduledStartTime_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayDelayed___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayDelayed_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->delay = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

