// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: PlayerControl  (Assembly-CSharp)  -  11 function(s)

// ---- PlayerControl::Awake   [wasm func86582 -> ram:81a3d533 ; ghidra: PlayerControl::Awake]

void PlayerControl__Awake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 auStack_10 [2];
  undefined4 auStack_8 [2];
  
  if (cRam00664949 == '\0') {
    unnamed_function_1099(0x557a90);
    unnamed_function_1099(0x56b920);
    unnamed_function_1099(0x56b928);
    unnamed_function_1099(0x56b92c);
    unnamed_function_1099(0x56b910);
    unnamed_function_1099(0x56b914);
    unnamed_function_1099(0x56b918);
    unnamed_function_1099(0x56b91c);
    unnamed_function_1099(0x56f704);
    unnamed_function_1099(0x55e5dc);
    cRam00664949 = '\x01';
  }
  auStack_8[0] = *(undefined4 *)(param_1 + 0x14);
  uVar1 = multiple_2_UnityEngine_InputSystem_DefaultInputActions_PlayerActions___ctor(auStack_8,0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  auStack_8[0] = *(undefined4 *)(param_1 + 0x14);
  uVar1 = multiple_3_UnityEngine_InputSystem_DefaultInputActions_PlayerActions__get_Look
                    (auStack_8,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  auStack_8[0] = *(undefined4 *)(param_1 + 0x14);
  uVar1 = multiple_3_UnityEngine_InputSystem_DefaultInputActions_UIActions___ctor(auStack_8,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  auStack_8[0] = *(undefined4 *)(param_1 + 0x14);
  uVar1 = multiple_2_UnityEngine_InputSystem_DefaultInputActions_UIActions__get_TrackedDeviceOrientation
                    (auStack_8,0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  auStack_8[0] = *(undefined4 *)(param_1 + 0x14);
  uVar1 = InputSystem_Actions_PlayerActions__get_RightClick(auStack_8,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  auStack_10[0] = *(undefined4 *)(param_1 + 0x14);
  uVar1 = InputSystem_Actions_UIActions__get_TrackedDeviceOrientation(auStack_10,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  auStack_10[0] = *(undefined4 *)(param_1 + 0x14);
  uVar1 = InputSystem_Actions_UIActions__get_OpenInventory(auStack_10,0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  auStack_8[0] = *(undefined4 *)(param_1 + 0x14);
  uVar1 = multiple_2_UnityEngine_InputSystem_DefaultInputActions_UIActions__get_Navigate
                    (auStack_8,0);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  unnamed_function_48914(*(undefined4 *)(param_1 + 0x18),0);
  unnamed_function_48914(*(undefined4 *)(param_1 + 0x1c),0);
  unnamed_function_48914(*(undefined4 *)(param_1 + 0x28),0);
  unnamed_function_48914(*(undefined4 *)(param_1 + 0x20),0);
  unnamed_function_48914(*(undefined4 *)(param_1 + 0x24),0);
  unnamed_function_48914(*(undefined4 *)(param_1 + 0x30),0);
  unnamed_function_48914(*(undefined4 *)(param_1 + 0x34),0);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b920,0);
  UnityEngine_InputSystem_InputAction__remove_canceled(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b910,0);
  UnityEngine_InputSystem_InputAction__remove_canceled(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b928,0);
  UnityEngine_InputSystem_InputAction__remove_canceled(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b914,0);
  UnityEngine_InputSystem_InputAction__remove_started(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b92c,0);
  UnityEngine_InputSystem_InputAction__remove_canceled(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b918,0);
  UnityEngine_InputSystem_InputAction__remove_canceled(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b91c,0);
  UnityEngine_InputSystem_InputAction__remove_canceled(uVar2,uVar1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  if (*(int *)(iRam0055e5dc + 0x74) == 0) {
    unnamed_function_94848(iRam0055e5dc);
  }
  iVar3 = *(int *)(*(int *)(iRam0055e5dc + 0x5c) + 4);
  if (iVar3 == 0) {
    if (*(int *)(iRam0055e5dc + 0x74) == 0) {
      unnamed_function_94848(iRam0055e5dc);
    }
    uVar2 = **(undefined4 **)(iRam0055e5dc + 0x5c);
    iVar3 = unnamed_function_95402(uRam00557a90);
    unnamed_function_60160(iVar3,uVar2,uRam0056f704,0);
    *(int *)(*(int *)(iRam0055e5dc + 0x5c) + 4) = iVar3;
  }
  UnityEngine_InputSystem_InputAction__remove_canceled(uVar1,iVar3,0);
  return;
}



// ---- PlayerControl::OnEnable   [wasm func86583 -> ram:81a3d89e ; ghidra: PlayerControl::OnEnable]

void PlayerControl__OnEnable(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (cRam0066494a == '\0') {
    unnamed_function_1099(0x557a90);
    unnamed_function_1099(0x56b920);
    unnamed_function_1099(0x56b928);
    unnamed_function_1099(0x56b92c);
    unnamed_function_1099(0x56b900);
    unnamed_function_1099(0x56b904);
    unnamed_function_1099(0x56b908);
    unnamed_function_1099(0x56b90c);
    unnamed_function_1099(0x56f700);
    unnamed_function_1099(0x55e5dc);
    cRam0066494a = '\x01';
  }
  UnityEngine_InputSystem_InputAction__ToString(*(undefined4 *)(param_1 + 0x18),0);
  UnityEngine_InputSystem_InputAction__ToString(*(undefined4 *)(param_1 + 0x1c),0);
  UnityEngine_InputSystem_InputAction__ToString(*(undefined4 *)(param_1 + 0x28),0);
  UnityEngine_InputSystem_InputAction__ToString(*(undefined4 *)(param_1 + 0x20),0);
  UnityEngine_InputSystem_InputAction__ToString(*(undefined4 *)(param_1 + 0x24),0);
  UnityEngine_InputSystem_InputAction__ToString(*(undefined4 *)(param_1 + 0x2c),0);
  UnityEngine_InputSystem_InputAction__ToString(*(undefined4 *)(param_1 + 0x30),0);
  UnityEngine_InputSystem_InputAction__ToString(*(undefined4 *)(param_1 + 0x34),0);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b920,0);
  UnityEngine_InputSystem_InputAction__add_performed(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b900,0);
  UnityEngine_InputSystem_InputAction__add_performed(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b928,0);
  UnityEngine_InputSystem_InputAction__add_performed(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b904,0);
  UnityEngine_InputSystem_InputAction__add_canceled(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b92c,0);
  UnityEngine_InputSystem_InputAction__add_performed(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b908,0);
  UnityEngine_InputSystem_InputAction__add_performed(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar1 = unnamed_function_95402(uRam00557a90);
  unnamed_function_60160(uVar1,param_1,uRam0056b90c,0);
  UnityEngine_InputSystem_InputAction__add_performed(uVar2,uVar1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  if (*(int *)(iRam0055e5dc + 0x74) == 0) {
    unnamed_function_94848(iRam0055e5dc);
  }
  iVar3 = *(int *)(*(int *)(iRam0055e5dc + 0x5c) + 8);
  if (iVar3 == 0) {
    if (*(int *)(iRam0055e5dc + 0x74) == 0) {
      unnamed_function_94848(iRam0055e5dc);
    }
    uVar2 = **(undefined4 **)(iRam0055e5dc + 0x5c);
    iVar3 = unnamed_function_95402(uRam00557a90);
    unnamed_function_60160(iVar3,uVar2,uRam0056f700,0);
    *(int *)(*(int *)(iRam0055e5dc + 0x5c) + 8) = iVar3;
  }
  UnityEngine_InputSystem_InputAction__add_performed(uVar1,iVar3,0);
  return;
}



// ---- PlayerControl::OnDisable   [wasm func86584 -> ram:81a3db3a ; ghidra: PlayerControl::OnDisable]

void PlayerControl__OnDisable(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (cRam0066494b == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x56b924);
    unnamed_function_1099(0x565d78);
    cRam0066494b = '\x01';
  }
  iVar3 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar4 = **(int **)(iVar3 + 0x5c);
  uVar5 = *(undefined4 *)(iVar4 + 0x20);
  uVar1 = unnamed_function_95402(uRam005579ec);
  unnamed_function_60038(uVar1,param_1,uRam0056b924,0);
  iVar3 = unnamed_function_85160(uVar5,uVar1,0);
  uVar1 = uRam005579ec;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x20) = 0;
    return;
  }
  iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
  if (iVar2 == 0) {
    unnamed_function_1116(iVar3,uVar1);
    do {
      halt_trap();
    } while( true );
  }
  *(int *)(iVar4 + 0x20) = iVar2;
  uVar1 = uRam005579ec;
  iVar4 = unnamed_function_1112(iVar3,uRam005579ec);
  if (iVar4 != 0) {
    return;
  }
  unnamed_function_1116(iVar3,uVar1);
  do {
    halt_trap();
  } while( true );
}



// ---- PlayerControl::OnDestroy   [wasm func86585 -> ram:81a3dc2d ; ghidra: PlayerControl::OnDestroy]

void PlayerControl__OnDestroy(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (cRam0066494c == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x56b924);
    unnamed_function_1099(0x565d78);
    cRam0066494c = '\x01';
  }
  if ((param_2 & 0xfffffffe) == 2) {
    unnamed_function_48914(*(undefined4 *)(param_1 + 0x2c),0);
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar4 = **(int **)(iVar3 + 0x5c);
    uVar5 = *(undefined4 *)(iVar4 + 0x20);
    uVar1 = unnamed_function_95402(uRam005579ec);
    unnamed_function_60038(uVar1,param_1,uRam0056b924,0);
    iVar3 = unnamed_function_85160(uVar5,uVar1,0);
    uVar1 = uRam005579ec;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar4 + 0x20) = 0;
      return;
    }
    iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
    if (iVar2 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar4 + 0x20) = iVar2;
    uVar1 = uRam005579ec;
    iVar4 = unnamed_function_1112(iVar3,uRam005579ec);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
  }
  return;
}



// ---- PlayerControl::OnGameStateChange   [wasm func86586 -> ram:81a3dd38 ; ghidra: PlayerControl::OnGameStateChange]

void PlayerControl__OnGameStateChange(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)TMPEffects_Components_TMPWriter__HideAllCharacters(0);
  if (*(float *)(param_1 + 0x60) < fVar1) {
    fVar1 = (float)TMPEffects_Components_TMPWriter__HideAllCharacters(0);
    *(float *)(param_1 + 0x60) = fVar1 + 0.5;
    BashEvent__remove_OnBash(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x34),0,param_1);
    if (cRam006649ba == '\0') {
      unnamed_function_1099(0x55c894);
      cRam006649ba = '\x01';
    }
    iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x18);
    if (iVar2 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    }
  }
  return;
}



