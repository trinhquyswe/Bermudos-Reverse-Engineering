// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Intro  (Assembly-CSharp)  -  10 function(s)

// ---- Intro::Awake   [wasm func86442 -> ram:81a369e4 ; ghidra: Intro::Awake]

void Intro__Awake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam006648ed == '\0') {
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x56a754);
    unnamed_function_1099(0x56a758);
    unnamed_function_1099(0x559830);
    unnamed_function_1099(0x55cef8);
    unnamed_function_1099(0x566818);
    cRam006648ed = '\x01';
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x34);
  uVar1 = unnamed_function_95402(uRam00559830);
  unnamed_function_71904(uVar1,param_1,uRam0056a754,0);
  multiple_3_UnityEngine_Events_UnityEvent_1__Invoke(uVar2,uVar1,uRam00566818);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb4);
  uVar1 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar1,param_1,uRam0056a758,0);
  UnityEngine_Events_UnityEvent__AddListener(uVar2,uVar1,0);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar1,0,0);
  return;
}



// ---- Intro::OnDestroy   [wasm func86443 -> ram:81a36ac6 ; ghidra: Intro::OnDestroy]

void Intro__OnDestroy(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam006648ee == '\0') {
    unnamed_function_1099(0x56a750);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d344);
    unnamed_function_1099(0x56d380);
    cRam006648ee = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x18),0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x18),0);
  uVar1 = UnityEngine_GameObject__AddComponent(uVar1,0);
  uStack_8 = 0x41000000;
  uStack_18 = 0x41000000;
  uStack_10 = 0x4100000041000000;
  uStack_20 = 0x4100000041000000;
  uVar1 = DG_Tweening_ShortcutExtensions__DOLocalRotateQuaternion(uVar1,&uStack_20,0x40200000,0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar1,1,uRam0056d380);
  uVar2 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar2,param_1,uRam0056a750,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar1,uVar2,uRam0056d344);
  return;
}



// ---- Intro::Start   [wasm func86444 -> ram:81a36bb9 ; ghidra: Intro::Start]

void Intro__Start(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x20),0);
  unnamed_function_44686(uVar1,1,0);
  return;
}



// ---- Intro::OnFinishWriter   [wasm func86445 -> ram:81a36bd0 ; ghidra: Intro::OnFinishWriter]

void Intro__OnFinishWriter(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam006648ef == '\0') {
    unnamed_function_1099(0x56a75c);
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x55984c);
    unnamed_function_1099(0x575bb0);
    cRam006648ef = '\x01';
  }
  uStack_8 = 0x3f800000;
  uStack_10 = 0x3f8000003f800000;
  iVar2 = **(int **)(param_1 + 0x14);
  uStack_18 = 0x3f800000;
  uStack_20 = 0x3f8000003f800000;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x178) * 4))
            (*(int **)(param_1 + 0x14),&uStack_20,*(undefined4 *)(iVar2 + 0x17c));
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x20),0);
  unnamed_function_44686(uVar1,0,0);
  if (*(int *)(param_1 + 0x24) < *(int *)(*(int *)(param_1 + 0x10) + 0xc)) {
    unnamed_function_16520
              (*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x24) * 4 + 0x10) + 0xc),0);
    if (*(int *)(param_1 + 0x14) != 0) {
      DG_Tweening_DOTweenModuleUI__DOColor_1(*(int *)(param_1 + 0x14),0x3f800000,0x40000000,0);
    }
    iVar2 = **(int **)(param_1 + 0x1c);
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
              (*(int **)(param_1 + 0x1c),
               *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x24) * 4 + 0x10) + 0x10),
               *(undefined4 *)(iVar2 + 0x2d4));
  }
  else {
    if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c4f8);
    }
    UnityEngine_SceneManagement_SceneManager__LoadScene_1(uRam00575bb0,0);
    uVar1 = unnamed_function_95402(uRam0055984c);
    unnamed_function_71914(uVar1,param_1,uRam0056a75c,0);
    UnityEngine_SceneManagement_SceneManager__LoadFirstScene_Internal(uVar1,0);
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}



// ---- Intro::OnNextBtnClick   [wasm func86446 -> ram:81a36d61 ; ghidra: Intro::OnNextBtnClick]

