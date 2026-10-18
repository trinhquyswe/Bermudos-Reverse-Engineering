// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Enemy  (Assembly-CSharp)  -  6 function(s)

// ---- Enemy::Awake   [wasm func87054 -> ram:81a5017b ; ghidra: Enemy::Awake]

void Enemy__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664aed == '\0') {
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x568eac);
    cRam00664aed = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x14);
  uVar5 = unnamed_function_95402(uRam00557acc);
  unnamed_function_60334(uVar5,param_1,uRam00568eac,0);
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



// ---- Enemy::OnEnable   [wasm func87055 -> ram:81a50246 ; ghidra: Enemy::OnEnable]

void Enemy__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664aee == '\0') {
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x568eac);
    cRam00664aee = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x14);
  uVar5 = unnamed_function_95402(uRam00557acc);
  unnamed_function_60334(uVar5,param_1,uRam00568eac,0);
  if (cRam00664b40 == '\0') {
    unnamed_function_1099(0x557acc);
    cRam00664b40 = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85160(iVar3,uVar5,0);
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



// ---- Enemy::OnDisable   [wasm func87056 -> ram:81a50310 ; ghidra: Enemy::OnDisable]

void Enemy__OnDisable(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x48) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ---- Enemy::InitializeEnemy   [wasm func87057 -> ram:81a50321 ; ghidra: Enemy::InitializeEnemy]

void Enemy__InitializeEnemy(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc) < 1) {
    Enemy__HealthEvent_OnHealthLost(param_1,param_2);
  }
  return;
}



// ---- Enemy::HealthEvent_OnHealthLost   [wasm func87058 -> ram:81a50338 ; ghidra: Enemy::HealthEvent_OnHealthLost]

void Enemy__HealthEvent_OnHealthLost(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (cRam00664aef == '\0') {
    unnamed_function_1099(0x567e70);
    unnamed_function_1099(0x55ab64);
    cRam00664aef = '\x01';
  }
  iVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e70);
  iVar2 = unnamed_function_95402(uRam0055ab64);
  if (cRam00664b36 == '\0') {
    unnamed_function_1099(0x55ad18);
    cRam00664b36 = '\x01';
  }
  if (*(int *)(iRam0055ad18 + 0x74) == 0) {
    unnamed_function_94848(iRam0055ad18);
  }
  *(undefined1 *)(iVar2 + 8) = 0;
  iVar3 = *(int *)(iVar1 + 0x10);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),iVar1,iVar2,*(undefined4 *)(iVar3 + 0x14));
  }
  return;
}



// ---- Enemy::ctor   [wasm func87059 -> ram:81a503de ; ghidra: Enemy::.ctor]

void Enemy___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664af0 == '\0') {
    unnamed_function_1099(0x567e80);
    unnamed_function_1099(0x567e88);
    unnamed_function_1099(0x567e8c);
    unnamed_function_1099(0x567e78);
    cRam00664af0 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e78);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e8c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e80);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e88);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



