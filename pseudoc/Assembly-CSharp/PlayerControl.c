// Assembly-CSharp :: PlayerControl
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class PlayerControl : MonoBehaviour // TypeDefIndex: 5690
{
	// Fields
	private Player player; // 0x10
	private InputSystem_Actions inputSystem_Actions; // 0x14
	private InputAction move; // 0x18
	private InputAction fire; // 0x1C
	private InputAction rightClick; // 0x20
	private InputAction spaceClick; // 0x24
	private InputAction beam; // 0x28
	private InputAction openInventory; // 0x2C
	private InputAction useItemAction; // 0x30
	private InputAction restAction; // 0x34
	private BeamByPlayer beamByPlayer; // 0x38
	private InventoryManager inventoryManager; // 0x3C
	private ItemConsumer useItem; // 0x40
	private Vector2 direction; // 0x44
	private Vector2 lastMoveDirection; // 0x4C
	private Vector2 previousLastDirection; // 0x54
	private float dashCooldownTimer; // 0x5C
	private float bashCooldownTimer; // 0x60
	private bool isRunningSoundPlaying; // 0x64

	// Methods

	// RVA: 0x39A2 Offset: 0x39A2 VA: 0x39A2
	private void Awake() { }

	// RVA: 0x39A3 Offset: 0x39A3 VA: 0x39A3
	private void OnEnable() { }

	// RVA: 0x39A4 Offset: 0x39A4 VA: 0x39A4
	private void OnDisable() { }

	// RVA: 0x39A5 Offset: 0x39A5 VA: 0x39A5
	private void OnDestroy() { }

	// RVA: 0x39A6 Offset: 0x39A6 VA: 0x39A6
	private void OnGameStateChange(GameState gameState) { }

	// RVA: 0x39A7 Offset: 0x39A7 VA: 0x39A7
	private void OnRightMouseClick(InputAction.CallbackContext ctx) { }

	// RVA: 0x39A8 Offset: 0x39A8 VA: 0x39A8
	private void OnSpaceClick(InputAction.CallbackContext ctx) { }

	// RVA: 0x39A9 Offset: 0x39A9 VA: 0x39A9
	private void OnFireClick(InputAction.CallbackContext ctx) { }

	// RVA: 0x39AA Offset: 0x39AA VA: 0x39AA
	private void Update() { }

	// RVA: 0x39AB Offset: 0x39AB VA: 0x39AB
	private void MovementInput() { }

	// RVA: 0x39AC Offset: 0x39AC VA: 0x39AC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x39AD Offset: 0x39AD VA: 0x39AD
	private void <OnEnable>b__20_0(InputAction.CallbackContext ctx) { }

	[CompilerGenerated]
	// RVA: 0x39AE Offset: 0x39AE VA: 0x39AE
	private void <OnEnable>b__20_1(InputAction.CallbackContext ctx) { }

	[CompilerGenerated]
	// RVA: 0x39AF Offset: 0x39AF VA: 0x39AF
	private void <OnEnable>b__20_2(InputAction.CallbackContext ctx) { }

	[CompilerGenerated]
	// RVA: 0x39B0 Offset: 0x39B0 VA: 0x39B0
	private void <OnEnable>b__20_3(InputAction.CallbackContext ctx) { }

	[CompilerGenerated]
	// RVA: 0x39B1 Offset: 0x39B1 VA: 0x39B1
	private void <OnDisable>b__21_0(InputAction.CallbackContext ctx) { }

	[CompilerGenerated]
	// RVA: 0x39B2 Offset: 0x39B2 VA: 0x39B2
	private void <OnDisable>b__21_1(InputAction.CallbackContext ctx) { }

	[CompilerGenerated]
	// RVA: 0x39B3 Offset: 0x39B3 VA: 0x39B3
	private void <OnDisable>b__21_2(InputAction.CallbackContext ctx) { }

	[CompilerGenerated]
	// RVA: 0x39B4 Offset: 0x39B4 VA: 0x39B4
	private void <OnDisable>b__21_3(InputAction.CallbackContext ctx) { }
}

===== C# end =====
*/

// ---- PlayerControl$$Awake ----
// C#: void PlayerControl__Awake (PlayerControl_o* __this, const MethodInfo* method);

void PlayerControl__Awake(PlayerControl_o *__this,MethodInfo *method)

