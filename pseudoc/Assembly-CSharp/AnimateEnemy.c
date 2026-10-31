// Assembly-CSharp :: AnimateEnemy
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AnimateEnemy : MonoBehaviour // TypeDefIndex: 5543
{
	// Fields
	private Enemy enemy; // 0x10
	private AimDirection aimDirection; // 0x14
	private Coroutine attackAnimationCoroutine; // 0x18

	// Methods

	// RVA: 0x369D Offset: 0x369D VA: 0x369D
	private void Awake() { }

	// RVA: 0x369E Offset: 0x369E VA: 0x369E
	private void Start() { }

	// RVA: 0x369F Offset: 0x369F VA: 0x369F
	private void OnDisable() { }

	// RVA: 0x36A0 Offset: 0x36A0 VA: 0x36A0
	private void MoveByEnemyAIEvent_OnMoveByEnemyAI(MoveByEnemyAIEvent moveByEnemyAIEvent) { }

	// RVA: 0x36A1 Offset: 0x36A1 VA: 0x36A1
	private void IdleEvent_OnIdle(IdleEvent idleEvent) { }

	// RVA: 0x36A2 Offset: 0x36A2 VA: 0x36A2
	private void AttackEvent_OnAttack(AttackEvent attackEvent) { }

	// RVA: 0x36A3 Offset: 0x36A3 VA: 0x36A3
	private void PlayAttackAnimation() { }

	[IteratorStateMachine(typeof(AnimateEnemy.<PlayAttackAnimationCoroutine>d__10))]
	// RVA: 0x36A4 Offset: 0x36A4 VA: 0x36A4
	private IEnumerator PlayAttackAnimationCoroutine() { }

	// RVA: 0x36A5 Offset: 0x36A5 VA: 0x36A5
	private void InitializeStateAnimationParameters() { }

	// RVA: 0x36A6 Offset: 0x36A6 VA: 0x36A6
	private void AnimateEnemy_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs) { }

	// RVA: 0x36A7 Offset: 0x36A7 VA: 0x36A7
	private void InitializeAnimationParameters() { }

	// RVA: 0x36A8 Offset: 0x36A8 VA: 0x36A8
	private void SetAimAnimationParameters(AimDirection aimDirection) { }

	// RVA: 0x36A9 Offset: 0x36A9 VA: 0x36A9
	public void .ctor() { }
}

===== C# end =====
*/

// ---- AnimateEnemy$$Awake ----
// C#: void AnimateEnemy__Awake (AnimateEnemy_o* __this, const MethodInfo* method);

void AnimateEnemy__Awake(AnimateEnemy_o *__this,MethodInfo *method)

{
  Enemy_o *pEVar1;
  
  if (DAT_ram_00664a72 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e78);
    DAT_ram_00664a72 = '\x01';
  }
  pEVar1 = (Enemy_o *)unnamed_function_65370(__this,DAT_ram_00567e78);
  __this->enemy = pEVar1;
  return;
}

// ---- AnimateEnemy$$Start ----
// C#: void AnimateEnemy__Start (AnimateEnemy_o* __this, const MethodInfo* method);

