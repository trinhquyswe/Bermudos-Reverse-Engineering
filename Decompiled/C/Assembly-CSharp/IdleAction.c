// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: IdleAction  (Assembly-CSharp)  -  2 function(s)

// ---- IdleAction::OnAwake   [wasm func86982 -> ram:81a4d97c ; ghidra: IdleAction::OnAwake]

undefined4 IdleAction__OnAwake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664ac5 == '\0') {
    unnamed_function_1099(0x55fd54);
    cRam00664ac5 = '\x01';
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = unnamed_function_77425
                    (*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x30),uRam0055fd54);
  multiple_2_UnityEngine_Animator__SetTrigger(uVar2,uVar1,0);
  return 2;
}



// ---- IdleAction::ctor   [wasm func86985 -> ram:81a4dce7 ; ghidra: IdleAction::.ctor]

void IdleAction___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ac6 == '\0') {
    unnamed_function_1099(0x56ced4);
    cRam00664ac6 = '\x01';
  }
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056ced4);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}



