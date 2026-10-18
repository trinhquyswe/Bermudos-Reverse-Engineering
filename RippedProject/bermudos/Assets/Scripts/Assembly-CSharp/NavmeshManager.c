// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: NavmeshManager  (Assembly-CSharp)  -  11 function(s)

// ---- NavmeshManager::Awake   [wasm func86540 -> ram:81a3b600 ; ghidra: NavmeshManager::Awake]

void NavmeshManager__Awake(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (cRam00664933 == '\0') {
    unnamed_function_1099(0x557a10);
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x56b40c);
    unnamed_function_1099(0x56b410);
    cRam00664933 = '\x01';
  }
  uVar3 = unnamed_function_95402(uRam00557a10);
  UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam0056b40c,0);
  SoundEffectSO___ctor(uVar3,param_1);
  uVar3 = unnamed_function_95402(iRam00559fb4);
  unnamed_function_82700(uVar3,param_1,uRam0056b410,0);
  if (cRam006649c4 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x55c894);
    cRam006649c4 = '\x01';
  }
  iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x28);
  while ((piVar4 = (int *)unnamed_function_85158(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
         (iRam00559fb4 == *piVar4))) {
    iVar5 = System_Net_WebOperation___ctor(*(int *)(iRam0055c894 + 0x5c) + 0x28,piVar4,iVar2);
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



// ---- NavmeshManager::OnEnable   [wasm func86543 -> ram:81a3b82d ; ghidra: NavmeshManager::OnEnable]

void NavmeshManager__OnEnable(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (cRam00664934 == '\0') {
    unnamed_function_1099(0x557a10);
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x56b40c);
    unnamed_function_1099(0x56b410);
    cRam00664934 = '\x01';
  }
  uVar3 = unnamed_function_95402(uRam00557a10);
  UnityEngine_UIElements_VisualElement__get_layout(uVar3,param_1,uRam0056b40c,0);
  StaticEventHandler__add_OnMapChanged(uVar3,param_1);
  uVar3 = unnamed_function_95402(iRam00559fb4);
  unnamed_function_82700(uVar3,param_1,uRam0056b410,0);
  if (cRam006649c5 == '\0') {
    unnamed_function_1099(0x559fb4);
    unnamed_function_1099(0x55c894);
    cRam006649c5 = '\x01';
  }
  iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x28);
  while ((piVar4 = (int *)unnamed_function_85160(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
         (iRam00559fb4 == *piVar4))) {
    iVar5 = System_Net_WebOperation___ctor(*(int *)(iRam0055c894 + 0x5c) + 0x28,piVar4,iVar2);
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



// ---- NavmeshManager::OnDisable   [wasm func86546 -> ram:81a3ba59 ; ghidra: NavmeshManager::OnDisable]

void NavmeshManager__OnDisable(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664935 == '\0') {
    unnamed_function_1099(0x55e45c);
    cRam00664935 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e45c);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  return;
}



// ---- NavmeshManager::StaticEventHandler_OnMapChanged   [wasm func86547 -> ram:81a3ba9f ; ghidra: NavmeshManager::StaticEventHandler_OnMapChanged]

int NavmeshManager__StaticEventHandler_OnMapChanged(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664935 == '\0') {
    unnamed_function_1099(0x55e45c);
    cRam00664935 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e45c);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- NavmeshManager::BuildNavMeshWhenMapChangedCoroutine   [wasm func86548 -> ram:81a3badc ; ghidra: NavmeshManager::BuildNavMeshWhenMapChangedCoroutine]

void NavmeshManager__BuildNavMeshWhenMapChangedCoroutine(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664936 == '\0') {
    unnamed_function_1099(0x55e460);
    cRam00664936 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e460);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  return;
}



// ---- NavmeshManager::StaticEventHandler_OnRestInBonfire   [wasm func86549 -> ram:81a3bb22 ; ghidra: NavmeshManager::StaticEventHandler_OnRestInBonfire]

int NavmeshManager__StaticEventHandler_OnRestInBonfire(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664936 == '\0') {
    unnamed_function_1099(0x55e460);
    cRam00664936 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e460);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- NavmeshManager::BuildNavMeshWhenMapChangedCoroutine_d_5_System_IDisposable_Dispose   [wasm func86550 -> ram:81a3bb60 ; ghidra: NavmeshManager+<BuildNavMeshWhenMapChangedCoroutine>d__5::System.IDisposable.Dispose]

undefined4
NavmeshManager_<BuildNavMeshWhenMapChangedCoroutine>d__5__System_IDisposable_Dispose(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      NavMeshPlus_Components_NavMeshSurface__RemoveData
                (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10),0);
      if (cRam006649b7 == '\0') {
        unnamed_function_1099(0x55be94);
        unnamed_function_1099(0x55c894);
        cRam006649b7 = '\x01';
      }
      iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x14);
      if (iVar2 != 0) {
        iVar1 = unnamed_function_95402(uRam0055be94);
        OnItemUIChangedEventArgs___ctor(iVar1,0);
        *(undefined1 *)(iVar1 + 8) = 1;
        (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                  (*(undefined4 *)(iVar2 + 0x20),iVar1,*(undefined4 *)(iVar2 + 0x14));
      }
    }
    return 0;
  }
  *(undefined8 *)(param_1 + 8) = 1;
  return 1;
}



