// Assembly-CSharp :: Enemy
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Enemy : MonoBehaviour // TypeDefIndex: 5586
{
	// Fields
	[HideInInspector]
	public AnimateEvent animateEvent; // 0x10
	[HideInInspector]
	public HealthEvent healthEvent; // 0x14
	[HideInInspector]
	public EnemyStateEvent enemyStateEvent; // 0x18
	[HideInInspector]
	public Animator animator; // 0x1C
	[HideInInspector]
	public Health health; // 0x20
	[HideInInspector]
	public EnemyEffect enemyEffect; // 0x24
	[HideInInspector]
	public PoiseEvent poiseEvent; // 0x28
	[HideInInspector]
	private SpriteRenderer spriteRenderer; // 0x2C
	[HideInInspector]
	public IdleEvent idleEvent; // 0x30
	[HideInInspector]
	public MoveByEnemyAIEvent moveByEnemyAIEvent; // 0x34
	[HideInInspector]
	public AttackEvent attackEvent; // 0x38
	[HideInInspector]
	public EnemyAI enemyAI; // 0x3C
	public AnimationEnemyType animationEnemyType; // 0x40
	[HideInInspector]
	public string mapKey; // 0x44
	[HideInInspector]
	public int enemyID; // 0x48

	// Methods

	// RVA: 0x379D Offset: 0x379D VA: 0x379D
	private void Awake() { }

	// RVA: 0x379E Offset: 0x379E VA: 0x379E
	private void OnEnable() { }

	// RVA: 0x379F Offset: 0x379F VA: 0x379F
	private void OnDisable() { }

	// RVA: 0x37A0 Offset: 0x37A0 VA: 0x37A0
	public void InitializeEnemy(string mapName, int enemyID) { }

	// RVA: 0x37A1 Offset: 0x37A1 VA: 0x37A1
	private void HealthEvent_OnHealthLost(HealthEvent healthEvent, HealthEventArgs healthEventArgs) { }

	// RVA: 0x37A2 Offset: 0x37A2 VA: 0x37A2
	private void EnemyDestroyed() { }

	// RVA: 0x37A3 Offset: 0x37A3 VA: 0x37A3
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Enemy$$Awake ----
// C#: void Enemy__Awake (Enemy_o* __this, const MethodInfo* method);

void Enemy__Awake(Enemy_o *__this,MethodInfo *method)

{
  AnimateEvent_o *pAVar1;
  HealthEvent_o *pHVar2;
  EnemyStateEvent_o *pEVar3;
  PoiseEvent_o *pPVar4;
  Animator_o *pAVar5;
  Health_o *pHVar6;
  EnemyEffect_o *pEVar7;
  SpriteRenderer_o *pSVar8;
  IdleEvent_o *pIVar9;
  MoveByEnemyAIEvent_o *pMVar10;
  EnemyAI_o *pEVar11;
  AttackEvent_o *pAVar12;
  
  if (DAT_ram_00664aec == '\0') {
    unnamed_function_1099(&DAT_ram_00567e14);
    unnamed_function_1099(&DAT_ram_00567e18);
    unnamed_function_1099(&DAT_ram_00567e20);
    unnamed_function_1099(&DAT_ram_00567e7c);
    unnamed_function_1099(&DAT_ram_00567e84);
    unnamed_function_1099(&DAT_ram_00567e8c);
    unnamed_function_1099(&DAT_ram_00567e9c);
    unnamed_function_1099(&DAT_ram_00567e98);
    unnamed_function_1099(&DAT_ram_00567ea4);
    unnamed_function_1099(&DAT_ram_00567ed0);
    unnamed_function_1099(&DAT_ram_00567efc);
    unnamed_function_1099(&DAT_ram_00567f24);
    DAT_ram_00664aec = '\x01';
  }
  pAVar1 = (AnimateEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e14);
  __this->animateEvent = pAVar1;
  pHVar2 = (HealthEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e9c);
  __this->healthEvent = pHVar2;
  pEVar3 = (EnemyStateEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e8c);
  __this->enemyStateEvent = pEVar3;
  pPVar4 = (PoiseEvent_o *)unnamed_function_65370(__this,DAT_ram_00567efc);
  __this->poiseEvent = pPVar4;
  pAVar5 = (Animator_o *)unnamed_function_65370(__this,DAT_ram_00567e18);
  __this->animator = pAVar5;
  pHVar6 = (Health_o *)unnamed_function_65370(__this,DAT_ram_00567e98);
  __this->health = pHVar6;
  pEVar7 = (EnemyEffect_o *)unnamed_function_65370(__this,DAT_ram_00567e84);
  __this->enemyEffect = pEVar7;
  pSVar8 = (SpriteRenderer_o *)unnamed_function_65370(__this,DAT_ram_00567f24);
  __this->spriteRenderer = pSVar8;
  pIVar9 = (IdleEvent_o *)unnamed_function_65370(__this,DAT_ram_00567ea4);
  __this->idleEvent = pIVar9;
  pMVar10 = (MoveByEnemyAIEvent_o *)unnamed_function_65370(__this,DAT_ram_00567ed0);
  __this->moveByEnemyAIEvent = pMVar10;
  pEVar11 = (EnemyAI_o *)unnamed_function_65370(__this,DAT_ram_00567e7c);
  __this->enemyAI = pEVar11;
  pAVar12 = (AttackEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e20);
  __this->attackEvent = pAVar12;
  return;
}

// ---- Enemy$$OnEnable ----
// C#: void Enemy__OnEnable (Enemy_o* __this, const MethodInfo* method);

void Enemy__OnEnable(Enemy_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  HealthEvent_o *pHVar3;
  
  if (DAT_ram_00664aed == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568eac);
    DAT_ram_00664aed = '\x01';
  }
  pHVar3 = __this->healthEvent;
  param1_00 = unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568eac,0);
  if (DAT_ram_00664b3f == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    DAT_ram_00664b3f = '\x01';
  }
  param1 = pHVar3->OnHealthChanged;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pHVar3->OnHealthChanged,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- Enemy$$OnDisable ----