// ---- PlayerControl::OnRightMouseClick   [wasm func86589 -> ram:81a3de86 ; ghidra: PlayerControl::OnRightMouseClick]

void PlayerControl__OnRightMouseClick(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  
  if (cRam0066494d == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam0066494d = '\x01';
  }
  uVar5 = *(undefined8 *)(param_1 + 0x44);
  if (cRam0066482a == '\0') {
    unnamed_function_1099(0x55d024);
    cRam0066482a = '\x01';
  }
  fVar2 = (float)uVar5 - (float)**(undefined8 **)(iRam0055d024 + 0x5c);
  fVar6 = (float)((ulonglong)uVar5 >> 0x20) -
          (float)((ulonglong)**(undefined8 **)(iRam0055d024 + 0x5c) >> 0x20);
  if ((9.9999994e-11 <= fVar2 * fVar2 + fVar6 * fVar6) &&
     (fVar2 = (float)UnityEngine_Rendering_Universal_ScriptableRenderer__InternalStartRendering(0),
     *(float *)(param_1 + 0x5c) < fVar2)) {
    iVar3 = *(int *)(iRam00565d6c + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    SoundEffectManager__Start
              (**(undefined4 **)(iVar3 + 0x5c),*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x60),
               param_1);
    fVar2 = (float)UnityEngine_Rendering_Universal_ScriptableRenderer__InternalStartRendering(0);
    *(float *)(param_1 + 0x5c) = fVar2 + 1.0;
    uVar5 = *(undefined8 *)(param_1 + 0x44);
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
    if (cRam00664986 == '\0') {
      unnamed_function_1099(0x55a800);
      cRam00664986 = '\x01';
    }
    iVar4 = *(int *)(iVar3 + 0x10);
    if (iVar4 != 0) {
      iVar1 = unnamed_function_95402(uRam0055a800);
      if (cRam00664987 == '\0') {
        unnamed_function_1099(0x55ad18);
        cRam00664987 = '\x01';
      }
      if (*(int *)(iRam0055ad18 + 0x74) == 0) {
        unnamed_function_94848(iRam0055ad18);
      }
      *(undefined8 *)(iVar1 + 8) = uVar5;
      (**(code **)((ulonglong)*(uint *)(iVar4 + 0xc) * 4))
                (*(undefined4 *)(iVar4 + 0x20),iVar3,iVar1,*(undefined4 *)(iVar4 + 0x14));
    }
    if (cRam006649bd == '\0') {
      unnamed_function_1099(0x55c894);
      cRam006649bd = '\x01';
    }
    iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x1c);
    if (iVar3 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
                (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
    }
  }
  return;
}



