// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: InputSystem_Actions  (Assembly-CSharp)  -  27 function(s)

// ---- InputSystem_Actions::UIActions_SetCallbacks   [wasm func86323 -> ram:81a305bc ; ghidra: InputSystem_Actions+UIActions::SetCallbacks]

void InputSystem_Actions_UIActions__SetCallbacks(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (cRam006648ac == '\0') {
    unnamed_function_1099(0x557a38);
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x567f78);
    unnamed_function_1099(0x569e5c);
    unnamed_function_1099(0x569e60);
    unnamed_function_1099(0x569e64);
    unnamed_function_1099(0x565d78);
    cRam006648ac = '\x01';
  }
  uVar1 = unnamed_function_65372(param_1,uRam00567f78);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = unnamed_function_95402(uRam00557a38);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00569e60,0);
  StaticEventHandler__CallTriggerDashEvent(uVar1,param_1);
  uVar1 = unnamed_function_95402(uRam00557a38);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00569e64,0);
  StaticEventHandler__CallHotBarScrollChangedEvent(uVar1,param_1);
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
  unnamed_function_60038(uVar1,param_1,uRam00569e5c,0);
  iVar3 = unnamed_function_85158(uVar5,uVar1,0);
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



// ---- InputSystem_Actions::get_asset   [wasm func87177 -> ram:81a55a07 ; ghidra: InputSystem_Actions::get_asset]

void InputSystem_Actions__get_asset(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b51 == '\0') {
    unnamed_function_1099(0x5646ec);
    unnamed_function_1099(0x564704);
    unnamed_function_1099(0x5592dc);
    unnamed_function_1099(0x5592e0);
    unnamed_function_1099(0x5760a8);
    unnamed_function_1099(0x577730);
    unnamed_function_1099(0x575f58);
    unnamed_function_1099(0x573440);
    unnamed_function_1099(0x576f58);
    unnamed_function_1099(0x576654);
    unnamed_function_1099(0x57e164);
    unnamed_function_1099(0x572da8);
    unnamed_function_1099(0x578848);
    unnamed_function_1099(0x575e10);
    unnamed_function_1099(0x577190);
    unnamed_function_1099(0x576efc);
    unnamed_function_1099(0x576944);
    unnamed_function_1099(0x575d44);
    unnamed_function_1099(0x578a9c);
    unnamed_function_1099(0x578844);
    unnamed_function_1099(0x576924);
    unnamed_function_1099(0x574730);
    unnamed_function_1099(0x572964);
    unnamed_function_1099(0x577450);
    unnamed_function_1099(0x5790fc);
    unnamed_function_1099(0x575abc);
    cRam00664b51 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam005592dc);
  multiple_2_System_Collections_Generic_List_1___cctor(uVar1,uRam005646ec);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = unnamed_function_95402(uRam005592e0);
  multiple_2_System_Collections_Generic_List_1___cctor(uVar1,uRam00564704);
  *(undefined8 *)(param_1 + 0x6c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined8 *)(param_1 + 0x74) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  uVar1 = UnityEngine_InputSystem_InputActionAsset__LoadFromJson(uRam0057e164,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionAsset__FindBinding(uVar1,uRam00576924,1,0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex(uVar1,uRam00575f58,1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0xc),uRam00575abc,1,0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0xc),uRam00574730,1,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0xc),uRam00576f58,1,0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0xc),uRam00577450,1,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0xc),uRam00572964,1,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0xc),uRam00576efc,1,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionAsset__FindBinding
                    (*(undefined4 *)(param_1 + 8),uRam00578a9c,1,0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex(uVar1,uRam005760a8,1,0);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00577730,1,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00572da8,1,0);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00576944,1,0);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00573440,1,0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00577190,1,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00575e10,1,0);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00576f58,1,0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00578848,1,0);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00578844,1,0);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00576654,1,0);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam005790fc,1,0);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = UnityEngine_InputSystem_InputActionMap__FindActionIndex
                    (*(undefined4 *)(param_1 + 0x30),uRam00575d44,1,0);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return;
}



