// Assembly-CSharp :: EnemyMovement
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class EnemyMovement : MonoBehaviour // TypeDefIndex: 5594
{
	// Fields
	private Vector2 startPosition; // 0x10
	private Vector2 roamingPosition; // 0x18
	[HideInInspector]
	public NavMeshAgent navMeshAgent; // 0x20
	private bool hasInitializedRoamingPosition; // 0x24
	private Enemy enemy; // 0x28
	private float maxDistance; // 0x2C

	// Methods

	// RVA: 0x37C0 Offset: 0x37C0 VA: 0x37C0
	private void Awake() { }

	// RVA: 0x37C1 Offset: 0x37C1 VA: 0x37C1
	private void OnEnable() { }

	// RVA: 0x37C2 Offset: 0x37C2 VA: 0x37C2
	private void OnDisable() { }

	// RVA: 0x37C3 Offset: 0x37C3 VA: 0x37C3
	private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs) { }

	// RVA: 0x37C4 Offset: 0x37C4 VA: 0x37C4
	private void Start() { }

	// RVA: 0x37C5 Offset: 0x37C5 VA: 0x37C5
	public void MoveRoamingPosition() { }

	// RVA: 0x37C6 Offset: 0x37C6 VA: 0x37C6
	public void FindPlayer() { }

	// RVA: 0x37C7 Offset: 0x37C7 VA: 0x37C7
	public void MoveToPlayer() { }

	// RVA: 0x37C8 Offset: 0x37C8 VA: 0x37C8
	public void GetDistanceToStartPosition() { }

	// RVA: 0x37C9 Offset: 0x37C9 VA: 0x37C9
	public void GoBackToStartPosition() { }

	// RVA: 0x37CA Offset: 0x37CA VA: 0x37CA
	public Vector2 GetRoamingPosition() { }

	// RVA: 0x37CB Offset: 0x37CB VA: 0x37CB
	public void GetAimDirection(bool isPlayerDir) { }

	// RVA: 0x37CC Offset: 0x37CC VA: 0x37CC
	private void StopEnemy(float stunTime) { }

	[IteratorStateMachine(typeof(EnemyMovement.<StopEnemyCoroutine>d__19))]
	// RVA: 0x37CD Offset: 0x37CD VA: 0x37CD
	private IEnumerator StopEnemyCoroutine(float stunTime) { }

	// RVA: 0x37CE Offset: 0x37CE VA: 0x37CE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- EnemyMovement$$Awake ----
// C#: void EnemyMovement__Awake (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement__Awake(EnemyMovement_o *__this,MethodInfo *method)

{
  Enemy_o *pEVar1;
  NavMeshAgent_o *pNVar2;
  
  if (DAT_ram_00664b00 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e78);
    unnamed_function_1099(&DAT_ram_00567edc);
    DAT_ram_00664b00 = '\x01';
  }
  pEVar1 = (Enemy_o *)unnamed_function_65370(__this,DAT_ram_00567e78);
  __this->enemy = pEVar1;
  pNVar2 = (NavMeshAgent_o *)unnamed_function_65370(__this,DAT_ram_00567edc);
  __this->navMeshAgent = pNVar2;
  return;
}

// ---- EnemyMovement$$OnEnable ----
// C#: void EnemyMovement__OnEnable (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement__OnEnable(EnemyMovement_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664b01 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568ec0);
    DAT_ram_00664b01 = '\x01';
  }
  pPVar3 = __this->enemy->poiseEvent;
  param1_00 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568ec0,0);
  if (DAT_ram_00664b44 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    DAT_ram_00664b44 = '\x01';
  }
  param1 = pPVar3->OnPoise;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pPVar3->OnPoise,param2_00,param1);
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

// ---- EnemyMovement$$OnDisable ----
// C#: void EnemyMovement__OnDisable (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement__OnDisable(EnemyMovement_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664b02 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568ec0);
    DAT_ram_00664b02 = '\x01';
  }
  pPVar3 = __this->enemy->poiseEvent;
  param1_00 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568ec0,0);
  if (DAT_ram_00664b45 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    DAT_ram_00664b45 = '\x01';
  }
  param1 = pPVar3->OnPoise;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pPVar3->OnPoise,param2_00,param1);
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

