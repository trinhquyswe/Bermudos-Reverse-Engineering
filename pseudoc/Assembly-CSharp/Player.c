// Assembly-CSharp :: Player
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Player : MonoBehaviour // TypeDefIndex: 5688
{
	// Fields
	[HideInInspector]
	public MovementByVelocityEvent movementByVelocityEvent; // 0x10
	[HideInInspector]
	public MovementToPositionEvent movementToPositionEvent; // 0x14
	public MovementDetailsSO movementDetails; // 0x18
	[HideInInspector]
	public IdleEvent idleEvent; // 0x1C
	[HideInInspector]
	public AnimateEvent animateEvent; // 0x20
	[HideInInspector]
	public AttackEvent attackEvent; // 0x24
	[HideInInspector]
	public DealDamageEvent dealDamageEvent; // 0x28
	[HideInInspector]
	public HealthEvent healthEvent; // 0x2C
	[HideInInspector]
	public DestroyedEvent destroyedEvent; // 0x30
	[HideInInspector]
	public BashEvent bashEvent; // 0x34
	[HideInInspector]
	public DashEvent dashEvent; // 0x38
	[HideInInspector]
	public StaminaEvent staminaEvent; // 0x3C
	[HideInInspector]
	public Stamina stamina; // 0x40
	[HideInInspector]
	public Animator animator; // 0x44
	[HideInInspector]
	public PlayerEffect playerEffect; // 0x48
	[HideInInspector]
	public Rage rage; // 0x4C
	[HideInInspector]
	public InventoryManager inventoryManager; // 0x50
	private DieEvent dieEvent; // 0x54
	[HideInInspector]
	public Vector2[] spawnPosition; // 0x58
	public SoundEffectSO runSoundEffect; // 0x5C
	public SoundEffectSO dashSoundEffect; // 0x60
	public SoundEffectSO attackSoundEffect; // 0x64
	public SoundEffectSO dieSoundEffect; // 0x68
	private bool isDead; // 0x6C

	// Methods

	// RVA: 0x3995 Offset: 0x3995 VA: 0x3995
	private void Awake() { }

	// RVA: 0x3996 Offset: 0x3996 VA: 0x3996
	private void OnEnable() { }

	// RVA: 0x3997 Offset: 0x3997 VA: 0x3997
	private void OnDisable() { }

	// RVA: 0x3998 Offset: 0x3998 VA: 0x3998
	public Vector2 GetPlayerPosition() { }

	// RVA: 0x3999 Offset: 0x3999 VA: 0x3999
	private void DieEvent_OnDie(DieEvent dieEvent) { }

	// RVA: 0x399A Offset: 0x399A VA: 0x399A
	private void HealthEvent_OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs) { }

	// RVA: 0x399B Offset: 0x399B VA: 0x399B
	private void GameStateChanged_OnPlayer(GameState gameState) { }

	// RVA: 0x399C Offset: 0x399C VA: 0x399C
	private void OnCollisionStay2D(Collision2D collision) { }

	// RVA: 0x399D Offset: 0x399D VA: 0x399D
	private void OnCollisionExit2D(Collision2D collision) { }

	// RVA: 0x399E Offset: 0x399E VA: 0x399E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Player$$Awake ----
// C#: void Player__Awake (Player_o* __this, const MethodInfo* method);

void Player__Awake(Player_o *__this,MethodInfo *method)

