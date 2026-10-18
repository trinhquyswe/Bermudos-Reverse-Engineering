// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: GameManager  (Assembly-CSharp)  -  21 function(s)

// ---- GameManager::TransitionToGame   [wasm func86951 -> ram:81a4c5a0 ; ghidra: GameManager::TransitionToGame]

void GameManager__TransitionToGame(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam00664b1b == '\0') {
    unnamed_function_1099(0x565d58);
    cRam00664b1b = '\x01';
  }
  *(int *)(param_1 + 0x1c) = param_2;
  if (param_2 == 0) {
    if (cRam00664b1c == '\0') {
      unnamed_function_1099(0x57be08);
      cRam00664b1c = '\x01';
    }
    UnityEngine_PlayerPrefs__TrySetSetString(uRam0057be08,0,0);
    GameManager__Instruct(param_1,param_1);
  }
  else if (param_2 != 1) {
    if (param_2 == 2) {
      unnamed_function_44686(*(undefined4 *)(param_1 + 0x34),1,0);
      unnamed_function_44686(*(undefined4 *)(param_1 + 0x38),1,0);
      unnamed_function_44686(*(undefined4 *)(param_1 + 0x3c),1,0);
    }
    else if (param_2 == 3) {
      if (cRam00664b1f == '\0') {
        unnamed_function_1099(0x567f18);
        cRam00664b1f = '\x01';
      }
      uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                        (*(undefined4 *)(param_1 + 0x10),uRam00567f18);
      UnityEngine_Rigidbody2D__get_mass(uVar1,0x3f000000,0);
    }
    else if (param_2 == 4) {
      if (cRam00664b20 == '\0') {
        unnamed_function_1099(0x567f18);
        cRam00664b20 = '\x01';
      }
      uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                        (*(undefined4 *)(param_1 + 0x10),uRam00567f18);
      UnityEngine_Rigidbody2D__get_mass(uVar1,0x49742400,0);
      iVar2 = *(int *)(iRam00565d58 + 0x10);
      if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = System_Threading_Monitor__Enter_1(iVar2);
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
      if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = System_Threading_Monitor__Enter_1(iVar2);
      }
      MusicManager__PlayBackgroundMusic(**(undefined4 **)(iVar2 + 0x5c),0);
      iVar2 = *(int *)(iRam00565d58 + 0x10);
      if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = System_Threading_Monitor__Enter_1(iVar2);
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
      if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = System_Threading_Monitor__Enter_1(iVar2);
      }
      uVar1 = **(undefined4 **)(iVar2 + 0x5c);
      iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
      MusicManager__StopPlayingBackgroundMusic
                (uVar1,*(undefined4 *)(iVar2 + 0x50),0x3f000000,0x3f000000,0);
    }
    else if (param_2 == 5) {
      if (cRam00664b1c == '\0') {
        unnamed_function_1099(0x57be08);
        cRam00664b1c = '\x01';
      }
      UnityEngine_PlayerPrefs__TrySetSetString(uRam0057be08,1,0);
      GameManager__SaveBossState(param_1,param_1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
              (*(undefined4 *)(iVar2 + 0x20),param_2,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}



// ---- GameManager::Instruct   [wasm func86952 -> ram:81a4c7b4 ; ghidra: GameManager::Instruct]

void GameManager__Instruct(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664b1e == '\0') {
    unnamed_function_1099(0x56997c);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d338);
    unnamed_function_1099(0x579c00);
    cRam00664b1e = '\x01';
  }
  unnamed_function_44686(*(undefined4 *)(param_1 + 0x34),0,0);
  unnamed_function_44686(*(undefined4 *)(param_1 + 0x38),0,0);
  unnamed_function_44686(*(undefined4 *)(param_1 + 0x3c),0,0);
  iVar1 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
  UnityEngine_Material__SetInt(*(undefined4 *)(iVar1 + 0x2c),uRam00579c00,0,0);
  uVar2 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x24),0);
  unnamed_function_44686(uVar2,1,0);
  uStack_8 = 0x3f80000000000000;
  uStack_18 = 0x3f80000000000000;
  uStack_10 = 0;
  uStack_20 = 0;
  uVar2 = DG_Tweening_DOTweenModuleUI__DOFade_1
                    (*(undefined4 *)(param_1 + 0x24),&uStack_20,0x40400000,0);
  uVar3 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar3,param_1,uRam0056997c,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar2,uVar3,uRam0056d338);
  return;
}



