// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: EnemyAttack  (Assembly-CSharp)  -  5 function(s)

// ---- EnemyAttack::Start   [wasm func87071 -> ram:81a511b2 ; ghidra: EnemyAttack::Start]

void EnemyAttack__Start(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664af7 == '\0') {
    unnamed_function_1099(0x55b280);
    unnamed_function_1099(0x565d64);
    unnamed_function_1099(0x565d78);
    cRam00664af7 = '\x01';
  }
  iVar4 = *(int *)(iRam00565d64 + 0x10);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = System_Threading_Monitor__Enter_1(iVar4);
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = System_Threading_Monitor__Enter_1(iVar4);
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c);
  uVar6 = **(undefined4 **)(iVar4 + 0x5c);
  UnityEngine_Camera__get_farClipPlane(&uStack_10,*(undefined4 *)(param_1 + 0x14),0);
  if (cRam006603e8 == '\0') {
    unnamed_function_1099(0x55c148);
    cRam006603e8 = '\x01';
  }
  uStack_48 = (*(undefined8 **)(iRam0055c148 + 0x5c))[1];
  uStack_50 = **(undefined8 **)(iRam0055c148 + 0x5c);
  uStack_38 = uStack_8;
  uStack_40 = uStack_10;
  uStack_20 = uStack_50;
  uStack_18 = uStack_48;
  iVar1 = PoolManager__CreatePool(uVar6,uVar5,&uStack_40,&uStack_50,0);
  iVar4 = iRam0055b280;
  if (iVar1 != 0) {
    piVar2 = (int *)unnamed_function_1112(iVar1,iRam0055b280);
    if (piVar2 == (int *)0x0) {
      unnamed_function_1116(iVar1,iVar4);
      do {
        halt_trap();
      } while( true );
    }
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    iVar4 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = System_Threading_Monitor__Enter_1(iVar4);
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = System_Threading_Monitor__Enter_1(iVar4);
    }
    uVar7 = 0;
    uVar6 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar4 + 0x5c) + 0x10),0);
    UnityEngine_Camera__get_farClipPlane(&uStack_30,uVar6,0);
    uStack_8 = uStack_28;
    uStack_10 = uStack_30;
    iVar4 = *piVar2;
    if (*(ushort *)(iVar4 + 0xb6) != 0) {
      do {
        if (iRam0055b280 == *(int *)(*(int *)(iVar4 + 0x58) + uVar7 * 8)) {
          puVar3 = (uint *)(iVar4 + *(int *)(*(int *)(iVar4 + 0x58) + uVar7 * 8 + 4) * 8 + 0xc0);
          goto code_r0x81a513c4;
        }
        uVar7 = uVar7 + 1;
      } while (*(ushort *)(iVar4 + 0xb6) != uVar7);
    }
    puVar3 = (uint *)unnamed_function_95091(piVar2,iRam0055b280,0);
code_r0x81a513c4:
    uStack_58 = uStack_8;
    uStack_60 = uStack_10;
    (**(code **)((ulonglong)*puVar3 * 4))(piVar2,uVar5,&uStack_60,puVar3[1]);
  }
  return;
}



// ---- EnemyAttack::Awake   [wasm func87079 -> ram:81a516dc ; ghidra: EnemyAttack::Awake]

void EnemyAttack__Awake(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664af6 == '\0') {
    unnamed_function_1099(0x572c90);
    cRam00664af6 = '\x01';
  }
  uVar1 = UnityEngine_Random__InitState(0x40000000,0x40400000,0);
  unnamed_function_44717(param_1,uRam00572c90,0x40400000,uVar1,0);
  return;
}



// ---- EnemyAttack::Shoot   [wasm func87080 -> ram:81a51729 ; ghidra: EnemyAttack::Shoot]

void EnemyAttack__Shoot(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float fStack_10;
  float fStack_c;
  
  if (cRam00664af8 == '\0') {
    unnamed_function_1099(0x565d78);
    cRam00664af8 = '\x01';
  }
  iVar4 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = System_Threading_Monitor__Enter_1(iVar4);
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = System_Threading_Monitor__Enter_1(iVar4);
  }
  uVar3 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar4 + 0x5c) + 0x10),0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar3,0);
  fVar2 = fStack_c;
  fVar1 = fStack_10;
  uVar3 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar3,0);
  if (cRam0065b3eb == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam0065b3eb = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  if (SQRT((fVar1 - fStack_10) * (fVar1 - fStack_10) + (fVar2 - fStack_c) * (fVar2 - fStack_c)) <
      *(float *)(param_1 + 0x1c)) {
    EnemyMovement_<StopEnemyCoroutine>d__19__System_Collections_IEnumerator_get_Current
              (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18),2,&fStack_10);
  }
  return;
}



// ---- EnemyAttack::CallEnemyAttackState   [wasm func87081 -> ram:81a51840 ; ghidra: EnemyAttack::CallEnemyAttackState]

void EnemyAttack__CallEnemyAttackState(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x41000000;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- EnemyAttack::ctor   [wasm func87082 -> ram:81a51857 ; ghidra: EnemyAttack::.ctor]

void EnemyAttack___ctor(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam00664af9 == '\0') {
    unnamed_function_1099(0x56c1bc);
    unnamed_function_1099(0x565d78);
    cRam00664af9 = '\x01';
  }
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar1 = Esper_ESave_SaveFileSetup__GenerateAESTokens
                    (*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x18),0);
  iVar2 = unnamed_function_60732(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18),0);
  if (iVar2 != 0) {
    iVar2 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    uVar1 = Esper_ESave_SaveFileSetup__GenerateAESTokens
                      (*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x18),0);
    uVar1 = Esper_ESave_SaveFile__HasData
                      (uVar1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18),0,uRam0056c1bc);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  return;
}



