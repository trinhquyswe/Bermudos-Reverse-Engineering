// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Stamina  (Assembly-CSharp)  -  6 function(s)

// ---- Stamina::Update   [wasm func86916 -> ram:81a4b362 ; ghidra: Stamina::Update]

void Stamina__Update(int param_1,int param_2)

{
  float fVar1;
  
  if (0.0 < *(float *)(param_1 + 0x14)) {
    fVar1 = *(float *)(param_1 + 0x14) - (float)param_2;
    *(float *)(param_1 + 0x14) = fVar1;
    StaminaEvent__remove_OnStaminaChanged
              (*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3c),
               fVar1 / (float)*(int *)(param_1 + 0x10),fVar1,(float)param_2,param_1);
  }
  return;
}



// ---- Stamina::Awake   [wasm func87168 -> ram:81a555ba ; ghidra: Stamina::Awake]

void Stamina__Awake(int param_1)

{
  float fVar1;
  
  fVar1 = (float)*(int *)(param_1 + 0x10);
  *(float *)(param_1 + 0x14) = fVar1;
  StaminaEvent__remove_OnStaminaChanged
            (*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3c),fVar1 / fVar1,fVar1,0,param_1);
  return;
}



// ---- Stamina::Start   [wasm func87169 -> ram:81a555e6 ; ghidra: Stamina::Start]

void Stamina__Start(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x14);
  if (fVar2 < (float)*(int *)(param_1 + 0x10)) {
    fVar3 = *(float *)(param_1 + 0x24);
    fVar1 = (float)UnityEngine_Time__get_time(0);
    fVar2 = fVar2 + fVar3 * fVar1;
    *(float *)(param_1 + 0x14) = fVar2;
    StaminaEvent__remove_OnStaminaChanged
              (*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3c),
               fVar2 / (float)*(int *)(param_1 + 0x10),fVar2,0,param_1);
  }
  fVar2 = (float)UnityEngine_Rendering_Universal_ScriptableRenderer__InternalStartRendering(0);
  *(float *)(param_1 + 0x1c) = fVar2 + *(float *)(param_1 + 0x20);
  return;
}



// ---- Stamina::UseStamina   [wasm func87170 -> ram:81a55641 ; ghidra: Stamina::UseStamina]

void Stamina__UseStamina(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x14);
  if (fVar2 < (float)*(int *)(param_1 + 0x10)) {
    fVar3 = *(float *)(param_1 + 0x24);
    fVar1 = (float)UnityEngine_Time__get_time(0);
    fVar2 = fVar2 + fVar3 * fVar1;
    *(float *)(param_1 + 0x14) = fVar2;
    StaminaEvent__remove_OnStaminaChanged
              (*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3c),
               fVar2 / (float)*(int *)(param_1 + 0x10),fVar2,0,param_1);
  }
  return;
}



// ---- Stamina::RegenerateStamina   [wasm func87171 -> ram:81a5568b ; ghidra: Stamina::RegenerateStamina]

void Stamina__RegenerateStamina(int param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0x40a000003f800000;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- Stamina::ctor   [wasm func87172 -> ram:81a556a7 ; ghidra: Stamina::.ctor]

void Stamina___ctor(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b4b == '\0') {
    unnamed_function_1099(0x557b10);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x56c9cc);
    cRam00664b4b = '\x01';
  }
  iVar7 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 8);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(**(int **)(iVar7 + 0x5c) + 0x10) + 0x3c);
  uVar5 = unnamed_function_95402(uRam00557b10);
  unnamed_function_60334(uVar5,param_1,uRam0056c9cc,0);
  if (cRam00664b4d == '\0') {
    unnamed_function_1099(0x557b10);
    cRam00664b4d = '\x01';
  }
  iVar4 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar6 = unnamed_function_85158(iVar4,uVar5,0);
    uVar2 = uRam00557b10;
    if ((iVar6 != 0) && (iVar3 = unnamed_function_1112(iVar6,uRam00557b10), iVar3 == 0)) break;
    iVar3 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar3,iVar4);
    bVar1 = iVar4 == iVar3;
    iVar4 = iVar3;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar6,uVar2);
  do {
    halt_trap();
  } while( true );
}



