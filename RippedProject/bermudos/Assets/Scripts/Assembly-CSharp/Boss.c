// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Boss  (Assembly-CSharp)  -  9 function(s)

// ---- Boss::Awake   [wasm func86938 -> ram:81a4bdbc ; ghidra: Boss::Awake]

void Boss__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664aab == '\0') {
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x56788c);
    cRam00664aab = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = unnamed_function_95402(uRam00557acc);
  unnamed_function_60334(uVar5,param_1,uRam0056788c,0);
  if (cRam00664b3f == '\0') {
    unnamed_function_1099(0x557acc);
    cRam00664b3f = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85158(iVar3,uVar5,0);
    uVar2 = uRam00557acc;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557acc), iVar4 == 0)) break;
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



// ---- Boss::OnEnable   [wasm func86940 -> ram:81a4bf06 ; ghidra: Boss::OnEnable]

void Boss__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664aac == '\0') {
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x56788c);
    cRam00664aac = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = unnamed_function_95402(uRam00557acc);
  unnamed_function_60334(uVar5,param_1,uRam0056788c,0);
  if (cRam00664b40 == '\0') {
    unnamed_function_1099(0x557acc);
    cRam00664b40 = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85160(iVar3,uVar5,0);
    uVar2 = uRam00557acc;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557acc), iVar4 == 0)) break;
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



// ---- Boss::OnDisable   [wasm func86942 -> ram:81a4c04f ; ghidra: Boss::OnDisable]

void Boss__OnDisable(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664aad == '\0') {
    unnamed_function_1099(0x579c00);
    cRam00664aad = '\x01';
  }
  StaticEventHandler__remove_OnBossChanged(param_1,0);
  iVar1 = UnityEngine_MonoBehaviour__InvokeRepeating(param_1);
  UnityEngine_Material__SetInt(*(undefined4 *)(iVar1 + 0x30),uRam00579c00,0,0);
  return;
}



// ---- Boss::Start   [wasm func86943 -> ram:81a4c094 ; ghidra: Boss::Start]

int Boss__Start(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664aae == '\0') {
    unnamed_function_1099(0x55d85c);
    cRam00664aae = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055d85c);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- Boss::BossAttack   [wasm func86944 -> ram:81a4c0d2 ; ghidra: Boss::BossAttack]

void Boss__BossAttack(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (cRam00664aaf == '\0') {
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x56788c);
    cRam00664aaf = '\x01';
  }
  if (*(int *)(param_3 + 0xc) < 1) {
    Boss__HealthEvent_OnHealthLost(param_1,param_3);
    uVar5 = unnamed_function_95402(uRam00557acc);
    unnamed_function_60334(uVar5,param_1,uRam0056788c,0);
    if (cRam00664b40 == '\0') {
      unnamed_function_1099(0x557acc);
      cRam00664b40 = '\x01';
    }
    iVar4 = *(int *)(param_2 + 0x10);
    do {
      iVar3 = 0;
      iVar6 = unnamed_function_85160(iVar4,uVar5,0);
      uVar2 = uRam00557acc;
      if ((iVar6 != 0) && (iVar3 = unnamed_function_1112(iVar6,uRam00557acc), iVar3 == 0)) {
        unnamed_function_1116(iVar6,uVar2);
        do {
          halt_trap();
        } while( true );
      }
      iVar3 = System_Net_WebOperation___ctor(param_2 + 0x10,iVar3,iVar4);
      bVar1 = iVar4 != iVar3;
      iVar4 = iVar3;
    } while (bVar1);
  }
  return;
}



// ---- Boss::HealthEvent_OnHealthLost   [wasm func86945 -> ram:81a4c1a9 ; ghidra: Boss::HealthEvent_OnHealthLost]