// C#: void Enemy__OnDisable (Enemy_o* __this, const MethodInfo* method);

void Enemy__OnDisable(Enemy_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  HealthEvent_o *pHVar3;
  
  if (DAT_ram_00664aee == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568eac);
    DAT_ram_00664aee = '\x01';
  }
  pHVar3 = __this->healthEvent;
  param1_00 = unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568eac,0);
  if (DAT_ram_00664b40 == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    DAT_ram_00664b40 = '\x01';
  }
  param1 = pHVar3->OnHealthChanged;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pHVar3->OnHealthChanged,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- Enemy$$InitializeEnemy ----
// C#: void Enemy__InitializeEnemy (Enemy_o* __this, System_String_o* mapName, int32_t enemyID, const MethodInfo* method);

void Enemy__InitializeEnemy(Enemy_o *__this,System_String_o *mapName,int enemyID,MethodInfo *method)

{
  __this->enemyID = enemyID;
  __this->mapKey = (string_o *)mapName;
  return;
}

// ---- Enemy$$HealthEvent_OnHealthLost ----
// C#: void Enemy__HealthEvent_OnHealthLost (Enemy_o* __this, HealthEvent_o* healthEvent, HealthEventArgs_o* healthEventArgs, const MethodInfo* method);

void Enemy__HealthEvent_OnHealthLost
               (Enemy_o *__this,HealthEvent_o *healthEvent,HealthEventArgs_o *healthEventArgs,
               MethodInfo *method)

{
  if (healthEventArgs->healthAmount < 1) {
    Enemy__EnemyDestroyed(__this,(MethodInfo *)healthEventArgs);
  }
  return;
}

// ---- Enemy$$EnemyDestroyed ----
// C#: void Enemy__EnemyDestroyed (Enemy_o* __this, const MethodInfo* method);

void Enemy__EnemyDestroyed(Enemy_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_ram_00664aef == '\0') {
    unnamed_function_1099(&DAT_ram_00567e70);
    unnamed_function_1099(&DestroyedEventArgs_TypeInfo);
    DAT_ram_00664aef = '\x01';
  }
  iVar1 = unnamed_function_65370(__this,DAT_ram_00567e70);
  iVar2 = unnamed_function_95402(DestroyedEventArgs_TypeInfo);
  if (DAT_ram_00664b36 == '\0') {
    unnamed_function_1099(&System_EventArgs_TypeInfo);
    DAT_ram_00664b36 = '\x01';
  }
  if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_EventArgs_TypeInfo);
  }
  *(undefined1 *)(iVar2 + 8) = 0;
  iVar3 = *(int *)(iVar1 + 0x10);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),iVar1,iVar2,*(undefined4 *)(iVar3 + 0x14));
  }
  return;
}

// ---- Enemy$$.ctor ----
// C#: void Enemy___ctor (Enemy_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

