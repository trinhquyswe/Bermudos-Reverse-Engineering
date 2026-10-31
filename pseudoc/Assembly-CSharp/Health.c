// Assembly-CSharp :: Health
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Health : MonoBehaviour // TypeDefIndex: 5620
{
	// Fields
	public int currentHealth; // 0x10
	public int startingHealth; // 0x14
	private HealthEvent healthEvent; // 0x18
	private DieEvent dieEvent; // 0x1C

	// Methods

	// RVA: 0x3827 Offset: 0x3827 VA: 0x3827
	private void Awake() { }

	// RVA: 0x3828 Offset: 0x3828 VA: 0x3828
	private void OnEnable() { }

	// RVA: 0x3829 Offset: 0x3829 VA: 0x3829
	private void OnDisable() { }

	// RVA: 0x382A Offset: 0x382A VA: 0x382A
	private void StaticEventHandler_OnRestInBonfire() { }

	// RVA: 0x382B Offset: 0x382B VA: 0x382B
	private void DieEvent_OnDie(DieEvent dieEvent) { }

	// RVA: 0x382C Offset: 0x382C VA: 0x382C
	private void Start() { }

	// RVA: 0x382D Offset: 0x382D VA: 0x382D
	public void TakeDamage(int damageAmount) { }

	// RVA: 0x382E Offset: 0x382E VA: 0x382E
	public void IncreaseHealth(int healthAmount) { }

	// RVA: 0x382F Offset: 0x382F VA: 0x382F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Health$$Awake ----
// C#: void Health__Awake (Health_o* __this, const MethodInfo* method);

void Health__Awake(Health_o *__this,MethodInfo *method)

{
  HealthEvent_o *pHVar1;
  DieEvent_o *pDVar2;
  
  if (DAT_ram_00664b39 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e74);
    unnamed_function_1099(&DAT_ram_00567e9c);
    DAT_ram_00664b39 = '\x01';
  }
  pHVar1 = (HealthEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e9c);
  __this->healthEvent = pHVar1;
  pDVar2 = (DieEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e74);
  __this->dieEvent = pDVar2;
  return;
}

// ---- Health$$OnEnable ----
// C#: void Health__OnEnable (Health_o* __this, const MethodInfo* method);

void Health__OnEnable(Health_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  System_Action_o *value;
  int iVar2;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar3;
  DieEvent_o *pDVar4;
  
  if (DAT_ram_00664b3a == '\0') {
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_00569e30);
    unnamed_function_1099(&DAT_ram_00569e34);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664b3a = '\x01';
  }
  value = (System_Action_o *)unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(value,__this,DAT_ram_00569e34,0);
  StaticEventHandler__add_OnRestInBonfire(value,(MethodInfo *)0x0);
  pDVar4 = __this->dieEvent;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44679(pDVar4,0,0);
  if (iVar2 != 0) {
    pDVar4 = __this->dieEvent;
    param1_00 = unnamed_function_95402(System_Action_DieEvent__TypeInfo);
    unnamed_function_60074(param1_00,__this,DAT_ram_00569e30,0);
    if (DAT_ram_00664b37 == '\0') {
      unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
      DAT_ram_00664b37 = '\x01';
    }
    param1 = pDVar4->OnDie;
    do {
      iVar2 = 0;
      param1_01 = unnamed_function_85158(param1,param1_00,0);
      param2 = System_Action_DieEvent__TypeInfo;
      if ((param1_01 != 0) &&
         (iVar2 = unnamed_function_1112(param1_01,System_Action_DieEvent__TypeInfo), iVar2 == 0)) {
        unnamed_function_1116(param1_01,param2);
        do {
          halt_trap();
        } while( true );
      }
      pAVar3 = (Action_o *)unnamed_function_1144(&pDVar4->OnDie,iVar2,param1);
      bVar1 = param1 != pAVar3;
      param1 = pAVar3;
    } while (bVar1);
  }
  return;
}

// ---- Health$$OnDisable ----
// C#: void Health__OnDisable (Health_o* __this, const MethodInfo* method);

void Health__OnDisable(Health_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  System_Action_o *value;
  int iVar2;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar3;
  DieEvent_o *pDVar4;
  
  if (DAT_ram_00664b3b == '\0') {
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_00569e30);
    unnamed_function_1099(&DAT_ram_00569e34);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664b3b = '\x01';
  }
  value = (System_Action_o *)unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(value,__this,DAT_ram_00569e34,0);
  StaticEventHandler__remove_OnRestInBonfire(value,(MethodInfo *)0x0);
  pDVar4 = __this->dieEvent;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44679(pDVar4,0,0);
  if (iVar2 != 0) {
    pDVar4 = __this->dieEvent;
    param1_00 = unnamed_function_95402(System_Action_DieEvent__TypeInfo);
    unnamed_function_60074(param1_00,__this,DAT_ram_00569e30,0);
    if (DAT_ram_00664b38 == '\0') {
      unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
      DAT_ram_00664b38 = '\x01';
    }
    param1 = pDVar4->OnDie;
    do {
      iVar2 = 0;
      param1_01 = unnamed_function_85160(param1,param1_00,0);
      param2 = System_Action_DieEvent__TypeInfo;
      if ((param1_01 != 0) &&
         (iVar2 = unnamed_function_1112(param1_01,System_Action_DieEvent__TypeInfo), iVar2 == 0)) {
        unnamed_function_1116(param1_01,param2);
        do {
          halt_trap();
        } while( true );
      }
      pAVar3 = (Action_o *)unnamed_function_1144(&pDVar4->OnDie,iVar2,param1);
      bVar1 = param1 != pAVar3;
      param1 = pAVar3;
    } while (bVar1);
  }
  return;
}

