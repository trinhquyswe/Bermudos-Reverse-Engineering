// Assembly-CSharp :: SoundEffectManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SoundEffectManager : SingletonMonobehaviourPersistent<SoundEffectManager> // TypeDefIndex: 5718
{
	// Fields
	public float soundsVolume; // 0x10
	private List<SoundEffect> soundEffects; // 0x14

	// Methods

	// RVA: 0x3A57 Offset: 0x3A57 VA: 0x3A57
	private void Start() { }

	// RVA: 0x3A58 Offset: 0x3A58 VA: 0x3A58
	public void PlaySoundEffect(SoundEffectSO soundEffect) { }

	// RVA: 0x3663 Offset: 0x3663 VA: 0x3663
	public void PlaySoundEffectPersistent(SoundEffectSO soundEffect, bool isLoop) { }

	// RVA: 0x3A59 Offset: 0x3A59 VA: 0x3A59
	public void StopSoundEffectLoop(SoundEffectSO soundEffect) { }

	[IteratorStateMachine(typeof(SoundEffectManager.<DisableSound>d__6))]
	// RVA: 0x3A5A Offset: 0x3A5A VA: 0x3A5A
	private IEnumerator DisableSound(SoundEffect sound, float soundDuration) { }

	// RVA: 0x3A5B Offset: 0x3A5B VA: 0x3A5B
	public void ChangeSoundsVolume(float soundsVolume) { }

	// RVA: 0x3A5C Offset: 0x3A5C VA: 0x3A5C
	private void SetSoundsVolume(float soundsVolume) { }

	// RVA: 0x3A5D Offset: 0x3A5D VA: 0x3A5D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- SoundEffectManager$$PlaySoundEffectPersistent ----
// C#: void SoundEffectManager__PlaySoundEffectPersistent (SoundEffectManager_o* __this, SoundEffectSO_o* soundEffect, bool isLoop, const MethodInfo* method);

void SoundEffectManager__PlaySoundEffectPersistent
               (SoundEffectManager_o *__this,SoundEffectSO_o *soundEffect,bool isLoop,
               MethodInfo *method)

{
  undefined3 in_register_20000021;
  UnityEngine_Component_o *param1;
  undefined4 param1_00;
  int iVar1;
  UnityEngine_GameObject_o *prefab;
  PoolManager_o *__this_00;
  UnityEngine_Component_o *pUVar2;
  List_o *param1_01;
  uint uVar3;
  Quaternion_o local_30;
  Vector3_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_006649a0 == '\0') {
    unnamed_function_1099(&DAT_ram_00563b3c);
    unnamed_function_1099(&DAT_ram_00565d64);
    unnamed_function_1099(&SoundEffect_TypeInfo);
    DAT_ram_006649a0 = '\x01';
  }
  iVar1 = *(int *)(DAT_ram_00565d64 + 0x10);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = unnamed_function_95087(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = unnamed_function_95087(iVar1);
  }
  prefab = (UnityEngine_GameObject_o *)soundEffect->soundPrefab;
  __this_00 = (PoolManager_o *)**(undefined4 **)(iVar1 + 0x5c);
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_10.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_20.z = local_10.z;
  local_20.x = local_10.x;
  local_20.y = local_10.y;
  local_30._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_30._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  param1 = PoolManager__ReuseComponent(__this_00,prefab,&local_20,&local_30,(MethodInfo *)&local_30)
  ;
  if (param1 != (UnityEngine_Component_o *)0x0) {
    if (((uint)*(byte *)(param1->_opaque + 0xb8) < (uint)*(byte *)(SoundEffect_TypeInfo + 0xb8)) ||
       (*(int *)(*(int *)(param1->_opaque + 100) + (uint)*(byte *)(SoundEffect_TypeInfo + 0xb8) * 4
                + -4) != SoundEffect_TypeInfo)) {
      unnamed_function_1116(param1,SoundEffect_TypeInfo);
      do {
        halt_trap();
      } while( true );
    }
  }
  pUVar2 = param1 + 4;
  unnamed_function_63131(pUVar2->_opaque,soundEffect->soundEffectVolume,0);
  unnamed_function_63136(pUVar2->_opaque,soundEffect->soundEffectClip,0);
  unnamed_function_63125(pUVar2->_opaque,soundEffect->soundEffectPitch,0);
  param1[5]._opaque = (int)soundEffect;
  unnamed_function_63147(pUVar2->_opaque,CONCAT31(in_register_20000021,isLoop),0);
  param1_00 = unnamed_function_44644(param1,0);
  unnamed_function_44686(param1_00,1,0);
  iVar1 = DAT_ram_00563b3c;
  param1_01 = __this->soundEffects;
  param1_01[4]._opaque = param1_01[4]._opaque + 1;
  uVar3 = param1_01[3]._opaque;
  if (uVar3 < *(uint *)(param1_01[2]._opaque + 0xc)) {
    param1_01[3]._opaque = uVar3 + 1;
    *(UnityEngine_Component_o **)(param1_01[2]._opaque + uVar3 * 4 + 0x10) = param1;
  }
  else {
    unnamed_function_6534
              (param1_01,param1,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
  }
  return;
}

// ---- SoundEffectManager$$Start ----
// C#: void SoundEffectManager__Start (SoundEffectManager_o* __this, const MethodInfo* method);

void SoundEffectManager__Start(SoundEffectManager_o *__this,MethodInfo *method)

{
  float param3;
  int iVar1;
  float linear;
  GameResources_o *pGVar2;
  undefined4 param1;
  
  if (DAT_ram_0066499e == '\0') {
    unnamed_function_1099(&StringLiteral_12799 /* "soundsVolume" */);
    DAT_ram_0066499e = '\x01';
  }
  iVar1 = unnamed_function_44561(StringLiteral_12799 /* "soundsVolume" */,0);
  if (iVar1 == 0) {
    linear = __this->soundsVolume;
  }
  else {
    linear = unnamed_function_44557(StringLiteral_12799 /* "soundsVolume" */,0);
    __this->soundsVolume = linear;
  }
  if (DAT_ram_006649a3 == '\0') {
    unnamed_function_1099(&StringLiteral_12799 /* "soundsVolume" */);
    DAT_ram_006649a3 = '\x01';
  }
  param3 = -80.0;
  pGVar2 = GameResources__get_Instance((MethodInfo *)0x0);
  param1 = unnamed_function_63175(pGVar2->soundsMasterMixerGroup,0);
  if (linear != 0.0) {
    param3 = HelperUtilities__LinearToDecibels(linear,(MethodInfo *)0x0);
  }
  unnamed_function_63173(param1,StringLiteral_12799 /* "soundsVolume" */,param3,0);
  return;
}

// ---- SoundEffectManager$$PlaySoundEffect ----
// C#: void SoundEffectManager__PlaySoundEffect (SoundEffectManager_o* __this, SoundEffectSO_o* soundEffect, const MethodInfo* method);

void SoundEffectManager__PlaySoundEffect
               (SoundEffectManager_o *__this,SoundEffectSO_o *soundEffect,MethodInfo *method)

{
  UnityEngine_Component_o *param1;
  undefined4 param1_00;
  float fVar1;
  int iVar2;
  UnityEngine_GameObject_o *prefab;
  PoolManager_o *__this_00;
  UnityEngine_Component_o *pUVar3;
  Quaternion_o local_30;
  Vector3_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_0066499f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d64);
    unnamed_function_1099(&SoundEffect_TypeInfo);
    DAT_ram_0066499f = '\x01';
  }
  iVar2 = *(int *)(DAT_ram_00565d64 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  prefab = (UnityEngine_GameObject_o *)soundEffect->soundPrefab;
  __this_00 = (PoolManager_o *)**(undefined4 **)(iVar2 + 0x5c);
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  local_10.z = *(float *)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  local_10._0_8_ = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_20.z = local_10.z;
  local_20.x = local_10.x;
  local_20.y = local_10.y;
  local_30._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_30._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  param1 = PoolManager__ReuseComponent(__this_00,prefab,&local_20,&local_30,(MethodInfo *)&local_30)
  ;
  if (param1 != (UnityEngine_Component_o *)0x0) {
    if (((uint)*(byte *)(param1->_opaque + 0xb8) < (uint)*(byte *)(SoundEffect_TypeInfo + 0xb8)) ||
       (*(int *)(*(int *)(param1->_opaque + 100) + (uint)*(byte *)(SoundEffect_TypeInfo + 0xb8) * 4
                + -4) != SoundEffect_TypeInfo)) {
      unnamed_function_1116(param1,SoundEffect_TypeInfo);
      do {
        halt_trap();
      } while( true );
    }
  }
  pUVar3 = param1 + 4;
  unnamed_function_63131(pUVar3->_opaque,soundEffect->soundEffectVolume,0);
  unnamed_function_63136(pUVar3->_opaque,soundEffect->soundEffectClip,0);
  unnamed_function_63125(pUVar3->_opaque,soundEffect->soundEffectPitch,0);
  param1[5]._opaque = (int)soundEffect;
  unnamed_function_63147(pUVar3->_opaque,0,0);
  param1_00 = unnamed_function_44644(param1,0);
  unnamed_function_44686(param1_00,1,0);
  fVar1 = unnamed_function_63119(soundEffect->soundEffectClip,0);
  if (DAT_ram_006649a2 == '\0') {
    unnamed_function_1099(&SoundEffectManager__DisableSound_d__6_TypeInfo);
    DAT_ram_006649a2 = '\x01';
  }
  iVar2 = unnamed_function_95402(SoundEffectManager__DisableSound_d__6_TypeInfo);
  *(UnityEngine_Component_o **)(iVar2 + 0x14) = param1;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(float *)(iVar2 + 0x10) = fVar1;
  unnamed_function_44725(__this,iVar2,0);
  return;
}

