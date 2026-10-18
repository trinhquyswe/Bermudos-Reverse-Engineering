// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: DropdownSample  (Assembly-CSharp)  -  1 function(s)

// ---- DropdownSample::ctor   [wasm func86176 -> ram:81a23792 ; ghidra: DropdownSample::.ctor]

void DropdownSample___ctor(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (cRam00664844 == '\0') {
    unnamed_function_1099(0x567f3c);
    cRam00664844 = '\x01';
  }
  piVar1 = (int *)UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f3c);
  *(int **)(param_1 + 0x1c) = piVar1;
  uVar2 = (**(code **)((ulonglong)*(uint *)(*piVar1 + 0x2d8) * 4))
                    (piVar1,*(undefined4 *)(*piVar1 + 0x2dc));
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return;
}



