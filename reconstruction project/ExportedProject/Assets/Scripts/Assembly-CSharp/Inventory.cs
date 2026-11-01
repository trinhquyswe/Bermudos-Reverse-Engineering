using System.Collections.Generic;
using UnityEngine;

// TODO(il2cpp): ResetInventory, swap/move and slot-initialization bodies are not recoverable from the pseudo (try/catch lowering).
// TODO(il2cpp): OnEnable scale tween constants and ease are unrecovered; omitted.
public class Inventory : MonoBehaviour
{
    [HideInInspector]
    public List<ItemUI> inventorySlotList;
    [HideInInspector]
    public List<ItemUI> hotBarSlotList;
    public GameObject itemUIPrefab;
    public GameObject content;
    public GameObject hotBar;
    private ItemUI draggedItemUI;
    private ItemUI hoverItemUI;
    private ItemUI pressedItemUI;
    private ItemUI previousPressedItemUI;

    private void Start()
    {
        StaticEventHandler.CallInventoryChangedEvent(this);
    }

    private void OnEnable()
    {
        StaticEventHandler.OnItemUIEndDragChanged += StaticEventHandler_OnItemUIChanged;
        StaticEventHandler.OnItemUIHoverChanged += StaticEventHandler_OnItemUIHoverChanged;
        StaticEventHandler.OnItemUIClickChanged += StaticEventHandler_OnItemUIClickChanged;
    }

    private void OnDisable()
    {
        StaticEventHandler.OnItemUIEndDragChanged -= StaticEventHandler_OnItemUIChanged;
        StaticEventHandler.OnItemUIHoverChanged -= StaticEventHandler_OnItemUIHoverChanged;
        StaticEventHandler.OnItemUIClickChanged -= StaticEventHandler_OnItemUIClickChanged;
    }

    // TODO(il2cpp): OnDestroy body not recovered.
    private void OnDestroy()
    {
    }

    // TODO(il2cpp): body not recoverable from pseudo (nested try/catch lowering).
    public void ResetInventory(List<InventoryItem> skipList)
    {
    }

    private void StaticEventHandler_OnItemUIClickChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
    {
        previousPressedItemUI = pressedItemUI;
        pressedItemUI = onItemUIChangedEventArgs.itemUI;

        if (previousPressedItemUI != null && previousPressedItemUI != pressedItemUI)
        {
            previousPressedItemUI.SelectorImg.gameObject.SetActive(false);
        }

        if (pressedItemUI != null)
        {
            pressedItemUI.SelectorImg.gameObject.SetActive(true);
        }
    }

    private void StaticEventHandler_OnItemUIChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
    {
        draggedItemUI = onItemUIChangedEventArgs.itemUI;
    }

    private void StaticEventHandler_OnItemUIHoverChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
    {
        hoverItemUI = onItemUIChangedEventArgs.itemUI;
        if (draggedItemUI != null)
        {
            MoveAndSwapItemUI();
        }
    }

    // TODO(il2cpp): swap/move logic not recovered from the pseudo (nested try/catch lowering); body omitted.
    public void MoveAndSwapItemUI()
    {
    }

    // TODO(il2cpp): body not recovered.
    public void SwapTwoItemUI(ItemUIType itemUIType)
    {
    }

    // TODO(il2cpp): body not recovered.
    public void SwapItemUIWithEmptySlot(ItemUIType itemUITypee)
    {
    }

    // TODO(il2cpp): body not recovered.
    public void MoveItemToHotBar()
    {
    }

    // TODO(il2cpp): body not recovered.
    public void InitializeInventorySlotList(int quantity)
    {
    }

    // TODO(il2cpp): body not recovered.
    public void InitializeHotBarSlotList(int quantity)
    {
    }
}
