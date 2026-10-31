// Assembly-CSharp :: AnimatePlayer
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AnimatePlayer : MonoBehaviour // TypeDefIndex: 5547
{
	// Fields
	private Player player; // 0x10
	private DieEvent dieEvent; // 0x14
	private Coroutine attackAnimationCoroutine; // 0x18
	private bool isAttacking; // 0x1C

	// Methods

	// RVA: 0x36B5 Offset: 0x36B5 VA: 0x36B5
	private void Awake() { }

	// RVA: 0x36B6 Offset: 0x36B6 VA: 0x36B6
	private void OnEnable() { }

	// RVA: 0x36B7 Offset: 0x36B7 VA: 0x36B7
	private void OnDisable() { }

	// RVA: 0x36B8 Offset: 0x36B8 VA: 0x36B8
	private void GameStateChanged_OnPlayer(GameState gameState) { }

	// RVA: 0x36B9 Offset: 0x36B9 VA: 0x36B9
	private void AnimatePlayer_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs) { }

	// RVA: 0x36BA Offset: 0x36BA VA: 0x36BA
	private void IdleEvent_OnIdle(IdleEvent idleEvent) { }

	// RVA: 0x36BB Offset: 0x36BB VA: 0x36BB
	private void MovementByVelocityEvent_OnMovementByVelocity(MovementByVelocityEvent movementByVelocityEvent, MovementByVelocityArgs movementByVelocityArgs) { }

	// RVA: 0x36BC Offset: 0x36BC VA: 0x36BC
	private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs) { }

	// RVA: 0x36BD Offset: 0x36BD VA: 0x36BD
	private void AttackEvent_OnAttack(AttackEvent attackEvent) { }

	// RVA: 0x36BE Offset: 0x36BE VA: 0x36BE
	private void DieEvent_OnDie(DieEvent dieEvent) { }

	// RVA: 0x36BF Offset: 0x36BF VA: 0x36BF
	private void InitializeAimAnimationParameters() { }

	// RVA: 0x36C0 Offset: 0x36C0 VA: 0x36C0
	private void InitializeStateAnimationParameters() { }

	// RVA: 0x36C1 Offset: 0x36C1 VA: 0x36C1
	private void SetAimAnimationParameters(AimDirection aimDirection) { }

	// RVA: 0x36C2 Offset: 0x36C2 VA: 0x36C2
	private void PlayAttackAnimation() { }

	[IteratorStateMachine(typeof(AnimatePlayer.<PlayAttackAnimationCoroutine>d__18))]
	// RVA: 0x36C3 Offset: 0x36C3 VA: 0x36C3
	private IEnumerator PlayAttackAnimationCoroutine() { }

	// RVA: 0x36C4 Offset: 0x36C4 VA: 0x36C4
	public void .ctor() { }
}

===== C# end =====
*/

// ---- AnimatePlayer$$Awake ----
// C#: void AnimatePlayer__Awake (AnimatePlayer_o* __this, const MethodInfo* method);

void AnimatePlayer__Awake(AnimatePlayer_o *__this,MethodInfo *method)

{
  Player_o *pPVar1;
  DieEvent_o *pDVar2;
  Animator_o *param1;
  
  if (DAT_ram_00664a80 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e74);
    unnamed_function_1099(&DAT_ram_00567ef0);
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a80 = '\x01';
  }
  pPVar1 = (Player_o *)unnamed_function_65370(__this,DAT_ram_00567ef0);
  __this->player = pPVar1;
  param1 = pPVar1->animator;
  if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45420(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x18),1,0);
  pDVar2 = (DieEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e74);
  __this->dieEvent = pDVar2;
  return;
}

// ---- AnimatePlayer$$OnEnable ----
// C#: void AnimatePlayer__OnEnable (AnimatePlayer_o* __this, const MethodInfo* method);

void AnimatePlayer__OnEnable(AnimatePlayer_o *__this,MethodInfo *method)

