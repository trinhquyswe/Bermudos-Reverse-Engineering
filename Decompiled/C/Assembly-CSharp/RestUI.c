// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: RestUI  (Assembly-CSharp)  -  4 function(s)

// ---- RestUI::Start   [wasm func86934 -> ram:81a4bb15 ; ghidra: RestUI::Start]

void RestUI__Start(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664aa7 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x56bfd4);
    cRam00664aa7 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00559fb4);
  unnamed_function_82700(uVar1,param_1,uRam0056bfd4,0);
  StaticEventHandler__CallPressRestEvent(uVar1,0);
  return;
}



// ---- RestUI::OnEnable   [wasm func86935 -> ram:81a4bb64 ; ghidra: RestUI::OnEnable]

void RestUI__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664aa8 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x56bfd4);
    cRam00664aa8 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00559fb4);
  unnamed_function_82700(uVar1,param_1,uRam0056bfd4,0);
  StaticEventHandler__add_OnRestInBonfire(uVar1,0);
  return;
}



// ---- RestUI::OnDestroy   [wasm func86936 -> ram:81a4bbb4 ; ghidra: RestUI::OnDestroy]

void RestUI__OnDestroy(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (cRam00664aa9 == '\0') {
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x56bfd0);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d374);
    cRam00664aa9 = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x10),0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
  unnamed_function_44686(uVar1,1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  uVar1 = DG_Tweening_DOTween__To_15(0);
  uVar2 = DG_Tweening_DOTweenModuleUI__DOColor
                    (*(undefined4 *)(param_1 + 0x14),0x3f800000,0x3f800000,0);
  uVar2 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar2,4,uRam0056d374);
  uVar2 = DG_Tweening_TweenParams___cctor(uVar1,uVar2,0);
  uVar3 = DG_Tweening_DOTweenModuleUI__DOColor_1
                    (*(undefined4 *)(param_1 + 0x10),0x3f19999a,0x3f800000,0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar3,4,uRam0056d374);
  DG_Tweening_TweenSettingsExtensions__Prepend(uVar2,uVar3,0);
  uVar2 = DG_Tweening_DOTweenModuleUI__DOColor(*(undefined4 *)(param_1 + 0x14),0,0x3f800000,0);
  uVar2 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar2,4,uRam0056d374);
  uVar1 = DG_Tweening_TweenParams___cctor(uVar1,uVar2,0);
  uVar2 = DG_Tweening_DOTweenModuleUI__DOColor_1(*(undefined4 *)(param_1 + 0x10),0,0x3f800000,0);
  uVar2 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar2,4,uRam0056d374);
  uVar1 = DG_Tweening_TweenSettingsExtensions__Prepend(uVar1,uVar2,0);
  uVar2 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar2,param_1,uRam0056bfd0,0);
  DG_Tweening_TweenSettingsExtensions__PrependInterval(uVar1,uVar2,0);
  return;
}



// ---- RestUI::ShowRestUI_b_6_0   [wasm func86937 -> ram:81a4bd00 ; ghidra: RestUI::<ShowRestUI>b__6_0]

void RestUI__<ShowRestUI>b__6_0(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664aaa == '\0') {
    unnamed_function_1099(0x567e18);
    unnamed_function_1099(0x567e34);
    unnamed_function_1099(0x567e70);
    unnamed_function_1099(0x567e9c);
    unnamed_function_1099(0x567efc);
    unnamed_function_1099(0x567f18);
    cRam00664aaa = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e9c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e70);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567efc);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e34);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e18);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



