// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: PoolManager  (Assembly-CSharp)  -  6 function(s)

// ---- PoolManager::CreatePool   [wasm func86392 -> ram:81a34be5 ; ghidra: PoolManager::CreatePool]

undefined4 PoolManager__CreatePool(int param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664953 == '\0') {
    unnamed_function_1099(0x55a9bc);
    unnamed_function_1099(0x560014);
    unnamed_function_1099(0x576214);
    cRam00664953 = '\x01';
  }
  uVar2 = UnityEngine_U2D_Animation_BufferManager__get_instance(param_2,0);
  iVar3 = unnamed_function_17516(*(undefined4 *)(param_1 + 0x18),uVar2,uRam00560014);
  uVar1 = uRam00576214;
  if (iVar3 == 0) {
    if (param_2 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)((ulonglong)*(uint *)(*param_2 + 0xd8) * 4))
                        (param_2,*(undefined4 *)(*param_2 + 0xdc));
    }
    uVar2 = Mono_Security_X509_X509Crl_X509CrlEntry___ctor(uVar1,uVar2,0);
    if (*(int *)(iRam0055a9bc + 0x74) == 0) {
      unnamed_function_94848(iRam0055a9bc);
    }
    uVar1 = 0;
    UnityEngine_InputSystem_Layouts_InputControlLayout_Collection__TryLoadLayout(uVar2,0);
  }
  else {
    uVar1 = PoolManager__ReuseComponent(param_1,uVar2,&uStack_50);
    uStack_18 = param_4[1];
    uStack_20 = *param_4;
    uVar2 = System_Linq_Enumerable__Count(uVar1,0);
    uStack_28 = *(undefined4 *)(param_3 + 1);
    uStack_30 = *param_3;
    multiple_2_UnityEngine_Transform___ctor(uVar2,&uStack_30,0);
    uVar2 = System_Linq_Enumerable__Count(uVar1,0);
    uStack_38 = uStack_18;
    uStack_40 = uStack_20;
    multiple_2_UnityEngine_Transform__set_forward(uVar2,&uStack_40,0);
    uVar2 = unnamed_function_44644(uVar1,0);
    uVar2 = UnityEngine_GameObject__AddComponent(uVar2,0);
    uVar4 = UnityEngine_GameObject__AddComponent(param_2,0);
    UnityEngine_Transform__set_localRotation(&uStack_10,uVar4,0);
    uStack_48 = uStack_8;
    uStack_50 = uStack_10;
    multiple_2_UnityEngine_Transform__get_localScale(uVar2,&uStack_50,0);
  }
  return uVar1;
}



// ---- PoolManager::Awake   [wasm func86604 -> ram:81a3ec7a ; ghidra: PoolManager::Awake]

void PoolManager__Awake(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (cRam00664952 == '\0') {
    unnamed_function_1099(0x560010);
    unnamed_function_1099(0x560014);
    unnamed_function_1099(0x560018);
    unnamed_function_1099(0x55af50);
    unnamed_function_1099(0x56b53c);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x56b9bc);
    unnamed_function_1099(0x5657d0);
    unnamed_function_1099(0x5657c8);
    unnamed_function_1099(0x55959c);
    unnamed_function_1099(0x56d44c);
    unnamed_function_1099(0x55cd8c);
    unnamed_function_1099(0x570c68);
    cRam00664952 = '\x01';
  }
  uVar1 = UnityEngine_U2D_Animation_BufferManager__get_instance(param_2,0);
  uVar2 = UnityEngine_TextCore_Text_FontAsset__LoadFontFace(param_2,0);
  uVar2 = Mono_Security_X509_X509Crl_X509CrlEntry___ctor(uVar2,uRam00570c68,0);
  uVar3 = unnamed_function_95402(uRam0055af50);
  UnityEngine_GameObject__SendMessage_2(uVar3,uVar2,0);
  uVar2 = UnityEngine_GameObject__AddComponent(uVar3,0);
  multiple_2_UnityEngine_Transform__get_parentInternal(uVar2,*(undefined4 *)(param_1 + 0x14),0);
  iVar4 = unnamed_function_17516(*(undefined4 *)(param_1 + 0x18),uVar1,uRam00560014);
  if (iVar4 == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = unnamed_function_95402(uRam0055959c);
    multiple_3_System_IO_Enumeration_FileSystemEntry__get_Attributes(uVar2,uRam005657c8);
    unnamed_function_78474(uVar6,uVar1,uVar2,uRam00560010);
    if (0 < param_3) {
      iVar4 = 0;
      do {
        uVar2 = UnityEngine_GameObject__AddComponent(uVar3,0);
        if (*(int *)(iRam0055be2c + 0x74) == 0) {
          unnamed_function_94848(iRam0055be2c);
        }
        uVar2 = UnityEngine_Object__FindObjectsOfType_1(param_2,uVar2,uRam0056b53c);
        unnamed_function_44686(uVar2,0,0);
        uVar6 = unnamed_function_78417(*(undefined4 *)(param_1 + 0x18),uVar1,uRam00560018);
        if (*(int *)(iRam0055cd8c + 0x74) == 0) {
          unnamed_function_94848(iRam0055cd8c);
        }
        uVar5 = unnamed_function_1131(param_4,uRam0056d44c,uRam0056b9bc);
        uVar2 = UnityEngine_ExtensionOfNativeClassAttribute___ctor(uVar2,uVar5,0);
        System_IO_Path__Join(uVar6,uVar2,uRam005657d0);
        iVar4 = iVar4 + 1;
      } while (iVar4 != param_3);
    }
  }
  return;
}



