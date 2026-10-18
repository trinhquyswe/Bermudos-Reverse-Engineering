// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: EnemyMovement  (Assembly-CSharp)  -  16 function(s)

// ---- EnemyMovement::Start   [wasm func87065 -> ram:81a508d9 ; ghidra: EnemyMovement::Start]

void EnemyMovement__Start(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uStack_30;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    EnemyMovement__GoBackToStartPosition(&fStack_20,param_1,&uStack_30);
    uStack_30 = CONCAT44(fStack_1c,fStack_20);
    *(undefined1 *)(param_1 + 0x24) = 1;
    *(undefined8 *)(param_1 + 0x18) = uStack_30;
  }
  else {
    uStack_30 = *(undefined8 *)(param_1 + 0x18);
  }
  uStack_8 = 0;
  uStack_28 = 0;
  uStack_10 = uStack_30;
  multiple_2_UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsyncListInternal_Injected
            (*(undefined4 *)(param_1 + 0x20),&uStack_30,0);
  UnityEngine_AI_NavMeshAgent__get_destination(*(undefined4 *)(param_1 + 0x20),0x3f800000,0);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_20,uVar1,0);
  fVar4 = fStack_1c;
  fVar2 = fStack_20;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (cRam0065b3eb == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam0065b3eb = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar2 = fVar2 - (float)uVar3;
  fVar4 = fVar4 - (float)((ulonglong)uVar3 >> 0x20);
  if (SQRT(fVar2 * fVar2 + fVar4 * fVar4) <= 1.0) {
    EnemyMovement__GoBackToStartPosition(&fStack_20,param_1,&uStack_30);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(fStack_1c,fStack_20);
  }
  return;
}



// ---- EnemyMovement::MoveRoamingPosition   [wasm func87066 -> ram:81a50a07 ; ghidra: EnemyMovement::MoveRoamingPosition]

void EnemyMovement__MoveRoamingPosition(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float fStack_10;
  float fStack_c;
  
  if (cRam00664b03 == '\0') {
    unnamed_function_1099(0x565d78);
    cRam00664b03 = '\x01';
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
      5.0) {
    EnemyMovement_<StopEnemyCoroutine>d__19__System_Collections_IEnumerator_get_Current
              (*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),1,&fStack_10);
  }
  return;
}



// ---- EnemyMovement::FindPlayer   [wasm func87068 -> ram:81a50cfa ; ghidra: EnemyMovement::FindPlayer]

void EnemyMovement__FindPlayer(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664b04 == '\0') {
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x565d78);
    cRam00664b04 = '\x01';
  }
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar3 = *(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x10);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar2 = UnityEngine_Camera__get_targetTexture(uVar3,0,0);
  if ((iVar2 != 0) &&
     (iVar2 = UnityEngine_AI_NavMeshAgent__set_updateUpAxis(*(undefined4 *)(param_1 + 0x20),0),
     iVar2 != 0)) {
    UnityEngine_AI_NavMeshAgent__get_destination(*(undefined4 *)(param_1 + 0x20),0x40000000,0);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    iVar2 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    uVar1 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x10),0);
    UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar1,0);
    uStack_18 = uStack_8;
    uStack_20 = uStack_10;
    multiple_2_UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsyncListInternal_Injected
              (uVar3,&uStack_20,0);
  }
  return;
}



// ---- EnemyMovement::MoveToPlayer   [wasm func87069 -> ram:81a50e3c ; ghidra: EnemyMovement::MoveToPlayer]

void EnemyMovement__MoveToPlayer(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fStack_10;
  float fStack_c;
  
  *(undefined4 *)(param_1 + 0x2c) = 0x41700000;
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar1,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (cRam0065b3eb == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam0065b3eb = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fStack_10 = fStack_10 - (float)uVar2;
  fStack_c = fStack_c - (float)((ulonglong)uVar2 >> 0x20);
  if (*(float *)(param_1 + 0x2c) < SQRT(fStack_10 * fStack_10 + fStack_c * fStack_c)) {
    EnemyMovement_<StopEnemyCoroutine>d__19__System_Collections_IEnumerator_get_Current
              (*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),4,param_1);
  }
  return;
}



// ---- EnemyMovement::GetDistanceToStartPosition   [wasm func87070 -> ram:81a50ef7 ; ghidra: EnemyMovement::GetDistanceToStartPosition]