// ---- GameManager::SaveBossState   [wasm func86953 -> ram:81a4c8c8 ; ghidra: GameManager::SaveBossState]

void GameManager__SaveBossState(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664b1d == '\0') {
    unnamed_function_1099(0x569988);
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d338);
    unnamed_function_1099(0x5762e0);
    cRam00664b1d = '\x01';
  }
  if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c4f8);
  }
  UnityEngine_SceneManagement_SceneManager__LoadScene_4(uRam005762e0,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x28),0);
  unnamed_function_44686(uVar1,1,0);
  uStack_8 = 0;
  uStack_10 = 0;
  iVar3 = **(int **)(param_1 + 0x28);
  uStack_18 = 0;
  uStack_20 = 0;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x178) * 4))
            (*(int **)(param_1 + 0x28),&uStack_20,*(undefined4 *)(iVar3 + 0x17c));
  uVar1 = DG_Tweening_DOTweenModuleUI__DOColor_1
                    (*(undefined4 *)(param_1 + 0x28),0x3f800000,0x3f800000,0);
  uVar2 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar2,param_1,uRam00569988,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar1,uVar2,uRam0056d338);
  return;
}



// ---- GameManager::OnEnable   [wasm func87119 -> ram:81a5390d ; ghidra: GameManager::OnEnable]

void GameManager__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b18 == '\0') {
    unnamed_function_1099(0x557a44);
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x569994);
    unnamed_function_1099(0x569998);
    cRam00664b18 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a44);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00569994,0);
  StaticEventHandler__add_OnPlayerChanged(uVar1,0);
  uVar1 = unnamed_function_95402(uRam00559fb4);
  unnamed_function_82700(uVar1,param_1,uRam00569998,0);
  StaticEventHandler__add_OnRestInBonfire(uVar1,0);
  return;
}



// ---- GameManager::OnDisable   [wasm func87120 -> ram:81a53992 ; ghidra: GameManager::OnDisable]

void GameManager__OnDisable(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}



// ---- GameManager::Start   [wasm func87122 -> ram:81a539ab ; ghidra: GameManager::Start]

void GameManager__Start(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = 0;
  if (cRam00664b21 == '\0') {
    unnamed_function_1099(0x55aca4);
    unnamed_function_1099(0x564118);
    unnamed_function_1099(0x56c1a0);
    cRam00664b21 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (0 < *(int *)(iVar3 + 0xc)) {
    do {
      iVar4 = *(int *)(iVar3 + iVar7 * 4 + 0x10);
      uVar5 = *(undefined4 *)(iVar4 + 0x10);
      uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x14) + 0xc);
      iVar1 = unnamed_function_95402(uRam0055aca4);
      if (cRam00664afe == '\0') {
        unnamed_function_1099(0x562b48);
        unnamed_function_1099(0x558dfc);
        cRam00664afe = '\x01';
      }
      uVar2 = unnamed_function_95402(uRam00558dfc);
      multiple_2_System_Collections_Generic_List_1___cctor(uVar2,uRam00562b48);
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
      *(undefined4 *)(iVar1 + 0xc) = uVar6;
      *(undefined4 *)(iVar1 + 8) = uVar5;
      EnemyManagerData___ctor(iVar1,0xffffffff,iVar1);
      uVar5 = Esper_ESave_SaveFileSetup__GenerateAESTokens(*(undefined4 *)(param_1 + 0x18),0);
      Esper_ESave_SaveFile__AddOrUpdateData_5
                (uVar5,*(undefined4 *)(iVar4 + 0x18),iVar1,uRam0056c1a0);
      uVar5 = Esper_ESave_SaveFileSetup__GenerateAESTokens(*(undefined4 *)(param_1 + 0x18),0);
      Esper_ESave_SaveFile__SetSetupData(uVar5,0,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar3 + 0xc));
  }
  return;
}



// ---- GameManager::StaticEventHandler_OnRestInBonfire   [wasm func87123 -> ram:81a53aba ; ghidra: GameManager::StaticEventHandler_OnRestInBonfire]

void GameManager__StaticEventHandler_OnRestInBonfire(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b19 == '\0') {
    unnamed_function_1099(0x567f1c);
    unnamed_function_1099(0x565d74);
    cRam00664b19 = '\x01';
  }
  SingletonMonobehaviour_1___ctor(param_1,uRam00565d74);
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



// ---- GameManager::Awake   [wasm func87124 -> ram:81a53b05 ; ghidra: GameManager::Awake]

