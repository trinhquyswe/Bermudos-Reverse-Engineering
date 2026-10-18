// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Health  (Assembly-CSharp)  -  6 function(s)

// ---- Health::Start   [wasm func86834 -> ram:81a46c39 ; ghidra: Health::Start]

void Health__Start(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (cRam00664b3c == '\0') {
    unnamed_function_1099(0x567ef0);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x565d6c);
    cRam00664b3c = '\x01';
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_2;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ef0);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar2 = UnityEngine_Camera__get_targetTexture(uVar1,0,0);
  iVar3 = *(int *)(iRam00565d6c + 0x10);
  if (iVar2 == 0) {
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar2 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    uVar1 = **(undefined4 **)(iVar2 + 0x5c);
    iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
    puVar4 = (undefined4 *)(iVar2 + 0x58);
  }
  else {
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar2 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    uVar1 = **(undefined4 **)(iVar2 + 0x5c);
    iVar2 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
    puVar4 = (undefined4 *)(iVar2 + 0x5c);
  }
  SoundEffectManager__Start(uVar1,*puVar4,0);
  HealthEvent__remove_OnHealthChanged
            (*(undefined4 *)(param_1 + 0x18),
             (float)*(int *)(param_1 + 0x10) / (float)*(int *)(param_1 + 0x14),
             *(int *)(param_1 + 0x10),param_2,param_1);
  return;
}



// ---- Health::Awake   [wasm func87153 -> ram:81a54df1 ; ghidra: Health::Awake]

void Health__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b3a == '\0') {
    unnamed_function_1099(0x5579d4);
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x569e30);
    unnamed_function_1099(0x569e34);
    unnamed_function_1099(0x55be2c);
    cRam00664b3a = '\x01';
  }
  uVar5 = unnamed_function_95402(uRam00559fb4);
  unnamed_function_82700(uVar5,param_1,uRam00569e34,0);
  StaticEventHandler__CallPressRestEvent(uVar5,0);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar6 = UnityEngine_Camera__get_targetTexture(uVar5,0,0);
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 0x1c);
    uVar5 = unnamed_function_95402(uRam005579d4);
    UnityEngine_UIElements_VisualElement__get_layout(uVar5,param_1,uRam00569e30,0);
    if (cRam00664b37 == '\0') {
      unnamed_function_1099(0x5579d4);
      cRam00664b37 = '\x01';
    }
    iVar3 = *(int *)(iVar6 + 0x10);
    do {
      iVar4 = 0;
      iVar7 = unnamed_function_85158(iVar3,uVar5,0);
      uVar2 = uRam005579d4;
      if ((iVar7 != 0) && (iVar4 = unnamed_function_1112(iVar7,uRam005579d4), iVar4 == 0)) {
        unnamed_function_1116(iVar7,uVar2);
        do {
          halt_trap();
        } while( true );
      }
      iVar4 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar4,iVar3);
      bVar1 = iVar3 != iVar4;
      iVar3 = iVar4;
    } while (bVar1);
  }
  return;
}



// ---- Health::OnEnable   [wasm func87154 -> ram:81a54f25 ; ghidra: Health::OnEnable]

void Health__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b3b == '\0') {
    unnamed_function_1099(0x5579d4);
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x569e30);
    unnamed_function_1099(0x569e34);
    unnamed_function_1099(0x55be2c);
    cRam00664b3b = '\x01';
  }
  uVar5 = unnamed_function_95402(uRam00559fb4);
  unnamed_function_82700(uVar5,param_1,uRam00569e34,0);
  StaticEventHandler__add_OnRestInBonfire(uVar5,0);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  iVar6 = UnityEngine_Camera__get_targetTexture(uVar5,0,0);
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 0x1c);
    uVar5 = unnamed_function_95402(uRam005579d4);
    UnityEngine_UIElements_VisualElement__get_layout(uVar5,param_1,uRam00569e30,0);
    if (cRam00664b38 == '\0') {
      unnamed_function_1099(0x5579d4);
      cRam00664b38 = '\x01';
    }
    iVar3 = *(int *)(iVar6 + 0x10);
    do {
      iVar4 = 0;
      iVar7 = unnamed_function_85160(iVar3,uVar5,0);
      uVar2 = uRam005579d4;
      if ((iVar7 != 0) && (iVar4 = unnamed_function_1112(iVar7,uRam005579d4), iVar4 == 0)) {
        unnamed_function_1116(iVar7,uVar2);
        do {
          halt_trap();
        } while( true );
      }
      iVar4 = System_Net_WebOperation___ctor(iVar6 + 0x10,iVar4,iVar3);
      bVar1 = iVar3 != iVar4;
      iVar3 = iVar4;
    } while (bVar1);
  }
  return;
}



// ---- Health::TakeDamage   [wasm func87156 -> ram:81a55080 ; ghidra: Health::TakeDamage]

void Health__TakeDamage(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  param_2 = *(int *)(param_1 + 0x10) + param_2;
  iVar2 = iVar1;
  if (param_2 <= iVar1) {
    iVar2 = param_2;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  HealthEvent__remove_OnHealthChanged
            (*(undefined4 *)(param_1 + 0x18),(float)iVar2 / (float)iVar1,iVar2,0,param_1);
  return;
}



// ---- Health::StaticEventHandler_OnRestInBonfire   [wasm func87157 -> ram:81a550b7 ; ghidra: Health::StaticEventHandler_OnRestInBonfire]

void Health__StaticEventHandler_OnRestInBonfire(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x10) = iVar1;
  HealthEvent__remove_OnHealthChanged
            (*(undefined4 *)(param_1 + 0x18),(float)iVar1 / (float)iVar1,iVar1,0,param_1);
  return;
}



// ---- Health::ctor   [wasm func87158 -> ram:81a550e0 ; ghidra: Health::.ctor]

void Health___ctor(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b3d == '\0') {
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x569e38);
    unnamed_function_1099(0x565d78);
    cRam00664b3d = '\x01';
  }
  iVar7 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 8);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(**(int **)(iVar7 + 0x5c) + 0x10) + 0x2c);
  uVar5 = unnamed_function_95402(uRam00557acc);
  unnamed_function_60334(uVar5,param_1,uRam00569e38,0);
  if (cRam00664b3f == '\0') {
    unnamed_function_1099(0x557acc);
    cRam00664b3f = '\x01';
  }
  iVar4 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar3 = 0;
    iVar6 = unnamed_function_85158(iVar4,uVar5,0);
    uVar2 = uRam00557acc;
    if ((iVar6 != 0) && (iVar3 = unnamed_function_1112(iVar6,uRam00557acc), iVar3 == 0)) break;
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



