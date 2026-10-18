// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: AttackEvent  (Assembly-CSharp)  -  2 function(s)

// ---- AttackEvent::add_OnAttack   [wasm func86861 -> ram:81a48244 ; ghidra: AttackEvent::add_OnAttack]

void AttackEvent__add_OnAttack(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664a8e == '\0') {
    unnamed_function_1099(0x5579a8);
    cRam00664a8e = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85160(iVar3,param_2,0);
    uVar2 = uRam005579a8;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam005579a8), iVar4 == 0)) break;
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



// ---- AttackEvent::ctor   [wasm func86896 -> ram:81a4a249 ; ghidra: AttackEvent::.ctor]

void AttackEvent___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a8f == '\0') {
    unnamed_function_1099(0x567efc);
    cRam00664a8f = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567efc);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



