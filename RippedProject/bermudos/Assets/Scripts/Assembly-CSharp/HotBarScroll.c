// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: HotBarScroll  (Assembly-CSharp)  -  6 function(s)

// ---- HotBarScroll::Awake   [wasm func86326 -> ram:81a3085a ; ghidra: HotBarScroll::Awake]

void HotBarScroll__Awake(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648ad == '\0') {
    unnamed_function_1099(0x557a38);
    unnamed_function_1099(0x569e60);
    unnamed_function_1099(0x569e64);
    cRam006648ad = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a38);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00569e60,0);
  StaticEventHandler__add_OnItemChanged(uVar1,param_1);
  uVar1 = unnamed_function_95402(uRam00557a38);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00569e64,0);
  StaticEventHandler__add_OnMoveItemToHotBar(uVar1,param_1);
  return;
}



// ---- HotBarScroll::OnDestroy   [wasm func86329 -> ram:81a30a05 ; ghidra: HotBarScroll::OnDestroy]

void HotBarScroll__OnDestroy(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (cRam006648ae == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x569e5c);
    unnamed_function_1099(0x563428);
    unnamed_function_1099(0x56342c);
    unnamed_function_1099(0x565d78);
    cRam006648ae = '\x01';
  }
  if ((param_2 & 0xfffffffe) == 2) {
    uVar1 = unnamed_function_44644(param_1,0);
    unnamed_function_44686(uVar1,1,0);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x80);
    iVar4 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = System_Threading_Monitor__Enter_1(iVar4);
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = System_Threading_Monitor__Enter_1(iVar4);
    }
    iVar4 = InventoryDescription___ctor
                      (*(undefined4 *)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 0x50),param_1);
    if (*(int *)(iVar4 + 0xc) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      iVar4 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = System_Threading_Monitor__Enter_1(iVar4);
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = System_Threading_Monitor__Enter_1(iVar4);
      }
      uVar2 = InventoryDescription___ctor
                        (*(undefined4 *)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 0x50),param_1);
      iVar4 = unnamed_function_6529(uVar2,*(undefined4 *)(param_1 + 0x18),uRam0056342c);
      unnamed_function_16520(uVar1,*(undefined4 *)(*(int *)(iVar4 + 8) + 0x14),0);
      piVar5 = *(int **)(param_1 + 0x14);
      iVar4 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = System_Threading_Monitor__Enter_1(iVar4);
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = System_Threading_Monitor__Enter_1(iVar4);
      }
      uVar1 = InventoryDescription___ctor
                        (*(undefined4 *)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 0x50),param_1);
      iVar4 = unnamed_function_6529(uVar1,*(undefined4 *)(param_1 + 0x18),uRam0056342c);
      uVar1 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(iVar4 + 0xc,0);
      iVar4 = *piVar5;
      (**(code **)((ulonglong)*(uint *)(iVar4 + 0x2d0) * 4))
                (piVar5,uVar1,*(undefined4 *)(iVar4 + 0x2d4));
      iVar4 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = System_Threading_Monitor__Enter_1(iVar4);
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
      if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = System_Threading_Monitor__Enter_1(iVar4);
      }
      iVar6 = **(int **)(iVar4 + 0x5c);
      uVar2 = *(undefined4 *)(iVar6 + 0x20);
      uVar1 = unnamed_function_95402(uRam005579ec);
      unnamed_function_60038(uVar1,param_1,uRam00569e5c,0);
      iVar4 = unnamed_function_85160(uVar2,uVar1,0);
      uVar1 = uRam005579ec;
      if (iVar4 == 0) {
        *(undefined4 *)(iVar6 + 0x20) = 0;
        return;
      }
      iVar3 = unnamed_function_1112(iVar4,uRam005579ec);
      if (iVar3 == 0) {
        unnamed_function_1116(iVar4,uVar1);
        do {
          halt_trap();
        } while( true );
      }
      *(int *)(iVar6 + 0x20) = iVar3;
      uVar1 = uRam005579ec;
      iVar6 = unnamed_function_1112(iVar4,uRam005579ec);
      if (iVar6 == 0) {
        unnamed_function_1116(iVar4,uVar1);
        do {
          halt_trap();
        } while( true );
      }
    }
  }
  return;
}



