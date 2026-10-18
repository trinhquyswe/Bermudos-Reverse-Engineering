// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MusicManager  (Assembly-CSharp)  -  17 function(s)

// ---- MusicManager::Start   [wasm func86580 -> ram:81a3d270 ; ghidra: MusicManager::Start]

void MusicManager__Start(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (cRam00664992 == '\0') {
    unnamed_function_1099(0x576930);
    cRam00664992 = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x24);
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  if (cVar1 == '\0') {
    uVar3 = *(undefined4 *)(iVar2 + 0x4c);
    if (cRam00664994 == '\0') {
      unnamed_function_1099(0x55e40c);
      cRam00664994 = '\x01';
    }
    iVar2 = unnamed_function_95402(uRam0055e40c);
    *(undefined8 *)(iVar2 + 0x18) = 0x3f0000003f000000;
    *(undefined4 *)(iVar2 + 0x14) = uVar3;
    *(int *)(iVar2 + 0x10) = param_1;
    *(undefined4 *)(iVar2 + 8) = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar2,0);
    *(undefined1 *)(param_1 + 0x24) = 1;
    iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
    piVar4 = (int *)(iVar2 + 0x4c);
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 0x48);
    if (cRam00664994 == '\0') {
      unnamed_function_1099(0x55e40c);
      cRam00664994 = '\x01';
    }
    iVar2 = unnamed_function_95402(uRam0055e40c);
    *(undefined8 *)(iVar2 + 0x18) = 0x3f0000003f000000;
    *(undefined4 *)(iVar2 + 0x14) = uVar3;
    *(int *)(iVar2 + 0x10) = param_1;
    *(undefined4 *)(iVar2 + 8) = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar2,0);
    *(undefined1 *)(param_1 + 0x24) = 0;
    iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
    piVar4 = (int *)(iVar2 + 0x48);
  }
  uVar3 = UnityEngine_AudioClip___ctor(*(undefined4 *)(*piVar4 + 0x10),0);
  UnityEngine_MonoBehaviour__CancelInvoke(param_1,uRam00576930,uVar3,0);
  return;
}



// ---- MusicManager::FadeInMusic   [wasm func86697 -> ram:81a437e8 ; ghidra: MusicManager::FadeInMusic]

void MusicManager__FadeInMusic(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 < 20.0) {
    *(float *)(param_1 + 0x20) = param_2;
    if (cRam00664997 == '\0') {
      unnamed_function_1099(0x57c658);
      cRam00664997 = '\x01';
    }
    uVar1 = 0xc2a00000;
    iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
    uVar3 = UnityEngine_Audio_AudioMixer__GetFloat(*(undefined4 *)(iVar2 + 0x38),0);
    if (param_2 != 0.0) {
      uVar1 = HelperUtilities__GetMousePositionInUI(param_2,0);
    }
    UnityEngine_Audio_AudioMixer__TransitionToSnapshotInternal(uVar3,uRam0057c658,uVar1,0);
  }
  return;
}



// ---- MusicManager::Awake   [wasm func86703 -> ram:81a43b87 ; ghidra: MusicManager::Awake]

void MusicManager__Awake(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (cRam00664991 == '\0') {
    unnamed_function_1099(0x57c658);
    cRam00664991 = '\x01';
  }
  iVar2 = UnityEngine_PlayerPrefs__GetString_1(uRam0057c658,0);
  if (iVar2 == 0) {
    fVar3 = *(float *)(param_1 + 0x20);
  }
  else {
    fVar3 = (float)UnityEngine_PlayerPrefs__GetFloat(uRam0057c658,0);
    *(float *)(param_1 + 0x20) = fVar3;
  }
  if (cRam00664997 == '\0') {
    unnamed_function_1099(0x57c658);
    cRam00664997 = '\x01';
  }
  uVar1 = 0xc2a00000;
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  uVar4 = UnityEngine_Audio_AudioMixer__GetFloat(*(undefined4 *)(iVar2 + 0x38),0);
  if (fVar3 != 0.0) {
    uVar1 = HelperUtilities__GetMousePositionInUI(fVar3,0);
  }
  UnityEngine_Audio_AudioMixer__TransitionToSnapshotInternal(uVar4,uRam0057c658,uVar1,0);
  MusicManager__Start(param_1,param_1);
  return;
}



