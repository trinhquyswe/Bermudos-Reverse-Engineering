// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: DealDamageEventAgrs  (Assembly-CSharp)  -  1 function(s)

// ---- DealDamageEventAgrs::ctor   [wasm func86923 -> ram:81a4b6cd ; ghidra: DealDamageEventAgrs::.ctor]

void DealDamageEventAgrs___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a9f == '\0') {
    unnamed_function_1099(0x567e98);
    cRam00664a9f = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e98);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



