// Assembly-CSharp :: Idle
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Idle : MonoBehaviour // TypeDefIndex: 5672
{
	// Fields
	private Rigidbody2D rigidBody2D; // 0x10
	private IdleEvent idleEvent; // 0x14

	// Methods

	// RVA: 0x394C Offset: 0x394C VA: 0x394C
	private void Awake() { }

	// RVA: 0x394D Offset: 0x394D VA: 0x394D
	private void OnEnable() { }

	// RVA: 0x394E Offset: 0x394E VA: 0x394E
	private void OnDisable() { }

	// RVA: 0x394F Offset: 0x394F VA: 0x394F
	private void GameStateChanged_OnIdle(GameState gameState) { }

	// RVA: 0x3950 Offset: 0x3950 VA: 0x3950
	private void IdleEvent_OnIdle(IdleEvent idleEvent) { }

	// RVA: 0x3951 Offset: 0x3951 VA: 0x3951
	private void IdleRigidBody() { }

	// RVA: 0x3952 Offset: 0x3952 VA: 0x3952
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Idle$$Awake ----
// C#: void Idle__Awake (Idle_o* __this, const MethodInfo* method);

void Idle__Awake(Idle_o *__this,MethodInfo *method)

{
  Rigidbody2D_o *pRVar1;
  IdleEvent_o *pIVar2;
  
  if (DAT_ram_0066491a == '\0') {
    unnamed_function_1099(&DAT_ram_00567ea4);
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_0066491a = '\x01';
  }
  pRVar1 = (Rigidbody2D_o *)unnamed_function_65370(__this,DAT_ram_00567f18);
  __this->rigidBody2D = pRVar1;
  pIVar2 = (IdleEvent_o *)unnamed_function_65370(__this,DAT_ram_00567ea4);
  __this->idleEvent = pIVar2;
  return;
}

// ---- Idle$$OnEnable ----
// C#: void Idle__OnEnable (Idle_o* __this, const MethodInfo* method);

void Idle__OnEnable(Idle_o *__this,MethodInfo *method)

{
  bool bVar1;
  Action_o *param1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  Action_o *pAVar5;
  int iVar6;
  IdleEvent_o *pIVar7;
  undefined4 uVar8;
  
  if (DAT_ram_0066491b == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_00569f74);
    unnamed_function_1099(&DAT_ram_00569f78);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_0066491b = '\x01';
  }
  pIVar7 = __this->idleEvent;
  uVar3 = unnamed_function_95402(System_Action_IdleEvent__TypeInfo);
  unnamed_function_60074(uVar3,__this,DAT_ram_00569f78,0);
  if (DAT_ram_0066491e == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    DAT_ram_0066491e = '\x01';
  }
  param1 = pIVar7->OnIdle;
  do {
    iVar2 = 0;
    iVar4 = unnamed_function_85158(param1,uVar3,0);
    uVar8 = System_Action_IdleEvent__TypeInfo;
    if ((iVar4 != 0) &&
       (iVar2 = unnamed_function_1112(iVar4,System_Action_IdleEvent__TypeInfo), iVar2 == 0)) {
      unnamed_function_1116(iVar4,uVar8);
      do {
        halt_trap();
      } while( true );
    }
    pAVar5 = (Action_o *)unnamed_function_1144(&pIVar7->OnIdle,iVar2,param1);
    bVar1 = param1 != pAVar5;
    param1 = pAVar5;
  } while (bVar1);
  iVar2 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar4 = **(int **)(iVar2 + 0x5c);
  uVar8 = *(undefined4 *)(iVar4 + 0x20);
  uVar3 = unnamed_function_95402(System_Action_GameState__TypeInfo);
  unnamed_function_60038(uVar3,__this,DAT_ram_00569f74,0);
  iVar2 = unnamed_function_85158(uVar8,uVar3,0);
  uVar3 = System_Action_GameState__TypeInfo;
  if (iVar2 != 0) {
    iVar6 = unnamed_function_1112(iVar2,System_Action_GameState__TypeInfo);
    if (iVar6 == 0) {
      unnamed_function_1116(iVar2,uVar3);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar4 + 0x20) = iVar6;
    uVar3 = System_Action_GameState__TypeInfo;
    iVar4 = unnamed_function_1112(iVar2,System_Action_GameState__TypeInfo);
    if (iVar4 != 0) {
      return;
    }
    unnamed_function_1116(iVar2,uVar3);
    do {
      halt_trap();
    } while( true );
  }
  *(undefined4 *)(iVar4 + 0x20) = 0;
  return;
}

// ---- Idle$$OnDisable ----
// C#: void Idle__OnDisable (Idle_o* __this, const MethodInfo* method);

void Idle__OnDisable(Idle_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  IdleEvent_o *pIVar3;
  
  if (DAT_ram_0066491c == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    unnamed_function_1099(&DAT_ram_00569f78);
    DAT_ram_0066491c = '\x01';
  }
  pIVar3 = __this->idleEvent;
  param1_00 = unnamed_function_95402(System_Action_IdleEvent__TypeInfo);
  unnamed_function_60074(param1_00,__this,DAT_ram_00569f78,0);
  if (DAT_ram_0066491f == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    DAT_ram_0066491f = '\x01';
  }
  param1 = pIVar3->OnIdle;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_IdleEvent__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112(param1_01,System_Action_IdleEvent__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pIVar3->OnIdle,param2_00,param1);
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

// ---- Idle$$GameStateChanged_OnIdle ----
// C#: void Idle__GameStateChanged_OnIdle (Idle_o* __this, int32_t gameState, const MethodInfo* method);

void Idle__GameStateChanged_OnIdle(Idle_o *__this,GameState gameState,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 param1;
  
  if (DAT_ram_0066491d == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_00569f74);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_0066491d = '\x01';
  }
  if (gameState == Intro) {
    unnamed_function_16407(__this->rigidBody2D,7,0);
  }
  else if ((gameState != Begin) && (gameState == Instruct)) {
    unnamed_function_16407(__this->rigidBody2D,4,0);
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
    unnamed_function_60038(uVar1,__this,DAT_ram_00569f74,0);
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

// ---- Idle$$IdleEvent_OnIdle ----
// C#: void Idle__IdleEvent_OnIdle (Idle_o* __this, IdleEvent_o* idleEvent, const MethodInfo* method);

void Idle__IdleEvent_OnIdle(Idle_o *__this,IdleEvent_o *idleEvent,MethodInfo *method)

{
  Rigidbody2D_o *param1;
  undefined8 local_10;
  undefined8 local_8;
  
  param1 = __this->rigidBody2D;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  local_10 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  local_8 = local_10;
  unnamed_function_16392(param1,&local_10,0);
  return;
}

// ---- Idle$$IdleRigidBody ----
// C#: void Idle__IdleRigidBody (Idle_o* __this, const MethodInfo* method);

void Idle__IdleRigidBody(Idle_o *__this,MethodInfo *method)

{
  Rigidbody2D_o *param1;
  undefined8 local_10;
  undefined8 local_8;
  
  param1 = __this->rigidBody2D;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  local_10 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  local_8 = local_10;
  unnamed_function_16392(param1,&local_10,0);
  return;
}

// ---- Idle$$.ctor ----
// C#: void Idle___ctor (Idle_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