{
  bool bVar1;
  Action_o *pAVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  Action_o *pAVar6;
  System_Action_IdleEvent__o *value;
  System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *value_00;
  int iVar7;
  AnimateEvent_o *pAVar8;
  IdleEvent_o *__this_00;
  MovementByVelocityEvent_o *__this_01;
  AttackEvent_o *pAVar9;
  DestroyedEvent_o *pDVar10;
  DieEvent_o *pDVar11;
  undefined4 uVar12;
  
  if (DAT_ram_00664a81 == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566dd4);
    unnamed_function_1099(&DAT_ram_00566dd8);
    unnamed_function_1099(&DAT_ram_00566ddc);
    unnamed_function_1099(&DAT_ram_00566de0);
    unnamed_function_1099(&DAT_ram_00566de4);
    unnamed_function_1099(&DAT_ram_00566de8);
    unnamed_function_1099(&DAT_ram_00566dec);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664a81 = '\x01';
  }
  pAVar8 = __this->player->animateEvent;
  uVar4 = unnamed_function_95402(System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
  unnamed_function_60334(uVar4,__this,DAT_ram_00566dd4,0);
  if (DAT_ram_00664a7c == '\0') {
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    DAT_ram_00664a7c = '\x01';
  }
  pAVar2 = pAVar8->OnAnimate;
  do {
    iVar3 = 0;
    iVar5 = unnamed_function_85158(pAVar2,uVar4,0);
    uVar12 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
    if ((iVar5 != 0) &&
       (iVar3 = unnamed_function_1112(iVar5,System_Action_AnimateEvent__AnimateEventArgs__TypeInfo),
       iVar3 == 0)) {
      unnamed_function_1116(iVar5,uVar12);
      do {
        halt_trap();
      } while( true );
    }
    pAVar6 = (Action_o *)unnamed_function_1144(&pAVar8->OnAnimate,iVar3,pAVar2);
    bVar1 = pAVar2 != pAVar6;
    pAVar2 = pAVar6;
  } while (bVar1);
  __this_00 = __this->player->idleEvent;
  value = (System_Action_IdleEvent__o *)unnamed_function_95402(System_Action_IdleEvent__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00566de8,0);
  IdleEvent__add_OnIdle(__this_00,value,(MethodInfo *)0x0);
  __this_01 = __this->player->movementByVelocityEvent;
  value_00 = (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *)
             unnamed_function_95402
                       (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
  unnamed_function_60334(value_00,__this,DAT_ram_00566dec,0);
  MovementByVelocityEvent__add_OnMovementByVelocity(__this_01,value_00,(MethodInfo *)0x0);
  pAVar9 = __this->player->attackEvent;
  uVar4 = unnamed_function_95402(System_Action_AttackEvent__TypeInfo);
  unnamed_function_60074(uVar4,__this,DAT_ram_00566dd8,0);
  if (DAT_ram_00664a8d == '\0') {
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    DAT_ram_00664a8d = '\x01';
  }
  pAVar2 = pAVar9->OnAttack;
  do {
    iVar3 = 0;
    iVar5 = unnamed_function_85158(pAVar2,uVar4,0);
    uVar12 = System_Action_AttackEvent__TypeInfo;
    if ((iVar5 != 0) &&
       (iVar3 = unnamed_function_1112(iVar5,System_Action_AttackEvent__TypeInfo), iVar3 == 0)) {
      unnamed_function_1116(iVar5,uVar12);
      do {
        halt_trap();
      } while( true );
    }
    pAVar6 = (Action_o *)unnamed_function_1144(&pAVar9->OnAttack,iVar3,pAVar2);
    bVar1 = pAVar2 != pAVar6;
    pAVar2 = pAVar6;
  } while (bVar1);
  pDVar10 = __this->player->destroyedEvent;
  uVar4 = unnamed_function_95402(System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
  unnamed_function_60334(uVar4,__this,DAT_ram_00566ddc,0);
  if (DAT_ram_00664b34 == '\0') {
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    DAT_ram_00664b34 = '\x01';
  }
  pAVar2 = pDVar10->OnDestroyed;
  do {
    iVar3 = 0;
    iVar5 = unnamed_function_85158(pAVar2,uVar4,0);
    uVar12 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
    if ((iVar5 != 0) &&
       (iVar3 = unnamed_function_1112
                          (iVar5,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo),
       iVar3 == 0)) {
      unnamed_function_1116(iVar5,uVar12);
      do {
        halt_trap();
      } while( true );
    }
    pAVar6 = (Action_o *)unnamed_function_1144(&pDVar10->OnDestroyed,iVar3,pAVar2);
    bVar1 = pAVar2 != pAVar6;
    pAVar2 = pAVar6;
  } while (bVar1);
  pDVar11 = __this->dieEvent;
  uVar4 = unnamed_function_95402(System_Action_DieEvent__TypeInfo);
  unnamed_function_60074(uVar4,__this,DAT_ram_00566de0,0);
  if (DAT_ram_00664b37 == '\0') {
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    DAT_ram_00664b37 = '\x01';
  }
  pAVar2 = pDVar11->OnDie;
  do {
    iVar3 = 0;
    iVar5 = unnamed_function_85158(pAVar2,uVar4,0);
    uVar12 = System_Action_DieEvent__TypeInfo;
    if ((iVar5 != 0) &&
       (iVar3 = unnamed_function_1112(iVar5,System_Action_DieEvent__TypeInfo), iVar3 == 0)) {
      unnamed_function_1116(iVar5,uVar12);
      do {
        halt_trap();
      } while( true );
    }
    pAVar6 = (Action_o *)unnamed_function_1144(&pDVar11->OnDie,iVar3,pAVar2);
    bVar1 = pAVar2 != pAVar6;
    pAVar2 = pAVar6;
  } while (bVar1);
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar5 = **(int **)(iVar3 + 0x5c);
  uVar12 = *(undefined4 *)(iVar5 + 0x20);
  uVar4 = unnamed_function_95402(System_Action_GameState__TypeInfo);
  unnamed_function_60038(uVar4,__this,DAT_ram_00566de4,0);
  iVar3 = unnamed_function_85158(uVar12,uVar4,0);
  uVar4 = System_Action_GameState__TypeInfo;
  if (iVar3 != 0) {
    iVar7 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
    if (iVar7 == 0) {
      unnamed_function_1116(iVar3,uVar4);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar5 + 0x20) = iVar7;
    uVar4 = System_Action_GameState__TypeInfo;
    iVar5 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
    if (iVar5 != 0) {
      return;
    }
    unnamed_function_1116(iVar3,uVar4);
    do {
      halt_trap();
    } while( true );
  }
  *(undefined4 *)(iVar5 + 0x20) = 0;
  return;
}

// ---- AnimatePlayer$$OnDisable ----
// C#: void AnimatePlayer__OnDisable (AnimatePlayer_o* __this, const MethodInfo* method);

void AnimatePlayer__OnDisable(AnimatePlayer_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 uVar2;
  Action_o *pAVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  Action_o *pAVar7;
  System_Action_IdleEvent__o *value;
  System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *value_00;
  AnimateEvent_o *pAVar8;
  IdleEvent_o *__this_00;
  MovementByVelocityEvent_o *__this_01;
  AttackEvent_o *pAVar9;
  DieEvent_o *pDVar10;
  DestroyedEvent_o *pDVar11;
  
  if (DAT_ram_00664a82 == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566dd4);
    unnamed_function_1099(&DAT_ram_00566dd8);
    unnamed_function_1099(&DAT_ram_00566ddc);
    unnamed_function_1099(&DAT_ram_00566de0);
    unnamed_function_1099(&DAT_ram_00566de8);
    unnamed_function_1099(&DAT_ram_00566dec);
    DAT_ram_00664a82 = '\x01';
  }
  pAVar8 = __this->player->animateEvent;
  uVar5 = unnamed_function_95402(System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
  unnamed_function_60334(uVar5,__this,DAT_ram_00566dd4,0);
  if (DAT_ram_00664a7d == '\0') {
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    DAT_ram_00664a7d = '\x01';
  }
  pAVar3 = pAVar8->OnAnimate;
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85160(pAVar3,uVar5,0);
    uVar2 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
    if ((iVar6 != 0) &&
       (iVar4 = unnamed_function_1112(iVar6,System_Action_AnimateEvent__AnimateEventArgs__TypeInfo),
       iVar4 == 0)) break;
    pAVar7 = (Action_o *)unnamed_function_1144(&pAVar8->OnAnimate,iVar4,pAVar3);
    bVar1 = pAVar3 == pAVar7;
    pAVar3 = pAVar7;
    if (bVar1) {
      __this_00 = __this->player->idleEvent;
      value = (System_Action_IdleEvent__o *)
              unnamed_function_95402(System_Action_IdleEvent__TypeInfo);
      unnamed_function_60074(value,__this,DAT_ram_00566de8,0);
      IdleEvent__remove_OnIdle(__this_00,value,(MethodInfo *)0x0);
      __this_01 = __this->player->movementByVelocityEvent;
      value_00 = (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *)
                 unnamed_function_95402
                           (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo)
      ;
      unnamed_function_60334(value_00,__this,DAT_ram_00566dec,0);
      MovementByVelocityEvent__remove_OnMovementByVelocity(__this_01,value_00,(MethodInfo *)0x0);
      pAVar9 = __this->player->attackEvent;
      uVar5 = unnamed_function_95402(System_Action_AttackEvent__TypeInfo);
      unnamed_function_60074(uVar5,__this,DAT_ram_00566dd8,0);
      if (DAT_ram_00664a8e == '\0') {
        unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
        DAT_ram_00664a8e = '\x01';
      }
      pAVar3 = pAVar9->OnAttack;
      while( true ) {
        iVar4 = 0;
        iVar6 = unnamed_function_85160(pAVar3,uVar5,0);
        uVar2 = System_Action_AttackEvent__TypeInfo;
        if ((iVar6 != 0) &&
           (iVar4 = unnamed_function_1112(iVar6,System_Action_AttackEvent__TypeInfo), iVar4 == 0))
        break;
        pAVar7 = (Action_o *)unnamed_function_1144(&pAVar9->OnAttack,iVar4,pAVar3);
        bVar1 = pAVar3 == pAVar7;
        pAVar3 = pAVar7;
        if (bVar1) {
          pDVar10 = __this->dieEvent;
          uVar5 = unnamed_function_95402(System_Action_DieEvent__TypeInfo);
          unnamed_function_60074(uVar5,__this,DAT_ram_00566de0,0);
          if (DAT_ram_00664b38 == '\0') {
            unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
            DAT_ram_00664b38 = '\x01';
          }
          pAVar3 = pDVar10->OnDie;
          while( true ) {
            iVar4 = 0;
            iVar6 = unnamed_function_85160(pAVar3,uVar5,0);
            uVar2 = System_Action_DieEvent__TypeInfo;
            if ((iVar6 != 0) &&
               (iVar4 = unnamed_function_1112(iVar6,System_Action_DieEvent__TypeInfo), iVar4 == 0))
            break;
            pAVar7 = (Action_o *)unnamed_function_1144(&pDVar10->OnDie,iVar4,pAVar3);
            bVar1 = pAVar3 == pAVar7;
            pAVar3 = pAVar7;
            if (bVar1) {
              pDVar11 = __this->player->destroyedEvent;
              uVar5 = unnamed_function_95402
                                (System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
              unnamed_function_60334(uVar5,__this,DAT_ram_00566ddc,0);
              if (DAT_ram_00664b35 == '\0') {
                unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
                DAT_ram_00664b35 = '\x01';
              }
              pAVar3 = pDVar11->OnDestroyed;
              while( true ) {
                iVar4 = 0;
                iVar6 = unnamed_function_85160(pAVar3,uVar5,0);
                uVar2 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
                if ((iVar6 != 0) &&
                   (iVar4 = unnamed_function_1112
                                      (iVar6,
                                       System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo),
                   iVar4 == 0)) break;
                pAVar7 = (Action_o *)unnamed_function_1144(&pDVar11->OnDestroyed,iVar4,pAVar3);
                bVar1 = pAVar3 == pAVar7;
                pAVar3 = pAVar7;
                if (bVar1) {
                  return;
                }
              }
              unnamed_function_1116(iVar6,uVar2);
              do {
                halt_trap();
              } while( true );
            }
          }
          unnamed_function_1116(iVar6,uVar2);
          do {
            halt_trap();
          } while( true );
        }
      }
      unnamed_function_1116(iVar6,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  unnamed_function_1116(iVar6,uVar2);
  do {
    halt_trap();
  } while( true );
}

// ---- AnimatePlayer$$GameStateChanged_OnPlayer ----
// C#: void AnimatePlayer__GameStateChanged_OnPlayer (AnimatePlayer_o* __this, int32_t gameState, const MethodInfo* method);

void AnimatePlayer__GameStateChanged_OnPlayer
               (AnimatePlayer_o *__this,GameState gameState,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *param1;
  Action_o *pAVar2;
  int iVar3;
  System_Action_IdleEvent__o *pSVar4;
  System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *pSVar5;
  undefined4 uVar6;
  int iVar7;
  Action_o *pAVar8;
  MethodInfo *method_00;
  int iVar9;
  IdleEvent_o *pIVar10;
  MovementByVelocityEvent_o *pMVar11;
  AttackEvent_o *pAVar12;
  DestroyedEvent_o *pDVar13;
  Animator_o *param1_00;
  undefined4 uVar14;
  
  if (DAT_ram_00664a83 == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566dd8);
    unnamed_function_1099(&DAT_ram_00566ddc);
    unnamed_function_1099(&DAT_ram_00566de4);
    unnamed_function_1099(&DAT_ram_00566de8);
    unnamed_function_1099(&DAT_ram_00566dec);
    unnamed_function_1099(&Settings_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664a83 = '\x01';
  }
  if (gameState == Intro) {
    pIVar10 = __this->player->idleEvent;
    pSVar4 = (System_Action_IdleEvent__o *)unnamed_function_95402(System_Action_IdleEvent__TypeInfo)
    ;
    unnamed_function_60074(pSVar4,__this,DAT_ram_00566de8,0);
    IdleEvent__remove_OnIdle(pIVar10,pSVar4,(MethodInfo *)0x0);
    pMVar11 = __this->player->movementByVelocityEvent;
    pSVar5 = (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *)
             unnamed_function_95402
                       (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_60334(pSVar5,__this,DAT_ram_00566dec,0);
    MovementByVelocityEvent__remove_OnMovementByVelocity(pMVar11,pSVar5,(MethodInfo *)0x0);
    pAVar12 = __this->player->attackEvent;
    uVar6 = unnamed_function_95402(System_Action_AttackEvent__TypeInfo);
    unnamed_function_60074(uVar6,__this,DAT_ram_00566dd8,0);
    if (DAT_ram_00664a8e == '\0') {
      unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
      DAT_ram_00664a8e = '\x01';
    }
    pAVar2 = pAVar12->OnAttack;
    while( true ) {
      iVar3 = 0;
      iVar7 = unnamed_function_85160(pAVar2,uVar6,0);
      uVar14 = System_Action_AttackEvent__TypeInfo;
      if ((iVar7 != 0) &&
         (iVar3 = unnamed_function_1112(iVar7,System_Action_AttackEvent__TypeInfo), iVar3 == 0))
      break;
      pAVar8 = (Action_o *)unnamed_function_1144(&pAVar12->OnAttack,iVar3,pAVar2);
      bVar1 = pAVar2 == pAVar8;
      pAVar2 = pAVar8;
      if (bVar1) {
        pDVar13 = __this->player->destroyedEvent;
        uVar6 = unnamed_function_95402(System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
        unnamed_function_60334(uVar6,__this,DAT_ram_00566ddc,0);
        if (DAT_ram_00664b35 == '\0') {
          unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
          DAT_ram_00664b35 = '\x01';
        }
        param1 = (MethodInfo *)pDVar13->OnDestroyed;
        while( true ) {
          iVar3 = 0;
          iVar7 = unnamed_function_85160(param1,uVar6,0);
          uVar14 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
          if ((iVar7 != 0) &&
             (iVar3 = unnamed_function_1112
                                (iVar7,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo),
             iVar3 == 0)) break;
          method_00 = (MethodInfo *)unnamed_function_1144(&pDVar13->OnDestroyed,iVar3,param1);
          bVar1 = param1 == method_00;
          param1 = method_00;
          if (bVar1) {
            AnimatePlayer__InitializeStateAnimationParameters(__this,method_00);
            param1_00 = __this->player->animator;
            if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(Settings_TypeInfo);
            }
            unnamed_function_45420
                      (param1_00,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0xc),1,0);
            return;
          }
        }
        unnamed_function_1116(iVar7,uVar14);
        do {
          halt_trap();
        } while( true );
      }
    }
    unnamed_function_1116(iVar7,uVar14);
    do {
      halt_trap();
    } while( true );
  }
  if ((gameState != Begin) && (gameState == Instruct)) {
    pIVar10 = __this->player->idleEvent;
    pSVar4 = (System_Action_IdleEvent__o *)unnamed_function_95402(System_Action_IdleEvent__TypeInfo)
    ;
    unnamed_function_60074(pSVar4,__this,DAT_ram_00566de8,0);
    IdleEvent__add_OnIdle(pIVar10,pSVar4,(MethodInfo *)0x0);
    pMVar11 = __this->player->movementByVelocityEvent;
    pSVar5 = (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *)
             unnamed_function_95402
                       (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_60334(pSVar5,__this,DAT_ram_00566dec,0);
    MovementByVelocityEvent__add_OnMovementByVelocity(pMVar11,pSVar5,(MethodInfo *)0x0);
    pAVar12 = __this->player->attackEvent;
    uVar6 = unnamed_function_95402(System_Action_AttackEvent__TypeInfo);
    unnamed_function_60074(uVar6,__this,DAT_ram_00566dd8,0);
    if (DAT_ram_00664a8d == '\0') {
      unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
      DAT_ram_00664a8d = '\x01';
    }
    pAVar2 = pAVar12->OnAttack;
    do {
      iVar3 = 0;
      iVar7 = unnamed_function_85158(pAVar2,uVar6,0);
      uVar14 = System_Action_AttackEvent__TypeInfo;
      if ((iVar7 != 0) &&
         (iVar3 = unnamed_function_1112(iVar7,System_Action_AttackEvent__TypeInfo), iVar3 == 0)) {
        unnamed_function_1116(iVar7,uVar14);
        do {
          halt_trap();
        } while( true );
      }
      pAVar8 = (Action_o *)unnamed_function_1144(&pAVar12->OnAttack,iVar3,pAVar2);
      bVar1 = pAVar2 != pAVar8;
      pAVar2 = pAVar8;
    } while (bVar1);
    pDVar13 = __this->player->destroyedEvent;
    uVar6 = unnamed_function_95402(System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    unnamed_function_60334(uVar6,__this,DAT_ram_00566ddc,0);
    if (DAT_ram_00664b34 == '\0') {
      unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
      DAT_ram_00664b34 = '\x01';
    }
    pAVar2 = pDVar13->OnDestroyed;
    do {
      iVar3 = 0;
      iVar7 = unnamed_function_85158(pAVar2,uVar6,0);
      uVar14 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
      if ((iVar7 != 0) &&
         (iVar3 = unnamed_function_1112
                            (iVar7,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo),
         iVar3 == 0)) {
        unnamed_function_1116(iVar7,uVar14);
        do {
          halt_trap();
        } while( true );
      }
      pAVar8 = (Action_o *)unnamed_function_1144(&pDVar13->OnDestroyed,iVar3,pAVar2);
      bVar1 = pAVar2 != pAVar8;
      pAVar2 = pAVar8;
    } while (bVar1);
    iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar7 = **(int **)(iVar3 + 0x5c);
    uVar14 = *(undefined4 *)(iVar7 + 0x20);
    uVar6 = unnamed_function_95402(System_Action_GameState__TypeInfo);
    unnamed_function_60038(uVar6,__this,DAT_ram_00566de4,0);
    iVar3 = unnamed_function_85160(uVar14,uVar6,0);
    uVar6 = System_Action_GameState__TypeInfo;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar7 + 0x20) = 0;
      return;
    }
    iVar9 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
    if (iVar9 == 0) {
      unnamed_function_1116(iVar3,uVar6);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar7 + 0x20) = iVar9;
    uVar6 = System_Action_GameState__TypeInfo;
    iVar7 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
    if (iVar7 == 0) {
      unnamed_function_1116(iVar3,uVar6);
      do {
        halt_trap();
      } while( true );
    }
  }
  return;
}

// ---- AnimatePlayer$$AnimatePlayer_OnAnimate ----
// C#: void AnimatePlayer__AnimatePlayer_OnAnimate (AnimatePlayer_o* __this, AnimateEvent_o* animateEvent, AnimateEventArgs_o* animateEventArgs, const MethodInfo* method);

void AnimatePlayer__AnimatePlayer_OnAnimate
               (AnimatePlayer_o *__this,AnimateEvent_o *animateEvent,
               AnimateEventArgs_o *animateEventArgs,MethodInfo *method)

{
  AnimatePlayer__InitializeAimAnimationParameters(__this,(MethodInfo *)__this);
  AnimatePlayer__SetAimAnimationParameters
            (__this,animateEventArgs->aimDirection,(MethodInfo *)__this);
  return;
}

// ---- AnimatePlayer$$IdleEvent_OnIdle ----
// C#: void AnimatePlayer__IdleEvent_OnIdle (AnimatePlayer_o* __this, IdleEvent_o* idleEvent, const MethodInfo* method);

void AnimatePlayer__IdleEvent_OnIdle
               (AnimatePlayer_o *__this,IdleEvent_o *idleEvent,MethodInfo *method)

{
  Animator_o *param1;
  
  if (DAT_ram_00664a84 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a84 = '\x01';
  }
  if (__this->attackAnimationCoroutine == (Coroutine_o *)0x0) {
    AnimatePlayer__InitializeStateAnimationParameters(__this,(MethodInfo *)__this);
    param1 = __this->player->animator;
    if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(Settings_TypeInfo);
    }
    unnamed_function_45420(param1,**(undefined4 **)(Settings_TypeInfo + 0x5c),1,0);
  }
  return;
}

// ---- AnimatePlayer$$MovementByVelocityEvent_OnMovementByVelocity ----
// C#: void AnimatePlayer__MovementByVelocityEvent_OnMovementByVelocity (AnimatePlayer_o* __this, MovementByVelocityEvent_o* movementByVelocityEvent, MovementByVelocityArgs_o* movementByVelocityArgs, const MethodInfo* method);

void AnimatePlayer__MovementByVelocityEvent_OnMovementByVelocity
               (AnimatePlayer_o *__this,MovementByVelocityEvent_o *movementByVelocityEvent,
               MovementByVelocityArgs_o *movementByVelocityArgs,MethodInfo *method)

{
  Animator_o *param1;
  
  if (DAT_ram_00664a85 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a85 = '\x01';
  }
  if (__this->attackAnimationCoroutine == (Coroutine_o *)0x0) {
    AnimatePlayer__InitializeStateAnimationParameters(__this,(MethodInfo *)__this);
    param1 = __this->player->animator;
    if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(Settings_TypeInfo);
    }
    unnamed_function_45420(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 4),1,0);
  }
  return;
}

// ---- AnimatePlayer$$DestroyedEvent_OnDestroyed ----
// C#: void AnimatePlayer__DestroyedEvent_OnDestroyed (AnimatePlayer_o* __this, DestroyedEvent_o* destroyedEvent, DestroyedEventArgs_o* destroyedEventArgs, const MethodInfo* method);

void AnimatePlayer__DestroyedEvent_OnDestroyed
               (AnimatePlayer_o *__this,DestroyedEvent_o *destroyedEvent,
               DestroyedEventArgs_o *destroyedEventArgs,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  MethodInfo *param1;
  int param2_00;
  System_Action_IdleEvent__o *value;
  System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *value_00;
  undefined4 param1_00;
  int param1_01;
  MethodInfo *method_00;
  IdleEvent_o *__this_00;
  MovementByVelocityEvent_o *__this_01;
  AttackEvent_o *pAVar2;
  Animator_o *param1_02;
  
  if (DAT_ram_00664a86 == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566dd8);
    unnamed_function_1099(&DAT_ram_00566de8);
    unnamed_function_1099(&DAT_ram_00566dec);
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a86 = '\x01';
  }
  __this_00 = __this->player->idleEvent;
  value = (System_Action_IdleEvent__o *)unnamed_function_95402(System_Action_IdleEvent__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00566de8,0);
  IdleEvent__remove_OnIdle(__this_00,value,(MethodInfo *)0x0);
  __this_01 = __this->player->movementByVelocityEvent;
  value_00 = (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *)
             unnamed_function_95402
                       (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
  unnamed_function_60334(value_00,__this,DAT_ram_00566dec,0);
  MovementByVelocityEvent__remove_OnMovementByVelocity(__this_01,value_00,(MethodInfo *)0x0);
  pAVar2 = __this->player->attackEvent;
  param1_00 = unnamed_function_95402(System_Action_AttackEvent__TypeInfo);
  unnamed_function_60074(param1_00,__this,DAT_ram_00566dd8,0);
  if (DAT_ram_00664a8e == '\0') {
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    DAT_ram_00664a8e = '\x01';
  }
  param1 = (MethodInfo *)pAVar2->OnAttack;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_AttackEvent__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112(param1_01,System_Action_AttackEvent__TypeInfo),
       param2_00 == 0)) break;
    method_00 = (MethodInfo *)unnamed_function_1144(&pAVar2->OnAttack,param2_00,param1);
    bVar1 = param1 == method_00;
    param1 = method_00;
    if (bVar1) {
      AnimatePlayer__InitializeStateAnimationParameters(__this,method_00);
      param1_02 = __this->player->animator;
      if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(Settings_TypeInfo);
      }
      unnamed_function_45420
                (param1_02,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0xc),1,0);
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- AnimatePlayer$$AttackEvent_OnAttack ----
// C#: void AnimatePlayer__AttackEvent_OnAttack (AnimatePlayer_o* __this, AttackEvent_o* attackEvent, const MethodInfo* method);