void AnimateEnemy__Start(AnimateEnemy_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 uVar2;
  Action_o *pAVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  Action_o *pAVar7;
  System_Action_IdleEvent__o *value;
  System_Action_MoveByEnemyAIEvent__o *value_00;
  AnimateEvent_o *pAVar8;
  IdleEvent_o *__this_00;
  MoveByEnemyAIEvent_o *__this_01;
  AttackEvent_o *pAVar9;
  
  if (DAT_ram_00664a73 == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    unnamed_function_1099(&System_Action_MoveByEnemyAIEvent__TypeInfo);
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566dc4);
    unnamed_function_1099(&DAT_ram_00566dc8);
    unnamed_function_1099(&DAT_ram_00566dcc);
    unnamed_function_1099(&DAT_ram_00566dd0);
    DAT_ram_00664a73 = '\x01';
  }
  pAVar8 = __this->enemy->animateEvent;
  uVar5 = unnamed_function_95402(System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
  unnamed_function_60334(uVar5,__this,DAT_ram_00566dc4,0);
  if (DAT_ram_00664a7c == '\0') {
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    DAT_ram_00664a7c = '\x01';
  }
  pAVar3 = pAVar8->OnAnimate;
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85158(pAVar3,uVar5,0);
    uVar2 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
    if ((iVar6 != 0) &&
       (iVar4 = unnamed_function_1112(iVar6,System_Action_AnimateEvent__AnimateEventArgs__TypeInfo),
       iVar4 == 0)) break;
    pAVar7 = (Action_o *)unnamed_function_1144(&pAVar8->OnAnimate,iVar4,pAVar3);
    bVar1 = pAVar3 == pAVar7;
    pAVar3 = pAVar7;
    if (bVar1) {
      __this_00 = __this->enemy->idleEvent;
      value = (System_Action_IdleEvent__o *)
              unnamed_function_95402(System_Action_IdleEvent__TypeInfo);
      unnamed_function_60074(value,__this,DAT_ram_00566dcc,0);
      IdleEvent__add_OnIdle(__this_00,value,(MethodInfo *)0x0);
      __this_01 = __this->enemy->moveByEnemyAIEvent;
      value_00 = (System_Action_MoveByEnemyAIEvent__o *)
                 unnamed_function_95402(System_Action_MoveByEnemyAIEvent__TypeInfo);
      unnamed_function_60074(value_00,__this,DAT_ram_00566dd0,0);
      MoveByEnemyAIEvent__add_OnMoveByEnemyAI(__this_01,value_00,(MethodInfo *)0x0);
      pAVar9 = __this->enemy->attackEvent;
      uVar5 = unnamed_function_95402(System_Action_AttackEvent__TypeInfo);
      unnamed_function_60074(uVar5,__this,DAT_ram_00566dc8,0);
      if (DAT_ram_00664a8d == '\0') {
        unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
        DAT_ram_00664a8d = '\x01';
      }
      pAVar3 = pAVar9->OnAttack;
      while( true ) {
        iVar4 = 0;
        iVar6 = unnamed_function_85158(pAVar3,uVar5,0);
        uVar2 = System_Action_AttackEvent__TypeInfo;
        if ((iVar6 != 0) &&
           (iVar4 = unnamed_function_1112(iVar6,System_Action_AttackEvent__TypeInfo), iVar4 == 0))
        break;
        pAVar7 = (Action_o *)unnamed_function_1144(&pAVar9->OnAttack,iVar4,pAVar3);
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

// ---- AnimateEnemy$$OnDisable ----
// C#: void AnimateEnemy__OnDisable (AnimateEnemy_o* __this, const MethodInfo* method);

void AnimateEnemy__OnDisable(AnimateEnemy_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 uVar2;
  Action_o *pAVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  Action_o *pAVar7;
  System_Action_IdleEvent__o *value;
  System_Action_MoveByEnemyAIEvent__o *value_00;
  AnimateEvent_o *pAVar8;
  IdleEvent_o *__this_00;
  MoveByEnemyAIEvent_o *__this_01;
  AttackEvent_o *pAVar9;
  
  if (DAT_ram_00664a74 == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    unnamed_function_1099(&System_Action_MoveByEnemyAIEvent__TypeInfo);
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00566dc4);
    unnamed_function_1099(&DAT_ram_00566dc8);
    unnamed_function_1099(&DAT_ram_00566dcc);
    unnamed_function_1099(&DAT_ram_00566dd0);
    DAT_ram_00664a74 = '\x01';
  }
  pAVar8 = __this->enemy->animateEvent;
  uVar5 = unnamed_function_95402(System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
  unnamed_function_60334(uVar5,__this,DAT_ram_00566dc4,0);
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
      __this_00 = __this->enemy->idleEvent;
      value = (System_Action_IdleEvent__o *)
              unnamed_function_95402(System_Action_IdleEvent__TypeInfo);
      unnamed_function_60074(value,__this,DAT_ram_00566dcc,0);
      IdleEvent__remove_OnIdle(__this_00,value,(MethodInfo *)0x0);
      __this_01 = __this->enemy->moveByEnemyAIEvent;
      value_00 = (System_Action_MoveByEnemyAIEvent__o *)
                 unnamed_function_95402(System_Action_MoveByEnemyAIEvent__TypeInfo);
      unnamed_function_60074(value_00,__this,DAT_ram_00566dd0,0);
      MoveByEnemyAIEvent__remove_OnMoveByEnemyAI(__this_01,value_00,(MethodInfo *)0x0);
      pAVar9 = __this->enemy->attackEvent;
      uVar5 = unnamed_function_95402(System_Action_AttackEvent__TypeInfo);
      unnamed_function_60074(uVar5,__this,DAT_ram_00566dc8,0);
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

// ---- AnimateEnemy$$MoveByEnemyAIEvent_OnMoveByEnemyAI ----
// C#: void AnimateEnemy__MoveByEnemyAIEvent_OnMoveByEnemyAI (AnimateEnemy_o* __this, MoveByEnemyAIEvent_o* moveByEnemyAIEvent, const MethodInfo* method);

void AnimateEnemy__MoveByEnemyAIEvent_OnMoveByEnemyAI
               (AnimateEnemy_o *__this,MoveByEnemyAIEvent_o *moveByEnemyAIEvent,MethodInfo *method)

{
  Animator_o *param1;
  
  if (DAT_ram_00664a75 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a75 = '\x01';
  }
  if ((__this->attackAnimationCoroutine == (Coroutine_o *)0x0) &&
     (__this->enemy->animationEnemyType - IdleAndRun < 2)) {
    AnimateEnemy__InitializeStateAnimationParameters(__this,(MethodInfo *)__this);
    param1 = __this->enemy->animator;
    if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(Settings_TypeInfo);
    }
    unnamed_function_45420(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 4),1,0);
  }
  return;
}

// ---- AnimateEnemy$$IdleEvent_OnIdle ----
// C#: void AnimateEnemy__IdleEvent_OnIdle (AnimateEnemy_o* __this, IdleEvent_o* idleEvent, const MethodInfo* method);

void AnimateEnemy__IdleEvent_OnIdle
               (AnimateEnemy_o *__this,IdleEvent_o *idleEvent,MethodInfo *method)

{
  Animator_o *param1;
  
  if (DAT_ram_00664a76 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a76 = '\x01';
  }
  if (__this->enemy->animationEnemyType - IdleAndRun < 2) {
    AnimateEnemy__InitializeStateAnimationParameters(__this,(MethodInfo *)__this);
    param1 = __this->enemy->animator;
    if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(Settings_TypeInfo);
    }
    unnamed_function_45420(param1,**(undefined4 **)(Settings_TypeInfo + 0x5c),1,0);
  }
  return;
}

// ---- AnimateEnemy$$AttackEvent_OnAttack ----
// C#: void AnimateEnemy__AttackEvent_OnAttack (AnimateEnemy_o* __this, AttackEvent_o* attackEvent, const MethodInfo* method);

void AnimateEnemy__AttackEvent_OnAttack
               (AnimateEnemy_o *__this,AttackEvent_o *attackEvent,MethodInfo *method)

{
  int param2;
  Coroutine_o *pCVar1;
  Animator_o *param1;
  
  if (DAT_ram_00664a77 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a77 = '\x01';
  }
  if (__this->enemy->animationEnemyType == IdleRunAndAttack) {
    if (__this->attackAnimationCoroutine != (Coroutine_o *)0x0) {
      unnamed_function_44730(__this,__this->attackAnimationCoroutine,0);
    }
    if (DAT_ram_00664a78 == '\0') {
      unnamed_function_1099(&AnimateEnemy__PlayAttackAnimationCoroutine_d__10_TypeInfo);
      DAT_ram_00664a78 = '\x01';
    }
    param2 = unnamed_function_95402(AnimateEnemy__PlayAttackAnimationCoroutine_d__10_TypeInfo);
    *(AnimateEnemy_o **)(param2 + 0x10 /* enemy */) = __this;
    *(undefined4 *)(param2 + 8) = 0;
    pCVar1 = (Coroutine_o *)unnamed_function_44725(__this,param2,0);
    __this->attackAnimationCoroutine = pCVar1;
    AnimateEnemy__InitializeStateAnimationParameters(__this,(MethodInfo *)__this);
    param1 = __this->enemy->animator;
    if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(Settings_TypeInfo);
    }
    unnamed_function_45425(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 8),0);
  }
  return;
}

