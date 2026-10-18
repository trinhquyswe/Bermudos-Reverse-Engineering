// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Inventory  (Assembly-CSharp)  -  15 function(s)

// ---- Inventory::Start   [wasm func86338 -> ram:81a31678 ; ghidra: Inventory::Start]

void Inventory__Start(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam006648b3 == '\0') {
    unnamed_function_1099(0x557a3c);
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x56a768);
    unnamed_function_1099(0x56a76c);
    unnamed_function_1099(0x56a770);
    unnamed_function_1099(0x56d380);
    cRam006648b3 = '\x01';
  }
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (cRam00664829 == '\0') {
    unnamed_function_1099(0x55d048);
    cRam00664829 = '\x01';
  }
  uStack_20 = **(undefined8 **)(iRam0055d048 + 0x5c);
  uStack_18 = *(undefined4 *)(*(undefined8 **)(iRam0055d048 + 0x5c) + 1);
  uStack_10 = uStack_20;
  uStack_8 = uStack_18;
  multiple_2_UnityEngine_Transform__get_localScale(uVar1,&uStack_20,0);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar1,0,0);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (cRam00662a53 == '\0') {
    unnamed_function_1099(0x55d048);
    cRam00662a53 = '\x01';
  }
  uStack_28 = *(undefined4 *)(*(int *)(iRam0055d048 + 0x5c) + 0x14);
  uStack_30 = *(undefined8 *)(*(int *)(iRam0055d048 + 0x5c) + 0xc);
  uVar1 = DG_Tweening_ShortcutExtensions__DOLocalRotateQuaternion(uVar1,&uStack_30,0x3f000000,0);
  DG_Tweening_TweenSettingsExtensions__SetEase(uVar1,0x1b,uRam0056d380);
  uVar1 = unnamed_function_95402(uRam00557a3c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056a768,0);
  StaticEventHandler__CallInventoryChangedEvent(uVar1,&uStack_30);
  uVar1 = unnamed_function_95402(uRam00557a3c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056a770,0);
  StaticEventHandler__CallItemUIEndDragChangedEvent(uVar1,&uStack_30);
  uVar1 = unnamed_function_95402(uRam00557a3c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056a76c,0);
  StaticEventHandler__CallItemUIHoverChangedEvent(uVar1,&uStack_30);
  return;
}



// ---- Inventory::OnEnable   [wasm func86342 -> ram:81a31a01 ; ghidra: Inventory::OnEnable]

void Inventory__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648b4 == '\0') {
    unnamed_function_1099(0x557a3c);
    unnamed_function_1099(0x56a768);
    unnamed_function_1099(0x56a76c);
    unnamed_function_1099(0x56a770);
    cRam006648b4 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a3c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056a768,0);
  StaticEventHandler__add_OnItemUIEndDragChanged(uVar1,param_1);
  uVar1 = unnamed_function_95402(uRam00557a3c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056a770,0);
  StaticEventHandler__add_OnItemUIHoverChanged(uVar1,param_1);
  uVar1 = unnamed_function_95402(uRam00557a3c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056a76c,0);
  StaticEventHandler__add_OnItemUIClickChanged(uVar1,param_1);
  return;
}



// ---- Inventory::OnDisable   [wasm func86346 -> ram:81a31c6e ; ghidra: Inventory::OnDisable]

void Inventory__OnDisable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648b5 == '\0') {
    unnamed_function_1099(0x55a7d4);
    cRam006648b5 = '\x01';
  }
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__KillAll_1(uVar1,0,0);
  return;
}



// ---- Inventory::OnDestroy   [wasm func86347 -> ram:81a31cbb ; ghidra: Inventory::OnDestroy]

void Inventory__OnDestroy(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iStack_20;
  undefined8 *puStack_1c;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam006648b6 == '\0') {
    unnamed_function_1099(0x561290);
    unnamed_function_1099(0x561294);
    unnamed_function_1099(0x561298);
    unnamed_function_1099(0x56341c);
    unnamed_function_1099(0x563448);
    cRam006648b6 = '\x01';
  }
  UnityEngine_ComputeBuffer__Release(&iStack_20,*(undefined4 *)(param_1 + 0x10),uRam00563448);
  uStack_8 = uStack_18;
  uStack_10 = CONCAT44(puStack_1c,iStack_20);
  iStack_20 = 0;
  puStack_1c = &uStack_10;
