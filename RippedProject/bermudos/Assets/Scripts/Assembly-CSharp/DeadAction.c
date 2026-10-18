// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: DeadAction  (Assembly-CSharp)  -  4 function(s)

// ---- DeadAction::OnStart   [wasm func86961 -> ram:81a4ce59 ; ghidra: DeadAction::OnStart]

undefined4 DeadAction__OnStart(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  
  if (cRam00664ab9 == '\0') {
    unnamed_function_1099(0x565ccc);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x579c00);
    cRam00664ab9 = '\x01';
  }
  if (0.0 < *(float *)(param_1 + 0x40)) {
    fVar4 = *(float *)(param_1 + 0x44);
    fVar1 = (float)UnityEngine_Time__get_time(0);
    *(float *)(param_1 + 0x44) = fVar4 + fVar1 / *(float *)(param_1 + 0x48);
    uVar2 = unnamed_function_61203(*(undefined4 *)(param_1 + 0x2c),uRam00565ccc);
    UnityEngine_Material__SetInt(uVar2,uRam00579c00,*(undefined4 *)(param_1 + 0x44),0);
    fVar4 = *(float *)(param_1 + 0x40);
    fVar1 = (float)UnityEngine_Time__get_time(0);
    *(float *)(param_1 + 0x40) = fVar4 - fVar1;
    return 3;
  }
  iVar3 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (cRam00664b1b == '\0') {
    unnamed_function_1099(0x565d58);
    cRam00664b1b = '\x01';
  }
  *(undefined4 *)(iVar3 + 0x1c) = 5;
  if (cRam00664b1c == '\0') {
    unnamed_function_1099(0x57be08);
    cRam00664b1c = '\x01';
  }
  UnityEngine_PlayerPrefs__TrySetSetString(uRam0057be08,1,0);
  GameManager__SaveBossState(iVar3,iVar3);
  iVar3 = *(int *)(iVar3 + 0x20);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),5,*(undefined4 *)(iVar3 + 0x14));
  }
  return 1;
}



// ---- DeadAction::OnUpdate   [wasm func86962 -> ram:81a4cfa6 ; ghidra: DeadAction::OnUpdate]

void DeadAction__OnUpdate(int param_1)

{
  undefined4 uVar1;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664aba == '\0') {
    unnamed_function_1099(0x565ccc);
    unnamed_function_1099(0x579c00);
    unnamed_function_1099(0x579c04);
    cRam00664aba = '\x01';
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(param_1 + 0x2c),uRam00565ccc);
  uStack_8 = *(undefined8 *)(param_1 + 0x54);
  uStack_10 = *(undefined8 *)(param_1 + 0x4c);
  UnityEngine_Material__SetFloat(uVar1,uRam00579c04,&uStack_10,0);
  unnamed_function_44686(*(undefined4 *)(param_1 + 8),0,0);
  uVar1 = unnamed_function_61203(*(undefined4 *)(param_1 + 0x2c),uRam00565ccc);
  UnityEngine_Material__SetInt(uVar1,uRam00579c00,0,0);
  return;
}



// ---- DeadAction::OnEnd   [wasm func86963 -> ram:81a4d053 ; ghidra: DeadAction::OnEnd]

void DeadAction__OnEnd(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0x40400000;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool___cctor(param_1,0);
  return;
}



// ---- DeadAction::ctor   [wasm func86964 -> ram:81a4d069 ; ghidra: DeadAction::.ctor]

void DeadAction___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664abb == '\0') {
    unnamed_function_1099(0x56cec0);
    unnamed_function_1099(0x56cedc);
    unnamed_function_1099(0x56cee4);
    cRam00664abb = '\x01';
  }
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cec0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cee4);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cedc);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}



