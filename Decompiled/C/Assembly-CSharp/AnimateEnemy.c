// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: AnimateEnemy  (Assembly-CSharp)  -  14 function(s)

// ---- AnimateEnemy::Awake   [wasm func86856 -> ram:81a47cc2 ; ghidra: AnimateEnemy::Awake]

void AnimateEnemy__Awake(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam00664a73 == '\0') {
    unnamed_function_1099(0x5579fc);
    unnamed_function_1099(0x5579a8);
    unnamed_function_1099(0x557a1c);
    unnamed_function_1099(0x557aa8);
    unnamed_function_1099(0x566dc4);
    unnamed_function_1099(0x566dc8);
    unnamed_function_1099(0x566dcc);
    unnamed_function_1099(0x566dd0);
    cRam00664a73 = '\x01';
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
  uVar4 = unnamed_function_95402(uRam00557aa8);
  unnamed_function_60334(uVar4,param_1,uRam00566dc4,0);
  if (cRam00664a7c == '\0') {
    unnamed_function_1099(0x557aa8);
    cRam00664a7c = '\x01';
  }
  iVar2 = *(int *)(iVar6 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar5 = unnamed_function_85158(iVar2,uVar4,0);
    uVar7 = uRam00557aa8;
    if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam00557aa8), iVar3 == 0)) break;
    iVar3 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar3,iVar2);
    bVar1 = iVar2 == iVar3;
    iVar2 = iVar3;
    if (bVar1) {
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30);
      uVar4 = unnamed_function_95402(uRam005579fc);
      UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566dcc,0);
      Idle___ctor(uVar7,uVar4,0);
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x34);
      uVar4 = unnamed_function_95402(uRam00557a1c);
      UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566dd0,0);
      IdleEvent___ctor(uVar7,uVar4,0);
      iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
      uVar4 = unnamed_function_95402(uRam005579a8);
      UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566dc8,0);
      if (cRam00664a8d == '\0') {
        unnamed_function_1099(0x5579a8);
        cRam00664a8d = '\x01';
      }
      iVar2 = *(int *)(iVar6 + 0x10);
      while( true ) {
        iVar3 = 0;
        iVar5 = unnamed_function_85158(iVar2,uVar4,0);
        uVar7 = uRam005579a8;
        if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579a8), iVar3 == 0)) break;
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



// ---- AnimateEnemy::PlayAttackAnimationCoroutine_d_10_System_Collections_IEnumerator_get_Current   [wasm func86857 -> ram:81a47ec4 ; ghidra: AnimateEnemy+<PlayAttackAnimationCoroutine>d__10::System.Collections.IEnumerator.get_Current]

void AnimateEnemy_<PlayAttackAnimationCoroutine>d__10__System_Collections_IEnumerator_get_Current
               (int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664a7c == '\0') {
    unnamed_function_1099(0x557aa8);
    cRam00664a7c = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
    uVar2 = uRam00557aa8;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557aa8), iVar4 == 0)) break;
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



// ---- AnimateEnemy::Start   [wasm func86859 -> ram:81a47fc3 ; ghidra: AnimateEnemy::Start]

void AnimateEnemy__Start(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam00664a74 == '\0') {
    unnamed_function_1099(0x5579fc);
    unnamed_function_1099(0x5579a8);
    unnamed_function_1099(0x557a1c);
    unnamed_function_1099(0x557aa8);
    unnamed_function_1099(0x566dc4);
    unnamed_function_1099(0x566dc8);
    unnamed_function_1099(0x566dcc);
    unnamed_function_1099(0x566dd0);
    cRam00664a74 = '\x01';
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
  uVar4 = unnamed_function_95402(uRam00557aa8);
  unnamed_function_60334(uVar4,param_1,uRam00566dc4,0);
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
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30);
      uVar4 = unnamed_function_95402(uRam005579fc);
      UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566dcc,0);
      IdleEvent__add_OnIdle(uVar7,uVar4,0);
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x34);
      uVar4 = unnamed_function_95402(uRam00557a1c);
      UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566dd0,0);
      MoveByEnemyAIEvent__add_OnMoveByEnemyAI(uVar7,uVar4,0);
      iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
      uVar4 = unnamed_function_95402(uRam005579a8);
      UnityEngine_UIElements_VisualElement__get_layout(uVar4,param_1,uRam00566dc8,0);
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



