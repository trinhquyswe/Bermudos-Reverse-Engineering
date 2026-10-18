// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: BossManager  (Assembly-CSharp)  -  7 function(s)

// ---- BossManager::SpawnBoss   [wasm func86950 -> ram:81a4c558 ; ghidra: BossManager::SpawnBoss]

undefined4 BossManager__SpawnBoss(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664ab4 == '\0') {
    unnamed_function_1099(0x57be08);
    cRam00664ab4 = '\x01';
  }
  iVar1 = UnityEngine_PlayerPrefs__GetString_1(uRam0057be08,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UnityEngine_PlayerPrefs__GetInt(uRam0057be08,0);
  }
  return uVar2;
}



// ---- BossManager::Start   [wasm func86954 -> ram:81a4c9dd ; ghidra: BossManager::Start]

void BossManager__Start(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664ab3 == '\0') {
    unnamed_function_1099(0x56b554);
    unnamed_function_1099(0x55be2c);
    cRam00664ab3 = '\x01';
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if (cRam006603e8 == '\0') {
    unnamed_function_1099(0x55c148);
    cRam006603e8 = '\x01';
  }
  uStack_18 = (*(undefined8 **)(iRam0055c148 + 0x5c))[1];
  uStack_20 = **(undefined8 **)(iRam0055c148 + 0x5c);
  uVar1 = UnityEngine_GameObject__AddComponent(*(undefined4 *)(param_1 + 0x1c),0);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  uStack_28 = 0;
  uStack_8 = 0;
  uStack_38 = uStack_18;
  uStack_30 = 0x4170000041600000;
  uStack_40 = uStack_20;
  uStack_10 = 0x4170000041600000;
  UnityEngine_Quaternion__Internal_FromEulerRad(uVar2,&uStack_30,&uStack_40,uVar1,uRam0056b554);
  return;
}



// ---- BossManager::GetBossState   [wasm func86956 -> ram:81a4cb35 ; ghidra: BossManager::GetBossState]

void BossManager__GetBossState(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ab5 == '\0') {
    unnamed_function_1099(0x55a7d4);
    cRam00664ab5 = '\x01';
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar1,0,0);
  return;
}



// ---- BossManager::ctor   [wasm func86957 -> ram:81a4cb7f ; ghidra: BossManager::.ctor]

void BossManager___ctor(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664ab6 == '\0') {
    unnamed_function_1099(0x5678a0);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d344);
    unnamed_function_1099(0x56d380);
    cRam00664ab6 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__AddComponent(*(undefined4 *)(param_1 + 0x14),0);
  uStack_8 = 0;
  uStack_18 = 0;
  uStack_10 = 0xc130000042480000;
  uStack_20 = 0xc130000042480000;
  uVar1 = DG_Tweening_ShortcutExtensions__DOMoveZ(uVar1,&uStack_20,0x3f800000,0,0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar1,0x1b,uRam0056d380);
  uVar2 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar2,param_1,uRam005678a0,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar1,uVar2,uRam0056d344);
  return;
}



// ---- BossManager::Start_b_5_0   [wasm func86958 -> ram:81a4cc52 ; ghidra: BossManager::<Start>b__5_0]

void BossManager__<Start>b__5_0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664ab7 == '\0') {
    unnamed_function_1099(0x5678a4);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d344);
    unnamed_function_1099(0x56d37c);
    unnamed_function_1099(0x56d380);
    cRam00664ab7 = '\x01';
  }
  uStack_8 = 0x44fa000045098000;
  uStack_20 = 0x44fa000045098000;
  uVar1 = DG_Tweening_DOTweenModuleUI__DOPivotY
                    (*(undefined4 *)(param_1 + 0x10),&uStack_20,0x3f800000,0,0);
  DG_Tweening_TweenSettingsExtensions__SetEase(uVar1,0x1a,uRam0056d37c);
  uVar1 = UnityEngine_GameObject__AddComponent(*(undefined4 *)(param_1 + 0x14),0);
  uStack_10 = 0;
  uStack_28 = 0;
  uStack_18 = 0xc3c1800044e38000;
  uStack_30 = 0xc3c1800044e38000;
  uVar1 = DG_Tweening_ShortcutExtensions__DOMoveZ(uVar1,&uStack_30,0x3f800000,0,0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar1,0x1a,uRam0056d380);
  uVar2 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar2,param_1,uRam005678a4,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar1,uVar2,uRam0056d344);
  return;
}



// ---- BossManager::Start_b_5_1   [wasm func86959 -> ram:81a4cd76 ; ghidra: BossManager::<Start>b__5_1]

void BossManager__<Start>b__5_1(undefined4 param_1)

{
  undefined4 uVar1;
  
  BossManager__Start(param_1,param_1);
  uVar1 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar1,0,0);
  return;
}



// ---- BossManager::Start_b_5   [wasm func86960 -> ram:81a4cd92 ; ghidra: BossManager::<Start>b__5_2]

void BossManager__<Start>b__5_2(int param_1)

{
  undefined4 uVar1;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664ab8 == '\0') {
    unnamed_function_1099(0x565ccc);
    unnamed_function_1099(0x579c00);
    unnamed_function_1099(0x570ff8);
    unnamed_function_1099(0x579c04);
    cRam00664ab8 = '\x01';
  }
  UnityEngine_ColorUtility__DoTryParseHtmlColor(uRam00570ff8,param_1 + 0x4c,0);
  uVar1 = unnamed_function_61203(*(undefined4 *)(param_1 + 0x2c),uRam00565ccc);
  UnityEngine_Material__SetInt(uVar1,uRam00579c00,*(undefined4 *)(param_1 + 0x44),0);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x40);
  uVar1 = unnamed_function_61203(*(undefined4 *)(param_1 + 0x2c),uRam00565ccc);
  uStack_8 = *(undefined8 *)(param_1 + 0x38);
  uStack_10 = *(undefined8 *)(param_1 + 0x30);
  UnityEngine_Material__SetFloat(uVar1,uRam00579c04,&uStack_10,0);
  return;
}



