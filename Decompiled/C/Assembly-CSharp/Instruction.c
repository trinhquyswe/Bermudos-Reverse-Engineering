// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Instruction  (Assembly-CSharp)  -  4 function(s)

// ---- Instruction::Start   [wasm func86437 -> ram:81a364d8 ; ghidra: Instruction::Start]

void Instruction__Start(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (cRam006648e9 == '\0') {
    unnamed_function_1099(0x56d380);
    cRam006648e9 = '\x01';
  }
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (cRam00662a53 == '\0') {
    unnamed_function_1099(0x55d048);
    cRam00662a53 = '\x01';
  }
  iVar2 = *(int *)(iRam0055d048 + 0x5c);
  fStack_18 = *(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x14);
  fStack_c = *(float *)(iVar2 + 0x10) + *(float *)(iVar2 + 0x10);
  fStack_10 = *(float *)(iVar2 + 0xc) + *(float *)(iVar2 + 0xc);
  uStack_20 = CONCAT44(fStack_c,fStack_10);
  fStack_8 = fStack_18;
  multiple_2_UnityEngine_Transform__get_localScale(uVar1,&uStack_20,0);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (cRam00662a53 == '\0') {
    unnamed_function_1099(0x55d048);
    cRam00662a53 = '\x01';
  }
  uStack_28 = *(undefined4 *)(*(int *)(iRam0055d048 + 0x5c) + 0x14);
  uStack_30 = *(undefined8 *)(*(int *)(iRam0055d048 + 0x5c) + 0xc);
  uVar1 = DG_Tweening_ShortcutExtensions__DOLocalRotateQuaternion(uVar1,&uStack_30,0x3e99999a,0);
  DG_Tweening_TweenSettingsExtensions__SetEase(uVar1,0x1b,uRam0056d380);
  return;
}



// ---- Instruction::OnEnable   [wasm func86438 -> ram:81a365fc ; ghidra: Instruction::OnEnable]

void Instruction__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648ea == '\0') {
    unnamed_function_1099(0x557b40);
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x56a718);
    cRam006648ea = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557b40);
  unnamed_function_60359(uVar1,param_1,uRam0056a718,0);
  StaticEventHandler__add_OnInstructionChanged(uVar1,param_1);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar1,0,0);
  return;
}



// ---- Instruction::OnDestroy   [wasm func86440 -> ram:81a36716 ; ghidra: Instruction::OnDestroy]

void Instruction__OnDestroy(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  uint uStack_4;
  
  uStack_4 = param_3;
  if (cRam006648eb == '\0') {
    unnamed_function_1099(0x56d380);
    unnamed_function_1099(0x56d3e0);
    unnamed_function_1099(0x57185c);
    unnamed_function_1099(0x570a3c);
    cRam006648eb = '\x01';
  }
  if (param_3 == 0xffffffff) {
    uVar1 = unnamed_function_44644(param_1,0);
    unnamed_function_44686(uVar1,1,0);
    iVar2 = **(int **)(param_1 + 0x10);
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
              (*(int **)(param_1 + 0x10),param_2,*(undefined4 *)(iVar2 + 0x2d4));
    iVar2 = **(int **)(param_1 + 0x14);
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
              (*(int **)(param_1 + 0x14),uRam00570a3c,*(undefined4 *)(iVar2 + 0x2d4));
  }
  else {
    if (param_3 < 3) {
      uVar1 = System_Linq_Enumerable__Count(param_1,0);
      if (cRam00662a53 == '\0') {
        unnamed_function_1099(0x55d048);
        cRam00662a53 = '\x01';
      }
      iVar2 = *(int *)(iRam0055d048 + 0x5c);
      fStack_18 = *(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x14);
      fStack_c = *(float *)(iVar2 + 0x10) + *(float *)(iVar2 + 0x10);
      fStack_10 = *(float *)(iVar2 + 0xc) + *(float *)(iVar2 + 0xc);
      uStack_20 = CONCAT44(fStack_c,fStack_10);
      fStack_8 = fStack_18;
      multiple_2_UnityEngine_Transform__get_localScale(uVar1,&uStack_20,0);
      uVar1 = System_Linq_Enumerable__Count(param_1,0);
      if (cRam00662a53 == '\0') {
        unnamed_function_1099(0x55d048);
        cRam00662a53 = '\x01';
      }
      uStack_28 = *(undefined4 *)(*(int *)(iRam0055d048 + 0x5c) + 0x14);
      uStack_30 = *(undefined8 *)(*(int *)(iRam0055d048 + 0x5c) + 0xc);
      uVar1 = DG_Tweening_ShortcutExtensions__DOLocalRotateQuaternion(uVar1,&uStack_30,0x3e99999a,0)
      ;
      uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar1,0x1b,uRam0056d380);
      DG_Tweening_TweenSettingsExtensions__SetTarget(uVar1,1,uRam0056d3e0);
      uVar1 = unnamed_function_44644(param_1,0);
      unnamed_function_44686(uVar1,1,0);
      iVar2 = **(int **)(param_1 + 0x10);
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
                (*(int **)(param_1 + 0x10),param_2,*(undefined4 *)(iVar2 + 0x2d4));
      uVar1 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(&uStack_4,0);
      piVar3 = *(int **)(param_1 + 0x14);
      uVar1 = Mono_Security_X509_X509Crl_X509CrlEntry___ctor(uVar1,uRam0057185c,0);
      iVar2 = *piVar3;
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
                (piVar3,uVar1,*(undefined4 *)(iVar2 + 0x2d4));
    }
    else {
      uVar1 = unnamed_function_44644(param_1,0);
      unnamed_function_44686(uVar1,0,0);
    }
    if (param_4 == 0) {
      uVar1 = unnamed_function_44644(param_1,0);
      unnamed_function_44686(uVar1,0,0);
    }
  }
  return;
}



// ---- Instruction::ctor   [wasm func86441 -> ram:81a3695a ; ghidra: Instruction::.ctor]

void Instruction___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam006648ec == '\0') {
    unnamed_function_1099(0x567f64);
    unnamed_function_1099(0x567f74);
    unnamed_function_1099(0x567f78);
    cRam006648ec = '\x01';
  }
  uVar1 = unnamed_function_65372(param_1,uRam00567f74);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = unnamed_function_65372(param_1,uRam00567f78);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = unnamed_function_65372(param_1,uRam00567f64);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = unnamed_function_44644(uVar1,0);
  unnamed_function_44686(uVar1,0,0);
  UnityEngine_ExcludeFromPresetAttribute___ctor(*(undefined4 *)(param_1 + 0x14),0,0);
  return;
}



