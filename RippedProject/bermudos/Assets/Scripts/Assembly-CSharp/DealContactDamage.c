// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: DealContactDamage  (Assembly-CSharp)  -  9 function(s)

// ---- DealContactDamage::Awake   [wasm func86897 -> ram:81a4a27e ; ghidra: DealContactDamage::Awake]

void DealContactDamage__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664a90 == '\0') {
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x568900);
    cRam00664a90 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar5,param_1,uRam00568900,0);
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



// ---- DealContactDamage::OnEnable   [wasm func86899 -> ram:81a4a3c8 ; ghidra: DealContactDamage::OnEnable]

void DealContactDamage__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664a91 == '\0') {
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x568900);
    cRam00664a91 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar5,param_1,uRam00568900,0);
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



// ---- DealContactDamage::OnDisable   [wasm func86901 -> ram:81a4a511 ; ghidra: DealContactDamage::OnDisable]

void DealContactDamage__OnDisable(int param_1,int param_2)

{
  if (*(float *)(param_2 + 0xc) <= 0.0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  }
  return;
}



// ---- DealContactDamage::PoiseEvent_OnPoise   [wasm func86902 -> ram:81a4a52c ; ghidra: DealContactDamage::PoiseEvent_OnPoise]

void DealContactDamage__PoiseEvent_OnPoise(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664a92 == '\0') {
    unnamed_function_1099(0x559cf4);
    unnamed_function_1099(0x576924);
    cRam00664a92 = '\x01';
  }
  iVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar1 + 0x10) = uRam00576924;
  uVar2 = UnityEngine_LayerMask__NameToLayer(iVar1,0);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}



// ---- DealContactDamage::Start   [wasm func86903 -> ram:81a4a57c ; ghidra: DealContactDamage::Start]

void DealContactDamage__Start(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x20);
  if (0.0 < fVar2) {
    fVar1 = (float)UnityEngine_Time__get_time(0);
    *(float *)(param_1 + 0x20) = fVar2 - fVar1;
  }
  return;
}



// ---- DealContactDamage::Update   [wasm func86904 -> ram:81a4a5a0 ; ghidra: DealContactDamage::Update]

void DealContactDamage__Update(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (cRam00664a93 == '\0') {
    unnamed_function_1099(0x567ef4);
    unnamed_function_1099(0x567fe8);
    cRam00664a93 = '\x01';
  }
  if (((*(char *)(param_1 + 0x24) == '\0') && (*(char *)(param_1 + 0x1c) == '\0')) &&
     (*(float *)(param_1 + 0x20) <= 0.0)) {
    uVar1 = unnamed_function_44644(param_2,0);
    uVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
    if ((*(uint *)(param_1 + 0x18) >> (uVar2 & 0x1f) & 1) != 0) {
      DealContactDamage__OnTriggerStay2D(param_1,param_2,param_1);
      uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567ef4);
      iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
      uVar6 = *(undefined4 *)(iVar3 + 0x18);
      iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
      uVar7 = *(undefined4 *)(iVar3 + 0x1c);
      uVar4 = unnamed_function_65381(param_2,uRam00567fe8);
      uVar5 = unnamed_function_44644(uVar1,0);
      iVar3 = UnityEngine_GameObject__set_layer(uVar5,0);
      if (iVar3 != 0) {
        if (cRam00664ae5 == '\0') {
          unnamed_function_1099(0x55e5f8);
          cRam00664ae5 = '\x01';
        }
        iVar3 = unnamed_function_95402(uRam0055e5f8);
        *(undefined4 *)(iVar3 + 0x18) = uVar1;
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0x1c) = uVar7;
        *(undefined4 *)(iVar3 + 0x14) = uVar6;
        *(undefined4 *)(iVar3 + 0x10) = uVar4;
        UnityEngine_MonoBehaviour__StartCoroutine_1(uVar1,iVar3,0);
      }
    }
  }
  return;
}



// ---- DealContactDamage::OnTriggerStay2D   [wasm func86905 -> ram:81a4a6b1 ; ghidra: DealContactDamage::OnTriggerStay2D]

void DealContactDamage__OnTriggerStay2D(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (cRam00664a95 == '\0') {
    unnamed_function_1099(0x569ae0);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x576ed8);
    cRam00664a95 = '\x01';
  }
  uVar1 = unnamed_function_44644(param_2,0);
  iVar2 = UnityEngine_Object__set_name(uVar1,uRam00569ae0);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar3 = UnityEngine_Camera__get_targetTexture(iVar2,0,0);
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    UnityEngine_MonoBehaviour__CancelInvoke(param_1,uRam00576ed8,0x3f000000,0);
    iVar4 = *(int *)(iVar2 + 0x10);
    iVar3 = *(int *)(param_1 + 0x14);
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    Health__Start(*(undefined4 *)(iVar2 + 0x14),iVar3,iVar4);
  }
  return;
}



// ---- DealContactDamage::OnTriggerEnter2D   [wasm func86906 -> ram:81a4a756 ; ghidra: DealContactDamage::OnTriggerEnter2D]

void DealContactDamage__OnTriggerEnter2D(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (cRam00664a94 == '\0') {
    unnamed_function_1099(0x567ef4);
    unnamed_function_1099(0x567fe8);
    cRam00664a94 = '\x01';
  }
  if (((*(char *)(param_1 + 0x24) == '\0') && (*(char *)(param_1 + 0x1c) == '\0')) &&
     (*(float *)(param_1 + 0x20) <= 0.0)) {
    uVar1 = unnamed_function_44644(param_2,0);
    uVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
    if ((*(uint *)(param_1 + 0x18) >> (uVar2 & 0x1f) & 1) != 0) {
      DealContactDamage__OnTriggerStay2D(param_1,param_2,param_1);
      uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567ef4);
      iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
      uVar6 = *(undefined4 *)(iVar3 + 0x18);
      iVar3 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
      uVar7 = *(undefined4 *)(iVar3 + 0x1c);
      uVar4 = unnamed_function_65381(param_2,uRam00567fe8);
      uVar5 = unnamed_function_44644(uVar1,0);
      iVar3 = UnityEngine_GameObject__set_layer(uVar5,0);
      if (iVar3 != 0) {
        if (cRam00664ae5 == '\0') {
          unnamed_function_1099(0x55e5f8);
          cRam00664ae5 = '\x01';
        }
        iVar3 = unnamed_function_95402(uRam0055e5f8);
        *(undefined4 *)(iVar3 + 0x18) = uVar1;
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0x1c) = uVar7;
        *(undefined4 *)(iVar3 + 0x14) = uVar6;
        *(undefined4 *)(iVar3 + 0x10) = uVar4;
        UnityEngine_MonoBehaviour__StartCoroutine_1(uVar1,iVar3,0);
      }
    }
  }
  return;
}



// ---- DealContactDamage::ctor   [wasm func86908 -> ram:81a4a883 ; ghidra: DealContactDamage::.ctor]

void DealContactDamage___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a96 == '\0') {
    unnamed_function_1099(0x567f60);
    cRam00664a96 = '\x01';
  }
  UnityEngine_ContactFilter2D__CheckConsistency(param_1 + 0x14,*(undefined4 *)(param_1 + 0x10),0);
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f60);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined2 *)(param_1 + 0x14) = 0x100;
  return;
}



