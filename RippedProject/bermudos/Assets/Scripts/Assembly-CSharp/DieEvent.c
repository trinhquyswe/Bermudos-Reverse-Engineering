// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: DieEvent  (Assembly-CSharp)  -  2 function(s)

// ---- DieEvent::add_OnDie   [wasm func86880 -> ram:81a49276 ; ghidra: DieEvent::add_OnDie]

void DieEvent__add_OnDie(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664b38 == '\0') {
    unnamed_function_1099(0x5579d4);
    cRam00664b38 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85160(iVar3,param_2,0);
    uVar2 = uRam005579d4;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam005579d4), iVar4 == 0)) break;
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



// ---- DieEvent::ctor   [wasm func87152 -> ram:81a54da1 ; ghidra: DieEvent::.ctor]

void DieEvent___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b39 == '\0') {
    unnamed_function_1099(0x567e74);
    unnamed_function_1099(0x567e9c);
    cRam00664b39 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e9c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e74);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



