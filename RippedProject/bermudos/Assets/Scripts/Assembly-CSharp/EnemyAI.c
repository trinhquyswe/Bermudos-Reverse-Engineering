// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: EnemyAI  (Assembly-CSharp)  -  10 function(s)

// ---- EnemyAI::Awake   [wasm func87060 -> ram:81a50464 ; ghidra: EnemyAI::Awake]

void EnemyAI__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam00664af1 == '\0') {
    unnamed_function_1099(0x557ac8);
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x568eb0);
    unnamed_function_1099(0x568eb4);
    cRam00664af1 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(iVar6 + 0x10);
  uVar2 = unnamed_function_95402(uRam00557ac8);
  unnamed_function_60334(uVar2,param_1,uRam00568eb0,0);
  iVar3 = unnamed_function_85158(uVar7,uVar2,0);
  uVar2 = uRam00557ac8;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  else {
    iVar4 = unnamed_function_1112(iVar3,uRam00557ac8);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar3,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar6 + 0x10) = iVar4;
    uVar2 = uRam00557ac8;
    iVar6 = unnamed_function_1112(iVar3,uRam00557ac8);
    if (iVar6 == 0) {
      unnamed_function_1116(iVar3,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
  uVar2 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar2,param_1,uRam00568eb4,0);
  if (cRam00664b44 == '\0') {
    unnamed_function_1099(0x557b08);
    cRam00664b44 = '\x01';
  }
  iVar6 = *(int *)(iVar3 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar6,uVar2,0);
    uVar7 = uRam00557b08;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557b08), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(iVar3 + 0x10,iVar4,iVar6);
    bVar1 = iVar6 == iVar4;
    iVar6 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar5,uVar7);
  do {
    halt_trap();
  } while( true );
}



// ---- EnemyAI::OnEnable   [wasm func87061 -> ram:81a505cb ; ghidra: EnemyAI::OnEnable]

void EnemyAI__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (cRam00664af2 == '\0') {
    unnamed_function_1099(0x557ac8);
    unnamed_function_1099(0x557b08);
    unnamed_function_1099(0x568eb0);
    unnamed_function_1099(0x568eb4);
    cRam00664af2 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(iVar6 + 0x10);
  uVar2 = unnamed_function_95402(uRam00557ac8);
  unnamed_function_60334(uVar2,param_1,uRam00568eb0,0);
  iVar3 = unnamed_function_85160(uVar7,uVar2,0);
  uVar2 = uRam00557ac8;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  else {
    iVar4 = unnamed_function_1112(iVar3,uRam00557ac8);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar3,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar6 + 0x10) = iVar4;
    uVar2 = uRam00557ac8;
    iVar6 = unnamed_function_1112(iVar3,uRam00557ac8);
    if (iVar6 == 0) {
      unnamed_function_1116(iVar3,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
  uVar2 = unnamed_function_95402(uRam00557b08);
  unnamed_function_60334(uVar2,param_1,uRam00568eb4,0);
  if (cRam00664b44 == '\0') {
    unnamed_function_1099(0x557b08);
    cRam00664b44 = '\x01';
  }
  iVar6 = *(int *)(iVar3 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar6,uVar2,0);
    uVar7 = uRam00557b08;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557b08), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(iVar3 + 0x10,iVar4,iVar6);
    bVar1 = iVar6 == iVar4;
    iVar6 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar5,uVar7);
  do {
    halt_trap();
  } while( true );
}



// ---- EnemyAI::OnDisable   [wasm func87062 -> ram:81a50731 ; ghidra: EnemyAI::OnDisable]

void EnemyAI__OnDisable(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(float *)(param_2 + 0xc) <= 0.0) {
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    if (cRam00664af3 == '\0') {
      unnamed_function_1099(0x55ddc8);
      cRam00664af3 = '\x01';
    }
    iVar1 = unnamed_function_95402(uRam0055ddc8);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 8) = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  }
  return;
}



