// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Arrow  (Assembly-CSharp)  -  3 function(s)

// ---- Arrow::Awake   [wasm func86642 -> ram:81a40eb6 ; ghidra: Arrow::Awake]

void Arrow__Awake(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  uVar11 = *param_2;
  fVar1 = (float)((ulonglong)uVar11 >> 0x20);
  fVar9 = (float)((ulonglong)*param_3 >> 0x20);
  fVar10 = (float)*param_3;
  if (cRam006634ad == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam006634ad = '\x01';
  }
  fVar2 = fVar9 - fVar1;
  fVar3 = fVar10 - (float)uVar11;
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (1e-05 < fVar4) {
    fVar5 = fVar3 / fVar4;
    fVar6 = -fVar2 / fVar4;
  }
  else {
    if (cRam0066482a == '\0') {
      unnamed_function_1099(0x55d024);
      cRam0066482a = '\x01';
    }
    fVar5 = (*(float **)(iRam0055d024 + 0x5c))[1];
    fVar6 = **(float **)(iRam0055d024 + 0x5c);
  }
  if (cRam006634ad == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam006634ad = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  if (1e-05 < fVar4) {
    fVar7 = fVar2 / fVar4;
    fVar8 = fVar3 / fVar4;
  }
  else {
    if (cRam0066482a == '\0') {
      unnamed_function_1099(0x55d024);
      cRam0066482a = '\x01';
    }
    fVar7 = (*(float **)(iRam0055d024 + 0x5c))[1];
    fVar8 = **(float **)(iRam0055d024 + 0x5c);
  }
  if (cRam006634ad == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam006634ad = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar9 = fVar2 + fVar9;
  fVar10 = fVar3 + fVar10;
  if (1e-05 < fVar4) {
    fVar2 = fVar2 / fVar4;
    fVar3 = fVar3 / fVar4;
  }
  else {
    if (cRam0066482a == '\0') {
      unnamed_function_1099(0x55d024);
      cRam0066482a = '\x01';
    }
    fVar2 = (*(float **)(iRam0055d024 + 0x5c))[1];
    fVar3 = **(float **)(iRam0055d024 + 0x5c);
  }
  UnityEngine_LineRenderer__set_endColor(*(undefined4 *)(param_1 + 0x10),5,0);
  uStack_8 = 0;
  uStack_58 = 0;
  uStack_60 = uVar11;
  fStack_10 = (float)uVar11;
  fStack_c = fVar1;
  multiple_2_UnityEngine_LineRenderer__set_positionCount
            (*(undefined4 *)(param_1 + 0x10),0,&uStack_60,0);
  uStack_18 = 0;
  uStack_68 = 0;
  uStack_70 = CONCAT44(fVar9,fVar10);
  fStack_20 = fVar10;
  fStack_1c = fVar9;
  multiple_2_UnityEngine_LineRenderer__set_positionCount
            (*(undefined4 *)(param_1 + 0x10),1,&uStack_70,0);
  uStack_28 = 0;
  uStack_78 = 0;
  fStack_2c = fVar5 + (fVar9 - fVar7);
  fStack_30 = fVar6 + (fVar10 - fVar8);
  uStack_80 = CONCAT44(fStack_2c,fStack_30);
  multiple_2_UnityEngine_LineRenderer__set_positionCount
            (*(undefined4 *)(param_1 + 0x10),2,&uStack_80,0);
  uStack_38 = 0;
  uStack_88 = 0;
  uStack_90 = CONCAT44(fVar9,fVar10);
  fStack_40 = fVar10;
  fStack_3c = fVar9;
  multiple_2_UnityEngine_LineRenderer__set_positionCount
            (*(undefined4 *)(param_1 + 0x10),3,&uStack_90,0);
  uStack_48 = 0;
  uStack_98 = 0;
  fStack_4c = (fVar9 - fVar2) - fVar5;
  fStack_50 = (fVar10 - fVar3) - fVar6;
  uStack_a0 = CONCAT44(fStack_4c,fStack_50);
  multiple_2_UnityEngine_LineRenderer__set_positionCount
            (*(undefined4 *)(param_1 + 0x10),4,&uStack_a0,0);
  return;
}



// ---- Arrow::MakeArrow   [wasm func86643 -> ram:81a4123f ; ghidra: Arrow::MakeArrow]

void Arrow__MakeArrow(int param_1)

{
  UnityEngine_LineRenderer__set_endColor(*(undefined4 *)(param_1 + 0x10),0,0);
  return;
}



// ---- Arrow::ctor   [wasm func86644 -> ram:81a4124f ; ghidra: Arrow::.ctor]

void Arrow___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam0066496b == '\0') {
    unnamed_function_1099(0x567e1c);
    unnamed_function_1099(0x567ef0);
    cRam0066496b = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ef0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e1c);
  *(undefined4 *)(param_1 + 0x20) = 3;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