// ---- AnimateEnemy$$PlayAttackAnimation ----
// C#: void AnimateEnemy__PlayAttackAnimation (AnimateEnemy_o* __this, const MethodInfo* method);

void AnimateEnemy__PlayAttackAnimation(AnimateEnemy_o *__this,MethodInfo *method)

{
  int param2;
  Coroutine_o *pCVar1;
  
  if (__this->attackAnimationCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->attackAnimationCoroutine,0);
  }
  if (DAT_ram_00664a78 == '\0') {
    unnamed_function_1099(&AnimateEnemy__PlayAttackAnimationCoroutine_d__10_TypeInfo);
    DAT_ram_00664a78 = '\x01';
  }
  param2 = unnamed_function_95402(AnimateEnemy__PlayAttackAnimationCoroutine_d__10_TypeInfo);
  *(AnimateEnemy_o **)(param2 + 0x10 /* enemy */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  pCVar1 = (Coroutine_o *)unnamed_function_44725(__this,param2,0);
  __this->attackAnimationCoroutine = pCVar1;
  return;
}

// ---- AnimateEnemy$$PlayAttackAnimationCoroutine ----
// C#: System_Collections_IEnumerator_o* AnimateEnemy__PlayAttackAnimationCoroutine (AnimateEnemy_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
AnimateEnemy__PlayAttackAnimationCoroutine(AnimateEnemy_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664a78 == '\0') {
    unnamed_function_1099(&AnimateEnemy__PlayAttackAnimationCoroutine_d__10_TypeInfo);
    DAT_ram_00664a78 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(AnimateEnemy__PlayAttackAnimationCoroutine_d__10_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- AnimateEnemy$$InitializeStateAnimationParameters ----
// C#: void AnimateEnemy__InitializeStateAnimationParameters (AnimateEnemy_o* __this, const MethodInfo* method);

void AnimateEnemy__InitializeStateAnimationParameters(AnimateEnemy_o *__this,MethodInfo *method)

{
  Animator_o *param1;
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_ram_00664a79 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a79 = '\x01';
  }
  param1 = __this->enemy->animator;
  if (__this->enemy->animationEnemyType == IdleRunAndAttack) {
    if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(Settings_TypeInfo);
    }
    unnamed_function_45420(param1,**(undefined4 **)(Settings_TypeInfo + 0x5c),0,0);
    puVar1 = (undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 4);
    param1 = __this->enemy->animator;
    iVar2 = 8;
  }
  else {
    if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(Settings_TypeInfo);
    }
    puVar1 = *(undefined4 **)(Settings_TypeInfo + 0x5c);
    iVar2 = 4;
  }
  unnamed_function_45420(param1,*puVar1,0,0);
  unnamed_function_45420
            (__this->enemy->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + iVar2),0,0
            );
  return;
}