// ---- InputSystem_Actions::Finalize   [wasm func87178 -> ram:81a55d91 ; ghidra: InputSystem_Actions::Finalize]

void InputSystem_Actions__Finalize(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b52 == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam00664b52 = '\x01';
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  unnamed_function_44782(uVar1,0);
  return;
}



// ---- InputSystem_Actions::get_UI   [wasm func87179 -> ram:81a55dd9 ; ghidra: InputSystem_Actions::get_UI]

void InputSystem_Actions__get_UI(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664b53 == '\0') {
    unnamed_function_1099(0x56592c);
    unnamed_function_1099(0x575850);
    cRam00664b53 = '\x01';
  }
  if (*(int *)(param_2 + 0x6c) == -1) {
    uVar1 = UnityEngine_InputSystem_InputActionAsset__FindActionMap_1
                      (*(undefined4 *)(param_2 + 8),uRam00575850,0);
    *(undefined4 *)(param_2 + 0x6c) = uVar1;
  }
  unnamed_function_48977(&uStack_20,*(undefined4 *)(param_2 + 8),0);
  uStack_8 = uStack_18;
  uStack_10 = uStack_20;
  unnamed_function_41729(&uStack_30,&uStack_10,*(undefined4 *)(param_2 + 0x6c),uRam0056592c);
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = uStack_30;
  return;
}



// ---- InputSystem_Actions::get_KeyboardMouseScheme   [wasm func87180 -> ram:81a55e86 ; ghidra: InputSystem_Actions::get_KeyboardMouseScheme]

void InputSystem_Actions__get_KeyboardMouseScheme(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664b54 == '\0') {
    unnamed_function_1099(0x56592c);
    unnamed_function_1099(0x574950);
    cRam00664b54 = '\x01';
  }
  if (*(int *)(param_2 + 0x70) == -1) {
    uVar1 = UnityEngine_InputSystem_InputActionAsset__FindActionMap_1
                      (*(undefined4 *)(param_2 + 8),uRam00574950,0);
    *(undefined4 *)(param_2 + 0x70) = uVar1;
  }
  unnamed_function_48977(&uStack_20,*(undefined4 *)(param_2 + 8),0);
  uStack_8 = uStack_18;
  uStack_10 = uStack_20;
  unnamed_function_41729(&uStack_30,&uStack_10,*(undefined4 *)(param_2 + 0x70),uRam0056592c);
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = uStack_30;
  return;
}



// ---- InputSystem_Actions::get_GamepadScheme   [wasm func87181 -> ram:81a55f33 ; ghidra: InputSystem_Actions::get_GamepadScheme]

void InputSystem_Actions__get_GamepadScheme(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664b55 == '\0') {
    unnamed_function_1099(0x56592c);
    unnamed_function_1099(0x5787a4);
    cRam00664b55 = '\x01';
  }
  if (*(int *)(param_2 + 0x74) == -1) {
    uVar1 = UnityEngine_InputSystem_InputActionAsset__FindActionMap_1
                      (*(undefined4 *)(param_2 + 8),uRam005787a4,0);
    *(undefined4 *)(param_2 + 0x74) = uVar1;
  }
  unnamed_function_48977(&uStack_20,*(undefined4 *)(param_2 + 8),0);
  uStack_8 = uStack_18;
  uStack_10 = uStack_20;
  unnamed_function_41729(&uStack_30,&uStack_10,*(undefined4 *)(param_2 + 0x74),uRam0056592c);
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = uStack_30;
  return;
}



// ---- InputSystem_Actions::get_TouchScheme   [wasm func87182 -> ram:81a55fe0 ; ghidra: InputSystem_Actions::get_TouchScheme]

void InputSystem_Actions__get_TouchScheme(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664b56 == '\0') {
    unnamed_function_1099(0x56592c);
    unnamed_function_1099(0x5757cc);
    cRam00664b56 = '\x01';
  }
  if (*(int *)(param_2 + 0x78) == -1) {
    uVar1 = UnityEngine_InputSystem_InputActionAsset__FindActionMap_1
                      (*(undefined4 *)(param_2 + 8),uRam005757cc,0);
    *(undefined4 *)(param_2 + 0x78) = uVar1;
  }
  unnamed_function_48977(&uStack_20,*(undefined4 *)(param_2 + 8),0);
  uStack_8 = uStack_18;
  uStack_10 = uStack_20;
  unnamed_function_41729(&uStack_30,&uStack_10,*(undefined4 *)(param_2 + 0x78),uRam0056592c);
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = uStack_30;
  return;
}