// ---- EnemyMovement$$PoiseEvent_OnPoise ----
// C#: void EnemyMovement__PoiseEvent_OnPoise (EnemyMovement_o* __this, PoiseEvent_o* poiseEvent, PoiseEventArgs_o* poiseEventArgs, const MethodInfo* method);

void EnemyMovement__PoiseEvent_OnPoise
               (EnemyMovement_o *__this,PoiseEvent_o *poiseEvent,PoiseEventArgs_o *poiseEventArgs,
               MethodInfo *method)

{
  int param2;
  float fVar1;
  
  if (poiseEventArgs->currentPoise <= 0.0) {
    fVar1 = poiseEventArgs->stunTime;
    AttackEvent__CallAttackEvent((AttackEvent_o *)__this->enemy->idleEvent,(MethodInfo *)0x0);
    if (DAT_ram_00664b07 == '\0') {
      unnamed_function_1099(&EnemyMovement__StopEnemyCoroutine_d__19_TypeInfo);
      DAT_ram_00664b07 = '\x01';
    }
    param2 = unnamed_function_95402(EnemyMovement__StopEnemyCoroutine_d__19_TypeInfo);
    *(float *)(param2 + 0x14) = fVar1;
    *(EnemyMovement_o **)(param2 + 0x10 /* startPosition */) = __this;
    *(undefined4 *)(param2 + 8) = 0;
    unnamed_function_44725(__this,param2,0);
  }
  return;
}

// ---- EnemyMovement$$Start ----
// C#: void EnemyMovement__Start (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement__Start(EnemyMovement_o *__this,MethodInfo *method)

{
  undefined4 param2;
  Vector2_o local_10 [2];
  
  unnamed_function_51279(__this->navMeshAgent,0,0);
  unnamed_function_51280(__this->navMeshAgent,0,0);
  unnamed_function_51274(__this->navMeshAgent,3.0,0);
  param2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(local_10,param2,0);
  __this->startPosition = local_10[0];
  return;
}

// ---- EnemyMovement$$MoveRoamingPosition ----
// C#: void EnemyMovement__MoveRoamingPosition (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement__MoveRoamingPosition(EnemyMovement_o *__this,MethodInfo *method)

{
  float4 fVar1;
  undefined4 param2;
  float fVar2;
  Vector2_o VVar3;
  float fVar4;
  float4 local_20;
  Vector2_o local_30;
  undefined4 local_28;
  Vector2_o local_10;
  undefined4 local_8;
  
  if (__this->hasInitializedRoamingPosition == false) {
    EnemyMovement__GetRoamingPosition((Vector2_o *)&local_20,__this,(MethodInfo *)&local_30);
    local_30.y = (float)local_20;
    local_30.x = (float)local_20;
    __this->hasInitializedRoamingPosition = true;
    __this->roamingPosition = local_30;
  }
  else {
    local_30 = __this->roamingPosition;
  }
  local_8 = 0;
  local_28 = 0;
  local_10 = local_30;
  unnamed_function_51259(__this->navMeshAgent,(MethodInfo *)&local_30,0);
  unnamed_function_51262(__this->navMeshAgent,1.0,0);
  param2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_20,param2,0);
  fVar4 = (float)local_20;
  fVar1 = local_20;
  VVar3 = __this->roamingPosition;
  if (DAT_ram_0065b3eb == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0065b3eb = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar2 = (float)fVar1 - VVar3.x;
  fVar4 = fVar4 - VVar3.y;
  if (SQRT(fVar2 * fVar2 + fVar4 * fVar4) <= 1.0) {
    EnemyMovement__GetRoamingPosition((Vector2_o *)&local_20,__this,(MethodInfo *)&local_30);
    VVar3.y = (float)local_20;
    VVar3.x = (float)local_20;
    __this->roamingPosition = VVar3;
  }
  return;
}