code_r0x81a31d62:
  do {
    iRam005ddf34 = 0;
    iVar1 = import::env::invoke_iii(0x483,&uStack_10,uRam00561294);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar3 == 1) {
      uVar2 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a31e47;
    }
    if (iVar1 == 0) {
      iVar1 = 5;
      iVar3 = iStack_20;
      goto code_r0x81a31e93;
    }
    iVar3 = uStack_8._4_4_;
    if (*(int *)(uStack_8._4_4_ + 0x20) != 0) {
      iRam005ddf34 = 0;
      iVar5 = import::env::invoke_iiii(0x862,param_2,*(int *)(uStack_8._4_4_ + 0x20),uRam0056341c);
      iVar1 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar1 == 1) {
        uVar2 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a31e47;
      }
      if (iVar5 != 0) goto code_r0x81a31d62;
    }
    iRam005ddf34 = 0;
    import::env::invoke_vii(0x3656,iVar3,&iStack_20);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
  } while (iVar3 != 1);
  uVar2 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a31e47:
  iVar3 = import::env::getTempRet0();
  iVar1 = import::env::llvm_eh_typeid_for(0x4a99ec);
  if (iVar3 == iVar1) {
    piVar4 = (int *)import::env::__cxa_begin_catch(uVar2);
    iVar3 = *piVar4;
    iVar1 = 0;
    iRam005ddf34 = 0;
    iStack_20 = iVar3;
    import::env::invoke_v(0x3a);
    iVar5 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar5 != 1) {
code_r0x81a31e93:
      iRam005ddf34 = 0;
      if (iVar3 != 0) {
        System_Net_CommandStream__ReceiveCommandResponseCallback(iVar3);
        do {
          halt_trap();
        } while( true );
      }
      if ((iVar1 != 0) &&
         ((((iVar1 == 1 || (iVar1 == 2)) || (iVar1 == 3)) || ((iVar1 == 4 || (iVar1 != 5)))))) {
        iRam005ddf34 = 0;
        return;
      }
      UnityEngine_ComputeBuffer__Release(&iStack_20,*(undefined4 *)(param_1 + 0x14),uRam00563448);
      uStack_8 = uStack_18;
      uStack_10 = CONCAT44(puStack_1c,iStack_20);
      iStack_20 = 0;
      puStack_1c = &uStack_10;
code_r0x81a31f2d:
      do {
        iRam005ddf34 = 0;
        iVar1 = import::env::invoke_iii(0x483,&uStack_10,uRam00561294);
        iVar3 = iRam005ddf34;
        iRam005ddf34 = 0;
        if (iVar3 == 1) {
          uVar2 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
          goto code_r0x81a32015;
        }
        iVar3 = iStack_20;
        if (iVar1 == 0) goto code_r0x81a3205d;
        iVar3 = uStack_8._4_4_;
        if (*(int *)(uStack_8._4_4_ + 0x20) != 0) {
          iRam005ddf34 = 0;
          iVar5 = import::env::invoke_iiii
                            (0x862,param_2,*(int *)(uStack_8._4_4_ + 0x20),uRam0056341c);
          iVar1 = iRam005ddf34;
          iRam005ddf34 = 0;
          if (iVar1 == 1) {
            uVar2 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
            goto code_r0x81a32015;
          }
          if (iVar5 != 0) goto code_r0x81a31f2d;
        }
        iRam005ddf34 = 0;
        import::env::invoke_vii(0x3656,iVar3,&iStack_20);
        iVar3 = iRam005ddf34;
        iRam005ddf34 = 0;
      } while (iVar3 != 1);
      uVar2 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a32015:
      iVar3 = import::env::getTempRet0();
      iVar1 = import::env::llvm_eh_typeid_for(0x4a99ec);
      if (iVar3 == iVar1) {
        piVar4 = (int *)import::env::__cxa_begin_catch(uVar2);
        iVar3 = *piVar4;
        iRam005ddf34 = 0;
        iStack_20 = iVar3;
        import::env::invoke_v(0x3a);
        iVar1 = iRam005ddf34;
        iRam005ddf34 = 0;
        if (iVar1 != 1) {
code_r0x81a3205d:
          iRam005ddf34 = 0;
          if (iVar3 == 0) {
            iRam005ddf34 = 0;
            return;
          }
          System_Net_CommandStream__ReceiveCommandResponseCallback(iVar3);
          do {
            halt_trap();
          } while( true );
        }
        uVar2 = import::env::__cxa_find_matching_catch_2();
        import::env::getTempRet0();
      }
      iRam005ddf34 = 0;
      import::env::invoke_ii(0x3658,&iStack_20);
      goto joined_r0x81a320ae;
    }
    uVar2 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  iRam005ddf34 = 0;
  import::env::invoke_ii(0x3657,&iStack_20);
