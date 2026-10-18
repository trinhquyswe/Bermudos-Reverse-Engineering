// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: SoundEffect  (Assembly-CSharp)  -  3 function(s)

// ---- SoundEffect::Awake   [wasm func86720 -> ram:81a4421d ; ghidra: SoundEffect::Awake]

void SoundEffect__Awake(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam0066499d == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam0066499d = '\x01';
  }
  uVar1 = UnityEngine_AudioSource__get_timeSamples(*(undefined4 *)(param_1 + 0x10),0);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar2 = UnityEngine_Camera__get_targetTexture(uVar1,0,0);
  if (iVar2 != 0) {
    UnityEngine_AudioSource__set_clip(*(undefined4 *)(param_1 + 0x10),0);
  }
  return;
}



// ---- SoundEffect::OnDisable   [wasm func86721 -> ram:81a4427c ; ghidra: SoundEffect::OnDisable]

void SoundEffect__OnDisable(int param_1,int param_2,undefined4 param_3)

{
  UnityEngine_AudioSource__get_volume
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x18),0);
  UnityEngine_AudioSource__get_clip
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x14),0);
  multiple_2_UnityEngine_AudioSource__GetPitch
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x1c),0);
  *(int *)(param_1 + 0x14) = param_2;
  UnityEngine_AudioSource__get_loop(*(undefined4 *)(param_1 + 0x10),param_3,0);
  return;
}



// ---- SoundEffect::ctor   [wasm func86722 -> ram:81a442c4 ; ghidra: SoundEffect::.ctor]

void SoundEffect___ctor(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (cRam0066499e == '\0') {
    unnamed_function_1099(0x57d234);
    cRam0066499e = '\x01';
  }
  iVar2 = UnityEngine_PlayerPrefs__GetString_1(uRam0057d234,0);
  if (iVar2 == 0) {
    fVar3 = *(float *)(param_1 + 0x10);
  }
  else {
    fVar3 = (float)UnityEngine_PlayerPrefs__GetFloat(uRam0057d234,0);
    *(float *)(param_1 + 0x10) = fVar3;
  }
  if (cRam006649a3 == '\0') {
    unnamed_function_1099(0x57d234);
    cRam006649a3 = '\x01';
  }
  uVar1 = 0xc2a00000;
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  uVar4 = UnityEngine_Audio_AudioMixer__GetFloat(*(undefined4 *)(iVar2 + 0x34),0);
  if (fVar3 != 0.0) {
    uVar1 = HelperUtilities__GetMousePositionInUI(fVar3,0);
  }
  UnityEngine_Audio_AudioMixer__TransitionToSnapshotInternal(uVar4,uRam0057d234,uVar1,0);
  return;
}



