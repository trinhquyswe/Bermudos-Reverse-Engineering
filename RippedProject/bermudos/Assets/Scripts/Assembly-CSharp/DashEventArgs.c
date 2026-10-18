// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: DashEventArgs  (Assembly-CSharp)  -  1 function(s)

// ---- DashEventArgs::ctor   [wasm func86681 -> ram:81a42e3e ; ghidra: DashEventArgs::.ctor]

void DashEventArgs___ctor(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (cRam00664988 == '\0') {
    unnamed_function_1099(0x557a4c);
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x56c58c);
    unnamed_function_1099(0x56c590);
    unnamed_function_1099(0x56c594);
    cRam00664988 = '\x01';
  }
  uVar3 = unnamed_function_95402(iRam00559fb4);
  unnamed_function_82700(uVar3,param_1,uRam0056c590,0);
  if (cRam006649bb == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x55c894);
    cRam006649bb = '\x01';
  }
  iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x1c);
  while ((piVar4 = (int *)unnamed_function_85158(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
         (iRam00559fb4 == *piVar4))) {
    iVar5 = System_Net_WebOperation___ctor(*(int *)(iRam0055c894 + 0x5c) + 0x1c,piVar4,iVar2);
    bVar1 = iVar2 == iVar5;
    iVar2 = iVar5;
    if (bVar1) {
      uVar3 = unnamed_function_95402(iRam00559fb4);
      unnamed_function_82700(uVar3,param_1,uRam0056c58c,0);
      if (cRam006649b8 == '\0') {
        unnamed_function_1099(0x559fb4);
        unnamed_function_1099(0x55c894);
        cRam006649b8 = '\x01';
      }
      iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x18);
      while ((piVar4 = (int *)unnamed_function_85158(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
             (iRam00559fb4 == *piVar4))) {
        iVar5 = System_Net_WebOperation___ctor(*(int *)(iRam0055c894 + 0x5c) + 0x18,piVar4,iVar2);
        bVar1 = iVar2 == iVar5;
        iVar2 = iVar5;
        if (bVar1) {
          uVar3 = unnamed_function_95402(uRam00557a4c);
          UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam0056c594,0);
          Rage___ctor(uVar3,0);
          return;
        }
      }
      unnamed_function_1116(piVar4,iRam00559fb4);
      do {
        halt_trap();
      } while( true );
    }
  }
  unnamed_function_1116(piVar4,iRam00559fb4);
  do {
    halt_trap();
  } while( true );
}



