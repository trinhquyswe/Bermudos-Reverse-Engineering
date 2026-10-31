// Assembly-CSharp :: MusicManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MusicManager : SingletonMonobehaviourPersistent<MusicManager> // TypeDefIndex: 5714
{
	// Fields
	private AudioSource musicAudioSource; // 0x10
	private AudioClip currentAudioClip; // 0x14
	private Coroutine fadeOutMusicCoroutine; // 0x18
	private Coroutine fadeInMusicCoroutine; // 0x1C
	public float musicVolume; // 0x20
	private bool isPlayingFirstClip; // 0x24

	// Methods

	// RVA: 0x3A33 Offset: 0x3A33 VA: 0x3A33 Slot: 4
	protected override void Awake() { }

	// RVA: 0x3A34 Offset: 0x3A34 VA: 0x3A34
	private void Start() { }

	// RVA: 0x3A35 Offset: 0x3A35 VA: 0x3A35
	public void PlayBackgroundMusic() { }

	// RVA: 0x3A36 Offset: 0x3A36 VA: 0x3A36
	public void StopPlayingBackgroundMusic() { }

	// RVA: 0x3A37 Offset: 0x3A37 VA: 0x3A37
	public void PlayMusic(MusicTrackSO musicTrack, float fadeOutTime = 0.5, float fadeInTime = 0.5) { }

	// RVA: 0x3A38 Offset: 0x3A38 VA: 0x3A38
	public void StopMusic() { }

	[IteratorStateMachine(typeof(MusicManager.<PlayMusicRoutine>d__12))]
	// RVA: 0x3A39 Offset: 0x3A39 VA: 0x3A39
	private IEnumerator PlayMusicRoutine(MusicTrackSO musicTrack, float fadeOutTime, float fadeInTime) { }

	[IteratorStateMachine(typeof(MusicManager.<FadeOutMusic>d__13))]
	// RVA: 0x3A3A Offset: 0x3A3A VA: 0x3A3A
	private IEnumerator FadeOutMusic(float fadeOutTime) { }

	[IteratorStateMachine(typeof(MusicManager.<FadeInMusic>d__14))]
	// RVA: 0x3A3B Offset: 0x3A3B VA: 0x3A3B
	private IEnumerator FadeInMusic(MusicTrackSO musicTrack, float fadeInTime) { }

	// RVA: 0x3A3C Offset: 0x3A3C VA: 0x3A3C
	public void ChangeMusicVolume(float musicVolume) { }

	// RVA: 0x3A3D Offset: 0x3A3D VA: 0x3A3D
	public void SetMusicVolume(float musicVolume) { }

	// RVA: 0x3A3E Offset: 0x3A3E VA: 0x3A3E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MusicManager$$Awake ----
// C#: void MusicManager__Awake (MusicManager_o* __this, const MethodInfo* method);

void MusicManager__Awake(MusicManager_o *__this,MethodInfo *method)

{
  AudioSource_o *pAVar1;
  GameResources_o *pGVar2;
  
  if (DAT_ram_00664990 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e24);
    unnamed_function_1099(&DAT_ram_00565d54);
    DAT_ram_00664990 = '\x01';
  }
  unnamed_function_61265(__this,DAT_ram_00565d54);
  pAVar1 = (AudioSource_o *)unnamed_function_65370(__this,DAT_ram_00567e24);
  __this->musicAudioSource = pAVar1;
  pGVar2 = GameResources__get_Instance((MethodInfo *)0x0);
  unnamed_function_63178(pGVar2->musicOffSnapshot,0.0,0);
  return;
}

// ---- MusicManager$$Start ----
// C#: void MusicManager__Start (MusicManager_o* __this, const MethodInfo* method);

void MusicManager__Start(MusicManager_o *__this,MethodInfo *method)

{
  float param3;
  int iVar1;
  float linear;
  GameResources_o *pGVar2;
  undefined4 param1;
  
  if (DAT_ram_00664991 == '\0') {
    unnamed_function_1099(&StringLiteral_12040 /* "musicVolume" */);
    DAT_ram_00664991 = '\x01';
  }
  iVar1 = unnamed_function_44561(StringLiteral_12040 /* "musicVolume" */,0);
  if (iVar1 == 0) {
    linear = __this->musicVolume;
  }
  else {
    linear = unnamed_function_44557(StringLiteral_12040 /* "musicVolume" */,0);
    __this->musicVolume = linear;
  }
  if (DAT_ram_00664997 == '\0') {
    unnamed_function_1099(&StringLiteral_12040 /* "musicVolume" */);
    DAT_ram_00664997 = '\x01';
  }
  param3 = -80.0;
  pGVar2 = GameResources__get_Instance((MethodInfo *)0x0);
  param1 = unnamed_function_63175(pGVar2->musicMasterMixerGroup,0);
  if (linear != 0.0) {
    param3 = HelperUtilities__LinearToDecibels(linear,(MethodInfo *)0x0);
  }
  unnamed_function_63173(param1,StringLiteral_12040 /* "musicVolume" */,param3,0);
  MusicManager__PlayBackgroundMusic(__this,(MethodInfo *)__this);
  return;
}