// ---- PlayerControl::OnSpaceClick   [wasm func86592 -> ram:81a3e130 ; ghidra: PlayerControl::OnSpaceClick]

void PlayerControl__OnSpaceClick(int param_1)

{
  if (10.0 < *(float *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 0x14)) {
    multiple_8_AttackEvent__remove_OnAttack(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24),0);
  }
  return;
}



// ---- PlayerControl::OnFireClick   [wasm func86593 -> ram:81a3e154 ; ghidra: PlayerControl::OnFireClick]

void PlayerControl__OnFireClick(int param_1)

{
  float fVar1;
  
  if (cRam0066494e == '\0') {
    unnamed_function_1099(0x56a010);
    cRam0066494e = '\x01';
  }
  PlayerControl__Update(param_1,param_1);
  fVar1 = (float)unnamed_function_73970(*(undefined4 *)(param_1 + 0x20),uRam0056a010);
  if (0.0 < fVar1) {
    BashEvent__remove_OnBash(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x34),1,param_1);
  }
  return;
}



// ---- PlayerControl::Update   [wasm func86594 -> ram:81a3e1a8 ; ghidra: PlayerControl::Update]

void PlayerControl__Update(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  float fStack_8;
  float fStack_4;
  
  uVar1 = 0;
  if (cRam0066494f == '\0') {
    unnamed_function_1099(0x56a010);
    unnamed_function_1099(0x56a014);
    unnamed_function_1099(0x565d6c);
    cRam0066494f = '\x01';
  }
  unnamed_function_73973(&fStack_8,*(undefined4 *)(param_1 + 0x18),uRam0056a014);
  if ((((fStack_8 == 0.0 && fStack_4 != 0.0) || ((fStack_8 != 0.0 && (fStack_4 == 0.0)))) &&
      (*(float *)(param_1 + 0x44) != 0.0)) && (*(float *)(param_1 + 0x48) != 0.0)) {
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x44);
  }
  unnamed_function_73973(&fStack_8,*(undefined4 *)(param_1 + 0x18),uRam0056a014);
  *(ulonglong *)(param_1 + 0x44) = CONCAT44(fStack_4,fStack_8);
  if (cRam0066482a == '\0') {
    unnamed_function_1099(0x55d024);
    cRam0066482a = '\x01';
  }
  fStack_8 = fStack_8 - (float)**(undefined8 **)(iRam0055d024 + 0x5c);
  fStack_4 = fStack_4 - (float)((ulonglong)**(undefined8 **)(iRam0055d024 + 0x5c) >> 0x20);
  if (fStack_8 * fStack_8 + fStack_4 * fStack_4 < 9.9999994e-11) {
    if (*(char *)(param_1 + 100) != '\0') {
      iVar3 = *(int *)(iRam00565d6c + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      SoundEffectManager__PlaySoundEffect
                (**(undefined4 **)(iVar3 + 0x5c),*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x5c),
                 param_1);
      *(undefined1 *)(param_1 + 100) = 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x1c);
    iVar4 = *(int *)(iVar3 + 0x10);
    if (iVar4 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar4 + 0xc) * 4))
                (*(undefined4 *)(iVar4 + 0x20),iVar3,*(undefined4 *)(iVar4 + 0x14));
    }
    uStack_90 = *(undefined8 *)(param_1 + 0x4c);
    fVar5 = (float)*(undefined8 *)(param_1 + 0x54) - (float)uStack_90;
    fVar7 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x54) >> 0x20) -
            (float)((ulonglong)uStack_90 >> 0x20);
    if (fVar5 * fVar5 + fVar7 * fVar7 < 9.9999994e-11) {
      return;
    }
    *(undefined8 *)(param_1 + 0x54) = uStack_90;
    uStack_58 = 0xbf35c28fbf35c28f;
    uStack_98 = 0xbf35c28fbf35c28f;
    uStack_50 = uStack_90;
    iVar3 = HelperUtilities__ValidateCheckEnumerableValues(&uStack_90,&uStack_98,0x3c23d70a,0);
    if (iVar3 != 0) {
      AnimateEvent__remove_OnAnimate(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20),7,0);
      return;
    }
    uStack_a0 = *(undefined8 *)(param_1 + 0x4c);
    uStack_68 = 0xbf35c28f3f35c28f;
    uStack_a8 = 0xbf35c28f3f35c28f;
    uStack_60 = uStack_a0;
    iVar3 = HelperUtilities__ValidateCheckEnumerableValues(&uStack_a0,&uStack_a8,0x3c23d70a,0);
    if (iVar3 == 0) {
      uStack_b0 = *(undefined8 *)(param_1 + 0x4c);
      uStack_78 = 0x3f35c28fbf35c28f;
      uStack_b8 = 0x3f35c28fbf35c28f;
      uStack_70 = uStack_b0;
      iVar3 = HelperUtilities__ValidateCheckEnumerableValues(&uStack_b0,&uStack_b8,0x3c23d70a,0);
      if (iVar3 != 0) {
        AnimateEvent__remove_OnAnimate(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20),2,0);
        return;
      }
      uStack_c0 = *(undefined8 *)(param_1 + 0x4c);
      uStack_88 = 0x3f35c28f3f35c28f;
      uStack_c8 = 0x3f35c28f3f35c28f;
      uStack_80 = uStack_c0;
      iVar3 = HelperUtilities__ValidateCheckEnumerableValues(&uStack_c0,&uStack_c8,0x3c23d70a,0);
      if (iVar3 == 0) {
        return;
      }
      AnimateEvent__remove_OnAnimate(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20),1,0);
      return;
    }
    AnimateEvent__remove_OnAnimate(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20),6,0);
    return;
  }
  fVar5 = (float)unnamed_function_73970(*(undefined4 *)(param_1 + 0x1c),uRam0056a010);
  if (fVar5 != 0.0) {
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x44);
  if (cRam00663576 == '\0') {
    unnamed_function_1099(0x55d024);
    cRam00663576 = '\x01';
  }
  iVar3 = *(int *)(iRam0055d024 + 0x5c);
  fVar5 = (float)uVar6 - (float)*(undefined8 *)(iVar3 + 0x10);
  fVar7 = (float)((ulonglong)uVar6 >> 0x20) -
          (float)((ulonglong)*(undefined8 *)(iVar3 + 0x10) >> 0x20);
  if (9.9999994e-11 <= fVar5 * fVar5 + fVar7 * fVar7) {
    uVar1 = 5;
    uVar6 = *(undefined8 *)(param_1 + 0x44);
    if (cRam00661a11 == '\0') {
      unnamed_function_1099(0x55d024);
      cRam00661a11 = '\x01';
      iVar3 = *(int *)(iRam0055d024 + 0x5c);
    }
    fVar5 = (float)uVar6 - (float)*(undefined8 *)(iVar3 + 0x18);
    fVar7 = (float)((ulonglong)uVar6 >> 0x20) -
            (float)((ulonglong)*(undefined8 *)(iVar3 + 0x18) >> 0x20);
    if (9.9999994e-11 <= fVar5 * fVar5 + fVar7 * fVar7) {
      uVar1 = 4;
      uVar6 = *(undefined8 *)(param_1 + 0x44);
      if (cRam00661a13 == '\0') {
        unnamed_function_1099(0x55d024);
        cRam00661a13 = '\x01';
        iVar3 = *(int *)(iRam0055d024 + 0x5c);
      }
      fVar5 = (float)uVar6 - (float)*(undefined8 *)(iVar3 + 0x20);
      fVar7 = (float)((ulonglong)uVar6 >> 0x20) -
              (float)((ulonglong)*(undefined8 *)(iVar3 + 0x20) >> 0x20);
      if (9.9999994e-11 <= fVar5 * fVar5 + fVar7 * fVar7) {
        uVar1 = 3;
        uVar6 = *(undefined8 *)(param_1 + 0x44);
        if (cRam00661a14 == '\0') {
          unnamed_function_1099(0x55d024);
          cRam00661a14 = '\x01';
          iVar3 = *(int *)(iRam0055d024 + 0x5c);
        }
        fVar5 = (float)uVar6 - (float)*(undefined8 *)(iVar3 + 0x28);
        fVar7 = (float)((ulonglong)uVar6 >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(iVar3 + 0x28) >> 0x20);
        if (9.9999994e-11 <= fVar5 * fVar5 + fVar7 * fVar7) {
          uStack_d0 = *(undefined8 *)(param_1 + 0x44);
          uStack_18 = 0xbf35c28fbf35c28f;
          uStack_d8 = 0xbf35c28fbf35c28f;
          uVar1 = 7;
          uStack_10 = uStack_d0;
          iVar3 = HelperUtilities__ValidateCheckEnumerableValues(&uStack_d0,&uStack_d8,0x3c23d70a,0)
          ;
          if (iVar3 == 0) {
            uStack_e0 = *(undefined8 *)(param_1 + 0x44);
            uStack_28 = 0xbf35c28f3f35c28f;
            uStack_e8 = 0xbf35c28f3f35c28f;
            uVar1 = 6;
            uStack_20 = uStack_e0;
            iVar3 = HelperUtilities__ValidateCheckEnumerableValues
                              (&uStack_e0,&uStack_e8,0x3c23d70a,0);
            if (iVar3 == 0) {
              uStack_f0 = *(undefined8 *)(param_1 + 0x44);
              uStack_38 = 0x3f35c28fbf35c28f;
              uStack_f8 = 0x3f35c28fbf35c28f;
              uVar1 = 2;
              uStack_30 = uStack_f0;
              iVar3 = HelperUtilities__ValidateCheckEnumerableValues
                                (&uStack_f0,&uStack_f8,0x3c23d70a,0);
              if (iVar3 == 0) {
                uStack_100 = *(undefined8 *)(param_1 + 0x44);
                uStack_48 = 0x3f35c28f3f35c28f;
                uStack_108 = 0x3f35c28f3f35c28f;
                uVar1 = 1;
                uStack_40 = uStack_100;
                iVar3 = HelperUtilities__ValidateCheckEnumerableValues
                                  (&uStack_100,&uStack_108,0x3c23d70a,0);
                if (iVar3 == 0) goto code_r0x81a3e5d4;
              }
            }
          }
        }
      }
    }
  }
  AnimateEvent__remove_OnAnimate(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20),uVar1,0);
