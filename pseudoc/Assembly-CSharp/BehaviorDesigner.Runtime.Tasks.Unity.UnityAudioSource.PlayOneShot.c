// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.PlayOneShot
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class PlayOneShot : Action // TypeDefIndex: 6271
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The clip being played")]
	public SharedObject clip; // 0x30
	[Tooltip("The scale of the volume (0-1)")]
	public SharedFloat volumeScale; // 0x34
	private AudioSource audioSource; // 0x38
	private GameObject prevGameObject; // 0x3C

	// Methods

	// RVA: 0x4286 Offset: 0x4286 VA: 0x4286 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4287 Offset: 0x4287 VA: 0x4287 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4288 Offset: 0x4288 VA: 0x4288 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4289 Offset: 0x4289 VA: 0x4289
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.PlayOneShot$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  AudioSource_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664e8b == '\0') {
    unnamed_function_1099(&DAT_ram_00569a54);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664e8b = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.PlayOneShot$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot_o *__this,
               MethodInfo *method)

{
  int iVar1;
  int *param1;
  float param3;
  undefined4 uVar2;
  
  if (DAT_ram_00664e8c == '\0') {
    unnamed_function_1099(&UnityEngine_AudioClip_TypeInfo);
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565cdc);
    unnamed_function_1099(&StringLiteral_1923 /* "AudioSource is null" */);
    DAT_ram_00664e8c = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x38);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_1923 /* "AudioSource is null" */,0);
    return;
  }
  uVar2 = *(undefined4 *)(__ret + 0x38);
  param1 = (int *)unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cdc);
  param3 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  if ((param1 != (int *)0x0) && (UnityEngine_AudioClip_TypeInfo != *param1)) {
    unnamed_function_1116(param1,UnityEngine_AudioClip_TypeInfo);
    do {
      halt_trap();
    } while( true );
  }
  unnamed_function_63140(uVar2,param1,param3,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.PlayOneShot$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->clip = (BehaviorDesigner_Runtime_SharedObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(1.0,(MethodInfo *)0x0);
  __this->volumeScale = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.PlayOneShot$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAudioSource_PlayOneShot_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(1.0,(MethodInfo *)0x0);
  __this->volumeScale = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