{
  Player_o *pPVar1;
  BeamByPlayer_o *pBVar2;
  InventoryManager_o *pIVar3;
  ItemConsumer_o *pIVar4;
  InputSystem_Actions_o *__this_00;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 param1;
  
  if (DAT_ram_00664948 == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567e2c);
    unnamed_function_1099(&DAT_ram_00567eb4);
    unnamed_function_1099(&DAT_ram_00567eb8);
    unnamed_function_1099(&DAT_ram_00567ef0);
    unnamed_function_1099(&InputSystem_Actions_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b924);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664948 = '\x01';
  }
  pPVar1 = (Player_o *)unnamed_function_65370(__this,DAT_ram_00567ef0);
  __this->player = pPVar1;
  pBVar2 = (BeamByPlayer_o *)unnamed_function_65370(__this,DAT_ram_00567e2c);
  __this->beamByPlayer = pBVar2;
  pIVar3 = (InventoryManager_o *)unnamed_function_65370(__this,DAT_ram_00567eb4);
  __this->inventoryManager = pIVar3;
  pIVar4 = (ItemConsumer_o *)unnamed_function_65370(__this,DAT_ram_00567eb8);
  __this->useItem = pIVar4;
  __this_00 = (InputSystem_Actions_o *)unnamed_function_95402(InputSystem_Actions_TypeInfo);
  InputSystem_Actions___ctor(__this_00,(MethodInfo *)0x0);
  __this->inputSystem_Actions = __this_00;
  iVar7 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = unnamed_function_95087(iVar7);
  }
  iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 8);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = unnamed_function_95087(iVar7);
  }
  iVar8 = **(int **)(iVar7 + 0x5c);
  param1 = *(undefined4 *)(iVar8 + 0x20);
  uVar5 = unnamed_function_95402(System_Action_GameState__TypeInfo);
  unnamed_function_60038(uVar5,__this,DAT_ram_0056b924,0);
  iVar7 = unnamed_function_85158(param1,uVar5,0);
  uVar5 = System_Action_GameState__TypeInfo;
  if (iVar7 == 0) {
    *(undefined4 *)(iVar8 + 0x20) = 0;
    return;
  }
  iVar6 = unnamed_function_1112(iVar7,System_Action_GameState__TypeInfo);
  if (iVar6 == 0) {
    unnamed_function_1116(iVar7,uVar5);
    do {
      halt_trap();
    } while( true );
  }
  *(int *)(iVar8 + 0x20) = iVar6;
  uVar5 = System_Action_GameState__TypeInfo;
  iVar8 = unnamed_function_1112(iVar7,System_Action_GameState__TypeInfo);
  if (iVar8 != 0) {
    return;
  }
  unnamed_function_1116(iVar7,uVar5);
  do {
    halt_trap();
  } while( true );
}

// ---- PlayerControl$$OnEnable ----
// C#: void PlayerControl__OnEnable (PlayerControl_o* __this, const MethodInfo* method);

void PlayerControl__OnEnable(PlayerControl_o *__this,MethodInfo *method)