// ---- MusicManager::ChangeMusicVolume   [wasm func86704 -> ram:81a43c43 ; ghidra: MusicManager::ChangeMusicVolume]

void MusicManager__ChangeMusicVolume(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam00664997 == '\0') {
    unnamed_function_1099(0x57c658);
    cRam00664997 = '\x01';
  }
  uVar1 = 0xc2a00000;
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  uVar3 = UnityEngine_Audio_AudioMixer__GetFloat(*(undefined4 *)(iVar2 + 0x38),0);
  if (param_1 != 0.0) {
    uVar1 = HelperUtilities__GetMousePositionInUI(param_1,0);
  }
  UnityEngine_Audio_AudioMixer__TransitionToSnapshotInternal(uVar3,uRam0057c658,uVar1,0);
  return;
}



// ---- MusicManager::StopPlayingBackgroundMusic   [wasm func86705 -> ram:81a43ca6 ; ghidra: MusicManager::StopPlayingBackgroundMusic]

void MusicManager__StopPlayingBackgroundMusic
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (cRam00664994 == '\0') {
    unnamed_function_1099(0x55e40c);
    cRam00664994 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e40c);
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  return;
}



// ---- MusicManager::PlayBackgroundMusic   [wasm func86706 -> ram:81a43d01 ; ghidra: MusicManager::PlayBackgroundMusic]

void MusicManager__PlayBackgroundMusic(int param_1)

{
  if (cRam00664993 == '\0') {
    unnamed_function_1099(0x576910);
    cRam00664993 = '\x01';
  }
  UnityEngine_AudioSource__SetScheduledEndTime(*(undefined4 *)(param_1 + 0x10),0);
  multiple_2_UnityEngine_MonoBehaviour__Invoke(param_1,uRam00576910,0);
  return;
}



// ---- MusicManager::StopMusic   [wasm func86708 -> ram:81a43d4b ; ghidra: MusicManager::StopMusic]

int MusicManager__StopMusic
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (cRam00664994 == '\0') {
    unnamed_function_1099(0x55e40c);
    cRam00664994 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e40c);
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- MusicManager::PlayMusicRoutine   [wasm func86709 -> ram:81a43d9d ; ghidra: MusicManager::PlayMusicRoutine]

int MusicManager__PlayMusicRoutine(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664995 == '\0') {
    unnamed_function_1099(0x55e408);
    cRam00664995 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e408);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- MusicManager::FadeOutMusic   [wasm func86710 -> ram:81a43dda ; ghidra: MusicManager::FadeOutMusic]

int MusicManager__FadeOutMusic(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (cRam00664996 == '\0') {
    unnamed_function_1099(0x55e404);
    cRam00664996 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e404);
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- MusicManager::SetMusicVolume   [wasm func86711 -> ram:81a43e25 ; ghidra: MusicManager::SetMusicVolume]

void MusicManager__SetMusicVolume(int param_1)

{
  if (cRam00664998 == '\0') {
    unnamed_function_1099(0x565d50);
    cRam00664998 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0x41a00000;
  multiple_127_System_Collections_Generic_ShortEnumEqualityComparer_1__GetHashCode
            (param_1,uRam00565d50);
  return;
}



// ---- MusicManager::FadeInMusic_d_14_System_IDisposable_Dispose   [wasm func86712 -> ram:81a43e66 ; ghidra: MusicManager+<FadeInMusic>d__14::System.IDisposable.Dispose]

undefined4 MusicManager_<FadeInMusic>d__14__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (cRam00664999 == '\0') {
    unnamed_function_1099(0x55d134);
    cRam00664999 = '\x01';
  }
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = *(int *)(param_1 + 0x10);
    UnityEngine_AudioSource__get_clip
              (*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10),0);
    UnityEngine_AudioSource__get_volume
              (*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),0);
    UnityEngine_AudioSource__set_clip(*(undefined4 *)(iVar3 + 0x10),0);
    iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
    UnityEngine_Audio_AudioMixerSnapshot__get_audioMixer
              (*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(param_1 + 0x18),0);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar1 = unnamed_function_95402(uRam0055d134);
    multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,uVar2,0);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar2 = 1;
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 8) != 1) {
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  return uVar1;
}



