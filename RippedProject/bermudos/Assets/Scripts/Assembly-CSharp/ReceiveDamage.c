// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: ReceiveDamage  (Assembly-CSharp)  -  2 function(s)

// ---- ReceiveDamage::Awake   [wasm func86840 -> ram:81a474f9 ; ghidra: ReceiveDamage::Awake]

void ReceiveDamage__Awake(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (0 < iVar1) {
      param_2 = iVar1;
    }
    Health__Start(*(undefined4 *)(param_1 + 0x14),param_2,iVar1);
  }
  return;
}



// ---- ReceiveDamage::ctor   [wasm func86926 -> ram:81a4b7d1 ; ghidra: ReceiveDamage::.ctor]

void ReceiveDamage___ctor(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664aa1 == '\0') {
    unnamed_function_1099(0x559cf4);
    unnamed_function_1099(0x576924);
    cRam00664aa1 = '\x01';
  }
  iVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar1 + 0x10) = uRam00576924;
  uVar2 = UnityEngine_LayerMask__NameToLayer(iVar1,0);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
  unnamed_function_44686(uVar2,0,0);
  return;
}