code_r0x81a3e5d4:
  uVar6 = *(undefined8 *)(param_1 + 0x44);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x18);
  fVar5 = *(float *)(iVar4 + 0xc);
  fVar7 = *(float *)(iVar4 + 0x10);
  if (fVar5 != fVar7) {
    fVar5 = (float)UnityEngine_Random__InitState(fVar5,fVar7,0);
  }
  if (cRam00664929 == '\0') {
    unnamed_function_1099(0x55bc7c);
    cRam00664929 = '\x01';
  }
  iVar4 = *(int *)(iVar3 + 0x10);
  if (iVar4 != 0) {
    iVar2 = unnamed_function_95402(uRam0055bc7c);
    if (cRam0066492a == '\0') {
      unnamed_function_1099(0x55ad18);
      cRam0066492a = '\x01';
    }
    if (*(int *)(iRam0055ad18 + 0x74) == 0) {
      unnamed_function_94848(iRam0055ad18);
    }
    *(float *)(iVar2 + 0x10) = fVar5;
    *(undefined8 *)(iVar2 + 8) = uVar6;
    (**(code **)((ulonglong)*(uint *)(iVar4 + 0xc) * 4))
              (*(undefined4 *)(iVar4 + 0x20),iVar3,iVar2,*(undefined4 *)(iVar4 + 0x14));
  }
  if (*(char *)(param_1 + 100) == '\0') {
    iVar3 = *(int *)(iRam00565d6c + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    GameResources__get_Instance
              (**(undefined4 **)(iVar3 + 0x5c),*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x5c),1,
               param_1);
    *(undefined1 *)(param_1 + 100) = 1;
  }
  return;
}