// ---- SoundEffectManager$$StopSoundEffectLoop ----
// C#: void SoundEffectManager__StopSoundEffectLoop (SoundEffectManager_o* __this, SoundEffectSO_o* soundEffect, const MethodInfo* method);

void SoundEffectManager__StopSoundEffectLoop
               (SoundEffectManager_o *__this,SoundEffectSO_o *soundEffect,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_18;
  undefined8 *local_14;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_006649a1 == '\0') {
    unnamed_function_1099(&DAT_ram_005614a0);
    unnamed_function_1099(&DAT_ram_005614a4);
    unnamed_function_1099(&DAT_ram_005614a8);
    unnamed_function_1099(&DAT_ram_00563b40);
    unnamed_function_1099(&DAT_ram_00563b44);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006649a1 = '\x01';
  }
  local_8 = 0;
  local_10 = 0;
  unnamed_function_6549(&local_10,__this->soundEffects,DAT_ram_00563b40);
  local_18 = 0;
  local_14 = &local_10;
  do {
    DAT_ram_005ddf34 = 0;
    iVar1 = import::env::invoke_iii
                      (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10,
                       DAT_ram_005614a4);
    iVar4 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar4 == 1) {
      uVar3 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a39103;
    }
    if (iVar1 == 0) {
      DAT_ram_005ddf34 = 0;
      return;
    }
    iVar4 = local_8._4_4_;
    uVar3 = *(undefined4 *)(local_8._4_4_ + 0x14);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      DAT_ram_005ddf34 = 0;
      import::env::invoke_vi(0xfc,UnityEngine_Object_TypeInfo);
      iVar1 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar1 == 1) {
        uVar3 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a39103;
      }
    }
    DAT_ram_005ddf34 = 0;
    iVar2 = import::env::invoke_iiii
                      (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x27,uVar3,soundEffect,0);
    iVar1 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar1 == 1) {
      uVar3 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a39103;
    }
  } while (iVar2 == 0);
  DAT_ram_005ddf34 = 0;
  uVar3 = import::env::invoke_iii(s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x1b,iVar4,0);
  if (DAT_ram_005ddf34 != 1) {
    DAT_ram_005ddf34 = 0;
    import::env::invoke_viii(s___Scripting__UnityEngine__XR__Me_ram_00001f0e + 0x24,uVar3,0,0);
    if (DAT_ram_005ddf34 != 1) {
      DAT_ram_005ddf34 = 0;
      import::env::invoke_iiii
                (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x36,__this->soundEffects,iVar4,
                 DAT_ram_00563b44);
      iVar4 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar4 != 1) {
        DAT_ram_005ddf34 = 0;
        return;
      }
      uVar3 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a39103;
    }
  }
  DAT_ram_005ddf34 = 0;
  uVar3 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a39103:
  iVar4 = import::env::getTempRet0();
  iVar1 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
  if (iVar4 == iVar1) {
    piVar5 = (int *)import::env::__cxa_begin_catch(uVar3);
    iVar1 = *piVar5;
    DAT_ram_005ddf34 = 0;
    local_18 = iVar1;
    import::env::invoke_v(0x3a);
    iVar4 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar4 != 1) {
      if (iVar1 == 0) {
        DAT_ram_005ddf34 = 0;
        return;
      }
      unnamed_function_1088(iVar1);
      do {
        halt_trap();
      } while( true );
    }
    uVar3 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  DAT_ram_005ddf34 = 0;
  import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x23,&local_18);
  iVar4 = DAT_ram_005ddf34;
  DAT_ram_005ddf34 = 0;
  if (iVar4 != 1) {
    import::env::__resumeException(uVar3);
    do {
      halt_trap();
    } while( true );
  }
  import::env::__cxa_find_matching_catch_3(0);
  import::env::getTempRet0();
  unnamed_function_642();
  do {
    halt_trap();
  } while( true );
}