void AnimatePlayer__AttackEvent_OnAttack
               (AnimatePlayer_o *__this,AttackEvent_o *attackEvent,MethodInfo *method)

{
  int param2;
  Coroutine_o *pCVar1;
  Animator_o *param1;
  
  if (DAT_ram_00664a87 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a87 = '\x01';
  }
  AnimatePlayer__InitializeStateAnimationParameters(__this,(MethodInfo *)__this);
  param1 = __this->player->animator;
  if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45420(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 8),1,0);
  if (__this->attackAnimationCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->attackAnimationCoroutine,0);
  }
  if (DAT_ram_00664a8c == '\0') {
    unnamed_function_1099(&AnimatePlayer__PlayAttackAnimationCoroutine_d__18_TypeInfo);
    DAT_ram_00664a8c = '\x01';
  }
  param2 = unnamed_function_95402(AnimatePlayer__PlayAttackAnimationCoroutine_d__18_TypeInfo);
  *(AnimatePlayer_o **)(param2 + 0x10 /* player */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  pCVar1 = (Coroutine_o *)unnamed_function_44725(__this,param2,0);
  __this->attackAnimationCoroutine = pCVar1;
  return;
}

// ---- AnimatePlayer$$DieEvent_OnDie ----
// C#: void AnimatePlayer__DieEvent_OnDie (AnimatePlayer_o* __this, DieEvent_o* dieEvent, const MethodInfo* method);

