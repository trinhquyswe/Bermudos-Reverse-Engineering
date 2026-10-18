// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: AnimatePlayer  (Assembly-CSharp)  -  17 function(s)

// ---- AnimatePlayer::PlayAttackAnimationCoroutine_d_18_System_Collections_IEnumerator_get_Current   [wasm func86858 -> ram:81a47f43 ; ghidra: AnimatePlayer+<PlayAttackAnimationCoroutine>d__18::System.Collections.IEnumerator.get_Current]

void AnimatePlayer_<PlayAttackAnimationCoroutine>d__18__System_Collections_IEnumerator_get_Current
               (int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664a8d == '\0') {
    unnamed_function_1099(0x5579a8);
    cRam00664a8d = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
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



// ---- AnimatePlayer::Awake   [wasm func86876 -> ram:81a489dc ; ghidra: AnimatePlayer::Awake]

void AnimatePlayer__Awake(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (cRam00664a81 == '\0') {
    unnamed_function_1099(0x5579fc);
    unnamed_function_1099(0x5579a8);
    unnamed_function_1099(0x5579d4);
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x557ac4);
    unnamed_function_1099(0x557af4);
    unnamed_function_1099(0x557aa8);
    unnamed_function_1099(0x566dd4);
    unnamed_function_1099(0x566dd8);
    unnamed_function_1099(0x566ddc);
    unnamed_function_1099(0x566de0);
    unnamed_function_1099(0x566de4);
    unnamed_function_1099(0x566de8);
    unnamed_function_1099(0x566dec);
    unnamed_function_1099(0x565d78);
    cRam00664a81 = '\x01';
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x20);
  uVar3 = unnamed_function_95402(uRam00557aa8);
  unnamed_function_60334(uVar3,param_1,uRam00566dd4,0);
  if (cRam00664a7c == '\0') {
    unnamed_function_1099(0x557aa8);
    cRam00664a7c = '\x01';
  }
  iVar7 = *(int *)(iVar5 + 0x10);
  do {
    iVar2 = 0;
    iVar4 = unnamed_function_85158(iVar7,uVar3,0);
    uVar6 = uRam00557aa8;
    if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam00557aa8), iVar2 == 0)) {
      unnamed_function_1116(iVar4,uVar6);
      do {
        halt_trap();
      } while( true );
    }
    iVar2 = System_Net_WebOperation___ctor(iVar5 + 0x10,iVar2,iVar7);
    bVar1 = iVar7 != iVar2;
    iVar7 = iVar2;
  } while (bVar1);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
  uVar3 = unnamed_function_95402(uRam005579fc);
  UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam00566de8,0);
  Idle___ctor(uVar6,uVar3,0);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  uVar3 = unnamed_function_95402(uRam00557af4);
  unnamed_function_60334(uVar3,param_1,uRam00566dec,0);
  MovementByVelocity___ctor(uVar6,uVar3,0);
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
  uVar3 = unnamed_function_95402(uRam005579a8);
  UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam00566dd8,0);
  if (cRam00664a8d == '\0') {
    unnamed_function_1099(0x5579a8);
    cRam00664a8d = '\x01';
  }
  iVar7 = *(int *)(iVar5 + 0x10);
  do {
    iVar2 = 0;
    iVar4 = unnamed_function_85158(iVar7,uVar3,0);
    uVar6 = uRam005579a8;
    if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam005579a8), iVar2 == 0)) {
      unnamed_function_1116(iVar4,uVar6);
      do {
        halt_trap();
      } while( true );
    }
    iVar2 = System_Net_WebOperation___ctor(iVar5 + 0x10,iVar2,iVar7);
    bVar1 = iVar7 != iVar2;
    iVar7 = iVar2;
  } while (bVar1);
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x30);
  uVar3 = unnamed_function_95402(uRam00557ac4);
  unnamed_function_60334(uVar3,param_1,uRam00566ddc,0);
  if (cRam00664b34 == '\0') {
    unnamed_function_1099(0x557ac4);
    cRam00664b34 = '\x01';
  }
  iVar7 = *(int *)(iVar5 + 0x10);
  do {
    iVar2 = 0;
    iVar4 = unnamed_function_85158(iVar7,uVar3,0);
    uVar6 = uRam00557ac4;
    if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam00557ac4), iVar2 == 0)) {
      unnamed_function_1116(iVar4,uVar6);
      do {
        halt_trap();
      } while( true );
    }
    iVar2 = System_Net_WebOperation___ctor(iVar5 + 0x10,iVar2,iVar7);
    bVar1 = iVar7 != iVar2;
    iVar7 = iVar2;
  } while (bVar1);
  iVar5 = *(int *)(param_1 + 0x14);
  uVar3 = unnamed_function_95402(uRam005579d4);
  UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam00566de0,0);
  if (cRam00664b37 == '\0') {
    unnamed_function_1099(0x5579d4);
    cRam00664b37 = '\x01';
  }
  iVar7 = *(int *)(iVar5 + 0x10);
  do {
    iVar2 = 0;
    iVar4 = unnamed_function_85158(iVar7,uVar3,0);
    uVar6 = uRam005579d4;
    if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam005579d4), iVar2 == 0)) {
      unnamed_function_1116(iVar4,uVar6);
      do {
        halt_trap();
      } while( true );
    }
    iVar2 = System_Net_WebOperation___ctor(iVar5 + 0x10,iVar2,iVar7);
    bVar1 = iVar7 != iVar2;
    iVar7 = iVar2;
  } while (bVar1);
  iVar5 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar7 = **(int **)(iVar5 + 0x5c);
  uVar6 = *(undefined4 *)(iVar7 + 0x20);
  uVar3 = unnamed_function_95402(uRam005579ec);
  unnamed_function_60038(uVar3,param_1,uRam00566de4,0);
  iVar5 = unnamed_function_85158(uVar6,uVar3,0);
  uVar3 = uRam005579ec;
  if (iVar5 != 0) {
    iVar2 = unnamed_function_1112(iVar5,uRam005579ec);
    if (iVar2 == 0) {
      unnamed_function_1116(iVar5,uVar3);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar7 + 0x20) = iVar2;
    uVar3 = uRam005579ec;
    iVar7 = unnamed_function_1112(iVar5,uRam005579ec);
    if (iVar7 != 0) {
      return;
    }
    unnamed_function_1116(iVar5,uVar3);
    do {
      halt_trap();
    } while( true );
  }
  *(undefined4 *)(iVar7 + 0x20) = 0;
  return;
}



