// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: ItemUI  (Assembly-CSharp)  -  7 function(s)

// ---- ItemUI::Awake   [wasm func86420 -> ram:81a35b93 ; ghidra: ItemUI::Awake]

void ItemUI__Awake(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (cRam006648df == '\0') {
    unnamed_function_1099(0x567eb0);
    cRam006648df = '\x01';
  }
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  iVar2 = multiple_3_UnityEngine_Transform__set_localScale(uVar1,0);
  if (iVar2 != 0) {
    uVar1 = System_Linq_Enumerable__Count(iVar2,0);
    iVar3 = multiple_3_UnityEngine_Transform__set_localScale(uVar1,0);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    if (iVar2 == 0) {
      param_1 = 0;
    }
    uVar1 = System_Linq_Enumerable__Count(iVar3,0);
    iVar2 = multiple_3_UnityEngine_Transform__set_localScale(uVar1,0);
    if (iVar2 != 0) {
      if (iVar3 == 0) {
        param_1 = 0;
      }
      uVar1 = System_Linq_Enumerable__Count(iVar2,0);
      iVar3 = multiple_3_UnityEngine_Transform__set_localScale(uVar1,0);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        return;
      }
      if (iVar2 == 0) {
        param_1 = 0;
      }
      uVar1 = System_Linq_Enumerable__Count(iVar3,0);
      iVar2 = multiple_3_UnityEngine_Transform__set_localScale(uVar1,0);
      if (iVar2 != 0) {
        uVar4 = UnityEngine_GameObject__get_activeInHierarchy(iVar2,uRam00567eb0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  return;
}



// ---- ItemUI::OnEnable   [wasm func86421 -> ram:81a35c5d ; ghidra: ItemUI::OnEnable]

void ItemUI__OnEnable(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam006648e1 == '\0') {
    unnamed_function_1099(0x569ae4);
    unnamed_function_1099(0x56b51c);
    unnamed_function_1099(0x55be2c);
    cRam006648e1 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
    unnamed_function_44686(uVar1,0,0);
    uVar1 = unnamed_function_44644(param_1,0);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    uVar1 = unnamed_function_51907(uVar1,uRam0056b51c);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = UnityEngine_Object__set_name(uVar1,uRam00569ae4);
    UnityEngine_RectTransform__set_anchoredPosition(&uStack_8,*(undefined4 *)(param_1 + 0x34),0);
    uStack_40 = uStack_8;
    UnityEngine_RectTransform__get_sizeDelta_Injected(uVar1,&uStack_40,0);
    UnityEngine_RectTransform__set_sizeDelta(&uStack_10,*(undefined4 *)(param_1 + 0x34),0);
    uStack_48 = uStack_10;
    UnityEngine_RectTransform__get_pivot_Injected(uVar1,&uStack_48,0);
    UnityEngine_RectTransform__get_rect(&uStack_18,*(undefined4 *)(param_1 + 0x34),0);
    uStack_50 = uStack_18;
    UnityEngine_RectTransform__get_anchorMin_Injected(uVar1,&uStack_50,0);
    UnityEngine_RectTransform__set_anchorMin(&uStack_20,*(undefined4 *)(param_1 + 0x34),0);
    uStack_58 = uStack_20;
    UnityEngine_RectTransform__get_anchorMax_Injected(uVar1,&uStack_58,0);
    UnityEngine_RectTransform__set_anchorMax(&uStack_28,*(undefined4 *)(param_1 + 0x34),0);
    uStack_60 = uStack_28;
    UnityEngine_RectTransform__get_anchoredPosition_Injected(uVar1,&uStack_60,0);
    iVar3 = *(int *)(param_1 + 0x24);
    uVar1 = UnityEngine_GameObject__AddComponent(*(undefined4 *)(param_1 + 0x2c),0);
    if (iVar3 == 0) {
      uVar2 = System_Linq_Enumerable__Count(*(undefined4 *)(param_1 + 0x28),0);
    }
    else {
      uVar2 = System_Linq_Enumerable__Count(param_1,0);
      uVar2 = multiple_3_UnityEngine_Transform__set_localScale(uVar2,0);
      uVar2 = multiple_3_UnityEngine_Transform__set_localScale(uVar2,0);
    }
    UnityEngine_Transform__SetParent(uVar1,uVar2,0,0);
    uVar1 = UnityEngine_GameObject__AddComponent(*(undefined4 *)(param_1 + 0x2c),0);
    HelperUtilities__ValidateCheckPositiveRange(&uStack_38,*(undefined4 *)(param_1 + 0x34),0,0);
    uStack_68 = uStack_30;
    uStack_70 = uStack_38;
    multiple_2_UnityEngine_Transform___ctor(uVar1,&uStack_70,0);
  }
  return;
}



// ---- ItemUI::OnBeginDrag   [wasm func86422 -> ram:81a35e50 ; ghidra: ItemUI::OnBeginDrag]

void ItemUI__OnBeginDrag(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam006648e2 == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam006648e2 = '\x01';
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar1 = UnityEngine_Camera__get_targetTexture(uVar2,0,0);
  if (iVar1 != 0) {
    uVar2 = UnityEngine_GameObject__AddComponent(*(undefined4 *)(param_1 + 0x2c),0);
    HelperUtilities__ValidateCheckPositiveRange(&uStack_10,*(undefined4 *)(param_1 + 0x34),0,0);
    uStack_18 = uStack_8;
    uStack_20 = uStack_10;
    multiple_2_UnityEngine_Transform___ctor(uVar2,&uStack_20,0);
  }
  return;
}



// ---- ItemUI::OnDrag   [wasm func86423 -> ram:81a35eec ; ghidra: ItemUI::OnDrag]

void ItemUI__OnDrag(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam006648e3 == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam006648e3 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    if (cRam006649cf == '\0') {
      unnamed_function_1099(0x55bea4);
      unnamed_function_1099(0x55c894);
      cRam006649cf = '\x01';
    }
    iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x34);
    if (iVar2 != 0) {
      iVar1 = unnamed_function_95402(uRam0055bea4);
      OnInventoryChangedEventArgs___ctor(iVar1,0);
      *(int *)(iVar1 + 8) = param_1;
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                (*(undefined4 *)(iVar2 + 0x20),iVar1,*(undefined4 *)(iVar2 + 0x14));
    }
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    unnamed_function_44782(uVar3,0);
  }
  return;
}



