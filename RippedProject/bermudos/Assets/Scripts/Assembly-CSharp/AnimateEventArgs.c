// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: AnimateEventArgs  (Assembly-CSharp)  -  1 function(s)

// ---- AnimateEventArgs::ctor   [wasm func86875 -> ram:81a4894e ; ghidra: AnimateEventArgs::.ctor]

void AnimateEventArgs___ctor(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664a80 == '\0') {
    unnamed_function_1099(0x567e74);
    unnamed_function_1099(0x567ef0);
    unnamed_function_1099(0x55c620);
    cRam00664a80 = '\x01';
  }
  iVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ef0);
  *(int *)(param_1 + 0x10) = iVar1;
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  if (*(int *)(iRam0055c620 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__GetBool_1
            (uVar2,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x18),1,0);
  uVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e74);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}



