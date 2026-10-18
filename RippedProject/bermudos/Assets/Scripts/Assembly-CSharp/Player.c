// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Player  (Assembly-CSharp)  -  11 function(s)

// ---- Player::Awake   [wasm func86568 -> ram:81a3c621 ; ghidra: Player::Awake]

void Player__Awake(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (cRam0066493e == '\0') {
    unnamed_function_1099(0x5579d4);
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x56b8dc);
    unnamed_function_1099(0x56b8e0);
    unnamed_function_1099(0x56b8e4);
    unnamed_function_1099(0x565d78);
    cRam0066493e = '\x01';
  }
  if (cRam006649b1 == '\0') {
    unnamed_function_1099(0x55beac);
    unnamed_function_1099(0x55c894);
    cRam006649b1 = '\x01';
  }
  iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0xc);
  if (iVar3 != 0) {
    iVar5 = unnamed_function_95402(uRam0055beac);
    MapChangedEventArgs___ctor(iVar5,0);
    *(int *)(iVar5 + 8) = param_1;
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),iVar5,*(undefined4 *)(iVar3 + 0x14));
  }
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = unnamed_function_95402(uRam00557acc);
  unnamed_function_60334(uVar1,param_1,uRam0056b8e4,0);
  HealthBar___ctor(uVar4,uVar1,0);
  iVar3 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar5 = **(int **)(iVar3 + 0x5c);
  uVar4 = *(undefined4 *)(iVar5 + 0x20);
  uVar1 = unnamed_function_95402(uRam005579ec);
  unnamed_function_60038(uVar1,param_1,uRam0056b8e0,0);
  iVar3 = unnamed_function_85158(uVar4,uVar1,0);
  uVar1 = uRam005579ec;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar5 + 0x20) = 0;
  }
  else {
    iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
    if (iVar2 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar5 + 0x20) = iVar2;
    uVar1 = uRam005579ec;
    iVar5 = unnamed_function_1112(iVar3,uRam005579ec);
    if (iVar5 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  uVar1 = unnamed_function_95402(uRam005579d4);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056b8dc,0);
  DestroyedEventArgs___ctor(uVar4,uVar1,0);
  return;
}



// ---- Player::OnEnable   [wasm func86570 -> ram:81a3c86e ; ghidra: Player::OnEnable]

void Player__OnEnable(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam0066493f == '\0') {
    unnamed_function_1099(0x5579d4);
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x56b8dc);
    unnamed_function_1099(0x56b8e4);
    cRam0066493f = '\x01';
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = unnamed_function_95402(uRam00557acc);
  unnamed_function_60334(uVar1,param_1,uRam0056b8e4,0);
  HealthEvent__add_OnHealthChanged(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  uVar1 = unnamed_function_95402(uRam005579d4);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056b8dc,0);
  DieEvent__add_OnDie(uVar2,uVar1,0);
  return;
}



// ---- Player::OnDisable   [wasm func86571 -> ram:81a3c907 ; ghidra: Player::OnDisable]

void Player__OnDisable(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 auStack_10 [2];
  
  uVar1 = System_Linq_Enumerable__Count(param_2,0);
  UnityEngine_Camera__get_farClipPlane(auStack_10,uVar1,0);
  *param_1 = auStack_10[0];
  return;
}



// ---- Player::DieEvent_OnDie   [wasm func86573 -> ram:81a3cdf4 ; ghidra: Player::DieEvent_OnDie]

void Player__DieEvent_OnDie(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  if (cRam00664941 == '\0') {
    unnamed_function_1099(0x55ab64);
    cRam00664941 = '\x01';
  }
  if (*(int *)(param_2 + 0xc) < 1) {
    if (*(char *)(param_1 + 0x6c) == '\0') {
      return;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    iVar1 = unnamed_function_95402(uRam0055ab64);
    DestroyedEvent___ctor(iVar1,0);
    *(undefined1 *)(iVar1 + 8) = 1;
    multiple_2_DestroyedEvent__remove_OnDestroyed(uVar3,iVar1,0);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x6c) = uVar2;
  return;
}



// ---- Player::HealthEvent_OnHealthChanged   [wasm func86574 -> ram:81a3ce62 ; ghidra: Player::HealthEvent_OnHealthChanged]

void Player__HealthEvent_OnHealthChanged(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664942 == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x56b8e0);
    unnamed_function_1099(0x565d78);
    cRam00664942 = '\x01';
  }
  if (param_2 == 0) {
    uVar1 = unnamed_function_44644(param_1,0);
    uVar1 = UnityEngine_GameObject__AddComponent(uVar1,0);
    uStack_20 = *(undefined8 *)(*(int *)(param_1 + 0x58) + 0x10);
    uStack_8 = 0;
    uStack_18 = 0;
    uStack_10 = uStack_20;
    multiple_2_UnityEngine_Transform___ctor(uVar1,&uStack_20,0);
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
    unnamed_function_60038(uVar1,param_1,uRam0056b8e0,0);
    iVar3 = unnamed_function_85160(uVar5,uVar1,0);
    uVar1 = uRam005579ec;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar4 + 0x20) = 0;
    }
    else {
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
  }
  return;
}



