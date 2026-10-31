// Assembly-CSharp :: GameManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GameManager : SingletonMonobehaviour<GameManager> // TypeDefIndex: 5612
{
	// Fields
	[HideInInspector]
	public Player player; // 0x10
	public EnemyManagerDetailsSO[] enemyManagerDetailsSO; // 0x14
	[HideInInspector]
	public SaveFileSetup saveFileSetup; // 0x18
	public GameState gameState; // 0x1C
	[HideInInspector]
	public Action<GameState> OnGameStateChange; // 0x20
	[SerializeField]
	public Image beginSreen; // 0x24
	[SerializeField]
	private Image wonPanel; // 0x28
	[SerializeField]
	private Image wonScreen; // 0x2C
	[SerializeField]
	private TextMeshProUGUI wonText; // 0x30
	[SerializeField]
	private GameObject healthBar; // 0x34
	[SerializeField]
	private GameObject staminaBar; // 0x38
	[SerializeField]
	private GameObject skillBar; // 0x3C

	// Methods

	// RVA: 0x37F1 Offset: 0x37F1 VA: 0x37F1
	private void OnEnable() { }

	// RVA: 0x37F2 Offset: 0x37F2 VA: 0x37F2
	private void OnDisable() { }

	// RVA: 0x37F3 Offset: 0x37F3 VA: 0x37F3
	private void StaticEventHandler_OnPlayerChanged(OnPlayerChangedEventArgs onPlayerChangedEventArgs) { }

	// RVA: 0x37F4 Offset: 0x37F4 VA: 0x37F4
	private void StaticEventHandler_OnRestInBonfire() { }

	// RVA: 0x37F5 Offset: 0x37F5 VA: 0x37F5 Slot: 4
	protected override void Awake() { }

	// RVA: 0x37F6 Offset: 0x37F6 VA: 0x37F6
	public void TransitionToGame() { }

	// RVA: 0x37F7 Offset: 0x37F7 VA: 0x37F7
	public void HandleGameState(GameState gameState) { }

	// RVA: 0x37F8 Offset: 0x37F8 VA: 0x37F8
	private void SaveBossState(int isBossDefeated) { }

	// RVA: 0x37F9 Offset: 0x37F9 VA: 0x37F9
	private void WonScene() { }

	// RVA: 0x37FA Offset: 0x37FA VA: 0x37FA
	private void Instruct() { }

	// RVA: 0x37FB Offset: 0x37FB VA: 0x37FB
	public void Intro() { }

	// RVA: 0x37FC Offset: 0x37FC VA: 0x37FC
	public void Play() { }

	// RVA: 0x37FD Offset: 0x37FD VA: 0x37FD
	public void EngagedBoss() { }

	// RVA: 0x37FE Offset: 0x37FE VA: 0x37FE
	private void Start() { }

	// RVA: 0x37FF Offset: 0x37FF VA: 0x37FF
	public void InitializeEnemyManagerData() { }

	// RVA: 0x3800 Offset: 0x3800 VA: 0x3800
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3801 Offset: 0x3801 VA: 0x3801
	private void <TransitionToGame>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x3802 Offset: 0x3802 VA: 0x3802
	private void <WonScene>b__20_0() { }

	[CompilerGenerated]
	// RVA: 0x3803 Offset: 0x3803 VA: 0x3803
	private void <WonScene>b__20_1(TMPWriter tMP) { }

	[CompilerGenerated]
	// RVA: 0x3804 Offset: 0x3804 VA: 0x3804
	private void <WonScene>b__20_2() { }

	[CompilerGenerated]
	// RVA: 0x3805 Offset: 0x3805 VA: 0x3805
	private void <Intro>b__22_0() { }

	[CompilerGenerated]
	// RVA: 0x3806 Offset: 0x3806 VA: 0x3806
	private void <Intro>b__22_1() { }
}

===== C# end =====
*/

// ---- GameManager$$OnEnable ----
// C#: void GameManager__OnEnable (GameManager_o* __this, const MethodInfo* method);

void GameManager__OnEnable(GameManager_o *__this,MethodInfo *method)

