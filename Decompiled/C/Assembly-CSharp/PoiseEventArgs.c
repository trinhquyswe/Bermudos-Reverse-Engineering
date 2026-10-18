// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: PoiseEventArgs  (Assembly-CSharp)  -  1 function(s)

// ---- PoiseEventArgs::ctor   [wasm func86917 -> ram:81a4b3a2 ; ghidra: PoiseEventArgs::.ctor]

void PoiseEventArgs___ctor(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  param_2 = *(float *)(param_1 + 0x14) + param_2;
  *(float *)(param_1 + 0x14) = param_2;
  fVar2 = *(float *)(param_1 + 0x10);
  if (fVar2 < param_2) {
    *(float *)(param_1 + 0x14) = fVar2;
    param_2 = fVar2;
  }
  if (cRam00664b49 == '\0') {
    unnamed_function_1099(0x55c1bc);
    unnamed_function_1099(0x55c1b8);
    cRam00664b49 = '\x01';
  }
  iVar3 = **(int **)(iRam0055c1b8 + 0x5c);
  if (iVar3 != 0) {
    iVar1 = unnamed_function_95402(uRam0055c1bc);
    *(float *)(iVar1 + 0x10) = fVar2;
    *(float *)(iVar1 + 0xc) = fVar2;
    *(float *)(iVar1 + 8) = param_2 / fVar2;
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),iVar1,*(undefined4 *)(iVar3 + 0x14));
  }
  return;
}



