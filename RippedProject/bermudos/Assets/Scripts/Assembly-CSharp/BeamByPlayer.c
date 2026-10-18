// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: BeamByPlayer  (Assembly-CSharp)  -  6 function(s)

// ---- BeamByPlayer::RageEvent_OnRageChanged   [wasm func86596 -> ram:81a3e94f ; ghidra: BeamByPlayer::RageEvent_OnRageChanged]

void BeamByPlayer__RageEvent_OnRageChanged(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  undefined8 uStack_40;
  float fStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  float fStack_8;
  
  if (cRam0066497d == '\0') {
    unnamed_function_1099(0x569a58);
    unnamed_function_1099(0x569b08);
    unnamed_function_1099(0x56b548);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x572944);
    cRam0066497d = '\x01';
  }
  if (1.0 <= *(float *)(param_1 + 0x2c)) {
    fVar1 = (float)unnamed_function_12077
                             (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20));
    fStack_38 = (fVar1 * 57.29578 + 90.0) * 0.017453292;
    uStack_40 = 0;
    uStack_10 = 0;
    fStack_8 = fStack_38;
    unnamed_function_8664(&uStack_30,&uStack_40,0);
    uStack_18 = uStack_28;
    uStack_20 = uStack_30;
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = System_Linq_Enumerable__Count(param_1,0);
    UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar2,0);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    fStack_48 = fStack_8;
    uStack_58 = uStack_18;
    uStack_50 = uStack_10;
    uStack_60 = uStack_20;
    uVar2 = unnamed_function_86418(uVar4,&uStack_50,&uStack_60,uRam0056b548);
    uVar4 = UnityEngine_LayerMask__LayerToName(uRam00572944,0);
    UnityEngine_GameObject__get_transform(uVar2,uVar4,0);
    iVar3 = UnityEngine_Object__set_name(uVar2,uRam00569a58);
    *(undefined4 *)(iVar3 + 0x2c) = 0x41200000;
    uVar2 = UnityEngine_Object__set_name(uVar2,uRam00569b08);
    multiple_2_UnityEngine_Renderer__GetSharedMaterial(uVar2,*(undefined4 *)(param_1 + 0x14),0);
    iVar3 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(iVar3 + 0x14) = 0;
    RageEvent__remove_OnRageChanged(0,0,*(undefined4 *)(iVar3 + 0x10),0);
  }
  return;
}



// ---- BeamByPlayer::Awake   [wasm func86663 -> ram:81a42107 ; ghidra: BeamByPlayer::Awake]

void BeamByPlayer__Awake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam0066497b == '\0') {
    unnamed_function_1099(0x557a4c);
    unnamed_function_1099(0x557aa8);
    unnamed_function_1099(0x5676a0);
    unnamed_function_1099(0x5676a4);
    cRam0066497b = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a4c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam005676a4,0);
  Rage___ctor(uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = unnamed_function_95402(uRam00557aa8);
  unnamed_function_60334(uVar1,param_1,uRam005676a0,0);
  AnimateEnemy_<PlayAttackAnimationCoroutine>d__10__System_Collections_IEnumerator_get_Current
            (uVar2,uVar1,0);
  return;
}



// ---- BeamByPlayer::OnEnable   [wasm func86664 -> ram:81a42198 ; ghidra: BeamByPlayer::OnEnable]

void BeamByPlayer__OnEnable(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam0066497c == '\0') {
    unnamed_function_1099(0x557a4c);
    unnamed_function_1099(0x557aa8);
    unnamed_function_1099(0x5676a0);
    unnamed_function_1099(0x5676a4);
    cRam0066497c = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a4c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam005676a4,0);
  RageEvent__add_OnRageChanged(uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = unnamed_function_95402(uRam00557aa8);
  unnamed_function_60334(uVar1,param_1,uRam005676a0,0);
  AnimateEvent__add_OnAnimate(uVar2,uVar1,0);
  return;
}



// ---- BeamByPlayer::OnDisable   [wasm func86665 -> ram:81a42229 ; ghidra: BeamByPlayer::OnDisable]

