// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: ItemConsumer  (Assembly-CSharp)  -  15 function(s)

// ---- ItemConsumer::UsePotion   [wasm func86153 -> ram:81a2240c ; ghidra: ItemConsumer::UsePotion]

void ItemConsumer__UsePotion(void)

{
  if (cRam00664833 == '\0') {
    unnamed_function_1099(0x55ad18);
    cRam00664833 = '\x01';
  }
  if (*(int *)(iRam0055ad18 + 0x74) == 0) {
    unnamed_function_94848(iRam0055ad18);
  }
  return;
}



// ---- ItemConsumer::Awake   [wasm func86396 -> ram:81a34ed0 ; ghidra: ItemConsumer::Awake]

void ItemConsumer__Awake(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648d4 == '\0') {
    unnamed_function_1099(0x557a38);
    unnamed_function_1099(0x56a7c4);
    cRam006648d4 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a38);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056a7c4,0);
  StaticEventHandler__CallItemUIClickChangedEvent(uVar1,param_1);
  return;
}



// ---- ItemConsumer::OnEnable   [wasm func86398 -> ram:81a34fb5 ; ghidra: ItemConsumer::OnEnable]

void ItemConsumer__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648d5 == '\0') {
    unnamed_function_1099(0x557a38);
    unnamed_function_1099(0x56a7c4);
    cRam006648d5 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a38);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056a7c4,0);
  StaticEventHandler__add_OnHotBarScrollChanged(uVar1,param_1);
  return;
}



// ---- ItemConsumer::OnDisable   [wasm func86400 -> ram:81a3509a ; ghidra: ItemConsumer::OnDisable]

void ItemConsumer__OnDisable(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x34);
  return;
}



// ---- ItemConsumer::Start   [wasm func86401 -> ram:81a350aa ; ghidra: ItemConsumer::Start]

void ItemConsumer__Start(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 8);
  return;
}



// ---- ItemConsumer::StaticEventHandler_OnHotBarScrollChanged   [wasm func86402 -> ram:81a350b8 ; ghidra: ItemConsumer::StaticEventHandler_OnHotBarScrollChanged]

void ItemConsumer__StaticEventHandler_OnHotBarScrollChanged(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined8 uStack_18;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (cRam006648d6 == '\0') {
    unnamed_function_1099(0x561278);
    unnamed_function_1099(0x56127c);
    unnamed_function_1099(0x561280);
    unnamed_function_1099(0x563420);
    unnamed_function_1099(0x563424);
    unnamed_function_1099(0x563428);
    unnamed_function_1099(0x56342c);
    unnamed_function_1099(0x55be2c);
    cRam006648d6 = '\x01';
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar4 = InventoryDescription___ctor(*(undefined4 *)(param_1 + 0x10),&iStack_20);
    if (*(int *)(iVar4 + 0xc) < 1) {
      iVar4 = *(int *)(param_1 + 0x34);
    }
    else {
      uVar3 = InventoryDescription___ctor(*(undefined4 *)(param_1 + 0x10),&iStack_20);
      iVar4 = unnamed_function_6529(uVar3,0,uRam0056342c);
      *(int *)(param_1 + 0x34) = iVar4;
    }
    if (iVar4 == 0) {
      return;
    }
  }
  UnityEngine_ComputeBuffer__Release
            (&iStack_20,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10),uRam00563420);
  uStack_8 = uStack_18;
  iStack_20 = 0;
  puStack_1c = auStack_10;
  do {
    iRam005ddf34 = 0;
    iVar1 = import::env::invoke_iii(0x483,auStack_10,uRam0056127c);
    iVar4 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar4 == 1) {
      uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a35487;
    }
    if (iVar1 == 0) {
      iRam005ddf34 = 0;
      return;
    }
    iVar4 = uStack_8._4_4_;
    uVar3 = *(undefined4 *)(uStack_8._4_4_ + 8);
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 8);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      iRam005ddf34 = 0;
      import::env::invoke_vi(0xfc,iRam0055be2c);
      iVar1 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar1 == 1) {
        uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a35487;
      }
    }
    iRam005ddf34 = 0;
    iVar2 = import::env::invoke_iiii(0x857,uVar3,uVar6,0);
    iVar1 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar1 == 1) {
      uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a35487;
    }
  } while (iVar2 == 0);
  *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + -1;
  iRam005ddf34 = 0;
  import::env::invoke_viii(0x365e,param_1,*(undefined4 *)(*(int *)(iVar4 + 8) + 0xc),&iStack_20);
  iVar1 = iRam005ddf34;
  iRam005ddf34 = 0;
  if (iVar1 == 1) {
    uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
    goto code_r0x81a35487;
  }
  if (cRam006649c0 == '\0') {
    iRam005ddf34 = 0;
    import::env::invoke_vi(0xfa,0x55bea0);
    if (iRam005ddf34 != 1) {
      iRam005ddf34 = 0;
      import::env::invoke_vi(0xfa,0x55c894);
      if (iRam005ddf34 != 1) {
        cRam006649c0 = '\x01';
        goto code_r0x81a35338;
      }
    }
  }
  else {
code_r0x81a35338:
    iVar1 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x20);
    if (iVar1 == 0) {
code_r0x81a353f9:
      if (*(int *)(iVar4 + 0xc) != 0) {
        iRam005ddf34 = 0;
        return;
      }
      iRam005ddf34 = 0;
      import::env::invoke_iiii
                (0x866,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10),iVar4,uRam00563424);
      iVar4 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar4 != 1) {
        iRam005ddf34 = 0;
        return;
      }
      uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a35487;
    }
    iRam005ddf34 = 0;
    iVar2 = import::env::invoke_ii(0x10c,uRam0055bea0);
    if (iRam005ddf34 != 1) {
      iRam005ddf34 = 0;
      import::env::invoke_vii(0x365f,iVar2,0);
      if (iRam005ddf34 != 1) {
        *(int *)(iVar2 + 8) = iVar4;
        iRam005ddf34 = 0;
        import::env::invoke_viii
                  (*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x20),iVar2,
                   *(undefined4 *)(iVar1 + 0x14));
        if (iRam005ddf34 != 1) goto code_r0x81a353f9;
      }
    }
  }
  iRam005ddf34 = 0;
  uVar3 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a35487:
  iVar4 = import::env::getTempRet0();
  iVar1 = import::env::llvm_eh_typeid_for(0x4a99ec);
  if (iVar4 == iVar1) {
    piVar5 = (int *)import::env::__cxa_begin_catch(uVar3);
    iVar1 = *piVar5;
    iRam005ddf34 = 0;
    iStack_20 = iVar1;
    import::env::invoke_v(0x3a);
    iVar4 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar4 != 1) {
      if (iVar1 != 0) {
        System_Net_CommandStream__ReceiveCommandResponseCallback(iVar1);
        do {
          halt_trap();
        } while( true );
      }
      iRam005ddf34 = 0;
      return;
    }
    uVar3 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  iRam005ddf34 = 0;
  import::env::invoke_ii(0x3660,&iStack_20);
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



