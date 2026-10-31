// Assembly-CSharp :: EnemyAI
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class EnemyAI : MonoBehaviour // TypeDefIndex: 5588
{
	// Fields
	private EnemyMovement enemyMovement; // 0x10
	private EnemyAttack enemyAttack; // 0x14
	private EnemyStateEvent enemyStateEvent; // 0x18
	private Enemy enemy; // 0x1C
	[HideInInspector]
	public EnemyState enemyState; // 0x20
	private Coroutine attackCoroutine; // 0x24
	private bool isAttack; // 0x28

	// Methods

	// RVA: 0x37A4 Offset: 0x37A4 VA: 0x37A4
	private void Awake() { }

	// RVA: 0x37A5 Offset: 0x37A5 VA: 0x37A5
	private void OnEnable() { }

	// RVA: 0x37A6 Offset: 0x37A6 VA: 0x37A6
	private void OnDisable() { }

	// RVA: 0x37A7 Offset: 0x37A7 VA: 0x37A7
	private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs) { }

	// RVA: 0x37A8 Offset: 0x37A8 VA: 0x37A8
	private void OnEnemyState(EnemyStateEvent enemyStateEvent, EnemyStateEventArgs enemyStateEventArgs) { }

	// RVA: 0x37A9 Offset: 0x37A9 VA: 0x37A9
	private void Update() { }

	// RVA: 0x37AA Offset: 0x37AA VA: 0x37AA
	private void StopAttack(float stunTime) { }

	[IteratorStateMachine(typeof(EnemyAI.<StopAttackCoroutine>d__14))]
	// RVA: 0x37AB Offset: 0x37AB VA: 0x37AB
	private IEnumerator StopAttackCoroutine(float stunTime) { }

	// RVA: 0x37AC Offset: 0x37AC VA: 0x37AC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- EnemyAI$$Awake ----
// C#: void EnemyAI__Awake (EnemyAI_o* __this, const MethodInfo* method);

void EnemyAI__Awake(EnemyAI_o *__this,MethodInfo *method)

{
  Enemy_o *pEVar1;
  EnemyStateEvent_o *pEVar2;
  EnemyAttack_o *pEVar3;
  EnemyMovement_o *pEVar4;
  
  if (DAT_ram_00664af0 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e80);
    unnamed_function_1099(&DAT_ram_00567e88);
    unnamed_function_1099(&DAT_ram_00567e8c);
    unnamed_function_1099(&DAT_ram_00567e78);
    DAT_ram_00664af0 = '\x01';
  }
  pEVar1 = (Enemy_o *)unnamed_function_65370(__this,DAT_ram_00567e78);
  __this->enemy = pEVar1;
  pEVar2 = (EnemyStateEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e8c);
  __this->enemyStateEvent = pEVar2;
  pEVar3 = (EnemyAttack_o *)unnamed_function_65370(__this,DAT_ram_00567e80);
  __this->enemyAttack = pEVar3;
  pEVar4 = (EnemyMovement_o *)unnamed_function_65370(__this,DAT_ram_00567e88);
  __this->enemyMovement = pEVar4;
  return;
}

// ---- EnemyAI$$OnEnable ----
// C#: void EnemyAI__OnEnable (EnemyAI_o* __this, const MethodInfo* method);

