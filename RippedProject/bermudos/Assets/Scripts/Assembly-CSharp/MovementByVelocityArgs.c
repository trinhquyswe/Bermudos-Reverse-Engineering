// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MovementByVelocityArgs  (Assembly-CSharp)  -  1 function(s)

// ---- MovementByVelocityArgs::ctor   [wasm func86528 -> ram:81a3afff ; ghidra: MovementByVelocityArgs::.ctor]

float MovementByVelocityArgs___ctor(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xc);
  if (fVar1 != *(float *)(param_1 + 0x10)) {
    fVar1 = (float)UnityEngine_Random__InitState(fVar1,*(float *)(param_1 + 0x10),0);
  }
  return fVar1;
}



