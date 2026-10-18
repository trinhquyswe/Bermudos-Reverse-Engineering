// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: FireEyeAttackLoop  (Assembly-CSharp)  -  2 function(s)

// ---- FireEyeAttackLoop::OnAwake   [wasm func86976 -> ram:81a4d62e ; ghidra: FireEyeAttackLoop::OnAwake]

undefined4 FireEyeAttackLoop__OnAwake(int param_1)

{
  RangedSkills__EyeAttack
            (*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x34),
             *(undefined4 *)(param_1 + 0x30),0);
  return 2;
}



// ---- FireEyeAttackLoop::ctor   [wasm func86978 -> ram:81a4d653 ; ghidra: FireEyeAttackLoop::.ctor]

void FireEyeAttackLoop___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ac4 == '\0') {
    unnamed_function_1099(0x56cee4);
    cRam00664ac4 = '\x01';
  }
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cee4);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}



