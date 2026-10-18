// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MenuInGame  (Assembly-CSharp)  -  8 function(s)

// ---- MenuInGame::Awake   [wasm func86469 -> ram:81a37e44 ; ghidra: MenuInGame::Awake]

void MenuInGame__Awake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 auStack_8 [2];
  
  if (cRam00664904 == '\0') {
    unnamed_function_1099(0x557a90);
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x56af38);
    cRam00664904 = '\x01';
  }
  auStack_8[0] = *(undefined4 *)(param_1 + 0x28);
  uVar1 = InputSystem_Actions_UIActions__get_UseItem(auStack_8,0);
  UnityEngine_InputSystem_InputAction__ToString(uVar1,0);
  auStack_8[0] = *(undefined4 *)(param_1 + 0x28);
  uVar1 = InputSystem_Actions_UIActions__get_UseItem(auStack_8,0);
  uVar2 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar2,param_1,uRam0056af38,0);
  UnityEngine_InputSystem_InputAction__add_performed(uVar1,uVar2,0);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar1,0,0);
  return;
}



// ---- MenuInGame::OnDestroy   [wasm func86470 -> ram:81a37f0d ; ghidra: MenuInGame::OnDestroy]

void MenuInGame__OnDestroy(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  float fStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664905 == '\0') {
    unnamed_function_1099(0x567f0c);
    unnamed_function_1099(0x56d37c);
    unnamed_function_1099(0x56d380);
    unnamed_function_1099(0x56d3d8);
    unnamed_function_1099(0x56d3e0);
    unnamed_function_1099(0x571ce0);
    unnamed_function_1099(0x571ce4);
    cRam00664905 = '\x01';
  }
  uVar1 = unnamed_function_44644(param_1,0);
  iVar2 = UnityEngine_GameObject__set_layer(uVar1,0);
  uVar1 = unnamed_function_44644(param_1,0);
  if (iVar2 == 0) {
    unnamed_function_44686(uVar1,1,0);
    TMPEffects_Components_TMPEffectComponent__get_TextComponent
              (*(undefined4 *)(param_1 + 0x20),uRam00571ce0,0);
    TMPEffects_Components_TMPEffectComponent__get_TextComponent
              (*(undefined4 *)(param_1 + 0x24),uRam00571ce4,0);
    uVar1 = System_Linq_Enumerable__Count(param_1,0);
    if (cRam00664829 == '\0') {
      unnamed_function_1099(0x55d048);
      cRam00664829 = '\x01';
    }
    uStack_30 = **(undefined8 **)(iRam0055d048 + 0x5c);
    uStack_28 = *(undefined4 *)(*(undefined8 **)(iRam0055d048 + 0x5c) + 1);
    uStack_10 = uStack_30;
    uStack_8 = uStack_28;
    multiple_2_UnityEngine_Transform__get_localScale(uVar1,&uStack_30,0);
    uVar1 = System_Linq_Enumerable__Count(param_1,0);
    uVar1 = DG_Tweening_ShortcutExtensions__DOScale(uVar1,0x3f800000,0x3f000000,0);
    uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase
                      (uVar1,*(undefined4 *)(param_1 + 0x2c),uRam0056d380);
    DG_Tweening_TweenSettingsExtensions__SetTarget(uVar1,1,uRam0056d3e0);
    uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f0c);
    iVar2 = UnityEngine_RefreshRate__ToString(0);
    uStack_14 = 0;
    fStack_18 = (float)-iVar2;
    uStack_38 = (ulonglong)(uint)fStack_18;
    UnityEngine_RectTransform__get_anchoredPosition_Injected(uVar1,&uStack_38,0);
    if (cRam0066482a == '\0') {
      unnamed_function_1099(0x55d024);
      cRam0066482a = '\x01';
    }
    uStack_40 = **(undefined8 **)(iRam0055d024 + 0x5c);
    uStack_20 = uStack_40;
    uVar1 = DG_Tweening_DOTweenModuleUI__DOScale(uVar1,&uStack_40,0x3f000000,0,0);
    uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase
                      (uVar1,*(undefined4 *)(param_1 + 0x2c),uRam0056d37c);
    DG_Tweening_TweenSettingsExtensions__SetTarget(uVar1,1,uRam0056d3d8);
  }
  else {
    unnamed_function_44686(uVar1,0,0);
  }
  return;
}