joined_r0x81a320ae:
  if (iRam005ddf34 != 1) {
    iRam005ddf34 = 0;
    import::env::__resumeException(uVar2);
    do {
      halt_trap();
    } while( true );
  }
  iRam005ddf34 = 0;
  import::env::__cxa_find_matching_catch_3(0);
  import::env::getTempRet0();
  unnamed_function_642();
  do {
    halt_trap();
  } while( true );
}



// ---- Inventory::ResetInventory   [wasm func86350 -> ram:81a321af ; ghidra: Inventory::ResetInventory]

void Inventory__ResetInventory(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (cRam006648b7 == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam006648b7 = '\x01';
  }
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 8);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  piVar2 = (int *)(param_1 + 0x2c);
  iVar1 = unnamed_function_44710(uVar5,0,0);
  if (iVar1 == 0) {
    iVar3 = *piVar2;
    iVar4 = *(int *)(param_1 + 0x30);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    iVar3 = UnityEngine_Camera__get_targetTexture(iVar4,iVar3,0);
    if (iVar3 == 0) {
      return;
    }
    uVar5 = unnamed_function_44644(*(undefined4 *)(*piVar2 + 0x14),0);
    unnamed_function_44686(uVar5,1,0);
    piVar2 = (int *)(param_1 + 0x30);
  }
  uVar5 = unnamed_function_44644(*(undefined4 *)(*piVar2 + 0x14),0);
  unnamed_function_44686(uVar5,iVar1,0);
  return;
}



// ---- Inventory::StaticEventHandler_OnItemUIClickChanged   [wasm func86351 -> ram:81a32284 ; ghidra: Inventory::StaticEventHandler_OnItemUIClickChanged]

void Inventory__StaticEventHandler_OnItemUIClickChanged(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 8);
  return;
}



// ---- Inventory::StaticEventHandler_OnItemUIChanged   [wasm func86352 -> ram:81a32291 ; ghidra: Inventory::StaticEventHandler_OnItemUIChanged]

void Inventory__StaticEventHandler_OnItemUIChanged(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam006648b8 == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam006648b8 = '\x01';
  }
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar1 = UnityEngine_Camera__get_targetTexture(uVar2,0,0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 8);
    Inventory__StaticEventHandler_OnItemUIHoverChanged(param_1,param_1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}



// ---- Inventory::StaticEventHandler_OnItemUIHoverChanged   [wasm func86353 -> ram:81a322f9 ; ghidra: Inventory::StaticEventHandler_OnItemUIHoverChanged]

