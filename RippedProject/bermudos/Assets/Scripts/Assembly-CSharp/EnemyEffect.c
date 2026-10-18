// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: EnemyEffect  (Assembly-CSharp)  -  17 function(s)

// ---- EnemyEffect::DamageFlashCoroutine   [wasm func86837 -> ram:81a46fbe ; ghidra: EnemyEffect::DamageFlashCoroutine]

void EnemyEffect__DamageFlashCoroutine(int param_1,float *param_2)

{
  undefined1 auVar1 [8];
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_8 [8];
  
  uVar2 = unnamed_function_44644(param_1,0);
  iVar3 = UnityEngine_GameObject__set_layer(uVar2,0);
  if (iVar3 != 0) {
    UnityEngine_RaycastHit2D__op_Implicit(auStack_8,*(undefined4 *)(param_1 + 0x20),0);
    auVar1 = auStack_8;
    fVar4 = *(float *)(param_1 + 0x2c);
    UnityEngine_RaycastHit2D__op_Implicit(auStack_8,*(undefined4 *)(param_1 + 0x20),0);
    fVar5 = *param_2;
    fVar6 = param_2[1];
    if (cRam006634ad == '\0') {
      unnamed_function_1099(0x55bab8);
      cRam006634ad = '\x01';
    }
    fVar5 = auStack_8._0_4_ - fVar5;
    fVar6 = auStack_8._4_4_ - fVar6;
    if (*(int *)(iRam0055bab8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055bab8);
    }
    fVar7 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
    if (1e-05 < fVar7) {
      fVar6 = fVar6 / fVar7;
      fVar5 = fVar5 / fVar7;
    }
    else {
      if (cRam0066482a == '\0') {
        unnamed_function_1099(0x55d024);
        cRam0066482a = '\x01';
      }
      fVar6 = (*(float **)(iRam0055d024 + 0x5c))[1];
      fVar5 = **(float **)(iRam0055d024 + 0x5c);
    }
    if (cRam00664adf == '\0') {
      unnamed_function_1099(0x55ddd0);
      cRam00664adf = '\x01';
    }
    iVar3 = unnamed_function_95402(uRam0055ddd0);
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(float *)(iVar3 + 0x18) = fVar4 * fVar6 + auVar1._4_4_;
    *(float *)(iVar3 + 0x14) = fVar4 * fVar5 + auVar1._0_4_;
    *(int *)(iVar3 + 0x10) = param_1;
    *(undefined4 *)(iVar3 + 8) = 0;
    uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar3,0);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
  }
  return;
}



// ---- EnemyEffect::Start   [wasm func86842 -> ram:81a4758b ; ghidra: EnemyEffect::Start]

void EnemyEffect__Start(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = unnamed_function_44644(param_1,0);
  iVar2 = UnityEngine_GameObject__set_layer(uVar1,0);
  if (iVar2 != 0) {
    if (cRam00664ade == '\0') {
      unnamed_function_1099(0x55ddcc);
      cRam00664ade = '\x01';
    }
    iVar2 = unnamed_function_95402(uRam0055ddcc);
    *(undefined4 *)(iVar2 + 0x18) = param_1;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = param_3;
    *(undefined4 *)(iVar2 + 0x14) = param_2;
    *(undefined4 *)(iVar2 + 0x10) = param_4;
    UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar2,0);
  }
  return;
}



// ---- EnemyEffect::PushEnemyByAmmo   [wasm func86918 -> ram:81a4b440 ; ghidra: EnemyEffect::PushEnemyByAmmo]

void EnemyEffect__PushEnemyByAmmo(int param_1,float *param_2)

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
  if (cRam00664ae0 == '\0') {
    unnamed_function_1099(0x55ddd4);
    cRam00664ae0 = '\x01';
  }
  iVar5 = unnamed_function_95402(uRam0055ddd4);
  *(float *)(iVar5 + 0x1c) = fVar3 + fVar6 * fVar7;
  *(float *)(iVar5 + 0x18) = fVar2 + fVar6 * fVar8;
  *(float *)(iVar5 + 0x14) = fVar1 + fVar6 * fVar9;
  *(int *)(iVar5 + 0x10) = param_1;
  *(undefined4 *)(iVar5 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar5,0);
  return;
}



// ---- EnemyEffect::PushEnemyByWeaponCoroutine   [wasm func86919 -> ram:81a4b5e2 ; ghidra: EnemyEffect::PushEnemyByWeaponCoroutine]

void EnemyEffect__PushEnemyByWeaponCoroutine(int param_1)

