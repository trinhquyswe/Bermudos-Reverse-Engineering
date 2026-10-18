// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Ammo  (Assembly-CSharp)  -  17 function(s)

// ---- Ammo::SetAmmoPlayer   [wasm func21524 -> ram:807b0f71 ; ghidra: Ammo::SetAmmoPlayer]

void Ammo__SetAmmoPlayer(int param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x3c) = *param_2;
  return;
}



// ---- Ammo::Awake   [wasm func86820 -> ram:81a45d5c ; ghidra: Ammo::Awake]

void Ammo__Awake(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 auStack_10 [2];
  
  if (cRam00664a65 == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam00664a65 = '\x01';
  }
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(auStack_10,uVar1,0);
  *(undefined8 *)(param_1 + 0x34) = auStack_10[0];
  if (*(char *)(param_1 + 0x80) == '\0') {
    iVar2 = *(int *)(iRam00565d6c + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    SoundEffectManager__Start(**(undefined4 **)(iVar2 + 0x5c),*(undefined4 *)(param_1 + 0x7c),0);
  }
  else {
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return;
}



// ---- Ammo::OnEnable   [wasm func86821 -> ram:81a45e0b ; ghidra: Ammo::OnEnable]

void Ammo__OnEnable(undefined4 param_1)

{
  Ammo__AmmoHitEffect(param_1,param_1);
  return;
}



// ---- Ammo::AmmoHitEffect   [wasm func86822 -> ram:81a45e17 ; ghidra: Ammo::AmmoHitEffect]

void Ammo__AmmoHitEffect(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664a69 == '\0') {
    unnamed_function_1099(0x559cf4);
    unnamed_function_1099(0x574184);
    unnamed_function_1099(0x572aa0);
    unnamed_function_1099(0x576924);
    cRam00664a69 = '\x01';
  }
  iVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar1 + 0x10) = uRam00574184;
  uVar2 = UnityEngine_LayerMask__NameToLayer(iVar1,0);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  iVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar1 + 0x10) = uRam00576924;
  uVar2 = UnityEngine_LayerMask__NameToLayer(iVar1,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  iVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar1 + 0x10) = uRam00572aa0;
  uVar2 = UnityEngine_LayerMask__NameToLayer(iVar1,0);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  return;
}



// ---- Ammo::Start   [wasm func86823 -> ram:81a45ec5 ; ghidra: Ammo::Start]

void Ammo__Start(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 1) {
    Ammo__GetNextPositionYCorrectionAbsolute(param_1,param_1);
  }
  else if (*(int *)(param_1 + 0x74) != 2) {
    Ammo__Update(param_1,param_1);
    return;
  }
  return;
}



// ---- Ammo::Update   [wasm func86824 -> ram:81a45ef0 ; ghidra: Ammo::Update]