{
  UnityEngine_InputSystem_InputAction_o *pUVar1;
  undefined4 uVar2;
  InputAction_o *pIVar3;
  int param1;
  InputSystem_Actions_UIActions_o local_10;
  InputSystem_Actions_PlayerActions_o local_8;
  
  if (DAT_ram_00664949 == '\0') {
    unnamed_function_1099(&System_Action_InputAction_CallbackContext__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b920);
    unnamed_function_1099(&DAT_ram_0056b928);
    unnamed_function_1099(&DAT_ram_0056b92c);
    unnamed_function_1099(&DAT_ram_0056b910);
    unnamed_function_1099(&DAT_ram_0056b914);
    unnamed_function_1099(&DAT_ram_0056b918);
    unnamed_function_1099(&DAT_ram_0056b91c);
    unnamed_function_1099(&DAT_ram_0056f704);
    unnamed_function_1099(&PlayerControl___c_TypeInfo);
    DAT_ram_00664949 = '\x01';
  }
  local_8.klass = __this->inputSystem_Actions;
  pUVar1 = InputSystem_Actions_PlayerActions__get_Move(&local_8,(MethodInfo *)0x0);
  __this->move = (InputAction_o *)pUVar1;
  local_8.klass = __this->inputSystem_Actions;
  pUVar1 = InputSystem_Actions_PlayerActions__get_Fire(&local_8,(MethodInfo *)0x0);
  __this->fire = (InputAction_o *)pUVar1;
  local_8.klass = __this->inputSystem_Actions;
  pUVar1 = InputSystem_Actions_PlayerActions__get_Beam(&local_8,(MethodInfo *)0x0);
  __this->beam = (InputAction_o *)pUVar1;
  local_8.klass = __this->inputSystem_Actions;
  pUVar1 = InputSystem_Actions_PlayerActions__get_RightClick(&local_8,(MethodInfo *)0x0);
  __this->rightClick = (InputAction_o *)pUVar1;
  local_8.klass = __this->inputSystem_Actions;
  pUVar1 = InputSystem_Actions_PlayerActions__get_SpaceClick(&local_8,(MethodInfo *)0x0);
  __this->spaceClick = (InputAction_o *)pUVar1;
  local_10.klass = __this->inputSystem_Actions;
  pUVar1 = InputSystem_Actions_UIActions__get_OpenInventory(&local_10,(MethodInfo *)0x0);
  __this->openInventory = (InputAction_o *)pUVar1;
  local_10.klass = __this->inputSystem_Actions;
  pUVar1 = InputSystem_Actions_UIActions__get_UseItem(&local_10,(MethodInfo *)0x0);
  __this->useItemAction = (InputAction_o *)pUVar1;
  local_8.klass = __this->inputSystem_Actions;
  pUVar1 = InputSystem_Actions_PlayerActions__get_Rest(&local_8,(MethodInfo *)0x0);
  __this->restAction = (InputAction_o *)pUVar1;
  unnamed_function_48914(__this->move,0);
  unnamed_function_48914(__this->fire,0);
  unnamed_function_48914(__this->beam,0);
  unnamed_function_48914(__this->rightClick,0);
  unnamed_function_48914(__this->spaceClick,0);
  unnamed_function_48914(__this->useItemAction,0);
  unnamed_function_48914(__this->restAction,0);
  pIVar3 = __this->fire;
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar2,__this,DAT_ram_0056b920,0);
  unnamed_function_48903(pIVar3,uVar2,0);
  pIVar3 = __this->beam;
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar2,__this,DAT_ram_0056b910,0);
  unnamed_function_48903(pIVar3,uVar2,0);
  pIVar3 = __this->rightClick;
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar2,__this,DAT_ram_0056b928,0);
  unnamed_function_48903(pIVar3,uVar2,0);
  pIVar3 = __this->rightClick;
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar2,__this,DAT_ram_0056b914,0);
  unnamed_function_48901(pIVar3,uVar2,0);
  pIVar3 = __this->spaceClick;
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar2,__this,DAT_ram_0056b92c,0);
  unnamed_function_48903(pIVar3,uVar2,0);
  pIVar3 = __this->openInventory;
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar2,__this,DAT_ram_0056b918,0);
  unnamed_function_48903(pIVar3,uVar2,0);
  pIVar3 = __this->useItemAction;
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar2,__this,DAT_ram_0056b91c,0);
  unnamed_function_48903(pIVar3,uVar2,0);
  pIVar3 = __this->restAction;
  if (*(int *)(PlayerControl___c_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(PlayerControl___c_TypeInfo);
  }
  param1 = *(int *)(*(int *)(PlayerControl___c_TypeInfo + 0x5c) + 4);
  if (param1 == 0) {
    if (*(int *)(PlayerControl___c_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(PlayerControl___c_TypeInfo);
    }
    uVar2 = **(undefined4 **)(PlayerControl___c_TypeInfo + 0x5c);
    param1 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    unnamed_function_60160(param1,uVar2,DAT_ram_0056f704,0);
    *(int *)(*(int *)(PlayerControl___c_TypeInfo + 0x5c) + 4) = param1;
  }
  unnamed_function_48903(pIVar3,param1,0);
  return;
}

// ---- PlayerControl$$OnDisable ----
// C#: void PlayerControl__OnDisable (PlayerControl_o* __this, const MethodInfo* method);

void PlayerControl__OnDisable(PlayerControl_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  InputAction_o *pIVar2;
  int param1;
  
  if (DAT_ram_0066494a == '\0') {
    unnamed_function_1099(&System_Action_InputAction_CallbackContext__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b920);
    unnamed_function_1099(&DAT_ram_0056b928);
    unnamed_function_1099(&DAT_ram_0056b92c);
    unnamed_function_1099(&DAT_ram_0056b900);
    unnamed_function_1099(&DAT_ram_0056b904);
    unnamed_function_1099(&DAT_ram_0056b908);
    unnamed_function_1099(&DAT_ram_0056b90c);
    unnamed_function_1099(&DAT_ram_0056f700);
    unnamed_function_1099(&PlayerControl___c_TypeInfo);
    DAT_ram_0066494a = '\x01';
  }
  unnamed_function_48915(__this->move,0);
  unnamed_function_48915(__this->fire,0);
  unnamed_function_48915(__this->beam,0);
  unnamed_function_48915(__this->rightClick,0);
  unnamed_function_48915(__this->spaceClick,0);
  unnamed_function_48915(__this->openInventory,0);
  unnamed_function_48915(__this->useItemAction,0);
  unnamed_function_48915(__this->restAction,0);
  pIVar2 = __this->fire;
  uVar1 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar1,__this,DAT_ram_0056b920,0);
  unnamed_function_48904(pIVar2,uVar1,0);
  pIVar2 = __this->beam;
  uVar1 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar1,__this,DAT_ram_0056b900,0);
  unnamed_function_48904(pIVar2,uVar1,0);
  pIVar2 = __this->rightClick;
  uVar1 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar1,__this,DAT_ram_0056b928,0);
  unnamed_function_48904(pIVar2,uVar1,0);
  pIVar2 = __this->rightClick;
  uVar1 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar1,__this,DAT_ram_0056b904,0);
  unnamed_function_48902(pIVar2,uVar1,0);
  pIVar2 = __this->spaceClick;
  uVar1 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar1,__this,DAT_ram_0056b92c,0);
  unnamed_function_48904(pIVar2,uVar1,0);
  pIVar2 = __this->openInventory;
  uVar1 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar1,__this,DAT_ram_0056b908,0);
  unnamed_function_48904(pIVar2,uVar1,0);
  pIVar2 = __this->useItemAction;
  uVar1 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  unnamed_function_60160(uVar1,__this,DAT_ram_0056b90c,0);
  unnamed_function_48904(pIVar2,uVar1,0);
  pIVar2 = __this->restAction;
  if (*(int *)(PlayerControl___c_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(PlayerControl___c_TypeInfo);
  }
  param1 = *(int *)(*(int *)(PlayerControl___c_TypeInfo + 0x5c) + 8);
  if (param1 == 0) {
    if (*(int *)(PlayerControl___c_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(PlayerControl___c_TypeInfo);
    }
    uVar1 = **(undefined4 **)(PlayerControl___c_TypeInfo + 0x5c);
    param1 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    unnamed_function_60160(param1,uVar1,DAT_ram_0056f700,0);
    *(int *)(*(int *)(PlayerControl___c_TypeInfo + 0x5c) + 8) = param1;
  }
  unnamed_function_48904(pIVar2,param1,0);
  return;
}

// ---- PlayerControl$$OnDestroy ----
// C#: void PlayerControl__OnDestroy (PlayerControl_o* __this, const MethodInfo* method);

void PlayerControl__OnDestroy(PlayerControl_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 param1;
  
  if (DAT_ram_0066494b == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b924);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_0066494b = '\x01';
  }
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
  unnamed_function_60038(uVar1,__this,DAT_ram_0056b924,0);
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
  if (iVar4 != 0) {
    return;
  }
  unnamed_function_1116(iVar3,uVar1);
  do {
    halt_trap();
  } while( true );
}