// ---- Player::GameStateChanged_OnPlayer   [wasm func86575 -> ram:81a3cfb9 ; ghidra: Player::GameStateChanged_OnPlayer]

void Player__GameStateChanged_OnPlayer(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (cRam00664943 == '\0') {
    unnamed_function_1099(0x569a5c);
    unnamed_function_1099(0x572aa0);
    cRam00664943 = '\x01';
  }
  uVar1 = UnityEngine_Collision2D__get_rigidbody(param_1,0);
  iVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
  iVar3 = UnityEngine_LayerMask__LayerToName(uRam00572aa0,0);
  if (iVar2 == iVar3) {
    uVar1 = UnityEngine_Collision2D__get_rigidbody(param_1,0);
    iVar2 = UnityEngine_Object__set_name(uVar1,uRam00569a5c);
    if (*(char *)(iVar2 + 0x28) != '\0') {
      UnityEngine_Rigidbody2D__set_isKinematic(*(undefined4 *)(iVar2 + 0x1c),7,0);
    }
  }
  return;
}



// ---- Player::OnCollisionStay2D   [wasm func86576 -> ram:81a3d02b ; ghidra: Player::OnCollisionStay2D]

void Player__OnCollisionStay2D(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (cRam00664944 == '\0') {
    unnamed_function_1099(0x569a5c);
    unnamed_function_1099(0x572aa0);
    cRam00664944 = '\x01';
  }
  uVar1 = UnityEngine_Collision2D__get_rigidbody(param_1,0);
  iVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
  iVar3 = UnityEngine_LayerMask__LayerToName(uRam00572aa0,0);
  if (iVar2 == iVar3) {
    uVar1 = UnityEngine_Collision2D__get_rigidbody(param_1,0);
    iVar2 = UnityEngine_Object__set_name(uVar1,uRam00569a5c);
    if (*(char *)(iVar2 + 0x28) != '\0') {
      UnityEngine_Rigidbody2D__set_isKinematic(*(undefined4 *)(iVar2 + 0x1c),4,0);
    }
  }
  return;
}



// ---- Player::OnCollisionExit2D   [wasm func86577 -> ram:81a3d09d ; ghidra: Player::OnCollisionExit2D]

void Player__OnCollisionExit2D(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664945 == '\0') {
    unnamed_function_1099(0x559d94);
    cRam00664945 = '\x01';
  }
  uVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559d94,2);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- Player::ctor   [wasm func86578 -> ram:81a3d0d8 ; ghidra: Player::.ctor]

void Player___ctor(void)

{
  undefined4 uVar1;
  
  if (cRam00664946 == '\0') {
    unnamed_function_1099(0x55e5cc);
    cRam00664946 = '\x01';
  }
  uVar1 = unnamed_function_95402(iRam0055e5cc);
  **(undefined4 **)(iRam0055e5cc + 0x5c) = uVar1;
  return;
}



// ---- Player::c_ctor   [wasm func86579 -> ram:81a3d118 ; ghidra: Player+<>c::.ctor]

void Player_<>c___ctor(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam00664947 == '\0') {
    unnamed_function_1099(0x565d58);
    unnamed_function_1099(0x565d78);
    cRam00664947 = '\x01';
  }
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x24),0);
  unnamed_function_44686(uVar1,0,0);
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  if (*(int *)(**(int **)(iVar2 + 0x5c) + 0x1c) == 4) {
    iVar2 = *(int *)(iRam00565d58 + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    MusicManager__Start(**(undefined4 **)(iVar2 + 0x5c),iVar2);
    iVar2 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    GameManager__TransitionToGame(**(undefined4 **)(iVar2 + 0x5c),3,0);
  }
  return;
}



// ---- Player::c_DieEvent_OnDie_b_28_0   [wasm func86581 -> ram:81a3d3b1 ; ghidra: Player+<>c::<DieEvent_OnDie>b__28_0]

void Player_<>c__<DieEvent_OnDie>b__28_0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (cRam00664948 == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x567e2c);
    unnamed_function_1099(0x567eb4);
    unnamed_function_1099(0x567eb8);
    unnamed_function_1099(0x567ef0);
    unnamed_function_1099(0x55b644);
    unnamed_function_1099(0x56b924);
    unnamed_function_1099(0x565d78);
    cRam00664948 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ef0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e2c);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567eb4);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567eb8);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = unnamed_function_95402(uRam0055b644);
  InputSystem_Actions__get_asset(uVar1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
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
  unnamed_function_60038(uVar1,param_1,uRam0056b924,0);
  iVar3 = unnamed_function_85158(uVar5,uVar1,0);
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
  if (iVar4 != 0) {
    return;
  }
  unnamed_function_1116(iVar3,uVar1);
  do {
    halt_trap();
  } while( true );
}



