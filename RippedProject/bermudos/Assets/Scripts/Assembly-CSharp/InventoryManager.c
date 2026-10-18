// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: InventoryManager  (Assembly-CSharp)  -  14 function(s)

// ---- InventoryManager::get_HotBarItem   [wasm func86364 -> ram:81a32dca ; ghidra: InventoryManager::get_HotBarItem]

void InventoryManager__get_HotBarItem(int param_1)

{
  undefined4 uVar1;
  
  if (cRam006648c2 == '\0') {
    unnamed_function_1099(0x567f1c);
    cRam006648c2 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = Esper_ESave_SaveFileSetup__GenerateAESTokens(uVar1,0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



// ---- InventoryManager::Awake   [wasm func86365 -> ram:81a32e0e ; ghidra: InventoryManager::Awake]

void InventoryManager__Awake(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam006648c3 == '\0') {
    unnamed_function_1099(0x557a34);
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x56a778);
    unnamed_function_1099(0x56a77c);
    unnamed_function_1099(0x56a780);
    unnamed_function_1099(0x565d78);
    cRam006648c3 = '\x01';
  }
  iVar5 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar6 = **(int **)(iVar5 + 0x5c);
  uVar7 = *(undefined4 *)(iVar6 + 0x20);
  uVar2 = unnamed_function_95402(uRam005579ec);
  unnamed_function_60038(uVar2,param_1,uRam0056a778,0);
  iVar5 = unnamed_function_85158(uVar7,uVar2,0);
  uVar2 = uRam005579ec;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar6 + 0x20) = 0;
  }
  else {
    iVar3 = unnamed_function_1112(iVar5,uRam005579ec);
    if (iVar3 == 0) {
      unnamed_function_1116(iVar5,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar6 + 0x20) = iVar3;
    uVar2 = uRam005579ec;
    iVar6 = unnamed_function_1112(iVar5,uRam005579ec);
    if (iVar6 == 0) {
      unnamed_function_1116(iVar5,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  uVar2 = unnamed_function_95402(uRam00557a34);
  UnityEngine_UIElements_VisualElement__get_layout(uVar2,param_1,uRam0056a780,0);
  StaticEventHandler__CallExitEvent(uVar2,param_1);
  uVar2 = unnamed_function_95402(iRam00559fb4);
  unnamed_function_82700(uVar2,param_1,uRam0056a77c,0);
  if (cRam006649c7 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x55c894);
    cRam006649c7 = '\x01';
  }
  iVar5 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x2c);
  while ((piVar4 = (int *)unnamed_function_85158(iVar5,uVar2,0), piVar4 == (int *)0x0 ||
         (iRam00559fb4 == *piVar4))) {
    iVar6 = System_Net_WebOperation___ctor(*(int *)(iRam0055c894 + 0x5c) + 0x2c,piVar4,iVar5);
    bVar1 = iVar5 == iVar6;
    iVar5 = iVar6;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(piVar4,iRam00559fb4);
  do {
    halt_trap();
  } while( true );
}



// ---- InventoryManager::OnEnable   [wasm func86368 -> ram:81a3311b ; ghidra: InventoryManager::OnEnable]

void InventoryManager__OnEnable(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam006648c4 == '\0') {
    unnamed_function_1099(0x557a34);
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x56a778);
    unnamed_function_1099(0x56a77c);
    unnamed_function_1099(0x56a780);
    unnamed_function_1099(0x565d78);
    cRam006648c4 = '\x01';
  }
  iVar5 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar6 = **(int **)(iVar5 + 0x5c);
  uVar7 = *(undefined4 *)(iVar6 + 0x20);
  uVar2 = unnamed_function_95402(uRam005579ec);
  unnamed_function_60038(uVar2,param_1,uRam0056a778,0);
  iVar5 = unnamed_function_85160(uVar7,uVar2,0);
  uVar2 = uRam005579ec;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar6 + 0x20) = 0;
  }
  else {
    iVar3 = unnamed_function_1112(iVar5,uRam005579ec);
    if (iVar3 == 0) {
      unnamed_function_1116(iVar5,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar6 + 0x20) = iVar3;
    uVar2 = uRam005579ec;
    iVar6 = unnamed_function_1112(iVar5,uRam005579ec);
    if (iVar6 == 0) {
      unnamed_function_1116(iVar5,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  uVar2 = unnamed_function_95402(uRam00557a34);
  UnityEngine_UIElements_VisualElement__get_layout(uVar2,param_1,uRam0056a780,0);
  StaticEventHandler__add_OnInventoryChanged(uVar2,param_1);
  uVar2 = unnamed_function_95402(iRam00559fb4);
  unnamed_function_82700(uVar2,param_1,uRam0056a77c,0);
  if (cRam006649c8 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x55c894);
    cRam006649c8 = '\x01';
  }
  iVar5 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x2c);
  while ((piVar4 = (int *)unnamed_function_85160(iVar5,uVar2,0), piVar4 == (int *)0x0 ||
         (iRam00559fb4 == *piVar4))) {
    iVar6 = System_Net_WebOperation___ctor(*(int *)(iRam0055c894 + 0x5c) + 0x2c,piVar4,iVar5);
    bVar1 = iVar5 == iVar6;
    iVar5 = iVar6;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(piVar4,iRam00559fb4);
  do {
    halt_trap();
  } while( true );
}



// ---- InventoryManager::OnDisable   [wasm func86371 -> ram:81a33428 ; ghidra: InventoryManager::OnDisable]

void InventoryManager__OnDisable(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (cRam006648c5 == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x56a778);
    unnamed_function_1099(0x565d78);
    cRam006648c5 = '\x01';
  }
  if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = **(int **)(iVar3 + 0x5c);
    uVar4 = *(undefined4 *)(iVar3 + 0x20);
    uVar1 = unnamed_function_95402(uRam005579ec);
    unnamed_function_60038(uVar1,param_1,uRam0056a778,0);
    piVar5 = (int *)(iVar3 + 0x20);
    iVar3 = unnamed_function_85160(uVar4,uVar1,0);
    uVar1 = uRam005579ec;
    if (iVar3 != 0) {
      iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
      if (iVar2 == 0) {
        unnamed_function_1116(iVar3,uVar1);
        do {
          halt_trap();
        } while( true );
      }
      *piVar5 = iVar2;
      uVar1 = uRam005579ec;
      iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
      if (iVar2 != 0) {
        return;
      }
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
  }
  else {
    if (param_2 != 3) {
      return;
    }
    InventoryManager__CollectIntentoryItem(param_1,param_1);
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = **(int **)(iVar3 + 0x5c);
    uVar4 = *(undefined4 *)(iVar3 + 0x20);
    uVar1 = unnamed_function_95402(uRam005579ec);
    unnamed_function_60038(uVar1,param_1,uRam0056a778,0);
    piVar5 = (int *)(iVar3 + 0x20);
    iVar3 = unnamed_function_85160(uVar4,uVar1,0);
    uVar1 = uRam005579ec;
    if (iVar3 != 0) {
      iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
      if (iVar2 == 0) {
        unnamed_function_1116(iVar3,uVar1);
        do {
          halt_trap();
        } while( true );
      }
      *piVar5 = iVar2;
      uVar1 = uRam005579ec;
      iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
      if (iVar2 != 0) {
        return;
      }
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
  }
  *piVar5 = 0;
  return;
}



// ---- InventoryManager::CollectIntentoryItem   [wasm func86372 -> ram:81a335ff ; ghidra: InventoryManager::CollectIntentoryItem]

/* WARNING: Removing unreachable block (ram,0x81a337cd) */

void InventoryManager__CollectIntentoryItem(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iStack_18;
  undefined8 *puStack_14;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam006648c9 == '\0') {
    unnamed_function_1099(0x561284);
    unnamed_function_1099(0x561288);
    unnamed_function_1099(0x56128c);
    unnamed_function_1099(0x55b734);
    unnamed_function_1099(0x563418);
    unnamed_function_1099(0x563434);
    unnamed_function_1099(0x56c1c0);
    cRam006648c9 = '\x01';
  }
  uStack_8 = 0;
  uStack_10 = 0;
  UnityEngine_ComputeBuffer__Release(&uStack_10,*(undefined4 *)(param_1 + 0x14),uRam00563434);
  iStack_18 = 0;
  puStack_14 = &uStack_10;
  while( true ) {
    do {
      iRam005ddf34 = 0;
      iVar1 = import::env::invoke_iii(0x483,&uStack_10,uRam00561288);
      iVar4 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar4 == 1) {
        uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a338c3;
      }
      iVar4 = iStack_18;
      if (iVar1 == 0) goto code_r0x81a3390b;
      iVar1 = uStack_8._4_4_;
      iRam005ddf34 = 0;
      iVar2 = import::env::invoke_iiii
                        (0x3659,*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(uStack_8._4_4_ + 0xc),0);
      iVar4 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar4 == 1) {
        uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a338c3;
      }
    } while (iVar2 == 0);
    iRam005ddf34 = 0;
    iVar2 = import::env::invoke_iiiii
                      (0x365a,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(iVar1 + 0xc),0,
                       uRam0056c1c0);
    iVar4 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar4 == 1) break;
    iRam005ddf34 = 0;
    iVar4 = import::env::invoke_ii(0x10c,uRam0055b734);
    if (iRam005ddf34 == 1) {
      iRam005ddf34 = 0;
      uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a338c3;
    }
    *(int *)(iVar4 + 8) = iVar1;
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined1 *)(iVar4 + 0x18) = *(undefined1 *)(iVar2 + 0x14);
    iVar1 = iRam00563418;
    iVar2 = *(int *)(param_1 + 0x10);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    uVar6 = *(uint *)(iVar2 + 0xc);
    if (uVar6 < *(uint *)(*(int *)(iVar2 + 8) + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar6 + 1;
      *(int *)(*(int *)(iVar2 + 8) + uVar6 * 4 + 0x10) = iVar4;
    }
    else {
      iRam005ddf34 = 0;
      import::env::invoke_viii
                (0x481,iVar2,iVar4,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
      iVar4 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar4 == 1) {
        uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a338c3:
        iVar4 = import::env::getTempRet0();
        iVar1 = import::env::llvm_eh_typeid_for(0x4a99ec);
        if (iVar4 == iVar1) {
          piVar5 = (int *)import::env::__cxa_begin_catch(uVar3);
          iVar4 = *piVar5;
          iRam005ddf34 = 0;
          iStack_18 = iVar4;
          import::env::invoke_v(0x3a);
          iVar1 = iRam005ddf34;
          iRam005ddf34 = 0;
          if (iVar1 != 1) {
code_r0x81a3390b:
            iRam005ddf34 = 0;
            if (iVar4 != 0) {
              System_Net_CommandStream__ReceiveCommandResponseCallback(iVar4);
              do {
                halt_trap();
              } while( true );
            }
            return;
          }
          uVar3 = import::env::__cxa_find_matching_catch_2();
          import::env::getTempRet0();
        }
        iRam005ddf34 = 0;
        import::env::invoke_ii(0x365b,&iStack_18);
        iVar4 = iRam005ddf34;
        iRam005ddf34 = 0;
        if (iVar4 != 1) {
          import::env::__resumeException(uVar3);
          do {
            halt_trap();
          } while( true );
        }
        import::env::__cxa_find_matching_catch_3(0);
        import::env::getTempRet0();
        unnamed_function_642();
        do {
          halt_trap();
        } while( true );
      }
    }
  }
  uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
  goto code_r0x81a338c3;
}