void Ammo__Update(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x3c) >> 0x20) -
          (float)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
  fVar3 = (float)*(undefined8 *)(param_1 + 0x3c) - (float)*(undefined8 *)(param_1 + 0x34);
  *(ulonglong *)(param_1 + 0x44) = CONCAT44(fVar2,fVar3);
  if (cRam006634ad == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam006634ad = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (1e-05 < fVar2) {
    fVar3 = fVar3 / fVar2;
  }
  else {
    if (cRam0066482a == '\0') {
      unnamed_function_1099(0x55d024);
      cRam0066482a = '\x01';
    }
    fVar3 = **(float **)(iRam0055d024 + 0x5c);
  }
  fVar1 = *(float *)(param_1 + 0x48);
  fVar2 = *(float *)(param_1 + 0x44);
  if (cRam006634ad == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam006634ad = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  if (1e-05 < fVar2) {
    fVar1 = fVar1 / fVar2;
  }
  else {
    if (cRam0066482a == '\0') {
      unnamed_function_1099(0x55d024);
      cRam0066482a = '\x01';
    }
    fVar1 = *(float *)(*(int *)(iRam0055d024 + 0x5c) + 4);
  }
  if (ABS(fVar3) < ABS(fVar1)) {
    if (*(float *)(param_1 + 0x48) < 0.0) {
      *(float *)(param_1 + 0x68) = -*(float *)(param_1 + 0x68);
    }
    Ammo__UpdateAmmoPosition(param_1,param_1);
    return;
  }
  if (*(float *)(param_1 + 0x44) < 0.0) {
    *(float *)(param_1 + 0x68) = -*(float *)(param_1 + 0x68);
  }
  Ammo__UpdateAmmoXPosition(param_1,param_1);
  return;
}



// ---- Ammo::GetNextPositionYCorrectionAbsolute   [wasm func86825 -> ram:81a46098 ; ghidra: Ammo::GetNextPositionYCorrectionAbsolute]

void Ammo__GetNextPositionYCorrectionAbsolute(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_30;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar1,0);
  fVar2 = *(float *)(param_1 + 0x50);
  fVar3 = *(float *)(param_1 + 0x4c);
  if (cRam006634ad == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam006634ad = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (1e-05 < fVar4) {
    fVar2 = fVar2 / fVar4;
    fVar3 = fVar3 / fVar4;
  }
  else {
    if (cRam0066482a == '\0') {
      unnamed_function_1099(0x55d024);
      cRam0066482a = '\x01';
    }
    fVar2 = (*(float **)(iRam0055d024 + 0x5c))[1];
    fVar3 = **(float **)(iRam0055d024 + 0x5c);
  }
  fVar5 = *(float *)(*(int *)(param_1 + 0x10) + 0xc);
  fVar4 = (float)UnityEngine_Time__get_time(0);
  fStack_28 = fStack_8 + fVar5 * 0.0 * fVar4;
  fStack_1c = fStack_c + fVar4 * fVar2 * fVar5;
  fStack_20 = fStack_10 + fVar4 * fVar3 * fVar5;
  uStack_30 = CONCAT44(fStack_1c,fStack_20);
  fStack_18 = fStack_28;
  multiple_2_UnityEngine_Transform___ctor(uVar1,&uStack_30,0);
  return;
}



// ---- Ammo::UpdateAmmoPosition   [wasm func86826 -> ram:81a461e0 ; ghidra: Ammo::UpdateAmmoPosition]

void Ammo__UpdateAmmoPosition(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_30;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_10;
  float fStack_c;
  
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar1,0);
  fVar6 = fStack_c;
  fVar4 = *(float *)(param_1 + 0x68);
  fVar2 = (float)UnityEngine_Time__get_time(0);
  fVar6 = fVar6 + fVar4 * fVar2;
  fVar7 = (fVar6 - *(float *)(param_1 + 0x38)) / *(float *)(param_1 + 0x48);
  fVar4 = (float)UnityEngine_AnimationCurve__get_length
                           (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),fVar7,0);
  fVar3 = (float)UnityEngine_AnimationCurve__get_length
                           (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x34),fVar7,0);
  fVar8 = *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 100) = fVar3 * fVar8;
  fVar2 = fVar4 * *(float *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x58) = fVar2;
  if ((0.0 < fVar8) && (0.0 < *(float *)(param_1 + 0x48))) {
    fVar2 = -fVar2;
    *(float *)(param_1 + 0x58) = fVar2;
  }
  if ((fVar8 < 0.0) && (*(float *)(param_1 + 0x48) < 0.0)) {
    fVar2 = -fVar2;
    *(float *)(param_1 + 0x58) = fVar2;
  }
  fVar5 = *(float *)(param_1 + 0x34);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar1,0);
  fVar3 = fVar3 * fVar8 + fVar5 + fVar2;
  *(ulonglong *)(param_1 + 0x4c) = CONCAT44(fVar6 - fStack_c,fVar3 - fStack_10);
  fVar2 = (float)UnityEngine_AnimationCurve__get_length
                           (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38),fVar4,0);
  *(float *)(param_1 + 0x68) = fVar2 * *(float *)(*(int *)(param_1 + 0x10) + 0xc);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  uStack_18 = 0;
  uStack_28 = 0;
  uStack_30 = CONCAT44(fVar6,fVar3);
  fStack_20 = fVar3;
  fStack_1c = fVar6;
  multiple_2_UnityEngine_Transform___ctor(uVar1,&uStack_30,0);
  if (0.996 < fVar7) {
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  return;
}