// ---- MusicManager$$PlayBackgroundMusic ----
// C#: void MusicManager__PlayBackgroundMusic (MusicManager_o* __this, const MethodInfo* method);

void MusicManager__PlayBackgroundMusic(MusicManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  GameResources_o *pGVar2;
  int iVar3;
  float param3;
  MusicTrackSO_o *pMVar4;
  MusicTrackSO_o **ppMVar5;
  
  if (DAT_ram_00664992 == '\0') {
    unnamed_function_1099(&StringLiteral_6078 /* "PlayerBackgroundMusic" */);
    DAT_ram_00664992 = '\x01';
  }
  bVar1 = __this->isPlayingFirstClip;
  pGVar2 = GameResources__get_Instance((MethodInfo *)0x0);
  if (bVar1 == false) {
    pMVar4 = pGVar2->musicTrack2;
    if (DAT_ram_00664994 == '\0') {
      unnamed_function_1099(&MusicManager__PlayMusicRoutine_d__12_TypeInfo);
      DAT_ram_00664994 = '\x01';
    }
    iVar3 = unnamed_function_95402(MusicManager__PlayMusicRoutine_d__12_TypeInfo);
    *(undefined8 *)(iVar3 + 0x18) = 0x3f0000003f000000;
    *(MusicTrackSO_o **)(iVar3 + 0x14) = pMVar4;
    *(MusicManager_o **)(iVar3 + 0x10) = __this;
    *(undefined4 *)(iVar3 + 8) = 0;
    unnamed_function_44725(__this,iVar3,0);
    __this->isPlayingFirstClip = true;
    pGVar2 = GameResources__get_Instance((MethodInfo *)0x0);
    ppMVar5 = &pGVar2->musicTrack2;
  }
  else {
    pMVar4 = pGVar2->musicTrack1;
    if (DAT_ram_00664994 == '\0') {
      unnamed_function_1099(&MusicManager__PlayMusicRoutine_d__12_TypeInfo);
      DAT_ram_00664994 = '\x01';
    }
    iVar3 = unnamed_function_95402(MusicManager__PlayMusicRoutine_d__12_TypeInfo);
    *(undefined8 *)(iVar3 + 0x18) = 0x3f0000003f000000;
    *(MusicTrackSO_o **)(iVar3 + 0x14) = pMVar4;
    *(MusicManager_o **)(iVar3 + 0x10) = __this;
    *(undefined4 *)(iVar3 + 8) = 0;
    unnamed_function_44725(__this,iVar3,0);
    __this->isPlayingFirstClip = false;
    pGVar2 = GameResources__get_Instance((MethodInfo *)0x0);
    ppMVar5 = &pGVar2->musicTrack1;
  }
  param3 = unnamed_function_63119((*ppMVar5)->musicClip,0);
  unnamed_function_44715(__this,StringLiteral_6078 /* "PlayerBackgroundMusic" */,param3,0);
  return;
}

// ---- MusicManager$$StopPlayingBackgroundMusic ----
// C#: void MusicManager__StopPlayingBackgroundMusic (MusicManager_o* __this, const MethodInfo* method);

void MusicManager__StopPlayingBackgroundMusic(MusicManager_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664993 == '\0') {
    unnamed_function_1099(&StringLiteral_6070 /* "PlayBackgroundMusic" */);
    DAT_ram_00664993 = '\x01';
  }
  unnamed_function_63143(__this->musicAudioSource,0);
  unnamed_function_44719(__this,StringLiteral_6070 /* "PlayBackgroundMusic" */,0);
  return;
}

// ---- MusicManager$$PlayMusic ----
// C#: void MusicManager__PlayMusic (MusicManager_o* __this, MusicTrackSO_o* musicTrack, float fadeOutTime, float fadeInTime, const MethodInfo* method);

