// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Bash  (Assembly-CSharp)  -  14 function(s)

// ---- Bash::Awake   [wasm func86645 -> ram:81a412aa ; ghidra: Bash::Awake]

void Bash__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam0066496c == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x557aac);
    unnamed_function_1099(0x567694);
    unnamed_function_1099(0x567698);
    unnamed_function_1099(0x565d78);
    cRam0066496c = '\x01';
  }
  iVar5 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar6 = **(int **)(iVar5 + 0x5c);
  uVar7 = *(undefined4 *)(iVar6 + 0x20);
  uVar2 = unnamed_function_95402(uRam005579ec);
  unnamed_function_60038(uVar2,param_1,uRam00567694,0);
  iVar5 = unnamed_function_85158(uVar7,uVar2,0);
  uVar2 = uRam005579ec;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar6 + 0x20) = 0;
  }
  else {
    iVar3 = unnamed_function_1112(iVar5,uRam005579ec);
    if (iVar3 == 0) {
      unnamed_function_1116(iVar5,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar6 + 0x20) = iVar3;
    uVar2 = uRam005579ec;
    iVar6 = unnamed_function_1112(iVar5,uRam005579ec);
    if (iVar6 == 0) {
      unnamed_function_1116(iVar5,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 0x34);
  uVar2 = unnamed_function_95402(uRam00557aac);
  unnamed_function_60334(uVar2,param_1,uRam00567698,0);
  if (cRam00664976 == '\0') {
    unnamed_function_1099(0x557aac);
    cRam00664976 = '\x01';
  }
  iVar6 = *(int *)(iVar5 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar4 = unnamed_function_85158(iVar6,uVar2,0);
    uVar7 = uRam00557aac;
    if ((iVar4 != 0) && (iVar3 = unnamed_function_1112(iVar4,uRam00557aac), iVar3 == 0)) break;
    iVar3 = System_Net_WebOperation___ctor(iVar5 + 0x10,iVar3,iVar6);
    bVar1 = iVar6 == iVar3;
    iVar6 = iVar3;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar4,uVar7);
  do {
    halt_trap();
  } while( true );
}



// ---- Bash::ctor   [wasm func86646 -> ram:81a41454 ; ghidra: Bash::.ctor]

void Bash___ctor(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664976 == '\0') {
    unnamed_function_1099(0x557aac);
    cRam00664976 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
    uVar2 = uRam00557aac;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557aac), iVar4 == 0)) break;
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



// ---- Bash::OnEnable   [wasm func86647 -> ram:81a414d4 ; ghidra: Bash::OnEnable]

void Bash__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam0066496d == '\0') {
    unnamed_function_1099(0x557aac);
    unnamed_function_1099(0x567698);
    cRam0066496d = '\x01';
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x34);
  uVar5 = unnamed_function_95402(uRam00557aac);
  unnamed_function_60334(uVar5,param_1,uRam00567698,0);
  if (cRam00664977 == '\0') {
    unnamed_function_1099(0x557aac);
    cRam00664977 = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85160(iVar3,uVar5,0);
    uVar2 = uRam00557aac;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557aac), iVar4 == 0)) break;
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



// ---- Bash::OnDisable   [wasm func86649 -> ram:81a41621 ; ghidra: Bash::OnDisable]

void Bash__OnDisable(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (cRam0066496e == '\0') {
    unnamed_function_1099(0x5579ec);
    unnamed_function_1099(0x567694);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x5750d4);
    cRam0066496e = '\x01';
  }
  if (param_2 == 2) {
    unnamed_function_44717(param_1,uRam005750d4,0,0x3e19999a,0);
    iVar3 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar4 = **(int **)(iVar3 + 0x5c);
    uVar5 = *(undefined4 *)(iVar4 + 0x20);
    uVar1 = unnamed_function_95402(uRam005579ec);
    unnamed_function_60038(uVar1,param_1,uRam00567694,0);
    iVar3 = unnamed_function_85160(uVar5,uVar1,0);
    uVar1 = uRam005579ec;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar4 + 0x20) = 0;
      return;
    }
    iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
    if (iVar2 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar4 + 0x20) = iVar2;
    uVar1 = uRam005579ec;
    iVar4 = unnamed_function_1112(iVar3,uRam005579ec);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
  }
  return;
}



