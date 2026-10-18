// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: ItemDropper  (Assembly-CSharp)  -  4 function(s)

// ---- ItemDropper::Awake   [wasm func86414 -> ram:81a358f2 ; ghidra: ItemDropper::Awake]

void ItemDropper__Awake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam006648db == '\0') {
    unnamed_function_1099(0x557ac4);
    unnamed_function_1099(0x56a7c8);
    cRam006648db = '\x01';
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = unnamed_function_95402(uRam00557ac4);
  unnamed_function_60334(uVar1,param_1,uRam0056a7c8,0);
  Destroyed_<Die>d__7__System_Collections_IEnumerator_get_Current(uVar2,uVar1,0);
  return;
}



// ---- ItemDropper::OnEnable   [wasm func86415 -> ram:81a3594c ; ghidra: ItemDropper::OnEnable]

void ItemDropper__OnEnable(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam006648dc == '\0') {
    unnamed_function_1099(0x557ac4);
    unnamed_function_1099(0x56a7c8);
    cRam006648dc = '\x01';
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = unnamed_function_95402(uRam00557ac4);
  unnamed_function_60334(uVar1,param_1,uRam0056a7c8,0);
  DestroyedEvent__add_OnDestroyed(uVar2,uVar1,0);
  return;
}



// ---- ItemDropper::OnDisable   [wasm func86416 -> ram:81a359a6 ; ghidra: ItemDropper::OnDisable]

void ItemDropper__OnDisable(undefined4 param_1,int param_2)

{
  if (*(char *)(param_2 + 8) == '\0') {
    ItemDropper__DestroyedEvent_OnDestroyed(param_1,param_2);
  }
  return;
}



// ---- ItemDropper::DestroyedEvent_OnDestroyed   [wasm func86417 -> ram:81a359bb ; ghidra: ItemDropper::DestroyedEvent_OnDestroyed]

void ItemDropper__DestroyedEvent_OnDestroyed(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam006648dd == '\0') {
    unnamed_function_1099(0x569abc);
    unnamed_function_1099(0x563438);
    unnamed_function_1099(0x56343c);
    unnamed_function_1099(0x56b548);
    unnamed_function_1099(0x55be2c);
    cRam006648dd = '\x01';
  }
  uVar1 = multiple_2_UnityEngine_PropertyName__ToString
                    (0,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc),0);
  iVar2 = unnamed_function_6529(*(undefined4 *)(param_1 + 0x10),uVar1,uRam0056343c);
  iVar3 = multiple_2_UnityEngine_PropertyName__ToString(0,100,0);
  if ((float)iVar3 < *(float *)(iVar2 + 0x1c)) {
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
    uVar1 = System_Linq_Enumerable__Count(param_1,0);
    UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar1,0);
    if (cRam006603e8 == '\0') {
      unnamed_function_1099(0x55c148);
      cRam006603e8 = '\x01';
    }
    uStack_18 = (*(undefined8 **)(iRam0055c148 + 0x5c))[1];
    uStack_20 = **(undefined8 **)(iRam0055c148 + 0x5c);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    uStack_28 = uStack_8;
    uStack_38 = uStack_18;
    uStack_30 = uStack_10;
    uStack_40 = uStack_20;
    uVar1 = unnamed_function_86418(uVar4,&uStack_30,&uStack_40,uRam0056b548);
    iVar3 = UnityEngine_Object__set_name(uVar1,uRam00569abc);
    *(int *)(iVar3 + 0x18) = iVar2;
  }
  return;
}