// ---- EnemyAI::Update   [wasm func87063 -> ram:81a50795 ; ghidra: EnemyAI::Update]

void EnemyAI__Update(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (cRam00664af3 == '\0') {
    unnamed_function_1099(0x55ddc8);
    cRam00664af3 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ddc8);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  return;
}



// ---- EnemyAI::OnEnemyState   [wasm func87064 -> ram:81a507e3 ; ghidra: EnemyAI::OnEnemyState]

void EnemyAI__OnEnemyState(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 1) {
    multiple_8_AttackEvent__remove_OnAttack(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34),0);
    EnemyMovement__FindPlayer(*(undefined4 *)(param_1 + 0x10),param_1);
    EnemyMovement__MoveToPlayer(*(undefined4 *)(param_1 + 0x10),param_1);
    unnamed_function_87067(*(undefined4 *)(param_1 + 0x10),1,param_1);
    return;
  }
  if (iVar1 == 2) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
      iVar2 = *(int *)(iVar1 + 0x10);
      if (iVar2 != 0) {
        (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                  (*(undefined4 *)(iVar2 + 0x20),iVar1,*(undefined4 *)(iVar2 + 0x14));
      }
      EnemyAttack__Start(*(undefined4 *)(param_1 + 0x14),param_1);
      EnemyMovement_<StopEnemyCoroutine>d__19__System_Collections_IEnumerator_get_Current
                (*(undefined4 *)(param_1 + 0x18),1,param_1);
    }
    return;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      multiple_8_AttackEvent__remove_OnAttack(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34),0);
      EnemyMovement__GetDistanceToStartPosition(*(undefined4 *)(param_1 + 0x10),param_1);
      unnamed_function_87067(*(undefined4 *)(param_1 + 0x10),0,param_1);
      return;
    }
    if (iVar1 == 5) {
      return;
    }
  }
  multiple_8_AttackEvent__remove_OnAttack(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34),0);
  EnemyMovement__Start(*(undefined4 *)(param_1 + 0x10),param_1);
  EnemyMovement__MoveRoamingPosition(*(undefined4 *)(param_1 + 0x10),param_1);
  unnamed_function_87067(*(undefined4 *)(param_1 + 0x10),0,param_1);
  return;
}



// ---- EnemyAI::StopAttack   [wasm func87074 -> ram:81a515a2 ; ghidra: EnemyAI::StopAttack]

int EnemyAI__StopAttack(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (cRam00664af3 == '\0') {
    unnamed_function_1099(0x55ddc8);
    cRam00664af3 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ddc8);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- EnemyAI::StopAttackCoroutine   [wasm func87075 -> ram:81a515e6 ; ghidra: EnemyAI::StopAttackCoroutine]

void EnemyAI__StopAttackCoroutine(int param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- EnemyAI::StopAttackCoroutine_d_14_System_IDisposable_Dispose   [wasm func87076 -> ram:81a515f9 ; ghidra: EnemyAI+<StopAttackCoroutine>d__14::System.IDisposable.Dispose]

undefined4 EnemyAI_<StopAttackCoroutine>d__14__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664af4 == '\0') {
    unnamed_function_1099(0x55d134);
    cRam00664af4 = '\x01';
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x28) = 1;
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x28) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = unnamed_function_95402(uRam0055d134);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,uVar2,0);
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}



// ---- EnemyAI::StopAttackCoroutine_d_14_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func87077 -> ram:81a51681 ; ghidra: EnemyAI+<StopAttackCoroutine>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void EnemyAI_<StopAttackCoroutine>d__14__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f118);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- EnemyAI::StopAttackCoroutine_d_14_System_Collections_IEnumerator_get_Current   [wasm func87078 -> ram:81a516a8 ; ghidra: EnemyAI+<StopAttackCoroutine>d__14::System.Collections.IEnumerator.get_Current]

void EnemyAI_<StopAttackCoroutine>d__14__System_Collections_IEnumerator_get_Current(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664af5 == '\0') {
    unnamed_function_1099(0x567e78);
    cRam00664af5 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e78);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



