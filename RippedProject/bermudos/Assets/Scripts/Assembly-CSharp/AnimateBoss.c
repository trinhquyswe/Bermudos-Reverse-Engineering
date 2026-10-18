// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: AnimateBoss  (Assembly-CSharp)  -  4 function(s)

// ---- AnimateBoss::Awake   [wasm func86852 -> ram:81a4793a ; ghidra: AnimateBoss::Awake]

void AnimateBoss__Awake(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uStack_30;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (cRam00664a6f == '\0') {
    unnamed_function_1099(0x565d78);
    cRam00664a6f = '\x01';
  }
  iVar5 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  uVar4 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar5 + 0x5c) + 0x10),0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar4,0);
  fVar3 = fStack_8;
  fVar2 = fStack_c;
  fVar1 = fStack_10;
  uVar4 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar4,0);
  fStack_28 = fVar3 - fStack_8;
  fStack_1c = fVar2 - fStack_c;
  fStack_20 = fVar1 - fStack_10;
  uStack_30 = CONCAT44(fStack_1c,fStack_20);
  fStack_18 = fStack_28;
  AnimateBoss__InitializeAimDirection(param_1,&uStack_30,&uStack_30);
  return;
}



// ---- AnimateBoss::InitializeAimDirection   [wasm func86853 -> ram:81a47a38 ; ghidra: AnimateBoss::InitializeAimDirection]

undefined4 AnimateBoss__InitializeAimDirection(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uVar2 = 0;
  if (cRam00664a71 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a71 = '\x01';
  }
  uStack_8 = *(undefined4 *)(param_2 + 1);
  uStack_10 = *param_2;
  fVar3 = (float)unnamed_function_86160(&uStack_10,0);
  if ((fVar3 <= 45.0) || (135.0 < fVar3)) {
    if ((fVar3 <= 180.0 && 135.0 < fVar3) || ((-180.0 < fVar3 && (fVar3 <= -155.0)))) {
      AnimateBoss__Update(param_1,&uStack_10);
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24);
      uVar2 = 4;
      iVar1 = 0x28;
      iVar5 = *(int *)(iRam0055c620 + 0x74);
    }
    else if ((fVar3 <= -155.0) || (-45.0 < fVar3)) {
      if (fVar3 <= -45.0) {
        return 8;
      }
      if (45.0 < fVar3) {
        return 8;
      }
      AnimateBoss__Update(param_1,&uStack_10);
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24);
      uVar2 = 3;
      iVar1 = 0x24;
      iVar5 = *(int *)(iRam0055c620 + 0x74);
    }
    else {
      AnimateBoss__Update(param_1,&uStack_10);
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24);
      uVar2 = 5;
      iVar1 = 0x18;
      iVar5 = *(int *)(iRam0055c620 + 0x74);
    }
  }
  else {
    AnimateBoss__Update(param_1,&uStack_10);
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24);
    iVar1 = 0x10;
    iVar5 = *(int *)(iRam0055c620 + 0x74);
  }
  if (iVar5 == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__SetTrigger
            (uVar4,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + iVar1),0);
  return uVar2;
}



// ---- AnimateBoss::Update   [wasm func86854 -> ram:81a47bdb ; ghidra: AnimateBoss::Update]

void AnimateBoss__Update(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a70 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664a70 = '\x01';
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24);
  if (*(int *)(iRam0055c620 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__GetBool_1
            (uVar1,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x10),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x18),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x28),0,0);
  multiple_2_UnityEngine_Animator__GetBool_1
            (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24),
             *(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x24),0,0);
  return;
}



// ---- AnimateBoss::ctor   [wasm func86855 -> ram:81a47c8d ; ghidra: AnimateBoss::.ctor]

void AnimateBoss___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a72 == '\0') {
    unnamed_function_1099(0x567e78);
    cRam00664a72 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e78);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