// ---- InputSystem_Actions::get_JoystickScheme   [wasm func87183 -> ram:81a5608d ; ghidra: InputSystem_Actions::get_JoystickScheme]

void InputSystem_Actions__get_JoystickScheme(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664b57 == '\0') {
    unnamed_function_1099(0x56592c);
    unnamed_function_1099(0x5794f0);
    cRam00664b57 = '\x01';
  }
  if (*(int *)(param_2 + 0x7c) == -1) {
    uVar1 = UnityEngine_InputSystem_InputActionAsset__FindActionMap_1
                      (*(undefined4 *)(param_2 + 8),uRam005794f0,0);
    *(undefined4 *)(param_2 + 0x7c) = uVar1;
  }
  unnamed_function_48977(&uStack_20,*(undefined4 *)(param_2 + 8),0);
  uStack_8 = uStack_18;
  uStack_10 = uStack_20;
  unnamed_function_41729(&uStack_30,&uStack_10,*(undefined4 *)(param_2 + 0x7c),uRam0056592c);
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = uStack_30;
  return;
}



// ---- InputSystem_Actions::PlayerActions_get_RightClick   [wasm func87184 -> ram:81a56139 ; ghidra: InputSystem_Actions+PlayerActions::get_RightClick]

undefined4 InputSystem_Actions_PlayerActions__get_RightClick(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x24);
}



// ---- InputSystem_Actions::PlayerActions_op_Implicit   [wasm func87186 -> ram:81a56150 ; ghidra: InputSystem_Actions+PlayerActions::op_Implicit]

void InputSystem_Actions_PlayerActions__op_Implicit(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (cRam00664b58 == '\0') {
    unnamed_function_1099(0x557a90);
    unnamed_function_1099(0x55e188);
    unnamed_function_1099(0x5646f0);
    unnamed_function_1099(0x5646f8);
    cRam00664b58 = '\x01';
  }
  if ((param_2 != (int *)0x0) &&
     (iVar1 = unnamed_function_67444(*(undefined4 *)(*param_1 + 0x10),param_2,uRam005646f8),
     iVar5 = iRam005646f0, iVar1 == 0)) {
    iVar1 = *(int *)(*param_1 + 0x10);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    uVar3 = *(uint *)(iVar1 + 0xc);
    if (uVar3 < *(uint *)(*(int *)(iVar1 + 8) + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar3 + 1;
      *(int **)(*(int *)(iVar1 + 8) + uVar3 * 4 + 0x10) = param_2;
    }
    else {
      System_String__Substring
                (iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
    }
    uVar4 = *(undefined4 *)(*param_1 + 0x14);
    uVar3 = 0;
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a56290;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,0);
code_r0x81a56290:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x14);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a56331;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,0);
code_r0x81a56331:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x14);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a563d2;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,0);
code_r0x81a563d2:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x18);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a56473;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,1);
code_r0x81a56473:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x18);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a56514;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,1);
code_r0x81a56514:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x18);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a565b5;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,1);
code_r0x81a565b5:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x1c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a56656;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,2);
code_r0x81a56656:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x1c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a566f7;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,2);
code_r0x81a566f7:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x1c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a56798;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,2);
code_r0x81a56798:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x20);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a56839;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,3);
code_r0x81a56839:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x20);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a568da;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,3);
code_r0x81a568da:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x20);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a5697b;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,3);
code_r0x81a5697b:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x24);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a56a1c;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,4);
code_r0x81a56a1c:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x24);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a56abd;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,4);
code_r0x81a56abd:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x24);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a56b5e;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,4);
code_r0x81a56b5e:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x28);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a56bff;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,5);
code_r0x81a56bff:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x28);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a56ca0;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,5);
code_r0x81a56ca0:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x28);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a56d41;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,5);
code_r0x81a56d41:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x2c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a56de2;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,6);
code_r0x81a56de2:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x2c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a56e83;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,6);
code_r0x81a56e83:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x2c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e188 == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a56f28;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e188,6);
code_r0x81a56f28:
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
  }
  return;
}