// ---- AnimateEnemy::OnDisable   [wasm func86862 -> ram:81a482c3 ; ghidra: AnimateEnemy::OnDisable]

void AnimateEnemy__OnDisable(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a75 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a75 = '\x01';
  }
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(*(int *)(param_1 + 0x10) + 0x40) - 1U < 2)) {
    AnimateEnemy__PlayAttackAnimationCoroutine(param_1,param_1);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
    if (*(int *)(iRam0055c620 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c620);
    }
    multiple_2_UnityEngine_Animator__GetBool_1
              (uVar1,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 4),1,0);
  }
  return;
}



// ---- AnimateEnemy::PlayAttackAnimationCoroutine   [wasm func86863 -> ram:81a4833e ; ghidra: AnimateEnemy::PlayAttackAnimationCoroutine]

void AnimateEnemy__PlayAttackAnimationCoroutine(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (cRam00664a79 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a79 = '\x01';
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x40) == 2) {
    if (*(int *)(iRam0055c620 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c620);
    }
    multiple_2_UnityEngine_Animator__GetBool_1(uVar1,**(undefined4 **)(iRam0055c620 + 0x5c),0,0);
    puVar2 = (undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 4);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
    iVar3 = 8;
  }
  else {
    if (*(int *)(iRam0055c620 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c620);
    }
    puVar2 = *(undefined4 **)(iRam0055c620 + 0x5c);
    iVar3 = 4;
  }
  multiple_2_UnityEngine_Animator__GetBool_1(uVar1,*puVar2,0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + iVar3),0,0);
  return;
}



// ---- AnimateEnemy::MoveByEnemyAIEvent_OnMoveByEnemyAI   [wasm func86864 -> ram:81a4841d ; ghidra: AnimateEnemy::MoveByEnemyAIEvent_OnMoveByEnemyAI]

void AnimateEnemy__MoveByEnemyAIEvent_OnMoveByEnemyAI(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a76 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a76 = '\x01';
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x40) - 1U < 2) {
    AnimateEnemy__PlayAttackAnimationCoroutine(param_1,param_1);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
    if (*(int *)(iRam0055c620 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c620);
    }
    multiple_2_UnityEngine_Animator__GetBool_1(uVar1,**(undefined4 **)(iRam0055c620 + 0x5c),1,0);
  }
  return;
}



// ---- AnimateEnemy::IdleEvent_OnIdle   [wasm func86865 -> ram:81a4848f ; ghidra: AnimateEnemy::IdleEvent_OnIdle]

void AnimateEnemy__IdleEvent_OnIdle(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664a77 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a77 = '\x01';
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x40) == 2) {
    if (*(int *)(param_1 + 0x18) != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x18),0);
    }
    if (cRam00664a78 == '\0') {
      unnamed_function_1099(0x55d77c);
      cRam00664a78 = '\x01';
    }
    iVar1 = unnamed_function_95402(uRam0055d77c);
    *(int *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    AnimateEnemy__PlayAttackAnimationCoroutine(param_1,param_1);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
    if (*(int *)(iRam0055c620 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c620);
    }
    multiple_2_UnityEngine_Animator__SetTrigger
              (uVar2,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 8),0);
  }
  return;
}



// ---- AnimateEnemy::AttackEvent_OnAttack   [wasm func86866 -> ram:81a48556 ; ghidra: AnimateEnemy::AttackEvent_OnAttack]

