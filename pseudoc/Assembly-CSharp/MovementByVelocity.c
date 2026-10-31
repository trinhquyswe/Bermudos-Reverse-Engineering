// Assembly-CSharp :: MovementByVelocity
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MovementByVelocity : MonoBehaviour // TypeDefIndex: 5675
{
	// Fields
	private Rigidbody2D rigidBody2D; // 0x10
	private MovementByVelocityEvent movementByVelocityEvent; // 0x14
	private DestroyedEvent destroyedEvent; // 0x18
	private DieEvent dieEvent; // 0x1C

	// Methods

	// RVA: 0x395B Offset: 0x395B VA: 0x395B
	private void Awake() { }

	// RVA: 0x395C Offset: 0x395C VA: 0x395C
	private void OnEnable() { }

	// RVA: 0x395D Offset: 0x395D VA: 0x395D
	private void OnDisable() { }

	// RVA: 0x395E Offset: 0x395E VA: 0x395E
	private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs) { }

	// RVA: 0x395F Offset: 0x395F VA: 0x395F
	private void DieEvent_OnDie(DieEvent dieEvent) { }

	// RVA: 0x3960 Offset: 0x3960 VA: 0x3960
	private void MovementByVelocityEvent_OnMovementByVelocity(MovementByVelocityEvent movementByVelocityEvent, MovementByVelocityArgs movementByVelocityArgs) { }

	// RVA: 0x3961 Offset: 0x3961 VA: 0x3961
	private void MoveRigidBody(Vector2 moveDirection, float moveSpeed) { }

	// RVA: 0x3962 Offset: 0x3962 VA: 0x3962
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MovementByVelocity$$Awake ----
// C#: void MovementByVelocity__Awake (MovementByVelocity_o* __this, const MethodInfo* method);

void MovementByVelocity__Awake(MovementByVelocity_o *__this,MethodInfo *method)

{
  Rigidbody2D_o *pRVar1;
  MovementByVelocityEvent_o *pMVar2;
  DestroyedEvent_o *pDVar3;
  DieEvent_o *pDVar4;
  
  if (DAT_ram_00664922 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e70);
    unnamed_function_1099(&DAT_ram_00567e74);
    unnamed_function_1099(&DAT_ram_00567ed4);
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_00664922 = '\x01';
  }
  pRVar1 = (Rigidbody2D_o *)unnamed_function_65370(__this,DAT_ram_00567f18);
  __this->rigidBody2D = pRVar1;
  pMVar2 = (MovementByVelocityEvent_o *)unnamed_function_65370(__this,DAT_ram_00567ed4);
  __this->movementByVelocityEvent = pMVar2;
  pDVar3 = (DestroyedEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e70);
  __this->destroyedEvent = pDVar3;
  pDVar4 = (DieEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e74);
  __this->dieEvent = pDVar4;
  return;
}

// ---- MovementByVelocity$$OnEnable ----
// C#: void MovementByVelocity__OnEnable (MovementByVelocity_o* __this, const MethodInfo* method);