// ---- InputSystem_Actions::PlayerActions_AddCallbacks   [wasm func87190 -> ram:81a57cc1 ; ghidra: InputSystem_Actions+PlayerActions::AddCallbacks]

void InputSystem_Actions_PlayerActions__AddCallbacks(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (cRam00664b5a == '\0') {
    unnamed_function_1099(0x564700);
    cRam00664b5a = '\x01';
  }
  iVar1 = unnamed_function_67450(*(undefined4 *)(*param_1 + 0x10),param_2,uRam00564700);
  if (iVar1 != 0) {
    unnamed_function_87188(param_1,param_2,param_1);
  }
  return;
}



// ---- InputSystem_Actions::PlayerActions_RemoveCallbacks   [wasm func87192 -> ram:81a57d51 ; ghidra: InputSystem_Actions+PlayerActions::RemoveCallbacks]

void InputSystem_Actions_PlayerActions__RemoveCallbacks(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_20 [8];
  int iStack_18;
  undefined8 *puStack_14;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664b5b == '\0') {
    unnamed_function_1099(0x561710);
    unnamed_function_1099(0x561714);
    unnamed_function_1099(0x561718);
    unnamed_function_1099(0x5646f4);
    unnamed_function_1099(0x5646fc);
    cRam00664b5b = '\x01';
  }
  uStack_8 = 0;
  uStack_10 = 0;
  UnityEngine_ComputeBuffer__Release(&uStack_10,*(undefined4 *)(*param_1 + 0x10),uRam005646fc);
  iStack_18 = 0;
  puStack_14 = &uStack_10;
  do {
    iRam005ddf34 = 0;
    iVar1 = import::env::invoke_iii(0x483,&uStack_10,uRam00561714);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar3 == 1) {
      uVar2 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a57e77;
    }
    if (iVar1 == 0) goto code_r0x81a57ecc;
    iRam005ddf34 = 0;
    import::env::invoke_viii(0x3670,param_1,uStack_8._4_4_,auStack_20);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
  } while (iVar3 != 1);
  uVar2 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a57e77:
  iVar3 = import::env::getTempRet0();
  iVar1 = import::env::llvm_eh_typeid_for(0x4a99ec);
  if (iVar3 == iVar1) {
    piVar4 = (int *)import::env::__cxa_begin_catch(uVar2);
    iVar1 = *piVar4;
    iRam005ddf34 = 0;
    iStack_18 = iVar1;
    import::env::invoke_v(0x3a);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar3 != 1) {
      if (iVar1 != 0) {
        System_Net_CommandStream__ReceiveCommandResponseCallback(iVar1);
        do {
          halt_trap();
        } while( true );
      }
code_r0x81a57ecc:
      iRam005ddf34 = 0;
      iVar3 = *(int *)(*param_1 + 0x10);
      iVar1 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (0 < iVar1) {
        unnamed_function_84588(*(undefined4 *)(iVar3 + 8),0,iVar1,0);
      }
      InputSystem_Actions_PlayerActions__op_Implicit(param_1,param_2,auStack_20);
      return;
    }
    uVar2 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  iRam005ddf34 = 0;
  import::env::invoke_ii(0x3671,&iStack_18);
  iVar3 = iRam005ddf34;
  iRam005ddf34 = 0;
  if (iVar3 == 1) {
    import::env::__cxa_find_matching_catch_3(0);
    import::env::getTempRet0();
    unnamed_function_642();
    do {
      halt_trap();
    } while( true );
  }
  import::env::__resumeException(uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- InputSystem_Actions::PlayerActions_UnregisterCallbacks   [wasm func87193 -> ram:81a57f6d ; ghidra: InputSystem_Actions+PlayerActions::UnregisterCallbacks]

int * InputSystem_Actions_PlayerActions__UnregisterCallbacks(int *param_1)

{
  if (*param_1 == 0) {
    return param_1;
  }
  System_Net_CommandStream__ReceiveCommandResponseCallback(*param_1);
  do {
    halt_trap();
  } while( true );
}



// ---- InputSystem_Actions::UIActions_get_ScrollWheel   [wasm func87195 -> ram:81a57fa3 ; ghidra: InputSystem_Actions+UIActions::get_ScrollWheel]

undefined4 InputSystem_Actions_UIActions__get_ScrollWheel(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x50);
}