{
  UnityEngine_ParticleSystem__Play(*(undefined4 *)(param_1 + 0x38),0);
  return;
}



// ---- EnemyEffect::Awake   [wasm func87023 -> ram:81a4ede4 ; ghidra: EnemyEffect::Awake]

void EnemyEffect__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664adc == '\0') {
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x568eb8);
    cRam00664adc = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x3c);
  uVar5 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar5,param_1,uRam00568eb8,0);
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



// ---- EnemyEffect::OnEnable   [wasm func87024 -> ram:81a4eeaf ; ghidra: EnemyEffect::OnEnable]

void EnemyEffect__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664add == '\0') {
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x568eb8);
    cRam00664add = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x3c);
  uVar5 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar5,param_1,uRam00568eb8,0);
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



// ---- EnemyEffect::PoiseEvent_onPoiseEvent   [wasm func87025 -> ram:81a4ef79 ; ghidra: EnemyEffect::PoiseEvent_onPoiseEvent]

void EnemyEffect__PoiseEvent_onPoiseEvent(int param_1)

{
  UnityEngine_ParticleSystem__Stop_1(*(undefined4 *)(param_1 + 0x38),0);
  UnityEngine_ParticleSystem__Stop_1(*(undefined4 *)(param_1 + 0x34),0);
  return;
}



// ---- EnemyEffect::CallDamageFlashEffect   [wasm func87026 -> ram:81a4ef92 ; ghidra: EnemyEffect::CallDamageFlashEffect]

int EnemyEffect__CallDamageFlashEffect
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (cRam00664ade == '\0') {
    unnamed_function_1099(0x55ddcc);
    cRam00664ade = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ddcc);
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  return iVar1;
}



// ---- EnemyEffect::DamagePushEfect   [wasm func87027 -> ram:81a4efe4 ; ghidra: EnemyEffect::DamagePushEfect]

int EnemyEffect__DamagePushEfect(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (cRam00664adf == '\0') {
    unnamed_function_1099(0x55ddd0);
    cRam00664adf = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ddd0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined8 *)(iVar1 + 0x14) = *param_2;
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 1);
  return iVar1;
}



// ---- EnemyEffect::PushEnemyByWeapon   [wasm func87028 -> ram:81a4f035 ; ghidra: EnemyEffect::PushEnemyByWeapon]

int EnemyEffect__PushEnemyByWeapon(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (cRam00664ae0 == '\0') {
    unnamed_function_1099(0x55ddd4);
    cRam00664ae0 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ddd4);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined8 *)(iVar1 + 0x14) = *param_2;
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 1);
  return iVar1;
}



// ---- EnemyEffect::DamageFlashCoroutine_d_9_System_IDisposable_Dispose   [wasm func87029 -> ram:81a4f087 ; ghidra: EnemyEffect+<DamageFlashCoroutine>d__9::System.IDisposable.Dispose]

undefined4 EnemyEffect_<DamageFlashCoroutine>d__9__System_IDisposable_Dispose(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  fVar7 = 0.0;
  iVar1 = 0;
  if (cRam00664ae1 == '\0') {
    unnamed_function_1099(0x579c48);
    unnamed_function_1099(0x579c44);
    cRam00664ae1 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar5 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x20) = iVar5;
  }
  else {
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      fVar7 = *(float *)(param_1 + 0x2c);
      if (1.0 <= fVar7) {
        multiple_2_UnityEngine_Renderer__GetSharedMaterial
                  (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c),0);
        *(undefined8 *)(param_1 + 8) = 2;
        return 1;
      }
      goto code_r0x81a4f1c6;
    }
    if (iVar5 != 2) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x24) + 1;
    *(int *)(param_1 + 0x24) = iVar1;
    iVar5 = *(int *)(param_1 + 0x20);
  }
  if (*(int *)(iVar5 + 0xc) <= iVar1) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 0;
  }
  uVar6 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x10);
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  multiple_2_UnityEngine_Renderer__GetSharedMaterial(uVar6,*(undefined4 *)(param_1 + 0x14),0);
  uVar6 = multiple_2_UnityEngine_Renderer__get_bounds(*(undefined4 *)(param_1 + 0x28),0);
  uStack_8 = *(undefined8 *)(iVar4 + 0x18);
  uStack_10 = *(undefined8 *)(iVar4 + 0x10);
  UnityEngine_Material__SetFloat(uVar6,uRam00579c48,&uStack_10,0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
code_r0x81a4f1c6:
  fVar2 = (float)UnityEngine_Time__get_time(0);
  fVar7 = fVar7 + fVar2 * 10.0;
  *(float *)(param_1 + 0x2c) = fVar7;
  uVar6 = multiple_2_UnityEngine_Renderer__get_bounds(*(undefined4 *)(param_1 + 0x28),0);
  fVar2 = fVar7;
  if (1.0 <= fVar7) {
    fVar2 = 1.0;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar7) {
    fVar8 = fVar2 + 0.0;
  }
  uVar3 = UnityEngine_AnimationCurve__get_length(*(undefined4 *)(iVar4 + 0x24),fVar8,0);
  UnityEngine_Material__SetInt(uVar6,uRam00579c44,uVar3,0);
  *(undefined8 *)(param_1 + 8) = 1;
  return 1;
}