void Boss__HealthEvent_OnHealthLost(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (cRam00664ab0 == '\0') {
    unnamed_function_1099(0x567e70);
    unnamed_function_1099(0x55ab64);
    cRam00664ab0 = '\x01';
  }
  iVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e70);
  iVar2 = unnamed_function_95402(uRam0055ab64);
  if (cRam00664b36 == '\0') {
    unnamed_function_1099(0x55ad18);
    cRam00664b36 = '\x01';
  }
  if (*(int *)(iRam0055ad18 + 0x74) == 0) {
    unnamed_function_94848(iRam0055ad18);
  }
  *(undefined1 *)(iVar2 + 9) = 1;
  iVar3 = *(int *)(iVar1 + 0x10);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),iVar1,iVar2,*(undefined4 *)(iVar3 + 0x14));
  }
  return;
}



// ---- Boss::BossAttack_d_11_System_IDisposable_Dispose   [wasm func86947 -> ram:81a4c287 ; ghidra: Boss+<BossAttack>d__11::System.IDisposable.Dispose]

undefined4 Boss_<BossAttack>d__11__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ab1 == '\0') {
    unnamed_function_1099(0x55c620);
    cRam00664ab1 = '\x01';
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24);
      if (*(int *)(iRam0055c620 + 0x74) == 0) {
        unnamed_function_94848(iRam0055c620);
      }
      multiple_2_UnityEngine_Animator__SetTrigger
                (uVar1,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x4c),0);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24);
  if (*(int *)(iRam0055c620 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__SetTrigger
            (uVar1,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x48),0);
  *(undefined8 *)(param_1 + 8) = 1;
  return 1;
}



// ---- Boss::BossAttack_d_11_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86948 -> ram:81a4c340 ; ghidra: Boss+<BossAttack>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void Boss_<BossAttack>d__11__System_Collections_Generic_IEnumerator<System_Object>_get_Current(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56eb34);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- Boss::BossAttack_d_11_System_Collections_IEnumerator_get_Current   [wasm func86949 -> ram:81a4c368 ; ghidra: Boss+<BossAttack>d__11::System.Collections.IEnumerator.get_Current]

void Boss_<BossAttack>d__11__System_Collections_IEnumerator_get_Current(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664ab2 == '\0') {
    unnamed_function_1099(0x56789c);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d340);
    unnamed_function_1099(0x56d37c);
    cRam00664ab2 = '\x01';
  }
  if (cRam00664ab4 == '\0') {
    unnamed_function_1099(0x57be08);
    cRam00664ab4 = '\x01';
  }
  iVar1 = UnityEngine_PlayerPrefs__GetString_1(uRam0057be08,0);
  if ((iVar1 == 0) || (iVar1 = UnityEngine_PlayerPrefs__GetInt(uRam0057be08,0), iVar1 != 1)) {
    uStack_8 = 0x4416000045098000;
    uStack_10 = 0x4416000045098000;
    uVar2 = DG_Tweening_DOTweenModuleUI__DOPivotY
                      (*(undefined4 *)(param_1 + 0x10),&uStack_10,0x3f800000,0,0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__SetEase(uVar2,0x1b,uRam0056d37c);
    uVar3 = unnamed_function_95402(uRam0055cd74);
    DG_Tweening_Color2__op_Multiply(uVar3,param_1,uRam0056789c,0);
    DG_Tweening_TweenSettingsExtensions__From_6(uVar2,uVar3,uRam0056d340);
  }
  else {
    unnamed_function_44686(*(undefined4 *)(param_1 + 0x20),0,0);
    iVar1 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = System_Threading_Monitor__Enter_1(iVar1);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = System_Threading_Monitor__Enter_1(iVar1);
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (cRam00664b1b == '\0') {
      unnamed_function_1099(0x565d58);
      cRam00664b1b = '\x01';
    }
    *(undefined4 *)(iVar1 + 0x1c) = 3;
    if (cRam00664b1f == '\0') {
      unnamed_function_1099(0x567f18);
      cRam00664b1f = '\x01';
    }
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy
                      (*(undefined4 *)(iVar1 + 0x10),uRam00567f18);
    UnityEngine_Rigidbody2D__get_mass(uVar2,0x3f000000,0);
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
                (*(undefined4 *)(iVar1 + 0x20),3,*(undefined4 *)(iVar1 + 0x14));
    }
    uVar2 = unnamed_function_44644(param_1,0);
    unnamed_function_44686(uVar2,0,0);
  }
  return;
}



