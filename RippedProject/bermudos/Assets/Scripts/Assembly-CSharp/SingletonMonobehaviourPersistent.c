// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: SingletonMonobehaviourPersistent  (Assembly-CSharp)  -  1 function(s)

// ---- SingletonMonobehaviourPersistent::1_ctor   [wasm func61265 -> ram:81334a3c ; ghidra: SingletonMonobehaviourPersistent`1::.ctor]

void SingletonMonobehaviourPersistent_1___ctor(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (cRam00661fe6 == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam00661fe6 = '\x01';
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar3 = **(undefined4 **)(iVar2 + 0x5c);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar2 = unnamed_function_44710(uVar3,0,0);
  if (iVar2 == 0) {
    uVar3 = unnamed_function_44644(param_1,0);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    unnamed_function_44782(uVar3,0);
    return;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar1 = unnamed_function_1112(param_1,iVar2);
  iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  if ((iVar1 != 0) && (iVar4 = unnamed_function_1112(iVar1,iVar2), iVar4 == 0)) {
    unnamed_function_1116(iVar1,iVar2);
    do {
      halt_trap();
    } while( true );
  }
  iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  iVar1 = *(int *)(iVar2 + 8);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = System_Threading_Monitor__Enter_1(iVar1);
    iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  }
  **(int **)(iVar1 + 0x5c) = iVar4;
  if ((*(byte *)(*(int *)(iVar2 + 8) + 0xbd) & 1) == 0) {
    System_Threading_Monitor__Enter_1(*(int *)(iVar2 + 8));
    iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  }
  iVar4 = *(int *)(iVar2 + 4);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = System_Threading_Monitor__Enter_1(iVar4);
  }
  iVar2 = unnamed_function_1112(param_1,iVar4);
  iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = System_Threading_Monitor__Enter_1(iVar4);
  }
  if ((iVar2 != 0) && (iVar1 = unnamed_function_1112(iVar2,iVar4), iVar1 == 0)) {
    unnamed_function_1116(iVar2,iVar4);
    do {
      halt_trap();
    } while( true );
  }
  uVar3 = unnamed_function_44644(param_1,0);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  UnityEngine_Object__FindObjectsOfType(uVar3,0);
  return;
}



