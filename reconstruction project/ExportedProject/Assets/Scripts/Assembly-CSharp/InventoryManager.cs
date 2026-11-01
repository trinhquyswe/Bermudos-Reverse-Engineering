using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

// Approx: HotBarItem predicate (isOnHotBar) and key (hotbarSlot) inferred from the compiler-generated lambdas.
// TODO(il2cpp): SaveFileSetup / SaveFile fields (dump 0x1C, 0x20) omitted; types are absent from the folder.
// TODO(il2cpp): Awake, Start, ToggleInventory, LoadItemsToInventory, CollectIntentoryItem, LoadItemFromJson, SaveItemToJson bodies not recovered.
[DisallowMultipleComponent]
public class InventoryManager : MonoBehaviour
{
    public List<InventoryItem> inventoryItemList;
    public List<ItemSO> itemSOList;
    private Inventory inventory;
    public Image inventoryInstructionImg;
    private string instructionText;
    private bool isInstruction;

    public List<InventoryItem> HotBarItem
    {
        get
        {
            return inventoryItemList
                .Where(x => x.isOnHotBar)
                .OrderBy(x => x.hotbarSlot)
                .ToList();
        }
    }

    private void Awake()
    {
    }

    private void OnEnable()
    {
        StaticEventHandler.OnInventoryChanged += StaticEventHandler_OnInventoryChanged;
        StaticEventHandler.OnExit += StaticEventHandler_OnExit;
        GameManager.Instance.OnGameStateChange += Instance_OnGameStateChange;
    }

    private void OnDisable()
    {
        StaticEventHandler.OnInventoryChanged -= StaticEventHandler_OnInventoryChanged;
        StaticEventHandler.OnExit -= StaticEventHandler_OnExit;
        GameManager.Instance.OnGameStateChange -= Instance_OnGameStateChange;
    }

    // TODO(il2cpp): game-state handling body not recovered.
    private void Instance_OnGameStateChange(GameState gameState)
    {
    }

    // Approx: stores the Inventory carried by the event.
    private void StaticEventHandler_OnInventoryChanged(OnInventoryChangedEventArgs onInventoryChangedEventArgs)
    {
        inventory = onInventoryChangedEventArgs.inventory;
    }

    private void Start()
    {
    }

    public void ToggleInventory()
    {
    }

    private void LoadItemsToInventory()
    {
    }

    // Approx: copies the item data onto the slot view.
    private void SetInventorySlot(ItemUI slot, InventoryItem item)
    {
        slot.inventoryItem = item;
        slot.isHasItem = true;
        slot.ItemImg.sprite = item.itemSO.itemIcon;
        slot.ItemImg.gameObject.SetActive(true);
        slot.quantityText.text = item.quantity.ToString();
        slot.quantityText.gameObject.SetActive(true);
    }

    public void CollectIntentoryItem(ItemSO itemSO)
    {
    }

    public void LoadItemFromJson()
    {
    }

    private void SaveItemToJson()
    {
    }

    private void OnApplicationQuit()
    {
    }

    private void StaticEventHandler_OnExit()
    {
    }
}
