// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: AmmoAnimation  (Assembly-CSharp)  -  1 function(s)

// ---- AmmoAnimation::Awake   [wasm func86830 -> ram:81a46672 ; ghidra: AmmoAnimation::Awake]

void AmmoAnimation__Awake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664a6b == '\0') {
    unnamed_function_1099(0x55a074);
    unnamed_function_1099(0x575b90);
    cRam00664a6b = '\x01';
  }
  uVar1 = UnityEngine_Animator__StopRecording(*(undefined4 *)(param_1 + 0x10),0);
  uVar2 = unnamed_function_95402(uRam0055a074);
  UnityEngine_Animator__MatchTarget_Injected(uVar2,uVar1,0);
  multiple_2_UnityEngine_AnimatorOverrideController__Internal_Create
            (uVar2,uRam00575b90,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x10) + 0x18),0)
  ;
  UnityEngine_Animator__get_runtimeAnimatorController(*(undefined4 *)(param_1 + 0x10),uVar2,0);
  return;
}



