// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: SoundEffectManager  (Assembly-CSharp)  -  10 function(s)

// ---- SoundEffectManager::Start   [wasm func86391 -> ram:81a349c0 ; ghidra: SoundEffectManager::Start]

void SoundEffectManager__Start(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam0066499f == '\0') {
    unnamed_function_1099(0x565d64);
    unnamed_function_1099(0x55c78c);
    cRam0066499f = '\x01';
  }
  iVar2 = *(int *)(iRam00565d64 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = **(undefined4 **)(iVar2 + 0x5c);
  if (cRam00664829 == '\0') {
    unnamed_function_1099(0x55d048);
    cRam00664829 = '\x01';
  }
  uStack_8 = *(undefined4 *)(*(undefined8 **)(iRam0055d048 + 0x5c) + 1);
  uStack_10 = **(undefined8 **)(iRam0055d048 + 0x5c);
  if (cRam006603e8 == '\0') {
    unnamed_function_1099(0x55c148);
    cRam006603e8 = '\x01';
  }
  uStack_18 = uStack_8;
  uStack_20 = uStack_10;
  uStack_28 = (*(undefined8 **)(iRam0055c148 + 0x5c))[1];
  uStack_30 = **(undefined8 **)(iRam0055c148 + 0x5c);
  piVar1 = (int *)PoolManager__CreatePool(uVar4,uVar3,&uStack_20,&uStack_30,&uStack_30);
  if (piVar1 != (int *)0x0) {
    if (((uint)*(byte *)(*piVar1 + 0xb8) < (uint)*(byte *)(iRam0055c78c + 0xb8)) ||
       (*(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iRam0055c78c + 0xb8) * 4 + -4) !=
        iRam0055c78c)) {
      unnamed_function_1116(piVar1,iRam0055c78c);
      do {
        halt_trap();
      } while( true );
    }
  }
  piVar5 = piVar1 + 4;
  UnityEngine_AudioSource__get_volume(*piVar5,*(undefined4 *)(param_2 + 0x18),0);
  UnityEngine_AudioSource__get_clip(*piVar5,*(undefined4 *)(param_2 + 0x14),0);
  multiple_2_UnityEngine_AudioSource__GetPitch(*piVar5,*(undefined4 *)(param_2 + 0x1c),0);
  piVar1[5] = param_2;
  UnityEngine_AudioSource__get_loop(*piVar5,0,0);
  uVar3 = unnamed_function_44644(piVar1,0);
  unnamed_function_44686(uVar3,1,0);
  uVar3 = UnityEngine_AudioClip___ctor(*(undefined4 *)(param_2 + 0x14),0);
  if (cRam006649a2 == '\0') {
    unnamed_function_1099(0x55ea0c);
    cRam006649a2 = '\x01';
  }
  iVar2 = unnamed_function_95402(uRam0055ea0c);
  *(int **)(iVar2 + 0x14) = piVar1;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar2,0);
  return;
}



// ---- SoundEffectManager::PlaySoundEffectPersistent   [wasm func86488 -> ram:81a38e19 ; ghidra: SoundEffectManager::PlaySoundEffectPersistent]

int * SoundEffectManager__PlaySoundEffectPersistent(int *param_1)

{
  if (*param_1 == 0) {
    return param_1;
  }
  System_Net_CommandStream__ReceiveCommandResponseCallback(*param_1);
  do {
    halt_trap();
  } while( true );
}



// ---- SoundEffectManager::PlaySoundEffect   [wasm func86490 -> ram:81a38ecc ; ghidra: SoundEffectManager::PlaySoundEffect]

void SoundEffectManager__PlaySoundEffect(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iStack_18;
  undefined8 *puStack_14;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam006649a1 == '\0') {
    unnamed_function_1099(0x5614a0);
    unnamed_function_1099(0x5614a4);
    unnamed_function_1099(0x5614a8);
    unnamed_function_1099(0x563b40);
    unnamed_function_1099(0x563b44);
    unnamed_function_1099(0x55be2c);
    cRam006649a1 = '\x01';
  }
  uStack_8 = 0;
  uStack_10 = 0;
  UnityEngine_ComputeBuffer__Release(&uStack_10,*(undefined4 *)(param_1 + 0x14),uRam00563b40);
  iStack_18 = 0;
  puStack_14 = &uStack_10;
  do {
    iRam005ddf34 = 0;
    iVar1 = import::env::invoke_iii(0x483,&uStack_10,uRam005614a4);
    iVar4 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar4 == 1) {
      uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a39103;
    }
    if (iVar1 == 0) {
      iRam005ddf34 = 0;
      return;
    }
    iVar4 = uStack_8._4_4_;
    uVar3 = *(undefined4 *)(uStack_8._4_4_ + 0x14);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      iRam005ddf34 = 0;
      import::env::invoke_vi(0xfc,iRam0055be2c);
      iVar1 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar1 == 1) {
        uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a39103;
      }
    }
    iRam005ddf34 = 0;
    iVar2 = import::env::invoke_iiii(0x857,uVar3,param_2,0);
    iVar1 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar1 == 1) {
      uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a39103;
    }
  } while (iVar2 == 0);
  iRam005ddf34 = 0;
  uVar3 = import::env::invoke_iii(0x883,iVar4,0);
  if (iRam005ddf34 != 1) {
    iRam005ddf34 = 0;
    import::env::invoke_viii(0x1f32,uVar3,0,0);
    if (iRam005ddf34 != 1) {
      iRam005ddf34 = 0;
      import::env::invoke_iiii(0x866,*(undefined4 *)(param_1 + 0x14),iVar4,uRam00563b44);
      iVar4 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar4 != 1) {
        iRam005ddf34 = 0;
        return;
      }
      uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a39103;
    }
  }
  iRam005ddf34 = 0;
  uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a39103:
  iVar4 = import::env::getTempRet0();
  iVar1 = import::env::llvm_eh_typeid_for(0x4a99ec);
  if (iVar4 == iVar1) {
    piVar5 = (int *)import::env::__cxa_begin_catch(uVar3);
    iVar1 = *piVar5;
    iRam005ddf34 = 0;
    iStack_18 = iVar1;
    import::env::invoke_v(0x3a);
    iVar4 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar4 != 1) {
      if (iVar1 == 0) {
        iRam005ddf34 = 0;
        return;
      }
      System_Net_CommandStream__ReceiveCommandResponseCallback(iVar1);
      do {
        halt_trap();
      } while( true );
    }
    uVar3 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  iRam005ddf34 = 0;
  import::env::invoke_ii(0x3665,&iStack_18);
  iVar4 = iRam005ddf34;
  iRam005ddf34 = 0;
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



