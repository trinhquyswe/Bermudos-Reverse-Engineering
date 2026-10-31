// Assembly-CSharp :: StaticEventHandler
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public static class StaticEventHandler // TypeDefIndex: 5720
{
	// Fields
	[CompilerGenerated]
	private static Action<MapChangedEventArgs> OnMapChanged; // 0x0
	[CompilerGenerated]
	private static Action OnMapTransition; // 0x4
	[CompilerGenerated]
	private static Action<OnNoteOpenedEventArgs> OnNoteOpened; // 0x8
	[CompilerGenerated]
	private static Action<OnPlayerChangedEventArgs> OnPlayerChanged; // 0xC
	[CompilerGenerated]
	private static Action<OnBossChangedEventArgs> OnBossChanged; // 0x10
	[CompilerGenerated]
	private static Action<OnBuildNavMeshEventArgs> OnBuildNavMesh; // 0x14
	[CompilerGenerated]
	private static Action OnTriggerBash; // 0x18
	[CompilerGenerated]
	private static Action OnTriggerDash; // 0x1C
	[CompilerGenerated]
	private static Action<OnInventoryItemChangedEventArgs> OnItemChanged; // 0x20
	[CompilerGenerated]
	private static Action OnPressRestEvent; // 0x24
	[CompilerGenerated]
	private static Action OnRestInBonfire; // 0x28
	[CompilerGenerated]
	private static Action OnExit; // 0x2C
	[CompilerGenerated]
	private static Action<OnInventoryChangedEventArgs> OnInventoryChanged; // 0x30
	[CompilerGenerated]
	private static Action<OnItemUIChangedEventArgs> OnItemUIEndDragChanged; // 0x34
	[CompilerGenerated]
	private static Action<OnItemUIChangedEventArgs> OnItemUIHoverChanged; // 0x38
	[CompilerGenerated]
	private static Action<OnItemUIChangedEventArgs> OnItemUIClickChanged; // 0x3C
	[CompilerGenerated]
	private static Action<OnInventoryItemChangedEventArgs> OnHotBarScrollChanged; // 0x40
	[CompilerGenerated]
	private static Action<OnInventoryItemChangedEventArgs> OnMoveItemToHotBar; // 0x44
	[CompilerGenerated]
	private static Action<string, int, bool> OnInstructionChanged; // 0x48

	// Methods

	[CompilerGenerated]
	// RVA: 0x3A65 Offset: 0x3A65 VA: 0x3A65
	public static void add_OnMapChanged(Action<MapChangedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A66 Offset: 0x3A66 VA: 0x3A66
	public static void remove_OnMapChanged(Action<MapChangedEventArgs> value) { }

	// RVA: 0x3A67 Offset: 0x3A67 VA: 0x3A67
	public static void CallMapChangedEvent(Map map) { }

	[CompilerGenerated]
	// RVA: 0x3A68 Offset: 0x3A68 VA: 0x3A68
	public static void add_OnMapTransition(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3A69 Offset: 0x3A69 VA: 0x3A69
	public static void remove_OnMapTransition(Action value) { }

	// RVA: 0x3A6A Offset: 0x3A6A VA: 0x3A6A
	public static void CallMapTransitionEvent() { }

	[CompilerGenerated]
	// RVA: 0x3A6B Offset: 0x3A6B VA: 0x3A6B
	public static void add_OnNoteOpened(Action<OnNoteOpenedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A6C Offset: 0x3A6C VA: 0x3A6C
	public static void remove_OnNoteOpened(Action<OnNoteOpenedEventArgs> value) { }

	// RVA: 0x3A6D Offset: 0x3A6D VA: 0x3A6D
	public static void CallNoteOpenedEvent(bool isOpening, string note) { }

	[CompilerGenerated]
	// RVA: 0x3A6E Offset: 0x3A6E VA: 0x3A6E
	public static void add_OnPlayerChanged(Action<OnPlayerChangedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A6F Offset: 0x3A6F VA: 0x3A6F
	public static void remove_OnPlayerChanged(Action<OnPlayerChangedEventArgs> value) { }

	// RVA: 0x3A70 Offset: 0x3A70 VA: 0x3A70
	public static void CallPlayerChangedEvent(Player player) { }

	[CompilerGenerated]
	// RVA: 0x3A71 Offset: 0x3A71 VA: 0x3A71
	public static void add_OnBossChanged(Action<OnBossChangedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A72 Offset: 0x3A72 VA: 0x3A72
	public static void remove_OnBossChanged(Action<OnBossChangedEventArgs> value) { }

	// RVA: 0x3A73 Offset: 0x3A73 VA: 0x3A73
	public static void CallBossChangedEvent(Boss boss) { }

	[CompilerGenerated]
	// RVA: 0x3A74 Offset: 0x3A74 VA: 0x3A74
	public static void add_OnBuildNavMesh(Action<OnBuildNavMeshEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A75 Offset: 0x3A75 VA: 0x3A75
	public static void remove_OnBuildNavMesh(Action<OnBuildNavMeshEventArgs> value) { }

	// RVA: 0x3A76 Offset: 0x3A76 VA: 0x3A76
	public static void CallBuildNavMeshEvent(bool isBuildWhenMapChanged) { }

	[CompilerGenerated]
	// RVA: 0x3A77 Offset: 0x3A77 VA: 0x3A77
	public static void add_OnTriggerBash(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3A78 Offset: 0x3A78 VA: 0x3A78
	public static void remove_OnTriggerBash(Action value) { }

	// RVA: 0x3A79 Offset: 0x3A79 VA: 0x3A79
	public static void CallTriggerBashEvent() { }

	[CompilerGenerated]
	// RVA: 0x3A7A Offset: 0x3A7A VA: 0x3A7A
	public static void add_OnTriggerDash(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3A7B Offset: 0x3A7B VA: 0x3A7B
	public static void remove_OnTriggerDash(Action value) { }

	// RVA: 0x3A7C Offset: 0x3A7C VA: 0x3A7C
	public static void CallTriggerDashEvent() { }

	[CompilerGenerated]
	// RVA: 0x3A7D Offset: 0x3A7D VA: 0x3A7D
	public static void add_OnItemChanged(Action<OnInventoryItemChangedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A7E Offset: 0x3A7E VA: 0x3A7E
	public static void remove_OnItemChanged(Action<OnInventoryItemChangedEventArgs> value) { }

	// RVA: 0x3A7F Offset: 0x3A7F VA: 0x3A7F
	public static void CallItemChangedEvent(InventoryItem inventoryItem) { }

	[CompilerGenerated]
	// RVA: 0x3A80 Offset: 0x3A80 VA: 0x3A80
	public static void add_OnPressRestEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3A81 Offset: 0x3A81 VA: 0x3A81
	public static void remove_OnPressRestEvent(Action value) { }

	// RVA: 0x3A82 Offset: 0x3A82 VA: 0x3A82
	public static void CallPressRestEvent() { }

	[CompilerGenerated]
	// RVA: 0x3A83 Offset: 0x3A83 VA: 0x3A83
	public static void add_OnRestInBonfire(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3A84 Offset: 0x3A84 VA: 0x3A84
	public static void remove_OnRestInBonfire(Action value) { }

	// RVA: 0x3A85 Offset: 0x3A85 VA: 0x3A85
	public static void CallRestInBonfireEvent() { }

	[CompilerGenerated]
	// RVA: 0x3A86 Offset: 0x3A86 VA: 0x3A86
	public static void add_OnExit(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3A87 Offset: 0x3A87 VA: 0x3A87
	public static void remove_OnExit(Action value) { }

	// RVA: 0x3A88 Offset: 0x3A88 VA: 0x3A88
	public static void CallExitEvent() { }

	[CompilerGenerated]
	// RVA: 0x3A89 Offset: 0x3A89 VA: 0x3A89
	public static void add_OnInventoryChanged(Action<OnInventoryChangedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A8A Offset: 0x3A8A VA: 0x3A8A
	public static void remove_OnInventoryChanged(Action<OnInventoryChangedEventArgs> value) { }

	// RVA: 0x3A8B Offset: 0x3A8B VA: 0x3A8B
	public static void CallInventoryChangedEvent(Inventory inventory) { }

	[CompilerGenerated]
	// RVA: 0x3A8C Offset: 0x3A8C VA: 0x3A8C
	public static void add_OnItemUIEndDragChanged(Action<OnItemUIChangedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A8D Offset: 0x3A8D VA: 0x3A8D
	public static void remove_OnItemUIEndDragChanged(Action<OnItemUIChangedEventArgs> value) { }

	// RVA: 0x3A8E Offset: 0x3A8E VA: 0x3A8E
	public static void CallItemUIEndDragChangedEvent(ItemUI itemUI) { }

	[CompilerGenerated]
	// RVA: 0x3A8F Offset: 0x3A8F VA: 0x3A8F
	public static void add_OnItemUIHoverChanged(Action<OnItemUIChangedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A90 Offset: 0x3A90 VA: 0x3A90
	public static void remove_OnItemUIHoverChanged(Action<OnItemUIChangedEventArgs> value) { }

	// RVA: 0x3A91 Offset: 0x3A91 VA: 0x3A91
	public static void CallItemUIHoverChangedEvent(ItemUI itemUI) { }

	[CompilerGenerated]
	// RVA: 0x3A92 Offset: 0x3A92 VA: 0x3A92
	public static void add_OnItemUIClickChanged(Action<OnItemUIChangedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A93 Offset: 0x3A93 VA: 0x3A93
	public static void remove_OnItemUIClickChanged(Action<OnItemUIChangedEventArgs> value) { }

	// RVA: 0x3A94 Offset: 0x3A94 VA: 0x3A94
	public static void CallItemUIClickChangedEvent(ItemUI itemUI) { }

	[CompilerGenerated]
	// RVA: 0x3A95 Offset: 0x3A95 VA: 0x3A95
	public static void add_OnHotBarScrollChanged(Action<OnInventoryItemChangedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A96 Offset: 0x3A96 VA: 0x3A96
	public static void remove_OnHotBarScrollChanged(Action<OnInventoryItemChangedEventArgs> value) { }

	// RVA: 0x3A97 Offset: 0x3A97 VA: 0x3A97
	public static void CallHotBarScrollChangedEvent(InventoryItem inventoryItem) { }

	[CompilerGenerated]
	// RVA: 0x3A98 Offset: 0x3A98 VA: 0x3A98
	public static void add_OnMoveItemToHotBar(Action<OnInventoryItemChangedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A99 Offset: 0x3A99 VA: 0x3A99
	public static void remove_OnMoveItemToHotBar(Action<OnInventoryItemChangedEventArgs> value) { }

	// RVA: 0x3A9A Offset: 0x3A9A VA: 0x3A9A
	public static void CallMoveItemToHotBarEvent(InventoryItem inventoryItem) { }

	[CompilerGenerated]
	// RVA: 0x3A9B Offset: 0x3A9B VA: 0x3A9B
	public static void add_OnInstructionChanged(Action<string, int, bool> value) { }

	[CompilerGenerated]
	// RVA: 0x3A9C Offset: 0x3A9C VA: 0x3A9C
	public static void remove_OnInstructionChanged(Action<string, int, bool> value) { }

	// RVA: 0x3A9D Offset: 0x3A9D VA: 0x3A9D
	public static void CallInstructionChangedEvent(string instructionText, int displayCount = -1, bool isActive = True) { }
}

===== C# end =====
*/

// ---- StaticEventHandler$$add_OnMapChanged ----
// C#: void StaticEventHandler__add_OnMapChanged (System_Action_MapChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnMapChanged
               (System_Action_MapChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649a6 == '\0') {
    unnamed_function_1099(&System_Action_MapChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649a6 = '\x01';
  }
  param1 = **(int **)(StaticEventHandler_TypeInfo + 0x5c);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_MapChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_MapChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(undefined4 *)(StaticEventHandler_TypeInfo + 0x5c),iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnMapChanged ----
// C#: void StaticEventHandler__remove_OnMapChanged (System_Action_MapChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnMapChanged
               (System_Action_MapChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649a7 == '\0') {
    unnamed_function_1099(&System_Action_MapChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649a7 = '\x01';
  }
  param1 = **(int **)(StaticEventHandler_TypeInfo + 0x5c);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_MapChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_MapChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(undefined4 *)(StaticEventHandler_TypeInfo + 0x5c),iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallMapChangedEvent ----
// C#: void StaticEventHandler__CallMapChangedEvent (Map_o* map, const MethodInfo* method);

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

// ---- StaticEventHandler$$add_OnMapTransition ----
// C#: void StaticEventHandler__add_OnMapTransition (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__add_OnMapTransition(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649a9 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649a9 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 4);
  while ((param1_00 = (int *)unnamed_function_85158(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 4,param1_00,param1)
    ;
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnMapTransition ----
// C#: void StaticEventHandler__remove_OnMapTransition (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnMapTransition(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649aa == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649aa = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 4);
  while ((param1_00 = (int *)unnamed_function_85160(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 4,param1_00,param1)
    ;
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallMapTransitionEvent ----
// C#: void StaticEventHandler__CallMapTransitionEvent (const MethodInfo* method);

void StaticEventHandler__CallMapTransitionEvent(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_006649ab == '\0') {
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649ab = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 4);
  if (iVar1 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnNoteOpened ----
// C#: void StaticEventHandler__add_OnNoteOpened (System_Action_OnNoteOpenedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnNoteOpened
               (System_Action_OnNoteOpenedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649ac == '\0') {
    unnamed_function_1099(&System_Action_OnNoteOpenedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649ac = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 8);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnNoteOpenedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnNoteOpenedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 8,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnNoteOpened ----
// C#: void StaticEventHandler__remove_OnNoteOpened (System_Action_OnNoteOpenedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnNoteOpened
               (System_Action_OnNoteOpenedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649ad == '\0') {
    unnamed_function_1099(&System_Action_OnNoteOpenedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649ad = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 8);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnNoteOpenedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnNoteOpenedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 8,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallNoteOpenedEvent ----
// C#: void StaticEventHandler__CallNoteOpenedEvent (bool isOpening, System_String_o* note, const MethodInfo* method);

void StaticEventHandler__CallNoteOpenedEvent
               (bool isOpening,System_String_o *note,MethodInfo *method)

{
  OnNoteOpenedEventArgs_o *__this;
  int iVar1;
  
  if (DAT_ram_006649ae == '\0') {
    unnamed_function_1099(&OnNoteOpenedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649ae = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 8);
  if (iVar1 != 0) {
    __this = (OnNoteOpenedEventArgs_o *)unnamed_function_95402(OnNoteOpenedEventArgs_TypeInfo);
    OnNoteOpenedEventArgs___ctor(__this,(MethodInfo *)0x0);
    __this->note = (string_o *)note;
    __this->isOpening = isOpening;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnPlayerChanged ----
// C#: void StaticEventHandler__add_OnPlayerChanged (System_Action_OnPlayerChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnPlayerChanged
               (System_Action_OnPlayerChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649af == '\0') {
    unnamed_function_1099(&System_Action_OnPlayerChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649af = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0xc);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnPlayerChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnPlayerChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0xc,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnPlayerChanged ----
// C#: void StaticEventHandler__remove_OnPlayerChanged (System_Action_OnPlayerChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnPlayerChanged
               (System_Action_OnPlayerChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649b0 == '\0') {
    unnamed_function_1099(&System_Action_OnPlayerChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b0 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0xc);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnPlayerChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnPlayerChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0xc,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallPlayerChangedEvent ----
// C#: void StaticEventHandler__CallPlayerChangedEvent (Player_o* player, const MethodInfo* method);

void StaticEventHandler__CallPlayerChangedEvent(Player_o *player,MethodInfo *method)

{
  OnPlayerChangedEventArgs_o *__this;
  int iVar1;
  
  if (DAT_ram_006649b1 == '\0') {
    unnamed_function_1099(&OnPlayerChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b1 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0xc);
  if (iVar1 != 0) {
    __this = (OnPlayerChangedEventArgs_o *)unnamed_function_95402(OnPlayerChangedEventArgs_TypeInfo)
    ;
    OnPlayerChangedEventArgs___ctor(__this,(MethodInfo *)0x0);
    __this->player = player;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnBossChanged ----
// C#: void StaticEventHandler__add_OnBossChanged (System_Action_OnBossChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnBossChanged
               (System_Action_OnBossChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649b2 == '\0') {
    unnamed_function_1099(&System_Action_OnBossChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b2 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x10);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnBossChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnBossChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x10,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnBossChanged ----
// C#: void StaticEventHandler__remove_OnBossChanged (System_Action_OnBossChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnBossChanged
               (System_Action_OnBossChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649b3 == '\0') {
    unnamed_function_1099(&System_Action_OnBossChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b3 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x10);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnBossChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnBossChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x10,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallBossChangedEvent ----
// C#: void StaticEventHandler__CallBossChangedEvent (Boss_o* boss, const MethodInfo* method);

void StaticEventHandler__CallBossChangedEvent(Boss_o *boss,MethodInfo *method)

{
  OnBossChangedEventArgs_o *__this;
  int iVar1;
  
  if (DAT_ram_006649b4 == '\0') {
    unnamed_function_1099(&OnBossChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b4 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x10);
  if (iVar1 != 0) {
    __this = (OnBossChangedEventArgs_o *)unnamed_function_95402(OnBossChangedEventArgs_TypeInfo);
    OnBossChangedEventArgs___ctor(__this,(MethodInfo *)0x0);
    __this->boss = boss;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnBuildNavMesh ----
// C#: void StaticEventHandler__add_OnBuildNavMesh (System_Action_OnBuildNavMeshEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnBuildNavMesh
               (System_Action_OnBuildNavMeshEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649b5 == '\0') {
    unnamed_function_1099(&System_Action_OnBuildNavMeshEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b5 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x14);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnBuildNavMeshEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnBuildNavMeshEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x14,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnBuildNavMesh ----
// C#: void StaticEventHandler__remove_OnBuildNavMesh (System_Action_OnBuildNavMeshEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnBuildNavMesh
               (System_Action_OnBuildNavMeshEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649b6 == '\0') {
    unnamed_function_1099(&System_Action_OnBuildNavMeshEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b6 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x14);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnBuildNavMeshEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnBuildNavMeshEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x14,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallBuildNavMeshEvent ----
// C#: void StaticEventHandler__CallBuildNavMeshEvent (bool isBuildWhenMapChanged, const MethodInfo* method);

void StaticEventHandler__CallBuildNavMeshEvent(bool isBuildWhenMapChanged,MethodInfo *method)

{
  OnBuildNavMeshEventArgs_o *__this;
  int iVar1;
  
  if (DAT_ram_006649b7 == '\0') {
    unnamed_function_1099(&OnBuildNavMeshEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b7 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x14);
  if (iVar1 != 0) {
    __this = (OnBuildNavMeshEventArgs_o *)unnamed_function_95402(OnBuildNavMeshEventArgs_TypeInfo);
    OnBuildNavMeshEventArgs___ctor(__this,(MethodInfo *)0x0);
    __this->isBuildWhenMapChanged = isBuildWhenMapChanged;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnTriggerBash ----
// C#: void StaticEventHandler__add_OnTriggerBash (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__add_OnTriggerBash(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649b8 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b8 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x18);
  while ((param1_00 = (int *)unnamed_function_85158(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x18,param1_00,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnTriggerBash ----
// C#: void StaticEventHandler__remove_OnTriggerBash (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnTriggerBash(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649b9 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649b9 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x18);
  while ((param1_00 = (int *)unnamed_function_85160(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x18,param1_00,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallTriggerBashEvent ----
// C#: void StaticEventHandler__CallTriggerBashEvent (const MethodInfo* method);

void StaticEventHandler__CallTriggerBashEvent(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_006649ba == '\0') {
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649ba = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x18);
  if (iVar1 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnTriggerDash ----
// C#: void StaticEventHandler__add_OnTriggerDash (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__add_OnTriggerDash(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649bb == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649bb = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x1c);
  while ((param1_00 = (int *)unnamed_function_85158(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x1c,param1_00,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnTriggerDash ----
// C#: void StaticEventHandler__remove_OnTriggerDash (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnTriggerDash(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649bc == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649bc = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x1c);
  while ((param1_00 = (int *)unnamed_function_85160(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x1c,param1_00,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallTriggerDashEvent ----
// C#: void StaticEventHandler__CallTriggerDashEvent (const MethodInfo* method);

void StaticEventHandler__CallTriggerDashEvent(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_006649bd == '\0') {
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649bd = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x1c);
  if (iVar1 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnItemChanged ----
// C#: void StaticEventHandler__add_OnItemChanged (System_Action_OnInventoryItemChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnItemChanged
               (System_Action_OnInventoryItemChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649be == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649be = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x20);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x20,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnItemChanged ----
// C#: void StaticEventHandler__remove_OnItemChanged (System_Action_OnInventoryItemChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnItemChanged
               (System_Action_OnInventoryItemChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649bf == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649bf = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x20);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x20,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallItemChangedEvent ----
// C#: void StaticEventHandler__CallItemChangedEvent (InventoryItem_o* inventoryItem, const MethodInfo* method);

void StaticEventHandler__CallItemChangedEvent(InventoryItem_o *inventoryItem,MethodInfo *method)

{
  OnInventoryItemChangedEventArgs_o *__this;
  int iVar1;
  
  if (DAT_ram_006649c0 == '\0') {
    unnamed_function_1099(&OnInventoryItemChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c0 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x20);
  if (iVar1 != 0) {
    __this = (OnInventoryItemChangedEventArgs_o *)
             unnamed_function_95402(OnInventoryItemChangedEventArgs_TypeInfo);
    OnInventoryItemChangedEventArgs___ctor(__this,(MethodInfo *)0x0);
    __this->inventoryItem = inventoryItem;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnPressRestEvent ----
// C#: void StaticEventHandler__add_OnPressRestEvent (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__add_OnPressRestEvent(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649c1 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c1 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x24);
  while ((param1_00 = (int *)unnamed_function_85158(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x24,param1_00,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnPressRestEvent ----
// C#: void StaticEventHandler__remove_OnPressRestEvent (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnPressRestEvent(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649c2 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c2 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x24);
  while ((param1_00 = (int *)unnamed_function_85160(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x24,param1_00,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallPressRestEvent ----
// C#: void StaticEventHandler__CallPressRestEvent (const MethodInfo* method);

void StaticEventHandler__CallPressRestEvent(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_006649c3 == '\0') {
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c3 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x24);
  if (iVar1 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnRestInBonfire ----
// C#: void StaticEventHandler__add_OnRestInBonfire (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__add_OnRestInBonfire(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649c4 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c4 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x28);
  while ((param1_00 = (int *)unnamed_function_85158(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x28,param1_00,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnRestInBonfire ----
// C#: void StaticEventHandler__remove_OnRestInBonfire (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnRestInBonfire(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649c5 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c5 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x28);
  while ((param1_00 = (int *)unnamed_function_85160(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x28,param1_00,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallRestInBonfireEvent ----
// C#: void StaticEventHandler__CallRestInBonfireEvent (const MethodInfo* method);

void StaticEventHandler__CallRestInBonfireEvent(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_006649c6 == '\0') {
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c6 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x28);
  if (iVar1 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnExit ----
// C#: void StaticEventHandler__add_OnExit (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__add_OnExit(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649c7 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c7 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x2c);
  while ((param1_00 = (int *)unnamed_function_85158(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x2c,param1_00,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnExit ----
// C#: void StaticEventHandler__remove_OnExit (System_Action_o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnExit(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  int param1;
  int *param1_00;
  int iVar2;
  
  if (DAT_ram_006649c8 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c8 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x2c);
  while ((param1_00 = (int *)unnamed_function_85160(param1,value,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x2c,param1_00,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallExitEvent ----
// C#: void StaticEventHandler__CallExitEvent (const MethodInfo* method);

void StaticEventHandler__CallExitEvent(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_006649c9 == '\0') {
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c9 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x2c);
  if (iVar1 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnInventoryChanged ----
// C#: void StaticEventHandler__add_OnInventoryChanged (System_Action_OnInventoryChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnInventoryChanged
               (System_Action_OnInventoryChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649ca == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649ca = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x30);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnInventoryChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnInventoryChangedEventArgs__TypeInfo)
       , iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x30,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnInventoryChanged ----
// C#: void StaticEventHandler__remove_OnInventoryChanged (System_Action_OnInventoryChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnInventoryChanged
               (System_Action_OnInventoryChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649cb == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649cb = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x30);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnInventoryChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnInventoryChangedEventArgs__TypeInfo)
       , iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x30,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallInventoryChangedEvent ----
// C#: void StaticEventHandler__CallInventoryChangedEvent (Inventory_o* inventory, const MethodInfo* method);

void Inventory__Start(Inventory_o *__this,MethodInfo *method)

{
  OnInventoryChangedEventArgs_o *__this_00;
  int iVar1;
  
  if (DAT_ram_006649cc == '\0') {
    unnamed_function_1099(&OnInventoryChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649cc = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x30);
  if (iVar1 != 0) {
    __this_00 = (OnInventoryChangedEventArgs_o *)
                unnamed_function_95402(OnInventoryChangedEventArgs_TypeInfo);
    OnInventoryChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
    __this_00->inventory = __this;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this_00,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnItemUIEndDragChanged ----
// C#: void StaticEventHandler__add_OnItemUIEndDragChanged (System_Action_OnItemUIChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnItemUIEndDragChanged
               (System_Action_OnItemUIChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649cd == '\0') {
    unnamed_function_1099(&System_Action_OnItemUIChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649cd = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x34);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnItemUIChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x34,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnItemUIEndDragChanged ----
// C#: void StaticEventHandler__remove_OnItemUIEndDragChanged (System_Action_OnItemUIChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnItemUIEndDragChanged
               (System_Action_OnItemUIChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649ce == '\0') {
    unnamed_function_1099(&System_Action_OnItemUIChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649ce = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x34);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnItemUIChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x34,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallItemUIEndDragChangedEvent ----
// C#: void StaticEventHandler__CallItemUIEndDragChangedEvent (ItemUI_o* itemUI, const MethodInfo* method);

void StaticEventHandler__CallItemUIEndDragChangedEvent(ItemUI_o *itemUI,MethodInfo *method)

{
  OnItemUIChangedEventArgs_o *__this;
  int iVar1;
  
  if (DAT_ram_006649cf == '\0') {
    unnamed_function_1099(&OnItemUIChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649cf = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x34);
  if (iVar1 != 0) {
    __this = (OnItemUIChangedEventArgs_o *)unnamed_function_95402(OnItemUIChangedEventArgs_TypeInfo)
    ;
    OnItemUIChangedEventArgs___ctor(__this,(MethodInfo *)0x0);
    __this->itemUI = itemUI;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnItemUIHoverChanged ----
// C#: void StaticEventHandler__add_OnItemUIHoverChanged (System_Action_OnItemUIChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnItemUIHoverChanged
               (System_Action_OnItemUIChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649d0 == '\0') {
    unnamed_function_1099(&System_Action_OnItemUIChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d0 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x38);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnItemUIChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x38,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnItemUIHoverChanged ----
// C#: void StaticEventHandler__remove_OnItemUIHoverChanged (System_Action_OnItemUIChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnItemUIHoverChanged
               (System_Action_OnItemUIChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649d1 == '\0') {
    unnamed_function_1099(&System_Action_OnItemUIChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d1 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x38);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnItemUIChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x38,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallItemUIHoverChangedEvent ----
// C#: void StaticEventHandler__CallItemUIHoverChangedEvent (ItemUI_o* itemUI, const MethodInfo* method);

void StaticEventHandler__CallItemUIHoverChangedEvent(ItemUI_o *itemUI,MethodInfo *method)

{
  OnItemUIChangedEventArgs_o *__this;
  int iVar1;
  
  if (DAT_ram_006649d2 == '\0') {
    unnamed_function_1099(&OnItemUIChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d2 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x38);
  if (iVar1 != 0) {
    __this = (OnItemUIChangedEventArgs_o *)unnamed_function_95402(OnItemUIChangedEventArgs_TypeInfo)
    ;
    OnItemUIChangedEventArgs___ctor(__this,(MethodInfo *)0x0);
    __this->itemUI = itemUI;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnItemUIClickChanged ----
// C#: void StaticEventHandler__add_OnItemUIClickChanged (System_Action_OnItemUIChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnItemUIClickChanged
               (System_Action_OnItemUIChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649d3 == '\0') {
    unnamed_function_1099(&System_Action_OnItemUIChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d3 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x3c);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnItemUIChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x3c,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnItemUIClickChanged ----
// C#: void StaticEventHandler__remove_OnItemUIClickChanged (System_Action_OnItemUIChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnItemUIClickChanged
               (System_Action_OnItemUIChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649d4 == '\0') {
    unnamed_function_1099(&System_Action_OnItemUIChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d4 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x3c);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnItemUIChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_OnItemUIChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x3c,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallItemUIClickChangedEvent ----
// C#: void StaticEventHandler__CallItemUIClickChangedEvent (ItemUI_o* itemUI, const MethodInfo* method);

void StaticEventHandler__CallItemUIClickChangedEvent(ItemUI_o *itemUI,MethodInfo *method)

{
  OnItemUIChangedEventArgs_o *__this;
  int iVar1;
  
  if (DAT_ram_006649d5 == '\0') {
    unnamed_function_1099(&OnItemUIChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d5 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x3c);
  if (iVar1 != 0) {
    __this = (OnItemUIChangedEventArgs_o *)unnamed_function_95402(OnItemUIChangedEventArgs_TypeInfo)
    ;
    OnItemUIChangedEventArgs___ctor(__this,(MethodInfo *)0x0);
    __this->itemUI = itemUI;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnHotBarScrollChanged ----
// C#: void StaticEventHandler__add_OnHotBarScrollChanged (System_Action_OnInventoryItemChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnHotBarScrollChanged
               (System_Action_OnInventoryItemChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649d6 == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d6 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x40);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x40,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnHotBarScrollChanged ----
// C#: void StaticEventHandler__remove_OnHotBarScrollChanged (System_Action_OnInventoryItemChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnHotBarScrollChanged
               (System_Action_OnInventoryItemChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649d7 == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d7 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x40);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x40,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallHotBarScrollChangedEvent ----
// C#: void StaticEventHandler__CallHotBarScrollChangedEvent (InventoryItem_o* inventoryItem, const MethodInfo* method);

void StaticEventHandler__CallHotBarScrollChangedEvent
               (InventoryItem_o *inventoryItem,MethodInfo *method)

{
  OnInventoryItemChangedEventArgs_o *__this;
  int iVar1;
  
  if (DAT_ram_006649d8 == '\0') {
    unnamed_function_1099(&OnInventoryItemChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d8 = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x40);
  if (iVar1 != 0) {
    __this = (OnInventoryItemChangedEventArgs_o *)
             unnamed_function_95402(OnInventoryItemChangedEventArgs_TypeInfo);
    OnInventoryItemChangedEventArgs___ctor(__this,(MethodInfo *)0x0);
    __this->inventoryItem = inventoryItem;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnMoveItemToHotBar ----
// C#: void StaticEventHandler__add_OnMoveItemToHotBar (System_Action_OnInventoryItemChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnMoveItemToHotBar
               (System_Action_OnInventoryItemChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649d9 == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649d9 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x44);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x44,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnMoveItemToHotBar ----
// C#: void StaticEventHandler__remove_OnMoveItemToHotBar (System_Action_OnInventoryItemChangedEventArgs__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnMoveItemToHotBar
               (System_Action_OnInventoryItemChangedEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649da == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649da = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x44);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_OnInventoryItemChangedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_00,System_Action_OnInventoryItemChangedEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x44,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallMoveItemToHotBarEvent ----
// C#: void StaticEventHandler__CallMoveItemToHotBarEvent (InventoryItem_o* inventoryItem, const MethodInfo* method);

void StaticEventHandler__CallMoveItemToHotBarEvent
               (InventoryItem_o *inventoryItem,MethodInfo *method)

{
  OnInventoryItemChangedEventArgs_o *__this;
  int iVar1;
  
  if (DAT_ram_006649db == '\0') {
    unnamed_function_1099(&OnInventoryItemChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649db = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x44);
  if (iVar1 != 0) {
    __this = (OnInventoryItemChangedEventArgs_o *)
             unnamed_function_95402(OnInventoryItemChangedEventArgs_TypeInfo);
    OnInventoryItemChangedEventArgs___ctor(__this,(MethodInfo *)0x0);
    __this->inventoryItem = inventoryItem;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),__this,*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

// ---- StaticEventHandler$$add_OnInstructionChanged ----
// C#: void StaticEventHandler__add_OnInstructionChanged (System_Action_string__int__bool__o* value, const MethodInfo* method);

void StaticEventHandler__add_OnInstructionChanged
               (System_Action_string__int__bool__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649dc == '\0') {
    unnamed_function_1099(&System_Action_string__int__bool__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649dc = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x48);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_string__int__bool__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_string__int__bool__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x48,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$remove_OnInstructionChanged ----
// C#: void StaticEventHandler__remove_OnInstructionChanged (System_Action_string__int__bool__o* value, const MethodInfo* method);

void StaticEventHandler__remove_OnInstructionChanged
               (System_Action_string__int__bool__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_006649dd == '\0') {
    unnamed_function_1099(&System_Action_string__int__bool__TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649dd = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x48);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_string__int__bool__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_string__int__bool__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x48,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaticEventHandler$$CallInstructionChangedEvent ----
// C#: void StaticEventHandler__CallInstructionChangedEvent (System_String_o* instructionText, int32_t displayCount, bool isActive, const MethodInfo* method);

void StaticEventHandler__CallInstructionChangedEvent
               (System_String_o *instructionText,int displayCount,bool isActive,MethodInfo *method)

{
  undefined3 in_register_20000021;
  int iVar1;
  
  if (DAT_ram_006649de == '\0') {
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649de = '\x01';
  }
  iVar1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x48);
  if (iVar1 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
              (*(undefined4 *)(iVar1 + 0x20),instructionText,displayCount,
               CONCAT31(in_register_20000021,isActive),*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

