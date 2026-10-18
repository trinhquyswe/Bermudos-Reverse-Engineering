// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: SkillCooldownTimer  (Assembly-CSharp)  -  8 function(s)

// ---- SkillCooldownTimer::OnEnable   [wasm func86684 -> ram:81a43117 ; ghidra: SkillCooldownTimer::OnEnable]

void SkillCooldownTimer__OnEnable(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (cRam00664989 == '\0') {
    unnamed_function_1099(0x557a4c);
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x56c58c);
    unnamed_function_1099(0x56c590);
    unnamed_function_1099(0x56c594);
    cRam00664989 = '\x01';
  }
  uVar3 = unnamed_function_95402(iRam00559fb4);
  unnamed_function_82700(uVar3,param_1,uRam0056c590,0);
  if (cRam006649bc == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x55c894);
    cRam006649bc = '\x01';
  }
  iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x1c);
  while ((piVar4 = (int *)unnamed_function_85160(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
         (iRam00559fb4 == *piVar4))) {
    iVar5 = System_Net_WebOperation___ctor(*(int *)(iRam0055c894 + 0x5c) + 0x1c,piVar4,iVar2);
    bVar1 = iVar2 == iVar5;
    iVar2 = iVar5;
    if (bVar1) {
      uVar3 = unnamed_function_95402(iRam00559fb4);
      unnamed_function_82700(uVar3,param_1,uRam0056c58c,0);
      if (cRam006649b9 == '\0') {
        unnamed_function_1099(0x559fb4);
        unnamed_function_1099(0x55c894);
        cRam006649b9 = '\x01';
      }
      iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x18);
      while ((piVar4 = (int *)unnamed_function_85160(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
             (iRam00559fb4 == *piVar4))) {
        iVar5 = System_Net_WebOperation___ctor(*(int *)(iRam0055c894 + 0x5c) + 0x18,piVar4,iVar2);
        bVar1 = iVar2 == iVar5;
        iVar2 = iVar5;
        if (bVar1) {
          uVar3 = unnamed_function_95402(uRam00557a4c);
          UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam0056c594,0);
          RageEvent__add_OnRageChanged(uVar3,0);
          return;
        }
      }
      unnamed_function_1116(piVar4,iRam00559fb4);
      do {
        halt_trap();
      } while( true );
    }
  }
  unnamed_function_1116(piVar4,iRam00559fb4);
  do {
    halt_trap();
  } while( true );
}



// ---- SkillCooldownTimer::OnDisable   [wasm func86687 -> ram:81a433ef ; ghidra: SkillCooldownTimer::OnDisable]

void SkillCooldownTimer__OnDisable(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  UnityEngine_UI_Image__get_fillAmount(*(undefined4 *)(param_1 + 0x10),0x3f800000,0);
  return;
}



// ---- SkillCooldownTimer::GetDashCooldown   [wasm func86688 -> ram:81a4340d ; ghidra: SkillCooldownTimer::GetDashCooldown]

void SkillCooldownTimer__GetDashCooldown(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0x3f000000;
  UnityEngine_UI_Image__get_fillAmount(*(undefined4 *)(param_1 + 0x14),0x3f800000,0);
  return;
}



// ---- SkillCooldownTimer::GetBashCooldown   [wasm func86689 -> ram:81a4342b ; ghidra: SkillCooldownTimer::GetBashCooldown]

void SkillCooldownTimer__GetBashCooldown(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam0066498a == '\0') {
    unnamed_function_1099(0x56c588);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d33c);
    cRam0066498a = '\x01';
  }
  uVar1 = DG_Tweening_DOTweenModuleUI__DOFade_2
                    (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 8),0x3e99999a,0);
  uVar2 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar2,param_1,uRam0056c588,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar1,uVar2,uRam0056d33c);
  return;
}



// ---- SkillCooldownTimer::IncreaseBeamCooldown   [wasm func86690 -> ram:81a434a1 ; ghidra: SkillCooldownTimer::IncreaseBeamCooldown]

void SkillCooldownTimer__IncreaseBeamCooldown(int param_1)

{
  UnityEngine_UI_Image__get_fillAmount(*(undefined4 *)(param_1 + 0x10),0,0);
  UnityEngine_UI_Image__get_fillAmount(*(undefined4 *)(param_1 + 0x14),0,0);
  UnityEngine_UI_Image__get_fillAmount(*(undefined4 *)(param_1 + 0x18),0,0);
  return;
}



// ---- SkillCooldownTimer::Start   [wasm func86691 -> ram:81a434d4 ; ghidra: SkillCooldownTimer::Start]

void SkillCooldownTimer__Start(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  fVar3 = *(float *)(iVar2 + 0x94);
  if (0.0 < fVar3) {
    fVar4 = *(float *)(param_1 + 0x20);
    fVar1 = (float)UnityEngine_Time__get_time(0);
    UnityEngine_UI_Image__get_fillAmount(iVar2,fVar3 + (-1.0 / fVar4) * fVar1,0);
  }
  iVar2 = *(int *)(param_1 + 0x14);
  fVar3 = *(float *)(iVar2 + 0x94);
  if (0.0 < fVar3) {
    fVar4 = *(float *)(param_1 + 0x24);
    fVar1 = (float)UnityEngine_Time__get_time(0);
    UnityEngine_UI_Image__get_fillAmount(iVar2,fVar3 + (-1.0 / fVar4) * fVar1,0);
  }
  return;
}



// ---- SkillCooldownTimer::ctor   [wasm func86692 -> ram:81a4353f ; ghidra: SkillCooldownTimer::.ctor]

void SkillCooldownTimer___ctor(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(int *)(param_1 + 0x18) + 0x94);
  uVar1 = unnamed_function_44644(*(int *)(param_1 + 0x18),0);
  unnamed_function_44686(uVar1,fVar2 != 1.0,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x1c),0);
  unnamed_function_44686(uVar1,fVar2 == 1.0,0);
  return;
}



// ---- SkillCooldownTimer::IncreaseBeamCooldown_b_10_0   [wasm func86693 -> ram:81a43581 ; ghidra: SkillCooldownTimer::<IncreaseBeamCooldown>b__10_0]

void SkillCooldownTimer__<IncreaseBeamCooldown>b__10_0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (cRam0066498b == '\0') {
    unnamed_function_1099(0x56758c);
    unnamed_function_1099(0x567590);
    unnamed_function_1099(0x559828);
    unnamed_function_1099(0x5667e4);
    cRam0066498b = '\x01';
  }
  if (cRam0066498c == '\0') {
    unnamed_function_1099(0x55d7cc);
    cRam0066498c = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055d7cc);
  *(int *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  UnityEngine_Events_UnityEventBase__RemoveListener
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xd0),0);
  UnityEngine_Events_UnityEventBase__RemoveListener
            (*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xd0),0);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xd0);
  uVar2 = unnamed_function_95402(uRam00559828);
  unnamed_function_71906(uVar2,param_1,uRam0056758c,0);
  UnityEngine_Events_UnityEvent_1___ctor(uVar3,uVar2,uRam005667e4);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xd0);
  uVar2 = unnamed_function_95402(uRam00559828);
  unnamed_function_71906(uVar2,param_1,uRam00567590,0);
  UnityEngine_Events_UnityEvent_1___ctor(uVar3,uVar2,uRam005667e4);
  return;
}