// ---- AnimatePlayer::OnEnable   [wasm func86879 -> ram:81a48f15 ; ghidra: AnimatePlayer::OnEnable]

void AnimatePlayer__OnEnable(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam00664a82 == '\0') {
    unnamed_function_1099(0x5579fc);
    unnamed_function_1099(0x5579a8);
    unnamed_function_1099(0x5579d4);
    unnamed_function_1099(0x557ac4);
    unnamed_function_1099(0x557af4);
    unnamed_function_1099(0x557aa8);
    unnamed_function_1099(0x566dd4);
    unnamed_function_1099(0x566dd8);
    unnamed_function_1099(0x566ddc);
    unnamed_function_1099(0x566de0);
    unnamed_function_1099(0x566de8);
    unnamed_function_1099(0x566dec);
    cRam00664a82 = '\x01';
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x20);
  uVar4 = unnamed_function_95402(uRam00557aa8);
  unnamed_function_60334(uVar4,param_1,uRam00566dd4,0);
  if (cRam00664a7d == '\0') {
    unnamed_function_1099(0x557aa8);
    cRam00664a7d = '\x01';
  }
  iVar2 = *(int *)(iVar6 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar5 = unnamed_function_85160(iVar2,uVar4,0);
    uVar7 = uRam00557aa8;
    if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam00557aa8), iVar3 == 0)) break;
    iVar3 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar3,iVar2);
    bVar1 = iVar2 == iVar3;
    iVar2 = iVar3;
    if (bVar1) {
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
      uVar4 = unnamed_function_95402(uRam005579fc);
      UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566de8,0);
      IdleEvent__add_OnIdle(uVar7,uVar4,0);
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
      uVar4 = unnamed_function_95402(uRam00557af4);
      unnamed_function_60334(uVar4,param_1,uRam00566dec,0);
      MovementByVelocityEvent__add_OnMovementByVelocity(uVar7,uVar4,0);
      iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
      uVar4 = unnamed_function_95402(uRam005579a8);
      UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566dd8,0);
      if (cRam00664a8e == '\0') {
        unnamed_function_1099(0x5579a8);
        cRam00664a8e = '\x01';
      }
      iVar2 = *(int *)(iVar6 + 0x10);
      while( true ) {
        iVar3 = 0;
        iVar5 = unnamed_function_85160(iVar2,uVar4,0);
        uVar7 = uRam005579a8;
        if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579a8), iVar3 == 0)) break;
        iVar3 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar3,iVar2);
        bVar1 = iVar2 == iVar3;
        iVar2 = iVar3;
        if (bVar1) {
          iVar6 = *(int *)(param_1 + 0x14);
          uVar4 = unnamed_function_95402(uRam005579d4);
          UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566de0,0);
          if (cRam00664b38 == '\0') {
            unnamed_function_1099(0x5579d4);
            cRam00664b38 = '\x01';
          }
          iVar2 = *(int *)(iVar6 + 0x10);
          while( true ) {
            iVar3 = 0;
            iVar5 = unnamed_function_85160(iVar2,uVar4,0);
            uVar7 = uRam005579d4;
            if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579d4), iVar3 == 0))
            break;
            iVar3 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar3,iVar2);
            bVar1 = iVar2 == iVar3;
            iVar2 = iVar3;
            if (bVar1) {
              iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x30);
              uVar4 = unnamed_function_95402(uRam00557ac4);
              unnamed_function_60334(uVar4,param_1,uRam00566ddc,0);
              if (cRam00664b35 == '\0') {
                unnamed_function_1099(0x557ac4);
                cRam00664b35 = '\x01';
              }
              iVar2 = *(int *)(iVar6 + 0x10);
              while( true ) {
                iVar3 = 0;
                iVar5 = unnamed_function_85160(iVar2,uVar4,0);
                uVar7 = uRam00557ac4;
                if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam00557ac4), iVar3 == 0))
                break;
                iVar3 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar3,iVar2);
                bVar1 = iVar2 == iVar3;
                iVar2 = iVar3;
                if (bVar1) {
                  return;
                }
              }
              unnamed_function_1116(iVar5,uVar7);
              do {
                halt_trap();
              } while( true );
            }
          }
          unnamed_function_1116(iVar5,uVar7);
          do {
            halt_trap();
          } while( true );
        }
      }
      unnamed_function_1116(iVar5,uVar7);
      do {
        halt_trap();
      } while( true );
    }
  }
  unnamed_function_1116(iVar5,uVar7);
  do {
    halt_trap();
  } while( true );
}



