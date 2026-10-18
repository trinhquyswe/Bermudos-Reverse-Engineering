// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class ItemUI : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerClickHandler, IBeginDragHandler, IDragHandler, IEndDragHandler
{
	// Fields
	public int itemId;
	public Image SelectorImg;
	public Image ItemImg;
	public TextMeshProUGUI quantityText;
	public InventoryItem inventoryItem;
	public ItemUIType ItemUIType;
	public Inventory inventory;
	private GameObject itemUICopy;
	public bool isHasItem;
	private RectTransform rectTransform;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (ItemUI_Awake) ----
		//   var this:int_ptr;
		//   var c:int;
		//   if (eqz(6703327[0]:ubyte)) {
		//     f_hpa(5668528);
		//     6703327[0]:byte = 1;
		//   }
		//   var methodInfo:int = multiple_3_UnityEngine_Transform_set_localScale(
		//                          System_Linq_Enumerable_Count(this, 0),
		//                          0);
		//   if (eqz(methodInfo)) goto B_b;
		//   var d:int = multiple_3_UnityEngine_Transform_set_localScale(
		//                 System_Linq_Enumerable_Count(methodInfo, 0),
		//                 0);
		//   if (eqz(d)) {
		//     this[10] = 0;
		//     return ;
		//   }
		//   this = select_if(this, 0, methodInfo);
		//   methodInfo = multiple_3_UnityEngine_Transform_set_localScale(
		//                  System_Linq_Enumerable_Count(d, 0),
		//                  0);
		//   if (eqz(methodInfo)) goto B_b;
		//   this = select_if(this, 0, d);
		//   d = multiple_3_UnityEngine_Transform_set_localScale(
		//         System_Linq_Enumerable_Count(methodInfo, 0),
		//         0);
		//   if (eqz(d)) {
		//     this[10] = 0;
		//     return ;
		//   }
		//   this = select_if(this, 0, methodInfo);
		//   methodInfo = multiple_3_UnityEngine_Transform_set_localScale(
		//                  System_Linq_Enumerable_Count(d, 0),
		//                  0);
		//   if (eqz(methodInfo)) goto B_b;
		//   c = UnityEngine_GameObject_get_activeInHierarchy(
		//         methodInfo,
		//         d_p444444444444044P44p44444444[28424]:int);
		//   label B_b:
		//   this[10] = c;
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (ItemUI_OnEnable) ----
		//   b = g_a - 112;
		//   g_a = b;
		//   if (eqz(6703329[0]:ubyte)) {
		//     f_hpa(5675748);
		//     f_hpa(5682460);
		//     f_hpa(5619244);
		//     6703329[0]:byte = 1;
		//   }
		//   if (a[8]) {
		//     f_sbnb(f_canb(a[5], 0), 0, 0);
		//     c = f_canb(a, 0);
		//     var d:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//     if (eqz(d[29])) { f_ahje(d) }
		//     a[11] = (c = f_ltxb(c, d_p444444444444044P44p44444444[31907]:int));
		//     c = 
		//       UnityEngine_Object_set_name(c,
		//                                   d_p444444444444044P44p44444444[30229]:int);
		//     UnityEngine_RectTransform_set_anchoredPosition(b + 104, a[13], 0);
		//     b[6]:long = b[13]:long;
		//     UnityEngine_RectTransform_get_sizeDelta_Injected(c, b + 48, 0);
		//     UnityEngine_RectTransform_set_sizeDelta(b + 96, a[13], 0);
		//     b[5]:long = b[12]:long;
		//     UnityEngine_RectTransform_get_pivot_Injected(c, b + 40, 0);
		//     UnityEngine_RectTransform_get_rect(b + 88, a[13], 0);
		//     b[4]:long = b[11]:long;
		//     UnityEngine_RectTransform_get_anchorMin_Injected(c, b + 32, 0);
		//     UnityEngine_RectTransform_set_anchorMin(b + 80, a[13], 0);
		//     b[3]:long = b[10]:long;
		//     UnityEngine_RectTransform_get_anchorMax_Injected(c, b + 24, 0);
		//     UnityEngine_RectTransform_set_anchorMax(b + 72, a[13], 0);
		//     b[2]:long = b[9]:long;
		//     UnityEngine_RectTransform_get_anchoredPosition_Injected(c, b + 16, 0);
		//     c = a[9];
		//     UnityEngine_Transform_SetParent(
		//       UnityEngine_GameObject_AddComponent(a[11], 0),
		//       {
		//         if (eqz(c)) {
		//           System_Linq_Enumerable_Count(a[10], 0);
		//           goto B_d;
		//         }
		//         multiple_3_UnityEngine_Transform_set_localScale(
		//           multiple_3_UnityEngine_Transform_set_localScale(
		//             System_Linq_Enumerable_Count(a, 0),
		//             0),
		//           0);
		//         label B_d:
		//       },
		//       0,
		//       0);
		//     c = UnityEngine_GameObject_AddComponent(a[11], 0);
		//     HelperUtilities_ValidateCheckPositiveRange(b + 56, a[13], 0, 0);
		//     b[2]:int = (b - -64)[0]:int;
		//     b[0]:long = b[7]:long;
		//     multiple_UnityEngine_Transform_ctor(c, b, 0);
		//   }
		//   g_a = b + 112;
	}

	public void ResetItemUI()
	{
		// <no wasm mapping>
	}

	public void OnBeginDrag(PointerEventData eventData)
	{
		// ---- decompiled from wasm (ItemUI_OnBeginDrag) ----
		//   var this:int_ptr;
		//   var eventData:{ a:long, b:int, c:long, d:int } = g_a - 32;
		//   g_a = eventData;
		//   if (eqz(6703330[0]:ubyte)) {
		//     f_hpa(5619244);
		//     6703330[0]:byte = 1;
		//   }
		//   var methodInfo:int = this[11];
		//   var d:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(d[29])) { f_ahje(d) }
		//   if (UnityEngine_Camera_get_targetTexture(methodInfo, 0, 0)) {
		//     methodInfo = UnityEngine_GameObject_AddComponent(this[11], 0);
		//     HelperUtilities_ValidateCheckPositiveRange(eventData + 16, this[13], 0, 0);
		//     eventData.b = eventData.d;
		//     eventData.a = eventData.c;
		//     multiple_UnityEngine_Transform_ctor(methodInfo, eventData, 0);
		//   }
		//   g_a = eventData + 32;
	}

	public void OnDrag(PointerEventData eventData)
	{
		// ---- decompiled from wasm (ItemUI_OnDrag) ----
		//   var this:int_ptr;
		//   if (eqz(6703331[0]:ubyte)) {
		//     f_hpa(5619244);
		//     6703331[0]:byte = 1;
		//   }
		//   if (this[8]) {
		//     if (eqz(6703567[0]:ubyte)) {
		//       f_hpa(5619364);
		//       f_hpa(5621908);
		//       6703567[0]:byte = 1;
		//     }
		//     var eventData:int_ptr = 
		//       ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[13]:int;
		//     if (eventData) {
		//       var methodInfo:int_ptr = 
		//         f_icke(d_p444444444444044P44p44444444[16133]:int);
		//       OnInventoryChangedEventArgs_ctor(methodInfo, 0);
		//       methodInfo[2] = this;
		//       call_indirect(eventData[8], methodInfo, eventData[5], eventData[3]);
		//     }
		//     this = this[11];
		//     eventData = d_p444444444444044P44p44444444[16103]:int;
		//     if (eqz(eventData[29])) { f_ahje(eventData) }
		//     f_kfnb(this, 0);
		//   }
	}

	public void OnEndDrag(PointerEventData eventData)
	{
		// ---- decompiled from wasm (ItemUI_OnEndDrag) ----
		//   var this:int_ptr;
		//   if (eqz(this[8])) goto B_a;
		//   if (eqz(6703573[0]:ubyte)) {
		//     f_hpa(5619364);
		//     f_hpa(5621908);
		//     6703573[0]:byte = 1;
		//   }
		//   var eventData:int_ptr = 
		//     ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[15]:int;
		//   if (eqz(eventData)) goto B_a;
		//   var methodInfo:int_ptr = 
		//     f_icke(d_p444444444444044P44p44444444[16133]:int);
		//   OnInventoryChangedEventArgs_ctor(methodInfo, 0);
		//   methodInfo[2] = this;
		//   call_indirect(eventData[8], methodInfo, eventData[5], eventData[3]);
		//   label B_a:
	}

	public void OnPointerClick(PointerEventData eventData)
	{
		// ---- decompiled from wasm (ItemUI_OnPointerClick) ----
		//   var this:int;
		//   if (eqz(6703570[0]:ubyte)) {
		//     f_hpa(5619364);
		//     f_hpa(5621908);
		//     6703570[0]:byte = 1;
		//   }
		//   var eventData:int_ptr = 
		//     ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[14]:int;
		//   if (eventData) {
		//     var methodInfo:int_ptr = 
		//       f_icke(d_p444444444444044P44p44444444[16133]:int);
		//     OnInventoryChangedEventArgs_ctor(methodInfo, 0);
		//     methodInfo[2] = this;
		//     call_indirect(eventData[8], methodInfo, eventData[5], eventData[3]);
		//   }
	}

	public void OnPointerEnter(PointerEventData eventData)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (ItemUI_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703332[0]:ubyte)) {
		//     f_hpa(5668620);
		//     6703332[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28447]:int);
	}

}