{
  System_Action_OnPlayerChangedEventArgs__o *value;
  System_Action_o *value_00;
  
  if (DAT_ram_00664b17 == '\0') {
    unnamed_function_1099(&System_Action_OnPlayerChangedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_00569994);
    unnamed_function_1099(&DAT_ram_00569998);
    DAT_ram_00664b17 = '\x01';
  }
  value = (System_Action_OnPlayerChangedEventArgs__o *)
          unnamed_function_95402(System_Action_OnPlayerChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00569994,0);
  StaticEventHandler__add_OnPlayerChanged(value,(MethodInfo *)0x0);
  value_00 = (System_Action_o *)unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(value_00,__this,DAT_ram_00569998,0);
  StaticEventHandler__add_OnRestInBonfire(value_00,(MethodInfo *)0x0);
  return;
}

// ---- GameManager$$OnDisable ----
// C#: void GameManager__OnDisable (GameManager_o* __this, const MethodInfo* method);

void GameManager__OnDisable(GameManager_o *__this,MethodInfo *method)

{
  System_Action_OnPlayerChangedEventArgs__o *value;
  System_Action_o *value_00;
  
  if (DAT_ram_00664b18 == '\0') {
    unnamed_function_1099(&System_Action_OnPlayerChangedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_00569994);
    unnamed_function_1099(&DAT_ram_00569998);
    DAT_ram_00664b18 = '\x01';
  }
  value = (System_Action_OnPlayerChangedEventArgs__o *)
          unnamed_function_95402(System_Action_OnPlayerChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00569994,0);
  StaticEventHandler__remove_OnPlayerChanged(value,(MethodInfo *)0x0);
  value_00 = (System_Action_o *)unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(value_00,__this,DAT_ram_00569998,0);
  StaticEventHandler__remove_OnRestInBonfire(value_00,(MethodInfo *)0x0);
  return;
}

// ---- GameManager$$StaticEventHandler_OnPlayerChanged ----
// C#: void GameManager__StaticEventHandler_OnPlayerChanged (GameManager_o* __this, OnPlayerChangedEventArgs_o* onPlayerChangedEventArgs, const MethodInfo* method);

void GameManager__StaticEventHandler_OnPlayerChanged
               (GameManager_o *__this,OnPlayerChangedEventArgs_o *onPlayerChangedEventArgs,
               MethodInfo *method)

{
  __this->player = onPlayerChangedEventArgs->player;
  return;
}

// ---- GameManager$$StaticEventHandler_OnRestInBonfire ----
// C#: void GameManager__StaticEventHandler_OnRestInBonfire (GameManager_o* __this, const MethodInfo* method);

void GameManager__StaticEventHandler_OnRestInBonfire(GameManager_o *__this,MethodInfo *method)

{
  GameManager__InitializeEnemyManagerData(__this,(MethodInfo *)__this);
  return;
}

// ---- GameManager$$Awake ----
// C#: void GameManager__Awake (GameManager_o* __this, const MethodInfo* method);

void GameManager__Awake(GameManager_o *__this,MethodInfo *method)

{
  SaveFileSetup_o *pSVar1;
  
  if (DAT_ram_00664b19 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f1c);
    unnamed_function_1099(&DAT_ram_00565d74);
    DAT_ram_00664b19 = '\x01';
  }
  unnamed_function_61266(__this,DAT_ram_00565d74);
  pSVar1 = (SaveFileSetup_o *)unnamed_function_65370(__this,DAT_ram_00567f1c);
  __this->saveFileSetup = pSVar1;
  return;
}

// ---- GameManager$$TransitionToGame ----
// C#: void GameManager__TransitionToGame (GameManager_o* __this, const MethodInfo* method);

