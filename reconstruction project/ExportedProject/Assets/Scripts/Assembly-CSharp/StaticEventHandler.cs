using System;

// Approx: OnTriggerBash/Dash and OnExit/OnPressRestEvent/OnRestInBonfire use parameterless Action per pseudo signatures.
public static class StaticEventHandler
{
    public static Action<MapChangedEventArgs> OnMapChanged;
    public static Action OnMapTransition;
    public static Action<OnNoteOpenedEventArgs> OnNoteOpened;
    public static Action<OnPlayerChangedEventArgs> OnPlayerChanged;
    public static Action<OnBossChangedEventArgs> OnBossChanged;
    public static Action<OnBuildNavMeshEventArgs> OnBuildNavMesh;
    public static Action OnTriggerBash;
    public static Action OnTriggerDash;
    public static Action<OnInventoryItemChangedEventArgs> OnItemChanged;
    public static Action OnPressRestEvent;
    public static Action OnRestInBonfire;
    public static Action OnExit;
    public static Action<OnInventoryChangedEventArgs> OnInventoryChanged;
    public static Action<OnItemUIChangedEventArgs> OnItemUIEndDragChanged;
    public static Action<OnItemUIChangedEventArgs> OnItemUIHoverChanged;
    public static Action<OnItemUIChangedEventArgs> OnItemUIClickChanged;
    public static Action<OnInventoryItemChangedEventArgs> OnHotBarScrollChanged;
    public static Action<OnInventoryItemChangedEventArgs> OnMoveItemToHotBar;
    public static Action<string, int, bool> OnInstructionChanged;

    public static void CallMapChangedEvent(Map map)
    {
        OnMapChanged?.Invoke(new MapChangedEventArgs { map = map });
    }

    public static void CallMapTransitionEvent()
    {
        OnMapTransition?.Invoke();
    }

    public static void CallNoteOpenedEvent(bool isOpening, string note)
    {
        OnNoteOpened?.Invoke(new OnNoteOpenedEventArgs { isOpening = isOpening, note = note });
    }

    public static void CallPlayerChangedEvent(Player player)
    {
        OnPlayerChanged?.Invoke(new OnPlayerChangedEventArgs { player = player });
    }

    public static void CallBossChangedEvent(Boss boss)
    {
        OnBossChanged?.Invoke(new OnBossChangedEventArgs { boss = boss });
    }

    public static void CallBuildNavMeshEvent(bool isBuildWhenMapChanged)
    {
        OnBuildNavMesh?.Invoke(new OnBuildNavMeshEventArgs { isBuildWhenMapChanged = isBuildWhenMapChanged });
    }

    public static void CallTriggerBashEvent()
    {
        OnTriggerBash?.Invoke();
    }

    public static void CallTriggerDashEvent()
    {
        OnTriggerDash?.Invoke();
    }

    public static void CallItemChangedEvent(InventoryItem inventoryItem)
    {
        OnItemChanged?.Invoke(new OnInventoryItemChangedEventArgs { inventoryItem = inventoryItem });
    }

    public static void CallPressRestEvent()
    {
        OnPressRestEvent?.Invoke();
    }

    public static void CallRestInBonfireEvent()
    {
        OnRestInBonfire?.Invoke();
    }

    public static void CallExitEvent()
    {
        OnExit?.Invoke();
    }

    public static void CallInventoryChangedEvent(Inventory inventory)
    {
        OnInventoryChanged?.Invoke(new OnInventoryChangedEventArgs { inventory = inventory });
    }

    public static void CallItemUIEndDragChangedEvent(ItemUI itemUI)
    {
        OnItemUIEndDragChanged?.Invoke(new OnItemUIChangedEventArgs { itemUI = itemUI });
    }

    public static void CallItemUIHoverChangedEvent(ItemUI itemUI)
    {
        OnItemUIHoverChanged?.Invoke(new OnItemUIChangedEventArgs { itemUI = itemUI });
    }

    public static void CallItemUIClickChangedEvent(ItemUI itemUI)
    {
        OnItemUIClickChanged?.Invoke(new OnItemUIChangedEventArgs { itemUI = itemUI });
    }

    public static void CallHotBarScrollChangedEvent(InventoryItem inventoryItem)
    {
        OnHotBarScrollChanged?.Invoke(new OnInventoryItemChangedEventArgs { inventoryItem = inventoryItem });
    }

    public static void CallMoveItemToHotBarEvent(InventoryItem inventoryItem)
    {
        OnMoveItemToHotBar?.Invoke(new OnInventoryItemChangedEventArgs { inventoryItem = inventoryItem });
    }

    public static void CallInstructionChangedEvent(string instructionText, int displayCount = -1, bool isActive = true)
    {
        OnInstructionChanged?.Invoke(instructionText, displayCount, isActive);
    }
}
