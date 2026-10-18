// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MovementDetailsSO  (Assembly-CSharp)  -  2 function(s)

// ---- MovementDetailsSO::GetMoveSpeed   [wasm func86529 -> ram:81a3b023 ; ghidra: MovementDetailsSO::GetMoveSpeed]

void MovementDetailsSO__GetMoveSpeed(int param_1)

{
  *(undefined8 *)(param_1 + 0xc) = 0x4100000041000000;
  UnityEngine_RuntimeInitializeOnLoadMethodAttribute__set_loadType(param_1,0);
  return;
}



// ---- MovementDetailsSO::ctor   [wasm func86530 -> ram:81a3b03e ; ghidra: MovementDetailsSO::.ctor]

void MovementDetailsSO___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam0066492b == '\0') {
    unnamed_function_1099(0x567ed8);
    unnamed_function_1099(0x567f18);
    cRam0066492b = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f18);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ed8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



