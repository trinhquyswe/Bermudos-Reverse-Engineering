// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MovementByVelocity  (Assembly-CSharp)  -  7 function(s)

// ---- MovementByVelocity::Awake   [wasm func86518 -> ram:81a3a951 ; ghidra: MovementByVelocity::Awake]

void MovementByVelocity__Awake(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam00664923 == '\0') {
    unnamed_function_1099(0x5579d4);
    unnamed_function_1099(0x557ac4);
    unnamed_function_1099(0x557af4);
    unnamed_function_1099(0x56b180);
    unnamed_function_1099(0x56b184);
    unnamed_function_1099(0x56b188);
    cRam00664923 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x14);
  uVar4 = unnamed_function_95402(uRam00557af4);
  unnamed_function_60334(uVar4,param_1,uRam0056b188,0);
  if (cRam00664927 == '\0') {
    unnamed_function_1099(0x557af4);
    cRam00664927 = '\x01';
  }
  iVar2 = *(int *)(iVar6 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar5 = unnamed_function_85158(iVar2,uVar4,0);
    uVar7 = uRam00557af4;
    if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam00557af4), iVar3 == 0)) break;
    iVar3 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar3,iVar2);
    bVar1 = iVar2 == iVar3;
    iVar2 = iVar3;
    if (bVar1) {
      uVar7 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = unnamed_function_95402(uRam00557ac4);
      unnamed_function_60334(uVar4,param_1,uRam0056b180,0);
      Destroyed_<Die>d__7__System_Collections_IEnumerator_get_Current(uVar7,uVar4,0);
      uVar7 = *(undefined4 *)(param_1 + 0x1c);
      uVar4 = unnamed_function_95402(uRam005579d4);
      UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam0056b184,0);
      DestroyedEventArgs___ctor(uVar7,uVar4,0);
      return;
    }
  }
  unnamed_function_1116(iVar5,uVar7);
  do {
    halt_trap();
  } while( true );
}



// ---- MovementByVelocity::ctor   [wasm func86519 -> ram:81a3aa99 ; ghidra: MovementByVelocity::.ctor]

void MovementByVelocity___ctor(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664927 == '\0') {
    unnamed_function_1099(0x557af4);
    cRam00664927 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
    uVar2 = uRam00557af4;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557af4), iVar4 == 0)) break;
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



// ---- MovementByVelocity::OnEnable   [wasm func86520 -> ram:81a3ab19 ; ghidra: MovementByVelocity::OnEnable]

void MovementByVelocity__OnEnable(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam00664924 == '\0') {
    unnamed_function_1099(0x5579d4);
    unnamed_function_1099(0x557ac4);
    unnamed_function_1099(0x557af4);
    unnamed_function_1099(0x56b180);
    unnamed_function_1099(0x56b184);
    unnamed_function_1099(0x56b188);
    cRam00664924 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x14);
  uVar4 = unnamed_function_95402(uRam00557af4);
  unnamed_function_60334(uVar4,param_1,uRam0056b188,0);
  if (cRam00664928 == '\0') {
    unnamed_function_1099(0x557af4);
    cRam00664928 = '\x01';
  }
  iVar2 = *(int *)(iVar6 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar5 = unnamed_function_85160(iVar2,uVar4,0);
    uVar7 = uRam00557af4;
    if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam00557af4), iVar3 == 0)) break;
    iVar3 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar3,iVar2);
    bVar1 = iVar2 == iVar3;
    iVar2 = iVar3;
    if (bVar1) {
      uVar7 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = unnamed_function_95402(uRam00557ac4);
      unnamed_function_60334(uVar4,param_1,uRam0056b180,0);
      DestroyedEvent__add_OnDestroyed(uVar7,uVar4,0);
      uVar7 = *(undefined4 *)(param_1 + 0x1c);
      uVar4 = unnamed_function_95402(uRam005579d4);
      UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam0056b184,0);
      DieEvent__add_OnDie(uVar7,uVar4,0);
      return;
    }
  }
  unnamed_function_1116(iVar5,uVar7);
  do {
    halt_trap();
  } while( true );
}



// ---- MovementByVelocity::OnDisable   [wasm func86522 -> ram:81a3ace1 ; ghidra: MovementByVelocity::OnDisable]

void MovementByVelocity__OnDisable(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664925 == '\0') {
    unnamed_function_1099(0x557af4);
    unnamed_function_1099(0x56b188);
    cRam00664925 = '\x01';
  }
  if (*(char *)(param_2 + 8) != '\0') {
    iVar7 = *(int *)(param_1 + 0x14);
    uVar5 = unnamed_function_95402(uRam00557af4);
    unnamed_function_60334(uVar5,param_1,uRam0056b188,0);
    if (cRam00664928 == '\0') {
      unnamed_function_1099(0x557af4);
      cRam00664928 = '\x01';
    }
    iVar3 = *(int *)(iVar7 + 0x10);
    do {
      iVar4 = 0;
      iVar6 = unnamed_function_85160(iVar3,uVar5,0);
      uVar2 = uRam00557af4;
      if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557af4), iVar4 == 0)) {
        unnamed_function_1116(iVar6,uVar2);
        do {
          halt_trap();
        } while( true );
      }
      iVar4 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar4,iVar3);
      bVar1 = iVar3 != iVar4;
      iVar3 = iVar4;
    } while (bVar1);
  }
  return;
}



// ---- MovementByVelocity::DestroyedEvent_OnDestroyed   [wasm func86523 -> ram:81a3adb4 ; ghidra: MovementByVelocity::DestroyedEvent_OnDestroyed]

void MovementByVelocity__DestroyedEvent_OnDestroyed(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664926 == '\0') {
    unnamed_function_1099(0x557af4);
    unnamed_function_1099(0x56b188);
    cRam00664926 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x14);
  uVar5 = unnamed_function_95402(uRam00557af4);
  unnamed_function_60334(uVar5,param_1,uRam0056b188,0);
  if (cRam00664927 == '\0') {
    unnamed_function_1099(0x557af4);
    cRam00664927 = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85158(iVar3,uVar5,0);
    uVar2 = uRam00557af4;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557af4), iVar4 == 0)) break;
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



// ---- MovementByVelocity::DieEvent_OnDie   [wasm func86524 -> ram:81a3ae7e ; ghidra: MovementByVelocity::DieEvent_OnDie]

void MovementByVelocity__DieEvent_OnDie(int param_1,int param_2)

{
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_10 = CONCAT44(*(float *)(param_2 + 0x10) *
                       (float)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20),
                       *(float *)(param_2 + 0x10) * (float)*(undefined8 *)(param_2 + 8));
  uStack_8 = uStack_10;
  UnityEngine_Rigidbody2D__get_velocity_Injected(*(undefined4 *)(param_1 + 0x10),&uStack_10,0);
  return;
}



// ---- MovementByVelocity::MovementByVelocityEvent_OnMovementByVelocity   [wasm func86525 -> ram:81a3aed7 ; ghidra: MovementByVelocity::MovementByVelocityEvent_OnMovementByVelocity]

void MovementByVelocity__MovementByVelocityEvent_OnMovementByVelocity
               (int param_1,undefined8 *param_2,float param_3)

{
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_10 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) * param_3,(float)*param_2 * param_3);
  uStack_8 = uStack_10;
  UnityEngine_Rigidbody2D__get_velocity_Injected(*(undefined4 *)(param_1 + 0x10),&uStack_10,0);
  return;
}



