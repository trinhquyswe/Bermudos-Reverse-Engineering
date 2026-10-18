// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: AmmoVisual  (Assembly-CSharp)  -  2 function(s)

// ---- AmmoVisual::UpdateAmmoRotation   [wasm func12080 -> ram:804e1e9e ; ghidra: AmmoVisual::UpdateAmmoRotation]

void AmmoVisual__UpdateAmmoRotation(int param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x14) = *param_2;
  return;
}



// ---- AmmoVisual::ctor   [wasm func86851 -> ram:81a47905 ; ghidra: AmmoVisual::.ctor]

void AmmoVisual___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a6e == '\0') {
    unnamed_function_1099(0x567e30);
    cRam00664a6e = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e30);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



