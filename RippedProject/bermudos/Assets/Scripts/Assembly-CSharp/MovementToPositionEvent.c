// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MovementToPositionEvent  (Assembly-CSharp)  -  3 function(s)

// ---- MovementToPositionEvent::add_OnMovementToPosition   [wasm func86534 -> ram:81a3b2a2 ; ghidra: MovementToPositionEvent::add_OnMovementToPosition]

void MovementToPositionEvent__add_OnMovementToPosition(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam0066492f == '\0') {
    unnamed_function_1099(0x557af8);
    cRam0066492f = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85160(iVar3,param_2,0);
    uVar2 = uRam00557af8;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557af8), iVar4 == 0)) break;
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



// ---- MovementToPositionEvent::remove_OnMovementToPosition   [wasm func86537 -> ram:81a3b4c7 ; ghidra: MovementToPositionEvent::remove_OnMovementToPosition]

void MovementToPositionEvent__remove_OnMovementToPosition
               (int param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
               undefined8 *param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (cRam00664930 == '\0') {
    unnamed_function_1099(0x55bc80);
    cRam00664930 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    iVar1 = unnamed_function_95402(uRam0055bc80);
    if (cRam00664931 == '\0') {
      unnamed_function_1099(0x55ad18);
      cRam00664931 = '\x01';
    }
    if (*(int *)(iRam0055ad18 + 0x74) == 0) {
      unnamed_function_94848(iRam0055ad18);
    }
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(iVar1 + 8) = *param_2;
    *(undefined8 *)(iVar1 + 0x14) = *param_3;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(iVar1 + 0x20) = param_4;
    uVar3 = *param_5;
    *(undefined1 *)(iVar1 + 0x2c) = param_6;
    *(undefined8 *)(iVar1 + 0x24) = uVar3;
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
              (*(undefined4 *)(iVar2 + 0x20),param_1,iVar1,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}



// ---- MovementToPositionEvent::ctor   [wasm func86538 -> ram:81a3b593 ; ghidra: MovementToPositionEvent::.ctor]

void MovementToPositionEvent___ctor(void)

{
  if (cRam00664931 == '\0') {
    unnamed_function_1099(0x55ad18);
    cRam00664931 = '\x01';
  }
  if (*(int *)(iRam0055ad18 + 0x74) == 0) {
    unnamed_function_94848(iRam0055ad18);
  }
  return;
}



