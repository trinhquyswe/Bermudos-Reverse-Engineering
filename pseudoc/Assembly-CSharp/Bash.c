// Assembly-CSharp :: Bash
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Bash : MonoBehaviour // TypeDefIndex: 5700
{
	// Fields
	private Collider2D collider2d; // 0x10
	private LayerMask layerMask; // 0x14
	private Player player; // 0x18
	private Arrow arrow; // 0x1C
	private BashState bashState; // 0x20
	[SerializeField]
	private SoundEffectSO duringBashSoundEffect; // 0x24
	[SerializeField]
	private SoundEffectSO releaseBashSoundEffect; // 0x28
	[SerializeField]
	[TextArea]
	private string instructionBash; // 0x2C
	private bool isDuring; // 0x30
	private bool isRelease; // 0x31
	private bool isDuringSoundPlaying; // 0x32
	private float aimCountdown; // 0x34
	private float bashForce; // 0x38
	private int bashCost; // 0x3C
	private float bashRadius; // 0x40
	private int displayCount; // 0x44

	// Methods

	// RVA: 0x39EE Offset: 0x39EE VA: 0x39EE
	private void Awake() { }

	// RVA: 0x39EF Offset: 0x39EF VA: 0x39EF
	private void OnEnable() { }

	// RVA: 0x39F0 Offset: 0x39F0 VA: 0x39F0
	private void OnDisable() { }

	// RVA: 0x39F1 Offset: 0x39F1 VA: 0x39F1
	private void GameStateChanged_OnBash(GameState gameState) { }

	// RVA: 0x39F2 Offset: 0x39F2 VA: 0x39F2
	public void InstructBash() { }

	// RVA: 0x39F3 Offset: 0x39F3 VA: 0x39F3
	private void OnBashEvent_OnBash(BashEvent bashEvent, BashEventArgs bashEventArgs) { }

	// RVA: 0x39F4 Offset: 0x39F4 VA: 0x39F4
	private void Start() { }

	// RVA: 0x39F5 Offset: 0x39F5 VA: 0x39F5
	private void Update() { }

	// RVA: 0x39F6 Offset: 0x39F6 VA: 0x39F6
	private void Prepare() { }

	// RVA: 0x39F7 Offset: 0x39F7 VA: 0x39F7
	private void During() { }

	// RVA: 0x39F8 Offset: 0x39F8 VA: 0x39F8
	private void Release() { }

	// RVA: 0x39F9 Offset: 0x39F9 VA: 0x39F9
	private void InitializeFlagVarible() { }

	// RVA: 0x39FA Offset: 0x39FA VA: 0x39FA
	private void MoveAmmoByBash() { }

	// RVA: 0x39FB Offset: 0x39FB VA: 0x39FB
	private void ProcessInstructionBashInRealseState() { }

	// RVA: 0x39FC Offset: 0x39FC VA: 0x39FC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Bash$$Awake ----
// C#: void Bash__Awake (Bash_o* __this, const MethodInfo* method);

void Bash__Awake(Bash_o *__this,MethodInfo *method)

{
  Player_o *pPVar1;
  Arrow_o *pAVar2;
  
  if (DAT_ram_0066496b == '\0') {
    unnamed_function_1099(&DAT_ram_00567e1c);
    unnamed_function_1099(&DAT_ram_00567ef0);
    DAT_ram_0066496b = '\x01';
  }
  pPVar1 = (Player_o *)unnamed_function_65370(__this,DAT_ram_00567ef0);
  __this->player = pPVar1;
  pAVar2 = (Arrow_o *)unnamed_function_65370(__this,DAT_ram_00567e1c);
  __this->bashState = None;
  __this->arrow = pAVar2;
  return;
}

// ---- Bash$$OnEnable ----
// C#: void Bash__OnEnable (Bash_o* __this, const MethodInfo* method);

void Bash__OnEnable(Bash_o *__this,MethodInfo *method)

{
  bool bVar1;
  Action_o *param1;
  undefined4 uVar2;
  int iVar3;
  Action_o *pAVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  BashEvent_o *pBVar8;
  
  if (DAT_ram_0066496c == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&System_Action_BashEvent__BashEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567694);
    unnamed_function_1099(&DAT_ram_00567698);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_0066496c = '\x01';
  }
  iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar6 = **(int **)(iVar5 + 0x5c);
  uVar7 = *(undefined4 *)(iVar6 + 0x20);
  uVar2 = unnamed_function_95402(System_Action_GameState__TypeInfo);
  unnamed_function_60038(uVar2,__this,DAT_ram_00567694,0);
  iVar5 = unnamed_function_85158(uVar7,uVar2,0);
  uVar2 = System_Action_GameState__TypeInfo;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar6 + 0x20) = 0;
  }
  else {
    iVar3 = unnamed_function_1112(iVar5,System_Action_GameState__TypeInfo);
    if (iVar3 == 0) {
      unnamed_function_1116(iVar5,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar6 + 0x20) = iVar3;
    uVar2 = System_Action_GameState__TypeInfo;
    iVar6 = unnamed_function_1112(iVar5,System_Action_GameState__TypeInfo);
    if (iVar6 == 0) {
      unnamed_function_1116(iVar5,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  pBVar8 = __this->player->bashEvent;
  uVar2 = unnamed_function_95402(System_Action_BashEvent__BashEventArgs__TypeInfo);
  unnamed_function_60334(uVar2,__this,DAT_ram_00567698,0);
  if (DAT_ram_00664976 == '\0') {
    unnamed_function_1099(&System_Action_BashEvent__BashEventArgs__TypeInfo);
    DAT_ram_00664976 = '\x01';
  }
  param1 = pBVar8->OnBash;
  while( true ) {
    iVar5 = 0;
    iVar6 = unnamed_function_85158(param1,uVar2,0);
    uVar7 = System_Action_BashEvent__BashEventArgs__TypeInfo;
    if ((iVar6 != 0) &&
       (iVar5 = unnamed_function_1112(iVar6,System_Action_BashEvent__BashEventArgs__TypeInfo),
       iVar5 == 0)) break;
    pAVar4 = (Action_o *)unnamed_function_1144(&pBVar8->OnBash,iVar5,param1);
    bVar1 = param1 == pAVar4;
    param1 = pAVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar6,uVar7);
  do {
    halt_trap();
  } while( true );
}

// ---- Bash$$OnDisable ----
// C#: void Bash__OnDisable (Bash_o* __this, const MethodInfo* method);

void Bash__OnDisable(Bash_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  BashEvent_o *pBVar3;
  
  if (DAT_ram_0066496d == '\0') {
    unnamed_function_1099(&System_Action_BashEvent__BashEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567698);
    DAT_ram_0066496d = '\x01';
  }
  pBVar3 = __this->player->bashEvent;
  param1_00 = unnamed_function_95402(System_Action_BashEvent__BashEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00567698,0);
  if (DAT_ram_00664977 == '\0') {
    unnamed_function_1099(&System_Action_BashEvent__BashEventArgs__TypeInfo);
    DAT_ram_00664977 = '\x01';
  }
  param1 = pBVar3->OnBash;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_BashEvent__BashEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_BashEvent__BashEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pBVar3->OnBash,param2_00,param1);
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

// ---- Bash$$GameStateChanged_OnBash ----
// C#: void Bash__GameStateChanged_OnBash (Bash_o* __this, int32_t gameState, const MethodInfo* method);

void Bash__GameStateChanged_OnBash(Bash_o *__this,GameState gameState,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 param1;
  
  if (DAT_ram_0066496e == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567694);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&StringLiteral_4519 /* "InstructBash" */);
    DAT_ram_0066496e = '\x01';
  }
  if (gameState == Instruct) {
    unnamed_function_44717(__this,StringLiteral_4519 /* "InstructBash" */,0.0,0.15,0);
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
    unnamed_function_60038(uVar1,__this,DAT_ram_00567694,0);
    iVar3 = unnamed_function_85160(param1,uVar1,0);
    uVar1 = System_Action_GameState__TypeInfo;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar4 + 0x20) = 0;
      return;
    }
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
  return;
}