void GameManager__Awake(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664b1a == '\0') {
    unnamed_function_1099(0x569984);
    unnamed_function_1099(0x56c1c8);
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d338);
    unnamed_function_1099(0x56d374);
    unnamed_function_1099(0x579c00);
    unnamed_function_1099(0x577c74);
    unnamed_function_1099(0x573478);
    unnamed_function_1099(0x57337c);
    cRam00664b1a = '\x01';
  }
  uVar1 = Esper_ESave_SaveFileSetup__GenerateAESTokens(*(undefined4 *)(param_1 + 0x18),0);
  iVar2 = unnamed_function_60732(uVar1,uRam0057337c,0);
  if (iVar2 != 0) {
    uVar1 = Esper_ESave_SaveFileSetup__GenerateAESTokens(*(undefined4 *)(param_1 + 0x18),0);
    uVar1 = Esper_ESave_SaveFile__HasData(uVar1,uRam0057337c,0,uRam0056c1c8);
    iVar2 = multiple_2_System_String__Equals(uVar1,uRam00573478,0);
    if (iVar2 == 0) {
      iVar2 = multiple_2_System_String__Equals(uVar1,uRam00577c74,0);
      if (iVar2 == 0) goto code_r0x81a53cbf;
      uVar1 = System_Linq_Enumerable__Count(*(undefined4 *)(param_1 + 0x10),0);
      uStack_40 = *(undefined8 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x58) + 0x18);
      uStack_28 = 0;
      uStack_38 = 0;
      uStack_30 = uStack_40;
      multiple_2_UnityEngine_Transform___ctor(uVar1,&uStack_40,0);
      puVar4 = (undefined4 *)0x577c74;
      iVar2 = *(int *)(iRam0055c4f8 + 0x74);
    }
    else {
      uVar1 = System_Linq_Enumerable__Count(*(undefined4 *)(param_1 + 0x10),0);
      uStack_50 = *(undefined8 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x58) + 0x10);
      uStack_18 = 0;
      uStack_48 = 0;
      uStack_20 = uStack_50;
      multiple_2_UnityEngine_Transform___ctor(uVar1,&uStack_50,0);
      puVar4 = (undefined4 *)0x573478;
      iVar2 = *(int *)(iRam0055c4f8 + 0x74);
    }
    if (iVar2 == 0) {
      unnamed_function_94848(iRam0055c4f8);
    }
    UnityEngine_SceneManagement_SceneManager__remove_sceneUnloaded(*puVar4,1,0);
  }
code_r0x81a53cbf:
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(&uStack_60);
  UnityEngine_Material__SetInt(*(undefined4 *)(iVar2 + 0x2c),uRam00579c00,0,0);
  uStack_8 = 0x3f80000000000000;
  uStack_10 = 0;
  iVar2 = **(int **)(param_1 + 0x24);
  uStack_58 = 0x3f80000000000000;
  uStack_60 = 0;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x178) * 4))
            (*(int **)(param_1 + 0x24),&uStack_60,*(undefined4 *)(iVar2 + 0x17c));
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x24),0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = DG_Tweening_DOTweenModuleUI__DOColor_1(*(undefined4 *)(param_1 + 0x24),0,0x3fc00000,0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar1,4,uRam0056d374);
  uVar3 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar3,param_1,uRam00569984,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar1,uVar3,uRam0056d338);
  return;
}



// ---- GameManager::HandleGameState   [wasm func87125 -> ram:81a53d9e ; ghidra: GameManager::HandleGameState]

void GameManager__HandleGameState(undefined4 param_1)

{
  if (cRam00664b1c == '\0') {
    unnamed_function_1099(0x57be08);
    cRam00664b1c = '\x01';
  }
  UnityEngine_PlayerPrefs__TrySetSetString(uRam0057be08,param_1,0);
  return;
}



// ---- GameManager::WonScene   [wasm func87126 -> ram:81a53dcf ; ghidra: GameManager::WonScene]

void GameManager__WonScene(int param_1)

{
  unnamed_function_44686(*(undefined4 *)(param_1 + 0x34),1,0);
  unnamed_function_44686(*(undefined4 *)(param_1 + 0x38),1,0);
  unnamed_function_44686(*(undefined4 *)(param_1 + 0x3c),1,0);
  return;
}



// ---- GameManager::Intro   [wasm func87127 -> ram:81a53df9 ; ghidra: GameManager::Intro]

