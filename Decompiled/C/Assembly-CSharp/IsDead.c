// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: IsDead  (Assembly-CSharp)  -  2 function(s)

// ---- IsDead::OnAwake   [wasm func86986 -> ram:81a4dd1b ; ghidra: IsDead::OnAwake]

undefined4 IsDead__OnAwake(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (0 < *(int *)(*(int *)(param_1 + 0x2c) + 0x10)) {
    uVar1 = 1;
  }
  return uVar1;
}



// ---- IsDead::ctor   [wasm func86987 -> ram:81a4dd2e ; ghidra: IsDead::.ctor]

void IsDead___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ac7 == '\0') {
    unnamed_function_1099(0x56ced4);
    cRam00664ac7 = '\x01';
  }
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056ced4);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}



