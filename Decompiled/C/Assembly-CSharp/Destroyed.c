// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Destroyed  (Assembly-CSharp)  -  8 function(s)

// ---- Destroyed::Die_d_7_System_Collections_IEnumerator_get_Current   [wasm func86877 -> ram:81a48e16 ; ghidra: Destroyed+<Die>d__7::System.Collections.IEnumerator.get_Current]

void Destroyed_<Die>d__7__System_Collections_IEnumerator_get_Current(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664b34 == '\0') {
    unnamed_function_1099(0x557ac4);
    cRam00664b34 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
    uVar2 = uRam00557ac4;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557ac4), iVar4 == 0)) break;
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



// ---- Destroyed::Awake   [wasm func87145 -> ram:81a5476e ; ghidra: Destroyed::Awake]

void Destroyed__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b2e == '\0') {
    unnamed_function_1099(0x557ac4);
    unnamed_function_1099(0x568cb4);
    cRam00664b2e = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = unnamed_function_95402(uRam00557ac4);
  unnamed_function_60334(uVar5,param_1,uRam00568cb4,0);
  if (cRam00664b34 == '\0') {
    unnamed_function_1099(0x557ac4);
    cRam00664b34 = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85158(iVar3,uVar5,0);
    uVar2 = uRam00557ac4;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557ac4), iVar4 == 0)) break;
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



// ---- Destroyed::OnEnable   [wasm func87146 -> ram:81a54839 ; ghidra: Destroyed::OnEnable]

void Destroyed__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b2f == '\0') {
    unnamed_function_1099(0x557ac4);
    unnamed_function_1099(0x568cb4);
    cRam00664b2f = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = unnamed_function_95402(uRam00557ac4);
  unnamed_function_60334(uVar5,param_1,uRam00568cb4,0);
  if (cRam00664b35 == '\0') {
    unnamed_function_1099(0x557ac4);
    cRam00664b35 = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85160(iVar3,uVar5,0);
    uVar2 = uRam00557ac4;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557ac4), iVar4 == 0)) break;
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



// ---- Destroyed::OnDisable   [wasm func87147 -> ram:81a54904 ; ghidra: Destroyed::OnDisable]

void Destroyed__OnDisable(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664b30 == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam00664b30 = '\x01';
  }
  if (*(char *)(param_2 + 8) != '\0') {
    if (cRam00664b31 == '\0') {
      unnamed_function_1099(0x55dd20);
      cRam00664b31 = '\x01';
    }
    iVar1 = unnamed_function_95402(uRam0055dd20);
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
    return;
  }
  if (*(char *)(param_2 + 9) == '\0') {
    Destroyed__Die(param_1,param_1);
    uVar2 = unnamed_function_44644(param_1,0);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    unnamed_function_44782(uVar2,0);
  }
  return;
}



// ---- Destroyed::Die   [wasm func87148 -> ram:81a549ac ; ghidra: Destroyed::Die]

