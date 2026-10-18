// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: InventoryDescription  (Assembly-CSharp)  -  3 function(s)

// ---- InventoryDescription::ctor   [wasm func86330 -> ram:81a30c7f ; ghidra: InventoryDescription::.ctor]

undefined4 InventoryDescription___ctor(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam006648c1 == '\0') {
    unnamed_function_1099(0x569184);
    unnamed_function_1099(0x56931c);
    unnamed_function_1099(0x569384);
    unnamed_function_1099(0x5586b8);
    unnamed_function_1099(0x5586b4);
    unnamed_function_1099(0x56f490);
    unnamed_function_1099(0x56f494);
    unnamed_function_1099(0x55e1b8);
    cRam006648c1 = '\x01';
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(iRam0055e1b8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055e1b8);
  }
  iVar2 = *(int *)(*(int *)(iRam0055e1b8 + 0x5c) + 4);
  if (iVar2 == 0) {
    if (*(int *)(iRam0055e1b8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055e1b8);
    }
    uVar3 = **(undefined4 **)(iRam0055e1b8 + 0x5c);
    iVar2 = unnamed_function_95402(uRam005586b4);
    UnityEngine_Rendering_DebugUI_Panel__get_isEditorOnly(iVar2,uVar3,uRam0056f490,0);
    *(int *)(*(int *)(iRam0055e1b8 + 0x5c) + 4) = iVar2;
  }
  uVar1 = UnityEngine_Rendering_ListPool_1__Get(uVar1,iVar2,uRam00569384);
  if (*(int *)(iRam0055e1b8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055e1b8);
  }
  iVar2 = *(int *)(*(int *)(iRam0055e1b8 + 0x5c) + 8);
  if (iVar2 == 0) {
    if (*(int *)(iRam0055e1b8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055e1b8);
    }
    uVar3 = **(undefined4 **)(iRam0055e1b8 + 0x5c);
    iVar2 = unnamed_function_95402(uRam005586b8);
    unnamed_function_74373(iVar2,uVar3,uRam0056f494,0);
    *(int *)(*(int *)(iRam0055e1b8 + 0x5c) + 8) = iVar2;
  }
  uVar1 = unnamed_function_71720(uVar1,iVar2,uRam00569184);
  uVar1 = unnamed_function_71779(uVar1,uRam0056931c);
  return uVar1;
}



// ---- InventoryDescription::OnEnable   [wasm func86362 -> ram:81a32cab ; ghidra: InventoryDescription::OnEnable]

void InventoryDescription__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648bf == '\0') {
    unnamed_function_1099(0x557a3c);
    unnamed_function_1099(0x56a774);
    cRam006648bf = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a3c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam0056a774,0);
  StaticEventHandler__add_OnItemUIClickChanged(uVar1,param_1);
  return;
}



// ---- InventoryDescription::OnDisable   [wasm func86363 -> ram:81a32cfb ; ghidra: InventoryDescription::OnDisable]

void InventoryDescription__OnDisable(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam006648c0 == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam006648c0 = '\x01';
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar1 = UnityEngine_Camera__get_targetTexture(uVar2,0,0);
  if (iVar1 != 0) {
    uVar2 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
    unnamed_function_44686(uVar2,1,0);
    unnamed_function_16520
              (*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) + 8) + 0x14),0);
    iVar1 = **(int **)(param_1 + 0x18);
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
              (*(int **)(param_1 + 0x18),
               *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) + 8) + 0xc),
               *(undefined4 *)(iVar1 + 0x2d4));
    iVar1 = **(int **)(param_1 + 0x1c);
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2d0) * 4))
              (*(int **)(param_1 + 0x1c),
               *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) + 8) + 0x18),
               *(undefined4 *)(iVar1 + 0x2d4));
  }
  return;
}