// ---- Bash::GameStateChanged_OnBash   [wasm func86650 -> ram:81a41741 ; ghidra: Bash::GameStateChanged_OnBash]

void Bash__GameStateChanged_OnBash(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 auStack_10 [2];
  
  if (cRam0066496f == '\0') {
    unnamed_function_1099(0x567e08);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x55bf98);
    unnamed_function_1099(0x565d78);
    cRam0066496f = '\x01';
  }
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  if (*(int *)(**(int **)(iVar2 + 0x5c) + 0x1c) == 2) {
    uVar1 = System_Linq_Enumerable__Count(param_1,0);
    UnityEngine_Camera__get_farClipPlane(auStack_10,uVar1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(iRam0055bf98 + 0x74) == 0) {
      unnamed_function_94848(iRam0055bf98);
    }
    uStack_20 = auStack_10[0];
    uStack_18 = auStack_10[0];
    uVar1 = UnityEngine_Physics2D__GetRayIntersectionNonAlloc_2(&uStack_20,uVar1,uVar3,0);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    iVar2 = unnamed_function_44710(uVar1,0,0);
    if (iVar2 == 0) {
      uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                        (*(undefined4 *)(param_1 + 0x10),uRam00567e08);
      if (*(int *)(iRam0055be2c + 0x74) == 0) {
        unnamed_function_94848(iRam0055be2c);
      }
      iVar2 = unnamed_function_44710(uVar1,0,0);
      if (iVar2 == 0) {
        UnityEngine_Time__get_timeScale(0,0);
        *(undefined4 *)(param_1 + 0x34) = 0x41200000;
        *(undefined1 *)(param_1 + 0x30) = 1;
        uVar1 = *(undefined4 *)(param_1 + 0x44);
        uVar3 = *(undefined4 *)(param_1 + 0x2c);
        if (cRam006649de == '\0') {
          unnamed_function_1099(0x55c894);
          cRam006649de = '\x01';
        }
        iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x48);
        if (iVar2 != 0) {
          (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                    (*(undefined4 *)(iVar2 + 0x20),uVar3,uVar1,1,*(undefined4 *)(iVar2 + 0x14));
        }
      }
    }
  }
  return;
}



// ---- Bash::OnBashEvent_OnBash   [wasm func86652 -> ram:81a41918 ; ghidra: Bash::OnBashEvent_OnBash]

void Bash__OnBashEvent_OnBash(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664970 == '\0') {
    unnamed_function_1099(0x559cf4);
    unnamed_function_1099(0x57418c);
    cRam00664970 = '\x01';
  }
  iVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar1 + 0x10) = uRam0057418c;
  uVar2 = UnityEngine_LayerMask__NameToLayer(iVar1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}



// ---- Bash::Start   [wasm func86653 -> ram:81a41968 ; ghidra: Bash::Start]

void Bash__Start(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    Bash__Update(param_1,param_1);
    return;
  }
  if (iVar1 == 1) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      Bash__Prepare(param_1,param_1);
      return;
    }
  }
  else if (iVar1 == 2) {
    if (*(char *)(param_1 + 0x31) != '\0') {
      Bash__During(param_1,param_1);
      return;
    }
  }
  else if (iVar1 == 3) {
    *(undefined2 *)(param_1 + 0x30) = 0;
  }
  return;
}



// ---- Bash::Update   [wasm func86654 -> ram:81a419b9 ; ghidra: Bash::Update]

