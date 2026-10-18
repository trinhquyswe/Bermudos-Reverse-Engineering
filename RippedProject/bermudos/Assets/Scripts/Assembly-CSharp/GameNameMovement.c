// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: GameNameMovement  (Assembly-CSharp)  -  6 function(s)

// ---- GameNameMovement::Awake   [wasm func86430 -> ram:81a361ff ; ghidra: GameNameMovement::Awake]

void GameNameMovement__Awake(undefined4 param_1)

{
  GameNameMovement__OnDestroy(param_1,param_1);
  return;
}



// ---- GameNameMovement::OnDestroy   [wasm func86431 -> ram:81a3620b ; ghidra: GameNameMovement::OnDestroy]

void GameNameMovement__OnDestroy(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_8 [8];
  
  if (cRam006648e6 == '\0') {
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d340);
    unnamed_function_1099(0x56d37c);
    unnamed_function_1099(0x56f26c);
    unnamed_function_1099(0x55df68);
    cRam006648e6 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055df68);
  *(int *)(iVar1 + 8) = param_1;
  UnityEngine_RectTransform__set_anchorMax(auStack_8,*(undefined4 *)(param_1 + 0x10),0);
  fVar4 = *(float *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar1 + 0xc) = auStack_8._0_4_;
  *(float *)(iVar1 + 0x10) = auStack_8._4_4_ - fVar4;
  uVar2 = DG_Tweening_DOTweenModuleUI__DOAnchorPosX
                    (*(undefined4 *)(param_1 + 0x10),fVar4 + auStack_8._4_4_,
                     *(undefined4 *)(param_1 + 0x18),0,0);
  uVar2 = DG_Tweening_TweenSettingsExtensions__SetEase
                    (uVar2,*(undefined4 *)(param_1 + 0x1c),uRam0056d37c);
  uVar3 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar3,iVar1,uRam0056f26c,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar2,uVar3,uRam0056d340);
  return;
}



// ---- GameNameMovement::Start   [wasm func86432 -> ram:81a3630a ; ghidra: GameNameMovement::Start]

void GameNameMovement__Start(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648e5 == '\0') {
    unnamed_function_1099(0x55a7d4);
    cRam006648e5 = '\x01';
  }
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar1,0,0);
  return;
}



// ---- GameNameMovement::GameNameAnimation   [wasm func86433 -> ram:81a36356 ; ghidra: GameNameMovement::GameNameAnimation]

void GameNameMovement__GameNameAnimation(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 4;
  *(undefined8 *)(param_1 + 0x14) = 0x3f80000040a00000;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- GameNameMovement::c_DisplayClass7_0_ctor   [wasm func86434 -> ram:81a36377 ; ghidra: GameNameMovement+<>c__DisplayClass7_0::.ctor]

void GameNameMovement_<>c__DisplayClass7_0___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam006648e7 == '\0') {
    unnamed_function_1099(0x56d37c);
    unnamed_function_1099(0x56d394);
    cRam006648e7 = '\x01';
  }
  uVar1 = DG_Tweening_DOTweenModuleUI__DOAnchorPosX
                    (*(undefined4 *)(*(int *)(param_1 + 8) + 0x10),*(undefined4 *)(param_1 + 0x10),
                     *(undefined4 *)(*(int *)(param_1 + 8) + 0x18),0,0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase
                    (uVar1,*(undefined4 *)(*(int *)(param_1 + 8) + 0x1c),uRam0056d37c);
  DG_Tweening_TweenSettingsExtensions__SetLoops(uVar1,0xffffffff,1,uRam0056d394);
  return;
}



// ---- GameNameMovement::c_DisplayClass7_0_GameNameAnimation_b_0   [wasm func86435 -> ram:81a363e1 ; ghidra: GameNameMovement+<>c__DisplayClass7_0::<GameNameAnimation>b__0]

void GameNameMovement_<>c__DisplayClass7_0__<GameNameAnimation>b__0(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648e8 == '\0') {
    unnamed_function_1099(0x557b40);
    unnamed_function_1099(0x56a718);
    cRam006648e8 = '\x01';
  }
  uVar1 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_95402(uRam00557b40);
  unnamed_function_60359(uVar1,param_1,uRam0056a718,0);
  StaticEventHandler__CallMoveItemToHotBarEvent(uVar1,param_1);
  return;
}



