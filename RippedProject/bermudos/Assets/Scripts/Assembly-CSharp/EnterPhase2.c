// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: EnterPhase2  (Assembly-CSharp)  -  4 function(s)

// ---- EnterPhase2::OnAwake   [wasm func86972 -> ram:81a4d468 ; ghidra: EnterPhase2::OnAwake]

void EnterPhase2__OnAwake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664ac1 == '\0') {
    unnamed_function_1099(0x55c620);
    unnamed_function_1099(0x572aa0);
    cRam00664ac1 = '\x01';
  }
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar1 = UnityEngine_LayerMask__LayerToName(uRam00572aa0,0);
  UnityEngine_GameObject__get_transform(uVar2,uVar1,0);
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18) =
       *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x14);
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x18) =
       *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  if (*(int *)(iRam0055c620 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__SetTrigger
            (uVar1,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x68),0);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x24) = 1;
  UnityEngine_Rigidbody2D__set_isKinematic(*(undefined4 *)(param_1 + 0x44),4,0);
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x3c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x54) + 0x28) = 1;
  return;
}



// ---- EnterPhase2::OnStart   [wasm func86973 -> ram:81a4d530 ; ghidra: EnterPhase2::OnStart]

undefined4 EnterPhase2__OnStart(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (cRam00664ac2 == '\0') {
    unnamed_function_1099(0x565ccc);
    unnamed_function_1099(0x579c00);
    unnamed_function_1099(0x572aa0);
    cRam00664ac2 = '\x01';
  }
  if (0.0 < *(float *)(param_1 + 0x38)) {
    fVar4 = *(float *)(param_1 + 0x40);
    fVar1 = (float)UnityEngine_Time__get_time(0);
    *(float *)(param_1 + 0x40) = fVar4 - fVar1 / *(float *)(param_1 + 0x3c);
    uVar2 = unnamed_function_61203(*(undefined4 *)(param_1 + 0x34),uRam00565ccc);
    UnityEngine_Material__SetInt(uVar2,uRam00579c00,*(undefined4 *)(param_1 + 0x40),0);
    fVar4 = *(float *)(param_1 + 0x38);
    fVar1 = (float)UnityEngine_Time__get_time(0);
    *(float *)(param_1 + 0x38) = fVar4 - fVar1;
    return 3;
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar2 = UnityEngine_LayerMask__LayerToName(uRam00572aa0,0);
  UnityEngine_GameObject__get_transform(uVar3,uVar2,0);
  return 2;
}



// ---- EnterPhase2::OnUpdate   [wasm func86974 -> ram:81a4d5d9 ; ghidra: EnterPhase2::OnUpdate]

void EnterPhase2__OnUpdate(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool___cctor(param_1,0);
  return;
}



// ---- EnterPhase2::ctor   [wasm func86975 -> ram:81a4d5fa ; ghidra: EnterPhase2::.ctor]

void EnterPhase2___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ac3 == '\0') {
    unnamed_function_1099(0x56cee4);
    cRam00664ac3 = '\x01';
  }
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cee4);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}