// ---- InventoryManager::Instance_OnGameStateChange   [wasm func86374 -> ram:81a339a1 ; ghidra: InventoryManager::Instance_OnGameStateChange]

void InventoryManager__Instance_OnGameStateChange(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = unnamed_function_44644(uVar1,0);
  unnamed_function_44686(uVar1,0,0);
  Inventory__MoveItemToHotBar(*(undefined4 *)(param_1 + 0x18),0x46,param_1);
  Inventory__InitializeInventorySlotList(*(undefined4 *)(param_1 + 0x18),10,param_1);
  return;
}



// ---- InventoryManager::Start   [wasm func86375 -> ram:81a339dc ; ghidra: InventoryManager::Start]

void InventoryManager__Start(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam006648c6 == '\0') {
    unnamed_function_1099(0x563428);
    unnamed_function_1099(0x570a3c);
    cRam006648c6 = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x18),0);
  iVar2 = UnityEngine_GameObject__set_layer(uVar1,0);
  if (iVar2 == 0) {
    Inventory__OnDestroy(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),param_1);
    InventoryManager__ToggleInventory(param_1,param_1);
    if ((*(char *)(param_1 + 0x2c) != '\0') && (0 < *(int *)(*(int *)(param_1 + 0x10) + 0xc))) {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      if (cRam006649de == '\0') {
        unnamed_function_1099(0x55c894);
        cRam006649de = '\x01';
      }
      iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x48);
      if (iVar2 != 0) {
        (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                  (*(undefined4 *)(iVar2 + 0x20),uVar1,0xffffffff,1,*(undefined4 *)(iVar2 + 0x14));
      }
    }
    uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x18),0);
    unnamed_function_44686(uVar1,1,0);
  }
  else {
    uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x18),0);
    unnamed_function_44686(uVar1,0,0);
    iVar2 = InventoryDescription___ctor(param_1,param_1);
    if (0 < *(int *)(iVar2 + 0xc)) {
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    uVar1 = uRam00570a3c;
    if (cRam006649de == '\0') {
      unnamed_function_1099(0x55c894);
      cRam006649de = '\x01';
    }
    iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x48);
    if (iVar2 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                (*(undefined4 *)(iVar2 + 0x20),uVar1,0xfffffff7,0,*(undefined4 *)(iVar2 + 0x14));
      return;
    }
  }
  return;
}