// ---- InputSystem_Actions::UIActions_get_MiddleClick   [wasm func87197 -> ram:81a57fb9 ; ghidra: InputSystem_Actions+UIActions::get_MiddleClick]

undefined4 InputSystem_Actions_UIActions__get_MiddleClick(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x54);
}



// ---- InputSystem_Actions::UIActions_get_RightClick   [wasm func87199 -> ram:81a57fcf ; ghidra: InputSystem_Actions+UIActions::get_RightClick]

undefined4 InputSystem_Actions_UIActions__get_RightClick(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x58);
}



// ---- InputSystem_Actions::UIActions_get_TrackedDevicePosition   [wasm func87201 -> ram:81a57fe5 ; ghidra: InputSystem_Actions+UIActions::get_TrackedDevicePosition]

undefined4 InputSystem_Actions_UIActions__get_TrackedDevicePosition(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x5c);
}



// ---- InputSystem_Actions::UIActions_get_TrackedDeviceOrientation   [wasm func87203 -> ram:81a57ffb ; ghidra: InputSystem_Actions+UIActions::get_TrackedDeviceOrientation]

undefined4 InputSystem_Actions_UIActions__get_TrackedDeviceOrientation(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x60);
}



// ---- InputSystem_Actions::UIActions_get_OpenInventory   [wasm func87205 -> ram:81a58011 ; ghidra: InputSystem_Actions+UIActions::get_OpenInventory]

undefined4 InputSystem_Actions_UIActions__get_OpenInventory(int *param_1)

{
  return *(undefined4 *)(*param_1 + 100);
}



// ---- InputSystem_Actions::UIActions_get_UseItem   [wasm func87207 -> ram:81a58027 ; ghidra: InputSystem_Actions+UIActions::get_UseItem]

undefined4 InputSystem_Actions_UIActions__get_UseItem(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x68);
}



// ---- InputSystem_Actions::UIActions_Get   [wasm func87209 -> ram:81a5803d ; ghidra: InputSystem_Actions+UIActions::Get]

void InputSystem_Actions_UIActions__Get(int *param_1)

{
  UnityEngine_InputSystem_InputActionMap__FindAction_1(*(undefined4 *)(*param_1 + 0x30),0);
  return;
}



// ---- InputSystem_Actions::UIActions_Enable   [wasm func87211 -> ram:81a5805f ; ghidra: InputSystem_Actions+UIActions::Enable]

void InputSystem_Actions_UIActions__Enable(int *param_1)

{
  unnamed_function_49012(*(undefined4 *)(*param_1 + 0x30),0);
  return;
}



// ---- InputSystem_Actions::UIActions_Disable   [wasm func87213 -> ram:81a58081 ; ghidra: InputSystem_Actions+UIActions::Disable]

undefined4 InputSystem_Actions_UIActions__Disable(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = UnityEngine_InputSystem_InputActionMap__get_idDontGenerate
                    (*(undefined4 *)(*param_1 + 0x30),0);
  return uVar1;
}



// ---- InputSystem_Actions::UIActions_op_Implicit   [wasm func87215 -> ram:81a580a4 ; ghidra: InputSystem_Actions+UIActions::op_Implicit]

