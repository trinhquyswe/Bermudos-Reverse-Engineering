// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: PlayerEffect  (Assembly-CSharp)  -  15 function(s)

// ---- PlayerEffect::DamageFlashCoroutine   [wasm func86835 -> ram:81a46d70 ; ghidra: PlayerEffect::DamageFlashCoroutine]

void PlayerEffect__DamageFlashCoroutine(int param_1,undefined8 *param_2)

{
  undefined1 auVar1 [8];
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auStack_8 [8];
  
  if (*(int *)(param_1 + 0x40) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x40),0);
  }
  uVar2 = unnamed_function_44644(param_1,0);
  iVar3 = UnityEngine_GameObject__set_layer(uVar2,0);
  if (iVar3 != 0) {
    UnityEngine_RaycastHit2D__op_Implicit(auStack_8,*(undefined4 *)(param_1 + 0x20),0);
    auVar1 = auStack_8;
    fVar4 = *(float *)(param_1 + 0x2c);
    UnityEngine_RaycastHit2D__op_Implicit(auStack_8,*(undefined4 *)(param_1 + 0x20),0);
    uVar8 = *param_2;
    if (cRam006634ad == '\0') {
      unnamed_function_1099(0x55bab8);
      cRam006634ad = '\x01';
    }
    fVar5 = auStack_8._4_4_ - (float)((ulonglong)uVar8 >> 0x20);
    fVar6 = auStack_8._0_4_ - (float)uVar8;
    if (*(int *)(iRam0055bab8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055bab8);
    }
    fVar7 = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
    if (1e-05 < fVar7) {
      fVar5 = fVar5 / fVar7;
      fVar6 = fVar6 / fVar7;
    }
    else {
      if (cRam0066482a == '\0') {
        unnamed_function_1099(0x55d024);
        cRam0066482a = '\x01';
      }
      fVar5 = (*(float **)(iRam0055d024 + 0x5c))[1];
      fVar6 = **(float **)(iRam0055d024 + 0x5c);
    }
    if (cRam00664ae6 == '\0') {
      unnamed_function_1099(0x55e5fc);
      cRam00664ae6 = '\x01';
    }
    iVar3 = unnamed_function_95402(uRam0055e5fc);
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(float *)(iVar3 + 0x18) = fVar4 * fVar5 + auVar1._4_4_;
    *(float *)(iVar3 + 0x14) = fVar4 * fVar6 + auVar1._0_4_;
    *(int *)(iVar3 + 0x10) = param_1;
    *(undefined4 *)(iVar3 + 8) = 0;
    uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar3,0);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
  }
  return;
}



// ---- PlayerEffect::Update   [wasm func86841 -> ram:81a4751f ; ghidra: PlayerEffect::Update]

void PlayerEffect__Update
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = unnamed_function_44644(param_1,0);
  iVar2 = UnityEngine_GameObject__set_layer(uVar1,0);
  if (iVar2 != 0) {
    if (cRam00664ae5 == '\0') {
      unnamed_function_1099(0x55e5f8);
      cRam00664ae5 = '\x01';
    }
    iVar2 = unnamed_function_95402(uRam0055e5f8);
    *(undefined4 *)(iVar2 + 0x18) = param_1;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = param_3;
    *(undefined4 *)(iVar2 + 0x14) = param_2;
    *(undefined4 *)(iVar2 + 0x10) = param_4;
    UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar2,0);
  }
  return;
}



// ---- PlayerEffect::OnEnable   [wasm func87036 -> ram:81a4f6df ; ghidra: PlayerEffect::OnEnable]

void PlayerEffect__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ae3 == '\0') {
    unnamed_function_1099(0x56b930);
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x55984c);
    cRam00664ae3 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam0055984c);
  unnamed_function_71914(uVar1,param_1,uRam0056b930,0);
  if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c4f8);
  }
  UnityEngine_SceneManagement_SceneManager__add_sceneLoaded(uVar1,0);
  return;
}



// ---- PlayerEffect::OnDisable   [wasm func87037 -> ram:81a4f74d ; ghidra: PlayerEffect::OnDisable]

void PlayerEffect__OnDisable(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x40),0);
  }
  return;
}