// ---- PoolManager::ReuseComponent   [wasm func86605 -> ram:81a3ee40 ; ghidra: PoolManager::ReuseComponent]

undefined4 PoolManager__ReuseComponent(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (cRam00664954 == '\0') {
    unnamed_function_1099(0x560018);
    unnamed_function_1099(0x5657cc);
    unnamed_function_1099(0x5657d0);
    cRam00664954 = '\x01';
  }
  uVar1 = unnamed_function_78417(*(undefined4 *)(param_1 + 0x18),param_2,uRam00560018);
  uVar1 = unnamed_function_30873(uVar1,uRam005657cc);
  uVar2 = unnamed_function_78417(*(undefined4 *)(param_1 + 0x18),param_2,uRam00560018);
  System_IO_Path__Join(uVar2,uVar1,uRam005657d0);
  uVar2 = unnamed_function_44644(uVar1,0);
  iVar3 = UnityEngine_GameObject__set_layer(uVar2,0);
  if (iVar3 != 0) {
    uVar2 = unnamed_function_44644(uVar1,0);
    unnamed_function_44686(uVar2,0,0);
  }
  return uVar1;
}



// ---- PoolManager::GetComponentFromPool   [wasm func86606 -> ram:81a3eed7 ; ghidra: PoolManager::GetComponentFromPool]

void PoolManager__GetComponentFromPool
               (undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uVar1 = System_Linq_Enumerable__Count(param_3,0);
  uStack_18 = *(undefined4 *)(param_1 + 1);
  uStack_20 = *param_1;
  multiple_2_UnityEngine_Transform___ctor(uVar1,&uStack_20,0);
  uVar1 = System_Linq_Enumerable__Count(param_3,0);
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  multiple_2_UnityEngine_Transform__set_forward(uVar1,&uStack_30,0);
  uVar1 = unnamed_function_44644(param_3,0);
  uVar1 = UnityEngine_GameObject__AddComponent(uVar1,0);
  uVar2 = UnityEngine_GameObject__AddComponent(param_4,0);
  UnityEngine_Transform__set_localRotation(&uStack_10,uVar2,0);
  uStack_38 = uStack_8;
  uStack_40 = uStack_10;
  multiple_2_UnityEngine_Transform__get_localScale(uVar1,&uStack_40,0);
  return;
}



// ---- PoolManager::ResetObject   [wasm func86607 -> ram:81a3ef81 ; ghidra: PoolManager::ResetObject]

void PoolManager__ResetObject(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664955 == '\0') {
    unnamed_function_1099(0x56000c);
    unnamed_function_1099(0x557ed8);
    unnamed_function_1099(0x565d5c);
    cRam00664955 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557ed8);
  unnamed_function_17497(uVar1,uRam0056000c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  multiple_127_System_Collections_Generic_ShortEnumEqualityComparer_1__GetHashCode
            (param_1,uRam00565d5c);
  return;
}



// ---- PoolManager::ctor   [wasm func86609 -> ram:81a3eff2 ; ghidra: PoolManager::.ctor]

void PoolManager___ctor(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (cRam00664956 == '\0') {
    unnamed_function_1099(0x567e18);
    unnamed_function_1099(0x559cf4);
    unnamed_function_1099(0x574184);
    unnamed_function_1099(0x572aa0);
    unnamed_function_1099(0x572944);
    unnamed_function_1099(0x576924);
    cRam00664956 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e18);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  iVar2 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar2 + 0x10) = uRam00574184;
  uVar1 = UnityEngine_LayerMask__NameToLayer(iVar2,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  iVar2 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar2 + 0x10) = uRam00572aa0;
  uVar1 = UnityEngine_LayerMask__NameToLayer(iVar2,0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  iVar2 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar2 + 0x10) = uRam00576924;
  uVar1 = UnityEngine_LayerMask__NameToLayer(iVar2,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  iVar2 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar2 + 0x10) = uRam00572944;
  uVar1 = UnityEngine_LayerMask__NameToLayer(iVar2,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}



