// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: EndPhase1  (Assembly-CSharp)  -  7 function(s)

// ---- EndPhase1::OnAwake   [wasm func86965 -> ram:81a4d0d4 ; ghidra: EndPhase1::OnAwake]

void EndPhase1__OnAwake(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam00664abc == '\0') {
    unnamed_function_1099(0x565d6c);
    unnamed_function_1099(0x573ce0);
    cRam00664abc = '\x01';
  }
  iVar2 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  SoundEffectManager__Start(**(undefined4 **)(iVar2 + 0x5c),*(undefined4 *)(param_1 + 0x4c),0);
  UnityEngine_MonoBehaviour__StopCoroutine_2(*(undefined4 *)(param_1 + 0x40),0);
  UnityEngine_MonoBehaviour__StopCoroutine_2(*(undefined4 *)(param_1 + 0x44),0);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
  if (cRam00664abe == '\0') {
    unnamed_function_1099(0x55ddc4);
    cRam00664abe = '\x01';
  }
  iVar2 = unnamed_function_95402(uRam0055ddc4);
  *(int *)(iVar2 + 0x10) = param_1;
  *(undefined4 *)(iVar2 + 8) = 0;
  BehaviorDesigner_Runtime_Tasks_Task__StartCoroutine(param_1,iVar2,0);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar1 = UnityEngine_LayerMask__LayerToName(uRam00573ce0,0);
  UnityEngine_GameObject__get_transform(uVar3,uVar1,0);
  return;
}



// ---- EndPhase1::OnUpdate   [wasm func86966 -> ram:81a4d1c5 ; ghidra: EndPhase1::OnUpdate]

int EndPhase1__OnUpdate(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664abe == '\0') {
    unnamed_function_1099(0x55ddc4);
    cRam00664abe = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ddc4);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- EndPhase1::OnStart   [wasm func86967 -> ram:81a4d203 ; ghidra: EndPhase1::OnStart]

undefined4 EndPhase1__OnStart(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (cRam00664abd == '\0') {
    unnamed_function_1099(0x565ccc);
    unnamed_function_1099(0x579c00);
    cRam00664abd = '\x01';
  }
  if (*(float *)(param_1 + 0x34) <= 0.0) {
    uVar2 = 2;
    if (*(char *)(param_1 + 0x48) == '\0') {
      uVar2 = 3;
    }
    return uVar2;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    fVar3 = *(float *)(param_1 + 0x38);
    fVar1 = (float)UnityEngine_Time__get_time(0);
    *(float *)(param_1 + 0x38) = fVar3 + fVar1 / *(float *)(param_1 + 0x3c);
    fVar3 = *(float *)(param_1 + 0x34);
    fVar1 = (float)UnityEngine_Time__get_time(0);
    *(float *)(param_1 + 0x34) = fVar3 - fVar1;
    uVar2 = unnamed_function_61203(*(undefined4 *)(param_1 + 0x30),uRam00565ccc);
    UnityEngine_Material__SetInt(uVar2,uRam00579c00,*(undefined4 *)(param_1 + 0x38),0);
  }
  return 3;
}



// ---- EndPhase1::EndPhase1Coroutine   [wasm func86968 -> ram:81a4d29d ; ghidra: EndPhase1::EndPhase1Coroutine]

void EndPhase1__EndPhase1Coroutine(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool___cctor(param_1,0);
  return;
}



// ---- EndPhase1::EndPhase1Coroutine_d_12_System_IDisposable_Dispose   [wasm func86969 -> ram:81a4d2b4 ; ghidra: EndPhase1+<EndPhase1Coroutine>d__12::System.IDisposable.Dispose]

undefined4 EndPhase1_<EndPhase1Coroutine>d__12__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam00664abf == '\0') {
    unnamed_function_1099(0x55c620);
    unnamed_function_1099(0x55d134);
    cRam00664abf = '\x01';
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      iVar2 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar1 = *(undefined4 *)(iVar2 + 0x2c);
      if (*(int *)(iRam0055c620 + 0x74) == 0) {
        unnamed_function_94848(iRam0055c620);
      }
      multiple_2_UnityEngine_Animator__SetTrigger
                (uVar1,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x4c),0);
      *(undefined1 *)(iVar2 + 0x48) = 1;
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = unnamed_function_95402(uRam0055d134);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,0x3f000000,0)
  ;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}



// ---- EndPhase1::EndPhase1Coroutine_d_12_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86970 -> ram:81a4d369 ; ghidra: EndPhase1+<EndPhase1Coroutine>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void EndPhase1_<EndPhase1Coroutine>d__12__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f114);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- EndPhase1::EndPhase1Coroutine_d_12_System_Collections_IEnumerator_get_Current   [wasm func86971 -> ram:81a4d391 ; ghidra: EndPhase1+<EndPhase1Coroutine>d__12::System.Collections.IEnumerator.get_Current]

void EndPhase1_<EndPhase1Coroutine>d__12__System_Collections_IEnumerator_get_Current(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ac0 == '\0') {
    unnamed_function_1099(0x56cec0);
    unnamed_function_1099(0x56cec8);
    unnamed_function_1099(0x56cec4);
    unnamed_function_1099(0x56ced0);
    unnamed_function_1099(0x56cee0);
    unnamed_function_1099(0x56cee4);
    unnamed_function_1099(0x56cee8);
    cRam00664ac0 = '\x01';
  }
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cec0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056ced0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cee8);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cee4);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cec8);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cee0);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cec4);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  return;
}



