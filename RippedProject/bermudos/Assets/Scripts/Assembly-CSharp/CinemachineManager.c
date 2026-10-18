// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: CinemachineManager  (Assembly-CSharp)  -  12 function(s)

// ---- CinemachineManager::Awake   [wasm func87107 -> ram:81a53025 ; ghidra: CinemachineManager::Awake]

void CinemachineManager__Awake(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (cRam00664b0f == '\0') {
    unnamed_function_1099(0x557a10);
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x567b8c);
    unnamed_function_1099(0x567b90);
    unnamed_function_1099(0x565d78);
    cRam00664b0f = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a10);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00567b90,0);
  SoundEffectSO___ctor(uVar1,0);
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
  unnamed_function_60038(uVar1,param_1,uRam00567b8c,0);
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



// ---- CinemachineManager::OnEnable   [wasm func87108 -> ram:81a5314d ; ghidra: CinemachineManager::OnEnable]

void CinemachineManager__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b10 == '\0') {
    unnamed_function_1099(0x557a10);
    unnamed_function_1099(0x567b90);
    cRam00664b10 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a10);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00567b90,0);
  StaticEventHandler__add_OnMapChanged(uVar1,0);
  return;
}



// ---- CinemachineManager::OnDisable   [wasm func87109 -> ram:81a5319d ; ghidra: CinemachineManager::OnDisable]

void CinemachineManager__OnDisable(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664b11 == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x567b8c);
    unnamed_function_1099(0x567b88);
    unnamed_function_1099(0x557db8);
    unnamed_function_1099(0x557de0);
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d33c);
    unnamed_function_1099(0x56d378);
    unnamed_function_1099(0x56eb74);
    unnamed_function_1099(0x56eb78);
    unnamed_function_1099(0x55d910);
    cRam00664b11 = '\x01';
  }
  if (param_2 == 0) {
    if (cRam00664b13 == '\0') {
      unnamed_function_1099(0x55d914);
      cRam00664b13 = '\x01';
    }
    iVar1 = unnamed_function_95402(uRam0055d914);
    *(int *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
    return;
  }
  if (param_2 == 1) {
    iVar1 = unnamed_function_95402(uRam0055d910);
    *(int *)(iVar1 + 0xc) = param_1;
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x74);
    uVar2 = unnamed_function_95402(uRam00557db8);
    unnamed_function_78188(uVar2,iVar1,uRam0056eb74,0);
    uVar3 = unnamed_function_95402(uRam00557de0);
    unnamed_function_78211(uVar3,iVar1,uRam0056eb78,0);
    if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
      unnamed_function_94848(iRam0055a7d4);
    }
    uVar2 = DG_Tweening_DOTween__ManualUpdate(uVar2,uVar3,0x41070000,0x40a00000,0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar2,1,uRam0056d378);
    uVar3 = unnamed_function_95402(uRam0055cd74);
    DG_Tweening_Color2__op_Multiply(uVar3,param_1,uRam00567b88,0);
    DG_Tweening_TweenSettingsExtensions__From_6(uVar2,uVar3,uRam0056d33c);
    return;
  }
  if ((param_2 != 2) && (param_2 == 3)) {
    uVar2 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
    unnamed_function_44686(uVar2,0,0);
    uVar2 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x10),0);
    unnamed_function_44686(uVar2,1,0);
    iVar1 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = System_Threading_Monitor__Enter_1(iVar1);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = System_Threading_Monitor__Enter_1(iVar1);
    }
    iVar5 = **(int **)(iVar1 + 0x5c);
    uVar3 = *(undefined4 *)(iVar5 + 0x20);
    uVar2 = unnamed_function_95402(uRam005579ec);
    unnamed_function_60038(uVar2,param_1,uRam00567b8c,0);
    iVar1 = unnamed_function_85160(uVar3,uVar2,0);
    uVar2 = uRam005579ec;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar5 + 0x20) = 0;
      return;
    }
    iVar4 = unnamed_function_1112(iVar1,uRam005579ec);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar1,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar5 + 0x20) = iVar4;
    uVar2 = uRam005579ec;
    iVar5 = unnamed_function_1112(iVar1,uRam005579ec);
    if (iVar5 == 0) {
      unnamed_function_1116(iVar1,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  return;
}



// ---- CinemachineManager::Start   [wasm func87110 -> ram:81a53426 ; ghidra: CinemachineManager::Start]

int CinemachineManager__Start(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664b13 == '\0') {
    unnamed_function_1099(0x55d914);
    cRam00664b13 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055d914);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- CinemachineManager::GameManager_OnGameStateChange   [wasm func87111 -> ram:81a53463 ; ghidra: CinemachineManager::GameManager_OnGameStateChange]

void CinemachineManager__GameManager_OnGameStateChange(undefined4 param_1,int param_2)

{
  CinemachineManager__ZoomCam(param_1,*(undefined4 *)(param_2 + 8),param_1);
  return;
}



// ---- CinemachineManager::ZoomCam   [wasm func87112 -> ram:81a53474 ; ghidra: CinemachineManager::ZoomCam]

void CinemachineManager__ZoomCam(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664b14 == '\0') {
    unnamed_function_1099(0x567e58);
    unnamed_function_1099(0x55be2c);
    cRam00664b14 = '\x01';
  }
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar1 = unnamed_function_44710(param_2,0,0);
  if (iVar1 == 0) {
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e58);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    iVar1 = UnityEngine_Camera__get_targetTexture(uVar2,0,0);
    if (iVar1 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18) = *(undefined4 *)(param_1 + 0x1c);
    }
  }
  return;
}



