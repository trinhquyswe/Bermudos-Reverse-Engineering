// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: GameResources  (Assembly-CSharp)  -  2 function(s)

// ---- GameResources::get_Instance   [wasm func86487 -> ram:81a38be7 ; ghidra: GameResources::get_Instance]

void GameResources__get_Instance(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam006649a0 == '\0') {
    unnamed_function_1099(0x563b3c);
    unnamed_function_1099(0x565d64);
    unnamed_function_1099(0x55c78c);
    cRam006649a0 = '\x01';
  }
  iVar2 = *(int *)(iRam00565d64 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = **(undefined4 **)(iVar2 + 0x5c);
  if (cRam00664829 == '\0') {
    unnamed_function_1099(0x55d048);
    cRam00664829 = '\x01';
  }
  uStack_8 = *(undefined4 *)(*(undefined8 **)(iRam0055d048 + 0x5c) + 1);
  uStack_10 = **(undefined8 **)(iRam0055d048 + 0x5c);
  if (cRam006603e8 == '\0') {
    unnamed_function_1099(0x55c148);
    cRam006603e8 = '\x01';
  }
  uStack_18 = uStack_8;
  uStack_20 = uStack_10;
  uStack_28 = (*(undefined8 **)(iRam0055c148 + 0x5c))[1];
  uStack_30 = **(undefined8 **)(iRam0055c148 + 0x5c);
  piVar1 = (int *)PoolManager__CreatePool(uVar4,uVar3,&uStack_20,&uStack_30,&uStack_30);
  if (piVar1 != (int *)0x0) {
    if (((uint)*(byte *)(*piVar1 + 0xb8) < (uint)*(byte *)(iRam0055c78c + 0xb8)) ||
       (*(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iRam0055c78c + 0xb8) * 4 + -4) !=
        iRam0055c78c)) {
      unnamed_function_1116(piVar1,iRam0055c78c);
      do {
        halt_trap();
      } while( true );
    }
  }
  piVar5 = piVar1 + 4;
  UnityEngine_AudioSource__get_volume(*piVar5,*(undefined4 *)(param_2 + 0x18),0);
  UnityEngine_AudioSource__get_clip(*piVar5,*(undefined4 *)(param_2 + 0x14),0);
  multiple_2_UnityEngine_AudioSource__GetPitch(*piVar5,*(undefined4 *)(param_2 + 0x1c),0);
  piVar1[5] = param_2;
  UnityEngine_AudioSource__get_loop(*piVar5,param_3,0);
  uVar3 = unnamed_function_44644(piVar1,0);
  unnamed_function_44686(uVar3,1,0);
  iVar2 = iRam00563b3c;
  iVar6 = *(int *)(param_1 + 0x14);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  uVar7 = *(uint *)(iVar6 + 0xc);
  if (uVar7 < *(uint *)(*(int *)(iVar6 + 8) + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar7 + 1;
    *(int **)(*(int *)(iVar6 + 8) + uVar7 * 4 + 0x10) = piVar1;
  }
  else {
    System_String__Substring
              (iVar6,piVar1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
  }
  return;
}



// ---- GameResources::ctor   [wasm func87138 -> ram:81a543c4 ; ghidra: GameResources::.ctor]

void GameResources___ctor(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664b2a == '\0') {
    unnamed_function_1099(0x557a2c);
    unnamed_function_1099(0x567898);
    cRam00664b2a = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a2c);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00567898,0);
  StaticEventHandler__CallPlayerChangedEvent(uVar1,0);
  return;
}