// ---- HotBarScroll::OnGameStateChange_HotBar   [wasm func86331 -> ram:81a30e0c ; ghidra: HotBarScroll::OnGameStateChange_HotBar]

void HotBarScroll__OnGameStateChange_HotBar(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (cRam006648af == '\0') {
    unnamed_function_1099(0x563428);
    unnamed_function_1099(0x56342c);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x570a3c);
    cRam006648af = '\x01';
  }
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = InventoryDescription___ctor
                    (*(undefined4 *)(*(int *)(**(int **)(iVar2 + 0x5c) + 0x10) + 0x50),iVar2);
  if (*(int *)(iVar2 + 0xc) != 0) {
    iVar2 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    uVar1 = InventoryDescription___ctor
                      (*(undefined4 *)(*(int *)(**(int **)(iVar2 + 0x5c) + 0x10) + 0x50),iVar2);
    iVar2 = unnamed_function_6529(uVar1,*(undefined4 *)(param_1 + 0x18),uRam0056342c);
    if (iVar2 != 0) {
      iVar3 = *(int *)(*(int *)(param_2 + 8) + 0x14);
      iVar2 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = System_Threading_Monitor__Enter_1(iVar2);
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
      if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = System_Threading_Monitor__Enter_1(iVar2);
      }
      uVar1 = InventoryDescription___ctor
                        (*(undefined4 *)(*(int *)(**(int **)(iVar2 + 0x5c) + 0x10) + 0x50),iVar2);
      iVar2 = unnamed_function_6529(uVar1,*(undefined4 *)(param_1 + 0x18),uRam0056342c);
      if (iVar3 == *(int *)(iVar2 + 0x14)) {
        unnamed_function_16520
                  (*(undefined4 *)(param_1 + 0x10),
                   *(undefined4 *)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x14),0);
        piVar4 = *(int **)(param_1 + 0x14);
        uVar1 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData
                          (*(int *)(param_2 + 8) + 0xc,0);
        iVar2 = *piVar4;
        (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
                  (piVar4,uVar1,*(undefined4 *)(iVar2 + 0x2d4));
        if (*(int *)(*(int *)(param_2 + 8) + 0xc) == 0) {
          unnamed_function_16520(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),0);
          iVar2 = **(int **)(param_1 + 0x14);
          (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
                    (*(int **)(param_1 + 0x14),uRam00570a3c,*(undefined4 *)(iVar2 + 0x2d4));
        }
      }
    }
  }
  return;
}



// ---- HotBarScroll::StaticEventHandler_OnItemChanged   [wasm func86332 -> ram:81a30fef ; ghidra: HotBarScroll::StaticEventHandler_OnItemChanged]

void HotBarScroll__StaticEventHandler_OnItemChanged(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (cRam006648b0 == '\0') {
    unnamed_function_1099(0x563428);
    unnamed_function_1099(0x565d78);
    cRam006648b0 = '\x01';
  }
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = InventoryDescription___ctor
                    (*(undefined4 *)(*(int *)(**(int **)(iVar2 + 0x5c) + 0x10) + 0x50),iVar2);
  if (*(int *)(iVar2 + 0xc) == 1) {
    unnamed_function_16520
              (*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x14),0);
    piVar3 = *(int **)(param_1 + 0x14);
    uVar1 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(*(int *)(param_2 + 8) + 0xc,0);
    iVar2 = *piVar3;
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
              (piVar3,uVar1,*(undefined4 *)(iVar2 + 0x2d4));
  }
  return;
}



// ---- HotBarScroll::Start   [wasm func86334 -> ram:81a310c3 ; ghidra: HotBarScroll::Start]