// ---- Ammo::UpdateAmmoXPosition   [wasm func86827 -> ram:81a46371 ; ghidra: Ammo::UpdateAmmoXPosition]

void Ammo__UpdateAmmoXPosition(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_30;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_10;
  float fStack_c;
  
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar1,0);
  fVar5 = fStack_10;
  fVar3 = *(float *)(param_1 + 0x68);
  fVar2 = (float)UnityEngine_Time__get_time(0);
  fVar5 = fVar5 + fVar3 * fVar2;
  fVar6 = (fVar5 - *(float *)(param_1 + 0x34)) / *(float *)(param_1 + 0x44);
  fVar2 = (float)UnityEngine_AnimationCurve__get_length
                           (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),fVar6,0);
  fVar3 = (float)UnityEngine_AnimationCurve__get_length
                           (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x34),fVar6,0);
  fVar7 = *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x60) = fVar3 * fVar7;
  fVar2 = fVar2 * *(float *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x54) = fVar2;
  if ((0.0 < *(float *)(param_1 + 0x44)) && (fVar7 < 0.0)) {
    fVar2 = -fVar2;
    *(float *)(param_1 + 0x54) = fVar2;
  }
  if ((*(float *)(param_1 + 0x44) < 0.0) && (fVar7 < 0.0)) {
    fVar2 = -fVar2;
    *(float *)(param_1 + 0x54) = fVar2;
  }
  fVar4 = *(float *)(param_1 + 0x38);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar1,0);
  fVar3 = fVar3 * fVar7 + fVar4 + fVar2;
  *(ulonglong *)(param_1 + 0x4c) = CONCAT44(fVar3 - fStack_c,fVar5 - fStack_10);
  fVar2 = (float)UnityEngine_AnimationCurve__get_length
                           (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38),fVar6,0);
  *(float *)(param_1 + 0x68) = fVar2 * *(float *)(*(int *)(param_1 + 0x10) + 0xc);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  uStack_18 = 0;
  uStack_28 = 0;
  uStack_30 = CONCAT44(fVar3,fVar5);
  fStack_20 = fVar5;
  fStack_1c = fVar3;
  multiple_2_UnityEngine_Transform___ctor(uVar1,&uStack_30,0);
  if (0.996 < fVar6) {
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  return;
}



// ---- Ammo::MoveAmmoByDirection   [wasm func86828 -> ram:81a46500 ; ghidra: Ammo::MoveAmmoByDirection]

void Ammo__MoveAmmoByDirection(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = (float)UnityEngine_AnimationCurve__get_length
                           (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38),param_2,0);
  *(float *)(param_1 + 0x68) = fVar1 * *(float *)(*(int *)(param_1 + 0x10) + 0xc);
  return;
}



// ---- Ammo::CalculateNextAmmoMoveSpeed   [wasm func86829 -> ram:81a46522 ; ghidra: Ammo::CalculateNextAmmoMoveSpeed]

void Ammo__CalculateNextAmmoMoveSpeed(int param_1,int param_2,float *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  *(int *)(param_1 + 0x10) = param_2;
  fVar4 = *param_3;
  fVar5 = param_3[1];
  uVar1 = *(undefined8 *)param_3;
  fVar6 = param_3[2];
  uVar2 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar2,0);
  if (cRam006634ae == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam006634ae = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  uVar2 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar2,0);
  fVar7 = *(float *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  *(float *)(param_1 + 0x5c) =
       fVar7 * ABS(SQRT((fVar4 - fStack_10) * (fVar4 - fStack_10) +
                        (fVar5 - fStack_c) * (fVar5 - fStack_c) +
                        (fVar6 - fStack_8) * (fVar6 - fStack_8)));
  if (cRam00664a66 == '\0') {
    unnamed_function_1099(0x57418c);
    cRam00664a66 = '\x01';
  }
  uVar2 = unnamed_function_44644(param_1,0);
  uVar3 = UnityEngine_LayerMask__LayerToName(uRam0057418c,0);
  UnityEngine_GameObject__get_transform(uVar2,uVar3,0);
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  AmmoAnimation__Awake(*(undefined4 *)(param_1 + 0x24),param_1);
  uVar2 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar2,1,0);
  return;
}



