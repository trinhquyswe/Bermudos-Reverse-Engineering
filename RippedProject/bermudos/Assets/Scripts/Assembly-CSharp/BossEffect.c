// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: BossEffect  (Assembly-CSharp)  -  8 function(s)

// ---- BossEffect::PoiseEvent_onPoiseEvent   [wasm func86838 -> ram:81a47150 ; ghidra: BossEffect::PoiseEvent_onPoiseEvent]

void BossEffect__PoiseEvent_onPoiseEvent(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar4 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar4,0);
  fVar3 = fStack_8;
  fVar2 = fStack_c;
  fVar1 = fStack_10;
  fVar6 = *(float *)(param_1 + 0x2c);
  uVar4 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar4,0);
  fVar7 = param_2[2];
  fVar8 = param_2[1];
  fVar9 = *param_2;
  if (cRam0066482c == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam0066482c = '\x01';
  }
  fVar7 = fStack_8 - fVar7;
  fVar8 = fStack_c - fVar8;
  fVar9 = fStack_10 - fVar9;
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar10 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
  if (1e-05 < fVar10) {
    fVar7 = fVar7 / fVar10;
    fVar8 = fVar8 / fVar10;
    fVar9 = fVar9 / fVar10;
  }
  else {
    if (cRam00664829 == '\0') {
      unnamed_function_1099(0x55d048);
      cRam00664829 = '\x01';
    }
    pfVar11 = *(float **)(iRam0055d048 + 0x5c);
    fVar7 = pfVar11[2];
    fVar8 = pfVar11[1];
    fVar9 = *pfVar11;
  }
  if (cRam00664ad8 == '\0') {
    unnamed_function_1099(0x55d860);
    cRam00664ad8 = '\x01';
  }
  iVar5 = unnamed_function_95402(uRam0055d860);
  *(float *)(iVar5 + 0x1c) = fVar3 + fVar6 * fVar7;
  *(float *)(iVar5 + 0x18) = fVar2 + fVar6 * fVar8;
  *(float *)(iVar5 + 0x14) = fVar1 + fVar6 * fVar9;
  *(int *)(iVar5 + 0x10) = param_1;
  *(undefined4 *)(iVar5 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar5,0);
  return;
}



// ---- BossEffect::PushEnemyByWeaponCoroutine   [wasm func86844 -> ram:81a47698 ; ghidra: BossEffect::PushEnemyByWeaponCoroutine]

void BossEffect__PushEnemyByWeaponCoroutine(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (cRam00664ad9 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664ad9 = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(iRam0055c620 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  iVar3 = 0x6c;
  if (cVar1 == '\0') {
    iVar3 = 0x38;
  }
  multiple_2_UnityEngine_Animator__SetTrigger
            (uVar2,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + iVar3),0);
  return;
}



// ---- BossEffect::Awake   [wasm func87014 -> ram:81a4e970 ; ghidra: BossEffect::Awake]

void BossEffect__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664ad6 == '\0') {
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x567890);
    cRam00664ad6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x44);
  uVar5 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar5,param_1,uRam00567890,0);
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



// ---- BossEffect::OnEnable   [wasm func87015 -> ram:81a4ea3b ; ghidra: BossEffect::OnEnable]

void BossEffect__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664ad7 == '\0') {
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x567890);
    cRam00664ad7 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x44);
  uVar5 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar5,param_1,uRam00567890,0);
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



// ---- BossEffect::PushEnemyByWeaponCoroutine_d_8_System_Collections_IEnumerator_get_Current   [wasm func87017 -> ram:81a4eb51 ; ghidra: BossEffect+<PushEnemyByWeaponCoroutine>d__8::System.Collections.IEnumerator.get_Current]

void BossEffect_<PushEnemyByWeaponCoroutine>d__8__System_Collections_IEnumerator_get_Current
               (int param_1,undefined4 param_2)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = *(undefined4 *)(param_1 + 0x34);
  multiple_2_UnityEngine_ParticleSystem_MainModule__set_startLifetime(auStack_8,param_2,0);
  UnityEngine_ParticleSystem__Play(*(undefined4 *)(param_1 + 0x34),0);
  return;
}



// ---- BossEffect::PushBossByWeapon   [wasm func87018 -> ram:81a4eb86 ; ghidra: BossEffect::PushBossByWeapon]

int BossEffect__PushBossByWeapon(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (cRam00664ad8 == '\0') {
    unnamed_function_1099(0x55d860);
    cRam00664ad8 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055d860);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined8 *)(iVar1 + 0x14) = *param_2;
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 1);
  return iVar1;
}



// ---- BossEffect::PushEnemyByWeaponCoroutine_d_8_System_IDisposable_Dispose   [wasm func87020 -> ram:81a4ec21 ; ghidra: BossEffect+<PushEnemyByWeaponCoroutine>d__8::System.IDisposable.Dispose]

undefined4 BossEffect_<PushEnemyByWeaponCoroutine>d__8__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined1 auStack_8 [8];
  
  uVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  uVar1 = 0xffffffff;
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    UnityEngine_RaycastHit2D__op_Implicit(auStack_8,*(undefined4 *)(iVar3 + 0x20),0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x24) = auStack_8._4_4_;
    *(int *)(param_1 + 0x20) = auStack_8._0_4_;
    fVar6 = 0.0;
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        return 0;
      }
      goto code_r0x81a4ed3f;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    fVar6 = *(float *)(param_1 + 0x2c);
  }
  uVar1 = 2;
  if (fVar6 < *(float *)(iVar3 + 0x30)) {
    fVar6 = fVar6 / *(float *)(iVar3 + 0x30);
    fVar7 = fVar6;
    if (1.0 <= fVar6) {
      fVar7 = 1.0;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar6) {
      fVar5 = fVar7;
    }
    uStack_18 = CONCAT44(*(float *)(param_1 + 0x24) +
                         fVar5 * (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24)),
                         *(float *)(param_1 + 0x20) +
                         fVar5 * (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20)));
    uStack_10 = uStack_18;
    multiple_2_UnityEngine_Rigidbody2D__get_rotation(*(undefined4 *)(iVar3 + 0x20),&uStack_18,0);
    fVar7 = *(float *)(param_1 + 0x2c);
    fVar6 = (float)UnityEngine_Time__get_fixedUnscaledDeltaTime(0);
    *(float *)(param_1 + 0x2c) = fVar7 + fVar6;
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar3 + 0x28);
  uVar2 = 1;
code_r0x81a4ed3f:
  *(undefined4 *)(param_1 + 8) = uVar1;
  return uVar2;
}



// ---- BossEffect::PushEnemyByWeaponCoroutine_d_8_System_Collections_Generic_IEnumerator_System_Object_get_C   [wasm func87021 -> ram:81a4ed52 ; ghidra: BossEffect+<PushEnemyByWeaponCoroutine>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void BossEffect_<PushEnemyByWeaponCoroutine>d__8__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56eb38);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