void InputSystem_Actions_UIActions__op_Implicit(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (cRam00664b5c == '\0') {
    unnamed_function_1099(0x557a90);
    unnamed_function_1099(0x55e18c);
    unnamed_function_1099(0x564708);
    unnamed_function_1099(0x564710);
    cRam00664b5c = '\x01';
  }
  if ((param_2 != (int *)0x0) &&
     (iVar1 = unnamed_function_67444(*(undefined4 *)(*param_1 + 0x34),param_2,uRam00564710),
     iVar5 = iRam00564708, iVar1 == 0)) {
    iVar1 = *(int *)(*param_1 + 0x34);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    uVar3 = *(uint *)(iVar1 + 0xc);
    if (uVar3 < *(uint *)(*(int *)(iVar1 + 8) + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar3 + 1;
      *(int **)(*(int *)(iVar1 + 8) + uVar3 * 4 + 0x10) = param_2;
    }
    else {
      System_String__Substring
                (iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
    }
    uVar4 = *(undefined4 *)(*param_1 + 0x38);
    uVar3 = 0;
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a581e4;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0);
code_r0x81a581e4:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x38);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a58285;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0);
code_r0x81a58285:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x38);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a58326;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0);
code_r0x81a58326:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x3c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a583c7;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,1);
code_r0x81a583c7:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x3c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a58468;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,1);
code_r0x81a58468:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x3c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a58509;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,1);
code_r0x81a58509:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x40);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a585aa;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,2);
code_r0x81a585aa:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x40);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a5864b;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,2);
code_r0x81a5864b:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x40);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a586ec;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,2);
code_r0x81a586ec:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x44);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a5878d;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,3);
code_r0x81a5878d:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x44);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a5882e;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,3);
code_r0x81a5882e:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x44);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a588cf;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,3);
code_r0x81a588cf:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x48);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a58970;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,4);
code_r0x81a58970:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x48);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a58a11;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,4);
code_r0x81a58a11:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x48);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a58ab2;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,4);
code_r0x81a58ab2:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x4c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a58b53;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,5);
code_r0x81a58b53:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x4c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a58bf4;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,5);
code_r0x81a58bf4:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x4c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a58c95;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,5);
code_r0x81a58c95:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x50);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a58d36;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,6);
code_r0x81a58d36:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x50);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a58dd7;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,6);
code_r0x81a58dd7:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x50);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a58e78;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,6);
code_r0x81a58e78:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x54);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
          goto code_r0x81a58f19;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,7);
code_r0x81a58f19:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x54);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
          goto code_r0x81a58fba;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,7);
code_r0x81a58fba:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x54);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
          goto code_r0x81a5905b;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,7);
code_r0x81a5905b:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x58);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
          goto code_r0x81a590fc;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,8);
code_r0x81a590fc:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x58);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
          goto code_r0x81a5919d;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,8);
code_r0x81a5919d:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x58);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
          goto code_r0x81a5923e;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,8);
code_r0x81a5923e:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x5c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
          goto code_r0x81a592df;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,9);
code_r0x81a592df:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x5c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
          goto code_r0x81a59380;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,9);
code_r0x81a59380:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x5c);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
          goto code_r0x81a59421;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,9);
code_r0x81a59421:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x60);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
          goto code_r0x81a594c2;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,10);
code_r0x81a594c2:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x60);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
          goto code_r0x81a59563;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,10);
code_r0x81a59563:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x60);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
          goto code_r0x81a59604;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,10);
code_r0x81a59604:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 100);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
          goto code_r0x81a596a5;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xb);
code_r0x81a596a5:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 100);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
          goto code_r0x81a59746;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xb);
code_r0x81a59746:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 100);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
          goto code_r0x81a597e7;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xb);
code_r0x81a597e7:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x68);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
          goto code_r0x81a59888;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xc);
code_r0x81a59888:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__get_inProgress(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x68);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
          goto code_r0x81a59929;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xc);
code_r0x81a59929:
    uVar3 = 0;
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_canceled(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)(*param_1 + 0x68);
    uVar2 = unnamed_function_95402(uRam00557a90);
    iVar5 = *param_2;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (iRam0055e18c == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
          goto code_r0x81a599ce;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(param_2,iRam0055e18c,0xc);
code_r0x81a599ce:
    unnamed_function_60160(uVar2,param_2,*(undefined4 *)(iVar5 + 4),0);
    UnityEngine_InputSystem_InputAction__remove_started(uVar4,uVar2,0);
  }
  return;
}