void GameManager__TransitionToGame(GameManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  GameResources_o *pGVar3;
  undefined4 param1;
  undefined4 *puVar4;
  MethodInfo local_60;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664b1a == '\0') {
    unnamed_function_1099(&DAT_ram_00569984);
    unnamed_function_1099(&DAT_ram_0056c1c8);
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d338);
    unnamed_function_1099(&DAT_ram_0056d374);
    unnamed_function_1099(&StringLiteral_9330 /* "_FadeAmount" */);
    unnamed_function_1099(&StringLiteral_7311 /* "The Forest" */);
    unnamed_function_1099(&StringLiteral_2704 /* "Coast" */);
    unnamed_function_1099(&StringLiteral_2641 /* "Checkpoint" */);
    DAT_ram_00664b1a = '\x01';
  }
  uVar1 = unnamed_function_60744(__this->saveFileSetup,0);
  iVar2 = unnamed_function_60732(uVar1,StringLiteral_2641 /* "Checkpoint" */,0);
  if (iVar2 != 0) {
    uVar1 = unnamed_function_60744(__this->saveFileSetup,0);
    uVar1 = unnamed_function_60819(uVar1,StringLiteral_2641 /* "Checkpoint" */,0,DAT_ram_0056c1c8);
    iVar2 = unnamed_function_81494(uVar1,StringLiteral_2704 /* "Coast" */,0);
    if (iVar2 == 0) {
      iVar2 = unnamed_function_81494(uVar1,StringLiteral_7311 /* "The Forest" */,0);
      if (iVar2 == 0) goto code_r0x81a53cbf;
      uVar1 = unnamed_function_44643(__this->player,0);
      local_40 = *(undefined8 *)((int)(__this->player->spawnPosition).x + 0x18);
      local_28 = 0;
      local_38 = 0;
      local_30 = local_40;
      unnamed_function_44962(uVar1,&local_40,0);
      puVar4 = &StringLiteral_7311 /* "The Forest" */;
      iVar2 = *(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74);
    }
    else {
      uVar1 = unnamed_function_44643(__this->player,0);
      local_60._16_8_ = *(undefined8 *)((int)(__this->player->spawnPosition).x + 0x10);
      local_18 = 0;
      local_60._24_4_ = 0;
      local_20 = local_60._16_8_;
      unnamed_function_44962(uVar1,&local_60.field_0x10,0);
      puVar4 = &StringLiteral_2704 /* "Coast" */;
      iVar2 = *(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74);
    }
    if (iVar2 == 0) {
      unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    unnamed_function_45264(*puVar4,1,0);
  }
code_r0x81a53cbf:
  pGVar3 = GameResources__get_Instance(&local_60);
  unnamed_function_52907(pGVar3->beginUI,StringLiteral_9330 /* "_FadeAmount" */,0.0,0);
  local_8 = 0x3f80000000000000;
  local_10 = 0;
  iVar2 = __this->beginSreen->_opaque;
  local_60._8_8_ = 0x3f80000000000000;
  local_60._opaque0 = 0;
  local_60._opaque1 = 0;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x178) * 4))
            (__this->beginSreen,&local_60,*(undefined4 *)(iVar2 + 0x17c));
  uVar1 = unnamed_function_44644(__this->beginSreen,0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_63253(__this->beginSreen,0.0,1.5,0);
  uVar1 = unnamed_function_70031(uVar1,4,DAT_ram_0056d374);
  param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1,__this,DAT_ram_00569984,0);
  unnamed_function_70015(uVar1,param1,DAT_ram_0056d338);
  return;
}

// ---- GameManager$$HandleGameState ----
// C#: void GameManager__HandleGameState (GameManager_o* __this, int32_t gameState, const MethodInfo* method);

void GameManager__HandleGameState(GameManager_o *__this,GameState gameState,MethodInfo *method)