// ---- Bash$$InstructBash ----
// C#: void Bash__InstructBash (Bash_o* __this, const MethodInfo* method);

void Bash__InstructBash(Bash_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  Collider2D_o *param1;
  int iVar2;
  float param2;
  string_o *psVar3;
  int iVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  if (DAT_ram_0066496f == '\0') {
    unnamed_function_1099(&DAT_ram_00567e08);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&UnityEngine_Physics2D_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_0066496f = '\x01';
  }
  iVar2 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  if (*(int *)(**(int **)(iVar2 + 0x5c) + 0x1c) == 2) {
    uVar1 = unnamed_function_44643(__this,0);
    unnamed_function_44960(local_10,uVar1,0);
    param2 = __this->bashRadius;
    iVar2 = (__this->layerMask).m_Mask;
    if (*(int *)(UnityEngine_Physics2D_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Physics2D_TypeInfo);
    }
    local_20 = local_10[0];
    local_18 = local_10[0];
    param1 = (Collider2D_o *)unnamed_function_16365(&local_20,param2,iVar2,0);
    __this->collider2d = param1;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar2 = unnamed_function_44710(param1,0,0);
    if (iVar2 == 0) {
      uVar1 = unnamed_function_65370(__this->collider2d,DAT_ram_00567e08);
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Object_TypeInfo);
      }
      iVar2 = unnamed_function_44710(uVar1,0,0);
      if (iVar2 == 0) {
        unnamed_function_44887(0.0,0);
        __this->aimCountdown = 10.0;
        __this->isDuring = true;
        iVar2 = __this->displayCount;
        psVar3 = __this->instructionBash;
        if (DAT_ram_006649de == '\0') {
          unnamed_function_1099(&StaticEventHandler_TypeInfo);
          DAT_ram_006649de = '\x01';
        }
        iVar4 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x48);
        if (iVar4 != 0) {
          (**(code **)((ulonglong)*(uint *)(iVar4 + 0xc) * 4))
                    (*(undefined4 *)(iVar4 + 0x20),psVar3,iVar2,1,*(undefined4 *)(iVar4 + 0x14));
        }
      }
    }
  }
  return;
}