// ---- InventoryManager::ToggleInventory   [wasm func86376 -> ram:81a33b31 ; ghidra: InventoryManager::ToggleInventory]

void InventoryManager__ToggleInventory(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iStack_20;
  undefined8 *puStack_1c;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  iVar6 = 0;
  if (cRam006648c7 == '\0') {
    unnamed_function_1099(0x561290);
    unnamed_function_1099(0x561294);
    unnamed_function_1099(0x561298);
    unnamed_function_1099(0x563448);
    unnamed_function_1099(0x563428);
    unnamed_function_1099(0x56344c);
    unnamed_function_1099(0x56342c);
    cRam006648c7 = '\x01';
  }
  uStack_8 = 0;
  uStack_10 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (0 < *(int *)(iVar4 + 0xc)) {
    do {
      iVar4 = unnamed_function_6529(iVar4,iVar6,uRam0056342c);
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
      if (*(int *)(iVar4 + 0x10) < 0) {
        UnityEngine_ComputeBuffer__Release(&iStack_20,uVar5,uRam00563448);
        uStack_8 = uStack_18;
        uStack_10 = CONCAT44(puStack_1c,iStack_20);
        iStack_20 = 0;
        puStack_1c = &uStack_10;
        do {
          iRam005ddf34 = 0;
          iVar1 = import::env::invoke_iii(0x483,&uStack_10,uRam00561294);
          iVar2 = iRam005ddf34;
          iRam005ddf34 = 0;
          if (iVar2 == 1) goto code_r0x81a33e9c;
          if (iVar1 == 0) goto code_r0x81a33ef8;
          iVar2 = uStack_8._4_4_;
        } while (*(char *)(uStack_8._4_4_ + 0x30) != '\0');
        iRam005ddf34 = 0;
        uVar5 = import::env::invoke_iii(0x883,*(undefined4 *)(uStack_8._4_4_ + 0x18),0);
        if (iRam005ddf34 != 1) {
          iRam005ddf34 = 0;
          import::env::invoke_viii(0x1f32,uVar5,1,0);
          if (iRam005ddf34 != 1) {
            iRam005ddf34 = 0;
            uVar5 = import::env::invoke_iii(0x883,*(undefined4 *)(iVar2 + 0x1c),0);
            if (iRam005ddf34 != 1) {
              iRam005ddf34 = 0;
              import::env::invoke_viii(0x1f32,uVar5,1,0);
              if (iRam005ddf34 != 1) {
                iRam005ddf34 = 0;
                import::env::invoke_viii
                          (0x365c,*(undefined4 *)(iVar2 + 0x18),
                           *(undefined4 *)(*(int *)(iVar4 + 8) + 0x14),0);
                if (iRam005ddf34 != 1) {
                  piVar3 = *(int **)(iVar2 + 0x1c);
                  iRam005ddf34 = 0;
                  uVar5 = import::env::invoke_iii(0x91b,iVar4 + 0xc,0);
                  if (iRam005ddf34 != 1) {
                    iVar1 = *piVar3;
                    iRam005ddf34 = 0;
                    import::env::invoke_viii
                              (*(undefined4 *)(iVar1 + 0x2d0),piVar3,uVar5,
                               *(undefined4 *)(iVar1 + 0x2d4));
                    iVar1 = iRam005ddf34;
                    iRam005ddf34 = 0;
                    if (iVar1 != 1) {
                      *(undefined1 *)(iVar2 + 0x30) = 1;
                      *(int *)(iVar2 + 0x20) = iVar4;
                      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
                      goto code_r0x81a33ef8;
                    }
                  }
                }
              }
            }
          }
        }
code_r0x81a33e9c:
        iRam005ddf34 = 0;
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        iVar2 = import::env::getTempRet0();
        iVar1 = import::env::llvm_eh_typeid_for(0x4a99ec);
        if (iVar2 != iVar1) {
code_r0x81a33fb3:
          iRam005ddf34 = 0;
          import::env::invoke_ii(0x365d,&iStack_20);
          iVar6 = iRam005ddf34;
          iRam005ddf34 = 0;
          if (iVar6 == 1) {
            import::env::__cxa_find_matching_catch_3(0);
            import::env::getTempRet0();
            unnamed_function_642();
            do {
              halt_trap();
            } while( true );
          }
          import::env::__resumeException(uVar5);
          do {
            halt_trap();
          } while( true );
        }
        piVar3 = (int *)import::env::__cxa_begin_catch(uVar5);
        iVar1 = *piVar3;
        iRam005ddf34 = 0;
        iStack_20 = iVar1;
        import::env::invoke_v(0x3a);
        iVar2 = iRam005ddf34;
        iRam005ddf34 = 0;
        if (iVar2 == 1) {
          uVar5 = import::env::__cxa_find_matching_catch_2();
          import::env::getTempRet0();
          goto code_r0x81a33fb3;
        }
        if (iVar1 != 0) {
          System_Net_CommandStream__ReceiveCommandResponseCallback(iVar1);
          do {
            halt_trap();
          } while( true );
        }
      }
      else {
        iVar2 = unnamed_function_6529(uVar5,*(int *)(iVar4 + 0x10),uRam0056344c);
        uVar5 = unnamed_function_44644(*(undefined4 *)(iVar2 + 0x18),0);
        unnamed_function_44686(uVar5,1,0);
        uVar5 = unnamed_function_44644(*(undefined4 *)(iVar2 + 0x1c),0);
        unnamed_function_44686(uVar5,1,0);
        unnamed_function_16520
                  (*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(*(int *)(iVar4 + 8) + 0x14),0);
        piVar3 = *(int **)(iVar2 + 0x1c);
        uVar5 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(iVar4 + 0xc,0);
        iVar1 = *piVar3;
        (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
                  (piVar3,uVar5,*(undefined4 *)(iVar1 + 0x2d4));
        *(undefined1 *)(iVar2 + 0x30) = 1;
        *(int *)(iVar2 + 0x20) = iVar4;
      }
code_r0x81a33ef8:
      if (-1 < *(int *)(iVar4 + 0x14)) {
        iVar2 = unnamed_function_6529
                          (*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14),*(int *)(iVar4 + 0x14),
                           uRam0056344c);
        uVar5 = unnamed_function_44644(*(undefined4 *)(iVar2 + 0x18),0);
        unnamed_function_44686(uVar5,1,0);
        uVar5 = unnamed_function_44644(*(undefined4 *)(iVar2 + 0x1c),0);
        unnamed_function_44686(uVar5,1,0);
        unnamed_function_16520
                  (*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(*(int *)(iVar4 + 8) + 0x14),0);
        piVar3 = *(int **)(iVar2 + 0x1c);
        uVar5 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(iVar4 + 0xc,0);
        iVar1 = *piVar3;
        (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
                  (piVar3,uVar5,*(undefined4 *)(iVar1 + 0x2d4));
        *(undefined1 *)(iVar2 + 0x30) = 1;
        *(int *)(iVar2 + 0x20) = iVar4;
      }
      iVar6 = iVar6 + 1;
      iVar4 = *(int *)(param_1 + 0x10);
    } while (iVar6 < *(int *)(iVar4 + 0xc));
  }
  return;
}



// ---- InventoryManager::LoadItemsToInventory   [wasm func86378 -> ram:81a34048 ; ghidra: InventoryManager::LoadItemsToInventory]

void InventoryManager__LoadItemsToInventory(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x18),0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x1c),0);
  unnamed_function_44686(uVar1,1,0);
  unnamed_function_16520
            (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_2 + 8) + 0x14),0);
  piVar2 = *(int **)(param_1 + 0x1c);
  uVar1 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(param_2 + 0xc,0);
  iVar3 = *piVar2;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x2d0) * 4))
            (piVar2,uVar1,*(undefined4 *)(iVar3 + 0x2d4));
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(int *)(param_1 + 0x20) = param_2;
  return;
}