void Inventory__StaticEventHandler_OnItemUIHoverChanged(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined1 uStack_1;
  
  if (cRam006648b9 == '\0') {
    unnamed_function_1099(0x55a328);
    unnamed_function_1099(0x55a9bc);
    unnamed_function_1099(0x55be2c);
    cRam006648b9 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar1 = unnamed_function_44710(uVar4,uVar3,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x24);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(iVar1 + 0x24) == 0) {
      if (*(char *)(iVar1 + 0x30) == '\0') {
        Inventory__SwapTwoItemUI(param_1,0,param_1);
        uVar3 = unnamed_function_44644(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18),0);
        unnamed_function_44686(uVar3,0,0);
        uVar3 = unnamed_function_44644(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x1c),0);
        unnamed_function_44686(uVar3,0,0);
        *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x30) = 0;
        return;
      }
      Inventory__MoveAndSwapItemUI(param_1,0,param_1);
      return;
    }
    if (*(int *)(iVar1 + 0x24) == 1) {
      uStack_1 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x20) + 0x18);
      uVar3 = unnamed_function_1113(uRam0055a328,&uStack_1);
      if (*(int *)(iRam0055a9bc + 0x74) == 0) {
        unnamed_function_94848(iRam0055a9bc);
      }
      UnityEngine_InputSystem_Layouts_InputControlLayout_Collection__TryLoadLayout(uVar3,0);
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x24) + 0x20) + 0x18) != '\0') {
        return;
      }
      uVar3 = unnamed_function_44644(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),0);
      unnamed_function_44686(uVar3,1,0);
      uVar3 = unnamed_function_44644(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1c),0);
      unnamed_function_44686(uVar3,1,0);
      unnamed_function_16520
                (*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x18) + 0x80),0);
      piVar5 = *(int **)(*(int *)(param_1 + 0x28) + 0x1c);
      piVar6 = *(int **)(*(int *)(param_1 + 0x24) + 0x1c);
      iVar1 = *piVar6;
      uVar3 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2c8) * 4))
                        (piVar6,*(undefined4 *)(iVar1 + 0x2cc));
      iVar1 = *piVar5;
      (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
                (piVar5,uVar3,*(undefined4 *)(iVar1 + 0x2d4));
      iVar1 = *(int *)(param_1 + 0x28);
      iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 0x20);
      *(int *)(iVar1 + 0x20) = iVar7;
      uVar3 = *(undefined4 *)(iVar1 + 0x10);
      *(undefined1 *)(iVar7 + 0x18) = 1;
      *(undefined4 *)(iVar7 + 0x14) = uVar3;
      if (cRam006649db == '\0') {
        unnamed_function_1099(0x55bea0);
        unnamed_function_1099(0x55c894);
        cRam006649db = '\x01';
      }
      iVar1 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x44);
      if (iVar1 == 0) {
        return;
      }
      iVar2 = unnamed_function_95402(uRam0055bea0);
      ItemConsumer__UsePotion(iVar2,0);
      *(int *)(iVar2 + 8) = iVar7;
      (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
                (*(undefined4 *)(iVar1 + 0x20),iVar2,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(iVar1 + 0x24) == 0) {
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  if (*(char *)(iVar1 + 0x30) == '\0') {
    Inventory__SwapTwoItemUI(param_1,1,param_1);
  }
  else {
    Inventory__MoveAndSwapItemUI(param_1,1,param_1);
  }
  return;
}



// ---- Inventory::MoveAndSwapItemUI   [wasm func86354 -> ram:81a3258a ; ghidra: Inventory::MoveAndSwapItemUI]

void Inventory__MoveAndSwapItemUI(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if (cRam006648ba == '\0') {
    unnamed_function_1099(0x55a9bc);
    cRam006648ba = '\x01';
  }
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x18) + 0x80);
  piVar4 = *(int **)(*(int *)(param_1 + 0x24) + 0x1c);
  iVar5 = *piVar4;
  uVar1 = (**(code **)((ulonglong)*(uint *)(iVar5 + 0x2c8) * 4))
                    (piVar4,*(undefined4 *)(iVar5 + 0x2cc));
  iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 0x20);
  unnamed_function_16520
            (*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18),
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 0x80),0);
  piVar4 = *(int **)(*(int *)(param_1 + 0x24) + 0x1c);
  piVar6 = *(int **)(*(int *)(param_1 + 0x28) + 0x1c);
  iVar7 = *piVar6;
  uVar2 = (**(code **)((ulonglong)*(uint *)(iVar7 + 0x2c8) * 4))
                    (piVar6,*(undefined4 *)(iVar7 + 0x2cc));
  iVar7 = *piVar4;
  (**(code **)((ulonglong)*(uint *)(iVar7 + 0x2d0) * 4))
            (piVar4,uVar2,*(undefined4 *)(iVar7 + 0x2d4));
  iVar7 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  *(int *)(*(int *)(param_1 + 0x24) + 0x20) = iVar7;
  uVar2 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(iVar7 + 0x10,0);
  uVar2 = Mono_Security_X509_X509Crl_X509CrlEntry___ctor
                    (uVar2,*(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x20) + 8) + 0xc),0);
  if (*(int *)(iRam0055a9bc + 0x74) == 0) {
    unnamed_function_94848(iRam0055a9bc);
  }
  UnityEngine_InputSystem_Layouts_InputControlLayout_Collection__TryLoadLayout(uVar2,0);
  iVar7 = 0x14;
  if (param_2 == 0) {
    iVar7 = 0x10;
  }
  *(undefined4 *)(iVar7 + *(int *)(*(int *)(param_1 + 0x24) + 0x20)) =
       *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
  unnamed_function_16520(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),uVar3,0);
  piVar4 = *(int **)(*(int *)(param_1 + 0x28) + 0x1c);
  iVar8 = *piVar4;
  (**(code **)((ulonglong)*(uint *)(iVar8 + 0x2d0) * 4))
            (piVar4,uVar1,*(undefined4 *)(iVar8 + 0x2d4));
  iVar8 = *(int *)(param_1 + 0x28);
  *(int *)(iVar8 + 0x20) = iVar5;
  *(undefined4 *)(iVar7 + iVar5) = *(undefined4 *)(iVar8 + 0x10);
  return;
}