// ---- AnimatePlayer::OnDisable   [wasm func86882 -> ram:81a49375 ; ghidra: AnimatePlayer::OnDisable]

void AnimatePlayer__OnDisable(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664a83 == '\0') {
    unnamed_function_1099(0x5579fc);
    unnamed_function_1099(0x5579a8);
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x557ac4);
    unnamed_function_1099(0x557af4);
    unnamed_function_1099(0x566dd8);
    unnamed_function_1099(0x566ddc);
    unnamed_function_1099(0x566de4);
    unnamed_function_1099(0x566de8);
    unnamed_function_1099(0x566dec);
    unnamed_function_1099(0x55c620);
    unnamed_function_1099(0x565d78);
    cRam00664a83 = '\x01';
  }
  if (param_2 == 0) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
    uVar3 = unnamed_function_95402(uRam005579fc);
    UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam00566de8,0);
    IdleEvent__add_OnIdle(uVar5,uVar3,0);
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
    uVar3 = unnamed_function_95402(uRam00557af4);
    unnamed_function_60334(uVar3,param_1,uRam00566dec,0);
    MovementByVelocityEvent__add_OnMovementByVelocity(uVar5,uVar3,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
    uVar3 = unnamed_function_95402(uRam005579a8);
    UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam00566dd8,0);
    if (cRam00664a8e == '\0') {
      unnamed_function_1099(0x5579a8);
      cRam00664a8e = '\x01';
    }
    iVar7 = *(int *)(iVar6 + 0x10);
    while( true ) {
      iVar2 = 0;
      iVar4 = unnamed_function_85160(iVar7,uVar3,0);
      uVar5 = uRam005579a8;
      if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam005579a8), iVar2 == 0)) break;
      iVar2 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar2,iVar7);
      bVar1 = iVar7 == iVar2;
      iVar7 = iVar2;
      if (bVar1) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x30);
        uVar3 = unnamed_function_95402(uRam00557ac4);
        unnamed_function_60334(uVar3,param_1,uRam00566ddc,0);
        if (cRam00664b35 == '\0') {
          unnamed_function_1099(0x557ac4);
          cRam00664b35 = '\x01';
        }
        iVar7 = *(int *)(iVar6 + 0x10);
        while( true ) {
          iVar2 = 0;
          iVar4 = unnamed_function_85160(iVar7,uVar3,0);
          uVar5 = uRam00557ac4;
          if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam00557ac4), iVar2 == 0))
          break;
          iVar2 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar2,iVar7);
          bVar1 = iVar7 == iVar2;
          iVar7 = iVar2;
          if (bVar1) {
            AnimatePlayer__InitializeAimAnimationParameters(param_1,iVar2);
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
            if (*(int *)(iRam0055c620 + 0x74) == 0) {
              unnamed_function_94848(iRam0055c620);
            }
            multiple_2_UnityEngine_Animator__GetBool_1
                      (uVar3,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0xc),1,0);
            return;
          }
        }
        unnamed_function_1116(iVar4,uVar5);
        do {
          halt_trap();
        } while( true );
      }
    }
    unnamed_function_1116(iVar4,uVar5);
    do {
      halt_trap();
    } while( true );
  }
  if ((param_2 != 1) && (param_2 == 2)) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
    uVar3 = unnamed_function_95402(uRam005579fc);
    UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam00566de8,0);
    Idle___ctor(uVar5,uVar3,0);
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
    uVar3 = unnamed_function_95402(uRam00557af4);
    unnamed_function_60334(uVar3,param_1,uRam00566dec,0);
    MovementByVelocity___ctor(uVar5,uVar3,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
    uVar3 = unnamed_function_95402(uRam005579a8);
    UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam00566dd8,0);
    if (cRam00664a8d == '\0') {
      unnamed_function_1099(0x5579a8);
      cRam00664a8d = '\x01';
    }
    iVar7 = *(int *)(iVar6 + 0x10);
    do {
      iVar2 = 0;
      iVar4 = unnamed_function_85158(iVar7,uVar3,0);
      uVar5 = uRam005579a8;
      if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam005579a8), iVar2 == 0)) {
        unnamed_function_1116(iVar4,uVar5);
        do {
          halt_trap();
        } while( true );
      }
      iVar2 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar2,iVar7);
      bVar1 = iVar7 != iVar2;
      iVar7 = iVar2;
    } while (bVar1);
    iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x30);
    uVar3 = unnamed_function_95402(uRam00557ac4);
    unnamed_function_60334(uVar3,param_1,uRam00566ddc,0);
    if (cRam00664b34 == '\0') {
      unnamed_function_1099(0x557ac4);
      cRam00664b34 = '\x01';
    }
    iVar7 = *(int *)(iVar6 + 0x10);
    do {
      iVar2 = 0;
      iVar4 = unnamed_function_85158(iVar7,uVar3,0);
      uVar5 = uRam00557ac4;
      if ((iVar4 != 0) && (iVar2 = unnamed_function_1112(iVar4,uRam00557ac4), iVar2 == 0)) {
        unnamed_function_1116(iVar4,uVar5);
        do {
          halt_trap();
        } while( true );
      }
      iVar2 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar2,iVar7);
      bVar1 = iVar7 != iVar2;
      iVar7 = iVar2;
    } while (bVar1);
    iVar6 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = System_Threading_Monitor__Enter_1(iVar6);
    }
    iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
    if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = System_Threading_Monitor__Enter_1(iVar6);
    }
    iVar7 = **(int **)(iVar6 + 0x5c);
    uVar5 = *(undefined4 *)(iVar7 + 0x20);
    uVar3 = unnamed_function_95402(uRam005579ec);
    unnamed_function_60038(uVar3,param_1,uRam00566de4,0);
    iVar6 = unnamed_function_85160(uVar5,uVar3,0);
    uVar3 = uRam005579ec;
    if (iVar6 == 0) {
      *(undefined4 *)(iVar7 + 0x20) = 0;
      return;
    }
    iVar2 = unnamed_function_1112(iVar6,uRam005579ec);
    if (iVar2 == 0) {
      unnamed_function_1116(iVar6,uVar3);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar7 + 0x20) = iVar2;
    uVar3 = uRam005579ec;
    iVar7 = unnamed_function_1112(iVar6,uRam005579ec);
    if (iVar7 == 0) {
      unnamed_function_1116(iVar6,uVar3);
      do {
        halt_trap();
      } while( true );
    }
  }
  return;
}