void Intro__OnNextBtnClick(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_2;
  if (cRam006648f0 == '\0') {
    unnamed_function_1099(0x56a75c);
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x55984c);
    unnamed_function_1099(0x575bb0);
    cRam006648f0 = '\x01';
  }
  uVar1 = UnityEngine_SceneManagement_Scene__IsValid(auStack_8,0);
  iVar2 = multiple_2_System_String__Equals(uVar1,uRam00575bb0,0);
  if ((iVar2 != 0) && (iVar2 = UnityEngine_SceneManagement_Scene__get_name(auStack_8,0), iVar2 != 0)
     ) {
    iVar2 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    GameManager__TransitionToGame(**(undefined4 **)(iVar2 + 0x5c),0,0);
    uVar1 = unnamed_function_95402(uRam0055984c);
    unnamed_function_71914(uVar1,param_1,uRam0056a75c,0);
    if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c4f8);
    }
    UnityEngine_SceneManagement_SceneManager__add_sceneLoaded(uVar1,0);
  }
  return;
}



// ---- Intro::OnSceneLoaded   [wasm func86447 -> ram:81a36e6c ; ghidra: Intro::OnSceneLoaded]

int Intro__OnSceneLoaded(undefined4 param_1)

{
  int iVar1;
  
  if (cRam006648f1 == '\0') {
    unnamed_function_1099(0x55e1b4);
    cRam006648f1 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e1b4);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- Intro::WaitUntilIntroEnable   [wasm func86448 -> ram:81a36ea9 ; ghidra: Intro::WaitUntilIntroEnable]

void Intro__WaitUntilIntroEnable(int param_1)

{
  undefined4 uVar1;
  
  if (cRam006648f2 == '\0') {
    unnamed_function_1099(0x559b98);
    cRam006648f2 = '\x01';
  }
  uVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559b98,4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- Intro::ctor   [wasm func86449 -> ram:81a36ee5 ; ghidra: Intro::.ctor]

void Intro___ctor(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam006648f3 == '\0') {
    unnamed_function_1099(0x56a754);
    unnamed_function_1099(0x56a758);
    unnamed_function_1099(0x559830);
    unnamed_function_1099(0x55cef8);
    unnamed_function_1099(0x566810);
    cRam006648f3 = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x18),0);
  unnamed_function_44686(uVar1,0,0);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x34);
  uVar1 = unnamed_function_95402(uRam00559830);
  unnamed_function_71904(uVar1,param_1,uRam0056a754,0);
  UnityEngine_Events_UnityEvent_1___ctor(uVar3,uVar1,uRam00566810);
  if (cRam006648f1 == '\0') {
    unnamed_function_1099(0x55e1b4);
    cRam006648f1 = '\x01';
  }
  iVar2 = unnamed_function_95402(uRam0055e1b4);
  *(int *)(iVar2 + 0x10) = param_1;
  *(undefined4 *)(iVar2 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar2,0);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb4);
  uVar1 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar1,param_1,uRam0056a758,0);
  UnityEngine_Events_UnityEvent___ctor(uVar3,uVar1,0);
  UnityEngine_ExcludeFromPresetAttribute___ctor(*(undefined4 *)(param_1 + 0x14),1,0);
  return;
}



// ---- Intro::WaitUntilIntroEnable_d_13_System_IDisposable_Dispose   [wasm func86450 -> ram:81a36ff7 ; ghidra: Intro+<WaitUntilIntroEnable>d__13::System.IDisposable.Dispose]

undefined4 Intro_<WaitUntilIntroEnable>d__13__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar1 = 0;
  if (cRam006648f4 == '\0') {
    unnamed_function_1099(0x55d134);
    cRam006648f4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = unnamed_function_95402(uRam0055d134);
    multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime
              (uVar2,0x40000000,0);
    uVar1 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    iVar3 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    piVar4 = *(int **)(iVar3 + 0x14);
    uStack_8 = 0x3f8000003f800000;
    uStack_10 = 0x3f8000003f800000;
    uStack_18 = 0x3f8000003f800000;
    uStack_20 = 0x3f8000003f800000;
    (**(code **)((ulonglong)*(uint *)(*piVar4 + 0x178) * 4))
              (piVar4,&uStack_20,*(undefined4 *)(*piVar4 + 0x17c));
    Intro__OnFinishWriter(iVar3,piVar4);
  }
  return uVar1;
}



// ---- Intro::WaitUntilIntroEnable_d_13_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86451 -> ram:81a370eb ; ghidra: Intro+<WaitUntilIntroEnable>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void Intro_<WaitUntilIntroEnable>d__13__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f48c);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



