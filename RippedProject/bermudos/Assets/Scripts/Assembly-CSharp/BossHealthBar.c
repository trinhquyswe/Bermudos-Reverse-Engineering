// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: BossHealthBar  (Assembly-CSharp)  -  3 function(s)

// ---- BossHealthBar::OnEnable   [wasm func87139 -> ram:81a54414 ; ghidra: BossHealthBar::OnEnable]

void BossHealthBar__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b2b == '\0') {
    unnamed_function_1099(0x557a2c);
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x567894);
    unnamed_function_1099(0x567898);
    unnamed_function_1099(0x55be2c);
    cRam00664b2b = '\x01';
  }
  uVar5 = unnamed_function_95402(uRam00557a2c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar5,param_1,uRam00567898,0);
  StaticEventHandler__add_OnBossChanged(uVar5,0);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar6 = UnityEngine_Camera__get_targetTexture(uVar5,0,0);
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 0x1c);
    uVar5 = unnamed_function_95402(uRam00557acc);
    unnamed_function_60334(uVar5,param_1,uRam00567894,0);
    if (cRam00664b40 == '\0') {
      unnamed_function_1099(0x557acc);
      cRam00664b40 = '\x01';
    }
    iVar3 = *(int *)(iVar6 + 0x10);
    do {
      iVar4 = 0;
      iVar7 = unnamed_function_85160(iVar3,uVar5,0);
      uVar2 = uRam00557acc;
      if ((iVar7 != 0) && (iVar4 = unnamed_function_1112(iVar7,uRam00557acc), iVar4 == 0)) {
        unnamed_function_1116(iVar7,uVar2);
        do {
          halt_trap();
        } while( true );
      }
      iVar4 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar4,iVar3);
      bVar1 = iVar3 != iVar4;
      iVar3 = iVar4;
    } while (bVar1);
  }
  return;
}



// ---- BossHealthBar::OnDisable   [wasm func87140 -> ram:81a54548 ; ghidra: BossHealthBar::OnDisable]

void BossHealthBar__OnDisable(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b2c == '\0') {
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x567894);
    cRam00664b2c = '\x01';
  }
  iVar7 = *(int *)(*(int *)(param_2 + 8) + 0x10);
  *(int *)(param_1 + 0x1c) = iVar7;
  uVar5 = unnamed_function_95402(uRam00557acc);
  unnamed_function_60334(uVar5,param_1,uRam00567894,0);
  if (cRam00664b3f == '\0') {
    unnamed_function_1099(0x557acc);
    cRam00664b3f = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85158(iVar3,uVar5,0);
    uVar2 = uRam00557acc;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557acc), iVar4 == 0)) break;
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



// ---- BossHealthBar::ctor   [wasm func87144 -> ram:81a54703 ; ghidra: BossHealthBar::.ctor]

void BossHealthBar___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b2d == '\0') {
    unnamed_function_1099(0x567e70);
    unnamed_function_1099(0x567e74);
    unnamed_function_1099(0x567ef0);
    cRam00664b2d = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e70);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ef0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e74);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