// ---- Ammo::InitialiseAmmo   [wasm func86831 -> ram:81a466e8 ; ghidra: Ammo::InitialiseAmmo]

void Ammo__InitialiseAmmo(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664a66 == '\0') {
    unnamed_function_1099(0x57418c);
    cRam00664a66 = '\x01';
  }
  uVar1 = unnamed_function_44644(param_1,0);
  uVar2 = UnityEngine_LayerMask__LayerToName(uRam0057418c,0);
  UnityEngine_GameObject__get_transform(uVar1,uVar2,0);
  return;
}



// ---- Ammo::SetTargetPosition   [wasm func86832 -> ram:81a46725 ; ghidra: Ammo::SetTargetPosition]

void Ammo__SetTargetPosition(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar1,param_2,0);
  return;
}



// ---- Ammo::SetGameObjectActive   [wasm func86833 -> ram:81a46739 ; ghidra: Ammo::SetGameObjectActive]

void Ammo__SetGameObjectActive(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664a67 == '\0') {
    unnamed_function_1099(0x567e34);
    unnamed_function_1099(0x567e84);
    unnamed_function_1099(0x567ef4);
    unnamed_function_1099(0x567ef8);
    unnamed_function_1099(0x567f04);
    unnamed_function_1099(0x567fe8);
    cRam00664a67 = '\x01';
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567f04);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x18) == '\0')) {
      iVar13 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
      if (0 < *(int *)(iVar2 + 0x10)) {
        iVar13 = *(int *)(iVar2 + 0x10);
      }
      Health__Start(*(undefined4 *)(iVar2 + 0x14),iVar13,param_1);
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
    uVar3 = unnamed_function_44644(param_2,0);
    uVar4 = UnityEngine_Camera__get_cullingMask(uVar3,0);
    if (0 < (int)(uVar6 & 1 << (uVar4 & 0x1f))) {
      uVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567ef4);
      uVar10 = System_Linq_Enumerable__Count(param_1,0);
      UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar10,0);
      uStack_18 = uStack_10;
      uStack_20 = uStack_10;
      PlayerEffect__DamageFlashCoroutine(uVar3,&uStack_20,param_1);
      uVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567ef4);
      iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
      uVar9 = *(undefined4 *)(iVar2 + 0x18);
      iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
      uVar7 = *(undefined4 *)(iVar2 + 0x1c);
      uVar10 = unnamed_function_65381(param_2,uRam00567fe8);
      uVar8 = unnamed_function_44644(uVar3,0);
      iVar2 = UnityEngine_GameObject__set_layer(uVar8,0);
      if (iVar2 != 0) {
        if (cRam00664ae5 == '\0') {
          unnamed_function_1099(0x55e5f8);
          cRam00664ae5 = '\x01';
        }
        iVar2 = unnamed_function_95402(uRam0055e5f8);
        *(undefined4 *)(iVar2 + 0x18) = uVar3;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0x1c) = uVar7;
        *(undefined4 *)(iVar2 + 0x14) = uVar9;
        *(undefined4 *)(iVar2 + 0x10) = uVar10;
        UnityEngine_MonoBehaviour__StartCoroutine_1(uVar3,iVar2,0);
      }
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    uVar3 = unnamed_function_44644(param_2,0);
    uVar4 = UnityEngine_Camera__get_cullingMask(uVar3,0);
    if (0 < (int)(uVar6 & 1 << (uVar4 & 0x1f))) {
      iVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e84);
      if (iVar2 != 0) {
        uVar3 = System_Linq_Enumerable__Count(param_1,0);
        UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar3,0);
        uStack_28 = uStack_8;
        uStack_30 = uStack_10;
        EnemyEffect__DamageFlashCoroutine(iVar2,&uStack_30,param_1);
      }
      iVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e84);
      if (iVar2 != 0) {
        iVar13 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
        uVar8 = *(undefined4 *)(iVar13 + 0x18);
        iVar13 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
        uVar9 = *(undefined4 *)(iVar13 + 0x1c);
        uVar3 = unnamed_function_65381(param_2,uRam00567fe8);
        uVar10 = unnamed_function_44644(iVar2,0);
        iVar13 = UnityEngine_GameObject__set_layer(uVar10,0);
        if (iVar13 != 0) {
          if (cRam00664ade == '\0') {
            unnamed_function_1099(0x55ddcc);
            cRam00664ade = '\x01';
          }
          iVar13 = unnamed_function_95402(uRam0055ddcc);
          *(int *)(iVar13 + 0x18) = iVar2;
          *(undefined4 *)(iVar13 + 8) = 0;
          *(undefined4 *)(iVar13 + 0x1c) = uVar9;
          *(undefined4 *)(iVar13 + 0x14) = uVar8;
          *(undefined4 *)(iVar13 + 0x10) = uVar3;
          UnityEngine_MonoBehaviour__StartCoroutine_1(iVar2,iVar13,0);
        }
      }
      iVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567ef8);
      iVar13 = *(int *)(param_1 + 0x6c);
      fVar12 = *(float *)(iVar2 + 0x18) - (float)iVar13;
      *(float *)(iVar2 + 0x18) = fVar12;
      if (fVar12 <= 0.0) {
        uVar3 = *(undefined4 *)(iVar2 + 0x1c);
        uVar10 = *(undefined4 *)(iVar2 + 0x14);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (cRam00664b46 == '\0') {
          unnamed_function_1099(0x55c07c);
          cRam00664b46 = '\x01';
        }
        iVar11 = *(int *)(iVar2 + 0x10);
        if (iVar11 != 0) {
          iVar5 = unnamed_function_95402(uRam0055c07c);
          *(undefined4 *)(iVar5 + 0x14) = uVar3;
          *(undefined4 *)(iVar5 + 0x10) = uVar10;
          *(float *)(iVar5 + 0xc) = fVar12;
          *(float *)(iVar5 + 8) = (float)iVar13;
          (**(code **)((ulonglong)*(uint *)(iVar11 + 0xc) * 4))
                    (*(undefined4 *)(iVar11 + 0x20),iVar2,iVar5,*(undefined4 *)(iVar11 + 0x14));
        }
      }
    }
    uVar6 = *(uint *)(param_1 + 0x30);
    uVar3 = unnamed_function_44644(param_2,0);
    uVar4 = UnityEngine_Camera__get_cullingMask(uVar3,0);
    if (0 < (int)(uVar6 & 1 << (uVar4 & 0x1f))) {
      iVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567ef8);
      iVar13 = *(int *)(param_1 + 0x6c);
      fVar12 = *(float *)(iVar2 + 0x18) - (float)iVar13;
      *(float *)(iVar2 + 0x18) = fVar12;
      if (fVar12 <= 0.0) {
        uVar3 = *(undefined4 *)(iVar2 + 0x1c);
        uVar10 = *(undefined4 *)(iVar2 + 0x14);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (cRam00664b46 == '\0') {
          unnamed_function_1099(0x55c07c);
          cRam00664b46 = '\x01';
        }
        iVar11 = *(int *)(iVar2 + 0x10);
        if (iVar11 != 0) {
          iVar5 = unnamed_function_95402(uRam0055c07c);
          *(undefined4 *)(iVar5 + 0x14) = uVar3;
          *(undefined4 *)(iVar5 + 0x10) = uVar10;
          *(float *)(iVar5 + 0xc) = fVar12;
          *(float *)(iVar5 + 8) = (float)iVar13;
          (**(code **)((ulonglong)*(uint *)(iVar11 + 0xc) * 4))
                    (*(undefined4 *)(iVar11 + 0x20),iVar2,iVar5,*(undefined4 *)(iVar11 + 0x14));
        }
      }
      iVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e34);
      if (iVar2 != 0) {
        uVar3 = System_Linq_Enumerable__Count(param_1,0);
        UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar3,0);
        uStack_38 = uStack_8;
        uStack_40 = uStack_10;
        BossEffect__PoiseEvent_onPoiseEvent(iVar2,&uStack_40,param_1);
      }
      iVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567e34);
      if (iVar2 != 0) {
        if (cRam00664ad9 == '\0') {
          unnamed_function_1099(0x55c620);
          cRam00664ad9 = '\x01';
        }
        cVar1 = *(char *)(iVar2 + 0x3c);
        uVar3 = *(undefined4 *)(iVar2 + 0x40);
        if (*(int *)(iRam0055c620 + 0x74) == 0) {
          unnamed_function_94848(iRam0055c620);
        }
        iVar2 = 0x6c;
        if (cVar1 == '\0') {
          iVar2 = 0x38;
        }
        multiple_2_UnityEngine_Animator__SetTrigger
                  (uVar3,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + iVar2),0);
      }
    }
    Ammo__OnTriggerEnter2D(param_1,param_1);
    uVar3 = unnamed_function_44644(param_1,0);
    unnamed_function_44686(uVar3,0,0);
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return;
}