// ---- CinemachineManager::StaticEventHandler_OnMapChanged   [wasm func87113 -> ram:81a5350a ; ghidra: CinemachineManager::StaticEventHandler_OnMapChanged]

void CinemachineManager__StaticEventHandler_OnMapChanged(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (cRam00664b12 == '\0') {
    unnamed_function_1099(0x565d78);
    cRam00664b12 = '\x01';
  }
  piVar2 = *(int **)(param_1 + 0x10);
  iVar3 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  uVar1 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
  iVar3 = *piVar2;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x1c0) * 4))
            (piVar2,uVar1,*(undefined4 *)(iVar3 + 0x1c4));
  piVar2 = *(int **)(param_1 + 0x14);
  iVar3 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  uVar1 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
  iVar3 = *piVar2;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x1c0) * 4))
            (piVar2,uVar1,*(undefined4 *)(iVar3 + 0x1c4));
  return;
}



// ---- CinemachineManager::ctor   [wasm func87114 -> ram:81a535f8 ; ghidra: CinemachineManager::.ctor]

void CinemachineManager___ctor(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (cRam00664b15 == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x567b8c);
    unnamed_function_1099(0x565d78);
    cRam00664b15 = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x10),0);
  unnamed_function_44686(uVar1,1,0);
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
  unnamed_function_60038(uVar1,param_1,uRam00567b8c,0);
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
  iVar3 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (cRam00664b1b == '\0') {
    unnamed_function_1099(0x565d58);
    cRam00664b1b = '\x01';
  }
  *(undefined4 *)(iVar3 + 0x1c) = 2;
  unnamed_function_44686(*(undefined4 *)(iVar3 + 0x34),1,0);
  unnamed_function_44686(*(undefined4 *)(iVar3 + 0x38),1,0);
  unnamed_function_44686(*(undefined4 *)(iVar3 + 0x3c),1,0);
  iVar3 = *(int *)(iVar3 + 0x20);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),2,*(undefined4 *)(iVar3 + 0x14));
  }
  return;
}



// ---- CinemachineManager::c_DisplayClass7_0_GameManager_OnGameStateChange_b_0   [wasm func87115 -> ram:81a537c4 ; ghidra: CinemachineManager+<>c__DisplayClass7_0::<GameManager_OnGameStateChange>b__0]

void CinemachineManager_<>c__DisplayClass7_0__<GameManager_OnGameStateChange>b__0
               (int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x14) + 0x74) = param_2;
  return;
}



// ---- CinemachineManager::ZoomCam_d_10_System_IDisposable_Dispose   [wasm func87116 -> ram:81a537dc ; ghidra: CinemachineManager+<ZoomCam>d__10::System.IDisposable.Dispose]

undefined4 CinemachineManager_<ZoomCam>d__10__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b16 == '\0') {
    unnamed_function_1099(0x55d134);
    cRam00664b16 = '\x01';
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar1 = unnamed_function_44644(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10),0);
      unnamed_function_44686(uVar1,0,0);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = unnamed_function_95402(uRam0055d134);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,0x3dcccccd,0)
  ;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}



// ---- CinemachineManager::ZoomCam_d_10_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func87117 -> ram:81a5385f ; ghidra: CinemachineManager+<ZoomCam>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void CinemachineManager_<ZoomCam>d__10__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56eb7c);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- CinemachineManager::ZoomCam_d_10_System_Collections_IEnumerator_get_Current   [wasm func87118 -> ram:81a53887 ; ghidra: CinemachineManager+<ZoomCam>d__10::System.Collections.IEnumerator.get_Current]

void CinemachineManager_<ZoomCam>d__10__System_Collections_IEnumerator_get_Current
               (undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b17 == '\0') {
    unnamed_function_1099(0x557a44);
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x569994);
    unnamed_function_1099(0x569998);
    cRam00664b17 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a44);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00569994,0);
  StaticEventHandler__CallNoteOpenedEvent(uVar1,0);
  uVar1 = unnamed_function_95402(uRam00559fb4);
  unnamed_function_82700(uVar1,param_1,uRam00569998,0);
  StaticEventHandler__CallPressRestEvent(uVar1,0);
  return;
}



