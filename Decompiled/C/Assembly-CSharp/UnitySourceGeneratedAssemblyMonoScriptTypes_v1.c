// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: UnitySourceGeneratedAssemblyMonoScriptTypes_v1  (Assembly-CSharp)  -  7 function(s)

// ---- UnitySourceGeneratedAssemblyMonoScriptTypes_v1::ctor   [wasm func23273 -> ram:80846513 ; ghidra: UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor]

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (cRam0065c7fe == '\0') {
    unnamed_function_1099(0x55fd14);
    unnamed_function_1099(0x55fd20);
    unnamed_function_1099(0x5626c8);
    cRam0065c7fe = '\x01';
  }
  iVar1 = unnamed_function_10101(*(undefined4 *)(param_1 + 0xc),param_2,uRam0055fd14);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = System_WeakReference___ctor(*(undefined4 *)(param_1 + 8),param_2,uRam005626c8);
    unnamed_function_72578(uVar3,param_2,uVar2,uRam0055fd20);
  }
  return;
}



// ---- UnitySourceGeneratedAssemblyMonoScriptTypes_v1::ctor_1   [wasm func25056 -> ram:808ce90e ; ghidra: UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_1]

undefined4
UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor_1
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  param_2 = param_2 + -1;
  iVar4 = *(int *)(param_1 + 8);
  if (param_2 < iVar4 + -3) {
    do {
      param_2 = param_2 + 1;
      iVar2 = System_String__Contains_1(param_1,0x3c,param_2,0);
      if (iVar2 == -1) {
        return 0;
      }
      if (iVar2 == iVar4 + -1) {
        return 0;
      }
      iVar3 = System_String__Contains_1(param_1,0x3e,iVar2 + 1,0);
      if (iVar3 == -1) {
        return 0;
      }
      iVar2 = TMPEffects_TextProcessing_ParsingUtility__GetNextTag
                        (param_1,iVar2,iVar3,param_3,param_4,iVar2);
    } while (iVar2 == 0);
    uVar1 = 1;
  }
  return uVar1;
}



// ---- UnitySourceGeneratedAssemblyMonoScriptTypes_v1::ctor_2   [wasm func42597 -> ram:80e9ad1e ; ghidra: UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_2]

undefined4 UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor_2(void)

{
  return 0x3c;
}



// ---- UnitySourceGeneratedAssemblyMonoScriptTypes_v1::ctor_3   [wasm func60681 -> ram:812ff6b3 ; ghidra: UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_3]

int UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor_3(undefined4 *param_1)

{
  int iVar1;
  
  if (cRam00661f1f == '\0') {
    unnamed_function_1099(0x559ca0);
    cRam00661f1f = '\x01';
  }
  iVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559ca0,2);
  *(undefined4 *)(iVar1 + 0x10) = *param_1;
  *(undefined4 *)(iVar1 + 0x14) = param_1[1];
  return iVar1;
}



// ---- UnitySourceGeneratedAssemblyMonoScriptTypes_v1::ctor_4   [wasm func63186 -> ram:813aca0f ; ghidra: UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_4]

undefined4
UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor_4
          (undefined4 param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (cRam00662206 == '\0') {
    unnamed_function_1099(0x557db8);
    unnamed_function_1099(0x557de0);
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x56d3b8);
    unnamed_function_1099(0x56ec88);
    unnamed_function_1099(0x56ec8c);
    unnamed_function_1099(0x55da48);
    cRam00662206 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055da48);
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  uVar2 = unnamed_function_95402(uRam00557db8);
  unnamed_function_78188(uVar2,iVar1,uRam0056ec88,0);
  uVar3 = unnamed_function_95402(uRam00557de0);
  unnamed_function_78211(uVar3,iVar1,uRam0056ec8c,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  uVar2 = DG_Tweening_DOTween__ManualUpdate(uVar2,uVar3,param_2,param_3,0);
  DG_Tweening_TweenSettingsExtensions__SetSpeedBased_1
            (uVar2,*(undefined4 *)(iVar1 + 8),uRam0056d3b8);
  return uVar2;
}



// ---- UnitySourceGeneratedAssemblyMonoScriptTypes_v1::ctor_5   [wasm func86061 -> ram:81a1b657 ; ghidra: UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_5]

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor_5(void)

{
  int iVar1;
  
  iVar1 = multiple_2_UnityEngine_Input__GetKeyUpInt(0x71,0);
  if (iVar1 != 0) {
    AllIn1SpriteShader_All1DemoChangeScene__Update(0,0);
  }
  return;
}



// ---- UnitySourceGeneratedAssemblyMonoScriptTypes_v1::ctor_6   [wasm func86182 -> ram:81a23be4 ; ghidra: UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_6]

short UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor_6
                (undefined4 *param_1,int *param_2,short param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sStack_2;
  
  sVar1 = 0;
  sStack_2 = param_3;
  if (cRam00664849 == '\0') {
    unnamed_function_1099(0x55a4c4);
    cRam00664849 = '\x01';
  }
  if (0xfff5 < (ushort)(param_3 - 0x3aU)) {
    uVar3 = *param_1;
    if (*(int *)(iRam0055a4c4 + 0x74) == 0) {
      unnamed_function_94848(iRam0055a4c4);
    }
    uVar2 = unnamed_function_82584(&sStack_2,0);
    uVar3 = Mono_Security_X509_X509Crl_X509CrlEntry___ctor(uVar3,uVar2,0);
    *param_1 = uVar3;
    *param_2 = *param_2 + 1;
    sVar1 = sStack_2;
  }
  return sVar1;
}