// ---- AnimatePlayer::InitializeAimAnimationParameters   [wasm func86883 -> ram:81a49850 ; ghidra: AnimatePlayer::InitializeAimAnimationParameters]

void AnimatePlayer__InitializeAimAnimationParameters(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a8a == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a8a = '\x01';
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
  if (*(int *)(iRam0055c620 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__GetBool_1(uVar1,**(undefined4 **)(iRam0055c620 + 0x5c),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 4),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 8),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0xc),0,0);
  return;
}



// ---- AnimatePlayer::GameStateChanged_OnPlayer   [wasm func86884 -> ram:81a49902 ; ghidra: AnimatePlayer::GameStateChanged_OnPlayer]

void AnimatePlayer__GameStateChanged_OnPlayer(undefined4 param_1,int param_2)

{
  AnimatePlayer__DieEvent_OnDie(param_1,param_1);
  AnimatePlayer__InitializeStateAnimationParameters(param_1,*(undefined4 *)(param_2 + 8),param_1);
  return;
}



// ---- AnimatePlayer::DieEvent_OnDie   [wasm func86885 -> ram:81a4991b ; ghidra: AnimatePlayer::DieEvent_OnDie]

void AnimatePlayer__DieEvent_OnDie(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a89 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a89 = '\x01';
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
  if (*(int *)(iRam0055c620 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__GetBool_1
            (uVar1,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x10),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x1c),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x20),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x24),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x28),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x18),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x2c),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x30),0,0);
  return;
}



