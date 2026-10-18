// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: ChatController  (Assembly-CSharp)  -  3 function(s)

// ---- ChatController::OnEnable   [wasm func86173 -> ram:81a23400 ; ghidra: ChatController::OnEnable]

void ChatController__OnEnable(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664841 == '\0') {
    unnamed_function_1099(0x567b4c);
    unnamed_function_1099(0x55982c);
    unnamed_function_1099(0x566800);
    cRam00664841 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 300);
  uVar1 = unnamed_function_95402(uRam0055982c);
  unnamed_function_71904(uVar1,param_1,uRam00567b4c,0);
  multiple_3_UnityEngine_Events_UnityEvent_1__Invoke(uVar2,uVar1,uRam00566800);
  return;
}



// ---- ChatController::OnDisable   [wasm func86174 -> ram:81a2346d ; ghidra: ChatController::OnDisable]

void ChatController__OnDisable(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  if (cRam00664842 == '\0') {
    unnamed_function_1099(0x55a984);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x559cf4);
    unnamed_function_1099(0x55c8d8);
    unnamed_function_1099(0x570ae4);
    unnamed_function_1099(0x571d48);
    unnamed_function_1099(0x57aef0);
    unnamed_function_1099(0x571c5c);
    unnamed_function_1099(0x5796c8);
    cRam00664842 = '\x01';
  }
  TMPro_TMP_InputField__get_text
            (*(undefined4 *)(param_1 + 0x10),**(undefined4 **)(iRam0055c8d8 + 0x5c),0);
  if (*(int *)(iRam0055a984 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a984);
  }
  uStack_8 = unnamed_function_82222(0);
  iVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,8);
  *(undefined4 *)(iVar1 + 0x10) = uRam005796c8;
  uStack_c = System_DateTime__GetHashCode(&uStack_8,0);
  uVar2 = System_Int32__GetHashCode(&uStack_c,uRam0057aef0,0);
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = uRam00571c5c;
  uStack_c = System_DateTime__get_Millisecond(&uStack_8,0);
  uVar2 = System_Int32__GetHashCode(&uStack_c,uRam0057aef0,0);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x20) = uRam00571c5c;
  uStack_c = System_DateTime__get_Month(&uStack_8,0);
  uVar2 = System_Int32__GetHashCode(&uStack_c,uRam0057aef0,0);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  uVar2 = uRam00571d48;
  *(undefined4 *)(iVar1 + 0x2c) = param_2;
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  uVar2 = UnityEngine_Object__get_name(iVar1,0);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar1 = UnityEngine_Camera__get_targetTexture(uVar3,0,0);
  if (iVar1 != 0) {
    iVar1 = **(int **)(param_1 + 0x14);
    uVar3 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0x2c8) * 4))
                      (*(int **)(param_1 + 0x14),*(undefined4 *)(iVar1 + 0x2cc));
    iVar1 = multiple_2_System_String__Equals(uVar3,**(undefined4 **)(iRam0055c8d8 + 0x5c),0);
    piVar4 = *(int **)(param_1 + 0x14);
    iVar5 = *piVar4;
    if (iVar1 == 0) {
      uVar3 = (**(code **)((ulonglong)*(uint *)(iVar5 + 0x2c8) * 4))
                        (piVar4,*(undefined4 *)(iVar5 + 0x2cc));
      uVar2 = unnamed_function_81504(uVar3,uRam00570ae4,uVar2,0);
      (**(code **)((ulonglong)*(uint *)(*piVar4 + 0x2d0) * 4))
                (piVar4,uVar2,*(undefined4 *)(*piVar4 + 0x2d4));
    }
    else {
      (**(code **)((ulonglong)*(uint *)(iVar5 + 0x2d0) * 4))
                (piVar4,uVar2,*(undefined4 *)(iVar5 + 0x2d4));
    }
  }
  TMPro_TMP_InputField__Validate(*(undefined4 *)(param_1 + 0x10),0);
  UnityEngine_UI_Scrollbar__get_value(*(undefined4 *)(param_1 + 0x18),0,0);
  return;
}



// ---- ChatController::ctor   [wasm func86175 -> ram:81a236c1 ; ghidra: ChatController::.ctor]

void ChatController___ctor(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_4;
  
  if (cRam00664843 == '\0') {
    unnamed_function_1099(0x5771f4);
    unnamed_function_1099(0x570c18);
    unnamed_function_1099(0x574364);
    cRam00664843 = '\x01';
  }
  uStack_4 = 0;
  piVar3 = *(int **)(param_1 + 0x10);
  uVar1 = uRam00574364;
  if (-1 < *(int *)(*(int *)(param_1 + 0x18) + 0xcc)) {
    uStack_4 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xcc);
    uVar1 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(&uStack_4,0);
    uStack_4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xcc);
    uVar2 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData(&uStack_4,0);
    uVar1 = System_Int32__ToString_1(uRam005771f4,uVar1,uRam00570c18,uVar2,0);
  }
  iVar4 = *piVar3;
  (**(code **)((ulonglong)*(uint *)(iVar4 + 0x2d0) * 4))
            (piVar3,uVar1,*(undefined4 *)(iVar4 + 0x2d4));
  return;
}



