// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Map  (Assembly-CSharp)  -  4 function(s)

// ---- Map::PlayFlowingWaterSoundEffect   [wasm func86484 -> ram:81a38800 ; ghidra: Map::PlayFlowingWaterSoundEffect]

undefined4 Map__PlayFlowingWaterSoundEffect(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664910 == '\0') {
    unnamed_function_1099(0x57be08);
    cRam00664910 = '\x01';
  }
  iVar1 = UnityEngine_PlayerPrefs__GetString_1(uRam0057be08,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UnityEngine_PlayerPrefs__GetInt(uRam0057be08,0);
  }
  return uVar2;
}



// ---- Map::Start   [wasm func86489 -> ram:81a38e40 ; ghidra: Map::Start]

void Map__Start(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam0066490e == '\0') {
    unnamed_function_1099(0x565d6c);
    unnamed_function_1099(0x576914);
    cRam0066490e = '\x01';
  }
  multiple_2_UnityEngine_MonoBehaviour__Invoke(param_1,uRam00576914,0);
  iVar2 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar3 = **(undefined4 **)(iVar2 + 0x5c);
  iVar1 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  SoundEffectManager__PlaySoundEffect(uVar3,*(undefined4 *)(iVar1 + 0x68),iVar2);
  return;
}



// ---- Map::OnDisable   [wasm func86492 -> ram:81a391db ; ghidra: Map::OnDisable]

void Map__OnDisable(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam0066490f == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam0066490f = '\x01';
  }
  iVar2 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar3 = **(undefined4 **)(iVar2 + 0x5c);
  iVar1 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
  SoundEffectManager__Start(uVar3,*(undefined4 *)(iVar1 + 100),iVar2);
  return;
}



// ---- Map::ctor   [wasm func86493 -> ram:81a3924f ; ghidra: Map::.ctor]

void Map___ctor(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (cRam00664911 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x567f78);
    unnamed_function_1099(0x567ea8);
    unnamed_function_1099(0x56ad9c);
    cRam00664911 = '\x01';
  }
  uVar3 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ea8);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar3 = unnamed_function_65372(param_1,uRam00567f78);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar3 = unnamed_function_95402(iRam00559fb4);
  unnamed_function_82700(uVar3,param_1,uRam0056ad9c,0);
  if (cRam006649a9 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x55c894);
    cRam006649a9 = '\x01';
  }
  iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 4);
  while ((piVar4 = (int *)unnamed_function_85158(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
         (iRam00559fb4 == *piVar4))) {
    iVar5 = System_Net_WebOperation___ctor(*(int *)(iRam0055c894 + 0x5c) + 4,piVar4,iVar2);
    bVar1 = iVar2 == iVar5;
    iVar2 = iVar5;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(piVar4,iRam00559fb4);
  do {
    halt_trap();
  } while( true );
}