// ---- AnimatePlayer::InitializeStateAnimationParameters   [wasm func86886 -> ram:81a49a46 ; ghidra: AnimatePlayer::InitializeStateAnimationParameters]

/* WARNING: Type propagation algorithm not settling */

void AnimatePlayer__InitializeStateAnimationParameters(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (cRam00664a8b == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a8b = '\x01';
  }
  if (param_2 == 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
    iVar1 = 0x10;
    iVar3 = *(int *)(iRam0055c620 + 0x74);
  }
  else if (param_2 == 1) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
    iVar1 = 0x1c;
    iVar3 = *(int *)(iRam0055c620 + 0x74);
  }
  else if (param_2 == 2) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
    iVar1 = 0x20;
    iVar3 = *(int *)(iRam0055c620 + 0x74);
  }
  else if (param_2 == 3) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
    iVar1 = 0x24;
    iVar3 = *(int *)(iRam0055c620 + 0x74);
  }
  else if (param_2 == 4) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
    iVar1 = 0x28;
    iVar3 = *(int *)(iRam0055c620 + 0x74);
  }
  else if (param_2 == 5) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
    iVar1 = 0x18;
    iVar3 = *(int *)(iRam0055c620 + 0x74);
  }
  else if (param_2 == 6) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
    iVar1 = 0x2c;
    iVar3 = *(int *)(iRam0055c620 + 0x74);
  }
  else {
    if (param_2 != 7) {
      return;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
    iVar1 = 0x30;
    iVar3 = *(int *)(iRam0055c620 + 0x74);
  }
  if (iVar3 == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__GetBool_1
            (uVar2,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + iVar1),1,0);
  return;
}



// ---- AnimatePlayer::AnimatePlayer_OnAnimate   [wasm func86887 -> ram:81a49bb7 ; ghidra: AnimatePlayer::AnimatePlayer_OnAnimate]

void AnimatePlayer__AnimatePlayer_OnAnimate(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a84 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a84 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    AnimatePlayer__InitializeAimAnimationParameters(param_1,param_1);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
    if (*(int *)(iRam0055c620 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c620);
    }
    multiple_2_UnityEngine_Animator__GetBool_1(uVar1,**(undefined4 **)(iRam0055c620 + 0x5c),1,0);
  }
  return;
}