// ---- PlayerControl$$OnGameStateChange ----
// C#: void PlayerControl__OnGameStateChange (PlayerControl_o* __this, int32_t gameState, const MethodInfo* method);

void PlayerControl__OnGameStateChange
               (PlayerControl_o *__this,GameState gameState,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 param1;
  
  if (DAT_ram_0066494c == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b924);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_0066494c = '\x01';
  }
  if ((gameState & ~Begin) == Instruct) {
    unnamed_function_48914(__this->openInventory,0);
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
    unnamed_function_60038(uVar1,__this,DAT_ram_0056b924,0);
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

// ---- PlayerControl$$OnRightMouseClick ----
// C#: void PlayerControl__OnRightMouseClick (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl__OnRightMouseClick
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  float fVar1;
  int iVar2;
  
  fVar1 = unnamed_function_44880(0);
  if (__this->bashCooldownTimer < fVar1) {
    fVar1 = unnamed_function_44880(0);
    __this->bashCooldownTimer = fVar1 + 0.5;
    BashEvent__CallOnBashEvent(__this->player->bashEvent,ActiveBash,(MethodInfo *)__this);
    if (DAT_ram_006649ba == '\0') {
      unnamed_function_1099(&StaticEventHandler_TypeInfo);
      DAT_ram_006649ba = '\x01';
    }
    iVar2 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x18);
    if (iVar2 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    }
  }
  return;
}

