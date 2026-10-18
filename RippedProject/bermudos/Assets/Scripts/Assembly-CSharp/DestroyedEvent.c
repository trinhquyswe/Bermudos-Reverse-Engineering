// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: DestroyedEvent  (Assembly-CSharp)  -  2 function(s)

// ---- DestroyedEvent::add_OnDestroyed   [wasm func86881 -> ram:81a492f5 ; ghidra: DestroyedEvent::add_OnDestroyed]

void DestroyedEvent__add_OnDestroyed(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664b35 == '\0') {
    unnamed_function_1099(0x557ac4);
    cRam00664b35 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85160(iVar3,param_2,0);
    uVar2 = uRam00557ac4;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557ac4), iVar4 == 0)) break;
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



// ---- DestroyedEvent::ctor   [wasm func86946 -> ram:81a4c24e ; ghidra: DestroyedEvent::.ctor]

void DestroyedEvent___ctor(void)

{
  if (cRam00664b36 == '\0') {
    unnamed_function_1099(0x55ad18);
    cRam00664b36 = '\x01';
  }
  if (*(int *)(iRam0055ad18 + 0x74) == 0) {
    unnamed_function_94848(iRam0055ad18);
  }
  return;
}



