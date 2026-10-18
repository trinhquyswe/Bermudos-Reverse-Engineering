// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: StunBar  (Assembly-CSharp)  -  5 function(s)

// ---- StunBar::Awake   [wasm func87102 -> ram:81a52db0 ; ghidra: StunBar::Awake]

void StunBar__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b0c == '\0') {
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x56cbd0);
    cRam00664b0c = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar5,param_1,uRam0056cbd0,0);
  if (cRam00664b44 == '\0') {
    unnamed_function_1099(0x557b08);
    cRam00664b44 = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85158(iVar3,uVar5,0);
    uVar2 = uRam00557b08;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557b08), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar6,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- StunBar::OnEnable   [wasm func87103 -> ram:81a52e7b ; ghidra: StunBar::OnEnable]

void StunBar__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b0d == '\0') {
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x56cbd0);
    cRam00664b0d = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar5,param_1,uRam0056cbd0,0);
  if (cRam00664b45 == '\0') {
    unnamed_function_1099(0x557b08);
    cRam00664b45 = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85160(iVar3,uVar5,0);
    uVar2 = uRam00557b08;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557b08), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar6,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- StunBar::OnDisable   [wasm func87104 -> ram:81a52f45 ; ghidra: StunBar::OnDisable]

void StunBar__OnDisable(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(float *)(param_2 + 0xc) <= 0.0) {
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    UnityEngine_UI_Slider__get_maxValue(*(undefined4 *)(param_1 + 0x14),uVar1,0);
    iVar2 = **(int **)(param_1 + 0x14);
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0x238) * 4))
              (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(iVar2 + 0x23c));
  }
  return;
}



// ---- StunBar::PoiseEvent_OnPoise   [wasm func87105 -> ram:81a52f91 ; ghidra: StunBar::PoiseEvent_OnPoise]

void StunBar__PoiseEvent_OnPoise(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = **(int **)(param_1 + 0x14);
  fVar1 = (float)(**(code **)((ulonglong)*(uint *)(iVar4 + 0x230) * 4))
                           (*(int **)(param_1 + 0x14),*(undefined4 *)(iVar4 + 0x234));
  if (0.0 < fVar1) {
    piVar3 = *(int **)(param_1 + 0x14);
    fVar1 = (float)(**(code **)((ulonglong)*(uint *)(*piVar3 + 0x230) * 4))
                             (piVar3,*(undefined4 *)(*piVar3 + 0x234));
    fVar2 = (float)UnityEngine_Time__get_time(0);
    (**(code **)((ulonglong)*(uint *)(*piVar3 + 0x238) * 4))
              (piVar3,fVar1 - fVar2,*(undefined4 *)(*piVar3 + 0x23c));
  }
  return;
}



// ---- StunBar::ctor   [wasm func87106 -> ram:81a52ff0 ; ghidra: StunBar::.ctor]

void StunBar___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b0e == '\0') {
    unnamed_function_1099(0x567f68);
    cRam00664b0e = '\x01';
  }
  uVar1 = unnamed_function_65372(param_1,uRam00567f68);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