// ---- ItemUI::OnEndDrag   [wasm func86425 -> ram:81a36010 ; ghidra: ItemUI::OnEndDrag]

void ItemUI__OnEndDrag(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (cRam006649d5 == '\0') {
      unnamed_function_1099(0x55bea4);
      unnamed_function_1099(0x55c894);
      cRam006649d5 = '\x01';
    }
    iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x3c);
    if (iVar2 != 0) {
      iVar1 = unnamed_function_95402(uRam0055bea4);
      OnInventoryChangedEventArgs___ctor(iVar1,0);
      *(int *)(iVar1 + 8) = param_1;
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                (*(undefined4 *)(iVar2 + 0x20),iVar1,*(undefined4 *)(iVar2 + 0x14));
    }
  }
  return;
}



// ---- ItemUI::OnPointerClick   [wasm func86427 -> ram:81a360f3 ; ghidra: ItemUI::OnPointerClick]

void ItemUI__OnPointerClick(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (cRam006649d2 == '\0') {
    unnamed_function_1099(0x55bea4);
    unnamed_function_1099(0x55c894);
    cRam006649d2 = '\x01';
  }
  iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x38);
  if (iVar2 != 0) {
    iVar1 = unnamed_function_95402(uRam0055bea4);
    OnInventoryChangedEventArgs___ctor(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = param_1;
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
              (*(undefined4 *)(iVar2 + 0x20),iVar1,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}



// ---- ItemUI::ctor   [wasm func86429 -> ram:81a361cb ; ghidra: ItemUI::.ctor]

void ItemUI___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam006648e4 == '\0') {
    unnamed_function_1099(0x567f0c);
    cRam006648e4 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f0c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