// ---- PlayerEffect::OnSceneLoaded   [wasm func87038 -> ram:81a4f764 ; ghidra: PlayerEffect::OnSceneLoaded]

void PlayerEffect__OnSceneLoaded(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ae4 == '\0') {
    unnamed_function_1099(0x567ef0);
    unnamed_function_1099(0x567f18);
    cRam00664ae4 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ef0);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f18);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



// ---- PlayerEffect::Awake   [wasm func87039 -> ram:81a4f7b3 ; ghidra: PlayerEffect::Awake]

void PlayerEffect__Awake(int param_1)

{
  if (*(char *)(param_1 + 0x44) != '\0') {
    PlayerEffect__PushPlayerByEnemy(param_1,param_1);
  }
  return;
}



// ---- PlayerEffect::PushPlayerByEnemy   [wasm func87040 -> ram:81a4f7c7 ; ghidra: PlayerEffect::PushPlayerByEnemy]

void PlayerEffect__PushPlayerByEnemy(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  int *piVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664ae7 == '\0') {
    unnamed_function_1099(0x567fe8);
    unnamed_function_1099(0x55c000);
    unnamed_function_1099(0x565d64);
    cRam00664ae7 = '\x01';
  }
  uVar1 = unnamed_function_65381(param_1,uRam00567fe8);
  fVar5 = *(float *)(param_1 + 0x48);
  if (0.0 < fVar5) {
    fVar2 = (float)UnityEngine_Time__get_time(0);
    *(float *)(param_1 + 0x48) = fVar5 - fVar2;
  }
  else {
    iVar6 = *(int *)(iRam00565d64 + 0x10);
    if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = System_Threading_Monitor__Enter_1(iVar6);
    }
    iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
    if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = System_Threading_Monitor__Enter_1(iVar6);
    }
    uVar7 = **(undefined4 **)(iVar6 + 0x5c);
    iVar6 = UnityEngine_MonoBehaviour__InvokeRepeating(&uStack_40);
    uVar8 = *(undefined4 *)(iVar6 + 0x28);
    uVar3 = System_Linq_Enumerable__Count(*(undefined4 *)(param_1 + 0x3c),0);
    UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar3,0);
    if (cRam006603e8 == '\0') {
      unnamed_function_1099(0x55c148);
      cRam006603e8 = '\x01';
    }
    uStack_38 = (*(undefined8 **)(iRam0055c148 + 0x5c))[1];
    uStack_40 = **(undefined8 **)(iRam0055c148 + 0x5c);
    uStack_28 = uStack_8;
    uStack_30 = uStack_10;
    uStack_20 = uStack_40;
    uStack_18 = uStack_38;
    piVar4 = (int *)PoolManager__CreatePool(uVar7,uVar8,&uStack_30,&uStack_40,0);
    if (piVar4 != (int *)0x0) {
      if (((uint)*(byte *)(*piVar4 + 0xb8) < (uint)*(byte *)(iRam0055c000 + 0xb8)) ||
         (*(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iRam0055c000 + 0xb8) * 4 + -4) !=
          iRam0055c000)) {
        unnamed_function_1116(piVar4,iRam0055c000);
        do {
          halt_trap();
        } while( true );
      }
    }
    uVar3 = unnamed_function_44644(piVar4,0);
    unnamed_function_44686(uVar3,1,0);
    PlayerShadow__DisablePlayerShadow(piVar4,uVar1,&uStack_40);
    *(undefined4 *)(param_1 + 0x48) = 0x3d0f5c29;
  }
  return;
}



// ---- PlayerEffect::CallDamageFlashEffect   [wasm func87042 -> ram:81a4fa4d ; ghidra: PlayerEffect::CallDamageFlashEffect]

int PlayerEffect__CallDamageFlashEffect
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (cRam00664ae5 == '\0') {
    unnamed_function_1099(0x55e5f8);
    cRam00664ae5 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e5f8);
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  return iVar1;
}



// ---- PlayerEffect::DamagePushEfect   [wasm func87043 -> ram:81a4fa9f ; ghidra: PlayerEffect::DamagePushEfect]