{
  MovementByVelocityEvent_o *pMVar1;
  MovementToPositionEvent_o *pMVar2;
  IdleEvent_o *pIVar3;
  AnimateEvent_o *pAVar4;
  AttackEvent_o *pAVar5;
  DealDamageEvent_o *pDVar6;
  HealthEvent_o *pHVar7;
  DestroyedEvent_o *pDVar8;
  BashEvent_o *pBVar9;
  DashEvent_o *pDVar10;
  StaminaEvent_o *pSVar11;
  Stamina_o *pSVar12;
  Animator_o *pAVar13;
  PlayerEffect_o *pPVar14;
  Rage_o *pRVar15;
  InventoryManager_o *pIVar16;
  DieEvent_o *pDVar17;
  
  if (DAT_ram_0066493d == '\0') {
    unnamed_function_1099(&DAT_ram_00567e14);
    unnamed_function_1099(&DAT_ram_00567e18);
    unnamed_function_1099(&DAT_ram_00567e20);
    unnamed_function_1099(&DAT_ram_00567e28);
    unnamed_function_1099(&DAT_ram_00567e60);
    unnamed_function_1099(&DAT_ram_00567e64);
    unnamed_function_1099(&DAT_ram_00567e70);
    unnamed_function_1099(&DAT_ram_00567e74);
    unnamed_function_1099(&DAT_ram_00567e9c);
    unnamed_function_1099(&DAT_ram_00567ea4);
    unnamed_function_1099(&DAT_ram_00567eb4);
    unnamed_function_1099(&DAT_ram_00567ed4);
    unnamed_function_1099(&DAT_ram_00567ed8);
    unnamed_function_1099(&DAT_ram_00567ef4);
    unnamed_function_1099(&DAT_ram_00567f00);
    unnamed_function_1099(&DAT_ram_00567f2c);
    unnamed_function_1099(&DAT_ram_00567f28);
    DAT_ram_0066493d = '\x01';
  }
  pMVar1 = (MovementByVelocityEvent_o *)unnamed_function_65370(__this,DAT_ram_00567ed4);
  __this->movementByVelocityEvent = pMVar1;
  pMVar2 = (MovementToPositionEvent_o *)unnamed_function_65370(__this,DAT_ram_00567ed8);
  __this->movementToPositionEvent = pMVar2;
  pIVar3 = (IdleEvent_o *)unnamed_function_65370(__this,DAT_ram_00567ea4);
  __this->idleEvent = pIVar3;
  pAVar4 = (AnimateEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e14);
  __this->animateEvent = pAVar4;
  pAVar5 = (AttackEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e20);
  __this->attackEvent = pAVar5;
  pDVar6 = (DealDamageEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e64);
  __this->dealDamageEvent = pDVar6;
  pHVar7 = (HealthEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e9c);
  __this->healthEvent = pHVar7;
  pDVar8 = (DestroyedEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e70);
  __this->destroyedEvent = pDVar8;
  pBVar9 = (BashEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e28);
  __this->bashEvent = pBVar9;
  pDVar10 = (DashEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e60);
  __this->dashEvent = pDVar10;
  pSVar11 = (StaminaEvent_o *)unnamed_function_65370(__this,DAT_ram_00567f2c);
  __this->staminaEvent = pSVar11;
  pSVar12 = (Stamina_o *)unnamed_function_65370(__this,DAT_ram_00567f28);
  __this->stamina = pSVar12;
  pAVar13 = (Animator_o *)unnamed_function_65370(__this,DAT_ram_00567e18);
  __this->animator = pAVar13;
  pPVar14 = (PlayerEffect_o *)unnamed_function_65370(__this,DAT_ram_00567ef4);
  __this->playerEffect = pPVar14;
  pRVar15 = (Rage_o *)unnamed_function_65370(__this,DAT_ram_00567f00);
  __this->rage = pRVar15;
  pIVar16 = (InventoryManager_o *)unnamed_function_65370(__this,DAT_ram_00567eb4);
  __this->inventoryManager = pIVar16;
  pDVar17 = (DieEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e74);
  __this->dieEvent = pDVar17;
  return;
}

// ---- Player$$OnEnable ----
// C#: void Player__OnEnable (Player_o* __this, const MethodInfo* method);

void Player__OnEnable(Player_o *__this,MethodInfo *method)