void BeamByPlayer__OnDisable(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    if (cRam0066482b == '\0') {
      unnamed_function_1099(0x55d048);
      cRam0066482b = '\x01';
    }
    uVar7 = *(undefined8 *)(*(int *)(iRam0055d048 + 0x5c) + 0x18);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(iRam0055d048 + 0x5c) + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    return;
  }
  if (iVar1 == 1) {
    if (cRam0066482b == '\0') {
      unnamed_function_1099(0x55d048);
      cRam0066482b = '\x01';
    }
    iVar1 = *(int *)(iRam0055d048 + 0x5c);
    fVar2 = *(float *)(iVar1 + 0x20);
    fVar3 = *(float *)(iVar1 + 0x1c);
    fVar4 = *(float *)(iVar1 + 0x18);
    if (cRam00662ef1 == '\0') {
      unnamed_function_1099(0x55d048);
      cRam00662ef1 = '\x01';
      iVar1 = *(int *)(iRam0055d048 + 0x5c);
    }
    fVar5 = *(float *)(iVar1 + 0x3c);
    fVar6 = *(float *)(iVar1 + 0x40);
    *(float *)(param_1 + 0x28) = fVar2 + *(float *)(iVar1 + 0x44);
    *(float *)(param_1 + 0x24) = fVar3 + fVar6;
    *(float *)(param_1 + 0x20) = fVar4 + fVar5;
    return;
  }
  if (iVar1 == 2) {
    if (cRam0066482b == '\0') {
      unnamed_function_1099(0x55d048);
      cRam0066482b = '\x01';
    }
    iVar1 = *(int *)(iRam0055d048 + 0x5c);
    fVar2 = *(float *)(iVar1 + 0x20);
    fVar3 = *(float *)(iVar1 + 0x1c);
    fVar4 = *(float *)(iVar1 + 0x18);
    if (cRam00662ef0 == '\0') {
      unnamed_function_1099(0x55d048);
      cRam00662ef0 = '\x01';
      iVar1 = *(int *)(iRam0055d048 + 0x5c);
    }
    fVar5 = *(float *)(iVar1 + 0x30);
    fVar6 = *(float *)(iVar1 + 0x34);
    *(float *)(param_1 + 0x28) = fVar2 + *(float *)(iVar1 + 0x38);
    *(float *)(param_1 + 0x24) = fVar3 + fVar6;
    *(float *)(param_1 + 0x20) = fVar4 + fVar5;
    return;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if (cRam00662ef0 == '\0') {
        unnamed_function_1099(0x55d048);
        cRam00662ef0 = '\x01';
      }
      uVar7 = *(undefined8 *)(*(int *)(iRam0055d048 + 0x5c) + 0x30);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(iRam0055d048 + 0x5c) + 0x38);
      *(undefined8 *)(param_1 + 0x20) = uVar7;
      return;
    }
    if (iVar1 != 5) {
      if (iVar1 == 6) {
        if (cRam00662eed == '\0') {
          unnamed_function_1099(0x55d048);
          cRam00662eed = '\x01';
        }
        iVar1 = *(int *)(iRam0055d048 + 0x5c);
        fVar2 = *(float *)(iVar1 + 0x2c);
        fVar3 = *(float *)(iVar1 + 0x28);
        fVar4 = *(float *)(iVar1 + 0x24);
        if (cRam00662ef1 == '\0') {
          unnamed_function_1099(0x55d048);
          cRam00662ef1 = '\x01';
          iVar1 = *(int *)(iRam0055d048 + 0x5c);
        }
        fVar5 = *(float *)(iVar1 + 0x3c);
        fVar6 = *(float *)(iVar1 + 0x40);
        *(float *)(param_1 + 0x28) = fVar2 + *(float *)(iVar1 + 0x44);
        *(float *)(param_1 + 0x24) = fVar3 + fVar6;
        *(float *)(param_1 + 0x20) = fVar4 + fVar5;
      }
      else if (iVar1 == 7) {
        if (cRam00662eed == '\0') {
          unnamed_function_1099(0x55d048);
          cRam00662eed = '\x01';
        }
        iVar1 = *(int *)(iRam0055d048 + 0x5c);
        fVar2 = *(float *)(iVar1 + 0x2c);
        fVar3 = *(float *)(iVar1 + 0x28);
        fVar4 = *(float *)(iVar1 + 0x24);
        if (cRam00662ef0 == '\0') {
          unnamed_function_1099(0x55d048);
          cRam00662ef0 = '\x01';
          iVar1 = *(int *)(iRam0055d048 + 0x5c);
        }
        fVar5 = *(float *)(iVar1 + 0x30);
        fVar6 = *(float *)(iVar1 + 0x34);
        *(float *)(param_1 + 0x28) = fVar2 + *(float *)(iVar1 + 0x38);
        *(float *)(param_1 + 0x24) = fVar3 + fVar6;
        *(float *)(param_1 + 0x20) = fVar4 + fVar5;
        return;
      }
      return;
    }
    if (cRam00662eed == '\0') {
      unnamed_function_1099(0x55d048);
      cRam00662eed = '\x01';
    }
    uVar7 = *(undefined8 *)(*(int *)(iRam0055d048 + 0x5c) + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(iRam0055d048 + 0x5c) + 0x2c);
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    return;
  }
  if (cRam00662ef1 == '\0') {
    unnamed_function_1099(0x55d048);
    cRam00662ef1 = '\x01';
  }
  uVar7 = *(undefined8 *)(*(int *)(iRam0055d048 + 0x5c) + 0x3c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(iRam0055d048 + 0x5c) + 0x44);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  return;
}



// ---- BeamByPlayer::AnimateEvent_OnAnimate   [wasm func86666 -> ram:81a425c6 ; ghidra: BeamByPlayer::AnimateEvent_OnAnimate]

void BeamByPlayer__AnimateEvent_OnAnimate(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 8);
  return;
}



// ---- BeamByPlayer::ctor   [wasm func86667 -> ram:81a425d3 ; ghidra: BeamByPlayer::.ctor]

void BeamByPlayer___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam0066497e == '\0') {
    unnamed_function_1099(0x567ef0);
    cRam0066497e = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ef0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