// ---- Ammo::OnTriggerEnter2D   [wasm func86839 -> ram:81a472f3 ; ghidra: Ammo::OnTriggerEnter2D]

void Ammo__OnTriggerEnter2D(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  int aiStack_8 [2];
  
  if (cRam00664a68 == '\0') {
    unnamed_function_1099(0x55a00c);
    unnamed_function_1099(0x565d64);
    cRam00664a68 = '\x01';
  }
  iVar3 = *(int *)(iRam00565d64 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  uVar4 = **(undefined4 **)(iVar3 + 0x5c);
  iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(auStack_d0);
  uVar5 = *(undefined4 *)(iVar3 + 0x20);
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&uStack_58,uVar1,0);
  if (cRam006603e8 == '\0') {
    unnamed_function_1099(0x55c148);
    cRam006603e8 = '\x01';
  }
  uStack_80 = (*(undefined8 **)(iRam0055c148 + 0x5c))[1];
  uStack_88 = **(undefined8 **)(iRam0055c148 + 0x5c);
  uStack_70 = uStack_50;
  uStack_78 = uStack_58;
  uStack_68 = uStack_88;
  uStack_60 = uStack_80;
  piVar2 = (int *)PoolManager__CreatePool(uVar4,uVar5,&uStack_78,&uStack_88,0);
  uStack_90 = *(undefined8 *)(*(int *)(param_1 + 0x10) + 0x24);
  uStack_98 = *(undefined8 *)(*(int *)(param_1 + 0x10) + 0x1c);
  if (iRam0055a00c !=
      *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iRam0055a00c + 0xb8) * 4 + -4)) {
    piVar2 = (int *)0x0;
  }
  aiStack_8[0] = piVar2[4];
  uStack_48 = uStack_98;
  uStack_40 = uStack_90;
  multiple_2_UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&uStack_38,&uStack_98,0);
  uStack_a0 = uStack_10;
  uStack_a8 = uStack_18;
  uStack_b0 = uStack_20;
  uStack_b8 = uStack_28;
  uStack_c0 = uStack_30;
  uStack_c8 = uStack_38;
  multiple_2_UnityEngine_ParticleSystem_MainModule__set_startRotation(aiStack_8,&uStack_c8,0);
  uVar1 = unnamed_function_44644(piVar2,0);
  unnamed_function_44686(uVar1,1,0);
  return;
}



// ---- Ammo::DisableAmmo   [wasm func86846 -> ram:81a477a0 ; ghidra: Ammo::DisableAmmo]

void Ammo__DisableAmmo(int param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- Ammo::ctor   [wasm func86847 -> ram:81a477b3 ; ghidra: Ammo::.ctor]

void Ammo___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a6a == '\0') {
    unnamed_function_1099(0x567e08);
    unnamed_function_1099(0x567e18);
    cRam00664a6a = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e08);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e18);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