{
  OnPlayerChangedEventArgs_o *__this_00;
  System_Action_HealthEvent__HealthEventArgs__o *value;
  undefined4 uVar1;
  int iVar2;
  System_Action_DieEvent__o *value_00;
  int iVar3;
  HealthEvent_o *__this_01;
  int iVar4;
  undefined4 param1;
  DieEvent_o *__this_02;
  
  if (DAT_ram_0066493e == '\0') {
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b8dc);
    unnamed_function_1099(&DAT_ram_0056b8e0);
    unnamed_function_1099(&DAT_ram_0056b8e4);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_0066493e = '\x01';
  }
  if (DAT_ram_006649b1 == '\0') {
    unnamed_function_1099(&OnPlayerChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b1 = '\x01';
  }
  iVar3 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0xc);
  if (iVar3 != 0) {
    __this_00 = (OnPlayerChangedEventArgs_o *)
                unnamed_function_95402(OnPlayerChangedEventArgs_TypeInfo);
    OnPlayerChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
    __this_00->player = __this;
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),__this_00,*(undefined4 *)(iVar3 + 0x14));
  }
  __this_01 = __this->healthEvent;
  value = (System_Action_HealthEvent__HealthEventArgs__o *)
          unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
  unnamed_function_60334(value,__this,DAT_ram_0056b8e4,0);
  HealthEvent__add_OnHealthChanged(__this_01,value,(MethodInfo *)0x0);
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar4 = **(int **)(iVar3 + 0x5c);
  param1 = *(undefined4 *)(iVar4 + 0x20);
  uVar1 = unnamed_function_95402(System_Action_GameState__TypeInfo);
  unnamed_function_60038(uVar1,__this,DAT_ram_0056b8e0,0);
  iVar3 = unnamed_function_85158(param1,uVar1,0);
  uVar1 = System_Action_GameState__TypeInfo;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x20) = 0;
  }
  else {
    iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
    if (iVar2 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar4 + 0x20) = iVar2;
    uVar1 = System_Action_GameState__TypeInfo;
    iVar4 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
  }
  __this_02 = __this->dieEvent;
  value_00 = (System_Action_DieEvent__o *)unnamed_function_95402(System_Action_DieEvent__TypeInfo);
  unnamed_function_60074(value_00,__this,DAT_ram_0056b8dc,0);
  DieEvent__add_OnDie(__this_02,value_00,(MethodInfo *)0x0);
  return;
}

// ---- Player$$OnDisable ----
// C#: void Player__OnDisable (Player_o* __this, const MethodInfo* method);

void Player__OnDisable(Player_o *__this,MethodInfo *method)

{
  System_Action_HealthEvent__HealthEventArgs__o *value;
  System_Action_DieEvent__o *value_00;
  HealthEvent_o *__this_00;
  DieEvent_o *__this_01;
  
  if (DAT_ram_0066493f == '\0') {
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b8dc);
    unnamed_function_1099(&DAT_ram_0056b8e4);
    DAT_ram_0066493f = '\x01';
  }
  __this_00 = __this->healthEvent;
  value = (System_Action_HealthEvent__HealthEventArgs__o *)
          unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
  unnamed_function_60334(value,__this,DAT_ram_0056b8e4,0);
  HealthEvent__remove_OnHealthChanged(__this_00,value,(MethodInfo *)0x0);
  __this_01 = __this->dieEvent;
  value_00 = (System_Action_DieEvent__o *)unnamed_function_95402(System_Action_DieEvent__TypeInfo);
  unnamed_function_60074(value_00,__this,DAT_ram_0056b8dc,0);
  DieEvent__remove_OnDie(__this_01,value_00,(MethodInfo *)0x0);
  return;
}

// ---- Player$$GetPlayerPosition ----
// C#: UnityEngine_Vector2_o Player__GetPlayerPosition (Player_o* __this, const MethodInfo* method);

void Player__GetPlayerPosition(Vector2_o *__ret,Player_o *__this,MethodInfo *method)

{
  undefined4 param2;
  Vector2_o local_10 [2];
  
  param2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(local_10,param2,0);
  *__ret = local_10[0];
  return;
}

// ---- Player$$DieEvent_OnDie ----
// C#: void Player__DieEvent_OnDie (Player_o* __this, DieEvent_o* dieEvent, const MethodInfo* method);

void Player__DieEvent_OnDie(Player_o *__this,DieEvent_o *dieEvent,MethodInfo *method)