void AnimateEnemy__AttackEvent_OnAttack(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x18),0);
  }
  if (cRam00664a78 == '\0') {
    unnamed_function_1099(0x55d77c);
    cRam00664a78 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055d77c);
  *(int *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}



// ---- AnimateEnemy::PlayAttackAnimation   [wasm func86867 -> ram:81a485b4 ; ghidra: AnimateEnemy::PlayAttackAnimation]

int AnimateEnemy__PlayAttackAnimation(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664a78 == '\0') {
    unnamed_function_1099(0x55d77c);
    cRam00664a78 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055d77c);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- AnimateEnemy::InitializeStateAnimationParameters   [wasm func86868 -> ram:81a485f1 ; ghidra: AnimateEnemy::InitializeStateAnimationParameters]

void AnimateEnemy__InitializeStateAnimationParameters(int param_1,int param_2)

{
  AnimateEnemy__AnimateEnemy_OnAnimate(param_1,param_1);
  AnimateEnemy__InitializeAnimationParameters(param_1,*(undefined4 *)(param_2 + 8),param_1);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  return;
}



// ---- AnimateEnemy::AnimateEnemy_OnAnimate   [wasm func86869 -> ram:81a48614 ; ghidra: AnimateEnemy::AnimateEnemy_OnAnimate]

void AnimateEnemy__AnimateEnemy_OnAnimate(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a7a == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a7a = '\x01';
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
  if (*(int *)(iRam0055c620 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__GetBool_1
            (uVar1,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x18),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x10),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x24),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x28),0,0);
  return;
}



// ---- AnimateEnemy::InitializeAnimationParameters   [wasm func86870 -> ram:81a486c7 ; ghidra: AnimateEnemy::InitializeAnimationParameters]

void AnimateEnemy__InitializeAnimationParameters(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (cRam00664a7b == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a7b = '\x01';
  }
  if (param_2 == 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
    iVar1 = 0x10;
    iVar3 = *(int *)(iRam0055c620 + 0x74);
  }
  else {
    if (param_2 == 1) {
      return;
    }
    if (param_2 == 2) {
      return;
    }
    if (param_2 == 3) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
      iVar1 = 0x24;
      iVar3 = *(int *)(iRam0055c620 + 0x74);
    }
    else if (param_2 == 4) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
      iVar1 = 0x28;
      iVar3 = *(int *)(iRam0055c620 + 0x74);
    }
    else {
      if (param_2 != 5) {
        return;
      }
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
      iVar1 = 0x18;
      iVar3 = *(int *)(iRam0055c620 + 0x74);
    }
  }
  if (iVar3 == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__GetBool_1
            (uVar2,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + iVar1),1,0);
  return;
}



// ---- AnimateEnemy::PlayAttackAnimationCoroutine_d_10_System_IDisposable_Dispose   [wasm func86871 -> ram:81a487ab ; ghidra: AnimateEnemy+<PlayAttackAnimationCoroutine>d__10::System.IDisposable.Dispose]

undefined4 AnimateEnemy_<PlayAttackAnimationCoroutine>d__10__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_50 [12];
  float fStack_44;
  
  uVar1 = 0;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 8) = 1;
    uVar1 = 1;
  }
  else if ((iVar2 == 1) || (iVar2 == 2)) {
    iVar2 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    UnityEngine_Animator__GetAnimatorStateInfo
              (auStack_50,*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x1c),0,0);
    if (1.0 <= fStack_44) {
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 8) = 2;
      uVar1 = 1;
    }
  }
  return uVar1;
}



// ---- AnimateEnemy::PlayAttackAnimationCoroutine_d_10_System_Collections_Generic_IEnumerator_System_Object_   [wasm func86872 -> ram:81a48860 ; ghidra: AnimateEnemy+<PlayAttackAnimationCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void AnimateEnemy_<PlayAttackAnimationCoroutine>d__10__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56ea14);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



