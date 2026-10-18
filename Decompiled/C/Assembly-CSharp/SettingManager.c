// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: SettingManager  (Assembly-CSharp)  -  8 function(s)

// ---- SettingManager::Awake   [wasm func86461 -> ram:81a3780d ; ghidra: SettingManager::Awake]

void SettingManager__Awake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam006648fd == '\0') {
    unnamed_function_1099(0x56c438);
    unnamed_function_1099(0x56c43c);
    unnamed_function_1099(0x56c434);
    unnamed_function_1099(0x55cef8);
    cRam006648fd = '\x01';
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xb4);
  uVar1 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar1,param_1,uRam0056c43c,0);
  UnityEngine_Events_UnityEvent___ctor(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xb4);
  uVar1 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar1,param_1,uRam0056c438,0);
  UnityEngine_Events_UnityEvent___ctor(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xb4);
  uVar1 = unnamed_function_95402(uRam0055cef8);
  UnityEngine_Events_UnityEventBase__GetValidMethodInfo(uVar1,param_1,uRam0056c434,0);
  UnityEngine_Events_UnityEvent___ctor(uVar2,uVar1,0);
  *(undefined8 *)(param_1 + 0x2c) = 0x412000003f000000;
  return;
}



// ---- SettingManager::Start   [wasm func86462 -> ram:81a378f1 ; ghidra: SettingManager::Start]

void SettingManager__Start(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648fe == '\0') {
    unnamed_function_1099(0x55a7d4);
    cRam006648fe = '\x01';
  }
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar1,0,0);
  return;
}



// ---- SettingManager::OnDestroy   [wasm func86463 -> ram:81a3793e ; ghidra: SettingManager::OnDestroy]

void SettingManager__OnDestroy(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam006648ff == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam006648ff = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x28),0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x24),0);
  unnamed_function_44686(uVar1,1,0);
  iVar2 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar1 = **(undefined4 **)(iVar2 + 0x5c);
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  SoundEffectManager__Start(uVar1,*(undefined4 *)(iVar2 + 0x60),param_1);
  SettingManager__OpenAudio
            (param_1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),param_1);
  return;
}



// ---- SettingManager::OpenAudio   [wasm func86464 -> ram:81a379e8 ; ghidra: SettingManager::OpenAudio]

void SettingManager__OpenAudio(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (cRam00664901 == '\0') {
    unnamed_function_1099(0x557db8);
    unnamed_function_1099(0x557de0);
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x56d374);
    unnamed_function_1099(0x56f9cc);
    unnamed_function_1099(0x56f9d0);
    unnamed_function_1099(0x55e864);
    cRam00664901 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e864);
  *(int *)(iVar1 + 0xc) = param_2;
  TMPro_TMP_Text__get_fontSize(param_3,*(undefined4 *)(param_1 + 0x30),0);
  iVar4 = **(int **)(param_1 + 0x20);
  (**(code **)((ulonglong)*(uint *)(iVar4 + 0x170) * 4))
            (auStack_10,*(int **)(param_1 + 0x20),*(undefined4 *)(iVar4 + 0x174));
  iVar4 = **(int **)(param_1 + 0x20);
  (**(code **)((ulonglong)*(uint *)(iVar4 + 0x170) * 4))
            (auStack_10,*(int **)(param_1 + 0x20),*(undefined4 *)(iVar4 + 0x174));
  iVar4 = **(int **)(param_1 + 0x20);
  (**(code **)((ulonglong)*(uint *)(iVar4 + 0x170) * 4))
            (auStack_10,*(int **)(param_1 + 0x20),*(undefined4 *)(iVar4 + 0x174));
  uStack_4 = *(undefined4 *)(param_1 + 0x2c);
  uStack_18 = CONCAT44(uStack_4,uStack_8);
  (**(code **)((ulonglong)*(uint *)(*param_3 + 0x178) * 4))
            (param_3,auStack_20,*(undefined4 *)(*param_3 + 0x17c));
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x148);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__Goto(0,0);
  uVar2 = DG_Tweening_DOTweenModuleUI__DOColor(*(undefined4 *)(iVar1 + 0xc),0x3f800000,0x3f000000,0)
  ;
  DG_Tweening_TweenSettingsExtensions__SetEase(uVar2,0x1d,uRam0056d374);
  uVar2 = unnamed_function_95402(uRam00557db8);
  unnamed_function_78188(uVar2,iVar1,uRam0056f9cc,0);
  uVar3 = unnamed_function_95402(uRam00557de0);
  unnamed_function_78211(uVar3,iVar1,uRam0056f9d0,0);
  DG_Tweening_DOTween__ManualUpdate(uVar2,uVar3,0x41480000,0x3f000000,0);
  return;
}



// ---- SettingManager::OpenControls   [wasm func86465 -> ram:81a37be1 ; ghidra: SettingManager::OpenControls]

void SettingManager__OpenControls(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam00664900 == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam00664900 = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x24),0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x28),0);
  unnamed_function_44686(uVar1,1,0);
  iVar2 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar1 = **(undefined4 **)(iVar2 + 0x5c);
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  SoundEffectManager__Start(uVar1,*(undefined4 *)(iVar2 + 0x60),param_1);
  SettingManager__OpenAudio
            (param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),param_1);
  return;
}



// ---- SettingManager::ctor   [wasm func86466 -> ram:81a37c8b ; ghidra: SettingManager::.ctor]

void SettingManager___ctor(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam00664902 == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam00664902 = '\x01';
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
  uVar3 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar3,0,0);
  return;
}



// ---- SettingManager::c_DisplayClass14_0_Effect_b_0   [wasm func86467 -> ram:81a37d0e ; ghidra: SettingManager+<>c__DisplayClass14_0::<Effect>b__0]

void SettingManager_<>c__DisplayClass14_0__<Effect>b__0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  TMPro_TMP_Text__get_fontSize(*(undefined4 *)(param_1 + 0xc),param_2,0);
  return;
}



// ---- SettingManager::c_DisplayClass14_0_Effect_b_1   [wasm func86468 -> ram:81a37d26 ; ghidra: SettingManager+<>c__DisplayClass14_0::<Effect>b__1]

void SettingManager_<>c__DisplayClass14_0__<Effect>b__1(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 auStack_8 [2];
  
  if (cRam00664903 == '\0') {
    unnamed_function_1099(0x557a90);
    unnamed_function_1099(0x567f78);
    unnamed_function_1099(0x567f34);
    unnamed_function_1099(0x55b644);
    unnamed_function_1099(0x56af34);
    cRam00664903 = '\x01';
  }
  uVar1 = unnamed_function_65372(*(undefined4 *)(param_1 + 0x10),uRam00567f78);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = unnamed_function_65372(*(undefined4 *)(param_1 + 0x14),uRam00567f78);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                    (*(undefined4 *)(param_1 + 0x18),uRam00567f34);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                    (*(undefined4 *)(param_1 + 0x1c),uRam00567f34);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = unnamed_function_95402(uRam0055b644);
  InputSystem_Actions__get_asset(uVar1,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  auStack_8[0] = uVar1;
  uVar1 = InputSystem_Actions_UIActions__get_UseItem(auStack_8,0);
  unnamed_function_48914(uVar1,0);
  auStack_8[0] = *(undefined4 *)(param_1 + 0x28);
  uVar1 = InputSystem_Actions_UIActions__get_UseItem(auStack_8,0);
  uVar2 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar2,param_1,uRam0056af34,0);
  UnityEngine_InputSystem_InputAction__remove_canceled(uVar1,uVar2,0);
  return;
}