void GameManager__Intro(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b1f == '\0') {
    unnamed_function_1099(0x567f18);
    cRam00664b1f = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                    (*(undefined4 *)(param_1 + 0x10),uRam00567f18);
  UnityEngine_Rigidbody2D__get_mass(uVar1,0x3f000000,0);
  return;
}



// ---- GameManager::Play   [wasm func87128 -> ram:81a53e36 ; ghidra: GameManager::Play]

void GameManager__Play(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b20 == '\0') {
    unnamed_function_1099(0x567f18);
    cRam00664b20 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                    (*(undefined4 *)(param_1 + 0x10),uRam00567f18);
  UnityEngine_Rigidbody2D__get_mass(uVar1,0x49742400,0);
  return;
}



// ---- GameManager::InitializeEnemyManagerData   [wasm func87129 -> ram:81a53e73 ; ghidra: GameManager::InitializeEnemyManagerData]

void GameManager__InitializeEnemyManagerData(undefined4 param_1)

{
  if (cRam00664b22 == '\0') {
    unnamed_function_1099(0x565d70);
    cRam00664b22 = '\x01';
  }
  multiple_127_System_Collections_Generic_ShortEnumEqualityComparer_1__GetHashCode
            (param_1,uRam00565d70);
  return;
}



// ---- GameManager::ctor   [wasm func87130 -> ram:81a53ea2 ; ghidra: GameManager::.ctor]

void GameManager___ctor(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x24),0);
  unnamed_function_44686(uVar1,0,0);
  if (cRam00664b1b == '\0') {
    unnamed_function_1099(0x565d58);
    cRam00664b1b = '\x01';
  }
  *(undefined4 *)(param_1 + 0x1c) = 3;
  if (cRam00664b1f == '\0') {
    unnamed_function_1099(0x567f18);
    cRam00664b1f = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                    (*(undefined4 *)(param_1 + 0x10),uRam00567f18);
  UnityEngine_Rigidbody2D__get_mass(uVar1,0x3f000000,0);
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
              (*(undefined4 *)(iVar2 + 0x20),3,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}



// ---- GameManager::TransitionToGame_b_17_0   [wasm func87131 -> ram:81a53f36 ; ghidra: GameManager::<TransitionToGame>b__17_0]

void GameManager__<TransitionToGame>b__17_0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam00664b23 == '\0') {
    unnamed_function_1099(0x567f34);
    unnamed_function_1099(0x56998c);
    unnamed_function_1099(0x559830);
    unnamed_function_1099(0x566810);
    cRam00664b23 = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x30),0);
  unnamed_function_44686(uVar1,1,0);
  iVar2 = UnityEngine_GameObject__get_activeInHierarchy
                    (*(undefined4 *)(param_1 + 0x30),uRam00567f34);
  UnityEngine_Events_UnityEventBase__RemoveListener(*(undefined4 *)(iVar2 + 0x34),0);
  uVar3 = *(undefined4 *)(iVar2 + 0x34);
  uVar1 = unnamed_function_95402(uRam00559830);
  unnamed_function_71904(uVar1,param_1,uRam0056998c,0);
  UnityEngine_Events_UnityEvent_1___ctor(uVar3,uVar1,uRam00566810);
  return;
}



// ---- GameManager::WonScene_b_20_0   [wasm func87132 -> ram:81a53fd8 ; ghidra: GameManager::<WonScene>b__20_0]

void GameManager__<WonScene>b__20_0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664b24 == '\0') {
    unnamed_function_1099(0x569990);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d338);
    cRam00664b24 = '\x01';
  }
  uVar1 = DG_Tweening_DOTweenModuleUI__DOColor(*(undefined4 *)(param_1 + 0x30),0,0x40400000,0);
  uVar2 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar2,param_1,uRam00569990,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar1,uVar2,uRam0056d338);
  return;
}



// ---- GameManager::WonScene_b_20_1   [wasm func87133 -> ram:81a5404f ; ghidra: GameManager::<WonScene>b__20_1]

