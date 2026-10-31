// Assembly-CSharp :: BossMap
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class BossMap : Map // TypeDefIndex: 5663
{
	// Fields
	[SerializeField]
	private GameObject NorthOfTheForestToTheForest; // 0x1C

	// Methods

	// RVA: 0x3930 Offset: 0x3930 VA: 0x3930
	private void Start() { }

	// RVA: 0x3931 Offset: 0x3931 VA: 0x3931
	private void OnEnable() { }

	// RVA: 0x3932 Offset: 0x3932 VA: 0x3932
	private void OnDisable() { }

	// RVA: 0x3933 Offset: 0x3933 VA: 0x3933
	private void OnGameStateChanged_Map(GameState gameState) { }

	// RVA: 0x3934 Offset: 0x3934 VA: 0x3934
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BossMap$$Start ----
// C#: void BossMap__Start (BossMap_o* __this, const MethodInfo* method);

void BossMap__Start(BossMap_o *__this,MethodInfo *method)

{
  MapChangedEventArgs_o *__this_00;
  int iVar1;
  
  if (DAT_ram_006649a8 == '\0') {
    unnamed_function_1099(&MapChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649a8 = '\x01';
  }
  iVar1 = **(int **)(StaticEventHandler_TypeInfo + 0x5c);
  if (iVar1 != 0) {
    __this_00 = (MapChangedEventArgs_o *)unnamed_function_95402(MapChangedEventArgs_TypeInfo);
    MapChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
    *(BossMap_o **)&__this_00->map = __this;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this_00,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- BossMap$$OnEnable ----
// C#: void BossMap__OnEnable (BossMap_o* __this, const MethodInfo* method);

void BossMap__OnEnable(BossMap_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 param1;
  
  if (DAT_ram_0066490a == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_005678a8);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_0066490a = '\x01';
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
  unnamed_function_60038(uVar1,__this,DAT_ram_005678a8,0);
  iVar3 = unnamed_function_85158(param1,uVar1,0);
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

// ---- BossMap$$OnDisable ----
// C#: void BossMap__OnDisable (BossMap_o* __this, const MethodInfo* method);

void BossMap__OnDisable(BossMap_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 param1;
  
  if (DAT_ram_0066490b == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_005678a8);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_0066490b = '\x01';
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
  unnamed_function_60038(uVar1,__this,DAT_ram_005678a8,0);
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

// ---- BossMap$$OnGameStateChanged_Map ----
// C#: void BossMap__OnGameStateChanged_Map (BossMap_o* __this, int32_t gameState, const MethodInfo* method);

void BossMap__OnGameStateChanged_Map(BossMap_o *__this,GameState gameState,MethodInfo *method)

{
  int iVar1;
  GameObject_o *param1;
  undefined4 param2;
  
  if (DAT_ram_0066490c == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_0066490c = '\x01';
  }
  if (gameState == EngagedBoss) {
    param1 = __this->NorthOfTheForestToTheForest;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar1 = unnamed_function_44679(param1,0,0);
    if (iVar1 == 0) {
      return;
    }
    if (DAT_ram_00664910 == '\0') {
      unnamed_function_1099(&StringLiteral_11508 /* "isBossDefeated" */);
      DAT_ram_00664910 = '\x01';
    }
    iVar1 = unnamed_function_44561(StringLiteral_11508 /* "isBossDefeated" */,0);
    if ((iVar1 == 0) || (iVar1 = unnamed_function_44554(StringLiteral_11508 /* "isBossDefeated" */,0), iVar1 != 1)) {
      param2 = 0;
    }
    else {
      param2 = 1;
    }
  }
  else {
    if (gameState != Won) {
      return;
    }
    param2 = 1;
  }
  unnamed_function_44686(__this->NorthOfTheForestToTheForest,param2,0);
  return;
}

// ---- BossMap$$.ctor ----
// C#: void BossMap___ctor (BossMap_o* __this, const MethodInfo* method);

void BossMap___ctor(BossMap_o *__this,MethodInfo *method)

{
  __this->pad_8[0xc] = 0;
  __this->pad_8[0xd] = 0;
  __this->pad_8[0xe] = 0x20;
  __this->pad_8[0xf] = 0x41;
  unnamed_function_44622(__this,0);
  return;
}

