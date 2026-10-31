// Assembly-CSharp :: Boss
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Boss : MonoBehaviour // TypeDefIndex: 5558
{
	// Fields
	[HideInInspector]
	public HealthEvent healthEvent; // 0x10
	[HideInInspector]
	public DestroyedEvent destroyedEvent; // 0x14
	[HideInInspector]
	public PoiseEvent poiseEvent; // 0x18
	[HideInInspector]
	public Rigidbody2D rb; // 0x1C
	[HideInInspector]
	public BossEffect bossEffect; // 0x20
	[HideInInspector]
	public Animator animator; // 0x24
	[HideInInspector]
	public bool isPhaseTwo; // 0x28

	// Methods

	// RVA: 0x36FA Offset: 0x36FA VA: 0x36FA
	private void Awake() { }

	// RVA: 0x36FB Offset: 0x36FB VA: 0x36FB
	private void OnEnable() { }

	// RVA: 0x36FC Offset: 0x36FC VA: 0x36FC
	private void OnDisable() { }

	// RVA: 0x36FD Offset: 0x36FD VA: 0x36FD
	private void Start() { }

	[IteratorStateMachine(typeof(Boss.<BossAttack>d__11))]
	// RVA: 0x36FE Offset: 0x36FE VA: 0x36FE
	public IEnumerator BossAttack() { }

	// RVA: 0x36FF Offset: 0x36FF VA: 0x36FF
	private void HealthEvent_OnHealthLost(HealthEvent healthEvent, HealthEventArgs healthEventArgs) { }

	// RVA: 0x3700 Offset: 0x3700 VA: 0x3700
	private void EnemyDestroyed() { }

	// RVA: 0x3701 Offset: 0x3701 VA: 0x3701
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Boss$$Awake ----
// C#: void Boss__Awake (Boss_o* __this, const MethodInfo* method);

void Boss__Awake(Boss_o *__this,MethodInfo *method)

{
  HealthEvent_o *pHVar1;
  DestroyedEvent_o *pDVar2;
  PoiseEvent_o *pPVar3;
  BossEffect_o *pBVar4;
  Animator_o *pAVar5;
  Rigidbody2D_o *pRVar6;
  
  if (DAT_ram_00664aaa == '\0') {
    unnamed_function_1099(&DAT_ram_00567e18);
    unnamed_function_1099(&DAT_ram_00567e34);
    unnamed_function_1099(&DAT_ram_00567e70);
    unnamed_function_1099(&DAT_ram_00567e9c);
    unnamed_function_1099(&DAT_ram_00567efc);
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_00664aaa = '\x01';
  }
  pHVar1 = (HealthEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e9c);
  __this->healthEvent = pHVar1;
  pDVar2 = (DestroyedEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e70);
  __this->destroyedEvent = pDVar2;
  pPVar3 = (PoiseEvent_o *)unnamed_function_65370(__this,DAT_ram_00567efc);
  __this->poiseEvent = pPVar3;
  pBVar4 = (BossEffect_o *)unnamed_function_65370(__this,DAT_ram_00567e34);
  __this->bossEffect = pBVar4;
  pAVar5 = (Animator_o *)unnamed_function_65370(__this,DAT_ram_00567e18);
  __this->animator = pAVar5;
  pRVar6 = (Rigidbody2D_o *)unnamed_function_65370(__this,DAT_ram_00567f18);
  __this->rb = pRVar6;
  return;
}

// ---- Boss$$OnEnable ----
// C#: void Boss__OnEnable (Boss_o* __this, const MethodInfo* method);

void Boss__OnEnable(Boss_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  HealthEvent_o *pHVar3;
  
  if (DAT_ram_00664aab == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056788c);
    DAT_ram_00664aab = '\x01';
  }
  pHVar3 = __this->healthEvent;
  param1_00 = unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056788c,0);
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

// ---- Boss$$OnDisable ----
// C#: void Boss__OnDisable (Boss_o* __this, const MethodInfo* method);

void Boss__OnDisable(Boss_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  HealthEvent_o *pHVar3;
  
  if (DAT_ram_00664aac == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056788c);
    DAT_ram_00664aac = '\x01';
  }
  pHVar3 = __this->healthEvent;
  param1_00 = unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056788c,0);
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

// ---- Boss$$Start ----
// C#: void Boss__Start (Boss_o* __this, const MethodInfo* method);

void Boss__Start(Boss_o *__this,MethodInfo *method)

{
  GameResources_o *pGVar1;
  
  if (DAT_ram_00664aad == '\0') {
    unnamed_function_1099(&StringLiteral_9330 /* "_FadeAmount" */);
    DAT_ram_00664aad = '\x01';
  }
  StaticEventHandler__CallBossChangedEvent(__this,(MethodInfo *)0x0);
  pGVar1 = GameResources__get_Instance((MethodInfo *)__this);
  unnamed_function_52907(pGVar1->boss,StringLiteral_9330 /* "_FadeAmount" */,0.0,0);
  return;
}

// ---- Boss$$BossAttack ----
// C#: System_Collections_IEnumerator_o* Boss__BossAttack (Boss_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o * Boss__BossAttack(Boss_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664aae == '\0') {
    unnamed_function_1099(&Boss__BossAttack_d__11_TypeInfo);
    DAT_ram_00664aae = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(Boss__BossAttack_d__11_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- Boss$$HealthEvent_OnHealthLost ----
// C#: void Boss__HealthEvent_OnHealthLost (Boss_o* __this, HealthEvent_o* healthEvent, HealthEventArgs_o* healthEventArgs, const MethodInfo* method);

void Boss__HealthEvent_OnHealthLost
               (Boss_o *__this,HealthEvent_o *healthEvent,HealthEventArgs_o *healthEventArgs,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param2_00;
  Action_o *param1;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  
  if (DAT_ram_00664aaf == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056788c);
    DAT_ram_00664aaf = '\x01';
  }
  if (healthEventArgs->healthAmount < 1) {
    Boss__EnemyDestroyed(__this,(MethodInfo *)healthEventArgs);
    param1_00 = unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_60334(param1_00,__this,DAT_ram_0056788c,0);
    if (DAT_ram_00664b40 == '\0') {
      unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
      DAT_ram_00664b40 = '\x01';
    }
    param1 = healthEvent->OnHealthChanged;
    do {
      param2_00 = 0;
      param1_01 = unnamed_function_85160(param1,param1_00,0);
      param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
      if ((param1_01 != 0) &&
         (param2_00 = unnamed_function_1112
                                (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo),
         param2_00 == 0)) {
        unnamed_function_1116(param1_01,param2);
        do {
          halt_trap();
        } while( true );
      }
      pAVar2 = (Action_o *)unnamed_function_1144(&healthEvent->OnHealthChanged,param2_00,param1);
      bVar1 = param1 != pAVar2;
      param1 = pAVar2;
    } while (bVar1);
  }
  return;
}

// ---- Boss$$EnemyDestroyed ----
// C#: void Boss__EnemyDestroyed (Boss_o* __this, const MethodInfo* method);

void Boss__EnemyDestroyed(Boss_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_ram_00664ab0 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e70);
    unnamed_function_1099(&DestroyedEventArgs_TypeInfo);
    DAT_ram_00664ab0 = '\x01';
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
  *(undefined1 *)(iVar2 + 9) = 1;
  iVar3 = *(int *)(iVar1 + 0x10);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),iVar1,iVar2,*(undefined4 *)(iVar3 + 0x14));
  }
  return;
}

// ---- Boss$$.ctor ----
// C#: void Boss___ctor (Boss_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

