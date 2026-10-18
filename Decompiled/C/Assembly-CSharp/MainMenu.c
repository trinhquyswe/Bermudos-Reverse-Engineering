// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MainMenu  (Assembly-CSharp)  -  8 function(s)

// ---- MainMenu::Awake   [wasm func86453 -> ram:81a37147 ; ghidra: MainMenu::Awake]

void MainMenu__Awake(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  if (cRam006648f6 == '\0') {
    unnamed_function_1099(0x55a328);
    unnamed_function_1099(0x56ab34);
    unnamed_function_1099(0x56ad60);
    unnamed_function_1099(0x56ad64);
    unnamed_function_1099(0x56ad68);
    unnamed_function_1099(0x56ad6c);
    unnamed_function_1099(0x56c19c);
    unnamed_function_1099(0x55cef8);
    unnamed_function_1099(0x574744);
    cRam006648f6 = '\x01';
  }
  uVar2 = Esper_ESave_SaveFileSetup__GenerateAESTokens(*(undefined4 *)(param_1 + 0x30),0);
  iVar3 = unnamed_function_60732(uVar2,uRam00574744,0);
  uVar2 = Esper_ESave_SaveFileSetup__GenerateAESTokens(*(undefined4 *)(param_1 + 0x30),0);
  if (iVar3 == 0) {
    unnamed_function_60812(uVar2,uRam00574744,1,uRam0056c19c);
    uVar2 = Esper_ESave_SaveFileSetup__GenerateAESTokens(*(undefined4 *)(param_1 + 0x30),0);
    Esper_ESave_SaveFile__SetSetupData(uVar2,0,0);
    *(undefined1 *)(param_1 + 0x34) = 1;
    iVar3 = UnityEngine_PlayerPrefs__GetString_1(uRam00574744,0);
    if (iVar3 == 0) {
      uStack_2 = *(undefined1 *)(param_1 + 0x34);
      uVar2 = unnamed_function_1113(uRam0055a328,&uStack_2);
      uVar2 = unnamed_function_42591(uVar2,0);
      UnityEngine_PlayerPrefs__GetFloat_1(uRam00574744,uVar2,0);
      UnityEngine_PlayerPrefs__DeleteAll(0);
    }
    else {
      uVar2 = UnityEngine_PlayerPrefs__GetString(uRam00574744,0);
      uVar1 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetCachedAttribute
                        (uVar2,uRam0056ab34);
      *(undefined1 *)(param_1 + 0x34) = uVar1;
    }
  }
  else {
    unnamed_function_60812(uVar2,uRam00574744,0,uRam0056c19c);
    uVar2 = Esper_ESave_SaveFileSetup__GenerateAESTokens(*(undefined4 *)(param_1 + 0x30),0);
    Esper_ESave_SaveFile__SetSetupData(uVar2,0,0);
    *(undefined1 *)(param_1 + 0x34) = 0;
    iVar3 = UnityEngine_PlayerPrefs__GetString_1(uRam00574744,0);
    if (iVar3 == 0) {
      uStack_1 = *(undefined1 *)(param_1 + 0x34);
      uVar2 = unnamed_function_1113(uRam0055a328,&uStack_1);
      uVar2 = unnamed_function_42591(uVar2,0);
      UnityEngine_PlayerPrefs__GetFloat_1(uRam00574744,uVar2,0);
      UnityEngine_PlayerPrefs__DeleteAll(0);
    }
    else {
      uVar2 = UnityEngine_PlayerPrefs__GetString(uRam00574744,0);
      uVar1 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetCachedAttribute
                        (uVar2,uRam0056ab34);
      *(undefined1 *)(param_1 + 0x34) = uVar1;
    }
  }
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xb4);
  uVar2 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar2,param_1,uRam0056ad68,0);
  UnityEngine_Events_UnityEvent___ctor(uVar4,uVar2,0);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xb4);
  uVar2 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar2,param_1,uRam0056ad60,0);
  UnityEngine_Events_UnityEvent___ctor(uVar4,uVar2,0);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xb4);
  uVar2 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar2,param_1,uRam0056ad6c,0);
  UnityEngine_Events_UnityEvent___ctor(uVar4,uVar2,0);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb4);
  uVar2 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar2,param_1,uRam0056ad64,0);
  UnityEngine_Events_UnityEvent___ctor(uVar4,uVar2,0);
  return;
}



// ---- MainMenu::Start   [wasm func86454 -> ram:81a373ef ; ghidra: MainMenu::Start]