// ---- InputSystem_Actions::UIActions_AddCallbacks   [wasm func87219 -> ram:81a5b2b9 ; ghidra: InputSystem_Actions+UIActions::AddCallbacks]

void InputSystem_Actions_UIActions__AddCallbacks(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (cRam00664b5e == '\0') {
    unnamed_function_1099(0x564718);
    cRam00664b5e = '\x01';
  }
  iVar1 = unnamed_function_67450(*(undefined4 *)(*param_1 + 0x34),param_2,uRam00564718);
  if (iVar1 != 0) {
    unnamed_function_87217(param_1,param_2,param_1);
  }
  return;
}



// ---- InputSystem_Actions::UIActions_RemoveCallbacks   [wasm func87221 -> ram:81a5b349 ; ghidra: InputSystem_Actions+UIActions::RemoveCallbacks]

void InputSystem_Actions_UIActions__RemoveCallbacks(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_20 [8];
  int iStack_18;
  undefined8 *puStack_14;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664b5f == '\0') {
    unnamed_function_1099(0x56171c);
    unnamed_function_1099(0x561720);
    unnamed_function_1099(0x561724);
    unnamed_function_1099(0x56470c);
    unnamed_function_1099(0x564714);
    cRam00664b5f = '\x01';
  }
  uStack_8 = 0;
  uStack_10 = 0;
  UnityEngine_ComputeBuffer__Release(&uStack_10,*(undefined4 *)(*param_1 + 0x34),uRam00564714);
  iStack_18 = 0;
  puStack_14 = &uStack_10;
  do {
    iRam005ddf34 = 0;
    iVar1 = import::env::invoke_iii(0x483,&uStack_10,uRam00561720);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar3 == 1) {
      uVar2 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a5b46f;
    }
    if (iVar1 == 0) goto code_r0x81a5b4c4;
    iRam005ddf34 = 0;
    import::env::invoke_viii(0x3672,param_1,uStack_8._4_4_,auStack_20);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
  } while (iVar3 != 1);
  uVar2 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a5b46f:
  iVar3 = import::env::getTempRet0();
  iVar1 = import::env::llvm_eh_typeid_for(0x4a99ec);
  if (iVar3 == iVar1) {
    piVar4 = (int *)import::env::__cxa_begin_catch(uVar2);
    iVar1 = *piVar4;
    iRam005ddf34 = 0;
    iStack_18 = iVar1;
    import::env::invoke_v(0x3a);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar3 != 1) {
      if (iVar1 != 0) {
        System_Net_CommandStream__ReceiveCommandResponseCallback(iVar1);
        do {
          halt_trap();
        } while( true );
      }
code_r0x81a5b4c4:
      iRam005ddf34 = 0;
      iVar3 = *(int *)(*param_1 + 0x34);
      iVar1 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (0 < iVar1) {
        unnamed_function_84588(*(undefined4 *)(iVar3 + 8),0,iVar1,0);
      }
      InputSystem_Actions_UIActions__op_Implicit(param_1,param_2,auStack_20);
      return;
    }
    uVar2 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  iRam005ddf34 = 0;
  import::env::invoke_ii(0x3673,&iStack_18);
  iVar3 = iRam005ddf34;
  iRam005ddf34 = 0;
  if (iVar3 == 1) {
    import::env::__cxa_find_matching_catch_3(0);
    import::env::getTempRet0();
    unnamed_function_642();
    do {
      halt_trap();
    } while( true );
  }
  import::env::__resumeException(uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- InputSystem_Actions::UIActions_UnregisterCallbacks   [wasm func87222 -> ram:81a5b565 ; ghidra: InputSystem_Actions+UIActions::UnregisterCallbacks]

int * InputSystem_Actions_UIActions__UnregisterCallbacks(int *param_1)

{
  if (*param_1 == 0) {
    return param_1;
  }
  System_Net_CommandStream__ReceiveCommandResponseCallback(*param_1);
  do {
    halt_trap();
  } while( true );
}