// ---- EnemyMovement$$FindPlayer ----
// C#: void EnemyMovement__FindPlayer (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement__FindPlayer(EnemyMovement_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  undefined4 uVar3;
  int iVar4;
  float4 local_10;
  float4 local_c;
  
  if (DAT_ram_00664b03 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664b03 = '\x01';
  }
  iVar4 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  uVar3 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar4 + 0x5c) + 0x10),0);
  unnamed_function_44960((MethodInfo *)&local_10,uVar3,0);
  fVar2 = local_c;
  fVar1 = local_10;
  uVar3 = unnamed_function_44643(__this,0);
  unnamed_function_44960((MethodInfo *)&local_10,uVar3,0);
  if (DAT_ram_0065b3eb == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0065b3eb = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  if (SQRT(((float)fVar1 - (float)local_10) * ((float)fVar1 - (float)local_10) +
           ((float)fVar2 - (float)local_c) * ((float)fVar2 - (float)local_c)) < 5.0) {
    EnemyStateEvent__CallEnemyStateEvent
              (__this->enemy->enemyStateEvent,Chasing,(MethodInfo *)&local_10);
  }
  return;
}

// ---- EnemyMovement$$MoveToPlayer ----
// C#: void EnemyMovement__MoveToPlayer (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement__MoveToPlayer(EnemyMovement_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  NavMeshAgent_o *param1;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664b04 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664b04 = '\x01';
  }
  iVar1 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = unnamed_function_95087(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = unnamed_function_95087(iVar1);
  }
  uVar2 = *(undefined4 *)(**(int **)(iVar1 + 0x5c) + 0x10);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(uVar2,0,0);
  if ((iVar1 != 0) && (iVar1 = unnamed_function_51281(__this->navMeshAgent,0), iVar1 != 0)) {
    unnamed_function_51262(__this->navMeshAgent,2.0,0);
    param1 = __this->navMeshAgent;
    iVar1 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    uVar2 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar1 + 0x5c) + 0x10),0);
    unnamed_function_44960(&local_10,uVar2,0);
    local_18 = local_8;
    local_20 = local_10;
    unnamed_function_51259(param1,&local_20,0);
  }
  return;
}

// ---- EnemyMovement$$GetDistanceToStartPosition ----
// C#: void EnemyMovement__GetDistanceToStartPosition (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement__GetDistanceToStartPosition(EnemyMovement_o *__this,MethodInfo *method)

{
  undefined4 param2;
  Vector2_o VVar1;
  float fVar2;
  float fVar3;
  float4 local_10;
  float4 local_c;
  
  __this->maxDistance = 15.0;
  param2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,param2,0);
  VVar1 = __this->startPosition;
  if (DAT_ram_0065b3eb == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0065b3eb = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar2 = (float)local_10 - VVar1.x;
  fVar3 = (float)local_c - VVar1.y;
  if (__this->maxDistance < SQRT(fVar2 * fVar2 + fVar3 * fVar3)) {
    EnemyStateEvent__CallEnemyStateEvent
              (__this->enemy->enemyStateEvent,GoBackToStart,(MethodInfo *)__this);
  }
  return;
}