// ---- PlayerControl::OnDisable_b_21_3   [wasm func86600 -> ram:81a3eb23 ; ghidra: PlayerControl::<OnDisable>b__21_3]

void PlayerControl__<OnDisable>b__21_3(void)

{
  undefined4 uVar1;
  
  if (cRam00664950 == '\0') {
    unnamed_function_1099(0x55e5dc);
    cRam00664950 = '\x01';
  }
  uVar1 = unnamed_function_95402(iRam0055e5dc);
  **(undefined4 **)(iRam0055e5dc + 0x5c) = uVar1;
  return;
}



// ---- PlayerControl::c_OnDisable_b_21_4   [wasm func86603 -> ram:81a3ebef ; ghidra: PlayerControl+<>c::<OnDisable>b__21_4]

void PlayerControl_<>c__<OnDisable>b__21_4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (cRam00664951 == '\0') {
    unnamed_function_1099(0x565d60);
    cRam00664951 = '\x01';
  }
  SingletonMonobehaviourPersistent_1___ctor(param_1,uRam00565d60);
  uVar1 = unnamed_function_44644(param_1,0);
  uVar1 = UnityEngine_GameObject__AddComponent(uVar1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  iVar2 = *(int *)(param_1 + 0x10);
  if (0 < *(int *)(iVar2 + 0xc)) {
    do {
      iVar2 = iVar2 + iVar3 * 0xc;
      PoolManager__Awake(param_1,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x10),
                         *(undefined4 *)(iVar2 + 0x18),iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x10);
    } while (iVar3 < *(int *)(iVar2 + 0xc));
  }
  return;
}