// ---- Bash$$OnBashEvent_OnBash ----
// C#: void Bash__OnBashEvent_OnBash (Bash_o* __this, BashEvent_o* bashEvent, BashEventArgs_o* bashEventArgs, const MethodInfo* method);

void EnemyAI__OnEnemyState
               (EnemyAI_o *__this,EnemyStateEvent_o *enemyStateEvent,
               EnemyStateEventArgs_o *enemyStateEventArgs,MethodInfo *method)

{
  __this->enemyState = enemyStateEventArgs->enemyState;
  return;
}

// ---- Bash$$Start ----
// C#: void Bash__Start (Bash_o* __this, const MethodInfo* method);

void Bash__Start(Bash_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664970 == '\0') {
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_3541 /* "EnemyAmmo" */);
    DAT_ram_00664970 = '\x01';
  }
  iVar1 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar1 + 0x10) = StringLiteral_3541 /* "EnemyAmmo" */;
  iVar1 = unnamed_function_44703(iVar1,0);
  (__this->layerMask).m_Mask = iVar1;
  return;
}

// ---- Bash$$Update ----
// C#: void Bash__Update (Bash_o* __this, const MethodInfo* method);

void Bash__Update(Bash_o *__this,MethodInfo *method)

{
  BashState BVar1;
  
  BVar1 = __this->bashState;
  if (BVar1 == ActiveBash) {
    Bash__Prepare(__this,(MethodInfo *)__this);
    return;
  }
  if (BVar1 == DuringBash) {
    if (__this->isDuring != false) {
      Bash__During(__this,(MethodInfo *)__this);
      return;
    }
  }
  else if (BVar1 == ReleaseBash) {
    if (__this->isRelease != false) {
      Bash__Release(__this,(MethodInfo *)__this);
      return;
    }
  }
  else if (BVar1 == None) {
    __this->isDuring = false;
    __this->isRelease = false;
  }
  return;
}

// ---- Bash$$Prepare ----
// C#: void Bash__Prepare (Bash_o* __this, const MethodInfo* method);

void Bash__Prepare(Bash_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  Collider2D_o *param1;
  Stamina_o *__this_00;
  float param2;
  int iVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  if (DAT_ram_00664971 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e08);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&UnityEngine_Physics2D_TypeInfo);
    DAT_ram_00664971 = '\x01';
  }
  __this_00 = __this->player->stamina;
  if ((float)__this->bashCost <= __this_00->currentStamina) {
    Stamina__UseStamina(__this_00,__this->bashCost,(MethodInfo *)0x0);
    uVar1 = unnamed_function_44643(__this,0);
    unnamed_function_44960(local_10,uVar1,0);
    param2 = __this->bashRadius;
    iVar2 = (__this->layerMask).m_Mask;
    if (*(int *)(UnityEngine_Physics2D_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Physics2D_TypeInfo);
    }
    local_20 = local_10[0];
    local_18 = local_10[0];
    param1 = (Collider2D_o *)unnamed_function_16365(&local_20,param2,iVar2,0);
    __this->collider2d = param1;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar2 = unnamed_function_44710(param1,0,0);
    if (iVar2 == 0) {
      uVar1 = unnamed_function_65370(__this->collider2d,DAT_ram_00567e08);
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Object_TypeInfo);
      }
      iVar2 = unnamed_function_44710(uVar1,0,0);
      if ((iVar2 == 0) && ((float)__this->bashCost <= __this->player->stamina->currentStamina)) {
        unnamed_function_44887(0.0,0);
        __this->aimCountdown = 2.0;
        __this->isDuring = true;
      }
    }
  }
  return;
}