// ---- SoundEffectManager$$DisableSound ----
// C#: System_Collections_IEnumerator_o* SoundEffectManager__DisableSound (SoundEffectManager_o* __this, SoundEffect_o* sound, float soundDuration, const MethodInfo* method);

System_Collections_IEnumerator_o *
SoundEffectManager__DisableSound
          (SoundEffectManager_o *__this,SoundEffect_o *sound,float soundDuration,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_006649a2 == '\0') {
    unnamed_function_1099(&SoundEffectManager__DisableSound_d__6_TypeInfo);
    DAT_ram_006649a2 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(SoundEffectManager__DisableSound_d__6_TypeInfo);
  pSVar1[5]._opaque = (int)sound;
  pSVar1[2]._opaque = 0;
  pSVar1[4]._opaque = (int)soundDuration;
  return pSVar1;
}

// ---- SoundEffectManager$$ChangeSoundsVolume ----
// C#: void SoundEffectManager__ChangeSoundsVolume (SoundEffectManager_o* __this, float soundsVolume, const MethodInfo* method);

void SoundEffectManager__ChangeSoundsVolume
               (SoundEffectManager_o *__this,float soundsVolume,MethodInfo *method)

{
  float param3;
  GameResources_o *pGVar1;
  undefined4 param1;
  
  if (soundsVolume < 20.0) {
    __this->soundsVolume = soundsVolume;
    if (DAT_ram_006649a3 == '\0') {
      unnamed_function_1099(&StringLiteral_12799 /* "soundsVolume" */);
      DAT_ram_006649a3 = '\x01';
    }
    param3 = -80.0;
    pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
    param1 = unnamed_function_63175(pGVar1->soundsMasterMixerGroup,0);
    if (soundsVolume != 0.0) {
      param3 = HelperUtilities__LinearToDecibels(soundsVolume,(MethodInfo *)0x0);
    }
    unnamed_function_63173(param1,StringLiteral_12799 /* "soundsVolume" */,param3,0);
  }
  return;
}

