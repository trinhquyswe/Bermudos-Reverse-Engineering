// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public static class StaticEventHandler
{
	// Fields
	private static Action<MapChangedEventArgs> OnMapChanged;
	private static Action OnMapTransition;
	private static Action<OnNoteOpenedEventArgs> OnNoteOpened;
	private static Action<OnPlayerChangedEventArgs> OnPlayerChanged;
	private static Action<OnBossChangedEventArgs> OnBossChanged;
	private static Action<OnBuildNavMeshEventArgs> OnBuildNavMesh;
	private static Action OnTriggerBash;
	private static Action OnTriggerDash;
	private static Action<OnInventoryItemChangedEventArgs> OnItemChanged;
	private static Action OnPressRestEvent;
	private static Action OnRestInBonfire;
	private static Action OnExit;
	private static Action<OnInventoryChangedEventArgs> OnInventoryChanged;
	private static Action<OnItemUIChangedEventArgs> OnItemUIEndDragChanged;
	private static Action<OnItemUIChangedEventArgs> OnItemUIHoverChanged;
	private static Action<OnItemUIChangedEventArgs> OnItemUIClickChanged;
	private static Action<OnInventoryItemChangedEventArgs> OnHotBarScrollChanged;
	private static Action<OnInventoryItemChangedEventArgs> OnMoveItemToHotBar;
	private static Action<string, int, bool> OnInstructionChanged;

	// Methods
	public static void add_OnMapChanged(Action<MapChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnMapChanged(Action<MapChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallMapChangedEvent(Map map)
	{
		// <no wasm mapping>
	}

	public static void add_OnMapTransition(Action value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnMapTransition(Action value)
	{
		// <no wasm mapping>
	}

	public static void CallMapTransitionEvent()
	{
		// <no wasm mapping>
	}

	public static void add_OnNoteOpened(Action<OnNoteOpenedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnNoteOpened(Action<OnNoteOpenedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallNoteOpenedEvent(bool isOpening, string note)
	{
		// <no wasm mapping>
	}

	public static void add_OnPlayerChanged(Action<OnPlayerChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnPlayerChanged(Action<OnPlayerChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallPlayerChangedEvent(Player player)
	{
		// <no wasm mapping>
	}

	public static void add_OnBossChanged(Action<OnBossChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnBossChanged(Action<OnBossChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallBossChangedEvent(Boss boss)
	{
		// <no wasm mapping>
	}

	public static void add_OnBuildNavMesh(Action<OnBuildNavMeshEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnBuildNavMesh(Action<OnBuildNavMeshEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallBuildNavMeshEvent(bool isBuildWhenMapChanged)
	{
		// <no wasm mapping>
	}

	public static void add_OnTriggerBash(Action value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnTriggerBash(Action value)
	{
		// <no wasm mapping>
	}

	public static void CallTriggerBashEvent()
	{
		// <no wasm mapping>
	}

	public static void add_OnTriggerDash(Action value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnTriggerDash(Action value)
	{
		// <no wasm mapping>
	}

	public static void CallTriggerDashEvent()
	{
		// <no wasm mapping>
	}

	public static void add_OnItemChanged(Action<OnInventoryItemChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnItemChanged(Action<OnInventoryItemChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallItemChangedEvent(InventoryItem inventoryItem)
	{
		// <no wasm mapping>
	}

	public static void add_OnPressRestEvent(Action value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnPressRestEvent(Action value)
	{
		// <no wasm mapping>
	}

	public static void CallPressRestEvent()
	{
		// <no wasm mapping>
	}

	public static void add_OnRestInBonfire(Action value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnRestInBonfire(Action value)
	{
		// <no wasm mapping>
	}

	public static void CallRestInBonfireEvent()
	{
		// <no wasm mapping>
	}

	public static void add_OnExit(Action value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnExit(Action value)
	{
		// <no wasm mapping>
	}

	public static void CallExitEvent()
	{
		// <no wasm mapping>
	}

	public static void add_OnInventoryChanged(Action<OnInventoryChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnInventoryChanged(Action<OnInventoryChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallInventoryChangedEvent(Inventory inventory)
	{
		// <no wasm mapping>
	}

	public static void add_OnItemUIEndDragChanged(Action<OnItemUIChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnItemUIEndDragChanged(Action<OnItemUIChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallItemUIEndDragChangedEvent(ItemUI itemUI)
	{
		// <no wasm mapping>
	}

	public static void add_OnItemUIHoverChanged(Action<OnItemUIChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnItemUIHoverChanged(Action<OnItemUIChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallItemUIHoverChangedEvent(ItemUI itemUI)
	{
		// <no wasm mapping>
	}

	public static void add_OnItemUIClickChanged(Action<OnItemUIChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnItemUIClickChanged(Action<OnItemUIChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallItemUIClickChangedEvent(ItemUI itemUI)
	{
		// <no wasm mapping>
	}

	public static void add_OnHotBarScrollChanged(Action<OnInventoryItemChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnHotBarScrollChanged(Action<OnInventoryItemChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallHotBarScrollChangedEvent(InventoryItem inventoryItem)
	{
		// <no wasm mapping>
	}

	public static void add_OnMoveItemToHotBar(Action<OnInventoryItemChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnMoveItemToHotBar(Action<OnInventoryItemChangedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public static void CallMoveItemToHotBarEvent(InventoryItem inventoryItem)
	{
		// <no wasm mapping>
	}

	public static void add_OnInstructionChanged(Action<string, int, bool> value)
	{
		// <no wasm mapping>
	}

	public static void remove_OnInstructionChanged(Action<string, int, bool> value)
	{
		// <no wasm mapping>
	}

	public static void CallInstructionChangedEvent(string instructionText, int displayCount = -1, bool isActive = True)
	{
		// <no wasm mapping>
	}

}