void GameManager__<WonScene>b__20_1(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam00664b25 == '\0') {
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d344);
    unnamed_function_1099(0x56f268);
    unnamed_function_1099(0x55df64);
    cRam00664b25 = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x30),0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x2c),0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = System_Linq_Enumerable__Count(*(undefined4 *)(param_1 + 0x2c),0);
  uVar1 = DG_Tweening_ShortcutExtensions__DOScale(uVar1,0,0x40400000,0);
  if (*(int *)(iRam0055df64 + 0x74) == 0) {
    unnamed_function_94848(iRam0055df64);
  }
  iVar2 = *(int *)(*(int *)(iRam0055df64 + 0x5c) + 4);
  if (iVar2 == 0) {
    if (*(int *)(iRam0055df64 + 0x74) == 0) {
      unnamed_function_94848(iRam0055df64);
    }
    uVar3 = **(undefined4 **)(iRam0055df64 + 0x5c);
    iVar2 = unnamed_function_95402(uRam0055cd74);
    DG_Tweening_Color2__op_Multiply(iVar2,uVar3,uRam0056f268,0);
    *(int *)(*(int *)(iRam0055df64 + 0x5c) + 4) = iVar2;
  }
  DG_Tweening_TweenSettingsExtensions__From_6(uVar1,iVar2,uRam0056d344);
  return;
}



// ---- GameManager::WonScene_b_20   [wasm func87134 -> ram:81a5415b ; ghidra: GameManager::<WonScene>b__20_2]

void GameManager__<WonScene>b__20_2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam00664b26 == '\0') {
    unnamed_function_1099(0x569980);
    unnamed_function_1099(0x56c1b0);
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d33c);
    unnamed_function_1099(0x579c00);
    unnamed_function_1099(0x573478);
    unnamed_function_1099(0x57337c);
    cRam00664b26 = '\x01';
  }
  if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c4f8);
  }
  UnityEngine_SceneManagement_SceneManager__remove_sceneUnloaded(uRam00573478,1,0);
  uVar1 = Esper_ESave_SaveFileSetup__GenerateAESTokens(*(undefined4 *)(param_1 + 0x18),0);
  Esper_ESave_SaveFile__AddOrUpdateData_5(uVar1,uRam0057337c,uRam00573478,uRam0056c1b0);
  uVar1 = Esper_ESave_SaveFileSetup__GenerateAESTokens(*(undefined4 *)(param_1 + 0x18),0);
  Esper_ESave_SaveFile__SetSetupData(uVar1,0,0);
  uVar1 = unnamed_function_42591(uRam00573478,0);
  UnityEngine_PlayerPrefs__GetFloat_1(uRam0057337c,uVar1,0);
  UnityEngine_PlayerPrefs__DeleteAll(0);
  iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
  uVar1 = DG_Tweening_ShortcutExtensions__DOFade_2
                    (*(undefined4 *)(iVar2 + 0x2c),0x3f800000,uRam00579c00,0x40000000,0);
  uVar3 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar3,param_1,uRam00569980,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar1,uVar3,uRam0056d33c);
  return;
}



// ---- GameManager::Intro_b_22_0   [wasm func87135 -> ram:81a5428e ; ghidra: GameManager::<Intro>b__22_0]

void GameManager__<Intro>b__22_0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x24),0);
  unnamed_function_44686(uVar1,0,0);
  if (cRam00664b1b == '\0') {
    unnamed_function_1099(0x565d58);
    cRam00664b1b = '\x01';
  }
  *(undefined4 *)(param_1 + 0x1c) = 1;
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
              (*(undefined4 *)(iVar2 + 0x20),1,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}



// ---- GameManager::Intro_b_22_1   [wasm func87136 -> ram:81a542e7 ; ghidra: GameManager::<Intro>b__22_1]

void GameManager__<Intro>b__22_1(void)

{
  undefined4 uVar1;
  
  if (cRam00664b27 == '\0') {
    unnamed_function_1099(0x55df64);
    cRam00664b27 = '\x01';
  }
  uVar1 = unnamed_function_95402(iRam0055df64);
  **(undefined4 **)(iRam0055df64 + 0x5c) = uVar1;
  return;
}



// ---- GameManager::c_ctor   [wasm func87137 -> ram:81a54327 ; ghidra: GameManager+<>c::.ctor]

void GameManager_<>c___ctor(void)

{
  int iVar1;
  
  if (cRam00664b28 == '\0') {
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x565d58);
    unnamed_function_1099(0x575bac);
    cRam00664b28 = '\x01';
  }
  iVar1 = *(int *)(iRam00565d58 + 0x10);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = System_Threading_Monitor__Enter_1(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = System_Threading_Monitor__Enter_1(iVar1);
  }
  MusicManager__Start(**(undefined4 **)(iVar1 + 0x5c),0);
  if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c4f8);
  }
  UnityEngine_SceneManagement_SceneManager__LoadScene_1(uRam00575bac,0);
  return;
}