// ---- ItemConsumer::UseItemFromHotBar   [wasm func86405 -> ram:81a356d9 ; ghidra: ItemConsumer::UseItemFromHotBar]

void ItemConsumer__UseItemFromHotBar(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x20),0);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x34) = *(undefined4 *)(param_1 + 0x3c);
  if (cRam006648d8 == '\0') {
    unnamed_function_1099(0x55e1c0);
    cRam006648d8 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e1c0);
  *(int *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return;
}



// ---- ItemConsumer::UseAttackPotionCoroutine   [wasm func86406 -> ram:81a35744 ; ghidra: ItemConsumer::UseAttackPotionCoroutine]

void ItemConsumer__UseAttackPotionCoroutine(int param_1)

{
  Health__TakeDamage(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),0);
  return;
}



// ---- ItemConsumer::UseBigHealthPotion   [wasm func86407 -> ram:81a35757 ; ghidra: ItemConsumer::UseBigHealthPotion]

void ItemConsumer__UseBigHealthPotion(int param_1)

{
  Health__TakeDamage(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x2c),0);
  return;
}



// ---- ItemConsumer::UseSmallHealthPotion   [wasm func86408 -> ram:81a3576a ; ghidra: ItemConsumer::UseSmallHealthPotion]

void ItemConsumer__UseSmallHealthPotion(int param_1)

{
  PoiseEventArgs___ctor(*(undefined4 *)(param_1 + 0x1c),(float)*(int *)(param_1 + 0x30),0);
  return;
}



// ---- ItemConsumer::UseAttackPotion   [wasm func86409 -> ram:81a3577e ; ghidra: ItemConsumer::UseAttackPotion]

int ItemConsumer__UseAttackPotion(undefined4 param_1)

{
  int iVar1;
  
  if (cRam006648d8 == '\0') {
    unnamed_function_1099(0x55e1c0);
    cRam006648d8 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e1c0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- ItemConsumer::UseRagePotion   [wasm func86410 -> ram:81a357bb ; ghidra: ItemConsumer::UseRagePotion]

void ItemConsumer__UseRagePotion(int param_1)

{
  *(undefined8 *)(param_1 + 0x2c) = 0x200000014;
  *(undefined8 *)(param_1 + 0x24) = 0x323fa00000;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- ItemConsumer::UseAttackPotionCoroutine_d_20_System_IDisposable_Dispose   [wasm func86411 -> ram:81a357de ; ghidra: ItemConsumer+<UseAttackPotionCoroutine>d__20::System.IDisposable.Dispose]

undefined4 ItemConsumer_<UseAttackPotionCoroutine>d__20__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  
  if (cRam006648d9 == '\0') {
    unnamed_function_1099(0x55d134);
    cRam006648d9 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x34) = *(undefined4 *)(iVar2 + 0x3c);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  fVar3 = *(float *)(iVar2 + 0x24) * (float)*(int *)(*(int *)(iVar2 + 0x14) + 0x34);
  if (ABS(fVar3) < 2.1474836e+09) {
    iVar4 = (int)fVar3;
  }
  else {
    iVar4 = -0x80000000;
  }
  *(int *)(*(int *)(iVar2 + 0x14) + 0x34) = iVar4;
  uVar1 = unnamed_function_95402(uRam0055d134);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,0x41a00000,0)
  ;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}



// ---- ItemConsumer::UseAttackPotionCoroutine_d_20_System_Collections_Generic_IEnumerator_System_Object_get_   [wasm func86412 -> ram:81a35897 ; ghidra: ItemConsumer+<UseAttackPotionCoroutine>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void ItemConsumer_<UseAttackPotionCoroutine>d__20__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f49c);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- ItemConsumer::UseAttackPotionCoroutine_d_20_System_Collections_IEnumerator_get_Current   [wasm func86413 -> ram:81a358be ; ghidra: ItemConsumer+<UseAttackPotionCoroutine>d__20::System.Collections.IEnumerator.get_Current]

void ItemConsumer_<UseAttackPotionCoroutine>d__20__System_Collections_IEnumerator_get_Current
               (int param_1)

{
  undefined4 uVar1;
  
  if (cRam006648da == '\0') {
    unnamed_function_1099(0x567e70);
    cRam006648da = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e70);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