void Destroyed__Die(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664b32 == '\0') {
    unnamed_function_1099(0x567e78);
    unnamed_function_1099(0x55a9bc);
    unnamed_function_1099(0x562b68);
    unnamed_function_1099(0x56c1a0);
    unnamed_function_1099(0x56c1bc);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x574188);
    cRam00664b32 = '\x01';
  }
  iVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e78);
  iVar5 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(**(int **)(iVar5 + 0x5c) + 0x14);
  if (0 < *(int *)(iVar5 + 0xc)) {
    iVar1 = 0;
    do {
      iVar7 = *(int *)(iVar5 + iVar1 * 4 + 0x10);
      iVar3 = multiple_2_System_String__Equals
                        (*(undefined4 *)(iVar2 + 0x44),*(undefined4 *)(iVar7 + 0x18),0);
      if (iVar3 != 0) {
        iVar3 = *(int *)(iRam00565d78 + 0x10);
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = System_Threading_Monitor__Enter_1(iVar3);
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = System_Threading_Monitor__Enter_1(iVar3);
        }
        uVar4 = Esper_ESave_SaveFileSetup__GenerateAESTokens
                          (*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x18),0);
        iVar3 = unnamed_function_60732(uVar4,*(undefined4 *)(iVar7 + 0x18),0);
        if (iVar3 != 0) {
          iVar3 = *(int *)(iRam00565d78 + 0x10);
          if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = System_Threading_Monitor__Enter_1(iVar3);
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
          if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = System_Threading_Monitor__Enter_1(iVar3);
          }
          uVar4 = Esper_ESave_SaveFileSetup__GenerateAESTokens
                            (*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x18),0);
          iVar3 = Esper_ESave_SaveFile__HasData(uVar4,*(undefined4 *)(iVar7 + 0x18),0,uRam0056c1bc);
          unnamed_function_9755
                    (*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar2 + 0x48),0,uRam00562b68);
          iVar6 = *(int *)(iRam00565d78 + 0x10);
          if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = System_Threading_Monitor__Enter_1(iVar6);
          }
          iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
          if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = System_Threading_Monitor__Enter_1(iVar6);
          }
          uVar4 = Esper_ESave_SaveFileSetup__GenerateAESTokens
                            (*(undefined4 *)(**(int **)(iVar6 + 0x5c) + 0x18),0);
          Esper_ESave_SaveFile__AddOrUpdateData_5
                    (uVar4,*(undefined4 *)(iVar7 + 0x18),iVar3,uRam0056c1a0);
          iVar3 = *(int *)(iRam00565d78 + 0x10);
          if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = System_Threading_Monitor__Enter_1(iVar3);
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
          if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = System_Threading_Monitor__Enter_1(iVar3);
          }
          uVar4 = Esper_ESave_SaveFileSetup__GenerateAESTokens
                            (*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x18),0);
          Esper_ESave_SaveFile__SetSetupData(uVar4,0,0);
          uVar4 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData
                            ((undefined4 *)(iVar2 + 0x48),0);
          uVar4 = Mono_Security_X509_X509Crl_X509CrlEntry___ctor(uRam00574188,uVar4,0);
          if (*(int *)(iRam0055a9bc + 0x74) == 0) {
            unnamed_function_94848(iRam0055a9bc);
          }
          UnityEngine_InputSystem_Layouts_InputControlLayout_Collection__TryLoadLayout(uVar4,0);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar5 + 0xc));
  }
  return;
}



// ---- Destroyed::DestroyedEvent_OnDestroyed   [wasm func87149 -> ram:81a54c54 ; ghidra: Destroyed::DestroyedEvent_OnDestroyed]

int Destroyed__DestroyedEvent_OnDestroyed(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664b31 == '\0') {
    unnamed_function_1099(0x55dd20);
    cRam00664b31 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055dd20);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- Destroyed::Die_d_7_System_IDisposable_Dispose   [wasm func87150 -> ram:81a54c92 ; ghidra: Destroyed+<Die>d__7::System.IDisposable.Dispose]

undefined4 Destroyed_<Die>d__7__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (cRam00664b33 == '\0') {
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x55d134);
    cRam00664b33 = '\x01';
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      iVar2 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      iVar3 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      GameManager__Start(**(undefined4 **)(iVar3 + 0x5c),iVar3);
      iVar3 = *(int *)(iVar2 + 0x18);
      iVar2 = *(int *)(iVar3 + 0x10);
      if (iVar2 != 0) {
        (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                  (*(undefined4 *)(iVar2 + 0x20),iVar3,*(undefined4 *)(iVar2 + 0x14));
      }
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = unnamed_function_95402(uRam0055d134);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,0x40400000,0)
  ;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}



// ---- Destroyed::Die_d_7_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func87151 -> ram:81a54d7a ; ghidra: Destroyed+<Die>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void Destroyed_<Die>d__7__System_Collections_Generic_IEnumerator<System_Object>_get_Current(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f028);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



