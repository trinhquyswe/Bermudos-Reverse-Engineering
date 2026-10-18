// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: DealDamage  (Assembly-CSharp)  -  6 function(s)

// ---- DealDamage::Awake   [wasm func86909 -> ram:81a4a8cf ; ghidra: DealDamage::Awake]

void DealDamage__Awake(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664a97 == '\0') {
    unnamed_function_1099(0x557ac0);
    unnamed_function_1099(0x568904);
    unnamed_function_1099(0x565d78);
    cRam00664a97 = '\x01';
  }
  iVar7 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 8);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(**(int **)(iVar7 + 0x5c) + 0x10) + 0x28);
  uVar5 = unnamed_function_95402(uRam00557ac0);
  unnamed_function_60334(uVar5,param_1,uRam00568904,0);
  if (cRam00664a9b == '\0') {
    unnamed_function_1099(0x557ac0);
    cRam00664a9b = '\x01';
  }
  iVar4 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar6 = unnamed_function_85158(iVar4,uVar5,0);
    uVar2 = uRam00557ac0;
    if ((iVar6 != 0) && (iVar3 = unnamed_function_1112(iVar6,uRam00557ac0), iVar3 == 0)) break;
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



// ---- DealDamage::ctor   [wasm func86910 -> ram:81a4a9e3 ; ghidra: DealDamage::.ctor]

void DealDamage___ctor(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664a9b == '\0') {
    unnamed_function_1099(0x557ac0);
    cRam00664a9b = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
    uVar2 = uRam00557ac0;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557ac0), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(param_1 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar5,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- DealDamage::OnEnable   [wasm func86911 -> ram:81a4aa63 ; ghidra: DealDamage::OnEnable]

void DealDamage__OnEnable(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664a98 == '\0') {
    unnamed_function_1099(0x557ac0);
    unnamed_function_1099(0x568904);
    unnamed_function_1099(0x565d78);
    cRam00664a98 = '\x01';
  }
  iVar7 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 8);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(**(int **)(iVar7 + 0x5c) + 0x10) + 0x28);
  uVar5 = unnamed_function_95402(uRam00557ac0);
  unnamed_function_60334(uVar5,param_1,uRam00568904,0);
  if (cRam00664a9c == '\0') {
    unnamed_function_1099(0x557ac0);
    cRam00664a9c = '\x01';
  }
  iVar4 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar6 = unnamed_function_85160(iVar4,uVar5,0);
    uVar2 = uRam00557ac0;
    if ((iVar6 != 0) && (iVar3 = unnamed_function_1112(iVar6,uRam00557ac0), iVar3 == 0)) break;
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



// ---- DealDamage::OnDisable   [wasm func86913 -> ram:81a4abf7 ; ghidra: DealDamage::OnDisable]