void EnemyMovement__GetDistanceToStartPosition(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uStack_30;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664b05 == '\0') {
    unnamed_function_1099(0x565d78);
    cRam00664b05 = '\x01';
  }
  iVar3 = UnityEngine_AI_NavMeshAgent__set_updateUpAxis(*(undefined4 *)(param_1 + 0x20),0);
  if (iVar3 != 0) {
    UnityEngine_AI_NavMeshAgent__get_destination(*(undefined4 *)(param_1 + 0x20),0x40000000,0);
    uStack_30 = *(undefined8 *)(param_1 + 0x10);
    uStack_8 = 0;
    uStack_28 = 0;
    uStack_10 = uStack_30;
    multiple_2_UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsyncListInternal_Injected
              (*(undefined4 *)(param_1 + 0x20),&uStack_30,0);
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    uVar4 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
    UnityEngine_Camera__get_farClipPlane(&fStack_20,uVar4,0);
    fVar1 = fStack_1c;
    fVar5 = fStack_20;
    uVar4 = System_Linq_Enumerable__Count(param_1,0);
    UnityEngine_Camera__get_farClipPlane(&fStack_20,uVar4,0);
    fVar2 = fStack_1c;
    fVar7 = fStack_20;
    if (cRam0065b3eb == '\0') {
      unnamed_function_1099(0x55bab8);
      cRam0065b3eb = '\x01';
    }
    if (*(int *)(iRam0055bab8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055bab8);
    }
    if (SQRT((fVar5 - fVar7) * (fVar5 - fVar7) + (fVar1 - fVar2) * (fVar1 - fVar2)) <= 5.0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = System_Linq_Enumerable__Count(param_1,0);
      UnityEngine_Camera__get_farClipPlane(&fStack_20,uVar4,0);
      fVar7 = fStack_1c;
      fVar5 = fStack_20;
      if (cRam0065b3eb == '\0') {
        unnamed_function_1099(0x55bab8);
        cRam0065b3eb = '\x01';
      }
      if (*(int *)(iRam0055bab8 + 0x74) == 0) {
        unnamed_function_94848(iRam0055bab8);
      }
      fVar5 = (float)uVar6 - fVar5;
      fVar7 = (float)((ulonglong)uVar6 >> 0x20) - fVar7;
      if (SQRT(fVar5 * fVar5 + fVar7 * fVar7) <= *(float *)(param_1 + 0x2c) + -5.0) {
        EnemyMovement_<StopEnemyCoroutine>d__19__System_Collections_IEnumerator_get_Current
                  (*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),1,&uStack_30);
      }
    }
    uVar4 = System_Linq_Enumerable__Count(param_1,0);
    UnityEngine_Camera__get_farClipPlane(&fStack_20,uVar4,0);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (cRam0065b3eb == '\0') {
      unnamed_function_1099(0x55bab8);
      cRam0065b3eb = '\x01';
    }
    if (*(int *)(iRam0055bab8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055bab8);
    }
    fStack_20 = fStack_20 - (float)uVar6;
    fStack_1c = fStack_1c - (float)((ulonglong)uVar6 >> 0x20);
    if (SQRT(fStack_20 * fStack_20 + fStack_1c * fStack_1c) < 2.0) {
      EnemyMovement_<StopEnemyCoroutine>d__19__System_Collections_IEnumerator_get_Current
                (*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18),0,&uStack_30);
    }
  }
  return;
}



// ---- EnemyMovement::StopEnemyCoroutine_d_19_System_Collections_IEnumerator_get_Current   [wasm func87072 -> ram:81a51409 ; ghidra: EnemyMovement+<StopEnemyCoroutine>d__19::System.Collections.IEnumerator.get_Current]

void EnemyMovement_<StopEnemyCoroutine>d__19__System_Collections_IEnumerator_get_Current
               (int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (cRam00664b09 == '\0') {
    unnamed_function_1099(0x55aca8);
    cRam00664b09 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    iVar1 = unnamed_function_95402(uRam0055aca8);
    if (cRam00664b0a == '\0') {
      unnamed_function_1099(0x55ad18);
      cRam00664b0a = '\x01';
    }
    if (*(int *)(iRam0055ad18 + 0x74) == 0) {
      unnamed_function_94848(iRam0055ad18);
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
              (*(undefined4 *)(iVar2 + 0x20),param_1,iVar1,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}



// ---- EnemyMovement::GoBackToStartPosition   [wasm func87073 -> ram:81a51497 ; ghidra: EnemyMovement::GoBackToStartPosition]

void EnemyMovement__GoBackToStartPosition(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 auStack_48 [2];
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  iVar2 = UnityEngine_AI_NavMeshAgent__set_updateUpAxis(*(undefined4 *)(param_2 + 0x20),0);
  if (iVar2 == 0) {
    *param_1 = *(undefined8 *)(param_2 + 0x18);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    HelperUtilities__GetAngleFromVector(auStack_48,0);
    uVar1 = auStack_48[0];
    fVar3 = (float)UnityEngine_Random__InitState(0x3f800000,0x40a00000,0);
    fStack_34 = fVar3 * (float)((ulonglong)uVar1 >> 0x20) + (float)((ulonglong)uVar4 >> 0x20);
    fStack_38 = fVar3 * (float)uVar1 + (float)uVar4;
    *(ulonglong *)(param_2 + 0x18) = CONCAT44(fStack_34,fStack_38);
    uStack_30 = 0;
    uStack_50 = 0;
    uStack_58 = CONCAT44(fStack_34,fStack_38);
    multiple_2_UnityEngine_AI_NavMesh__Internal_CallOnNavMeshPreUpdate
              (&uStack_58,&uStack_28,0x41200000,1,0);
    multiple_19_System_Runtime_InteropServices_MemoryMarshal__AsMemory(auStack_48,&uStack_28,0);
    *param_1 = auStack_48[0];
  }
  return;
}



// ---- EnemyMovement::Awake   [wasm func87091 -> ram:81a5291a ; ghidra: EnemyMovement::Awake]

void EnemyMovement__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b01 == '\0') {
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x568ec0);
    cRam00664b01 = '\x01';
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  uVar5 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar5,param_1,uRam00568ec0,0);
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



// ---- EnemyMovement::OnEnable   [wasm func87092 -> ram:81a529e8 ; ghidra: EnemyMovement::OnEnable]

void EnemyMovement__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b02 == '\0') {
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x568ec0);
    cRam00664b02 = '\x01';
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  uVar5 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar5,param_1,uRam00568ec0,0);
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



