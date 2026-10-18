// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: PlayerShadow  (Assembly-CSharp)  -  3 function(s)

// ---- PlayerShadow::DisablePlayerShadow   [wasm func87041 -> ram:81a4f988 ; ghidra: PlayerShadow::DisablePlayerShadow]

void PlayerShadow__DisablePlayerShadow(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = 0;
  if (cRam00664ae9 == '\0') {
    unnamed_function_1099(0x567fe8);
    cRam00664ae9 = '\x01';
  }
  iVar1 = unnamed_function_65381(param_1,uRam00567fe8);
  iVar4 = *(int *)(iVar1 + 0xc);
  if ((0 < iVar4) && (iVar5 = *(int *)(param_2 + 0xc), 0 < iVar5)) {
    do {
      if (0 < iVar5) {
        uVar6 = *(undefined4 *)(iVar1 + iVar8 * 4 + 0x10);
        iVar4 = 0;
        do {
          uVar7 = *(undefined4 *)(param_2 + iVar4 * 4 + 0x10);
          uVar2 = UnityEngine_TextCore_Text_FontAsset__LoadFontFace(uVar6,0);
          uVar3 = UnityEngine_TextCore_Text_FontAsset__LoadFontFace(uVar7,0);
          iVar5 = multiple_2_System_String__Equals(uVar2,uVar3,0);
          if (iVar5 != 0) {
            uVar2 = UnityEngine_U2D_Animation_SpriteSkin__GetSpriteBonesTransforms(uVar7,0);
            UnityEngine_SpriteRenderer__InvokeSpriteChanged(uVar6,uVar2,0);
          }
          iVar4 = iVar4 + 1;
          iVar5 = *(int *)(param_2 + 0xc);
        } while (iVar4 < iVar5);
        iVar4 = *(int *)(iVar1 + 0xc);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar4);
  }
  return;
}



// ---- PlayerShadow::InitialisePlayerShadow   [wasm func87050 -> ram:81a4fe8a ; ghidra: PlayerShadow::InitialisePlayerShadow]

void PlayerShadow__InitialisePlayerShadow(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar1,1,0);
  return;
}



// ---- PlayerShadow::ctor   [wasm func87051 -> ram:81a4fe9e ; ghidra: PlayerShadow::.ctor]

void PlayerShadow___ctor(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_8 [2];
  
  if (cRam00664aea == '\0') {
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x565d6c);
    unnamed_function_1099(0x575bac);
    cRam00664aea = '\x01';
  }
  auStack_8[0] = 0;
  uVar1 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar1,0,0);
  iVar2 = multiple_2_UnityEngine_PropertyName__ToString(0,3,0);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c4f8);
    }
    auStack_8[0] = UnityEngine_SceneManagement_SceneManager__GetSceneByName(0,0);
    uVar1 = UnityEngine_SceneManagement_Scene__IsValid(auStack_8,0);
    iVar2 = multiple_2_System_String__Equals(uVar1,uRam00575bac,0);
    if (iVar2 == 0) {
      return;
    }
  }
  uVar1 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar1,1,0);
  iVar2 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  GameResources__get_Instance(**(undefined4 **)(iVar2 + 0x5c),*(undefined4 *)(param_1 + 0x14),1,0);
  return;
}