void AnimatePlayer__DieEvent_OnDie(AnimatePlayer_o *__this,DieEvent_o *dieEvent,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  System_Action_IdleEvent__o *value;
  System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *value_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  IdleEvent_o *__this_00;
  MovementByVelocityEvent_o *__this_01;
  AttackEvent_o *pAVar3;
  
  if (DAT_ram_00664a88 == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566dd8);
    unnamed_function_1099(&DAT_ram_00566de8);
    unnamed_function_1099(&DAT_ram_00566dec);
    DAT_ram_00664a88 = '\x01';
  }
  __this_00 = __this->player->idleEvent;
  value = (System_Action_IdleEvent__o *)unnamed_function_95402(System_Action_IdleEvent__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00566de8,0);
  IdleEvent__add_OnIdle(__this_00,value,(MethodInfo *)0x0);
  __this_01 = __this->player->movementByVelocityEvent;
  value_00 = (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *)
             unnamed_function_95402
                       (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
  unnamed_function_60334(value_00,__this,DAT_ram_00566dec,0);
  MovementByVelocityEvent__add_OnMovementByVelocity(__this_01,value_00,(MethodInfo *)0x0);
  pAVar3 = __this->player->attackEvent;
  param1_00 = unnamed_function_95402(System_Action_AttackEvent__TypeInfo);
  unnamed_function_60074(param1_00,__this,DAT_ram_00566dd8,0);
  if (DAT_ram_00664a8d == '\0') {
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    DAT_ram_00664a8d = '\x01';
  }
  param1 = pAVar3->OnAttack;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_AttackEvent__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112(param1_01,System_Action_AttackEvent__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pAVar3->OnAttack,param2_00,param1);
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

// ---- AnimatePlayer$$InitializeAimAnimationParameters ----
// C#: void AnimatePlayer__InitializeAimAnimationParameters (AnimatePlayer_o* __this, const MethodInfo* method);

void AnimatePlayer__InitializeAimAnimationParameters(AnimatePlayer_o *__this,MethodInfo *method)

{
  Animator_o *param1;
  
  if (DAT_ram_00664a89 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a89 = '\x01';
  }
  param1 = __this->player->animator;
  if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45420(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x10),0,0);
  unnamed_function_45420
            (__this->player->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x1c),0,0
            );
  unnamed_function_45420
            (__this->player->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x20),0,0
            );
  unnamed_function_45420
            (__this->player->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x24),0,0
            );
  unnamed_function_45420
            (__this->player->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x28),0,0
            );
  unnamed_function_45420
            (__this->player->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x18),0,0
            );
  unnamed_function_45420
            (__this->player->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x2c),0,0
            );
  unnamed_function_45420
            (__this->player->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x30),0,0
            );
  return;
}