// ---- AnimateEnemy$$AnimateEnemy_OnAnimate ----
// C#: void AnimateEnemy__AnimateEnemy_OnAnimate (AnimateEnemy_o* __this, AnimateEvent_o* animateEvent, AnimateEventArgs_o* animateEventArgs, const MethodInfo* method);

void AnimateEnemy__AnimateEnemy_OnAnimate
               (AnimateEnemy_o *__this,AnimateEvent_o *animateEvent,
               AnimateEventArgs_o *animateEventArgs,MethodInfo *method)

{
  AnimateEnemy__InitializeAnimationParameters(__this,(MethodInfo *)__this);
  AnimateEnemy__SetAimAnimationParameters
            (__this,animateEventArgs->aimDirection,(MethodInfo *)__this);
  __this->aimDirection = animateEventArgs->aimDirection;
  return;
}

// ---- AnimateEnemy$$InitializeAnimationParameters ----
// C#: void AnimateEnemy__InitializeAnimationParameters (AnimateEnemy_o* __this, const MethodInfo* method);

void AnimateEnemy__InitializeAnimationParameters(AnimateEnemy_o *__this,MethodInfo *method)

{
  Animator_o *param1;
  
  if (DAT_ram_00664a7a == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a7a = '\x01';
  }
  param1 = __this->enemy->animator;
  if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45420(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x18),0,0);
  unnamed_function_45420
            (__this->enemy->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x10),0,0)
  ;
  unnamed_function_45420
            (__this->enemy->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x24),0,0)
  ;
  unnamed_function_45420
            (__this->enemy->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x28),0,0)
  ;
  return;
}

// ---- AnimateEnemy$$SetAimAnimationParameters ----
// C#: void AnimateEnemy__SetAimAnimationParameters (AnimateEnemy_o* __this, int32_t aimDirection, const MethodInfo* method);

void AnimateEnemy__SetAimAnimationParameters
               (AnimateEnemy_o *__this,AimDirection aimDirection,MethodInfo *method)

{
  int iVar1;
  Animator_o *param1;
  int iVar2;
  
  if (DAT_ram_00664a7b == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a7b = '\x01';
  }
  if (aimDirection == Up) {
    param1 = __this->enemy->animator;
    iVar1 = 0x10;
    iVar2 = *(int *)(Settings_TypeInfo + 0x74);
  }
  else {
    if (aimDirection == UpRight) {
      return;
    }
    if (aimDirection == UpLeft) {
      return;
    }
    if (aimDirection == Right) {
      param1 = __this->enemy->animator;
      iVar1 = 0x24;
      iVar2 = *(int *)(Settings_TypeInfo + 0x74);
    }
    else if (aimDirection == Left) {
      param1 = __this->enemy->animator;
      iVar1 = 0x28;
      iVar2 = *(int *)(Settings_TypeInfo + 0x74);
    }
    else {
      if (aimDirection != Down) {
        return;
      }
      param1 = __this->enemy->animator;
      iVar1 = 0x18;
      iVar2 = *(int *)(Settings_TypeInfo + 0x74);
    }
  }
  if (iVar2 == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45420(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + iVar1),1,0);
  return;
}

// ---- AnimateEnemy$$.ctor ----
// C#: void AnimateEnemy___ctor (AnimateEnemy_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