// ---- MusicManager::FadeInMusic_d_14_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86713 -> ram:81a43f2b ; ghidra: MusicManager+<FadeInMusic>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void MusicManager_<FadeInMusic>d__14__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f60c);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- MusicManager::FadeOutMusic_d_13_System_IDisposable_Dispose   [wasm func86714 -> ram:81a43f53 ; ghidra: MusicManager+<FadeOutMusic>d__13::System.IDisposable.Dispose]

undefined4 MusicManager_<FadeOutMusic>d__13__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (cRam0066499a == '\0') {
    unnamed_function_1099(0x55d134);
    cRam0066499a = '\x01';
  }
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
    UnityEngine_Audio_AudioMixerSnapshot__get_audioMixer
              (*(undefined4 *)(iVar3 + 0x3c),*(undefined4 *)(param_1 + 0x10),0);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = unnamed_function_95402(uRam0055d134);
    multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,uVar2,0);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar2 = 1;
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 8) != 1) {
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  return uVar1;
}



// ---- MusicManager::FadeOutMusic_d_13_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86715 -> ram:81a43fe2 ; ghidra: MusicManager+<FadeOutMusic>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void MusicManager_<FadeOutMusic>d__13__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f610);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- MusicManager::PlayMusicRoutine_d_12_System_IDisposable_Dispose   [wasm func86716 -> ram:81a4400a ; ghidra: MusicManager+<PlayMusicRoutine>d__12::System.IDisposable.Dispose]

undefined4 MusicManager_<PlayMusicRoutine>d__12__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = 0;
  if (cRam0066499b == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam0066499b = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  uVar1 = 0xffffffff;
  iVar4 = *(int *)(param_1 + 8);
  uVar6 = 3;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(iVar3 + 0x18) != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(iVar3,*(int *)(iVar3 + 0x18),0);
    }
    if (*(int *)(iVar3 + 0x1c) != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(iVar3,*(int *)(iVar3 + 0x1c),0);
    }
    uVar1 = *(undefined4 *)(iVar3 + 0x14);
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10);
    uVar2 = 0;
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    iVar4 = UnityEngine_Camera__get_targetTexture(uVar5,uVar1,0);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10);
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      if (cRam00664995 == '\0') {
        unnamed_function_1099(0x55e408);
        cRam00664995 = '\x01';
      }
      iVar4 = unnamed_function_95402(uRam0055e408);
      *(undefined4 *)(iVar4 + 0x10) = uVar2;
      *(undefined4 *)(iVar4 + 8) = 0;
      uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(iVar3,iVar4,0);
      *(undefined4 *)(iVar3 + 0x18) = uVar2;
      uVar6 = 1;
    }
  }
  else if (iVar4 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    if (cRam00664996 == '\0') {
      unnamed_function_1099(0x55e404);
      cRam00664996 = '\x01';
    }
    iVar4 = unnamed_function_95402(uRam0055e404);
    *(undefined4 *)(iVar4 + 0x18) = uVar2;
    *(undefined4 *)(iVar4 + 0x14) = uVar6;
    *(int *)(iVar4 + 0x10) = iVar3;
    *(undefined4 *)(iVar4 + 8) = 0;
    uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(iVar3,iVar4,0);
    *(undefined4 *)(iVar3 + 0x1c) = uVar2;
    uVar6 = 2;
  }
  else if (iVar4 != 2) {
    if (iVar4 != 3) {
      return 0;
    }
    goto code_r0x81a441a0;
  }
  uVar1 = uVar6;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = 1;
code_r0x81a441a0:
  *(undefined4 *)(param_1 + 8) = uVar1;
  return uVar2;
}



// ---- MusicManager::PlayMusicRoutine_d_12_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86717 -> ram:81a441ac ; ghidra: MusicManager+<PlayMusicRoutine>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void MusicManager_<PlayMusicRoutine>d__12__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f614);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- MusicManager::PlayMusicRoutine_d_12_System_Collections_IEnumerator_get_Current   [wasm func86718 -> ram:81a441d3 ; ghidra: MusicManager+<PlayMusicRoutine>d__12::System.Collections.IEnumerator.get_Current]

void MusicManager_<PlayMusicRoutine>d__12__System_Collections_IEnumerator_get_Current(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  UnityEngine_RuntimeInitializeOnLoadMethodAttribute__set_loadType(param_1,0);
  return;
}



