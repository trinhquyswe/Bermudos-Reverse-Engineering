// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: AudioManager  (Assembly-CSharp)  -  7 function(s)

// ---- AudioManager::Start   [wasm func86694 -> ram:81a4368f ; ghidra: AudioManager::Start]

int AudioManager__Start(undefined4 param_1)

{
  int iVar1;
  
  if (cRam0066498c == '\0') {
    unnamed_function_1099(0x55d7cc);
    cRam0066498c = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055d7cc);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- AudioManager::SetVolumeCoroutine   [wasm func86695 -> ram:81a436cc ; ghidra: AudioManager::SetVolumeCoroutine]

void AudioManager__SetVolumeCoroutine(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0x41a00000;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- AudioManager::ctor   [wasm func86696 -> ram:81a436e3 ; ghidra: AudioManager::.ctor]

void AudioManager___ctor(int param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  
  if (cRam0066498d == '\0') {
    unnamed_function_1099(0x565d58);
    unnamed_function_1099(0x57c658);
    cRam0066498d = '\x01';
  }
  iVar3 = *(int *)(iRam00565d58 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  fVar4 = *(float *)(param_1 + 0x18) * param_2;
  if (fVar4 < 20.0) {
    *(float *)(**(int **)(iVar3 + 0x5c) + 0x20) = fVar4;
    if (cRam00664997 == '\0') {
      unnamed_function_1099(0x57c658);
      cRam00664997 = '\x01';
    }
    uVar1 = 0xc2a00000;
    iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
    uVar2 = UnityEngine_Audio_AudioMixer__GetFloat(*(undefined4 *)(iVar3 + 0x38),0);
    if (fVar4 != 0.0) {
      uVar1 = HelperUtilities__GetMousePositionInUI(fVar4,0);
    }
    UnityEngine_Audio_AudioMixer__TransitionToSnapshotInternal(uVar2,uRam0057c658,uVar1,0);
    fVar4 = *(float *)(param_1 + 0x18) * param_2;
  }
  UnityEngine_PlayerPrefs__GetInt_1(uRam0057c658,fVar4,0);
  UnityEngine_PlayerPrefs__DeleteAll(0);
  return;
}



// ---- AudioManager::Start_b_3_0   [wasm func86698 -> ram:81a4385f ; ghidra: AudioManager::<Start>b__3_0]

void AudioManager__<Start>b__3_0(int param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  
  if (cRam0066498e == '\0') {
    unnamed_function_1099(0x565d6c);
    unnamed_function_1099(0x57d234);
    cRam0066498e = '\x01';
  }
  iVar3 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  fVar4 = *(float *)(param_1 + 0x18) * param_2;
  if (fVar4 < 20.0) {
    *(float *)(**(int **)(iVar3 + 0x5c) + 0x10) = fVar4;
    if (cRam006649a3 == '\0') {
      unnamed_function_1099(0x57d234);
      cRam006649a3 = '\x01';
    }
    uVar1 = 0xc2a00000;
    iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
    uVar2 = UnityEngine_Audio_AudioMixer__GetFloat(*(undefined4 *)(iVar3 + 0x34),0);
    if (fVar4 != 0.0) {
      uVar1 = HelperUtilities__GetMousePositionInUI(fVar4,0);
    }
    UnityEngine_Audio_AudioMixer__TransitionToSnapshotInternal(uVar2,uRam0057d234,uVar1,0);
    fVar4 = *(float *)(param_1 + 0x18) * param_2;
  }
  UnityEngine_PlayerPrefs__GetInt_1(uRam0057d234,fVar4,0);
  UnityEngine_PlayerPrefs__DeleteAll(0);
  return;
}



// ---- AudioManager::SetVolumeCoroutine_d_4_System_IDisposable_Dispose   [wasm func86700 -> ram:81a439db ; ghidra: AudioManager+<SetVolumeCoroutine>d__4::System.IDisposable.Dispose]

undefined4 AudioManager_<SetVolumeCoroutine>d__4__System_IDisposable_Dispose(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (cRam0066498f == '\0') {
    unnamed_function_1099(0x565d58);
    unnamed_function_1099(0x565d6c);
    cRam0066498f = '\x01';
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      piVar2 = *(int **)(iVar1 + 0x10);
      iVar3 = *(int *)(iRam00565d58 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar4 = *piVar2;
      (**(code **)((ulonglong)*(uint *)(iVar4 + 0x238) * 4))
                (piVar2,*(float *)(**(int **)(iVar3 + 0x5c) + 0x20) / *(float *)(iVar1 + 0x18),
                 *(undefined4 *)(iVar4 + 0x23c));
      piVar2 = *(int **)(iVar1 + 0x14);
      iVar3 = *(int *)(iRam00565d6c + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar4 = *piVar2;
      (**(code **)((ulonglong)*(uint *)(iVar4 + 0x238) * 4))
                (piVar2,*(float *)(**(int **)(iVar3 + 0x5c) + 0x10) / *(float *)(iVar1 + 0x18),
                 *(undefined4 *)(iVar4 + 0x23c));
    }
    return 0;
  }
  *(undefined8 *)(param_1 + 8) = 1;
  return 1;
}



// ---- AudioManager::SetVolumeCoroutine_d_4_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86701 -> ram:81a43b01 ; ghidra: AudioManager+<SetVolumeCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void AudioManager_<SetVolumeCoroutine>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56eacc);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- AudioManager::SetVolumeCoroutine_d_4_System_Collections_IEnumerator_get_Current   [wasm func86702 -> ram:81a43b28 ; ghidra: AudioManager+<SetVolumeCoroutine>d__4::System.Collections.IEnumerator.get_Current]

void AudioManager_<SetVolumeCoroutine>d__4__System_Collections_IEnumerator_get_Current(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam00664990 == '\0') {
    unnamed_function_1099(0x567e24);
    unnamed_function_1099(0x565d54);
    cRam00664990 = '\x01';
  }
  SingletonMonobehaviourPersistent_1___ctor(param_1,uRam00565d54);
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e24);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  UnityEngine_Audio_AudioMixerSnapshot__get_audioMixer(*(undefined4 *)(iVar2 + 0x44),0,0);
  return;
}



