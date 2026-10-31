// Assembly-CSharp :: MovementToPosition
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MovementToPosition : MonoBehaviour // TypeDefIndex: 5679
{
	// Fields
	private Rigidbody2D rigidBody2D; // 0x10
	private MovementToPositionEvent movementToPositionEvent; // 0x14

	// Methods

	// RVA: 0x396A Offset: 0x396A VA: 0x396A
	private void Awake() { }

	// RVA: 0x396B Offset: 0x396B VA: 0x396B
	private void OnEnable() { }

	// RVA: 0x396C Offset: 0x396C VA: 0x396C
	private void OnDisable() { }

	// RVA: 0x396D Offset: 0x396D VA: 0x396D
	private void MovementToPositionEvent_OnMovementToPosition(MovementToPositionEvent movementToPositionEvent, MovementToPositionArgs movementToPositionArgs) { }

	// RVA: 0x396E Offset: 0x396E VA: 0x396E
	private void MoveRigidBody(Vector3 movePosition, Vector3 currentPosition, float moveSpeed) { }

	// RVA: 0x396F Offset: 0x396F VA: 0x396F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MovementToPosition$$Awake ----
// C#: void MovementToPosition__Awake (MovementToPosition_o* __this, const MethodInfo* method);

void MovementToPosition__Awake(MovementToPosition_o *__this,MethodInfo *method)

{
  Rigidbody2D_o *pRVar1;
  MovementToPositionEvent_o *pMVar2;
  
  if (DAT_ram_0066492b == '\0') {
    unnamed_function_1099(&DAT_ram_00567ed8);
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_0066492b = '\x01';
  }
  pRVar1 = (Rigidbody2D_o *)unnamed_function_65370(__this,DAT_ram_00567f18);
  __this->rigidBody2D = pRVar1;
  pMVar2 = (MovementToPositionEvent_o *)unnamed_function_65370(__this,DAT_ram_00567ed8);
  __this->movementToPositionEvent = pMVar2;
  return;
}

// ---- MovementToPosition$$OnEnable ----
// C#: void MovementToPosition__OnEnable (MovementToPosition_o* __this, const MethodInfo* method);

void MovementToPosition__OnEnable(MovementToPosition_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  MovementToPositionEvent_o *pMVar3;
  
  if (DAT_ram_0066492c == '\0') {
    unnamed_function_1099(&System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b18c);
    DAT_ram_0066492c = '\x01';
  }
  pMVar3 = __this->movementToPositionEvent;
  param1_00 = unnamed_function_95402
                        (System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056b18c,0);
  if (DAT_ram_0066492e == '\0') {
    unnamed_function_1099(&System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo);
    DAT_ram_0066492e = '\x01';
  }
  param1 = pMVar3->OnMovementToPosition;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,
                               System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo
                              ), param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pMVar3->OnMovementToPosition,param2_00,param1);
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

// ---- MovementToPosition$$OnDisable ----
// C#: void MovementToPosition__OnDisable (MovementToPosition_o* __this, const MethodInfo* method);

void MovementToPosition__OnDisable(MovementToPosition_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  MovementToPositionEvent_o *pMVar3;
  
  if (DAT_ram_0066492d == '\0') {
    unnamed_function_1099(&System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b18c);
    DAT_ram_0066492d = '\x01';
  }
  pMVar3 = __this->movementToPositionEvent;
  param1_00 = unnamed_function_95402
                        (System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056b18c,0);
  if (DAT_ram_0066492f == '\0') {
    unnamed_function_1099(&System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo);
    DAT_ram_0066492f = '\x01';
  }
  param1 = pMVar3->OnMovementToPosition;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,
                               System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo
                              ), param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pMVar3->OnMovementToPosition,param2_00,param1);
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

// ---- MovementToPosition$$MovementToPositionEvent_OnMovementToPosition ----
// C#: void MovementToPosition__MovementToPositionEvent_OnMovementToPosition (MovementToPosition_o* __this, MovementToPositionEvent_o* movementToPositionEvent, MovementToPositionArgs_o* movementToPositionArgs, const MethodInfo* method);

void MovementToPosition__MovementToPositionEvent_OnMovementToPosition
               (MovementToPosition_o *__this,MovementToPositionEvent_o *movementToPositionEvent,
               MovementToPositionArgs_o *movementToPositionArgs,MethodInfo *method)

{
  Vector3_o local_20;
  Vector3_o local_10;
  
  local_10.z = (movementToPositionArgs->movePosition).z;
  local_10.x = (movementToPositionArgs->movePosition).x;
  local_10.y = (movementToPositionArgs->movePosition).y;
  local_20.z = (movementToPositionArgs->currentPosition).z;
  local_20.x = (movementToPositionArgs->currentPosition).x;
  local_20.y = (movementToPositionArgs->currentPosition).y;
  MovementToPosition__MoveRigidBody
            (__this,&local_10,&local_20,movementToPositionArgs->moveSpeed,(MethodInfo *)&local_20);
  return;
}

// ---- MovementToPosition$$MoveRigidBody ----
// C#: void MovementToPosition__MoveRigidBody (MovementToPosition_o* __this, UnityEngine_Vector3_o movePosition, UnityEngine_Vector3_o currentPosition, float moveSpeed, const MethodInfo* method);

void MovementToPosition__MoveRigidBody
               (MovementToPosition_o *__this,Vector3_o *movePosition,Vector3_o *currentPosition,
               float moveSpeed,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Rigidbody2D_o *param2;
  undefined8 local_18;
  undefined8 local_10;
  undefined1 local_8 [8];
  
  fVar1 = currentPosition->z;
  fVar2 = movePosition->z;
  fVar3 = currentPosition->y;
  fVar4 = movePosition->y;
  fVar5 = currentPosition->x;
  fVar6 = movePosition->x;
  if (DAT_ram_0066482c == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0066482c = '\x01';
  }
  fVar2 = fVar2 - fVar1;
  fVar4 = fVar4 - fVar3;
  fVar6 = fVar6 - fVar5;
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar1 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2);
  if (1e-05 < fVar1) {
    fVar4 = fVar4 / fVar1;
    fVar6 = fVar6 / fVar1;
  }
  else {
    if (DAT_ram_00664829 == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_00664829 = '\x01';
    }
    fVar4 = (*(float **)(UnityEngine_Vector3_TypeInfo + 0x5c))[1];
    fVar6 = **(float **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  }
  param2 = __this->rigidBody2D;
  unnamed_function_16384(local_8,param2,0);
  fVar1 = unnamed_function_44884(0);
  local_18 = CONCAT44(fVar4 * moveSpeed * fVar1 + local_8._4_4_,
                      fVar6 * moveSpeed * fVar1 + local_8._0_4_);
  local_10 = local_18;
  unnamed_function_16388(param2,&local_18,0);
  return;
}

// ---- MovementToPosition$$.ctor ----
// C#: void MovementToPosition___ctor (MovementToPosition_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