// ---- AnimatePlayer$$InitializeStateAnimationParameters ----
// C#: void AnimatePlayer__InitializeStateAnimationParameters (AnimatePlayer_o* __this, const MethodInfo* method);

void AnimatePlayer__InitializeStateAnimationParameters(AnimatePlayer_o *__this,MethodInfo *method)

{
  Animator_o *param1;
  
  if (DAT_ram_00664a8a == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a8a = '\x01';
  }
  param1 = __this->player->animator;
  if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45420(param1,**(undefined4 **)(Settings_TypeInfo + 0x5c),0,0);
  unnamed_function_45420
            (__this->player->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 4),0,0);
  unnamed_function_45420
            (__this->player->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 8),0,0);
  unnamed_function_45420
            (__this->player->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0xc),0,0)
  ;
  return;
}

// ---- AnimatePlayer$$SetAimAnimationParameters ----
// C#: void AnimatePlayer__SetAimAnimationParameters (AnimatePlayer_o* __this, int32_t aimDirection, const MethodInfo* method);

/* WARNING: Type propagation algorithm not settling */

void AnimatePlayer__SetAimAnimationParameters
               (AnimatePlayer_o *__this,AimDirection aimDirection,MethodInfo *method)

{
  int iVar1;
  Animator_o *param1;
  int iVar2;
  
  if (DAT_ram_00664a8b == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a8b = '\x01';
  }
  if (aimDirection == Up) {
    param1 = __this->player->animator;
    iVar1 = 0x10;
    iVar2 = *(int *)(Settings_TypeInfo + 0x74);
  }
  else if (aimDirection == UpRight) {
    param1 = __this->player->animator;
    iVar1 = 0x1c;
    iVar2 = *(int *)(Settings_TypeInfo + 0x74);
  }
  else if (aimDirection == UpLeft) {
    param1 = __this->player->animator;
    iVar1 = 0x20;
    iVar2 = *(int *)(Settings_TypeInfo + 0x74);
  }
  else if (aimDirection == Right) {
    param1 = __this->player->animator;
    iVar1 = 0x24;
    iVar2 = *(int *)(Settings_TypeInfo + 0x74);
  }
  else if (aimDirection == Left) {
    param1 = __this->player->animator;
    iVar1 = 0x28;
    iVar2 = *(int *)(Settings_TypeInfo + 0x74);
  }
  else if (aimDirection == Down) {
    param1 = __this->player->animator;
    iVar1 = 0x18;
    iVar2 = *(int *)(Settings_TypeInfo + 0x74);
  }
  else if (aimDirection == DownRight) {
    param1 = __this->player->animator;
    iVar1 = 0x2c;
    iVar2 = *(int *)(Settings_TypeInfo + 0x74);
  }
  else {
    if (aimDirection != DownLeft) {
      return;
    }
    param1 = __this->player->animator;
    iVar1 = 0x30;
    iVar2 = *(int *)(Settings_TypeInfo + 0x74);
  }
  if (iVar2 == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45420(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + iVar1),1,0);
  return;
}