void EnemyAI__OnEnable(EnemyAI_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  Action_o *pAVar5;
  EnemyStateEvent_o *pEVar6;
  Action_o *pAVar7;
  PoiseEvent_o *pPVar8;
  
  if (DAT_ram_00664af1 == '\0') {
    unnamed_function_1099(&System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568eb0);
    unnamed_function_1099(&DAT_ram_00568eb4);
    DAT_ram_00664af1 = '\x01';
  }
  pEVar6 = __this->enemyStateEvent;
  pAVar7 = pEVar6->onEnemyState;
  uVar2 = unnamed_function_95402(System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
  unnamed_function_60334(uVar2,__this,DAT_ram_00568eb0,0);
  iVar3 = unnamed_function_85158(pAVar7,uVar2,0);
  uVar2 = System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo;
  if (iVar3 == 0) {
    pEVar6->onEnemyState = (Action_o *)0x0;
  }
  else {
    pAVar7 = (Action_o *)
             unnamed_function_1112
                       (iVar3,System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
    if (pAVar7 == (Action_o *)0x0) {
      unnamed_function_1116(iVar3,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    pEVar6->onEnemyState = pAVar7;
    uVar2 = System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo;
    iVar4 = unnamed_function_1112
                      (iVar3,System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar3,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  pPVar8 = __this->enemy->poiseEvent;
  uVar2 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(uVar2,__this,DAT_ram_00568eb4,0);
  if (DAT_ram_00664b44 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    DAT_ram_00664b44 = '\x01';
  }
  pAVar7 = pPVar8->OnPoise;
  while( true ) {
    iVar3 = 0;
    iVar4 = unnamed_function_85158(pAVar7,uVar2,0);
    param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
    if ((iVar4 != 0) &&
       (iVar3 = unnamed_function_1112(iVar4,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo),
       iVar3 == 0)) break;
    pAVar5 = (Action_o *)unnamed_function_1144(&pPVar8->OnPoise,iVar3,pAVar7);
    bVar1 = pAVar7 == pAVar5;
    pAVar7 = pAVar5;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar4,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- EnemyAI$$OnDisable ----
// C#: void EnemyAI__OnDisable (EnemyAI_o* __this, const MethodInfo* method);

void EnemyAI__OnDisable(EnemyAI_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  Action_o *pAVar5;
  EnemyStateEvent_o *pEVar6;
  Action_o *pAVar7;
  PoiseEvent_o *pPVar8;
  
  if (DAT_ram_00664af2 == '\0') {
    unnamed_function_1099(&System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568eb0);
    unnamed_function_1099(&DAT_ram_00568eb4);
    DAT_ram_00664af2 = '\x01';
  }
  pEVar6 = __this->enemyStateEvent;
  pAVar7 = pEVar6->onEnemyState;
  uVar2 = unnamed_function_95402(System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
  unnamed_function_60334(uVar2,__this,DAT_ram_00568eb0,0);
  iVar3 = unnamed_function_85160(pAVar7,uVar2,0);
  uVar2 = System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo;
  if (iVar3 == 0) {
    pEVar6->onEnemyState = (Action_o *)0x0;
  }
  else {
    pAVar7 = (Action_o *)
             unnamed_function_1112
                       (iVar3,System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
    if (pAVar7 == (Action_o *)0x0) {
      unnamed_function_1116(iVar3,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    pEVar6->onEnemyState = pAVar7;
    uVar2 = System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo;
    iVar4 = unnamed_function_1112
                      (iVar3,System_Action_EnemyStateEvent__EnemyStateEventArgs__TypeInfo);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar3,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  pPVar8 = __this->enemy->poiseEvent;
  uVar2 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(uVar2,__this,DAT_ram_00568eb4,0);
  if (DAT_ram_00664b44 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    DAT_ram_00664b44 = '\x01';
  }
  pAVar7 = pPVar8->OnPoise;
  while( true ) {
    iVar3 = 0;
    iVar4 = unnamed_function_85158(pAVar7,uVar2,0);
    param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
    if ((iVar4 != 0) &&
       (iVar3 = unnamed_function_1112(iVar4,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo),
       iVar3 == 0)) break;
    pAVar5 = (Action_o *)unnamed_function_1144(&pPVar8->OnPoise,iVar3,pAVar7);
    bVar1 = pAVar7 == pAVar5;
    pAVar7 = pAVar5;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar4,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- EnemyAI$$PoiseEvent_OnPoise ----
// C#: void EnemyAI__PoiseEvent_OnPoise (EnemyAI_o* __this, PoiseEvent_o* poiseEvent, PoiseEventArgs_o* poiseEventArgs, const MethodInfo* method);

void EnemyAI__PoiseEvent_OnPoise
               (EnemyAI_o *__this,PoiseEvent_o *poiseEvent,PoiseEventArgs_o *poiseEventArgs,
               MethodInfo *method)

{
  int param2;
  float fVar1;
  
  if (poiseEventArgs->currentPoise <= 0.0) {
    fVar1 = poiseEventArgs->stunTime;
    if (DAT_ram_00664af3 == '\0') {
      unnamed_function_1099(&EnemyAI__StopAttackCoroutine_d__14_TypeInfo);
      DAT_ram_00664af3 = '\x01';
    }
    param2 = unnamed_function_95402(EnemyAI__StopAttackCoroutine_d__14_TypeInfo);
    *(float *)(param2 + 0x14 /* enemyAttack */) = fVar1;
    *(EnemyAI_o **)(param2 + 0x10 /* enemyMovement */) = __this;
    *(undefined4 *)(param2 + 8) = 0;
    unnamed_function_44725(__this,param2,0);
  }
  return;
}

// ---- EnemyAI$$OnEnemyState ----
// C#: void EnemyAI__OnEnemyState (EnemyAI_o* __this, EnemyStateEvent_o* enemyStateEvent, EnemyStateEventArgs_o* enemyStateEventArgs, const MethodInfo* method);

void EnemyAI__OnEnemyState
               (EnemyAI_o *__this,EnemyStateEvent_o *enemyStateEvent,
               EnemyStateEventArgs_o *enemyStateEventArgs,MethodInfo *method)

{
  __this->enemyState = enemyStateEventArgs->enemyState;
  return;
}

// ---- EnemyAI$$Update ----
// C#: void EnemyAI__Update (EnemyAI_o* __this, const MethodInfo* method);

void EnemyAI__Update(EnemyAI_o *__this,MethodInfo *method)

{
  EnemyState EVar1;
  AttackEvent_o *pAVar2;
  Action_o *pAVar3;
  
  EVar1 = __this->enemyState;
  if (EVar1 == Chasing) {
    AttackEvent__CallAttackEvent
              ((AttackEvent_o *)__this->enemy->moveByEnemyAIEvent,(MethodInfo *)0x0);
    EnemyMovement__MoveToPlayer(__this->enemyMovement,(MethodInfo *)__this);
    EnemyMovement__GetDistanceToStartPosition(__this->enemyMovement,(MethodInfo *)__this);
    EnemyMovement__GetAimDirection(__this->enemyMovement,true,(MethodInfo *)__this);
    return;
  }
  if (EVar1 == Attacking) {
    if (__this->isAttack != false) {
      pAVar2 = __this->enemy->attackEvent;
      pAVar3 = pAVar2->OnAttack;
      if (pAVar3 != (Action_o *)0x0) {
        (**(code **)((ulonglong)(uint)pAVar3[3]._opaque * 4))
                  (pAVar3[8]._opaque,pAVar2,pAVar3[5]._opaque);
      }
      EnemyAttack__Shoot(__this->enemyAttack,(MethodInfo *)__this);
      EnemyStateEvent__CallEnemyStateEvent(__this->enemyStateEvent,Chasing,(MethodInfo *)__this);
    }
    return;
  }
  if (EVar1 != Dead) {
    if (EVar1 == GoBackToStart) {
      AttackEvent__CallAttackEvent
                ((AttackEvent_o *)__this->enemy->moveByEnemyAIEvent,(MethodInfo *)0x0);
      EnemyMovement__GoBackToStartPosition(__this->enemyMovement,(MethodInfo *)__this);
      EnemyMovement__GetAimDirection(__this->enemyMovement,false,(MethodInfo *)__this);
      return;
    }
    if (EVar1 == None) {
      return;
    }
  }
  AttackEvent__CallAttackEvent((AttackEvent_o *)__this->enemy->moveByEnemyAIEvent,(MethodInfo *)0x0)
  ;
  EnemyMovement__MoveRoamingPosition(__this->enemyMovement,(MethodInfo *)__this);
  EnemyMovement__FindPlayer(__this->enemyMovement,(MethodInfo *)__this);
  EnemyMovement__GetAimDirection(__this->enemyMovement,false,(MethodInfo *)__this);
  return;
}

// ---- EnemyAI$$StopAttack ----
// C#: void EnemyAI__StopAttack (EnemyAI_o* __this, float stunTime, const MethodInfo* method);

void EnemyAI__StopAttack(EnemyAI_o *__this,float stunTime,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_00664af3 == '\0') {
    unnamed_function_1099(&EnemyAI__StopAttackCoroutine_d__14_TypeInfo);
    DAT_ram_00664af3 = '\x01';
  }
  param2 = unnamed_function_95402(EnemyAI__StopAttackCoroutine_d__14_TypeInfo);
  *(float *)(param2 + 0x14 /* enemyAttack */) = stunTime;
  *(EnemyAI_o **)(param2 + 0x10 /* enemyMovement */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- EnemyAI$$StopAttackCoroutine ----
// C#: System_Collections_IEnumerator_o* EnemyAI__StopAttackCoroutine (EnemyAI_o* __this, float stunTime, const MethodInfo* method);

System_Collections_IEnumerator_o *
EnemyAI__StopAttackCoroutine(EnemyAI_o *__this,float stunTime,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664af3 == '\0') {
    unnamed_function_1099(&EnemyAI__StopAttackCoroutine_d__14_TypeInfo);
    DAT_ram_00664af3 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(EnemyAI__StopAttackCoroutine_d__14_TypeInfo);
  pSVar1[5]._opaque = (int)stunTime;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- EnemyAI$$.ctor ----
// C#: void EnemyAI___ctor (EnemyAI_o* __this, const MethodInfo* method);

void EnemyAI___ctor(EnemyAI_o *__this,MethodInfo *method)

{
  __this->isAttack = true;
  unnamed_function_44622(__this,0);
  return;
}