// ---- NavmeshManager::BuildNavMeshWhenMapChangedCoroutine_d_5_System_Collections_Generic_IEnumerator_System   [wasm func86552 -> ram:81a3bc6c ; ghidra: NavmeshManager+<BuildNavMeshWhenMapChangedCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void NavmeshManager_<BuildNavMeshWhenMapChangedCoroutine>d__5__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f660);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- NavmeshManager::BuildNavMeshWhenRestCoroutine_d_7_System_IDisposable_Dispose   [wasm func86553 -> ram:81a3bc94 ; ghidra: NavmeshManager+<BuildNavMeshWhenRestCoroutine>d__7::System.IDisposable.Dispose]

undefined4
NavmeshManager_<BuildNavMeshWhenRestCoroutine>d__7__System_IDisposable_Dispose(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      NavMeshPlus_Components_NavMeshSurface__RemoveData
                (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10),0);
      if (cRam006649b7 == '\0') {
        unnamed_function_1099(0x55be94);
        unnamed_function_1099(0x55c894);
        cRam006649b7 = '\x01';
      }
      iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x14);
      if (iVar2 != 0) {
        iVar1 = unnamed_function_95402(uRam0055be94);
        OnItemUIChangedEventArgs___ctor(iVar1,0);
        *(undefined1 *)(iVar1 + 8) = 0;
        (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                  (*(undefined4 *)(iVar2 + 0x20),iVar1,*(undefined4 *)(iVar2 + 0x14));
      }
    }
    return 0;
  }
  *(undefined8 *)(param_1 + 8) = 1;
  return 1;
}



// ---- NavmeshManager::BuildNavMeshWhenRestCoroutine_d_7_System_Collections_Generic_IEnumerator_System_Objec   [wasm func86554 -> ram:81a3bd33 ; ghidra: NavmeshManager+<BuildNavMeshWhenRestCoroutine>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void NavmeshManager_<BuildNavMeshWhenRestCoroutine>d__7__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f664);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- NavmeshManager::BuildNavMeshWhenRestCoroutine_d_7_System_Collections_IEnumerator_get_Current   [wasm func86555 -> ram:81a3bd5a ; ghidra: NavmeshManager+<BuildNavMeshWhenRestCoroutine>d__7::System.Collections.IEnumerator.get_Current]

void NavmeshManager_<BuildNavMeshWhenRestCoroutine>d__7__System_Collections_IEnumerator_get_Current
               (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664937 == '\0') {
    unnamed_function_1099(0x567f24);
    unnamed_function_1099(0x559cf4);
    unnamed_function_1099(0x576924);
    cRam00664937 = '\x01';
  }
  iVar1 = Mono_Security_ASN1Convert__ToOid(uRam00559cf4,1);
  *(undefined4 *)(iVar1 + 0x10) = uRam00576924;
  uVar2 = UnityEngine_LayerMask__NameToLayer(iVar1,0);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f24);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}