// ---- EnemyMovement$$GoBackToStartPosition ----
// C#: void EnemyMovement__GoBackToStartPosition (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement__GoBackToStartPosition(EnemyMovement_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  float4 fVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  Vector2_o VVar8;
  float fVar9;
  Vector2_o local_30;
  undefined4 local_28;
  float4 local_20;
  float4 local_1c;
  Vector2_o local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664b05 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664b05 = '\x01';
  }
  iVar5 = unnamed_function_51281(__this->navMeshAgent,0);
  if (iVar5 != 0) {
    unnamed_function_51262(__this->navMeshAgent,2.0,0);
    local_30 = __this->startPosition;
    local_8 = 0;
    local_28 = 0;
    local_10 = local_30;
    unnamed_function_51259(__this->navMeshAgent,(MethodInfo *)&local_30,0);
    iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    uVar6 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar5 + 0x5c) + 0x10),0);
    unnamed_function_44960(&local_20,uVar6,0);
    fVar3 = local_1c;
    fVar1 = local_20;
    uVar6 = unnamed_function_44643(__this,0);
    unnamed_function_44960(&local_20,uVar6,0);
    fVar4 = local_1c;
    fVar2 = local_20;
    if (DAT_ram_0065b3eb == '\0') {
      unnamed_function_1099(&System_Math_TypeInfo);
      DAT_ram_0065b3eb = '\x01';
    }
    if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_Math_TypeInfo);
    }
    if (SQRT(((float)fVar1 - (float)fVar2) * ((float)fVar1 - (float)fVar2) +
             ((float)fVar3 - (float)fVar4) * ((float)fVar3 - (float)fVar4)) <= 5.0) {
      VVar8 = __this->startPosition;
      uVar6 = unnamed_function_44643(__this,0);
      unnamed_function_44960(&local_20,uVar6,0);
      fVar2 = local_1c;
      fVar1 = local_20;
      if (DAT_ram_0065b3eb == '\0') {
        unnamed_function_1099(&System_Math_TypeInfo);
        DAT_ram_0065b3eb = '\x01';
      }
      if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(System_Math_TypeInfo);
      }
      fVar7 = VVar8.x - (float)fVar1;
      fVar9 = VVar8.y - (float)fVar2;
      if (SQRT(fVar7 * fVar7 + fVar9 * fVar9) <= __this->maxDistance + -5.0) {
        EnemyStateEvent__CallEnemyStateEvent
                  (__this->enemy->enemyStateEvent,Chasing,(MethodInfo *)&local_30);
      }
    }
    uVar6 = unnamed_function_44643(__this,0);
    unnamed_function_44960(&local_20,uVar6,0);
    VVar8 = __this->startPosition;
    if (DAT_ram_0065b3eb == '\0') {
      unnamed_function_1099(&System_Math_TypeInfo);
      DAT_ram_0065b3eb = '\x01';
    }
    if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_Math_TypeInfo);
    }
    fVar7 = (float)local_20 - VVar8.x;
    fVar9 = (float)local_1c - VVar8.y;
    if (SQRT(fVar7 * fVar7 + fVar9 * fVar9) < 2.0) {
      EnemyStateEvent__CallEnemyStateEvent
                (__this->enemy->enemyStateEvent,Roaming,(MethodInfo *)&local_30);
    }
  }
  return;
}

// ---- EnemyMovement$$GetRoamingPosition ----
// C#: UnityEngine_Vector2_o EnemyMovement__GetRoamingPosition (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement__GetRoamingPosition(Vector2_o *__ret,EnemyMovement_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  Vector2_o VVar3;
  Vector2_o VVar4;
  undefined8 local_58;
  undefined4 local_50;
  Vector2_o local_48 [2];
  float4 local_38;
  float4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  iVar1 = unnamed_function_51281(__this->navMeshAgent,0);
  if (iVar1 == 0) {
    *__ret = __this->roamingPosition;
  }
  else {
    VVar3 = __this->startPosition;
    HelperUtilities__GetRandomDirection(local_48,(MethodInfo *)0x0);
    VVar4 = local_48[0];
    fVar2 = unnamed_function_44583(1.0,5.0,0);
    local_34 = (float4)(fVar2 * VVar4.y + VVar3.y);
    local_38 = (float4)(fVar2 * VVar4.x + VVar3.x);
    VVar4.y = (float)local_34;
    VVar4.x = (float)local_38;
    __this->roamingPosition = VVar4;
    local_30 = 0;
    local_50 = 0;
    local_58 = CONCAT44(local_34,local_38);
    unnamed_function_51304(&local_58,&local_28,10.0,1,0);
    unnamed_function_15207(local_48,&local_28,0);
    *__ret = local_48[0];
  }
  return;
}

// ---- EnemyMovement$$GetAimDirection ----
// C#: void EnemyMovement__GetAimDirection (EnemyMovement_o* __this, bool isPlayerDir, const MethodInfo* method);

