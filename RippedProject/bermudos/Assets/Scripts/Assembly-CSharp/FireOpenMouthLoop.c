// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: FireOpenMouthLoop  (Assembly-CSharp)  -  2 function(s)

// ---- FireOpenMouthLoop::OnAwake   [wasm func86979 -> ram:81a4d687 ; ghidra: FireOpenMouthLoop::OnAwake]

undefined4 FireOpenMouthLoop__OnAwake(int param_1)

{
  RangedSkills__GetTargetPositionList
            (*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
             *(undefined4 *)(param_1 + 0x34),0);
  return 2;
}



// ---- FireOpenMouthLoop::ctor   [wasm func86980 -> ram:81a4d6a1 ; ghidra: FireOpenMouthLoop::.ctor]

void FireOpenMouthLoop___ctor(undefined4 param_1)

{
  ReceiveDamageAction___ctor(param_1,param_1);
  return;
}