void MovementByVelocity__OnEnable(MovementByVelocity_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  System_Action_DestroyedEvent__DestroyedEventArgs__o *value;
  System_Action_DieEvent__o *value_00;
  MovementByVelocityEvent_o *pMVar3;
  DestroyedEvent_o *__this_00;
  DieEvent_o *__this_01;
  
  if (DAT_ram_00664923 == '\0') {
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b180);
    unnamed_function_1099(&DAT_ram_0056b184);
    unnamed_function_1099(&DAT_ram_0056b188);
    DAT_ram_00664923 = '\x01';
  }
  pMVar3 = __this->movementByVelocityEvent;
  param1_00 = unnamed_function_95402
                        (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056b188,0);
  if (DAT_ram_00664927 == '\0') {
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    DAT_ram_00664927 = '\x01';
  }
  param1 = pMVar3->OnMovementByVelocity;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,
                               System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo
                              ), param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pMVar3->OnMovementByVelocity,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      __this_00 = __this->destroyedEvent;
      value = (System_Action_DestroyedEvent__DestroyedEventArgs__o *)
              unnamed_function_95402(System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
      unnamed_function_60334(value,__this,DAT_ram_0056b180,0);
      DestroyedEvent__add_OnDestroyed(__this_00,value,(MethodInfo *)0x0);
      __this_01 = __this->dieEvent;
      value_00 = (System_Action_DieEvent__o *)
                 unnamed_function_95402(System_Action_DieEvent__TypeInfo);
      unnamed_function_60074(value_00,__this,DAT_ram_0056b184,0);
      DieEvent__add_OnDie(__this_01,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- MovementByVelocity$$OnDisable ----
// C#: void MovementByVelocity__OnDisable (MovementByVelocity_o* __this, const MethodInfo* method);

void MovementByVelocity__OnDisable(MovementByVelocity_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  System_Action_DestroyedEvent__DestroyedEventArgs__o *value;
  System_Action_DieEvent__o *value_00;
  MovementByVelocityEvent_o *pMVar3;
  DestroyedEvent_o *__this_00;
  DieEvent_o *__this_01;
  
  if (DAT_ram_00664924 == '\0') {
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b180);
    unnamed_function_1099(&DAT_ram_0056b184);
    unnamed_function_1099(&DAT_ram_0056b188);
    DAT_ram_00664924 = '\x01';
  }
  pMVar3 = __this->movementByVelocityEvent;
  param1_00 = unnamed_function_95402
                        (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056b188,0);
  if (DAT_ram_00664928 == '\0') {
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    DAT_ram_00664928 = '\x01';
  }
  param1 = pMVar3->OnMovementByVelocity;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,
                               System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo
                              ), param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pMVar3->OnMovementByVelocity,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      __this_00 = __this->destroyedEvent;
      value = (System_Action_DestroyedEvent__DestroyedEventArgs__o *)
              unnamed_function_95402(System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
      unnamed_function_60334(value,__this,DAT_ram_0056b180,0);
      DestroyedEvent__remove_OnDestroyed(__this_00,value,(MethodInfo *)0x0);
      __this_01 = __this->dieEvent;
      value_00 = (System_Action_DieEvent__o *)
                 unnamed_function_95402(System_Action_DieEvent__TypeInfo);
      unnamed_function_60074(value_00,__this,DAT_ram_0056b184,0);
      DieEvent__remove_OnDie(__this_01,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- MovementByVelocity$$DestroyedEvent_OnDestroyed ----
// C#: void MovementByVelocity__DestroyedEvent_OnDestroyed (MovementByVelocity_o* __this, DestroyedEvent_o* destroyedEvent, DestroyedEventArgs_o* destroyedEventArgs, const MethodInfo* method);

void MovementByVelocity__DestroyedEvent_OnDestroyed
               (MovementByVelocity_o *__this,DestroyedEvent_o *destroyedEvent,
               DestroyedEventArgs_o *destroyedEventArgs,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  MovementByVelocityEvent_o *pMVar3;
  
  if (DAT_ram_00664925 == '\0') {
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b188);
    DAT_ram_00664925 = '\x01';
  }
  if (destroyedEventArgs->playerDied != false) {
    pMVar3 = __this->movementByVelocityEvent;
    param1_00 = unnamed_function_95402
                          (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_60334(param1_00,__this,DAT_ram_0056b188,0);
    if (DAT_ram_00664928 == '\0') {
      unnamed_function_1099
                (&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
      DAT_ram_00664928 = '\x01';
    }
    param1 = pMVar3->OnMovementByVelocity;
    do {
      param2_00 = 0;
      param1_01 = unnamed_function_85160(param1,param1_00,0);
      param2 = System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo;
      if ((param1_01 != 0) &&
         (param2_00 = unnamed_function_1112
                                (param1_01,
                                 System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo
                                ), param2_00 == 0)) {
        unnamed_function_1116(param1_01,param2);
        do {
          halt_trap();
        } while( true );
      }
      pAVar2 = (Action_o *)unnamed_function_1144(&pMVar3->OnMovementByVelocity,param2_00,param1);
      bVar1 = param1 != pAVar2;
      param1 = pAVar2;
    } while (bVar1);
  }
  return;
}

// ---- MovementByVelocity$$DieEvent_OnDie ----
// C#: void MovementByVelocity__DieEvent_OnDie (MovementByVelocity_o* __this, DieEvent_o* dieEvent, const MethodInfo* method);

void MovementByVelocity__DieEvent_OnDie
               (MovementByVelocity_o *__this,DieEvent_o *dieEvent,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  MovementByVelocityEvent_o *pMVar3;
  
  if (DAT_ram_00664926 == '\0') {
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b188);
    DAT_ram_00664926 = '\x01';
  }
  pMVar3 = __this->movementByVelocityEvent;
  param1_00 = unnamed_function_95402
                        (System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056b188,0);
  if (DAT_ram_00664927 == '\0') {
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    DAT_ram_00664927 = '\x01';
  }
  param1 = pMVar3->OnMovementByVelocity;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,
                               System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo
                              ), param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pMVar3->OnMovementByVelocity,param2_00,param1);
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

// ---- MovementByVelocity$$MovementByVelocityEvent_OnMovementByVelocity ----
// C#: void MovementByVelocity__MovementByVelocityEvent_OnMovementByVelocity (MovementByVelocity_o* __this, MovementByVelocityEvent_o* movementByVelocityEvent, MovementByVelocityArgs_o* movementByVelocityArgs, const MethodInfo* method);

void MovementByVelocity__MovementByVelocityEvent_OnMovementByVelocity
               (MovementByVelocity_o *__this,MovementByVelocityEvent_o *movementByVelocityEvent,
               MovementByVelocityArgs_o *movementByVelocityArgs,MethodInfo *method)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = CONCAT44(movementByVelocityArgs->moveSpeed * (movementByVelocityArgs->moveDirection).y,
                      movementByVelocityArgs->moveSpeed * (movementByVelocityArgs->moveDirection).x)
  ;
  local_8 = local_10;
  unnamed_function_16392(__this->rigidBody2D,&local_10,0);
  return;
}

// ---- MovementByVelocity$$MoveRigidBody ----
// C#: void MovementByVelocity__MoveRigidBody (MovementByVelocity_o* __this, UnityEngine_Vector2_o moveDirection, float moveSpeed, const MethodInfo* method);

void MovementByVelocity__MoveRigidBody
               (MovementByVelocity_o *__this,Vector2_o *moveDirection,float moveSpeed,
               MethodInfo *method)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = CONCAT44((*moveDirection).y * moveSpeed,(*moveDirection).x * moveSpeed);
  local_8 = local_10;
  unnamed_function_16392(__this->rigidBody2D,&local_10,0);
  return;
}

// ---- MovementByVelocity$$.ctor ----
// C#: void MovementByVelocity___ctor (MovementByVelocity_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