void MainMenu__Start(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam006648f7 == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam006648f7 = '\x01';
  }
  iVar2 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar3 = **(undefined4 **)(iVar2 + 0x5c);
  iVar1 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  SoundEffectManager__Start(uVar3,*(undefined4 *)(iVar1 + 0x60),iVar2);
  uVar3 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x2c),0);
  unnamed_function_44686(uVar3,1,0);
  return;
}



// ---- MainMenu::OnNewGameClick   [wasm func86455 -> ram:81a37476 ; ghidra: MainMenu::OnNewGameClick]

void MainMenu__OnNewGameClick(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (cRam006648f8 == '\0') {
    unnamed_function_1099(0x56ad5c);
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x565d6c);
    unnamed_function_1099(0x55984c);
    unnamed_function_1099(0x575bb0);
    cRam006648f8 = '\x01';
  }
  if (*(char *)(param_1 + 0x34) == '\0') {
    if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c4f8);
    }
    UnityEngine_SceneManagement_SceneManager__LoadScene_1(uRam00575bb0,0);
    uVar1 = unnamed_function_95402(uRam0055984c);
    unnamed_function_71914(uVar1,param_1,uRam0056ad5c,0);
    UnityEngine_SceneManagement_SceneManager__LoadFirstScene_Internal(uVar1,0);
    iVar3 = *(int *)(iRam00565d6c + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    uVar1 = **(undefined4 **)(iVar3 + 0x5c);
    iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
    SoundEffectManager__Start(uVar1,*(undefined4 *)(iVar2 + 0x60),iVar3);
  }
  return;
}



// ---- MainMenu::OnContinueGameClick   [wasm func86456 -> ram:81a3755e ; ghidra: MainMenu::OnContinueGameClick]

void MainMenu__OnContinueGameClick(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_2;
  if (cRam006648f9 == '\0') {
    unnamed_function_1099(0x56ad5c);
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x55984c);
    unnamed_function_1099(0x575bb0);
    cRam006648f9 = '\x01';
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
    GameManager__Awake(**(undefined4 **)(iVar2 + 0x5c),0);
    uVar1 = unnamed_function_95402(uRam0055984c);
    unnamed_function_71914(uVar1,param_1,uRam0056ad5c,0);
    if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c4f8);
    }
    UnityEngine_SceneManagement_SceneManager__add_sceneLoaded(uVar1,0);
  }
  return;
}



// ---- MainMenu::LoadContineGameScene   [wasm func86457 -> ram:81a37668 ; ghidra: MainMenu::LoadContineGameScene]

void MainMenu__LoadContineGameScene(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (cRam006648fa == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam006648fa = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x20),0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x24),0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x28),0);
  unnamed_function_44686(uVar1,0,0);
  iVar3 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  uVar1 = **(undefined4 **)(iVar3 + 0x5c);
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  SoundEffectManager__Start(uVar1,*(undefined4 *)(iVar2 + 0x60),iVar3);
  return;
}



// ---- MainMenu::OnSettingsClick   [wasm func86458 -> ram:81a37715 ; ghidra: MainMenu::OnSettingsClick]

void MainMenu__OnSettingsClick(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam006648fb == '\0') {
    unnamed_function_1099(0x55a090);
    unnamed_function_1099(0x565d6c);
    cRam006648fb = '\x01';
  }
  iVar2 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar3 = **(undefined4 **)(iVar2 + 0x5c);
  iVar1 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  SoundEffectManager__Start(uVar3,*(undefined4 *)(iVar1 + 0x60),iVar2);
  if (*(int *)(iRam0055a090 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a090);
  }
  UnityEngine_Application__Quit(0);
  return;
}



// ---- MainMenu::OnExitGameClick   [wasm func86459 -> ram:81a377ad ; ghidra: MainMenu::OnExitGameClick]

void MainMenu__OnExitGameClick(int param_1)

{
  *(undefined1 *)(param_1 + 0x34) = 1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- MainMenu::ctor   [wasm func86460 -> ram:81a377bf ; ghidra: MainMenu::.ctor]

void MainMenu___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam006648fc == '\0') {
    unnamed_function_1099(0x567f78);
    cRam006648fc = '\x01';
  }
  uVar1 = unnamed_function_65372(*(undefined4 *)(param_1 + 0x10),uRam00567f78);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = unnamed_function_65372(*(undefined4 *)(param_1 + 0x14),uRam00567f78);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



