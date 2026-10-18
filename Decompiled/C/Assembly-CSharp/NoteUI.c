// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: NoteUI  (Assembly-CSharp)  -  4 function(s)

// ---- NoteUI::Start   [wasm func86563 -> ram:81a3c12f ; ghidra: NoteUI::Start]

void NoteUI__Start(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  ulonglong uStack_8;
  
  if (cRam0066493b == '\0') {
    unnamed_function_1099(0x56d374);
    cRam0066493b = '\x01';
  }
  uStack_8 = 0x3f800000;
  uStack_10 = 0x3f8000003f800000;
  iVar3 = **(int **)(param_1 + 0x14);
  uStack_18 = 0x3f800000;
  uStack_20 = 0x3f8000003f800000;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x178) * 4))
            (*(int **)(param_1 + 0x14),&uStack_20,*(undefined4 *)(iVar3 + 0x17c));
  piVar4 = *(int **)(param_1 + 0x10);
  (**(code **)((ulonglong)*(uint *)(*piVar4 + 0x170) * 4))
            (&uStack_10,piVar4,*(undefined4 *)(*piVar4 + 0x174));
  uVar2 = (undefined4)uStack_10;
  iVar3 = **(int **)(param_1 + 0x10);
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x170) * 4))
            (&uStack_10,*(int **)(param_1 + 0x10),*(undefined4 *)(iVar3 + 0x174));
  uVar1 = uStack_10;
  iVar3 = **(int **)(param_1 + 0x10);
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x170) * 4))
            (&uStack_10,*(int **)(param_1 + 0x10),*(undefined4 *)(iVar3 + 0x174));
  uStack_8 = uStack_8 & 0xffffffff;
  uStack_30 = CONCAT44((int)((ulonglong)uVar1 >> 0x20),uVar2);
  uStack_28 = uStack_8;
  uStack_10 = uStack_30;
  (**(code **)((ulonglong)*(uint *)(*piVar4 + 0x178) * 4))
            (piVar4,&uStack_30,*(undefined4 *)(*piVar4 + 0x17c));
  uVar2 = DG_Tweening_DOTweenModuleUI__DOColor_1
                    (*(undefined4 *)(param_1 + 0x14),0x3f800000,0x3f800000,0);
  DG_Tweening_TweenSettingsExtensions__SetEase(uVar2,4,uRam0056d374);
  uVar2 = DG_Tweening_DOTweenModuleUI__DOColor
                    (*(undefined4 *)(param_1 + 0x10),0x3f800000,0x3f800000,0);
  DG_Tweening_TweenSettingsExtensions__SetEase(uVar2,4,uRam0056d374);
  return;
}



// ---- NoteUI::OnEnable   [wasm func86564 -> ram:81a3c2d1 ; ghidra: NoteUI::OnEnable]

void NoteUI__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam0066493c == '\0') {
    unnamed_function_1099(0x557a40);
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x56b4a0);
    cRam0066493c = '\x01';
  }
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar1,0,0);
  uVar1 = unnamed_function_95402(uRam00557a40);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056b4a0,0);
  StaticEventHandler__add_OnNoteOpened(uVar1,param_1);
  return;
}



// ---- NoteUI::OnDestroy   [wasm func86566 -> ram:81a3c3eb ; ghidra: NoteUI::OnDestroy]

void NoteUI__OnDestroy(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_2 + 8);
  uVar2 = unnamed_function_44644(param_1,0);
  if (cVar1 == '\0') {
    unnamed_function_44686(uVar2,0,0);
    return;
  }
  unnamed_function_44686(uVar2,1,0);
  iVar3 = **(int **)(param_1 + 0x10);
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x2d0) * 4))
            (*(int **)(param_1 + 0x10),*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(iVar3 + 0x2d4)
            );
  return;
}



// ---- NoteUI::ctor   [wasm func86567 -> ram:81a3c43c ; ghidra: NoteUI::.ctor]

void NoteUI___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam0066493d == '\0') {
    unnamed_function_1099(0x567e14);
    unnamed_function_1099(0x567e18);
    unnamed_function_1099(0x567e20);
    unnamed_function_1099(0x567e28);
    unnamed_function_1099(0x567e60);
    unnamed_function_1099(0x567e64);
    unnamed_function_1099(0x567e70);
    unnamed_function_1099(0x567e74);
    unnamed_function_1099(0x567e9c);
    unnamed_function_1099(0x567ea4);
    unnamed_function_1099(0x567eb4);
    unnamed_function_1099(0x567ed4);
    unnamed_function_1099(0x567ed8);
    unnamed_function_1099(0x567ef4);
    unnamed_function_1099(0x567f00);
    unnamed_function_1099(0x567f2c);
    unnamed_function_1099(0x567f28);
    cRam0066493d = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ed4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ed8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ea4);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e14);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e64);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e9c);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e70);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e28);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e60);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f2c);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f28);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e18);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ef4);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f00);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567eb4);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e74);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  return;
}



