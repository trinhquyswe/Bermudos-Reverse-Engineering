// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Bonfire  (Assembly-CSharp)  -  7 function(s)

// ---- Bonfire::Awake   [wasm func86927 -> ram:81a4b834 ; ghidra: Bonfire::Awake]

void Bonfire__Awake(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664aa2 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x567860);
    cRam00664aa2 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00559fb4);
  unnamed_function_82700(uVar1,param_1,uRam00567860,0);
  StaticEventHandler__CallItemChangedEvent(uVar1,0);
  return;
}



// ---- Bonfire::OnEnable   [wasm func86928 -> ram:81a4b883 ; ghidra: Bonfire::OnEnable]

void Bonfire__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664aa3 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x567860);
    cRam00664aa3 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00559fb4);
  unnamed_function_82700(uVar1,param_1,uRam00567860,0);
  StaticEventHandler__add_OnPressRestEvent(uVar1,0);
  return;
}



// ---- Bonfire::OnDisable   [wasm func86929 -> ram:81a4b8d2 ; ghidra: Bonfire::OnDisable]

void Bonfire__OnDisable(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar1 = UnityEngine_Collision2D__get_rigidbody(param_2,0);
  uVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
  if (0 < (int)(uVar3 & 1 << (uVar2 & 0x1f))) {
    uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
    unnamed_function_44686(uVar1,1,0);
  }
  return;
}



// ---- Bonfire::OnCollisionEnter2D   [wasm func86930 -> ram:81a4b907 ; ghidra: Bonfire::OnCollisionEnter2D]

void Bonfire__OnCollisionEnter2D(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
  unnamed_function_44686(uVar1,0,0);
  return;
}



// ---- Bonfire::OnCollisionExit2D   [wasm func86931 -> ram:81a4b91e ; ghidra: Bonfire::OnCollisionExit2D]

void Bonfire__OnCollisionExit2D(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam00664aa4 == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam00664aa4 = '\x01';
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(param_1 + 0x14),0);
  iVar2 = UnityEngine_GameObject__set_layer(uVar1,0);
  if (iVar2 != 0) {
    StaticEventHandler__remove_OnRestInBonfire(0);
    Bonfire__RestInBonfire(param_1,param_1);
    iVar2 = *(int *)(iRam00565d6c + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = System_Threading_Monitor__Enter_1(iVar2);
    }
    SoundEffectManager__Start(**(undefined4 **)(iVar2 + 0x5c),*(undefined4 *)(param_1 + 0x18),0);
  }
  return;
}



// ---- Bonfire::RestInBonfire   [wasm func86932 -> ram:81a4b9ae ; ghidra: Bonfire::RestInBonfire]

void Bonfire__RestInBonfire(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam00664aa5 == '\0') {
    unnamed_function_1099(0x56c1b0);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x577c74);
    unnamed_function_1099(0x57337c);
    cRam00664aa5 = '\x01';
  }
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar1 = Esper_ESave_SaveFileSetup__GenerateAESTokens
                    (*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x18),0);
  Esper_ESave_SaveFile__AddOrUpdateData_5(uVar1,uRam0057337c,uRam00577c74,uRam0056c1b0);
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar1 = Esper_ESave_SaveFileSetup__GenerateAESTokens
                    (*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x18),0);
  Esper_ESave_SaveFile__SetSetupData(uVar1,0,0);
  uVar1 = unnamed_function_42591(uRam00577c74,0);
  UnityEngine_PlayerPrefs__GetFloat_1(uRam0057337c,uVar1,0);
  UnityEngine_PlayerPrefs__DeleteAll(0);
  return;
}



// ---- Bonfire::ctor   [wasm func86933 -> ram:81a4bac6 ; ghidra: Bonfire::.ctor]

void Bonfire___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664aa6 == '\0') {
    unnamed_function_1099(0x567f78);
    unnamed_function_1099(0x567ea8);
    cRam00664aa6 = '\x01';
  }
  uVar1 = unnamed_function_65372(param_1,uRam00567f78);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ea8);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