// ---- PlayerControl$$OnSpaceClick ----
// C#: void PlayerControl__OnSpaceClick (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl__OnSpaceClick
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  float fVar1;
  int iVar2;
  DashEvent_o *pDVar3;
  Action_o *pAVar4;
  Vector2_o VVar5;
  float fVar6;
  
  if (DAT_ram_0066494d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_0066494d = '\x01';
  }
  VVar5 = __this->direction;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  fVar1 = VVar5.x - (float)**(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  fVar6 = VVar5.y - (float)((ulonglong)**(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c) >>
                           0x20);
  if ((9.9999994e-11 <= fVar1 * fVar1 + fVar6 * fVar6) &&
     (fVar1 = unnamed_function_44878(0), __this->dashCooldownTimer < fVar1)) {
    iVar2 = *(int *)(DAT_ram_00565d6c + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = unnamed_function_95087(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = unnamed_function_95087(iVar2);
    }
    SoundEffectManager__PlaySoundEffect
              ((SoundEffectManager_o *)**(undefined4 **)(iVar2 + 0x5c),
               __this->player->dashSoundEffect,(MethodInfo *)__this);
    fVar1 = unnamed_function_44878(0);
    __this->dashCooldownTimer = fVar1 + 1.0;
    VVar5 = __this->direction;
    pDVar3 = __this->player->dashEvent;
    if (DAT_ram_00664986 == '\0') {
      unnamed_function_1099(&DashEventArgs_TypeInfo);
      DAT_ram_00664986 = '\x01';
    }
    pAVar4 = pDVar3->OnDashEvent;
    if (pAVar4 != (Action_o *)0x0) {
      iVar2 = unnamed_function_95402(DashEventArgs_TypeInfo);
      if (DAT_ram_00664987 == '\0') {
        unnamed_function_1099(&System_EventArgs_TypeInfo);
        DAT_ram_00664987 = '\x01';
      }
      if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(System_EventArgs_TypeInfo);
      }
      *(Vector2_o *)(iVar2 + 8) = VVar5;
      (**(code **)((ulonglong)(uint)pAVar4[3]._opaque * 4))
                (pAVar4[8]._opaque,pDVar3,iVar2,pAVar4[5]._opaque);
    }
    if (DAT_ram_006649bd == '\0') {
      unnamed_function_1099(&StaticEventHandler_TypeInfo);
      DAT_ram_006649bd = '\x01';
    }
    iVar2 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x1c);
    if (iVar2 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    }
  }
  return;
}

// ---- PlayerControl$$OnFireClick ----
// C#: void PlayerControl__OnFireClick (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl__OnFireClick
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  if (10.0 < __this->player->stamina->currentStamina) {
    AttackEvent__CallAttackEvent(__this->player->attackEvent,(MethodInfo *)0x0);
  }
  return;
}

// ---- PlayerControl$$Update ----
// C#: void PlayerControl__Update (PlayerControl_o* __this, const MethodInfo* method);

void PlayerControl__Update(PlayerControl_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if (DAT_ram_0066494e == '\0') {
    unnamed_function_1099(&DAT_ram_0056a010);
    DAT_ram_0066494e = '\x01';
  }
  PlayerControl__MovementInput(__this,(MethodInfo *)__this);
  fVar1 = unnamed_function_73970(__this->rightClick,DAT_ram_0056a010);
  if (0.0 < fVar1) {
    BashEvent__CallOnBashEvent(__this->player->bashEvent,DuringBash,(MethodInfo *)__this);
  }
  return;
}

// ---- PlayerControl$$MovementInput ----
// C#: void PlayerControl__MovementInput (PlayerControl_o* __this, const MethodInfo* method);

void PlayerControl__MovementInput(PlayerControl_o *__this,MethodInfo *method)

