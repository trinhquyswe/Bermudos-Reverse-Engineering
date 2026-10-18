// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: StaminaEvent  (Assembly-CSharp)  -  3 function(s)

// ---- StaminaEvent::remove_OnStaminaChanged   [wasm func86914 -> ram:81a4af4b ; ghidra: StaminaEvent::remove_OnStaminaChanged]

void StaminaEvent__remove_OnStaminaChanged
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (cRam00664b4f == '\0') {
    unnamed_function_1099(0x55c888);
    cRam00664b4f = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    iVar1 = unnamed_function_95402(uRam0055c888);
    if (cRam00664b50 == '\0') {
      unnamed_function_1099(0x55ad18);
      cRam00664b50 = '\x01';
    }
    if (*(int *)(iRam0055ad18 + 0x74) == 0) {
      unnamed_function_94848(iRam0055ad18);
    }
    *(undefined4 *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(undefined4 *)(iVar1 + 8) = param_2;
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
              (*(undefined4 *)(iVar2 + 0x20),param_1,iVar1,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}



// ---- StaminaEvent::add_OnStaminaChanged   [wasm func87175 -> ram:81a5594f ; ghidra: StaminaEvent::add_OnStaminaChanged]

void StaminaEvent__add_OnStaminaChanged(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664b4e == '\0') {
    unnamed_function_1099(0x557b10);
    cRam00664b4e = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85160(iVar3,param_2,0);
    uVar2 = uRam00557b10;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557b10), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(param_1 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar5,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- StaminaEvent::ctor   [wasm func87176 -> ram:81a559ce ; ghidra: StaminaEvent::.ctor]

void StaminaEvent___ctor(void)

{
  if (cRam00664b50 == '\0') {
    unnamed_function_1099(0x55ad18);
    cRam00664b50 = '\x01';
  }
  if (*(int *)(iRam0055ad18 + 0x74) == 0) {
    unnamed_function_94848(iRam0055ad18);
  }
  return;
}



