// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Note  (Assembly-CSharp)  -  5 function(s)

// ---- Note::Awake   [wasm func86556 -> ram:81a3bdc5 ; ghidra: Note::Awake]

void Note__Awake(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664938 == '\0') {
    unnamed_function_1099(0x56d374);
    unnamed_function_1099(0x56d390);
    cRam00664938 = '\x01';
  }
  uVar1 = DG_Tweening_DOTweenModuleSprite__DOColor
                    (*(undefined4 *)(param_1 + 0x14),0x3e99999a,0x3fc00000,0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar1,4,uRam0056d374);
  DG_Tweening_TweenSettingsExtensions__SetLoops(uVar1,0xffffffff,1,uRam0056d390);
  return;
}



// ---- Note::Start   [wasm func86557 -> ram:81a3be23 ; ghidra: Note::Start]

void Note__Start(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar1 = UnityEngine_Collision2D__get_rigidbody(param_2,0);
  uVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
  if (0 < (int)(uVar4 & 1 << (uVar2 & 0x1f))) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    if (cRam006649ae == '\0') {
      unnamed_function_1099(0x55bea8);
      unnamed_function_1099(0x55c894);
      cRam006649ae = '\x01';
    }
    iVar5 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 8);
    if (iVar5 != 0) {
      iVar3 = unnamed_function_95402(uRam0055bea8);
      OnBuildNavMeshEventArgs___ctor(iVar3,0);
      *(undefined4 *)(iVar3 + 0xc) = uVar1;
      *(undefined1 *)(iVar3 + 8) = 1;
      (**(code **)((ulonglong)*(uint *)(iVar5 + 0xc) * 4))
                (*(undefined4 *)(iVar5 + 0x20),iVar3,*(undefined4 *)(iVar5 + 0x14));
    }
  }
  return;
}



// ---- Note::OnCollisionStay2D   [wasm func86559 -> ram:81a3bf2e ; ghidra: Note::OnCollisionStay2D]

void Note__OnCollisionStay2D(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664939 == '\0') {
    unnamed_function_1099(0x55a7d4);
    cRam00664939 = '\x01';
  }
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar1,0,0);
  return;
}



// ---- Note::OnDestroy   [wasm func86560 -> ram:81a3bf7b ; ghidra: Note::OnDestroy]

void Note__OnDestroy(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar1 = UnityEngine_Collision2D__get_rigidbody(param_2,0);
  uVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
  if (0 < (int)(uVar4 & 1 << (uVar2 & 0x1f))) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    if (cRam006649ae == '\0') {
      unnamed_function_1099(0x55bea8);
      unnamed_function_1099(0x55c894);
      cRam006649ae = '\x01';
    }
    iVar5 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 8);
    if (iVar5 != 0) {
      iVar3 = unnamed_function_95402(uRam0055bea8);
      OnBuildNavMeshEventArgs___ctor(iVar3,0);
      *(undefined4 *)(iVar3 + 0xc) = uVar1;
      *(undefined1 *)(iVar3 + 8) = 0;
      (**(code **)((ulonglong)*(uint *)(iVar5 + 0xc) * 4))
                (*(undefined4 *)(iVar5 + 0x20),iVar3,*(undefined4 *)(iVar5 + 0x14));
    }
  }
  return;
}



// ---- Note::ctor   [wasm func86561 -> ram:81a3c013 ; ghidra: Note::.ctor]

void Note___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam0066493a == '\0') {
    unnamed_function_1099(0x557a40);
    unnamed_function_1099(0x567f78);
    unnamed_function_1099(0x567ea8);
    unnamed_function_1099(0x56b4a0);
    cRam0066493a = '\x01';
  }
  uVar1 = unnamed_function_65372(param_1,uRam00567f78);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ea8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = unnamed_function_95402(uRam00557a40);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056b4a0,0);
  StaticEventHandler__CallMapTransitionEvent(uVar1,param_1);
  return;
}