{
  undefined4 uVar1;
  GameResources_o *pGVar2;
  int iVar3;
  MusicManager_o *__this_00;
  Action_o *pAVar4;
  
  if (DAT_ram_00664b1b == '\0') {
    unnamed_function_1099(&DAT_ram_00565d58);
    DAT_ram_00664b1b = '\x01';
  }
  __this->gameState = gameState;
  if (gameState == Intro) {
    if (DAT_ram_00664b1c == '\0') {
      unnamed_function_1099(&StringLiteral_11508 /* "isBossDefeated" */);
      DAT_ram_00664b1c = '\x01';
    }
    unnamed_function_44552(StringLiteral_11508 /* "isBossDefeated" */,0,0);
    GameManager__Intro(__this,(MethodInfo *)__this);
  }
  else if (gameState != Begin) {
    if (gameState == Instruct) {
      unnamed_function_44686(__this->healthBar,1,0);
      unnamed_function_44686(__this->staminaBar,1,0);
      unnamed_function_44686(__this->skillBar,1,0);
    }
    else if (gameState == Play) {
      if (DAT_ram_00664b1f == '\0') {
        unnamed_function_1099(&DAT_ram_00567f18);
        DAT_ram_00664b1f = '\x01';
      }
      uVar1 = unnamed_function_65370(__this->player,DAT_ram_00567f18);
      unnamed_function_16396(uVar1,0.5,0);
    }
    else if (gameState == EngagedBoss) {
      if (DAT_ram_00664b20 == '\0') {
        unnamed_function_1099(&DAT_ram_00567f18);
        DAT_ram_00664b20 = '\x01';
      }
      uVar1 = unnamed_function_65370(__this->player,DAT_ram_00567f18);
      unnamed_function_16396(uVar1,1e+06,0);
      iVar3 = *(int *)(DAT_ram_00565d58 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = unnamed_function_95087(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = unnamed_function_95087(iVar3);
      }
      MusicManager__StopPlayingBackgroundMusic
                ((MusicManager_o *)**(undefined4 **)(iVar3 + 0x5c),(MethodInfo *)0x0);
      iVar3 = *(int *)(DAT_ram_00565d58 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = unnamed_function_95087(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = unnamed_function_95087(iVar3);
      }
      __this_00 = (MusicManager_o *)**(undefined4 **)(iVar3 + 0x5c);
      pGVar2 = GameResources__get_Instance((MethodInfo *)__this);
      MusicManager__PlayMusic(__this_00,pGVar2->musicTrack_Bossfight,0.5,0.5,(MethodInfo *)0x0);
    }
    else if (gameState == Won) {
      if (DAT_ram_00664b1c == '\0') {
        unnamed_function_1099(&StringLiteral_11508 /* "isBossDefeated" */);
        DAT_ram_00664b1c = '\x01';
      }
      unnamed_function_44552(StringLiteral_11508 /* "isBossDefeated" */,1,0);
      GameManager__WonScene(__this,(MethodInfo *)__this);
    }
  }
  pAVar4 = __this->OnGameStateChange;
  if (pAVar4 != (Action_o *)0x0) {
    (**(code **)((ulonglong)(uint)pAVar4[3]._opaque * 4))
              (pAVar4[8]._opaque,gameState,pAVar4[5]._opaque);
  }
  return;
}

// ---- GameManager$$SaveBossState ----
// C#: void GameManager__SaveBossState (GameManager_o* __this, int32_t isBossDefeated, const MethodInfo* method);

void GameManager__SaveBossState(GameManager_o *__this,int isBossDefeated,MethodInfo *method)

{
  if (DAT_ram_00664b1c == '\0') {
    unnamed_function_1099(&StringLiteral_11508 /* "isBossDefeated" */);
    DAT_ram_00664b1c = '\x01';
  }
  unnamed_function_44552(StringLiteral_11508 /* "isBossDefeated" */,isBossDefeated,0);
  return;
}

// ---- GameManager$$WonScene ----
// C#: void GameManager__WonScene (GameManager_o* __this, const MethodInfo* method);

void GameManager__WonScene(GameManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  int iVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664b1d == '\0') {
    unnamed_function_1099(&DAT_ram_00569988);
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d338);
    unnamed_function_1099(&StringLiteral_5674 /* "North Of The Forest" */);
    DAT_ram_00664b1d = '\x01';
  }
  if (*(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  }
  unnamed_function_45270(StringLiteral_5674 /* "North Of The Forest" */,0);
  uVar1 = unnamed_function_44644(__this->wonPanel,0);
  unnamed_function_44686(uVar1,1,0);
  local_8 = 0;
  local_10 = 0;
  iVar2 = __this->wonPanel->_opaque;
  local_18 = 0;
  local_20 = 0;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x178) * 4))
            (__this->wonPanel,&local_20,*(undefined4 *)(iVar2 + 0x17c));
  uVar1 = unnamed_function_63253(__this->wonPanel,1.0,1.0,0);
  param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1,__this,DAT_ram_00569988,0);
  unnamed_function_70015(uVar1,param1,DAT_ram_0056d338);
  return;
}

// ---- GameManager$$Instruct ----
// C#: void GameManager__Instruct (GameManager_o* __this, const MethodInfo* method);