// ---- Inventory::SwapTwoItemUI   [wasm func86355 -> ram:81a326f1 ; ghidra: Inventory::SwapTwoItemUI]

void Inventory__SwapTwoItemUI(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = unnamed_function_44644(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1c),0);
  unnamed_function_44686(uVar1,1,0);
  unnamed_function_16520
            (*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x18) + 0x80),0);
  piVar2 = *(int **)(*(int *)(param_1 + 0x28) + 0x1c);
  piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 0x1c);
  iVar7 = *piVar3;
  uVar1 = (**(code **)((ulonglong)*(uint *)(iVar7 + 0x2c8) * 4))
                    (piVar3,*(undefined4 *)(iVar7 + 0x2cc));
  iVar7 = *piVar2;
  (**(code **)((ulonglong)*(uint *)(iVar7 + 0x2d0) * 4))
            (piVar2,uVar1,*(undefined4 *)(iVar7 + 0x2d4));
  iVar7 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(iVar4 + 0x20);
  *(int *)(iVar7 + 0x20) = iVar5;
  iVar6 = 0x14;
  if (param_2 == 0) {
    iVar6 = 0x10;
  }
  *(undefined4 *)(iVar5 + iVar6) = *(undefined4 *)(iVar7 + 0x10);
  *(undefined1 *)(iVar7 + 0x30) = 1;
  uVar1 = unnamed_function_44644(*(undefined4 *)(iVar4 + 0x18),0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x1c),0);
  unnamed_function_44686(uVar1,0,0);
  iVar7 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar7 + 0x20) = 0;
  *(undefined1 *)(iVar7 + 0x30) = 0;
  return;
}



// ---- Inventory::SwapItemUIWithEmptySlot   [wasm func86356 -> ram:81a327e4 ; ghidra: Inventory::SwapItemUIWithEmptySlot]

void Inventory__SwapItemUIWithEmptySlot(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = unnamed_function_44644(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1c),0);
  unnamed_function_44686(uVar1,1,0);
  unnamed_function_16520
            (*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x18) + 0x80),0);
  piVar2 = *(int **)(*(int *)(param_1 + 0x28) + 0x1c);
  piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 0x1c);
  iVar5 = *piVar3;
  uVar1 = (**(code **)((ulonglong)*(uint *)(iVar5 + 0x2c8) * 4))
                    (piVar3,*(undefined4 *)(iVar5 + 0x2cc));
  iVar5 = *piVar2;
  (**(code **)((ulonglong)*(uint *)(iVar5 + 0x2d0) * 4))
            (piVar2,uVar1,*(undefined4 *)(iVar5 + 0x2d4));
  iVar5 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x20);
  *(int *)(iVar5 + 0x20) = iVar4;
  uVar1 = *(undefined4 *)(iVar5 + 0x10);
  *(undefined1 *)(iVar4 + 0x18) = 1;
  *(undefined4 *)(iVar4 + 0x14) = uVar1;
  return;
}



// ---- Inventory::MoveItemToHotBar   [wasm func86358 -> ram:81a32902 ; ghidra: Inventory::MoveItemToHotBar]