// ---- InventoryManager::SetInventorySlot   [wasm func86379 -> ram:81a340b9 ; ghidra: InventoryManager::SetInventorySlot]

void InventoryManager__SetInventorySlot(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (cRam006648c8 == '\0') {
    unnamed_function_1099(0x55b734);
    unnamed_function_1099(0x563418);
    unnamed_function_1099(0x563428);
    unnamed_function_1099(0x56342c);
    unnamed_function_1099(0x55be2c);
    cRam006648c8 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (0 < *(int *)(iVar2 + 0xc)) {
    iVar1 = 0;
    do {
      iVar2 = unnamed_function_6529(iVar2,iVar1,uRam0056342c);
      uVar3 = *(undefined4 *)(iVar2 + 8);
      if (*(int *)(iRam0055be2c + 0x74) == 0) {
        unnamed_function_94848(iRam0055be2c);
      }
      iVar4 = unnamed_function_44710(uVar3,param_2,0);
      if (iVar4 != 0) {
        if (9 < *(int *)(iVar2 + 0xc)) {
          return;
        }
        *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
        if (cRam006649c0 == '\0') {
          unnamed_function_1099(0x55bea0);
          unnamed_function_1099(0x55c894);
          cRam006649c0 = '\x01';
        }
        iVar1 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x20);
        if (iVar1 == 0) {
          return;
        }
        iVar4 = unnamed_function_95402(uRam0055bea0);
        ItemConsumer__UsePotion(iVar4,0);
        *(int *)(iVar4 + 8) = iVar2;
        (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
                  (*(undefined4 *)(iVar1 + 0x20),iVar4,*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar1 = iVar1 + 1;
      iVar2 = *(int *)(param_1 + 0x10);
    } while (iVar1 < *(int *)(iVar2 + 0xc));
  }
  iVar1 = unnamed_function_95402(uRam0055b734);
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  *(undefined8 *)(iVar1 + 0xc) = 0xffffffff00000001;
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar2 = iRam00563418;
  iVar4 = *(int *)(param_1 + 0x10);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  uVar5 = *(uint *)(iVar4 + 0xc);
  if (*(uint *)(*(int *)(iVar4 + 8) + 0xc) <= uVar5) {
    System_String__Substring
              (iVar4,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
    return;
  }
  *(uint *)(iVar4 + 0xc) = uVar5 + 1;
  *(int *)(*(int *)(iVar4 + 8) + uVar5 * 4 + 0x10) = iVar1;
  return;
}



// ---- InventoryManager::LoadItemFromJson   [wasm func86381 -> ram:81a342d1 ; ghidra: InventoryManager::LoadItemFromJson]

void InventoryManager__LoadItemFromJson(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar4 = 0;
  if (cRam006648ca == '\0') {
    unnamed_function_1099(0x55b764);
    unnamed_function_1099(0x563428);
    unnamed_function_1099(0x56342c);
    unnamed_function_1099(0x56c1a4);
    cRam006648ca = '\x01';
  }
  Esper_ESave_SaveFile__LoadData(*(undefined4 *)(param_1 + 0x20),0);
  iVar3 = *(int *)(param_1 + 0x10);
  if (0 < *(int *)(iVar3 + 0xc)) {
    do {
      iVar3 = unnamed_function_6529(iVar3,iVar4,uRam0056342c);
      uVar6 = *(undefined8 *)(iVar3 + 0xc);
      uVar5 = *(undefined4 *)(iVar3 + 0x14);
      uVar1 = *(undefined1 *)(iVar3 + 0x18);
      iVar2 = unnamed_function_95402(uRam0055b764);
      *(undefined1 *)(iVar2 + 0x14) = uVar1;
      *(undefined4 *)(iVar2 + 0x10) = uVar5;
      *(undefined8 *)(iVar2 + 8) = uVar6;
      Esper_ESave_SaveFile__AddOrUpdateData_5
                (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(*(int *)(iVar3 + 8) + 0xc),iVar2,
                 uRam0056c1a4);
      iVar4 = iVar4 + 1;
      iVar3 = *(int *)(param_1 + 0x10);
    } while (iVar4 < *(int *)(iVar3 + 0xc));
  }
  iVar3 = 0;
  Esper_ESave_SaveFile__SetSetupData(*(undefined4 *)(param_1 + 0x20),0,0);
  iVar4 = *(int *)(param_1 + 0x10);
  if (0 < *(int *)(iVar4 + 0xc)) {
    do {
      iVar4 = unnamed_function_6529(iVar4,iVar3,uRam0056342c);
      uVar6 = *(undefined8 *)(iVar4 + 0xc);
      uVar5 = *(undefined4 *)(iVar4 + 0x14);
      uVar1 = *(undefined1 *)(iVar4 + 0x18);
      iVar2 = unnamed_function_95402(uRam0055b764);
      *(undefined1 *)(iVar2 + 0x14) = uVar1;
      *(undefined4 *)(iVar2 + 0x10) = uVar5;
      *(undefined8 *)(iVar2 + 8) = uVar6;
      uVar5 = unnamed_function_42591(iVar2,0);
      UnityEngine_PlayerPrefs__GetFloat_1(*(undefined4 *)(*(int *)(iVar4 + 8) + 0xc),uVar5,0);
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x10);
    } while (iVar3 < *(int *)(iVar4 + 0xc));
  }
  return;
}



// ---- InventoryManager::StaticEventHandler_OnExit   [wasm func86383 -> ram:81a34444 ; ghidra: InventoryManager::StaticEventHandler_OnExit]

void InventoryManager__StaticEventHandler_OnExit(int param_1)

{
  undefined4 uVar1;
  
  if (cRam006648cb == '\0') {
    unnamed_function_1099(0x563430);
    unnamed_function_1099(0x563414);
    unnamed_function_1099(0x558f98);
    unnamed_function_1099(0x558f94);
    unnamed_function_1099(0x573f08);
    cRam006648cb = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00558f94);
  multiple_2_System_Collections_Generic_List_1___cctor(uVar1,uRam00563414);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = unnamed_function_95402(uRam00558f98);
  multiple_2_System_Collections_Generic_List_1___cctor(uVar1,uRam00563430);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uRam00573f08;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- InventoryManager::ctor   [wasm func86384 -> ram:81a344da ; ghidra: InventoryManager::.ctor]

void InventoryManager___ctor(void)

{
  undefined4 uVar1;
  
  if (cRam006648cc == '\0') {
    unnamed_function_1099(0x55e1b8);
    cRam006648cc = '\x01';
  }
  uVar1 = unnamed_function_95402(iRam0055e1b8);
  **(undefined4 **)(iRam0055e1b8 + 0x5c) = uVar1;
  return;
}



// ---- InventoryManager::c_ctor   [wasm func86385 -> ram:81a34519 ; ghidra: InventoryManager+<>c::.ctor]

uint InventoryManager_<>c___ctor(int param_1)

{
  return (*(uint *)(param_1 + 0x14) ^ 0xffffffff) >> 0x1f;
}