{
  AimDirection aimDirection;
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  float fVar2;
  MovementByVelocityEvent_o *pMVar3;
  MovementDetailsSO_o *pMVar4;
  int iVar5;
  IdleEvent_o *pIVar6;
  Action_o *pAVar7;
  Vector2_o VVar8;
  float fVar9;
  Vector2_o local_108;
  Vector2_o local_100;
  Vector2_o local_f8;
  Vector2_o local_f0;
  Vector2_o local_e8;
  Vector2_o local_e0;
  Vector2_o local_d8;
  Vector2_o local_d0;
  Vector2_o local_c8;
  Vector2_o local_c0;
  Vector2_o local_b8;
  Vector2_o local_b0;
  Vector2_o local_a8;
  Vector2_o local_a0;
  Vector2_o local_98;
  Vector2_o local_90;
  undefined8 local_88;
  Vector2_o local_80;
  undefined8 local_78;
  Vector2_o local_70;
  undefined8 local_68;
  Vector2_o local_60;
  undefined8 local_58;
  Vector2_o local_50;
  undefined8 local_48;
  Vector2_o local_40;
  undefined8 local_38;
  Vector2_o local_30;
  undefined8 local_28;
  Vector2_o local_20;
  undefined8 local_18;
  Vector2_o local_10;
  float4 local_8;
  float4 local_4;
  
  aimDirection = Up;
  if (DAT_ram_0066494f == '\0') {
    unnamed_function_1099(&DAT_ram_0056a010);
    unnamed_function_1099(&DAT_ram_0056a014);
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_0066494f = '\x01';
  }
  unnamed_function_73973(&local_8,__this->move,DAT_ram_0056a014);
  if (((((float)local_8 == 0.0 && (float)local_4 != 0.0) ||
       (((float)local_8 != 0.0 && ((float)local_4 == 0.0)))) && ((__this->direction).x != 0.0)) &&
     ((__this->direction).y != 0.0)) {
    __this->lastMoveDirection = __this->direction;
  }
  unnamed_function_73973(&local_8,__this->move,DAT_ram_0056a014);
  VVar8.y = (float)local_4;
  VVar8.x = (float)local_8;
  __this->direction = VVar8;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  fVar2 = (float)local_8 - (float)**(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  fVar9 = (float)local_4 -
          (float)((ulonglong)**(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c) >> 0x20);
  if (fVar2 * fVar2 + fVar9 * fVar9 < 9.9999994e-11) {
    if (__this->isRunningSoundPlaying != false) {
      iVar5 = *(int *)(DAT_ram_00565d6c + 0x10);
      if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = unnamed_function_95087(iVar5);
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
      if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = unnamed_function_95087(iVar5);
      }
      SoundEffectManager__StopSoundEffectLoop
                ((SoundEffectManager_o *)**(undefined4 **)(iVar5 + 0x5c),
                 (SoundEffectSO_o *)(__this->player->spawnPosition).y,(MethodInfo *)__this);
      __this->isRunningSoundPlaying = false;
    }
    pIVar6 = __this->player->idleEvent;
    pAVar7 = pIVar6->OnIdle;
    if (pAVar7 != (Action_o *)0x0) {
      (**(code **)((ulonglong)(uint)pAVar7[3]._opaque * 4))
                (pAVar7[8]._opaque,pIVar6,pAVar7[5]._opaque);
    }
    local_90 = __this->lastMoveDirection;
    fVar2 = (__this->previousLastDirection).x - local_90.x;
    fVar9 = (__this->previousLastDirection).y - local_90.y;
    if (fVar2 * fVar2 + fVar9 * fVar9 < 9.9999994e-11) {
      return;
    }
    __this->previousLastDirection = local_90;
    local_58 = 0xbf35c28fbf35c28f;
    local_98.x = -0.71;
    local_98.y = -0.71;
    local_50 = local_90;
    bVar1 = HelperUtilities__ApproximatelyEqual(&local_90,&local_98,0.01,(MethodInfo *)0x0);
    if (CONCAT31(extraout_var_03,bVar1) != 0) {
      AnimateEvent__CallAnimateEvent(__this->player->animateEvent,DownLeft,(MethodInfo *)0x0);
      return;
    }
    local_a0 = __this->lastMoveDirection;
    local_68 = 0xbf35c28f3f35c28f;
    local_a8.x = 0.71;
    local_a8.y = -0.71;
    local_60 = local_a0;
    bVar1 = HelperUtilities__ApproximatelyEqual(&local_a0,&local_a8,0.01,(MethodInfo *)0x0);
    if (CONCAT31(extraout_var_04,bVar1) == 0) {
      local_b0 = __this->lastMoveDirection;
      local_78 = 0x3f35c28fbf35c28f;
      local_b8.x = -0.71;
      local_b8.y = 0.71;
      local_70 = local_b0;
      bVar1 = HelperUtilities__ApproximatelyEqual(&local_b0,&local_b8,0.01,(MethodInfo *)0x0);
      if (CONCAT31(extraout_var_05,bVar1) != 0) {
        AnimateEvent__CallAnimateEvent(__this->player->animateEvent,UpLeft,(MethodInfo *)0x0);
        return;
      }
      local_c0 = __this->lastMoveDirection;
      local_88 = 0x3f35c28f3f35c28f;
      local_c8.x = 0.71;
      local_c8.y = 0.71;
      local_80 = local_c0;
      bVar1 = HelperUtilities__ApproximatelyEqual(&local_c0,&local_c8,0.01,(MethodInfo *)0x0);
      if (CONCAT31(extraout_var_06,bVar1) == 0) {
        return;
      }
      AnimateEvent__CallAnimateEvent(__this->player->animateEvent,UpRight,(MethodInfo *)0x0);
      return;
    }
    AnimateEvent__CallAnimateEvent(__this->player->animateEvent,DownRight,(MethodInfo *)0x0);
    return;
  }
  fVar2 = unnamed_function_73970(__this->fire,DAT_ram_0056a010);
  if (fVar2 != 0.0) {
    return;
  }
  VVar8 = __this->direction;
  if (DAT_ram_00663576 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_00663576 = '\x01';
  }
  iVar5 = *(int *)(UnityEngine_Vector2_TypeInfo + 0x5c);
  fVar2 = VVar8.x - (float)*(undefined8 *)(iVar5 + 0x10);
  fVar9 = VVar8.y - (float)((ulonglong)*(undefined8 *)(iVar5 + 0x10) >> 0x20);
  if (9.9999994e-11 <= fVar2 * fVar2 + fVar9 * fVar9) {
    aimDirection = Down;
    VVar8 = __this->direction;
    if (DAT_ram_00661a11 == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_00661a11 = '\x01';
      iVar5 = *(int *)(UnityEngine_Vector2_TypeInfo + 0x5c);
    }
    fVar2 = VVar8.x - (float)*(undefined8 *)(iVar5 + 0x18);
    fVar9 = VVar8.y - (float)((ulonglong)*(undefined8 *)(iVar5 + 0x18) >> 0x20);
    if (9.9999994e-11 <= fVar2 * fVar2 + fVar9 * fVar9) {
      aimDirection = Left;
      VVar8 = __this->direction;
      if (DAT_ram_00661a13 == '\0') {
        unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
        DAT_ram_00661a13 = '\x01';
        iVar5 = *(int *)(UnityEngine_Vector2_TypeInfo + 0x5c);
      }
      fVar2 = VVar8.x - (float)*(undefined8 *)(iVar5 + 0x20);
      fVar9 = VVar8.y - (float)((ulonglong)*(undefined8 *)(iVar5 + 0x20) >> 0x20);
      if (9.9999994e-11 <= fVar2 * fVar2 + fVar9 * fVar9) {
        aimDirection = Right;
        VVar8 = __this->direction;
        if (DAT_ram_00661a14 == '\0') {
          unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
          DAT_ram_00661a14 = '\x01';
          iVar5 = *(int *)(UnityEngine_Vector2_TypeInfo + 0x5c);
        }
        fVar2 = VVar8.x - (float)*(undefined8 *)(iVar5 + 0x28);
        fVar9 = VVar8.y - (float)((ulonglong)*(undefined8 *)(iVar5 + 0x28) >> 0x20);
        if (9.9999994e-11 <= fVar2 * fVar2 + fVar9 * fVar9) {
          local_d0 = __this->direction;
          local_18 = 0xbf35c28fbf35c28f;
          local_d8.x = -0.71;
          local_d8.y = -0.71;
          aimDirection = DownLeft;
          local_10 = local_d0;
          bVar1 = HelperUtilities__ApproximatelyEqual(&local_d0,&local_d8,0.01,(MethodInfo *)0x0);
          if (CONCAT31(extraout_var,bVar1) == 0) {
            local_e0 = __this->direction;
            local_28 = 0xbf35c28f3f35c28f;
            local_e8.x = 0.71;
            local_e8.y = -0.71;
            aimDirection = DownRight;
            local_20 = local_e0;
            bVar1 = HelperUtilities__ApproximatelyEqual(&local_e0,&local_e8,0.01,(MethodInfo *)0x0);
            if (CONCAT31(extraout_var_00,bVar1) == 0) {
              local_f0 = __this->direction;
              local_38 = 0x3f35c28fbf35c28f;
              local_f8.x = -0.71;
              local_f8.y = 0.71;
              aimDirection = UpLeft;
              local_30 = local_f0;
              bVar1 = HelperUtilities__ApproximatelyEqual
                                (&local_f0,&local_f8,0.01,(MethodInfo *)0x0);
              if (CONCAT31(extraout_var_01,bVar1) == 0) {
                local_100 = __this->direction;
                local_48 = 0x3f35c28f3f35c28f;
                local_108.x = 0.71;
                local_108.y = 0.71;
                aimDirection = UpRight;
                local_40 = local_100;
                bVar1 = HelperUtilities__ApproximatelyEqual
                                  (&local_100,&local_108,0.01,(MethodInfo *)0x0);
                if (CONCAT31(extraout_var_02,bVar1) == 0) goto code_r0x81a3e5d4;
              }
            }
          }
        }
      }
    }
  }
  AnimateEvent__CallAnimateEvent(__this->player->animateEvent,aimDirection,(MethodInfo *)0x0);
code_r0x81a3e5d4:
  VVar8 = __this->direction;
  pMVar3 = __this->player->movementByVelocityEvent;
  pMVar4 = __this->player->movementDetails;
  fVar2 = pMVar4->minMoveSpeed;
  fVar9 = pMVar4->maxMoveSpeed;
  if (fVar2 != fVar9) {
    fVar2 = unnamed_function_44583(fVar2,fVar9,0);
  }
  if (DAT_ram_00664929 == '\0') {
    unnamed_function_1099(&MovementByVelocityArgs_TypeInfo);
    DAT_ram_00664929 = '\x01';
  }
  pAVar7 = pMVar3->OnMovementByVelocity;
  if (pAVar7 != (Action_o *)0x0) {
    iVar5 = unnamed_function_95402(MovementByVelocityArgs_TypeInfo);
    if (DAT_ram_0066492a == '\0') {
      unnamed_function_1099(&System_EventArgs_TypeInfo);
      DAT_ram_0066492a = '\x01';
    }
    if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_EventArgs_TypeInfo);
    }
    *(float *)(iVar5 + 0x10) = fVar2;
    *(Vector2_o *)(iVar5 + 8) = VVar8;
    (**(code **)((ulonglong)(uint)pAVar7[3]._opaque * 4))
              (pAVar7[8]._opaque,pMVar3,iVar5,pAVar7[5]._opaque);
  }
  if (__this->isRunningSoundPlaying == false) {
    iVar5 = *(int *)(DAT_ram_00565d6c + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    SoundEffectManager__PlaySoundEffectPersistent
              ((SoundEffectManager_o *)**(undefined4 **)(iVar5 + 0x5c),
               (SoundEffectSO_o *)(__this->player->spawnPosition).y,true,(MethodInfo *)__this);
    __this->isRunningSoundPlaying = true;
  }
  return;
}