void Bash__Update(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 auStack_10 [2];
  
  if (cRam00664971 == '\0') {
    unnamed_function_1099(0x567e08);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x55bf98);
    cRam00664971 = '\x01';
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x40);
  if ((float)*(int *)(param_1 + 0x3c) <= *(float *)(iVar2 + 0x14)) {
    Stamina__Update(iVar2,*(int *)(param_1 + 0x3c),0);
    uVar1 = System_Linq_Enumerable__Count(param_1,0);
    UnityEngine_Camera__get_farClipPlane(auStack_10,uVar1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(iRam0055bf98 + 0x74) == 0) {
      unnamed_function_94848(iRam0055bf98);
    }
    uStack_20 = auStack_10[0];
    uStack_18 = auStack_10[0];
    uVar1 = UnityEngine_Physics2D__GetRayIntersectionNonAlloc_2(&uStack_20,uVar1,uVar3,0);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    iVar2 = unnamed_function_44710(uVar1,0,0);
    if (iVar2 == 0) {
      uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                        (*(undefined4 *)(param_1 + 0x10),uRam00567e08);
      if (*(int *)(iRam0055be2c + 0x74) == 0) {
        unnamed_function_94848(iRam0055be2c);
      }
      iVar2 = unnamed_function_44710(uVar1,0,0);
      if ((iVar2 == 0) &&
         ((float)*(int *)(param_1 + 0x3c) <=
          *(float *)(*(int *)(*(int *)(param_1 + 0x18) + 0x40) + 0x14))) {
        UnityEngine_Time__get_timeScale(0,0);
        *(undefined4 *)(param_1 + 0x34) = 0x40000000;
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
    }
  }
  return;
}



// ---- Bash::Prepare   [wasm func86655 -> ram:81a41b13 ; ghidra: Bash::Prepare]

void Bash__Prepare(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 auStack_10 [2];
  
  if (cRam00664972 == '\0') {
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x565d6c);
    cRam00664972 = '\x01';
  }
  fVar6 = *(float *)(param_1 + 0x34);
  fVar2 = (float)UnityEngine_Time__get_fixedUnscaledTime(0);
  fVar6 = fVar6 - fVar2;
  *(float *)(param_1 + 0x34) = fVar6;
  if (fVar6 <= 0.0) {
    UnityEngine_LineRenderer__set_endColor(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),0,0);
    UnityEngine_Time__get_timeScale(0x3f800000,0);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x31) = 1;
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    iVar3 = UnityEngine_Camera__get_targetTexture(uVar4,0,0);
    if (iVar3 != 0) {
      if (*(char *)(param_1 + 0x32) == '\0') {
        iVar3 = *(int *)(iRam00565d6c + 0x10);
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = System_Threading_Monitor__Enter_1(iVar3);
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = System_Threading_Monitor__Enter_1(iVar3);
        }
        SoundEffectManager__Start
                  (**(undefined4 **)(iVar3 + 0x5c),*(undefined4 *)(param_1 + 0x24),param_1);
        *(undefined1 *)(param_1 + 0x32) = 1;
      }
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      HelperUtilities__ValidateCheckPositiveValue(auStack_10,0);
      uVar1 = auStack_10[0];
      uVar4 = System_Linq_Enumerable__Count(*(undefined4 *)(param_1 + 0x10),0);
      UnityEngine_Camera__get_farClipPlane(auStack_10,uVar4,0);
      uStack_18 = uVar1;
      uStack_28 = uVar1;
      uStack_20 = auStack_10[0];
      uStack_30 = auStack_10[0];
      Arrow__Awake(uVar5,&uStack_28,&uStack_30,param_1);
    }
  }
  return;
}



// ---- Bash::During   [wasm func86656 -> ram:81a41c85 ; ghidra: Bash::During]

void Bash__During(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (cRam00664973 == '\0') {
    unnamed_function_1099(0x567e08);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x565d6c);
    unnamed_function_1099(0x572944);
    cRam00664973 = '\x01';
  }
  UnityEngine_Time__get_timeScale(0x3f800000,0);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar1 = UnityEngine_Camera__get_targetTexture(uVar3,0,0);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x31) != '\0')) {
    iVar1 = UnityEngine_GameObject__get_activeInHierarchy
                      (*(undefined4 *)(param_1 + 0x10),uRam00567e08);
    *(undefined4 *)(iVar1 + 0x74) = 2;
    uVar3 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x10),0);
    uVar2 = UnityEngine_LayerMask__LayerToName(uRam00572944,0);
    UnityEngine_GameObject__get_transform(uVar3,uVar2,0);
    Bash__InitializeFlagVarible(param_1,param_1);
    UnityEngine_LineRenderer__set_endColor(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),0,0);
    if (*(char *)(param_1 + 0x32) != '\0') {
      iVar1 = *(int *)(iRam00565d6c + 0x10);
      if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = System_Threading_Monitor__Enter_1(iVar1);
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
      if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = System_Threading_Monitor__Enter_1(iVar1);
      }
      SoundEffectManager__Start
                (**(undefined4 **)(iVar1 + 0x5c),*(undefined4 *)(param_1 + 0x28),param_1);
      *(undefined1 *)(param_1 + 0x32) = 0;
    }
    Bash__MoveAmmoByBash(param_1,param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 3;
  return;
}