// ---- SoundEffectManager$$SetSoundsVolume ----
// C#: void SoundEffectManager__SetSoundsVolume (SoundEffectManager_o* __this, float soundsVolume, const MethodInfo* method);

void SoundEffectManager__SetSoundsVolume
               (SoundEffectManager_o *__this,float soundsVolume,MethodInfo *method)

{
  float param3;
  GameResources_o *pGVar1;
  undefined4 param1;
  
  if (DAT_ram_006649a3 == '\0') {
    unnamed_function_1099(&StringLiteral_12799 /* "soundsVolume" */);
    DAT_ram_006649a3 = '\x01';
  }
  param3 = -80.0;
  pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
  param1 = unnamed_function_63175(pGVar1->soundsMasterMixerGroup,0);
  if (soundsVolume != 0.0) {
    param3 = HelperUtilities__LinearToDecibels(soundsVolume,(MethodInfo *)0x0);
  }
  unnamed_function_63173(param1,StringLiteral_12799 /* "soundsVolume" */,param3,0);
  return;
}

// ---- SoundEffectManager$$.ctor ----
// C#: void SoundEffectManager___ctor (SoundEffectManager_o* __this, const MethodInfo* method);

void SoundEffectManager___ctor(SoundEffectManager_o *__this,MethodInfo *method)

{
  List_o *param1;
  
  if (DAT_ram_006649a4 == '\0') {
    unnamed_function_1099(&DAT_ram_00563b38);
    unnamed_function_1099(&System_Collections_Generic_List_SoundEffect__TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d68);
    DAT_ram_006649a4 = '\x01';
  }
  __this->soundsVolume = 10.0;
  param1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_SoundEffect__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00563b38);
  __this->soundEffects = param1;
  AmmoAnimation___ctor((AmmoAnimation_o *)__this,DAT_ram_00565d68);
  return;
}

