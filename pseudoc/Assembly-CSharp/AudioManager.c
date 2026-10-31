// Assembly-CSharp :: AudioManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AudioManager : MonoBehaviour // TypeDefIndex: 5710
{
	// Fields
	[SerializeField]
	private Slider musicSlider; // 0x10
	[SerializeField]
	private Slider sfxSlider; // 0x14
	private float normalizedValue; // 0x18

	// Methods

	// RVA: 0x3A28 Offset: 0x3A28 VA: 0x3A28
	private void Start() { }

	[IteratorStateMachine(typeof(AudioManager.<SetVolumeCoroutine>d__4))]
	// RVA: 0x3A29 Offset: 0x3A29 VA: 0x3A29
	private IEnumerator SetVolumeCoroutine() { }

	// RVA: 0x3A2A Offset: 0x3A2A VA: 0x3A2A
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A2B Offset: 0x3A2B VA: 0x3A2B
	private void <Start>b__3_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x3A2C Offset: 0x3A2C VA: 0x3A2C
	private void <Start>b__3_1(float value) { }
}

===== C# end =====
*/

// ---- AudioManager$$Start ----
// C#: void AudioManager__Start (AudioManager_o* __this, const MethodInfo* method);

void AudioManager__Start(AudioManager_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_ram_0066498b == '\0') {
    unnamed_function_1099(&DAT_ram_0056758c);
    unnamed_function_1099(&DAT_ram_00567590);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_float__TypeInfo);
    unnamed_function_1099(&DAT_ram_005667e4);
    DAT_ram_0066498b = '\x01';
  }
  if (DAT_ram_0066498c == '\0') {
    unnamed_function_1099(&AudioManager__SetVolumeCoroutine_d__4_TypeInfo);
    DAT_ram_0066498c = '\x01';
  }
  iVar1 = unnamed_function_95402(AudioManager__SetVolumeCoroutine_d__4_TypeInfo);
  *(AudioManager_o **)(iVar1 + 0x10) = __this;
  *(undefined4 *)(iVar1 + 8) = 0;
  unnamed_function_44725(__this,iVar1,0);
  unnamed_function_45201(__this->musicSlider[0x34]._opaque,0);
  unnamed_function_45201(__this->sfxSlider[0x34]._opaque,0);
  iVar1 = __this->musicSlider[0x34]._opaque;
  uVar2 = unnamed_function_95402(UnityEngine_Events_UnityAction_float__TypeInfo);
  unnamed_function_71906(uVar2,__this,DAT_ram_0056758c,0);
  unnamed_function_71922(iVar1,uVar2,DAT_ram_005667e4);
  iVar1 = __this->sfxSlider[0x34]._opaque;
  uVar2 = unnamed_function_95402(UnityEngine_Events_UnityAction_float__TypeInfo);
  unnamed_function_71906(uVar2,__this,DAT_ram_00567590,0);
  unnamed_function_71922(iVar1,uVar2,DAT_ram_005667e4);
  return;
}

// ---- AudioManager$$SetVolumeCoroutine ----
// C#: System_Collections_IEnumerator_o* AudioManager__SetVolumeCoroutine (AudioManager_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
AudioManager__SetVolumeCoroutine(AudioManager_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_0066498c == '\0') {
    unnamed_function_1099(&AudioManager__SetVolumeCoroutine_d__4_TypeInfo);
    DAT_ram_0066498c = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(AudioManager__SetVolumeCoroutine_d__4_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- AudioManager$$.ctor ----
// C#: void AudioManager___ctor (AudioManager_o* __this, const MethodInfo* method);

void AudioManager___ctor(AudioManager_o *__this,MethodInfo *method)

{
  __this->normalizedValue = 20.0;
  unnamed_function_44622(__this,0);
  return;
}

// ---- AudioManager$$<Start>b__3_0 ----
// C#: void AudioManager___Start_b__3_0 (AudioManager_o* __this, float value, const MethodInfo* method);

void AudioManager___Start_b__3_0(AudioManager_o *__this,float value,MethodInfo *method)

{
  float param3;
  GameResources_o *pGVar1;
  undefined4 param1;
  int iVar2;
  float linear;
  
  if (DAT_ram_0066498d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d58);
    unnamed_function_1099(&StringLiteral_12040 /* "musicVolume" */);
    DAT_ram_0066498d = '\x01';
  }
  iVar2 = *(int *)(DAT_ram_00565d58 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  linear = __this->normalizedValue * value;
  if (linear < 20.0) {
    *(float *)(**(int **)(iVar2 + 0x5c) + 0x20) = linear;
    if (DAT_ram_00664997 == '\0') {
      unnamed_function_1099(&StringLiteral_12040 /* "musicVolume" */);
      DAT_ram_00664997 = '\x01';
    }
    param3 = -80.0;
    pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
    param1 = unnamed_function_63175(pGVar1->musicMasterMixerGroup,0);
    if (linear != 0.0) {
      param3 = HelperUtilities__LinearToDecibels(linear,(MethodInfo *)0x0);
    }
    unnamed_function_63173(param1,StringLiteral_12040 /* "musicVolume" */,param3,0);
    linear = __this->normalizedValue * value;
  }
  unnamed_function_44555(StringLiteral_12040 /* "musicVolume" */,linear,0);
  unnamed_function_44564(0);
  return;
}

// ---- AudioManager$$<Start>b__3_1 ----
// C#: void AudioManager___Start_b__3_1 (AudioManager_o* __this, float value, const MethodInfo* method);

void AudioManager___Start_b__3_1(AudioManager_o *__this,float value,MethodInfo *method)

{
  float param3;
  GameResources_o *pGVar1;
  undefined4 param1;
  int iVar2;
  float linear;
  
  if (DAT_ram_0066498e == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&StringLiteral_12799 /* "soundsVolume" */);
    DAT_ram_0066498e = '\x01';
  }
  iVar2 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  linear = __this->normalizedValue * value;
  if (linear < 20.0) {
    *(float *)(**(int **)(iVar2 + 0x5c) + 0x10) = linear;
    if (DAT_ram_006649a3 == '\0') {
      unnamed_function_1099(&StringLiteral_12799 /* "soundsVolume" */);
      DAT_ram_006649a3 = '\x01';
    }
    param3 = -80.0;
    pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
    param1 = unnamed_function_63175(pGVar1->soundsMasterMixerGroup,0);
    if (linear != 0.0) {
      param3 = HelperUtilities__LinearToDecibels(linear,(MethodInfo *)0x0);
    }
    unnamed_function_63173(param1,StringLiteral_12799 /* "soundsVolume" */,param3,0);
    linear = __this->normalizedValue * value;
  }
  unnamed_function_44555(StringLiteral_12799 /* "soundsVolume" */,linear,0);
  unnamed_function_44564(0);
  return;
}