// ---- Bash$$During ----
// C#: void Bash__During (Bash_o* __this, const MethodInfo* method);

void Bash__During(Bash_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  undefined4 param2;
  Collider2D_o *param1;
  Arrow_o *__this_00;
  float fVar5;
  Vector2_o local_30;
  Vector2_o local_28;
  Vector2_o local_20;
  Vector2_o local_18;
  Vector3_o local_10;
  
  if (DAT_ram_00664972 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_00664972 = '\x01';
  }
  fVar5 = __this->aimCountdown;
  fVar3 = unnamed_function_44882(0);
  fVar5 = fVar5 - fVar3;
  __this->aimCountdown = fVar5;
  if (fVar5 <= 0.0) {
    unnamed_function_52758(__this->arrow->lineRenderer,0,0);
    unnamed_function_44887(1.0,0);
    __this->isDuring = false;
  }
  else {
    __this->isRelease = true;
    param1 = __this->collider2d;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar4 = unnamed_function_44679(param1,0,0);
    if (iVar4 != 0) {
      if (__this->isDuringSoundPlaying == false) {
        iVar4 = *(int *)(DAT_ram_00565d6c + 0x10);
        if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = unnamed_function_95087(iVar4);
        }
        iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
        if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = unnamed_function_95087(iVar4);
        }
        SoundEffectManager__PlaySoundEffect
                  ((SoundEffectManager_o *)**(undefined4 **)(iVar4 + 0x5c),
                   __this->duringBashSoundEffect,(MethodInfo *)__this);
        __this->isDuringSoundPlaying = true;
      }
      __this_00 = __this->arrow;
      HelperUtilities__GetMouseWorldPosition(&local_10,(MethodInfo *)0x0);
      uVar1 = local_10._0_8_;
      param2 = unnamed_function_44643(__this->collider2d,0);
      unnamed_function_44960(&local_10,param2,0);
      uVar2 = local_10._0_8_;
      local_10.x = (float)uVar1;
      local_10.y = SUB84(uVar1,4);
      local_18.x = local_10.x;
      local_18.y = local_10.y;
      local_10.x = (float)uVar1;
      local_10.y = SUB84(uVar1,4);
      local_28.x = local_10.x;
      local_28.y = local_10.y;
      local_10.x = (float)uVar2;
      local_10.y = SUB84(uVar2,4);
      local_20.x = local_10.x;
      local_20.y = local_10.y;
      local_10.x = (float)uVar2;
      local_10.y = SUB84(uVar2,4);
      local_30.x = local_10.x;
      local_30.y = local_10.y;
      Arrow__MakeArrow(__this_00,&local_28,&local_30,(MethodInfo *)__this);
    }
  }
  return;
}

// ---- Bash$$Release ----
// C#: void Bash__Release (Bash_o* __this, const MethodInfo* method);

void Bash__Release(Bash_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  undefined4 param2;
  Collider2D_o *param1_00;
  
  if (DAT_ram_00664973 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e08);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&StringLiteral_1987 /* "BashAmmo" */);
    DAT_ram_00664973 = '\x01';
  }
  unnamed_function_44887(1.0,0);
  param1_00 = __this->collider2d;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1_00,0,0);
  if ((iVar1 != 0) && (__this->isRelease != false)) {
    iVar1 = unnamed_function_65370(__this->collider2d,DAT_ram_00567e08);
    *(undefined4 *)(iVar1 + 0x74) = 2;
    param1 = unnamed_function_44644(__this->collider2d,0);
    param2 = unnamed_function_44702(StringLiteral_1987 /* "BashAmmo" */,0);
    unnamed_function_44685(param1,param2,0);
    Bash__MoveAmmoByBash(__this,(MethodInfo *)__this);
    unnamed_function_52758(__this->arrow->lineRenderer,0,0);
    if (__this->isDuringSoundPlaying != false) {
      iVar1 = *(int *)(DAT_ram_00565d6c + 0x10);
      if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = unnamed_function_95087(iVar1);
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
      if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = unnamed_function_95087(iVar1);
      }
      SoundEffectManager__PlaySoundEffect
                ((SoundEffectManager_o *)**(undefined4 **)(iVar1 + 0x5c),
                 __this->releaseBashSoundEffect,(MethodInfo *)__this);
      __this->isDuringSoundPlaying = false;
    }
    Bash__ProcessInstructionBashInRealseState(__this,(MethodInfo *)__this);
  }
  __this->bashState = None;
  return;
}