// ---- PlayerControl$$.ctor ----
// C#: void PlayerControl___ctor (PlayerControl_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

// ---- PlayerControl$$<OnEnable>b__20_0 ----
// C#: void PlayerControl___OnEnable_b__20_0 (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl___OnEnable_b__20_0
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  BeamByPlayer__Beam(__this->beamByPlayer,(MethodInfo *)__this);
  return;
}

// ---- PlayerControl$$<OnEnable>b__20_1 ----
// C#: void PlayerControl___OnEnable_b__20_1 (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl___OnEnable_b__20_1
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  BashEvent__CallOnBashEvent(__this->player->bashEvent,ReleaseBash,(MethodInfo *)__this);
  return;
}

// ---- PlayerControl$$<OnEnable>b__20_2 ----
// C#: void PlayerControl___OnEnable_b__20_2 (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl___OnEnable_b__20_2
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  InventoryManager__ToggleInventory(__this->inventoryManager,(MethodInfo *)__this);
  return;
}

// ---- PlayerControl$$<OnEnable>b__20_3 ----
// C#: void PlayerControl___OnEnable_b__20_3 (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl___OnEnable_b__20_3
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  ItemConsumer__UseItemFromHotBar(__this->useItem,(MethodInfo *)__this);
  return;
}

// ---- PlayerControl$$<OnDisable>b__21_0 ----
// C#: void PlayerControl___OnDisable_b__21_0 (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl___OnEnable_b__20_0
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  BeamByPlayer__Beam(__this->beamByPlayer,(MethodInfo *)__this);
  return;
}

// ---- PlayerControl$$<OnDisable>b__21_1 ----
// C#: void PlayerControl___OnDisable_b__21_1 (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl___OnEnable_b__20_1
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  BashEvent__CallOnBashEvent(__this->player->bashEvent,ReleaseBash,(MethodInfo *)__this);
  return;
}

// ---- PlayerControl$$<OnDisable>b__21_2 ----
// C#: void PlayerControl___OnDisable_b__21_2 (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl___OnEnable_b__20_2
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  InventoryManager__ToggleInventory(__this->inventoryManager,(MethodInfo *)__this);
  return;
}

// ---- PlayerControl$$<OnDisable>b__21_3 ----
// C#: void PlayerControl___OnDisable_b__21_3 (PlayerControl_o* __this, UnityEngine_InputSystem_InputAction_CallbackContext_o ctx, const MethodInfo* method);

void PlayerControl___OnEnable_b__20_3
               (PlayerControl_o *__this,UnityEngine_InputSystem_InputAction_CallbackContext_o *ctx,
               MethodInfo *method)

{
  ItemConsumer__UseItemFromHotBar(__this->useItem,(MethodInfo *)__this);
  return;
}