// ---- EnemyEffect::DamageFlashCoroutine_d_9_System_Collections_Generic_IEnumerator_System_Object_get_Curren   [wasm func87030 -> ram:81a4f23b ; ghidra: EnemyEffect+<DamageFlashCoroutine>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void EnemyEffect_<DamageFlashCoroutine>d__9__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f11c);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- EnemyEffect::PushEnemyByAmmo_d_11_System_IDisposable_Dispose   [wasm func87031 -> ram:81a4f263 ; ghidra: EnemyEffect+<PushEnemyByAmmo>d__11::System.IDisposable.Dispose]

undefined4 EnemyEffect_<PushEnemyByAmmo>d__11__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_28;
  undefined4 uStack_20;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined1 auStack_8 [8];
  
  uVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  uVar1 = 0xffffffff;
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    UnityEngine_RaycastHit2D__op_Implicit(auStack_8,*(undefined4 *)(iVar4 + 0x20),0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x24) = auStack_8._4_4_;
    *(int *)(param_1 + 0x20) = auStack_8._0_4_;
    fVar3 = 0.0;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 != 2) {
        return 0;
      }
      goto code_r0x81a4f3d1;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    fVar3 = *(float *)(param_1 + 0x2c);
  }
  uVar1 = 2;
  fVar6 = *(float *)(iVar4 + 0x30);
  if (fVar3 < fVar6) {
    fVar7 = *(float *)(param_1 + 0x18);
    fVar8 = *(float *)(param_1 + 0x24);
    fVar9 = *(float *)(param_1 + 0x14);
    fVar10 = *(float *)(param_1 + 0x20);
    UnityEngine_RaycastHit2D__op_Implicit(auStack_8,*(undefined4 *)(iVar4 + 0x20),0);
    iVar5 = UnityEngine_AI_NavMeshAgent__set_updateUpAxis
                      (*(undefined4 *)(*(int *)(iVar4 + 0x40) + 0x20),0);
    if (iVar5 != 0) {
      uStack_10 = 0;
      uStack_20 = 0;
      fVar3 = fVar3 / fVar6;
      fVar6 = fVar3;
      if (1.0 <= fVar3) {
        fVar6 = 1.0;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar3) {
        fVar11 = fVar6;
      }
      fStack_14 = (fVar8 + fVar11 * (fVar7 - fVar8)) - auStack_8._4_4_;
      fStack_18 = (fVar10 + fVar11 * (fVar9 - fVar10)) - auStack_8._0_4_;
      uStack_28 = CONCAT44(fStack_14,fStack_18);
      multiple_2_UnityEngine_AI_NavMeshAgent__Warp
                (*(undefined4 *)(*(int *)(iVar4 + 0x40) + 0x20),&uStack_28,0);
    }
    fVar6 = *(float *)(param_1 + 0x2c);
    fVar3 = (float)UnityEngine_Time__get_fixedUnscaledDeltaTime(0);
    *(float *)(param_1 + 0x2c) = fVar6 + fVar3;
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 0x28);
  uVar2 = 1;
code_r0x81a4f3d1:
  *(undefined4 *)(param_1 + 8) = uVar1;
  return uVar2;
}



// ---- EnemyEffect::PushEnemyByAmmo_d_11_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func87032 -> ram:81a4f3e4 ; ghidra: EnemyEffect+<PushEnemyByAmmo>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void EnemyEffect_<PushEnemyByAmmo>d__11__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f120);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- EnemyEffect::PushEnemyByWeaponCoroutine_d_13_System_IDisposable_Dispose   [wasm func87033 -> ram:81a4f40c ; ghidra: EnemyEffect+<PushEnemyByWeaponCoroutine>d__13::System.IDisposable.Dispose]