// ---- Bash$$InitializeFlagVarible ----
// C#: void Bash__InitializeFlagVarible (Bash_o* __this, const MethodInfo* method);

void Bash__InitializeFlagVarible(Bash_o *__this,MethodInfo *method)

{
  __this->isDuring = false;
  __this->isRelease = false;
  return;
}

// ---- Bash$$MoveAmmoByBash ----
// C#: void Bash__MoveAmmoByBash (Bash_o* __this, const MethodInfo* method);

void Bash__MoveAmmoByBash(Bash_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  undefined4 param1;
  undefined4 param2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_20;
  undefined8 local_18;
  float4 local_10;
  float4 local_c;
  
  if (DAT_ram_00664974 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_00664974 = '\x01';
  }
  param1 = unnamed_function_65370(__this->collider2d,DAT_ram_00567f18);
  param2 = unnamed_function_44643(__this->collider2d,0);
  unnamed_function_44960(&local_10,param2,0);
  fVar2 = local_c;
  fVar1 = local_10;
  HelperUtilities__GetMouseWorldPosition((Vector3_o *)&local_10,(MethodInfo *)0x0);
  if (DAT_ram_006634ad == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_006634ad = '\x01';
  }
  fVar3 = (float)fVar2 - (float)local_c;
  fVar4 = (float)fVar1 - (float)local_10;
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (1e-05 < fVar5) {
    fVar3 = fVar3 / fVar5;
    fVar4 = fVar4 / fVar5;
  }
  else {
    if (DAT_ram_0066482a == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_0066482a = '\x01';
    }
    fVar3 = (*(float **)(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
    fVar4 = **(float **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  }
  local_20 = CONCAT44(fVar3 * __this->bashForce,fVar4 * __this->bashForce);
  local_18 = local_20;
  unnamed_function_16412(param1,&local_20,1,0);
  return;
}

// ---- Bash$$ProcessInstructionBashInRealseState ----
// C#: void Bash__ProcessInstructionBashInRealseState (Bash_o* __this, const MethodInfo* method);

void Bash__ProcessInstructionBashInRealseState(Bash_o *__this,MethodInfo *method)

{
  int iVar1;
  string_o *psVar2;
  int iVar3;
  
  if (DAT_ram_00664975 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&StringLiteral_4519 /* "InstructBash" */);
    DAT_ram_00664975 = '\x01';
  }
  iVar1 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = unnamed_function_95087(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = unnamed_function_95087(iVar1);
  }
  if (*(int *)(**(int **)(iVar1 + 0x5c) + 0x1c) == 2) {
    iVar1 = __this->displayCount;
    if (iVar1 == 2) {
      unnamed_function_44719(__this,StringLiteral_4519 /* "InstructBash" */,0);
      iVar1 = *(int *)(DAT_ram_00565d78 + 0x10);
      if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = unnamed_function_95087(iVar1);
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
      if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = unnamed_function_95087(iVar1);
      }
      GameManager__HandleGameState
                ((GameManager_o *)**(undefined4 **)(iVar1 + 0x5c),Play,(MethodInfo *)0x0);
      iVar1 = __this->displayCount;
    }
    __this->displayCount = iVar1 + 1;
    psVar2 = __this->instructionBash;
    if (DAT_ram_006649de == '\0') {
      unnamed_function_1099(&StaticEventHandler_TypeInfo);
      DAT_ram_006649de = '\x01';
    }
    iVar3 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x48);
    if (iVar3 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
                (*(undefined4 *)(iVar3 + 0x20),psVar2,iVar1 + 1,1,*(undefined4 *)(iVar3 + 0x14));
    }
  }
  return;
}

// ---- Bash$$.ctor ----
// C#: void Bash___ctor (Bash_o* __this, const MethodInfo* method);

void Bash___ctor(Bash_o *__this,MethodInfo *method)

{
  __this->bashRadius = 2.5;
  __this->bashForce = 10.0;
  __this->bashCost = 10;
  unnamed_function_44622(__this,0);
  return;
}