int PlayerEffect__DamagePushEfect(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (cRam00664ae6 == '\0') {
    unnamed_function_1099(0x55e5fc);
    cRam00664ae6 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e5fc);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined8 *)(iVar1 + 0x14) = *param_2;
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 1);
  return iVar1;
}



// ---- PlayerEffect::PushPlayerByEnemy_d_12_System_Collections_IEnumerator_get_Current   [wasm func87044 -> ram:81a4faf0 ; ghidra: PlayerEffect+<PushPlayerByEnemy>d__12::System.Collections.IEnumerator.get_Current]

void PlayerEffect_<PushPlayerByEnemy>d__12__System_Collections_IEnumerator_get_Current
               (undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar1,1,0);
  PlayerShadow__DisablePlayerShadow(param_1,param_2,param_1);
  return;
}



// ---- PlayerEffect::DashShadowPlayerEffect   [wasm func87045 -> ram:81a4fb0d ; ghidra: PlayerEffect::DashShadowPlayerEffect]

void PlayerEffect__DashShadowPlayerEffect(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 0x3d4ccccd;
  if (cRam00664ada == '\0') {
    unnamed_function_1099(0x55d130);
    cRam00664ada = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam0055d130);
  *(undefined4 *)(param_1 + 0x30) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- PlayerEffect::DamageFlashCoroutine_d_10_System_IDisposable_Dispose   [wasm func87046 -> ram:81a4fb62 ; ghidra: PlayerEffect+<DamageFlashCoroutine>d__10::System.IDisposable.Dispose]

undefined4 PlayerEffect_<DamageFlashCoroutine>d__10__System_IDisposable_Dispose(int param_1)

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
  if (cRam00664ae8 == '\0') {
    unnamed_function_1099(0x579c48);
    unnamed_function_1099(0x579c44);
    cRam00664ae8 = '\x01';
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
      goto code_r0x81a4fca1;
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
code_r0x81a4fca1:
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



// ---- PlayerEffect::DamageFlashCoroutine_d_10_System_Collections_Generic_IEnumerator_System_Object_get_Curr   [wasm func87047 -> ram:81a4fd16 ; ghidra: PlayerEffect+<DamageFlashCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void PlayerEffect_<DamageFlashCoroutine>d__10__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f714);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- PlayerEffect::PushPlayerByEnemy_d_12_System_IDisposable_Dispose   [wasm func87048 -> ram:81a4fd3e ; ghidra: PlayerEffect+<PushPlayerByEnemy>d__12::System.IDisposable.Dispose]

undefined4 PlayerEffect_<PushPlayerByEnemy>d__12__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined1 auStack_8 [8];
  
  uVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    UnityEngine_RaycastHit2D__op_Implicit(auStack_8,*(undefined4 *)(iVar2 + 0x20),0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x24) = auStack_8._4_4_;
    *(int *)(param_1 + 0x20) = auStack_8._0_4_;
    fVar5 = 0.0;
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    fVar5 = *(float *)(param_1 + 0x2c);
  }
  if (fVar5 < *(float *)(iVar2 + 0x30)) {
    fVar5 = fVar5 / *(float *)(iVar2 + 0x30);
    fVar6 = fVar5;
    if (1.0 <= fVar5) {
      fVar6 = 1.0;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar5) {
      fVar4 = fVar6;
    }
    uStack_18 = CONCAT44(*(float *)(param_1 + 0x24) +
                         fVar4 * (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24)),
                         *(float *)(param_1 + 0x20) +
                         fVar4 * (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20)));
    uStack_10 = uStack_18;
    multiple_2_UnityEngine_Rigidbody2D__get_rotation(*(undefined4 *)(iVar2 + 0x20),&uStack_18,0);
    fVar6 = *(float *)(param_1 + 0x2c);
    fVar5 = (float)UnityEngine_Time__get_fixedUnscaledDeltaTime(0);
    *(float *)(param_1 + 0x2c) = fVar6 + fVar5;
    uVar3 = *(undefined4 *)(iVar2 + 0x28);
    uVar1 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  return uVar1;
}



// ---- PlayerEffect::PushPlayerByEnemy_d_12_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func87049 -> ram:81a4fe63 ; ghidra: PlayerEffect+<PushPlayerByEnemy>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void PlayerEffect_<PushPlayerByEnemy>d__12__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f718);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



