// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: InventoryItem  (Assembly-CSharp)  -  1 function(s)

// ---- InventoryItem::ctor   [wasm func86386 -> ram:81a34527 ; ghidra: InventoryItem::.ctor]

void InventoryItem___ctor(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam006648cd == '\0') {
    unnamed_function_1099(0x559cf4);
    unnamed_function_1099(0x576924);
    cRam006648cd = '\x01';
  }
  iVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar1 + 0x10) = uRam00576924;
  uVar2 = UnityEngine_LayerMask__NameToLayer(iVar1,0);
  multiple_89_Mono_Runtime___cctor(param_1 + 0x14,uVar2,0);
  Item__OnTriggerEnter2D(param_1,param_1);
  return;
}



