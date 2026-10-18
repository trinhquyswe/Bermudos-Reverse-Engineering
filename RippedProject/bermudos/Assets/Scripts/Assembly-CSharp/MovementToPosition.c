// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MovementToPosition  (Assembly-CSharp)  -  5 function(s)

// ---- MovementToPosition::Awake   [wasm func86531 -> ram:81a3b08e ; ghidra: MovementToPosition::Awake]

void MovementToPosition__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam0066492c == '\0') {
    unnamed_function_1099(0x557af8);
    unnamed_function_1099(0x56b18c);
    cRam0066492c = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x14);
  uVar5 = unnamed_function_95402(uRam00557af8);
  unnamed_function_60334(uVar5,param_1,uRam0056b18c,0);
  if (cRam0066492e == '\0') {
    unnamed_function_1099(0x557af8);
    cRam0066492e = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85158(iVar3,uVar5,0);
    uVar2 = uRam00557af8;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557af8), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar6,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- MovementToPosition::ctor   [wasm func86532 -> ram:81a3b158 ; ghidra: MovementToPosition::.ctor]

void MovementToPosition___ctor(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam0066492e == '\0') {
    unnamed_function_1099(0x557af8);
    cRam0066492e = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
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



// ---- MovementToPosition::OnEnable   [wasm func86533 -> ram:81a3b1d8 ; ghidra: MovementToPosition::OnEnable]

void MovementToPosition__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam0066492d == '\0') {
    unnamed_function_1099(0x557af8);
    unnamed_function_1099(0x56b18c);
    cRam0066492d = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x14);
  uVar5 = unnamed_function_95402(uRam00557af8);
  unnamed_function_60334(uVar5,param_1,uRam0056b18c,0);
  if (cRam0066492f == '\0') {
    unnamed_function_1099(0x557af8);
    cRam0066492f = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85160(iVar3,uVar5,0);
    uVar2 = uRam00557af8;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557af8), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar6,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- MovementToPosition::OnDisable   [wasm func86535 -> ram:81a3b321 ; ghidra: MovementToPosition::OnDisable]

void MovementToPosition__OnDisable(undefined4 param_1,int param_2)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_8 = *(undefined4 *)(param_2 + 0x10);
  uStack_10 = *(undefined8 *)(param_2 + 8);
  uStack_18 = *(undefined4 *)(param_2 + 0x1c);
  uStack_20 = *(undefined8 *)(param_2 + 0x14);
  MovementToPosition__MovementToPositionEvent_OnMovementToPosition
            (param_1,&uStack_10,&uStack_20,*(undefined4 *)(param_2 + 0x20),&uStack_20);
  return;
}



// ---- MovementToPosition::MovementToPositionEvent_OnMovementToPosition   [wasm func86536 -> ram:81a3b377 ; ghidra: MovementToPosition::MovementToPositionEvent_OnMovementToPosition]

void MovementToPosition__MovementToPositionEvent_OnMovementToPosition
               (int param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined1 auStack_8 [8];
  
  fVar1 = param_3[2];
  fVar2 = param_2[2];
  fVar3 = param_3[1];
  fVar4 = param_2[1];
  fVar5 = *param_3;
  fVar6 = *param_2;
  if (cRam0066482c == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam0066482c = '\x01';
  }
  fVar4 = fVar4 - fVar3;
  fVar6 = fVar6 - fVar5;
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar1 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + (fVar2 - fVar1) * (fVar2 - fVar1));
  if (1e-05 < fVar1) {
    fVar4 = fVar4 / fVar1;
    fVar6 = fVar6 / fVar1;
  }
  else {
    if (cRam00664829 == '\0') {
      unnamed_function_1099(0x55d048);
      cRam00664829 = '\x01';
    }
    fVar4 = (*(float **)(iRam0055d048 + 0x5c))[1];
    fVar6 = **(float **)(iRam0055d048 + 0x5c);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  UnityEngine_RaycastHit2D__op_Implicit(auStack_8,uVar7,0);
  fVar1 = (float)UnityEngine_Time__get_fixedUnscaledDeltaTime(0);
  uStack_18 = CONCAT44(fVar4 * param_4 * fVar1 + auStack_8._4_4_,
                       fVar6 * param_4 * fVar1 + auStack_8._0_4_);
  uStack_10 = uStack_18;
  multiple_2_UnityEngine_Rigidbody2D__get_rotation(uVar7,&uStack_18,0);
  return;
}