void MusicManager__PlayMusic
               (MusicManager_o *__this,MusicTrackSO_o *musicTrack,float fadeOutTime,float fadeInTime
               ,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_00664994 == '\0') {
    unnamed_function_1099(&MusicManager__PlayMusicRoutine_d__12_TypeInfo);
    DAT_ram_00664994 = '\x01';
  }
  param2 = unnamed_function_95402(MusicManager__PlayMusicRoutine_d__12_TypeInfo);
  *(float *)(param2 + 0x1c /* fadeInMusicCoroutine */) = fadeInTime;
  *(float *)(param2 + 0x18 /* fadeOutMusicCoroutine */) = fadeOutTime;
  *(MusicTrackSO_o **)(param2 + 0x14 /* currentAudioClip */) = musicTrack;
  *(MusicManager_o **)(param2 + 0x10 /* musicAudioSource */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- MusicManager$$StopMusic ----
// C#: void MusicManager__StopMusic (MusicManager_o* __this, const MethodInfo* method);

void MusicManager__StopMusic(MusicManager_o *__this,MethodInfo *method)

{
  unnamed_function_63143(__this->musicAudioSource,0);
  return;
}

// ---- MusicManager$$PlayMusicRoutine ----
// C#: System_Collections_IEnumerator_o* MusicManager__PlayMusicRoutine (MusicManager_o* __this, MusicTrackSO_o* musicTrack, float fadeOutTime, float fadeInTime, const MethodInfo* method);

System_Collections_IEnumerator_o *
MusicManager__PlayMusicRoutine
          (MusicManager_o *__this,MusicTrackSO_o *musicTrack,float fadeOutTime,float fadeInTime,
          MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664994 == '\0') {
    unnamed_function_1099(&MusicManager__PlayMusicRoutine_d__12_TypeInfo);
    DAT_ram_00664994 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(MusicManager__PlayMusicRoutine_d__12_TypeInfo);
  pSVar1[7]._opaque = (int)fadeInTime;
  pSVar1[6]._opaque = (int)fadeOutTime;
  pSVar1[5]._opaque = (int)musicTrack;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- MusicManager$$FadeOutMusic ----
// C#: System_Collections_IEnumerator_o* MusicManager__FadeOutMusic (MusicManager_o* __this, float fadeOutTime, const MethodInfo* method);

System_Collections_IEnumerator_o *
MusicManager__FadeOutMusic(MusicManager_o *__this,float fadeOutTime,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664995 == '\0') {
    unnamed_function_1099(&MusicManager__FadeOutMusic_d__13_TypeInfo);
    DAT_ram_00664995 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(MusicManager__FadeOutMusic_d__13_TypeInfo);
  pSVar1[4]._opaque = (int)fadeOutTime;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- MusicManager$$FadeInMusic ----
// C#: System_Collections_IEnumerator_o* MusicManager__FadeInMusic (MusicManager_o* __this, MusicTrackSO_o* musicTrack, float fadeInTime, const MethodInfo* method);

System_Collections_IEnumerator_o *
MusicManager__FadeInMusic
          (MusicManager_o *__this,MusicTrackSO_o *musicTrack,float fadeInTime,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664996 == '\0') {
    unnamed_function_1099(&MusicManager__FadeInMusic_d__14_TypeInfo);
    DAT_ram_00664996 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(MusicManager__FadeInMusic_d__14_TypeInfo);
  pSVar1[6]._opaque = (int)fadeInTime;
  pSVar1[5]._opaque = (int)musicTrack;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- MusicManager$$ChangeMusicVolume ----
// C#: void MusicManager__ChangeMusicVolume (MusicManager_o* __this, float musicVolume, const MethodInfo* method);

void MusicManager__ChangeMusicVolume(MusicManager_o *__this,float musicVolume,MethodInfo *method)

{
  float param3;
  GameResources_o *pGVar1;
  undefined4 param1;
  
  if (musicVolume < 20.0) {
    __this->musicVolume = musicVolume;
    if (DAT_ram_00664997 == '\0') {
      unnamed_function_1099(&StringLiteral_12040 /* "musicVolume" */);
      DAT_ram_00664997 = '\x01';
    }
    param3 = -80.0;
    pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
    param1 = unnamed_function_63175(pGVar1->musicMasterMixerGroup,0);
    if (musicVolume != 0.0) {
      param3 = HelperUtilities__LinearToDecibels(musicVolume,(MethodInfo *)0x0);
    }
    unnamed_function_63173(param1,StringLiteral_12040 /* "musicVolume" */,param3,0);
  }
  return;
}

// ---- MusicManager$$SetMusicVolume ----
// C#: void MusicManager__SetMusicVolume (MusicManager_o* __this, float musicVolume, const MethodInfo* method);

void MusicManager__SetMusicVolume(MusicManager_o *__this,float musicVolume,MethodInfo *method)

{
  float param3;
  GameResources_o *pGVar1;
  undefined4 param1;
  
  if (DAT_ram_00664997 == '\0') {
    unnamed_function_1099(&StringLiteral_12040 /* "musicVolume" */);
    DAT_ram_00664997 = '\x01';
  }
  param3 = -80.0;
  pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
  param1 = unnamed_function_63175(pGVar1->musicMasterMixerGroup,0);
  if (musicVolume != 0.0) {
    param3 = HelperUtilities__LinearToDecibels(musicVolume,(MethodInfo *)0x0);
  }
  unnamed_function_63173(param1,StringLiteral_12040 /* "musicVolume" */,param3,0);
  return;
}

// ---- MusicManager$$.ctor ----
// C#: void MusicManager___ctor (MusicManager_o* __this, const MethodInfo* method);

void MusicManager___ctor(MusicManager_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664998 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d50);
    DAT_ram_00664998 = '\x01';
  }
  __this->isPlayingFirstClip = true;
  __this->musicVolume = 20.0;
  AmmoAnimation___ctor((AmmoAnimation_o *)__this,DAT_ram_00565d50);
  return;
}