void GameManager__Instruct(GameManager_o *__this,MethodInfo *method)

{
  unnamed_function_44686(__this->healthBar,1,0);
  unnamed_function_44686(__this->staminaBar,1,0);
  unnamed_function_44686(__this->skillBar,1,0);
  return;
}

// ---- GameManager$$Intro ----
// C#: void GameManager__Intro (GameManager_o* __this, const MethodInfo* method);

void GameManager__Intro(GameManager_o *__this,MethodInfo *method)

{
  GameResources_o *pGVar1;
  undefined4 uVar2;
  undefined4 param1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664b1e == '\0') {
    unnamed_function_1099(&DAT_ram_0056997c);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d338);
    unnamed_function_1099(&StringLiteral_9330 /* "_FadeAmount" */);
    DAT_ram_00664b1e = '\x01';
  }
  unnamed_function_44686(__this->healthBar,0,0);
  unnamed_function_44686(__this->staminaBar,0,0);
  unnamed_function_44686(__this->skillBar,0,0);
  pGVar1 = GameResources__get_Instance((MethodInfo *)__this);
  unnamed_function_52907(pGVar1->beginUI,StringLiteral_9330 /* "_FadeAmount" */,0.0,0);
  uVar2 = unnamed_function_44644(__this->beginSreen,0);
  unnamed_function_44686(uVar2,1,0);
  local_8 = 0x3f80000000000000;
  local_18 = 0x3f80000000000000;
  local_10 = 0;
  local_20 = 0;
  uVar2 = unnamed_function_63252(__this->beginSreen,&local_20,3.0,0);
  param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1,__this,DAT_ram_0056997c,0);
  unnamed_function_70015(uVar2,param1,DAT_ram_0056d338);
  return;
}

// ---- GameManager$$Play ----
// C#: void GameManager__Play (GameManager_o* __this, const MethodInfo* method);

void GameManager__Play(GameManager_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664b1f == '\0') {
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_00664b1f = '\x01';
  }
  param1 = unnamed_function_65370(__this->player,DAT_ram_00567f18);
  unnamed_function_16396(param1,0.5,0);
  return;
}

// ---- GameManager$$EngagedBoss ----
// C#: void GameManager__EngagedBoss (GameManager_o* __this, const MethodInfo* method);

void GameManager__EngagedBoss(GameManager_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664b20 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_00664b20 = '\x01';
  }
  param1 = unnamed_function_65370(__this->player,DAT_ram_00567f18);
  unnamed_function_16396(param1,1e+06,0);
  return;
}

// ---- GameManager$$Start ----
// C#: void GameManager__Start (GameManager_o* __this, const MethodInfo* method);

void GameManager__StaticEventHandler_OnRestInBonfire(GameManager_o *__this,MethodInfo *method)

{
  GameManager__InitializeEnemyManagerData(__this,(MethodInfo *)__this);
  return;
}

// ---- GameManager$$InitializeEnemyManagerData ----
// C#: void GameManager__InitializeEnemyManagerData (GameManager_o* __this, const MethodInfo* method);

void GameManager__InitializeEnemyManagerData(GameManager_o *__this,MethodInfo *method)

{
  EnemyManagerData_o *method_00;
  List_o *param1;
  undefined4 uVar1;
  EnemyManagerDetailsSO_o *pEVar2;
  int iVar3;
  string_o *psVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (DAT_ram_00664b21 == '\0') {
    unnamed_function_1099(&EnemyManagerData_TypeInfo);
    unnamed_function_1099(&DAT_ram_00564118);
    unnamed_function_1099(&DAT_ram_0056c1a0);
    DAT_ram_00664b21 = '\x01';
  }
  pEVar2 = __this->enemyManagerDetailsSO;
  if (0 < (int)pEVar2->enemyPrefab) {
    do {
      iVar3 = *(int *)(pEVar2->pad_8 + iVar6 * 4 + 8);
      psVar4 = *(string_o **)(iVar3 + 0x10);
      iVar5 = *(int *)(*(int *)(iVar3 + 0x14) + 0xc);
      method_00 = (EnemyManagerData_o *)unnamed_function_95402(EnemyManagerData_TypeInfo);
      if (DAT_ram_00664afe == '\0') {
        unnamed_function_1099(&DAT_ram_00562b48);
        unnamed_function_1099(&System_Collections_Generic_List_bool__TypeInfo);
        DAT_ram_00664afe = '\x01';
      }
      param1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_bool__TypeInfo);
      unnamed_function_5132(param1,DAT_ram_00562b48);
      method_00->enemieStateList = param1;
      method_00->enemyCount = iVar5;
      method_00->enemyName = psVar4;
      EnemyManagerData__GetEnemyList(method_00,-1,(MethodInfo *)method_00);
      uVar1 = unnamed_function_60744(__this->saveFileSetup,0);
      unnamed_function_60813(uVar1,*(undefined4 *)(iVar3 + 0x18),method_00,DAT_ram_0056c1a0);
      uVar1 = unnamed_function_60744(__this->saveFileSetup,0);
      unnamed_function_60714(uVar1,0,0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)pEVar2->enemyPrefab);
  }
  return;
}