// ---- Health$$StaticEventHandler_OnRestInBonfire ----
// C#: void Health__StaticEventHandler_OnRestInBonfire (Health_o* __this, const MethodInfo* method);

void Health__StaticEventHandler_OnRestInBonfire(Health_o *__this,MethodInfo *method)

{
  int healthAmount;
  
  healthAmount = __this->startingHealth;
  __this->currentHealth = healthAmount;
  HealthEvent__CallHealthChangedEvent
            (__this->healthEvent,(float)healthAmount / (float)healthAmount,healthAmount,0,
             (MethodInfo *)__this);
  return;
}

// ---- Health$$DieEvent_OnDie ----
// C#: void Health__DieEvent_OnDie (Health_o* __this, DieEvent_o* dieEvent, const MethodInfo* method);

void Health__DieEvent_OnDie(Health_o *__this,DieEvent_o *dieEvent,MethodInfo *method)

{
  int healthAmount;
  
  healthAmount = __this->startingHealth;
  __this->currentHealth = healthAmount;
  HealthEvent__CallHealthChangedEvent
            (__this->healthEvent,(float)healthAmount / (float)healthAmount,healthAmount,0,
             (MethodInfo *)__this);
  return;
}

// ---- Health$$Start ----
// C#: void Health__Start (Health_o* __this, const MethodInfo* method);

void Health__StaticEventHandler_OnRestInBonfire(Health_o *__this,MethodInfo *method)

{
  int healthAmount;
  
  healthAmount = __this->startingHealth;
  __this->currentHealth = healthAmount;
  HealthEvent__CallHealthChangedEvent
            (__this->healthEvent,(float)healthAmount / (float)healthAmount,healthAmount,0,
             (MethodInfo *)__this);
  return;
}

// ---- Health$$TakeDamage ----
// C#: void Health__TakeDamage (Health_o* __this, int32_t damageAmount, const MethodInfo* method);

void Health__TakeDamage(Health_o *__this,int damageAmount,MethodInfo *method)

{
  undefined4 param1;
  int iVar1;
  GameResources_o *pGVar2;
  int param1_00;
  SoundEffectManager_o *__this_00;
  SoundEffectSO_o **ppSVar3;
  
  if (DAT_ram_00664b3c == '\0') {
    unnamed_function_1099(&DAT_ram_00567ef0);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_00664b3c = '\x01';
  }
  __this->currentHealth = __this->currentHealth - damageAmount;
  param1 = unnamed_function_65370(__this,DAT_ram_00567ef0);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,0,0);
  param1_00 = *(int *)(DAT_ram_00565d6c + 0x10);
  if (iVar1 == 0) {
    if ((*(ushort *)(param1_00 + 0xbd) & 1) == 0) {
      param1_00 = unnamed_function_95087(param1_00);
    }
    iVar1 = *(int *)(*(int *)(param1_00 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    __this_00 = (SoundEffectManager_o *)**(undefined4 **)(iVar1 + 0x5c);
    pGVar2 = GameResources__get_Instance((MethodInfo *)__this);
    ppSVar3 = &pGVar2->getHurtEnemy;
  }
  else {
    if ((*(ushort *)(param1_00 + 0xbd) & 1) == 0) {
      param1_00 = unnamed_function_95087(param1_00);
    }
    iVar1 = *(int *)(*(int *)(param1_00 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    __this_00 = (SoundEffectManager_o *)**(undefined4 **)(iVar1 + 0x5c);
    pGVar2 = GameResources__get_Instance((MethodInfo *)__this);
    ppSVar3 = &pGVar2->getHurtPlayer;
  }
  SoundEffectManager__PlaySoundEffect(__this_00,*ppSVar3,(MethodInfo *)0x0);
  HealthEvent__CallHealthChangedEvent
            (__this->healthEvent,(float)__this->currentHealth / (float)__this->startingHealth,
             __this->currentHealth,damageAmount,(MethodInfo *)__this);
  return;
}

// ---- Health$$IncreaseHealth ----
// C#: void Health__IncreaseHealth (Health_o* __this, int32_t healthAmount, const MethodInfo* method);

void Health__IncreaseHealth(Health_o *__this,int healthAmount,MethodInfo *method)

{
  int iVar1;
  int healthAmount_00;
  int iVar2;
  
  iVar1 = __this->startingHealth;
  iVar2 = __this->currentHealth + healthAmount;
  healthAmount_00 = iVar1;
  if (iVar2 <= iVar1) {
    healthAmount_00 = iVar2;
  }
  __this->currentHealth = healthAmount_00;
  HealthEvent__CallHealthChangedEvent
            (__this->healthEvent,(float)healthAmount_00 / (float)iVar1,healthAmount_00,0,
             (MethodInfo *)__this);
  return;
}

// ---- Health$$.ctor ----
// C#: void Health___ctor (Health_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