// ---- SoundEffectManager::DisableSound   [wasm func86699 -> ram:81a43964 ; ghidra: SoundEffectManager::DisableSound]

void SoundEffectManager__DisableSound(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 < 20.0) {
    *(float *)(param_1 + 0x10) = param_2;
    if (cRam006649a3 == '\0') {
      unnamed_function_1099(0x57d234);
      cRam006649a3 = '\x01';
    }
    uVar1 = 0xc2a00000;
    iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
    uVar3 = UnityEngine_Audio_AudioMixer__GetFloat(*(undefined4 *)(iVar2 + 0x34),0);
    if (param_2 != 0.0) {
      uVar1 = HelperUtilities__GetMousePositionInUI(param_2,0);
    }
    UnityEngine_Audio_AudioMixer__TransitionToSnapshotInternal(uVar3,uRam0057d234,uVar1,0);
  }
  return;
}



// ---- SoundEffectManager::ChangeSoundsVolume   [wasm func86723 -> ram:81a44378 ; ghidra: SoundEffectManager::ChangeSoundsVolume]

void SoundEffectManager__ChangeSoundsVolume(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam006649a3 == '\0') {
    unnamed_function_1099(0x57d234);
    cRam006649a3 = '\x01';
  }
  uVar1 = 0xc2a00000;
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  uVar3 = UnityEngine_Audio_AudioMixer__GetFloat(*(undefined4 *)(iVar2 + 0x34),0);
  if (param_1 != 0.0) {
    uVar1 = HelperUtilities__GetMousePositionInUI(param_1,0);
  }
  UnityEngine_Audio_AudioMixer__TransitionToSnapshotInternal(uVar3,uRam0057d234,uVar1,0);
  return;
}



// ---- SoundEffectManager::StopSoundEffectLoop   [wasm func86724 -> ram:81a443db ; ghidra: SoundEffectManager::StopSoundEffectLoop]

int SoundEffectManager__StopSoundEffectLoop(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (cRam006649a2 == '\0') {
    unnamed_function_1099(0x55ea0c);
    cRam006649a2 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ea0c);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  return iVar1;
}



// ---- SoundEffectManager::SetSoundsVolume   [wasm func86725 -> ram:81a4441f ; ghidra: SoundEffectManager::SetSoundsVolume]

void SoundEffectManager__SetSoundsVolume(int param_1)

{
  undefined4 uVar1;
  
  if (cRam006649a4 == '\0') {
    unnamed_function_1099(0x563b38);
    unnamed_function_1099(0x5590ec);
    unnamed_function_1099(0x565d68);
    cRam006649a4 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x10) = 0x41200000;
  uVar1 = unnamed_function_95402(uRam005590ec);
  multiple_2_System_Collections_Generic_List_1___cctor(uVar1,uRam00563b38);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  multiple_127_System_Collections_Generic_ShortEnumEqualityComparer_1__GetHashCode
            (param_1,uRam00565d68);
  return;
}



// ---- SoundEffectManager::DisableSound_d_6_System_IDisposable_Dispose   [wasm func86726 -> ram:81a44489 ; ghidra: SoundEffectManager+<DisableSound>d__6::System.IDisposable.Dispose]

undefined4 SoundEffectManager_<DisableSound>d__6__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam006649a5 == '\0') {
    unnamed_function_1099(0x55d134);
    cRam006649a5 = '\x01';
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
      unnamed_function_44686(uVar1,0,0);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = unnamed_function_95402(uRam0055d134);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,uVar2,0);
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}



// ---- SoundEffectManager::DisableSound_d_6_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86727 -> ram:81a4450f ; ghidra: SoundEffectManager+<DisableSound>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void SoundEffectManager_<DisableSound>d__6__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56fd68);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- SoundEffectManager::DisableSound_d_6_System_Collections_IEnumerator_get_Current   [wasm func86728 -> ram:81a44536 ; ghidra: SoundEffectManager+<DisableSound>d__6::System.Collections.IEnumerator.get_Current]

void SoundEffectManager_<DisableSound>d__6__System_Collections_IEnumerator_get_Current(int param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0x3f8000003f800000;
  UnityEngine_RuntimeInitializeOnLoadMethodAttribute__set_loadType(param_1,0);
  return;
}