void EnemyMovement__GetAimDirection(EnemyMovement_o *__this,bool isPlayerDir,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  AimDirection aimDirection;
  undefined3 in_register_20000011;
  undefined4 uVar4;
  float fVar5;
  Vector2_o VVar6;
  int iVar7;
  undefined1 local_30 [16];
  float4 local_20;
  float4 local_1c;
  float4 local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664b06 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664b06 = '\x01';
  }
  if (CONCAT31(in_register_20000011,isPlayerDir) == 0) {
    VVar6 = __this->roamingPosition;
    uVar4 = unnamed_function_44643(__this,0);
    unnamed_function_44960(&local_10,uVar4,0);
    local_1c = (float4)(VVar6.y - (float)local_c);
    local_20 = (float4)(VVar6.x - (float)local_10);
    local_30._8_4_ = 0.0 - (float)local_8;
  }
  else {
    iVar7 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = unnamed_function_95087(iVar7);
    }
    iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 8);
    if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = unnamed_function_95087(iVar7);
    }
    uVar4 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar7 + 0x5c) + 0x10),0);
    unnamed_function_44960(&local_10,uVar4,0);
    fVar3 = local_8;
    fVar2 = local_c;
    fVar1 = local_10;
    uVar4 = unnamed_function_44643(__this,0);
    unnamed_function_44960(&local_10,uVar4,0);
    local_1c = (float4)((float)fVar2 - (float)local_c);
    local_20 = (float4)((float)fVar1 - (float)local_10);
    local_30._8_4_ = (float)fVar3 - (float)local_8;
  }
  local_30._4_4_ = (int)local_1c;
  local_30._0_4_ = (int)local_20;
  aimDirection = Up;
  local_18 = (float4)local_30._8_4_;
  fVar5 = HelperUtilities__GetAngleFromVector((Vector3_o *)local_30,(MethodInfo *)0x0);
  if (fVar5 <= 45.0 || 135.0 < fVar5) {
    aimDirection = Left;
    if (((180.0 < fVar5 || fVar5 <= 135.0) &&
        (aimDirection = Left, -155.0 < fVar5 || fVar5 <= -180.0)) &&
       ((fVar5 <= -155.0 || (aimDirection = Down, -45.0 < fVar5)))) {
      if (fVar5 <= -45.0) {
        return;
      }
      aimDirection = Right;
      if (45.0 < fVar5) {
        return;
      }
    }
  }
  AnimateEvent__CallAnimateEvent(__this->enemy->animateEvent,aimDirection,(MethodInfo *)local_30);
  return;
}

// ---- EnemyMovement$$StopEnemy ----
// C#: void EnemyMovement__StopEnemy (EnemyMovement_o* __this, float stunTime, const MethodInfo* method);

void EnemyMovement__StopEnemy(EnemyMovement_o *__this,float stunTime,MethodInfo *method)

{
  int param2;
  
  AttackEvent__CallAttackEvent((AttackEvent_o *)__this->enemy->idleEvent,(MethodInfo *)0x0);
  if (DAT_ram_00664b07 == '\0') {
    unnamed_function_1099(&EnemyMovement__StopEnemyCoroutine_d__19_TypeInfo);
    DAT_ram_00664b07 = '\x01';
  }
  param2 = unnamed_function_95402(EnemyMovement__StopEnemyCoroutine_d__19_TypeInfo);
  *(float *)(param2 + 0x14) = stunTime;
  *(EnemyMovement_o **)(param2 + 0x10 /* startPosition */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- EnemyMovement$$StopEnemyCoroutine ----
// C#: System_Collections_IEnumerator_o* EnemyMovement__StopEnemyCoroutine (EnemyMovement_o* __this, float stunTime, const MethodInfo* method);

System_Collections_IEnumerator_o *
EnemyMovement__StopEnemyCoroutine(EnemyMovement_o *__this,float stunTime,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664b07 == '\0') {
    unnamed_function_1099(&EnemyMovement__StopEnemyCoroutine_d__19_TypeInfo);
    DAT_ram_00664b07 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(EnemyMovement__StopEnemyCoroutine_d__19_TypeInfo);
  pSVar1[5]._opaque = (int)stunTime;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- EnemyMovement$$.ctor ----
// C#: void EnemyMovement___ctor (EnemyMovement_o* __this, const MethodInfo* method);

void EnemyMovement___ctor(EnemyMovement_o *__this,MethodInfo *method)

{
  __this->maxDistance = 15.0;
  unnamed_function_44622(__this,0);
  return;
}