undefined4 EnemyEffect_<PushEnemyByWeaponCoroutine>d__13__System_IDisposable_Dispose(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  float fVar17;
  undefined8 uStack_30;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar4 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  uVar5 = 0xffffffff;
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    UnityEngine_RaycastHit2D__op_Implicit(&fStack_10,*(undefined4 *)(iVar6 + 0x20),0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(float *)(param_1 + 0x24) = fStack_c;
    *(float *)(param_1 + 0x20) = fStack_10;
    fVar17 = 0.0;
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 != 2) {
        return 0;
      }
      goto code_r0x81a4f637;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    fVar17 = *(float *)(param_1 + 0x2c);
  }
  uVar5 = 2;
  fVar8 = *(float *)(iVar6 + 0x30);
  if (fVar17 < fVar8) {
    fVar9 = *(float *)(param_1 + 0x18);
    fVar10 = *(float *)(param_1 + 0x24);
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar12 = *(float *)(param_1 + 0x28);
    fVar13 = *(float *)(param_1 + 0x14);
    fVar14 = *(float *)(param_1 + 0x20);
    uVar5 = System_Linq_Enumerable__Count(iVar6,0);
    UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar5,0);
    fVar3 = fStack_8;
    fVar2 = fStack_c;
    fVar1 = fStack_10;
    uVar5 = System_Linq_Enumerable__Count(iVar6,0);
    UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar5,0);
    fVar17 = fVar17 / fVar8;
    fVar8 = fVar17;
    if (1.0 <= fVar17) {
      fVar8 = 1.0;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar17) {
      fVar15 = fVar8;
    }
    fVar12 = fVar12 + fVar15 * (fVar11 - fVar12);
    fVar10 = fVar10 + fVar15 * (fVar9 - fVar10);
    fVar14 = fVar14 + fVar15 * (fVar13 - fVar14);
    if (cRam00664829 == '\0') {
      unnamed_function_1099(0x55d048);
      cRam00664829 = '\x01';
    }
    pfVar16 = *(float **)(iRam0055d048 + 0x5c);
    fVar17 = (fVar14 - fStack_10) - *pfVar16;
    fVar8 = (fVar10 - fStack_c) - pfVar16[1];
    fVar9 = (fVar12 - fStack_8) - pfVar16[2];
    if ((9.9999994e-11 <= fVar17 * fVar17 + fVar8 * fVar8 + fVar9 * fVar9) &&
       (iVar7 = UnityEngine_AI_NavMeshAgent__set_updateUpAxis
                          (*(undefined4 *)(*(int *)(iVar6 + 0x40) + 0x20),0), iVar7 != 0)) {
      fStack_28 = fVar12 - fVar3;
      fStack_1c = fVar10 - fVar2;
      fStack_20 = fVar14 - fVar1;
      uStack_30 = CONCAT44(fStack_1c,fStack_20);
      fStack_18 = fStack_28;
      multiple_2_UnityEngine_AI_NavMeshAgent__Warp
                (*(undefined4 *)(*(int *)(iVar6 + 0x40) + 0x20),&uStack_30,0);
    }
    fVar8 = *(float *)(param_1 + 0x2c);
    fVar17 = (float)UnityEngine_Time__get_fixedUnscaledDeltaTime(0);
    *(float *)(param_1 + 0x2c) = fVar8 + fVar17;
    uVar5 = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar6 + 0x28);
  uVar4 = 1;
code_r0x81a4f637:
  *(undefined4 *)(param_1 + 8) = uVar5;
  return uVar4;
}



// ---- EnemyEffect::PushEnemyByWeaponCoroutine_d_13_System_Collections_Generic_IEnumerator_System_Object_get   [wasm func87034 -> ram:81a4f64a ; ghidra: EnemyEffect+<PushEnemyByWeaponCoroutine>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void EnemyEffect_<PushEnemyByWeaponCoroutine>d__13__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f124);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- EnemyEffect::PushEnemyByWeaponCoroutine_d_13_System_Collections_IEnumerator_get_Current   [wasm func87035 -> ram:81a4f671 ; ghidra: EnemyEffect+<PushEnemyByWeaponCoroutine>d__13::System.Collections.IEnumerator.get_Current]

void EnemyEffect_<PushEnemyByWeaponCoroutine>d__13__System_Collections_IEnumerator_get_Current
               (undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ae2 == '\0') {
    unnamed_function_1099(0x56b930);
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x55984c);
    cRam00664ae2 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam0055984c);
  unnamed_function_71914(uVar1,param_1,uRam0056b930,0);
  if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c4f8);
  }
  UnityEngine_SceneManagement_SceneManager__LoadFirstScene_Internal(uVar1,0);
  return;
}