void Inventory__MoveItemToHotBar(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iStack_4;
  
  if (cRam006648bb == '\0') {
    unnamed_function_1099(0x569ac0);
    unnamed_function_1099(0x563444);
    unnamed_function_1099(0x56b51c);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x5773f4);
    cRam006648bb = '\x01';
  }
  iStack_4 = 0;
  if (0 < param_2) {
    do {
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(iRam0055be2c + 0x74) == 0) {
        unnamed_function_94848(iRam0055be2c);
      }
      uVar5 = unnamed_function_51907(uVar5,uRam0056b51c);
      uVar2 = UnityEngine_GameObject__AddComponent(uVar5,0);
      uVar3 = UnityEngine_GameObject__AddComponent(*(undefined4 *)(param_1 + 0x1c),0);
      UnityEngine_Transform__SetParent(uVar2,uVar3,0,0);
      uVar2 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(&iStack_4,0);
      uVar2 = Mono_Security_X509_X509Crl_X509CrlEntry___ctor(uRam005773f4,uVar2,0);
      UnityEngine_Object__Instantiate(uVar5,uVar2,0);
      iVar4 = UnityEngine_Object__set_name(uVar5,uRam00569ac0);
      *(int *)(iVar4 + 0x10) = iStack_4;
      *(undefined1 *)(iVar4 + 0x30) = 0;
      *(undefined8 *)(iVar4 + 0x20) = 0;
      iVar1 = iRam00563444;
      iVar6 = *(int *)(param_1 + 0x10);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      uVar7 = *(uint *)(iVar6 + 0xc);
      if (uVar7 < *(uint *)(*(int *)(iVar6 + 8) + 0xc)) {
        *(uint *)(iVar6 + 0xc) = uVar7 + 1;
        *(int *)(*(int *)(iVar6 + 8) + uVar7 * 4 + 0x10) = iVar4;
      }
      else {
        System_String__Substring
                  (iVar6,iVar4,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
      }
      iStack_4 = iStack_4 + 1;
    } while (iStack_4 < param_2);
  }
  return;
}



// ---- Inventory::InitializeInventorySlotList   [wasm func86359 -> ram:81a32a75 ; ghidra: Inventory::InitializeInventorySlotList]

void Inventory__InitializeInventorySlotList(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iStack_4;
  
  if (cRam006648bc == '\0') {
    unnamed_function_1099(0x569ac0);
    unnamed_function_1099(0x563444);
    unnamed_function_1099(0x56b51c);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x5773f4);
    cRam006648bc = '\x01';
  }
  iStack_4 = 0;
  if (0 < param_2) {
    do {
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(iRam0055be2c + 0x74) == 0) {
        unnamed_function_94848(iRam0055be2c);
      }
      uVar5 = unnamed_function_51907(uVar5,uRam0056b51c);
      uVar2 = UnityEngine_GameObject__AddComponent(uVar5,0);
      uVar3 = UnityEngine_GameObject__AddComponent(*(undefined4 *)(param_1 + 0x20),0);
      UnityEngine_Transform__SetParent(uVar2,uVar3,0,0);
      uVar2 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(&iStack_4,0);
      uVar2 = Mono_Security_X509_X509Crl_X509CrlEntry___ctor(uRam005773f4,uVar2,0);
      UnityEngine_Object__Instantiate(uVar5,uVar2,0);
      iVar4 = UnityEngine_Object__set_name(uVar5,uRam00569ac0);
      *(int *)(iVar4 + 0x10) = iStack_4;
      *(undefined1 *)(iVar4 + 0x30) = 0;
      *(undefined8 *)(iVar4 + 0x20) = 0x100000000;
      iVar1 = iRam00563444;
      iVar6 = *(int *)(param_1 + 0x14);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      uVar7 = *(uint *)(iVar6 + 0xc);
      if (uVar7 < *(uint *)(*(int *)(iVar6 + 8) + 0xc)) {
        *(uint *)(iVar6 + 0xc) = uVar7 + 1;
        *(int *)(*(int *)(iVar6 + 8) + uVar7 * 4 + 0x10) = iVar4;
      }
      else {
        System_String__Substring
                  (iVar6,iVar4,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
      }
      iStack_4 = iStack_4 + 1;
    } while (iStack_4 < param_2);
  }
  return;
}



// ---- Inventory::InitializeHotBarSlotList   [wasm func86360 -> ram:81a32beb ; ghidra: Inventory::InitializeHotBarSlotList]

void Inventory__InitializeHotBarSlotList(int param_1)

{
  undefined4 uVar1;
  
  if (cRam006648bd == '\0') {
    unnamed_function_1099(0x563440);
    unnamed_function_1099(0x558f9c);
    cRam006648bd = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00558f9c);
  multiple_2_System_Collections_Generic_List_1___cctor(uVar1,uRam00563440);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = unnamed_function_95402(uRam00558f9c);
  multiple_2_System_Collections_Generic_List_1___cctor(uVar1,uRam00563440);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- Inventory::ctor   [wasm func86361 -> ram:81a32c5c ; ghidra: Inventory::.ctor]

void Inventory___ctor(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648be == '\0') {
    unnamed_function_1099(0x557a3c);
    unnamed_function_1099(0x56a774);
    cRam006648be = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a3c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056a774,0);
  StaticEventHandler__CallItemUIHoverChangedEvent(uVar1,param_1);
  return;
}



