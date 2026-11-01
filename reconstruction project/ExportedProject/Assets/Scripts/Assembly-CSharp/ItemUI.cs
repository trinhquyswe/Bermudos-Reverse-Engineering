using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Approx: drag bookkeeping. Inventory stores the dragged slot in its EndDrag handler (OnItemUIEndDragChanged),
// so BeginDrag raises that event. Drag-copy parenting and position follow are approximations.
[DisallowMultipleComponent]
public class ItemUI : MonoBehaviour, IPointerEnterHandler, IPointerClickHandler, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    [HideInInspector]
    public int itemId;
    public Image SelectorImg;
    public Image ItemImg;
    public TextMeshProUGUI quantityText;
    public InventoryItem inventoryItem;
    [HideInInspector]
    public ItemUIType ItemUIType;
    public Inventory inventory;
    private GameObject itemUICopy;
    [HideInInspector]
    public bool isHasItem;
    private RectTransform rectTransform;

    private void Awake()
    {
        rectTransform = GetComponent<RectTransform>();
    }

    // TODO(il2cpp): OnEnable body not recovered.
    private void OnEnable()
    {
    }

    // Approx: clears the slot view.
    public void ResetItemUI()
    {
        inventoryItem = null;
        isHasItem = false;
        ItemImg.gameObject.SetActive(false);
        quantityText.gameObject.SetActive(false);
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        if (!isHasItem)
        {
            return;
        }

        StaticEventHandler.CallItemUIEndDragChangedEvent(this);
        itemUICopy = Instantiate(gameObject, inventory.transform);
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (itemUICopy != null)
        {
            itemUICopy.transform.position = eventData.position;
        }
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (itemUICopy != null)
        {
            Destroy(itemUICopy);
            itemUICopy = null;
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        StaticEventHandler.CallItemUIClickChangedEvent(this);
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        StaticEventHandler.CallItemUIHoverChangedEvent(this);
    }
}
