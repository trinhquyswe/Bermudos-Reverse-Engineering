// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: BashEventArgs  (Assembly-CSharp)  -  1 function(s)

// ---- BashEventArgs::ctor   [wasm func86662 -> ram:81a420b7 ; ghidra: BashEventArgs::.ctor]

void BashEventArgs___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam0066497a == '\0') {
    unnamed_function_1099(0x567e14);
    unnamed_function_1099(0x567f00);
    cRam0066497a = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f00);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e14);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



