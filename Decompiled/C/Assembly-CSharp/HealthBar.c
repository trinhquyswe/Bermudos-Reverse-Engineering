// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: HealthBar  (Assembly-CSharp)  -  2 function(s)

// ---- HealthBar::ctor   [wasm func86939 -> ram:81a4be86 ; ghidra: HealthBar::.ctor]

void HealthBar___ctor(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664b3f == '\0') {
    unnamed_function_1099(0x557acc);
    cRam00664b3f = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
    uVar2 = uRam00557acc;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557acc), iVar4 == 0)) break;
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



// ---- HealthBar::OnEnable   [wasm func87159 -> ram:81a551f5 ; ghidra: HealthBar::OnEnable]

void HealthBar__OnEnable(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b3e == '\0') {
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x569e38);
    unnamed_function_1099(0x565d78);
    cRam00664b3e = '\x01';
  }
  iVar7 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 8);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(**(int **)(iVar7 + 0x5c) + 0x10) + 0x2c);
  uVar5 = unnamed_function_95402(uRam00557acc);
  unnamed_function_60334(uVar5,param_1,uRam00569e38,0);
  if (cRam00664b40 == '\0') {
    unnamed_function_1099(0x557acc);
    cRam00664b40 = '\x01';
  }
  iVar4 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar6 = unnamed_function_85160(iVar4,uVar5,0);
    uVar2 = uRam00557acc;
    if ((iVar6 != 0) && (iVar3 = unnamed_function_1112(iVar6,uRam00557acc), iVar3 == 0)) break;
    iVar3 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar3,iVar4);
    bVar1 = iVar4 == iVar3;
    iVar4 = iVar3;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar6,uVar2);
  do {
    halt_trap();
  } while( true );
}