// ---- AnimatePlayer::IdleEvent_OnIdle   [wasm func86888 -> ram:81a49c20 ; ghidra: AnimatePlayer::IdleEvent_OnIdle]

void AnimatePlayer__IdleEvent_OnIdle(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a85 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a85 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    AnimatePlayer__InitializeAimAnimationParameters(param_1,param_1);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
    if (*(int *)(iRam0055c620 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c620);
    }
    multiple_2_UnityEngine_Animator__GetBool_1
              (uVar1,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 4),1,0);
  }
  return;
}



// ---- AnimatePlayer::MovementByVelocityEvent_OnMovementByVelocity   [wasm func86889 -> ram:81a49c8a ; ghidra: AnimatePlayer::MovementByVelocityEvent_OnMovementByVelocity]

void AnimatePlayer__MovementByVelocityEvent_OnMovementByVelocity(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (cRam00664a86 == '\0') {
    unnamed_function_1099(0x5579fc);
    unnamed_function_1099(0x5579a8);
    unnamed_function_1099(0x557af4);
    unnamed_function_1099(0x566dd8);
    unnamed_function_1099(0x566de8);
    unnamed_function_1099(0x566dec);
    unnamed_function_1099(0x55c620);
    cRam00664a86 = '\x01';
  }
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
  uVar4 = unnamed_function_95402(uRam005579fc);
  UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566de8,0);
  IdleEvent__add_OnIdle(uVar6,uVar4,0);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  uVar4 = unnamed_function_95402(uRam00557af4);
  unnamed_function_60334(uVar4,param_1,uRam00566dec,0);
  MovementByVelocityEvent__add_OnMovementByVelocity(uVar6,uVar4,0);
  iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
  uVar4 = unnamed_function_95402(uRam005579a8);
  UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566dd8,0);
  if (cRam00664a8e == '\0') {
    unnamed_function_1099(0x5579a8);
    cRam00664a8e = '\x01';
  }
  iVar2 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar5 = unnamed_function_85160(iVar2,uVar4,0);
    uVar6 = uRam005579a8;
    if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579a8), iVar3 == 0)) break;
    iVar3 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar3,iVar2);
    bVar1 = iVar2 == iVar3;
    iVar2 = iVar3;
    if (bVar1) {
      AnimatePlayer__InitializeAimAnimationParameters(param_1,iVar3);
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
      if (*(int *)(iRam0055c620 + 0x74) == 0) {
        unnamed_function_94848(iRam0055c620);
      }
      multiple_2_UnityEngine_Animator__GetBool_1
                (uVar4,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0xc),1,0);
      return;
    }
  }
  unnamed_function_1116(iVar5,uVar6);
  do {
    halt_trap();
  } while( true );
}



// ---- AnimatePlayer::DestroyedEvent_OnDestroyed   [wasm func86890 -> ram:81a49e23 ; ghidra: AnimatePlayer::DestroyedEvent_OnDestroyed]

void AnimatePlayer__DestroyedEvent_OnDestroyed(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664a87 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a87 = '\x01';
  }
  AnimatePlayer__InitializeAimAnimationParameters(param_1,param_1);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44);
  if (*(int *)(iRam0055c620 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__GetBool_1
            (uVar2,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 8),1,0);
  if (*(int *)(param_1 + 0x18) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x18),0);
  }
  if (cRam00664a8c == '\0') {
    unnamed_function_1099(0x55d780);
    cRam00664a8c = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055d780);
  *(int *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}



// ---- AnimatePlayer::SetAimAnimationParameters   [wasm func86891 -> ram:81a49ede ; ghidra: AnimatePlayer::SetAimAnimationParameters]

void AnimatePlayer__SetAimAnimationParameters(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x18),0);
  }
  if (cRam00664a8c == '\0') {
    unnamed_function_1099(0x55d780);
    cRam00664a8c = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055d780);
  *(int *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}



// ---- AnimatePlayer::AttackEvent_OnAttack   [wasm func86892 -> ram:81a49f3d ; ghidra: AnimatePlayer::AttackEvent_OnAttack]

