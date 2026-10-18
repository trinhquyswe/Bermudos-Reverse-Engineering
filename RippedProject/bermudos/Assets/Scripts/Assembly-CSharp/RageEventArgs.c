// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: RageEventArgs  (Assembly-CSharp)  -  1 function(s)

// ---- RageEventArgs::ctor   [wasm func87167 -> ram:81a55586 ; ghidra: RageEventArgs::.ctor]

void RageEventArgs___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b4a == '\0') {
    unnamed_function_1099(0x567ef0);
    cRam00664b4a = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ef0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