// ---- Bash::InitializeFlagVarible   [wasm func86657 -> ram:81a41db9 ; ghidra: Bash::InitializeFlagVarible]

void Bash__InitializeFlagVarible(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  float fStack_10;
  float fStack_c;
  
  if (cRam00664974 == '\0') {
    unnamed_function_1099(0x567f18);
    cRam00664974 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                    (*(undefined4 *)(param_1 + 0x10),uRam00567f18);
  uVar2 = System_Linq_Enumerable__Count(*(undefined4 *)(param_1 + 0x10),0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar2,0);
  fVar3 = fStack_c;
  fVar4 = fStack_10;
  HelperUtilities__ValidateCheckPositiveValue(&fStack_10,0);
  if (cRam006634ad == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam006634ad = '\x01';
  }
  fVar3 = fVar3 - fStack_c;
  fVar4 = fVar4 - fStack_10;
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (1e-05 < fVar5) {
    fVar3 = fVar3 / fVar5;
    fVar4 = fVar4 / fVar5;
  }
  else {
    if (cRam0066482a == '\0') {
      unnamed_function_1099(0x55d024);
      cRam0066482a = '\x01';
    }
    fVar3 = (*(float **)(iRam0055d024 + 0x5c))[1];
    fVar4 = **(float **)(iRam0055d024 + 0x5c);
  }
  uStack_20 = CONCAT44(fVar3 * *(float *)(param_1 + 0x38),fVar4 * *(float *)(param_1 + 0x38));
  uStack_18 = uStack_20;
  multiple_2_UnityEngine_Rigidbody2D__AddForce(uVar1,&uStack_20,1,0);
  return;
}



// ---- Bash::MoveAmmoByBash   [wasm func86658 -> ram:81a41f14 ; ghidra: Bash::MoveAmmoByBash]

void Bash__MoveAmmoByBash(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (cRam00664975 == '\0') {
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x5750d4);
    cRam00664975 = '\x01';
  }
  iVar1 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = System_Threading_Monitor__Enter_1(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = System_Threading_Monitor__Enter_1(iVar1);
  }
  if (*(int *)(**(int **)(iVar1 + 0x5c) + 0x1c) == 2) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 2) {
      multiple_2_UnityEngine_MonoBehaviour__Invoke(param_1,uRam005750d4,0);
      iVar1 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = System_Threading_Monitor__Enter_1(iVar1);
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
      if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = System_Threading_Monitor__Enter_1(iVar1);
      }
      GameManager__TransitionToGame(**(undefined4 **)(iVar1 + 0x5c),3,0);
      iVar1 = *(int *)(param_1 + 0x44);
    }
    *(int *)(param_1 + 0x44) = iVar1 + 1;
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    if (cRam006649de == '\0') {
      unnamed_function_1099(0x55c894);
      cRam006649de = '\x01';
    }
    iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x48);
    if (iVar3 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
                (*(undefined4 *)(iVar3 + 0x20),uVar2,iVar1 + 1,1,*(undefined4 *)(iVar3 + 0x14));
    }
  }
  return;
}



// ---- Bash::Release   [wasm func86659 -> ram:81a42053 ; ghidra: Bash::Release]

void Bash__Release(int param_1)

{
  *(undefined2 *)(param_1 + 0x30) = 0;
  return;
}



// ---- Bash::ProcessInstructionBashInRealseState   [wasm func86660 -> ram:81a4205d ; ghidra: Bash::ProcessInstructionBashInRealseState]

void Bash__ProcessInstructionBashInRealseState(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0x40200000;
  *(undefined8 *)(param_1 + 0x38) = 0xa41200000;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



