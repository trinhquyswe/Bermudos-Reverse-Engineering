// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: IsReceiveDamage  (Assembly-CSharp)  -  4 function(s)

// ---- IsReceiveDamage::OnAwake   [wasm func86992 -> ram:81a4de9e ; ghidra: IsReceiveDamage::OnAwake]

void IsReceiveDamage__OnAwake(int param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



// ---- IsReceiveDamage::OnHealthChanged   [wasm func86993 -> ram:81a4dea8 ; ghidra: IsReceiveDamage::OnHealthChanged]

undefined4 IsReceiveDamage__OnHealthChanged(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar1 = 1;
  }
  return uVar1;
}



// ---- IsReceiveDamage::OnUpdate   [wasm func86994 -> ram:81a4deb5 ; ghidra: IsReceiveDamage::OnUpdate]

void IsReceiveDamage__OnUpdate(int param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// ---- IsReceiveDamage::ctor   [wasm func86995 -> ram:81a4debf ; ghidra: IsReceiveDamage::.ctor]

void IsReceiveDamage___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ac9 == '\0') {
    unnamed_function_1099(0x56cedc);
    cRam00664ac9 = '\x01';
  }
  ReceiveDamageAction___ctor(param_1,param_1);
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cedc);
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  return;
}