void AnimatePlayer__AttackEvent_OnAttack(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (cRam00664a88 == '\0') {
    unnamed_function_1099(0x5579fc);
    unnamed_function_1099(0x5579a8);
    unnamed_function_1099(0x557af4);
    unnamed_function_1099(0x566dd8);
    unnamed_function_1099(0x566de8);
    unnamed_function_1099(0x566dec);
    cRam00664a88 = '\x01';
  }
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
  uVar4 = unnamed_function_95402(uRam005579fc);
  UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566de8,0);
  Idle___ctor(uVar6,uVar4,0);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  uVar4 = unnamed_function_95402(uRam00557af4);
  unnamed_function_60334(uVar4,param_1,uRam00566dec,0);
  MovementByVelocity___ctor(uVar6,uVar4,0);
  iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
  uVar4 = unnamed_function_95402(uRam005579a8);
  UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566dd8,0);
  if (cRam00664a8d == '\0') {
    unnamed_function_1099(0x5579a8);
    cRam00664a8d = '\x01';
  }
  iVar2 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar5 = unnamed_function_85158(iVar2,uVar4,0);
    uVar6 = uRam005579a8;
    if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579a8), iVar3 == 0)) break;
    iVar3 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar3,iVar2);
    bVar1 = iVar2 == iVar3;
    iVar2 = iVar3;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar5,uVar6);
  do {
    halt_trap();
  } while( true );
}



// ---- AnimatePlayer::PlayAttackAnimation   [wasm func86893 -> ram:81a4a08e ; ghidra: AnimatePlayer::PlayAttackAnimation]

int AnimatePlayer__PlayAttackAnimation(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664a8c == '\0') {
    unnamed_function_1099(0x55d780);
    cRam00664a8c = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055d780);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- AnimatePlayer::PlayAttackAnimationCoroutine_d_18_System_IDisposable_Dispose   [wasm func86894 -> ram:81a4a0cc ; ghidra: AnimatePlayer+<PlayAttackAnimationCoroutine>d__18::System.IDisposable.Dispose]

undefined4
AnimatePlayer_<PlayAttackAnimationCoroutine>d__18__System_IDisposable_Dispose(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 8) = 1;
    uVar3 = 1;
  }
  else if ((iVar4 == 1) || (iVar4 == 2)) {
    iVar4 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    UnityEngine_Animator__GetAnimatorStateInfo
              (&uStack_50,*(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x44),0,0);
    uStack_8 = uStack_30;
    uStack_10 = uStack_38;
    uStack_18 = uStack_40;
    uStack_20 = uStack_48;
    uVar1 = uStack_20;
    uStack_28 = uStack_50;
    uStack_20._4_4_ = (float)((ulonglong)uStack_48 >> 0x20);
    if (1.0 <= uStack_20._4_4_) {
      *(undefined4 *)(iVar4 + 0x18) = 0;
    }
    else {
      uStack_20 = uVar1;
      UnityEngine_Animator__GetAnimatorStateInfo
                (&uStack_50,*(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x44),0,0);
      uStack_8 = uStack_30;
      uStack_10 = uStack_38;
      uStack_18 = uStack_40;
      uStack_20 = uStack_48;
      uVar1 = uStack_20;
      uStack_28 = uStack_50;
      uStack_20._4_4_ = (float)((ulonglong)uStack_48 >> 0x20);
      fVar2 = uStack_20._4_4_;
      if (uStack_20._4_4_ < *(float *)(param_1 + 0x14)) {
        uStack_20 = uVar1;
        UnityEngine_MonoBehaviour__StopCoroutine(iVar4,*(undefined4 *)(iVar4 + 0x18),0);
        *(undefined4 *)(iVar4 + 0x18) = 0;
      }
      *(float *)(param_1 + 0x14) = fVar2;
      *(undefined8 *)(param_1 + 8) = 2;
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ---- AnimatePlayer::PlayAttackAnimationCoroutine_d_18_System_Collections_Generic_IEnumerator_System_Object   [wasm func86895 -> ram:81a4a222 ; ghidra: AnimatePlayer+<PlayAttackAnimationCoroutine>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void AnimatePlayer_<PlayAttackAnimationCoroutine>d__18__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56ea18);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