// ---- AnimatePlayer$$PlayAttackAnimation ----
// C#: void AnimatePlayer__PlayAttackAnimation (AnimatePlayer_o* __this, const MethodInfo* method);

void AnimatePlayer__PlayAttackAnimation(AnimatePlayer_o *__this,MethodInfo *method)

{
  int param2;
  Coroutine_o *pCVar1;
  
  if (__this->attackAnimationCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->attackAnimationCoroutine,0);
  }
  if (DAT_ram_00664a8c == '\0') {
    unnamed_function_1099(&AnimatePlayer__PlayAttackAnimationCoroutine_d__18_TypeInfo);
    DAT_ram_00664a8c = '\x01';
  }
  param2 = unnamed_function_95402(AnimatePlayer__PlayAttackAnimationCoroutine_d__18_TypeInfo);
  *(AnimatePlayer_o **)(param2 + 0x10 /* player */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  pCVar1 = (Coroutine_o *)unnamed_function_44725(__this,param2,0);
  __this->attackAnimationCoroutine = pCVar1;
  return;
}

// ---- AnimatePlayer$$PlayAttackAnimationCoroutine ----
// C#: System_Collections_IEnumerator_o* AnimatePlayer__PlayAttackAnimationCoroutine (AnimatePlayer_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
AnimatePlayer__PlayAttackAnimationCoroutine(AnimatePlayer_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664a8c == '\0') {
    unnamed_function_1099(&AnimatePlayer__PlayAttackAnimationCoroutine_d__18_TypeInfo);
    DAT_ram_00664a8c = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(AnimatePlayer__PlayAttackAnimationCoroutine_d__18_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- AnimatePlayer$$.ctor ----
// C#: void AnimatePlayer___ctor (AnimatePlayer_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