void DealDamage__OnDisable(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664a99 == '\0') {
    unnamed_function_1099(0x5599e8);
    unnamed_function_1099(0x567e58);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x55bf98);
    unnamed_function_1099(0x565d6c);
    unnamed_function_1099(0x565d78);
    cRam00664a99 = '\x01';
  }
  Weapon__Start(*(undefined4 *)(param_1 + 0x30),0);
  iVar5 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(**(int **)(iVar5 + 0x5c) + 0x10) + 0x40);
  if (0.0 < *(float *)(iVar5 + 0x14)) {
    iVar1 = *(int *)(param_1 + 0x38);
    fVar8 = *(float *)(iVar5 + 0x14) - (float)iVar1;
    *(float *)(iVar5 + 0x14) = fVar8;
    StaminaEvent__remove_OnStaminaChanged
              (*(undefined4 *)(*(int *)(iVar5 + 0x18) + 0x3c),fVar8 / (float)*(int *)(iVar5 + 0x10),
               fVar8,(float)iVar1,iVar5);
  }
  iVar5 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  uVar6 = **(undefined4 **)(iVar5 + 0x5c);
  iVar5 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar1 = 0;
  SoundEffectManager__Start
            (uVar6,*(undefined4 *)(*(int *)(**(int **)(iVar5 + 0x5c) + 0x10) + 100),0);
  iVar5 = Mono_Security_ASN1Convert__ToOid(uRam005599e8,1);
  uVar6 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e58);
  uStack_8 = *(undefined4 *)(param_1 + 0x2c);
  uStack_10 = *(undefined8 *)(param_1 + 0x24);
  uStack_18 = *(undefined8 *)(param_1 + 0x1c);
  uStack_20 = *(undefined8 *)(param_1 + 0x14);
  if (*(int *)(iRam0055bf98 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bf98);
  }
  uStack_28 = uStack_8;
  uStack_30 = uStack_10;
  uStack_38 = uStack_18;
  uStack_40 = uStack_20;
  iVar2 = unnamed_function_16341(uVar6,&uStack_40,iVar5,0);
  if (0 < iVar2) {
    do {
      uVar6 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x10);
      if (*(int *)(iRam0055be2c + 0x74) == 0) {
        unnamed_function_94848(iRam0055be2c);
      }
      iVar3 = UnityEngine_Camera__get_targetTexture(uVar6,0,0);
      if (iVar3 != 0) {
        iVar3 = *(int *)(iRam00565d78 + 0x10);
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = System_Threading_Monitor__Enter_1(iVar3);
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = System_Threading_Monitor__Enter_1(iVar3);
        }
        iVar3 = *(int *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x4c);
        fVar8 = *(float *)(iVar3 + 0x14) + 1.0;
        *(float *)(iVar3 + 0x14) = fVar8;
        fVar7 = *(float *)(iVar3 + 0x10);
        if (fVar7 < fVar8) {
          *(float *)(iVar3 + 0x14) = fVar7;
          fVar8 = fVar7;
        }
        if (cRam00664b49 == '\0') {
          unnamed_function_1099(0x55c1bc);
          unnamed_function_1099(0x55c1b8);
          cRam00664b49 = '\x01';
        }
        iVar3 = **(int **)(iRam0055c1b8 + 0x5c);
        if (iVar3 != 0) {
          iVar4 = unnamed_function_95402(uRam0055c1bc);
          *(float *)(iVar4 + 0x10) = fVar7;
          *(float *)(iVar4 + 0xc) = fVar7;
          *(float *)(iVar4 + 8) = fVar8 / fVar7;
          (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
                    (*(undefined4 *)(iVar3 + 0x20),iVar4,*(undefined4 *)(iVar3 + 0x14));
        }
        DealDamage__DealDamageEvent_OnDealDamage(param_1,uVar6,iVar1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}



// ---- DealDamage::DealDamageEvent_OnDealDamage   [wasm func86915 -> ram:81a4afe7 ; ghidra: DealDamage::DealDamageEvent_OnDealDamage]

void DealDamage__DealDamageEvent_OnDealDamage(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664a9a == '\0') {
    unnamed_function_1099(0x567e34);
    unnamed_function_1099(0x567e30);
    unnamed_function_1099(0x567e78);
    unnamed_function_1099(0x567f04);
    unnamed_function_1099(0x567fb4);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x565d78);
    cRam00664a9a = '\x01';
  }
  uVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e78);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar3 = UnityEngine_Camera__get_targetTexture(uVar2,0,0);
  if (iVar3 == 0) {
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e30);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    iVar3 = UnityEngine_Camera__get_targetTexture(uVar2,0,0);
    if (iVar3 != 0) {
      uVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e34);
      iVar3 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      uVar4 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
      UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar4,0);
      uStack_18 = uStack_8;
      uStack_20 = uStack_10;
      BossEffect__PoiseEvent_onPoiseEvent(uVar2,&uStack_20,param_2);
      iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567f04);
      if (*(char *)(iVar3 + 0x18) == '\0') {
        iVar8 = *(int *)(param_1 + 0x34);
        if (0 < *(int *)(iVar3 + 0x10)) {
          iVar8 = *(int *)(iVar3 + 0x10);
        }
        Health__Start(*(undefined4 *)(iVar3 + 0x14),iVar8,param_2);
      }
      iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e34);
      if (cRam00664ad9 == '\0') {
        unnamed_function_1099(0x55c620);
        cRam00664ad9 = '\x01';
      }
      cVar1 = *(char *)(iVar3 + 0x3c);
      uVar2 = *(undefined4 *)(iVar3 + 0x40);
      if (*(int *)(iRam0055c620 + 0x74) == 0) {
        unnamed_function_94848(iRam0055c620);
      }
      iVar3 = 0x6c;
      if (cVar1 == '\0') {
        iVar3 = 0x38;
      }
      multiple_2_UnityEngine_Animator__SetTrigger
                (uVar2,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + iVar3),0);
    }
  }
  else {
    iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e78);
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(iVar3 + 0x24);
      iVar3 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      uVar4 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
      UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar4,0);
      uStack_28 = uStack_8;
      uStack_30 = uStack_10;
      EnemyEffect__PushEnemyByAmmo(uVar2,&uStack_30,param_2);
    }
    iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567f04);
    if (*(char *)(iVar3 + 0x18) == '\0') {
      iVar8 = *(int *)(param_1 + 0x34);
      if (0 < *(int *)(iVar3 + 0x10)) {
        iVar8 = *(int *)(iVar3 + 0x10);
      }
      Health__Start(*(undefined4 *)(iVar3 + 0x14),iVar8,param_2);
    }
    iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e78);
    uVar5 = *(undefined4 *)(iVar3 + 0x24);
    iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(param_2);
    uVar6 = *(undefined4 *)(iVar3 + 0x18);
    iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(param_2);
    uVar7 = *(undefined4 *)(iVar3 + 0x1c);
    uVar2 = unnamed_function_65378(param_2,uRam00567fb4);
    uVar4 = unnamed_function_44644(uVar5,0);
    iVar3 = UnityEngine_GameObject__set_layer(uVar4,0);
    if (iVar3 != 0) {
      if (cRam00664ade == '\0') {
        unnamed_function_1099(0x55ddcc);
        cRam00664ade = '\x01';
      }
      iVar3 = unnamed_function_95402(uRam0055ddcc);
      *(undefined4 *)(iVar3 + 0x18) = uVar5;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = uVar7;
      *(undefined4 *)(iVar3 + 0x14) = uVar6;
      *(undefined4 *)(iVar3 + 0x10) = uVar2;
      UnityEngine_MonoBehaviour__StartCoroutine_1(uVar5,iVar3,0);
    }
    iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e78);
    UnityEngine_ParticleSystem__Play(*(undefined4 *)(*(int *)(iVar3 + 0x24) + 0x38),0);
  }
  return;
}



// ---- DealDamage::DealDamageHandle   [wasm func86920 -> ram:81a4b5f0 ; ghidra: DealDamage::DealDamageHandle]

void DealDamage__DealDamageHandle(int param_1)

{
  *(undefined8 *)(param_1 + 0x34) = 0xa0000000a;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



