// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Beam  (Assembly-CSharp)  -  6 function(s)

// ---- Beam::Awake   [wasm func86610 -> ram:81a3f0eb ; ghidra: Beam::Awake]

void Beam__Awake(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 auStack_60 [2];
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  UnityEngine_Animator__GetAnimatorStateInfo(&uStack_50,*(undefined4 *)(param_1 + 0x18),0,0);
  uStack_8 = uStack_30;
  uStack_10 = uStack_38;
  uStack_18 = uStack_40;
  uStack_20 = uStack_48;
  uVar1 = uStack_20;
  uStack_28 = uStack_50;
  uStack_20._4_4_ = (float)((ulonglong)uStack_48 >> 0x20);
  fVar5 = uStack_20._4_4_;
  uStack_20 = uVar1;
  uVar2 = System_Linq_Enumerable__Count(param_1,0);
  uVar3 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Transform__set_localRotation(auStack_60,uVar3,0);
  fVar4 = *(float *)(param_1 + 0x2c);
  uVar3 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Transform__set_localRotation(auStack_60,uVar3,0);
  uStack_68 = uStack_58;
  uStack_78 = uStack_58;
  fVar5 = fVar5 / 1.5;
  fVar6 = fVar5;
  if (1.0 <= fVar5) {
    fVar6 = 1.0;
  }
  fStack_6c = 0.0;
  if (0.0 <= fVar5) {
    fStack_6c = fVar6 + 0.0;
  }
  fStack_6c = fVar4 * fStack_6c;
  uStack_70 = auStack_60[0];
  uStack_80 = CONCAT44(fStack_6c,auStack_60[0]);
  multiple_2_UnityEngine_Transform__get_localScale(uVar2,&uStack_80,0);
  return;
}



// ---- Beam::LateUpdate   [wasm func86611 -> ram:81a3f1f5 ; ghidra: Beam::LateUpdate]

void Beam__LateUpdate(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (cRam00664957 == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam00664957 = '\x01';
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar1 = unnamed_function_44644(param_1,0);
  uVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
  iVar4 = *(int *)(iRam00565d6c + 0x10);
  if ((int)(uVar3 & 1 << (uVar2 & 0x1f)) < 1) {
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = System_Threading_Monitor__Enter_1(iVar4);
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = System_Threading_Monitor__Enter_1(iVar4);
    }
    puVar5 = (undefined4 *)(param_1 + 0x30);
  }
  else {
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = System_Threading_Monitor__Enter_1(iVar4);
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = System_Threading_Monitor__Enter_1(iVar4);
    }
    puVar5 = (undefined4 *)(param_1 + 0x34);
  }
  SoundEffectManager__Start(**(undefined4 **)(iVar4 + 0x5c),*puVar5,puVar5);
  return;
}



// ---- Beam::Start   [wasm func86612 -> ram:81a3f2cc ; ghidra: Beam::Start]

void Beam__Start(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664958 == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam00664958 = '\x01';
  }
  uVar1 = unnamed_function_44644(param_1,0);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  unnamed_function_44782(uVar1,0);
  return;
}



// ---- Beam::EyeAttackEnd   [wasm func86613 -> ram:81a3f317 ; ghidra: Beam::EyeAttackEnd]

void Beam__EyeAttackEnd(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664959 == '\0') {
    unnamed_function_1099(0x567e34);
    unnamed_function_1099(0x567e84);
    unnamed_function_1099(0x567ef4);
    unnamed_function_1099(0x567f04);
    unnamed_function_1099(0x567fe8);
    cRam00664959 = '\x01';
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar5 = *(uint *)(param_1 + 0x24);
    uVar1 = unnamed_function_44644(param_2,0);
    uVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
    if (0 < (int)(uVar5 & 1 << (uVar2 & 0x1f))) {
      uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567ef4);
      uVar6 = System_Linq_Enumerable__Count(param_1,0);
      UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar6,0);
      uStack_18 = uStack_10;
      uStack_20 = uStack_10;
      PlayerEffect__DamageFlashCoroutine(uVar1,&uStack_20,0);
      uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567ef4);
      iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
      uVar8 = *(undefined4 *)(iVar3 + 0x18);
      iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
      uVar7 = *(undefined4 *)(iVar3 + 0x1c);
      uVar6 = unnamed_function_65381(param_2,uRam00567fe8);
      PlayerEffect__Update(uVar1,uVar8,uVar7,uVar6,0);
    }
    iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567f04);
    if (iVar3 != 0) {
      ReceiveDamage__Awake(iVar3,*(undefined4 *)(param_1 + 0x14),0);
    }
    uVar5 = *(uint *)(param_1 + 0x1c);
    uVar1 = unnamed_function_44644(param_2,0);
    uVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
    if (0 < (int)(uVar5 & 1 << (uVar2 & 0x1f))) {
      iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e84);
      if (iVar3 != 0) {
        uVar1 = System_Linq_Enumerable__Count(param_1,0);
        UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar1,0);
        uStack_28 = uStack_8;
        uStack_30 = uStack_10;
        EnemyEffect__DamageFlashCoroutine(iVar3,&uStack_30,0);
      }
      iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e84);
      if (iVar3 != 0) {
        iVar4 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
        uVar6 = *(undefined4 *)(iVar4 + 0x18);
        iVar4 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
        uVar8 = *(undefined4 *)(iVar4 + 0x1c);
        uVar1 = unnamed_function_65381(param_2,uRam00567fe8);
        EnemyEffect__Start(iVar3,uVar6,uVar8,uVar1,0);
      }
    }
    uVar5 = *(uint *)(param_1 + 0x20);
    uVar1 = unnamed_function_44644(param_2,0);
    uVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
    if (0 < (int)(uVar5 & 1 << (uVar2 & 0x1f))) {
      iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e34);
      if (iVar3 != 0) {
        uVar1 = System_Linq_Enumerable__Count(param_1,0);
        UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar1,0);
        uStack_38 = uStack_8;
        uStack_40 = uStack_10;
        BossEffect__PoiseEvent_onPoiseEvent(iVar3,&uStack_40,0);
      }
      iVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e34);
      if (iVar3 != 0) {
        BossEffect__PushEnemyByWeaponCoroutine(iVar3,0);
      }
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



// ---- Beam::OnTriggerEnter2D   [wasm func86614 -> ram:81a3f558 ; ghidra: Beam::OnTriggerEnter2D]

void Beam__OnTriggerEnter2D(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0x14;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- Beam::ctor   [wasm func86615 -> ram:81a3f56a ; ghidra: Beam::.ctor]

void Beam___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam0066495a == '\0') {
    unnamed_function_1099(0x567e30);
    unnamed_function_1099(0x567ed8);
    unnamed_function_1099(0x567f60);
    cRam0066495a = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e30);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f60);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ed8);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