// ---- EnemyMovement::OnDisable   [wasm func87093 -> ram:81a52ab5 ; ghidra: EnemyMovement::OnDisable]

void EnemyMovement__OnDisable(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(float *)(param_2 + 0xc) <= 0.0) {
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    multiple_8_AttackEvent__remove_OnAttack(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x30),0);
    if (cRam00664b07 == '\0') {
      unnamed_function_1099(0x55ddd8);
      cRam00664b07 = '\x01';
    }
    iVar1 = unnamed_function_95402(uRam0055ddd8);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(int *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  }
  return;
}



// ---- EnemyMovement::GetAimDirection   [wasm func87094 -> ram:81a52b27 ; ghidra: EnemyMovement::GetAimDirection]

void EnemyMovement__GetAimDirection(int param_1,undefined4 param_2)

{
  int iVar1;
  
  multiple_8_AttackEvent__remove_OnAttack(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x30),0);
  if (cRam00664b07 == '\0') {
    unnamed_function_1099(0x55ddd8);
    cRam00664b07 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ddd8);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(int *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  return;
}



// ---- EnemyMovement::PoiseEvent_OnPoise   [wasm func87095 -> ram:81a52b82 ; ghidra: EnemyMovement::PoiseEvent_OnPoise]

void EnemyMovement__PoiseEvent_OnPoise(int param_1)

{
  undefined4 uVar1;
  undefined8 auStack_10 [2];
  
  UnityEngine_AI_NavMeshAgent__set_acceleration(*(undefined4 *)(param_1 + 0x20),0,0);
  UnityEngine_AI_NavMeshAgent__set_updateRotation(*(undefined4 *)(param_1 + 0x20),0,0);
  UnityEngine_AI_NavMeshAgent__get_speed(*(undefined4 *)(param_1 + 0x20),0x40400000,0);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(auStack_10,uVar1,0);
  *(undefined8 *)(param_1 + 0x10) = auStack_10[0];
  return;
}



// ---- EnemyMovement::StopEnemy   [wasm func87096 -> ram:81a52bd9 ; ghidra: EnemyMovement::StopEnemy]

int EnemyMovement__StopEnemy(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (cRam00664b07 == '\0') {
    unnamed_function_1099(0x55ddd8);
    cRam00664b07 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ddd8);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- EnemyMovement::StopEnemyCoroutine   [wasm func87097 -> ram:81a52c1d ; ghidra: EnemyMovement::StopEnemyCoroutine]

void EnemyMovement__StopEnemyCoroutine(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0x41700000;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- EnemyMovement::StopEnemyCoroutine_d_19_System_IDisposable_Dispose   [wasm func87098 -> ram:81a52c34 ; ghidra: EnemyMovement+<StopEnemyCoroutine>d__19::System.IDisposable.Dispose]

undefined4 EnemyMovement_<StopEnemyCoroutine>d__19__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (cRam00664b08 == '\0') {
    unnamed_function_1099(0x55d134);
    cRam00664b08 = '\x01';
  }
  puVar2 = (undefined4 *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    UnityEngine_AI_NavMeshAgent__get_isStopped(*(undefined4 *)(iVar3 + 0x20),1,0);
    *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x28) + 0x3c) + 0x20) = 5;
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = unnamed_function_95402(uRam0055d134);
    multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,uVar4,0);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      return 0;
    }
    *puVar2 = 0xffffffff;
    UnityEngine_AI_NavMeshAgent__get_isStopped(*(undefined4 *)(iVar3 + 0x20),0,0);
    multiple_8_AttackEvent__remove_OnAttack(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 0x34),0);
    puVar2 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x28) + 0x3c) + 0x20);
    uVar1 = 0;
  }
  *puVar2 = 1;
  return uVar1;
}



// ---- EnemyMovement::StopEnemyCoroutine_d_19_System_Collections_Generic_IEnumerator_System_Object_get_Curre   [wasm func87099 -> ram:81a52d01 ; ghidra: EnemyMovement+<StopEnemyCoroutine>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void EnemyMovement_<StopEnemyCoroutine>d__19__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f128);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