{
  undefined4 uVar1;
  GameResources_o *pGVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 param2;
  MethodInfo MStack_70;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18 [2];
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664940 == '\0') {
    unnamed_function_1099(&DAT_ram_0056c1c8);
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d338);
    unnamed_function_1099(&DAT_ram_0056d374);
    unnamed_function_1099(&DAT_ram_0056f6f0);
    unnamed_function_1099(&Player___c_TypeInfo);
    unnamed_function_1099(&StringLiteral_9330 /* "_FadeAmount" */);
    unnamed_function_1099(&StringLiteral_7311 /* "The Forest" */);
    unnamed_function_1099(&StringLiteral_2704 /* "Coast" */);
    unnamed_function_1099(&StringLiteral_2641 /* "Checkpoint" */);
    DAT_ram_00664940 = '\x01';
  }
  local_18[0] = 0;
  iVar3 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  SoundEffectManager__PlaySoundEffect
            ((SoundEffectManager_o *)**(undefined4 **)(iVar3 + 0x5c),__this->dieSoundEffect,
             &MStack_70);
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  uVar1 = unnamed_function_60744(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x18),0);
  iVar3 = unnamed_function_60732(uVar1,StringLiteral_2641 /* "Checkpoint" */,0);
  if (iVar3 != 0) {
    iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    uVar1 = unnamed_function_60744(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x18),0);
    uVar1 = unnamed_function_60819(uVar1,StringLiteral_2641 /* "Checkpoint" */,0,DAT_ram_0056c1c8);
    iVar3 = unnamed_function_81494(uVar1,StringLiteral_2704 /* "Coast" */,0);
    if (iVar3 == 0) {
      iVar3 = unnamed_function_81494(uVar1,StringLiteral_7311 /* "The Forest" */,0);
      if (iVar3 == 0) goto code_r0x81a3cbf5;
      uVar1 = unnamed_function_44643(__this,0);
      local_48 = *(undefined8 *)((int)(__this->spawnPosition).x + 0x18);
      local_30 = 0;
      local_40 = 0;
      local_38 = local_48;
      unnamed_function_44962(uVar1,&local_48,0);
      puVar4 = &StringLiteral_7311 /* "The Forest" */;
      iVar3 = *(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74);
    }
    else {
      uVar1 = unnamed_function_44643(__this,0);
      MStack_70._24_8_ = *(undefined8 *)((int)(__this->spawnPosition).x + 0x10);
      local_20 = 0;
      local_50 = 0;
      local_28 = MStack_70._24_8_;
      unnamed_function_44962(uVar1,&MStack_70.field_0x18,0);
      puVar4 = &StringLiteral_2704 /* "Coast" */;
      iVar3 = *(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74);
    }
    if (iVar3 == 0) {
      unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    unnamed_function_45255(1,0);
    local_18[0] = unnamed_function_45255(1,0);
    uVar1 = unnamed_function_45228(local_18,0);
    unnamed_function_45270(uVar1,0);
    unnamed_function_45264(*puVar4,1,0);
  }
code_r0x81a3cbf5:
  pGVar2 = GameResources__get_Instance((MethodInfo *)0x0);
  unnamed_function_52907(pGVar2->beginUI,StringLiteral_9330 /* "_FadeAmount" */,0.0,0);
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  piVar5 = *(int **)(**(int **)(iVar3 + 0x5c) + 0x24);
  local_8 = 0x3f80000000000000;
  local_10 = 0;
  iVar3 = *piVar5;
  MStack_70._16_8_ = 0x3f80000000000000;
  MStack_70._8_8_ = 0;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x178) * 4))
            (piVar5,&MStack_70.field_0x8,*(undefined4 *)(iVar3 + 0x17c));
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  uVar1 = unnamed_function_44644(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x24),0);
  unnamed_function_44686(uVar1,1,0);
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  uVar1 = unnamed_function_63253(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x24),0.0,2.0,0);
  uVar1 = unnamed_function_70031(uVar1,4,DAT_ram_0056d374);
  if (*(int *)(Player___c_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(Player___c_TypeInfo);
  }
  iVar3 = *(int *)(*(int *)(Player___c_TypeInfo + 0x5c) + 4);
  if (iVar3 == 0) {
    if (*(int *)(Player___c_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(Player___c_TypeInfo);
    }
    param2 = **(undefined4 **)(Player___c_TypeInfo + 0x5c);
    iVar3 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_13649(iVar3,param2,DAT_ram_0056f6f0,0);
    *(int *)(*(int *)(Player___c_TypeInfo + 0x5c) + 4) = iVar3;
  }
  unnamed_function_70015(uVar1,iVar3,DAT_ram_0056d338);
  return;
}

// ---- Player$$HealthEvent_OnHealthChanged ----
// C#: void Player__HealthEvent_OnHealthChanged (Player_o* __this, HealthEvent_o* healthEvent, HealthEventArgs_o* healthEventArgs, const MethodInfo* method);

void Player__HealthEvent_OnHealthChanged
               (Player_o *__this,HealthEvent_o *healthEvent,HealthEventArgs_o *healthEventArgs,
               MethodInfo *method)

{
  DestroyedEventArgs_o *__this_00;
  bool bVar1;
  DestroyedEvent_o *__this_01;
  
  if (DAT_ram_00664941 == '\0') {
    unnamed_function_1099(&DestroyedEventArgs_TypeInfo);
    DAT_ram_00664941 = '\x01';
  }
  if (healthEventArgs->healthAmount < 1) {
    if (__this->isDead == false) {
      return;
    }
    __this_01 = __this->destroyedEvent;
    __this_00 = (DestroyedEventArgs_o *)unnamed_function_95402(DestroyedEventArgs_TypeInfo);
    DestroyedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
    __this_00->playerDied = true;
    DestroyedEvent__CallDestroyedEvent(__this_01,__this_00,(MethodInfo *)0x0);
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  __this->isDead = bVar1;
  return;
}

// ---- Player$$GameStateChanged_OnPlayer ----
// C#: void Player__GameStateChanged_OnPlayer (Player_o* __this, int32_t gameState, const MethodInfo* method);

void Player__GameStateChanged_OnPlayer(Player_o *__this,GameState gameState,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 param1;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664942 == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b8e0);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664942 = '\x01';
  }
  if (gameState == Intro) {
    uVar1 = unnamed_function_44644(__this,0);
    uVar1 = unnamed_function_44683(uVar1,0);
    local_20 = *(undefined8 *)((int)(__this->spawnPosition).x + 0x10);
    local_8 = 0;
    local_18 = 0;
    local_10 = local_20;
    unnamed_function_44962(uVar1,&local_20,0);
    iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar4 = **(int **)(iVar3 + 0x5c);
    param1 = *(undefined4 *)(iVar4 + 0x20);
    uVar1 = unnamed_function_95402(System_Action_GameState__TypeInfo);
    unnamed_function_60038(uVar1,__this,DAT_ram_0056b8e0,0);
    iVar3 = unnamed_function_85160(param1,uVar1,0);
    uVar1 = System_Action_GameState__TypeInfo;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar4 + 0x20) = 0;
    }
    else {
      iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
      if (iVar2 == 0) {
        unnamed_function_1116(iVar3,uVar1);
        do {
          halt_trap();
        } while( true );
      }
      *(int *)(iVar4 + 0x20) = iVar2;
      uVar1 = System_Action_GameState__TypeInfo;
      iVar4 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
      if (iVar4 == 0) {
        unnamed_function_1116(iVar3,uVar1);
        do {
          halt_trap();
        } while( true );
      }
    }
  }
  return;
}

