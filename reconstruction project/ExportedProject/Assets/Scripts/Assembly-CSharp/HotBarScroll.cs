using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class HotBarScroll : MonoBehaviour
{
    [SerializeField]
    private Image itemIcom;

    private TextMeshProUGUI itemQuantity;
    private int currentIndex;
    private Sprite emptyItemSprite;

    private void Awake()
    {
        itemQuantity = GetComponentInChildren<TextMeshProUGUI>();

        StaticEventHandler.OnItemChanged += StaticEventHandler_OnItemChanged;
        StaticEventHandler.OnMoveItemToHotBar += StaticEventHandler_OnMoveItemToHotBar;
        GameManager.Instance.OnGameStateChange += OnGameStateChange_HotBar;
    }

    private void OnDestroy()
    {
        StaticEventHandler.OnItemChanged -= StaticEventHandler_OnItemChanged;
        StaticEventHandler.OnMoveItemToHotBar -= StaticEventHandler_OnMoveItemToHotBar;
    }

    private void OnGameStateChange_HotBar(GameState gameState)
    {
        if ((gameState & ~GameState.Begin) == GameState.Instruct)
        {
            gameObject.SetActive(true);
            emptyItemSprite = itemIcom.sprite;

            List<InventoryItem> hotBarItem = GameManager.Instance.player.inventoryManager.HotBarItem;
            if (hotBarItem.Count != 0)
            {
                currentIndex = 0;
                itemIcom.sprite = hotBarItem[currentIndex].itemSO.itemIcon;
                itemQuantity.text = hotBarItem[currentIndex].quantity.ToString();

                GameManager.Instance.OnGameStateChange -= OnGameStateChange_HotBar;
            }
        }
    }

    private void StaticEventHandler_OnItemChanged(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs)
    {
        List<InventoryItem> hotBarItem = GameManager.Instance.player.inventoryManager.HotBarItem;
        if (hotBarItem.Count != 0)
        {
            InventoryItem currentSelectedItem = hotBarItem[currentIndex];
            if (currentSelectedItem != null)
            {
                if (onInventoryItemChangedEventArgs.inventoryItem.hotbarSlot == currentSelectedItem.hotbarSlot)
                {
                    itemIcom.sprite = onInventoryItemChangedEventArgs.inventoryItem.itemSO.itemIcon;
                    itemQuantity.text = onInventoryItemChangedEventArgs.inventoryItem.quantity.ToString();

                    if (onInventoryItemChangedEventArgs.inventoryItem.quantity == 0)
                    {
                        itemIcom.sprite = emptyItemSprite;
                        itemQuantity.text = "";
                    }
                }
            }
        }
    }

    private void StaticEventHandler_OnMoveItemToHotBar(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs)
    {
        List<InventoryItem> hotBarItem = GameManager.Instance.player.inventoryManager.HotBarItem;
        if (hotBarItem.Count == 1)
        {
            itemIcom.sprite = onInventoryItemChangedEventArgs.inventoryItem.itemSO.itemIcon;
            itemQuantity.text = onInventoryItemChangedEventArgs.inventoryItem.quantity.ToString();
        }
    }

    private void Start()
    {
        gameObject.SetActive(false);
    }

    private void Update()
    {
        if (Mouse.current != null)
        {
            Vector2 scrollDelta = Mouse.current.scroll.ReadValue();
            // TODO(il2cpp): the compiled code reads a single float from the scroll control; the Y axis is the conventional guess.
            if (scrollDelta.y != 0f)
            {
                ChangedItem((int)scrollDelta.y);
            }
        }
    }

    private void ChangedItem(int scrollValue)
    {
        if (scrollValue < 0)
        {
            currentIndex--;

            if (currentIndex < 0)
            {
                currentIndex = GameManager.Instance.player.inventoryManager.HotBarItem.Count - 1;
            }

            if (GameManager.Instance.player.inventoryManager.HotBarItem.Count == 0)
            {
                return;
            }

            List<InventoryItem> hotBarItem = GameManager.Instance.player.inventoryManager.HotBarItem;
            itemIcom.sprite = hotBarItem[currentIndex].itemSO.itemIcon;
        }
        else
        {
            currentIndex++;

            if (GameManager.Instance.player.inventoryManager.HotBarItem.Count - 1 < currentIndex)
            {
                currentIndex = 0;
            }

            if (GameManager.Instance.player.inventoryManager.HotBarItem.Count == 0)
            {
                return;
            }

            List<InventoryItem> hotBarItem = GameManager.Instance.player.inventoryManager.HotBarItem;
            itemIcom.sprite = hotBarItem[currentIndex].itemSO.itemIcon;
        }

        itemQuantity.text = GameManager.Instance.player.inventoryManager.HotBarItem[currentIndex].quantity.ToString();

        InventoryItem inventoryItem = GameManager.Instance.player.inventoryManager.HotBarItem[currentIndex];
        StaticEventHandler.OnHotBarScrollChanged?.Invoke(new OnInventoryItemChangedEventArgs
        {
            inventoryItem = inventoryItem
        });
    }
}
