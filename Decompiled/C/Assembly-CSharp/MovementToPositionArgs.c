// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MovementToPositionArgs  (Assembly-CSharp)  -  1 function(s)

// ---- MovementToPositionArgs::ctor   [wasm func86539 -> ram:81a3b5cb ; ghidra: MovementToPositionArgs::.ctor]

void MovementToPositionArgs___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664932 == '\0') {
    unnamed_function_1099(0x567ee8);
    cRam00664932 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ee8);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



