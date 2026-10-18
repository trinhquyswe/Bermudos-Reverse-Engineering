// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Idle  (Assembly-CSharp)  -  6 function(s)

// ---- Idle::Awake   [wasm func86508 -> ram:81a3a283 ; ghidra: Idle::Awake]

void Idle__Awake(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam0066491b == '\0') {
    unnamed_function_1099(0x5579fc);
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x569f74);
    unnamed_function_1099(0x569f78);
    unnamed_function_1099(0x565d78);
    cRam0066491b = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x14);
  uVar3 = unnamed_function_95402(uRam005579fc);
  UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam00569f78,0);
  if (cRam0066491e == '\0') {
    unnamed_function_1099(0x5579fc);
    cRam0066491e = '\x01';
  }
  iVar6 = *(int *)(iVar5 + 0x10);
  do {
    iVar2 = 0;
    iVar4 = unnamed_function_85158(iVar6,uVar3,0);
    uVar7 = uRam005579fc;
    if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam005579fc), iVar2 == 0)) {
      unnamed_function_1116(iVar4,uVar7);
      do {
        halt_trap();
      } while( true );
    }
    iVar2 = System_Net_WebOperation___ctor(iVar5 + 0x10,iVar2,iVar6);
    bVar1 = iVar6 != iVar2;
    iVar6 = iVar2;
  } while (bVar1);
  iVar5 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar6 = **(int **)(iVar5 + 0x5c);
  uVar7 = *(undefined4 *)(iVar6 + 0x20);
  uVar3 = unnamed_function_95402(uRam005579ec);
  unnamed_function_60038(uVar3,param_1,uRam00569f74,0);
  iVar5 = unnamed_function_85158(uVar7,uVar3,0);
  uVar3 = uRam005579ec;
  if (iVar5 != 0) {
    iVar2 = unnamed_function_1112(iVar5,uRam005579ec);
    if (iVar2 == 0) {
      unnamed_function_1116(iVar5,uVar3);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar6 + 0x20) = iVar2;
    uVar3 = uRam005579ec;
    iVar6 = unnamed_function_1112(iVar5,uRam005579ec);
    if (iVar6 != 0) {
      return;
    }
    unnamed_function_1116(iVar5,uVar3);
    do {
      halt_trap();
    } while( true );
  }
  *(undefined4 *)(iVar6 + 0x20) = 0;
  return;
}



// ---- Idle::ctor   [wasm func86509 -> ram:81a3a426 ; ghidra: Idle::.ctor]

void Idle___ctor(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam0066491e == '\0') {
    unnamed_function_1099(0x5579fc);
    cRam0066491e = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
    uVar2 = uRam005579fc;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam005579fc), iVar4 == 0)) break;
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



// ---- Idle::OnEnable   [wasm func86510 -> ram:81a3a4a6 ; ghidra: Idle::OnEnable]

void Idle__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam0066491c == '\0') {
    unnamed_function_1099(0x5579fc);
    unnamed_function_1099(0x569f78);
    cRam0066491c = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x14);
  uVar5 = unnamed_function_95402(uRam005579fc);
  UnityEngine_UIElements_VisualElement__get_layout(uVar5,param_1,uRam00569f78,0);
  if (cRam0066491f == '\0') {
    unnamed_function_1099(0x5579fc);
    cRam0066491f = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85160(iVar3,uVar5,0);
    uVar2 = uRam005579fc;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam005579fc), iVar4 == 0)) break;
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



// ---- Idle::OnDisable   [wasm func86512 -> ram:81a3a5f0 ; ghidra: Idle::OnDisable]

void Idle__OnDisable(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (cRam0066491d == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x569f74);
    unnamed_function_1099(0x565d78);
    cRam0066491d = '\x01';
  }
  if (param_2 == 0) {
    UnityEngine_Rigidbody2D__set_isKinematic(*(undefined4 *)(param_1 + 0x10),7,0);
  }
  else if ((param_2 != 1) && (param_2 == 2)) {
    UnityEngine_Rigidbody2D__set_isKinematic(*(undefined4 *)(param_1 + 0x10),4,0);
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar4 = **(int **)(iVar3 + 0x5c);
    uVar5 = *(undefined4 *)(iVar4 + 0x20);
    uVar1 = unnamed_function_95402(uRam005579ec);
    unnamed_function_60038(uVar1,param_1,uRam00569f74,0);
    iVar3 = unnamed_function_85160(uVar5,uVar1,0);
    uVar1 = uRam005579ec;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar4 + 0x20) = 0;
      return;
    }
    iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
    if (iVar2 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar4 + 0x20) = iVar2;
    uVar1 = uRam005579ec;
    iVar4 = unnamed_function_1112(iVar3,uRam005579ec);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
  }
  return;
}



// ---- Idle::GameStateChanged_OnIdle   [wasm func86513 -> ram:81a3a70c ; ghidra: Idle::GameStateChanged_OnIdle]

void Idle__GameStateChanged_OnIdle(int param_1)

{
  undefined4 uVar1;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (cRam0066482a == '\0') {
    unnamed_function_1099(0x55d024);
    cRam0066482a = '\x01';
  }
  uStack_10 = **(undefined8 **)(iRam0055d024 + 0x5c);
  uStack_8 = uStack_10;
  UnityEngine_Rigidbody2D__get_velocity_Injected(uVar1,&uStack_10,0);
  return;
}



// ---- Idle::IdleEvent_OnIdle   [wasm func86514 -> ram:81a3a76c ; ghidra: Idle::IdleEvent_OnIdle]

void Idle__IdleEvent_OnIdle(int param_1)

{
  undefined4 uVar1;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (cRam0066482a == '\0') {
    unnamed_function_1099(0x55d024);
    cRam0066482a = '\x01';
  }
  uStack_10 = **(undefined8 **)(iRam0055d024 + 0x5c);
  uStack_8 = uStack_10;
  UnityEngine_Rigidbody2D__get_velocity_Injected(uVar1,&uStack_10,0);
  return;
}



