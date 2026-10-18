// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: TransitionPoint  (Assembly-CSharp)  -  5 function(s)

// ---- TransitionPoint::OnTriggerEnter2D   [wasm func86501 -> ram:81a39875 ; ghidra: TransitionPoint::OnTriggerEnter2D]

int TransitionPoint__OnTriggerEnter2D(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (cRam00664915 == '\0') {
    unnamed_function_1099(0x55ece8);
    cRam00664915 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ece8);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- TransitionPoint::MapTransitionCoroutine   [wasm func86502 -> ram:81a398ba ; ghidra: TransitionPoint::MapTransitionCoroutine]

void TransitionPoint__MapTransitionCoroutine(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam00664916 == '\0') {
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x56d2ec);
    unnamed_function_1099(0x55984c);
    unnamed_function_1099(0x5762e0);
    cRam00664916 = '\x01';
  }
  iVar1 = multiple_2_System_String__Equals
                    (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10),uRam005762e0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = System_Threading_Monitor__Enter_1(iVar1);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = System_Threading_Monitor__Enter_1(iVar1);
    }
    GameManager__TransitionToGame(**(undefined4 **)(iVar1 + 0x5c),4,0);
  }
  uVar2 = unnamed_function_95402(uRam0055984c);
  unnamed_function_71914(uVar2,param_1,uRam0056d2ec,0);
  if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c4f8);
  }
  UnityEngine_SceneManagement_SceneManager__add_sceneLoaded(uVar2,0);
  return;
}



// ---- TransitionPoint::SceneManager_sceneLoaded   [wasm func86503 -> ram:81a3999a ; ghidra: TransitionPoint::SceneManager_sceneLoaded]

void TransitionPoint__SceneManager_sceneLoaded(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664917 == '\0') {
    unnamed_function_1099(0x55d134);
    cRam00664917 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam0055d134);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,0x3dcccccd,0)
  ;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- TransitionPoint::MapTransitionCoroutine_d_4_System_IDisposable_Dispose   [wasm func86504 -> ram:81a399e3 ; ghidra: TransitionPoint+<MapTransitionCoroutine>d__4::System.IDisposable.Dispose]

undefined4 TransitionPoint_<MapTransitionCoroutine>d__4__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 auStack_8 [2];
  
  uVar1 = 0;
  if (cRam00664918 == '\0') {
    unnamed_function_1099(0x567ef0);
    unnamed_function_1099(0x55c4f8);
    unnamed_function_1099(0x56d2ec);
    unnamed_function_1099(0x55984c);
    cRam00664918 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (cRam006649ab == '\0') {
      unnamed_function_1099(0x55c894);
      cRam006649ab = '\x01';
    }
    iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 4);
    if (iVar3 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
                (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
    }
    uVar4 = *(undefined4 *)(iVar2 + 0x18);
    uVar1 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xc);
    if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c4f8);
    }
    auStack_8[0] = UnityEngine_SceneManagement_SceneManager__GetActiveScene(uVar1,0);
    iVar3 = UnityEngine_SceneManagement_Scene__get_name(auStack_8,0);
    if (iVar3 != 0) {
      uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xc);
      if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
        unnamed_function_94848(iRam0055c4f8);
      }
      UnityEngine_SceneManagement_SceneManager__LoadScene_4(uVar1,0);
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x10);
    uVar1 = 0;
    if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c4f8);
    }
    UnityEngine_SceneManagement_SceneManager__remove_sceneUnloaded(uVar4,1,0);
    uVar4 = unnamed_function_95402(uRam0055984c);
    unnamed_function_71914(uVar4,iVar2,uRam0056d2ec,0);
    UnityEngine_SceneManagement_SceneManager__LoadFirstScene_Internal(uVar4,0);
    uVar4 = UnityEngine_GameObject__get_activeInHierarchy
                      (*(undefined4 *)(param_1 + 0x14),uRam00567ef0);
    uVar4 = System_Linq_Enumerable__Count(uVar4,0);
    uStack_28 = *(undefined8 *)(*(int *)(iVar2 + 0x10) + 0x14);
    uStack_10 = 0;
    uStack_20 = 0;
    uStack_18 = uStack_28;
    multiple_2_UnityEngine_Transform___ctor(uVar4,&uStack_28,0);
  }
  return uVar1;
}



// ---- TransitionPoint::MapTransitionCoroutine_d_4_System_Collections_Generic_IEnumerator_System_Object_get_   [wasm func86505 -> ram:81a39bcb ; ghidra: TransitionPoint+<MapTransitionCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void TransitionPoint_<MapTransitionCoroutine>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56ffdc);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