void HotBarScroll__Start(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [4];
  float fStack_4;
  
  if (cRam006648b1 == '\0') {
    unnamed_function_1099(0x562374);
    cRam006648b1 = '\x01';
  }
  if (cRam00662ee9 == '\0') {
    unnamed_function_1099(0x55bc38);
    cRam00662ee9 = '\x01';
  }
  if ((**(int **)(iRam0055bc38 + 0x5c) != 0) &&
     (unnamed_function_50385
                (auStack_8,*(undefined4 *)(**(int **)(iRam0055bc38 + 0x5c) + 0x124),uRam00562374),
     fStack_4 != 0.0)) {
    if (ABS(fStack_4) < 2.1474836e+09) {
      iVar1 = (int)fStack_4;
    }
    else {
      iVar1 = -0x80000000;
    }
    HotBarScroll__Update(param_1,iVar1,auStack_10);
  }
  return;
}



// ---- HotBarScroll::Update   [wasm func86335 -> ram:81a31175 ; ghidra: HotBarScroll::Update]

void HotBarScroll__Update(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  if (cRam006648b2 == '\0') {
    unnamed_function_1099(0x563428);
    unnamed_function_1099(0x56342c);
    unnamed_function_1099(0x565d78);
    cRam006648b2 = '\x01';
  }
  if (param_2 < 0) {
    iVar3 = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 < 0) {
      iVar3 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar3 = InventoryDescription___ctor
                        (*(undefined4 *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),param_1);
      *(int *)(param_1 + 0x18) = *(int *)(iVar3 + 0xc) + -1;
    }
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = InventoryDescription___ctor
                      (*(undefined4 *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),param_1);
    if (*(int *)(iVar3 + 0xc) == 0) {
      return;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    uVar2 = InventoryDescription___ctor
                      (*(undefined4 *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),param_1);
    iVar3 = unnamed_function_6529(uVar2,*(undefined4 *)(param_1 + 0x18),uRam0056342c);
    unnamed_function_16520(uVar4,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x14),0);
    piVar5 = *(int **)(param_1 + 0x14);
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    bVar1 = *(byte *)(iVar3 + 0xbd);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar6;
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = InventoryDescription___ctor
                      (*(undefined4 *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),param_1);
    if (*(int *)(iVar3 + 0xc) + -1 < iVar6) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = InventoryDescription___ctor
                      (*(undefined4 *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),param_1);
    if (*(int *)(iVar3 + 0xc) == 0) {
      return;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    uVar2 = InventoryDescription___ctor
                      (*(undefined4 *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),param_1);
    iVar3 = unnamed_function_6529(uVar2,*(undefined4 *)(param_1 + 0x18),uRam0056342c);
    unnamed_function_16520(uVar4,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x14),0);
    piVar5 = *(int **)(param_1 + 0x14);
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    bVar1 = *(byte *)(iVar3 + 0xbd);
  }
  if ((bVar1 & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  uVar4 = InventoryDescription___ctor
                    (*(undefined4 *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),param_1);
  iVar3 = unnamed_function_6529(uVar4,*(undefined4 *)(param_1 + 0x18),uRam0056342c);
  uVar4 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(iVar3 + 0xc,0);
  (**(code **)((ulonglong)*(uint *)(*piVar5 + 0x2d0) * 4))
            (piVar5,uVar4,*(undefined4 *)(*piVar5 + 0x2d4));
  iVar3 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  uVar4 = InventoryDescription___ctor
                    (*(undefined4 *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x50),param_1);
  uVar4 = unnamed_function_6529(uVar4,*(undefined4 *)(param_1 + 0x18),uRam0056342c);
  if (cRam006649d8 == '\0') {
    unnamed_function_1099(0x55bea0);
    unnamed_function_1099(0x55c894);
    cRam006649d8 = '\x01';
  }
  iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x40);
  if (iVar3 != 0) {
    iVar6 = unnamed_function_95402(uRam0055bea0);
    ItemConsumer__UsePotion(iVar6,0);
    *(undefined4 *)(iVar6 + 8) = uVar4;
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),iVar6,*(undefined4 *)(iVar3 + 0x14));
  }
  return;
}