// ---- MenuInGame::OpenMenu   [wasm func86471 -> ram:81a3811c ; ghidra: MenuInGame::OpenMenu]

void MenuInGame__OpenMenu(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664906 == '\0') {
    unnamed_function_1099(0x56af3c);
    unnamed_function_1099(0x56af40);
    unnamed_function_1099(0x55cef8);
    cRam00664906 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xb4);
  uVar1 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar1,param_1,uRam0056af3c,0);
  UnityEngine_Events_UnityEvent___ctor(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xb4);
  uVar1 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar1,param_1,uRam0056af40,0);
  UnityEngine_Events_UnityEvent___ctor(uVar2,uVar1,0);
  uVar1 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar1,0,0);
  return;
}



// ---- MenuInGame::Start   [wasm func86472 -> ram:81a381c6 ; ghidra: MenuInGame::Start]

void MenuInGame__Start(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664907 == '\0') {
    unnamed_function_1099(0x567ea8);
    cRam00664907 = '\x01';
  }
  if (cRam006649c9 == '\0') {
    unnamed_function_1099(0x55c894);
    cRam006649c9 = '\x01';
  }
  iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x2c);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
  }
  piVar1 = (int *)UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ea8);
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  (**(code **)((ulonglong)*(uint *)(*piVar1 + 0x178) * 4))
            (piVar1,&uStack_20,*(undefined4 *)(*piVar1 + 0x17c));
  uVar2 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x10),0);
  unnamed_function_44686(uVar2,0,0);
  uVar2 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
  unnamed_function_44686(uVar2,0,0);
  if (cRam006649ab == '\0') {
    unnamed_function_1099(0x55c894);
    cRam006649ab = '\x01';
  }
  iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 4);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
  }
  if (cRam00664908 == '\0') {
    unnamed_function_1099(0x55e33c);
    cRam00664908 = '\x01';
  }
  iVar3 = unnamed_function_95402(uRam0055e33c);
  *(undefined4 *)(iVar3 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar3,0);
  return;
}



// ---- MenuInGame::Exit   [wasm func86475 -> ram:81a383b9 ; ghidra: MenuInGame::Exit]

int MenuInGame__Exit(void)

{
  int iVar1;
  
  if (cRam00664908 == '\0') {
    unnamed_function_1099(0x55e33c);
    cRam00664908 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e33c);
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- MenuInGame::WaitMapTransitionEvent   [wasm func86476 -> ram:81a383ef ; ghidra: MenuInGame::WaitMapTransitionEvent]

void MenuInGame__WaitMapTransitionEvent(undefined4 param_1)

{
  undefined4 uVar1;
  
  UnityEngine_Time__get_timeScale(0x3f800000,0);
  uVar1 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar1,0,0);
  return;
}



// ---- MenuInGame::WaitMapTransitionEvent_d_13_System_IDisposable_Dispose   [wasm func86478 -> ram:81a38419 ; ghidra: MenuInGame+<WaitMapTransitionEvent>d__13::System.IDisposable.Dispose]

undefined4 MenuInGame_<WaitMapTransitionEvent>d__13__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664909 == '\0') {
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x55d134);
    unnamed_function_1099(0x575bac);
    cRam00664909 = '\x01';
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
        unnamed_function_94848(iRam0055c4f8);
      }
      UnityEngine_SceneManagement_SceneManager__LoadScene_1(uRam00575bac,0);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = unnamed_function_95402(uRam0055d134);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,0x3e99999a,0)
  ;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}



// ---- MenuInGame::WaitMapTransitionEvent_d_13_System_Collections_Generic_IEnumerator_System_Object_get_Curr   [wasm func86479 -> ram:81a384bb ; ghidra: MenuInGame+<WaitMapTransitionEvent>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void MenuInGame_<WaitMapTransitionEvent>d__13__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f598);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



