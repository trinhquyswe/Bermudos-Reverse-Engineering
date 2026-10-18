// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: SoundEffectSO  (Assembly-CSharp)  -  1 function(s)

// ---- SoundEffectSO::ctor   [wasm func86541 -> ram:81a3b70a ; ghidra: SoundEffectSO::.ctor]

void SoundEffectSO___ctor(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam006649a6 == '\0') {
    unnamed_function_1099(0x557a10);
    unnamed_function_1099(0x55c894);
    cRam006649a6 = '\x01';
  }
  iVar3 = **(int **)(iRam0055c894 + 0x5c);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_1,0);
    uVar2 = uRam00557a10;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557a10), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(*(undefined4 *)(iRam0055c894 + 0x5c),iVar4,iVar3);
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



