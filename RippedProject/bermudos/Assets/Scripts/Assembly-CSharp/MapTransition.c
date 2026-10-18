// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MapTransition  (Assembly-CSharp)  -  4 function(s)

// ---- MapTransition::Start   [wasm func86496 -> ram:81a39412 ; ghidra: MapTransition::Start]

void MapTransition__Start(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (cRam00664912 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x56ad9c);
    cRam00664912 = '\x01';
  }
  uVar3 = System_Linq_Enumerable__Count(param_1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar3,0,0);
  uVar3 = unnamed_function_95402(iRam00559fb4);
  unnamed_function_82700(uVar3,param_1,uRam0056ad9c,0);
  if (cRam006649aa == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x55c894);
    cRam006649aa = '\x01';
  }
  iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 4);
  while ((piVar4 = (int *)unnamed_function_85160(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
         (iRam00559fb4 == *piVar4))) {
    iVar5 = System_Net_WebOperation___ctor(*(int *)(iRam0055c894 + 0x5c) + 4,piVar4,iVar2);
    bVar1 = iVar2 == iVar5;
    iVar2 = iVar5;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(piVar4,iRam00559fb4);
  do {
    halt_trap();
  } while( true );
}



// ---- MapTransition::OnDestroy   [wasm func86498 -> ram:81a395a9 ; ghidra: MapTransition::OnDestroy]

void MapTransition__OnDestroy(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (cRam00664913 == '\0') {
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x56ad98);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d374);
    cRam00664913 = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x10),0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
  unnamed_function_44686(uVar1,1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  uVar1 = DG_Tweening_DOTween__To_15(0);
  uVar2 = DG_Tweening_DOTweenModuleUI__DOColor_1
                    (*(undefined4 *)(param_1 + 0x10),0x3f800000,*(float *)(param_1 + 0x1c) * 0.5,0);
  uVar2 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar2,4,uRam0056d374);
  uVar2 = DG_Tweening_TweenParams___cctor(uVar1,uVar2,0);
  uVar3 = DG_Tweening_DOTweenModuleUI__DOColor
                    (*(undefined4 *)(param_1 + 0x14),0x3f800000,*(float *)(param_1 + 0x1c) * 0.5,0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar3,4,uRam0056d374);
  DG_Tweening_TweenSettingsExtensions__Prepend(uVar2,uVar3,0);
  uVar2 = DG_Tweening_DOTweenModuleUI__DOColor_1
                    (*(undefined4 *)(param_1 + 0x10),0,*(float *)(param_1 + 0x1c) * 0.5,0);
  uVar1 = DG_Tweening_TweenParams___cctor(uVar1,uVar2,0);
  uVar2 = DG_Tweening_DOTweenModuleUI__DOColor
                    (*(undefined4 *)(param_1 + 0x14),0,*(float *)(param_1 + 0x1c) * 0.5,0);
  uVar2 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar2,4,uRam0056d374);
  uVar1 = DG_Tweening_TweenSettingsExtensions__Prepend(uVar1,uVar2,0);
  uVar2 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar2,param_1,uRam0056ad98,0);
  DG_Tweening_TweenSettingsExtensions__PrependInterval(uVar1,uVar2,0);
  return;
}



// ---- MapTransition::OnMapTransition   [wasm func86499 -> ram:81a396fe ; ghidra: MapTransition::OnMapTransition]

void MapTransition__OnMapTransition(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x3f000000;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- MapTransition::OnMapTransition_b_7_0   [wasm func86500 -> ram:81a39715 ; ghidra: MapTransition::<OnMapTransition>b__7_0]

void MapTransition__<OnMapTransition>b__7_0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam00664914 == '\0') {
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x5762e0);
    unnamed_function_1099(0x57355c);
    unnamed_function_1099(0x576924);
    cRam00664914 = '\x01';
  }
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  if ((*(int *)(**(int **)(iVar2 + 0x5c) + 0x1c) == 2) &&
     (iVar2 = multiple_2_System_String__Equals
                        (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10),uRam005762e0,0),
     uVar1 = uRam0057355c, iVar2 != 0)) {
    if (cRam006649de == '\0') {
      unnamed_function_1099(0x55c894);
      cRam006649de = '\x01';
    }
    iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x48);
    if (iVar2 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                (*(undefined4 *)(iVar2 + 0x20),uVar1,0xffffffff,1,*(undefined4 *)(iVar2 + 0x14));
      return;
    }
  }
  else {
    iVar2 = UnityEngine_Component__GetComponents(param_2,uRam00576924,0);
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x14) == '\0')) {
      if (cRam00664915 == '\0') {
        unnamed_function_1099(0x55ece8);
        cRam00664915 = '\x01';
      }
      iVar2 = unnamed_function_95402(uRam0055ece8);
      *(undefined4 *)(iVar2 + 0x14) = param_2;
      *(int *)(iVar2 + 0x10) = param_1;
      *(undefined4 *)(iVar2 + 8) = 0;
      UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar2,0);
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
  return;
}



