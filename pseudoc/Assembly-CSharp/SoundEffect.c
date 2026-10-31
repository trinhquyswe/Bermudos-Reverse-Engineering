// Assembly-CSharp :: SoundEffect
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SoundEffect : MonoBehaviour // TypeDefIndex: 5716
{
	// Fields
	private AudioSource audioSource; // 0x10
	[HideInInspector]
	public SoundEffectSO soundEffect; // 0x14

	// Methods

	// RVA: 0x3A52 Offset: 0x3A52 VA: 0x3A52
	private void Awake() { }

	// RVA: 0x3A53 Offset: 0x3A53 VA: 0x3A53
	private void OnEnable() { }

	// RVA: 0x3A54 Offset: 0x3A54 VA: 0x3A54
	private void OnDisable() { }

	// RVA: 0x3A55 Offset: 0x3A55 VA: 0x3A55
	public void SetSound(SoundEffectSO soundEffect, bool isLoop = False) { }

	// RVA: 0x3A56 Offset: 0x3A56 VA: 0x3A56
	public void .ctor() { }
}

===== C# end =====
*/

// ---- SoundEffect$$Awake ----
// C#: void SoundEffect__Awake (SoundEffect_o* __this, const MethodInfo* method);

void SoundEffect__Awake(SoundEffect_o *__this,MethodInfo *method)

{
  AudioSource_o *pAVar1;
  
  if (DAT_ram_0066499c == '\0') {
    unnamed_function_1099(&DAT_ram_00567e24);
    DAT_ram_0066499c = '\x01';
  }
  pAVar1 = (AudioSource_o *)unnamed_function_65370(__this,DAT_ram_00567e24);
  __this->audioSource = pAVar1;
  return;
}

// ---- SoundEffect$$OnEnable ----
// C#: void SoundEffect__OnEnable (SoundEffect_o* __this, const MethodInfo* method);

void SoundEffect__OnEnable(SoundEffect_o *__this,MethodInfo *method)

{
  undefined4 param1;
  int iVar1;
  
  if (DAT_ram_0066499d == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_0066499d = '\x01';
  }
  param1 = unnamed_function_63135(__this->audioSource,0);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,0,0);
  if (iVar1 != 0) {
    unnamed_function_63137(__this->audioSource,0);
  }
  return;
}

// ---- SoundEffect$$OnDisable ----
// C#: void SoundEffect__OnDisable (SoundEffect_o* __this, const MethodInfo* method);

void MusicManager__StopMusic(MusicManager_o *__this,MethodInfo *method)

{
  unnamed_function_63143(__this->musicAudioSource,0);
  return;
}

// ---- SoundEffect$$SetSound ----
// C#: void SoundEffect__SetSound (SoundEffect_o* __this, SoundEffectSO_o* soundEffect, bool isLoop, const MethodInfo* method);

void SoundEffect__SetSound
               (SoundEffect_o *__this,SoundEffectSO_o *soundEffect,bool isLoop,MethodInfo *method)

{
  undefined3 in_register_20000021;
  
  unnamed_function_63131(__this->audioSource,soundEffect->soundEffectVolume,0);
  unnamed_function_63136(__this->audioSource,soundEffect->soundEffectClip,0);
  unnamed_function_63125(__this->audioSource,soundEffect->soundEffectPitch,0);
  __this->soundEffect = soundEffect;
  unnamed_function_63147(__this->audioSource,CONCAT31(in_register_20000021,isLoop),0);
  return;
}

// ---- SoundEffect$$.ctor ----
// C#: void SoundEffect___ctor (SoundEffect_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