// ---- GameManager$$.ctor ----
// C#: void GameManager___ctor (GameManager_o* __this, const MethodInfo* method);

void GameManager___ctor(GameManager_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b22 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d70);
    DAT_ram_00664b22 = '\x01';
  }
  AmmoAnimation___ctor((AmmoAnimation_o *)__this,DAT_ram_00565d70);
  return;
}

// ---- GameManager$$<TransitionToGame>b__17_0 ----
// C#: void GameManager___TransitionToGame_b__17_0 (GameManager_o* __this, const MethodInfo* method);

void GameManager___TransitionToGame_b__17_0(GameManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  Action_o *pAVar2;
  
  uVar1 = unnamed_function_44644(__this->beginSreen,0);
  unnamed_function_44686(uVar1,0,0);
  if (DAT_ram_00664b1b == '\0') {
    unnamed_function_1099(&DAT_ram_00565d58);
    DAT_ram_00664b1b = '\x01';
  }
  __this->gameState = Play;
  if (DAT_ram_00664b1f == '\0') {
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_00664b1f = '\x01';
  }
  uVar1 = unnamed_function_65370(__this->player,DAT_ram_00567f18);
  unnamed_function_16396(uVar1,0.5,0);
  pAVar2 = __this->OnGameStateChange;
  if (pAVar2 != (Action_o *)0x0) {
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))(pAVar2[8]._opaque,3,pAVar2[5]._opaque);
  }
  return;
}

// ---- GameManager$$<WonScene>b__20_0 ----
// C#: void GameManager___WonScene_b__20_0 (GameManager_o* __this, const MethodInfo* method);

void GameManager___WonScene_b__20_0(GameManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param1;
  
  if (DAT_ram_00664b23 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f34);
    unnamed_function_1099(&DAT_ram_0056998c);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_TMPWriter__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566810);
    DAT_ram_00664b23 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->wonText,0);
  unnamed_function_44686(uVar1,1,0);
  iVar2 = unnamed_function_65370(__this->wonText,DAT_ram_00567f34);
  unnamed_function_45201(*(undefined4 *)(iVar2 + 0x34),0);
  param1 = *(undefined4 *)(iVar2 + 0x34);
  uVar1 = unnamed_function_95402(UnityEngine_Events_UnityAction_TMPWriter__TypeInfo);
  unnamed_function_71904(uVar1,__this,DAT_ram_0056998c,0);
  unnamed_function_71922(param1,uVar1,DAT_ram_00566810);
  return;
}

// ---- GameManager$$<WonScene>b__20_1 ----
// C#: void GameManager___WonScene_b__20_1 (GameManager_o* __this, TMPEffects_Components_TMPWriter_o* tMP, const MethodInfo* method);

void GameManager___WonScene_b__20_1
               (GameManager_o *__this,TMPEffects_Components_TMPWriter_o *tMP,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_00664b24 == '\0') {
    unnamed_function_1099(&DAT_ram_00569990);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d338);
    DAT_ram_00664b24 = '\x01';
  }
  param1 = unnamed_function_63251(__this->wonText,0.0,3.0,0);
  param1_00 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1_00,__this,DAT_ram_00569990,0);
  unnamed_function_70015(param1,param1_00,DAT_ram_0056d338);
  return;
}

