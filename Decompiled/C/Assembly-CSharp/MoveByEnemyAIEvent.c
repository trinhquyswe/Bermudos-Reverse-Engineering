// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MoveByEnemyAIEvent  (Assembly-CSharp)  -  2 function(s)

// ---- MoveByEnemyAIEvent::add_OnMoveByEnemyAI   [wasm func86516 -> ram:81a3a84b ; ghidra: MoveByEnemyAIEvent::add_OnMoveByEnemyAI]

void MoveByEnemyAIEvent__add_OnMoveByEnemyAI(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664921 == '\0') {
    unnamed_function_1099(0x557a1c);
    cRam00664921 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85160(iVar3,param_2,0);
    uVar2 = uRam00557a1c;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557a1c), iVar4 == 0)) break;
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



// ---- MoveByEnemyAIEvent::ctor   [wasm func86517 -> ram:81a3a8cb ; ghidra: MoveByEnemyAIEvent::.ctor]

void MoveByEnemyAIEvent___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664922 == '\0') {
    unnamed_function_1099(0x567e70);
    unnamed_function_1099(0x567e74);
    unnamed_function_1099(0x567ed4);
    unnamed_function_1099(0x567f18);
    cRam00664922 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f18);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ed4);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e70);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e74);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