// ---- Player$$OnCollisionStay2D ----
// C#: void Player__OnCollisionStay2D (Player_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void Player__OnCollisionStay2D
               (Player_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_ram_00664943 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a5c);
    unnamed_function_1099(&StringLiteral_2074 /* "Boss" */);
    DAT_ram_00664943 = '\x01';
  }
  uVar1 = unnamed_function_16380(collision,0);
  iVar2 = unnamed_function_44684(uVar1,0);
  iVar3 = unnamed_function_44702(StringLiteral_2074 /* "Boss" */,0);
  if (iVar2 == iVar3) {
    uVar1 = unnamed_function_16380(collision,0);
    iVar2 = unnamed_function_73836(uVar1,DAT_ram_00569a5c);
    if (*(char *)(iVar2 + 0x28) != '\0') {
      unnamed_function_16407(*(undefined4 *)(iVar2 + 0x1c),7,0);
    }
  }
  return;
}

// ---- Player$$OnCollisionExit2D ----
// C#: void Player__OnCollisionExit2D (Player_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void Player__OnCollisionExit2D
               (Player_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_ram_00664944 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a5c);
    unnamed_function_1099(&StringLiteral_2074 /* "Boss" */);
    DAT_ram_00664944 = '\x01';
  }
  uVar1 = unnamed_function_16380(collision,0);
  iVar2 = unnamed_function_44684(uVar1,0);
  iVar3 = unnamed_function_44702(StringLiteral_2074 /* "Boss" */,0);
  if (iVar2 == iVar3) {
    uVar1 = unnamed_function_16380(collision,0);
    iVar2 = unnamed_function_73836(uVar1,DAT_ram_00569a5c);
    if (*(char *)(iVar2 + 0x28) != '\0') {
      unnamed_function_16407(*(undefined4 *)(iVar2 + 0x1c),4,0);
    }
  }
  return;
}

// ---- Player$$.ctor ----
// C#: void Player___ctor (Player_o* __this, const MethodInfo* method);

void Player___ctor(Player_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if (DAT_ram_00664945 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2___TypeInfo);
    DAT_ram_00664945 = '\x01';
  }
  fVar1 = (float)unnamed_function_1050(UnityEngine_Vector2___TypeInfo,2);
  (__this->spawnPosition).x = fVar1;
  unnamed_function_44622(__this,0);
  return;
}