// ---- GameManager$$<WonScene>b__20_2 ----
// C#: void GameManager___WonScene_b__20_2 (GameManager_o* __this, const MethodInfo* method);

void GameManager___WonScene_b__20_2(GameManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int param1;
  undefined4 param2;
  
  if (DAT_ram_00664b25 == '\0') {
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d344);
    unnamed_function_1099(&DAT_ram_0056f268);
    unnamed_function_1099(&GameManager___c_TypeInfo);
    DAT_ram_00664b25 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->wonText,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->wonScreen,0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44643(__this->wonScreen,0);
  uVar1 = unnamed_function_13885(uVar1,0.0,3.0,0);
  if (*(int *)(GameManager___c_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(GameManager___c_TypeInfo);
  }
  param1 = *(int *)(*(int *)(GameManager___c_TypeInfo + 0x5c) + 4);
  if (param1 == 0) {
    if (*(int *)(GameManager___c_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(GameManager___c_TypeInfo);
    }
    param2 = **(undefined4 **)(GameManager___c_TypeInfo + 0x5c);
    param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_13649(param1,param2,DAT_ram_0056f268,0);
    *(int *)(*(int *)(GameManager___c_TypeInfo + 0x5c) + 4) = param1;
  }
  unnamed_function_70015(uVar1,param1,DAT_ram_0056d344);
  return;
}

// ---- GameManager$$<Intro>b__22_0 ----
// C#: void GameManager___Intro_b__22_0 (GameManager_o* __this, const MethodInfo* method);

void GameManager___Intro_b__22_0(GameManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  GameResources_o *pGVar2;
  undefined4 param1;
  
  if (DAT_ram_00664b26 == '\0') {
    unnamed_function_1099(&DAT_ram_00569980);
    unnamed_function_1099(&DAT_ram_0056c1b0);
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d33c);
    unnamed_function_1099(&StringLiteral_9330 /* "_FadeAmount" */);
    unnamed_function_1099(&StringLiteral_2704 /* "Coast" */);
    unnamed_function_1099(&StringLiteral_2641 /* "Checkpoint" */);
    DAT_ram_00664b26 = '\x01';
  }
  if (*(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  }
  unnamed_function_45264(StringLiteral_2704 /* "Coast" */,1,0);
  uVar1 = unnamed_function_60744(__this->saveFileSetup,0);
  unnamed_function_60813(uVar1,StringLiteral_2641 /* "Checkpoint" */,StringLiteral_2704 /* "Coast" */,DAT_ram_0056c1b0);
  uVar1 = unnamed_function_60744(__this->saveFileSetup,0);
  unnamed_function_60714(uVar1,0,0);
  uVar1 = unnamed_function_42591(StringLiteral_2704 /* "Coast" */,0);
  unnamed_function_44558(StringLiteral_2641 /* "Checkpoint" */,uVar1,0);
  unnamed_function_44564(0);
  pGVar2 = GameResources__get_Instance((MethodInfo *)__this);
  uVar1 = unnamed_function_13860(pGVar2->beginUI,1.0,StringLiteral_9330 /* "_FadeAmount" */,2.0,0);
  param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1,__this,DAT_ram_00569980,0);
  unnamed_function_70015(uVar1,param1,DAT_ram_0056d33c);
  return;
}

// ---- GameManager$$<Intro>b__22_1 ----
// C#: void GameManager___Intro_b__22_1 (GameManager_o* __this, const MethodInfo* method);

void GameManager___Intro_b__22_1(GameManager_o *__this,MethodInfo *method)

{
  undefined4 param1;
  Action_o *pAVar1;
  
  param1 = unnamed_function_44644(__this->beginSreen,0);
  unnamed_function_44686(param1,0,0);
  if (DAT_ram_00664b1b == '\0') {
    unnamed_function_1099(&DAT_ram_00565d58);
    DAT_ram_00664b1b = '\x01';
  }
  __this->gameState = Begin;
  pAVar1 = __this->OnGameStateChange;
  if (pAVar1 != (Action_o *)0x0) {
    (**(code **)((ulonglong)(uint)pAVar1[3]._opaque * 4))(pAVar1[8]._opaque,1,pAVar1[5]._opaque);
  }
  return;
}

