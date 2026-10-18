// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class Inventory : MonoBehaviour
{
	// Fields
	public List<ItemUI> inventorySlotList;
	public List<ItemUI> hotBarSlotList;
	public GameObject itemUIPrefab;
	public GameObject content;
	public GameObject hotBar;
	private ItemUI draggedItemUI;
	private ItemUI hoverItemUI;
	private ItemUI pressedItemUI;
	private ItemUI previousPressedItemUI;

	// Methods
	private void Start()
	{
		// ---- decompiled from wasm (Inventory_Start) ----
		//   var this:int;
		//   var methodInfo:{ a:long, b:int, c:long, d:int, e:long, f:int } = 
		//     g_a - 48;
		//   g_a = methodInfo;
		//   if (eqz(6703283[0]:ubyte)) {
		//     f_hpa(5601852);
		//     f_hpa(5613524);
		//     f_hpa(5678952);
		//     f_hpa(5678956);
		//     f_hpa(5678960);
		//     f_hpa(5690240);
		//     6703283[0]:byte = 1;
		//   }
		//   var c:int = System_Linq_Enumerable_Count(this, 0);
		//   if (eqz(6703145[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6703145[0]:byte = 1;
		//   }
		//   var d:int = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   var e:long = d[0]:long@4;
		//   methodInfo.d = (d = d[2]:int);
		//   methodInfo.f = d;
		//   methodInfo.e = e;
		//   methodInfo.c = e;
		//   multiple_UnityEngine_Transform_get_localScale(c, methodInfo + 16, 0);
		//   c = System_Linq_Enumerable_Count(this, 0);
		//   d = d_p444444444444044P44p44444444[14673]:int;
		//   if (eqz(d[29]:int)) { f_ahje(d) }
		//   DG_Tweening_DOTween_KillAll_1(c, 0, 0);
		//   c = System_Linq_Enumerable_Count(this, 0);
		//   if (eqz(6695507[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6695507[0]:byte = 1;
		//   }
		//   methodInfo.b =
		//     (d = (d_p444444444444044P44p44444444[17262]:int)[23]:int)[5]:int;
		//   methodInfo.a = d[3]:long@4;
		//   DG_Tweening_TweenSettingsExtensions_SetEase(
		//     DG_Tweening_ShortcutExtensions_DOLocalRotateQuaternion(c,
		//                                                            methodInfo,
		//                                                            0.5f,
		//                                                            0),
		//     27,
		//     d_p444444444444044P44p44444444[33852]:int);
		//   c = f_icke(d_p444444444444044P44p44444444[11755]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[31030]:int,
		//     0);
		//   StaticEventHandler_CallInventoryChangedEvent(c, methodInfo);
		//   c = f_icke(d_p444444444444044P44p44444444[11755]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[31032]:int,
		//     0);
		//   StaticEventHandler_CallItemUIEndDragChangedEvent(c, methodInfo);
		//   c = f_icke(d_p444444444444044P44p44444444[11755]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[31031]:int,
		//     0);
		//   StaticEventHandler_CallItemUIHoverChangedEvent(c, methodInfo);
		//   g_a = methodInfo + 48;
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (Inventory_OnEnable) ----
		//   var this:int;
		//   if (eqz(6703284[0]:ubyte)) {
		//     f_hpa(5601852);
		//     f_hpa(5678952);
		//     f_hpa(5678956);
		//     f_hpa(5678960);
		//     6703284[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[11755]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31030]:int,
		//     0);
		//   StaticEventHandler_add_OnItemUIEndDragChanged(methodInfo, this);
		//   methodInfo = f_icke(d_p444444444444044P44p44444444[11755]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31032]:int,
		//     0);
		//   StaticEventHandler_add_OnItemUIHoverChanged(methodInfo, this);
		//   methodInfo = f_icke(d_p444444444444044P44p44444444[11755]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31031]:int,
		//     0);
		//   StaticEventHandler_add_OnItemUIClickChanged(methodInfo, this);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (Inventory_OnDisable) ----
		//   var this:int;
		//   if (eqz(6703285[0]:ubyte)) {
		//     f_hpa(5613524);
		//     6703285[0]:byte = 1;
		//   }
		//   this = System_Linq_Enumerable_Count(this, 0);
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[14673]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
		//   DG_Tweening_DOTween_KillAll_1(this, 0, 0);
	}

	private void OnDestroy()
	{
		// ---- decompiled from wasm (Inventory_OnDestroy) ----
		//   var d:int_ptr;
		//   var f:int;
		//   var e:int;
		//   c = g_a - 32;
		//   g_a = c;
		//   if (eqz(6703286[0]:ubyte)) {
		//     f_hpa(5640848);
		//     f_hpa(5640852);
		//     f_hpa(5640856);
		//     f_hpa(5649436);
		//     f_hpa(5649480);
		//     6703286[0]:byte = 1;
		//   }
		//   UnityEngine_ComputeBuffer_Release(
		//     c,
		//     a[4],
		//     d_p444444444444044P44p44444444[23662]:int);
		//   c[3]:long = c[1]:long;
		//   c[2]:long = c[0]:long;
		//   c[0]:int = 0;
		//   c[1]:int = c + 16;
		//   d = 
		//     {
		//       d = 
		//         {
		//           loop L_t {
		//             6151988[0]:int = 0;
		//             e = 
		//               env_invoke_iii(1155, c + 16, d_p444444444444044P44p44444444[21505]:int);
		//             d = 6151988[0]:int;
		//             6151988[0]:int = 0;
		//             if (d == 1) goto B_r;
		//             if (e) {
		//               d = c[7]:int;
		//               e = d[8];
		//               if (e) {
		//                 6151988[0]:int = 0;
		//                 f = 
		//                   env_invoke_iiii(2146, b, e, d_p444444444444044P44p44444444[23651]:int);
		//                 e = 6151988[0]:int;
		//                 6151988[0]:int = 0;
		//                 if (e == 1) goto B_q;
		//                 if (f) continue L_t;
		//               }
		//               6151988[0]:int = 0;
		//               env_invoke_vii(13910, d, c);
		//               d = 6151988[0]:int;
		//               6151988[0]:int = 0;
		//               if (d == 1) goto B_s;
		//               continue L_t;
		//             }
		//           }
		//           e = 5;
		//           d = c[0]:int;
		//           goto B_o;
		//           label B_s:
		//           env_cxa_find_matching_catch_3(4889068);
		//           goto B_p;
		//           label B_r:
		//           env_cxa_find_matching_catch_3(4889068);
		//           goto B_p;
		//           label B_q:
		//           env_cxa_find_matching_catch_3(4889068);
		//           label B_p:
		//         }
		//       if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_m;
		//       d = env_cxa_begin_catch(d)[0]:int;
		//       e = 0;
		//       6151988[0]:int = 0;
		//       c[0]:int = d;
		//       env_invoke_v(58);
		//       f = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (f == 1) goto B_n;
		//       label B_o:
		//       c[1]:int;
		//       d_p444444444444044P44p44444444[21504]:int;
		//       if (d) goto B_k;
		//       br_table[B_w, B_g, B_g, B_g, B_g, B_w, ..B_g](e)
		//       label B_w:
		//       UnityEngine_ComputeBuffer_Release(
		//         c,
		//         a[5],
		//         d_p444444444444044P44p44444444[23662]:int);
		//       c[3]:long = c[1]:long;
		//       c[2]:long = c[0]:long;
		//       c[0]:int = 0;
		//       c[1]:int = c + 16;
		//       goto B_l;
		//       label B_n:
		//       d = env_cxa_find_matching_catch();
		//       env_getTempRet0();
		//       label B_m:
		//       6151988[0]:int = 0;
		//       env_invoke_ii(13911, c);
		//       c = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (c == 1) goto B_d;
		//       goto B_b;
		//       label B_l:
		//       loop L_z {
		//         6151988[0]:int = 0;
		//         e = 
		//           env_invoke_iii(1155, c + 16, d_p444444444444044P44p44444444[21505]:int);
		//         d = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (d == 1) goto B_x;
		//         if (e) {
		//           d = c[7]:int;
		//           e = d[8];
		//           if (e) {
		//             6151988[0]:int = 0;
		//             f = 
		//               env_invoke_iiii(2146, b, e, d_p444444444444044P44p44444444[23651]:int);
		//             e = 6151988[0]:int;
		//             6151988[0]:int = 0;
		//             if (e == 1) goto B_j;
		//             if (f) continue L_z;
		//           }
		//           6151988[0]:int = 0;
		//           env_invoke_vii(13910, d, c);
		//           d = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (d == 1) goto B_y;
		//           continue L_z;
		//         }
		//       }
		//       d = c[0]:int;
		//       goto B_h;
		//       label B_y:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_i;
		//       label B_x:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_i;
		//       label B_k:
		//       System_Net_CommandStream_ReceiveCommandResponseCallback(d);
		//       unreachable;
		//       label B_j:
		//       env_cxa_find_matching_catch_3(4889068);
		//       label B_i:
		//     }
		//   if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_e;
		//   d = env_cxa_begin_catch(d)[0]:int;
		//   6151988[0]:int = 0;
		//   c[0]:int = d;
		//   env_invoke_v(58);
		//   e = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (e == 1) goto B_f;
		//   label B_h:
		//   c[1]:int;
		//   d_p444444444444044P44p44444444[21504]:int;
		//   if (d) goto B_c;
		//   label B_g:
		//   g_a = c + 32;
		//   return ;
		//   label B_f:
		//   d = env_cxa_find_matching_catch();
		//   env_getTempRet0();
		//   label B_e:
		//   6151988[0]:int = 0;
		//   env_invoke_ii(13912, c);
		//   c = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (c != 1) goto B_b;
		//   label B_d:
		//   env_cxa_find_matching_catch_3(0);
		//   env_getTempRet0();
		//   f_sx();
		//   unreachable;
		//   label B_c:
		//   System_Net_CommandStream_ReceiveCommandResponseCallback(d);
		//   unreachable;
		//   label B_b:
		//   env_resumeException(d);
		//   unreachable;
	}

	public void ResetInventory(List<InventoryItem> skipList)
	{
		// ---- decompiled from wasm (Inventory_ResetInventory) ----
		//   var this:int_ptr;
		//   var methodInfo:int;
		//   var skipList:int_ptr;
		//   if (eqz(6703287[0]:ubyte)) {
		//     f_hpa(5619244);
		//     6703287[0]:byte = 1;
		//   }
		//   this[12] = (methodInfo = this[11]);
		//   this[11] = skipList[2];
		//   skipList = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(skipList[29])) { f_ahje(skipList) }
		//   skipList = this + 44;
		//   methodInfo = f_qcnb(methodInfo, 0, 0);
		//   if (methodInfo) {
		//     this = skipList;
		//     goto B_d;
		//   }
		//   var d:int = skipList[0];
		//   this = this + 48;
		//   var e:int = this[0];
		//   var f:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(f[29])) { f_ahje(f) }
		//   if (eqz(UnityEngine_Camera_get_targetTexture(e, d, 0))) goto B_c;
		//   f_sbnb(f_canb((skipList[0])[5]:int, 0), 1, 0);
		//   label B_d:
		//   f_sbnb(f_canb((this[0])[5]:int, 0), methodInfo, 0);
		//   label B_c:
	}

	private void StaticEventHandler_OnItemUIClickChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
	{
		// ---- decompiled from wasm (Inventory_StaticEventHandler_OnItemUIClickChanged) ----
		//   var this:int_ptr;
		//   var onItemUIChangedEventArgs:int_ptr;
		//   this[9] = onItemUIChangedEventArgs[2];
	}

	private void StaticEventHandler_OnItemUIChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
	{
		// ---- decompiled from wasm (Inventory_StaticEventHandler_OnItemUIChanged) ----
		//   var this:int_ptr;
		//   var onItemUIChangedEventArgs:int_ptr;
		//   if (eqz(6703288[0]:ubyte)) {
		//     f_hpa(5619244);
		//     6703288[0]:byte = 1;
		//   }
		//   var methodInfo:int = this[9];
		//   var d:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(d[29])) { f_ahje(d) }
		//   if (UnityEngine_Camera_get_targetTexture(methodInfo, 0, 0)) {
		//     this[10] = onItemUIChangedEventArgs[2];
		//     Inventory_StaticEventHandler_OnItemUIHoverChanged(this, this);
		//     this[9] = 0;
		//   }
	}

	private void StaticEventHandler_OnItemUIHoverChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
	{
		// ---- decompiled from wasm (Inventory_StaticEventHandler_OnItemUIHoverChanged) ----
		//   var d:byte_ptr = g_a - 16;
		//   g_a = d;
		//   if (eqz(6703289[0]:ubyte)) {
		//     f_hpa(5612328);
		//     f_hpa(5614012);
		//     f_hpa(5619244);
		//     6703289[0]:byte = 1;
		//   }
		//   b = a[10]:int;
		//   var c:int_ptr = a[9]:int;
		//   var e:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(e[29])) { f_ahje(e) }
		//   if (f_qcnb(c, b, 0)) goto B_c;
		//   c = a[9]:int;
		//   br_table[B_h, B_g, ..B_e](c[9]);
		//   label B_h:
		//   b = a[10]:int;
		//   br_table[B_f, B_i, ..B_d](b[9]:int);
		//   label B_i:
		//   d[15] = (c[8])[24]:ubyte;
		//   b = f_vpa(d_p444444444444044P44p44444444[14374]:int, d + 15);
		//   c = d_p444444444444044P44p44444444[14795]:int;
		//   if (eqz(c[29])) { f_ahje(c) }
		//   UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_TryLoadLayout(
		//     b,
		//     0);
		//   if (((a[9]:int)[8]:int)[24]:ubyte) goto B_c;
		//   f_sbnb(f_canb((a[10]:int)[6]:int, 0), 1, 0);
		//   f_sbnb(f_canb((a[10]:int)[7]:int, 0), 1, 0);
		//   f_kkx((a[10]:int)[6]:int, ((a[9]:int)[6]:int)[32]:int, 0);
		//   b = (a[10]:int)[7]:int;
		//   call_indirect(
		//     b,
		//     call_indirect(c = (a[9]:int)[7]:int, (c = c[0])[179], c[178]),
		//     (b = b[0]:int)[181]:int,
		//     b[180]:int);
		//   b = a[10]:int;
		//   b[8]:int = (a = (a[9]:int)[8]:int);
		//   b = b[4]:int;
		//   a[24]:byte = 1;
		//   a[5]:int = b;
		//   if (eqz(6703579[0]:ubyte)) {
		//     f_hpa(5619360);
		//     f_hpa(5621908);
		//     6703579[0]:byte = 1;
		//   }
		//   b = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[17]:int;
		//   if (eqz(b)) goto B_c;
		//   c = f_icke(d_p444444444444044P44p44444444[16132]:int);
		//   ItemConsumer_UsePotion(c, 0);
		//   c[2] = a;
		//   call_indirect(b[8]:int, c, b[5]:int, b[3]:int);
		//   goto B_c;
		//   label B_g:
		//   b = a[10]:int;
		//   if (b[9]:int) goto B_d;
		//   goto B_c;
		//   label B_f:
		//   if (b[48]:ubyte) {
		//     Inventory_MoveAndSwapItemUI(a, 0, a);
		//     goto B_c;
		//   }
		//   Inventory_SwapTwoItemUI(a, 0, a);
		//   f_sbnb(f_canb((a[9]:int)[6]:int, 0), 0, 0);
		//   f_sbnb(f_canb((a[9]:int)[7]:int, 0), 0, 0);
		//   (a[9]:int)[48]:byte = 0;
		//   goto B_c;
		//   label B_e:
		//   b = a[10]:int;
		//   label B_d:
		//   if (b[48]:ubyte) {
		//     Inventory_MoveAndSwapItemUI(a, 1, a);
		//     goto B_c;
		//   }
		//   Inventory_SwapTwoItemUI(a, 1, a);
		//   label B_c:
		//   g_a = d + 16;
	}

	public void MoveAndSwapItemUI()
	{
		// ---- decompiled from wasm (Inventory_MoveAndSwapItemUI) ----
		//   var f:int_ptr;
		//   if (eqz(6703290[0]:ubyte)) {
		//     f_hpa(5614012);
		//     6703290[0]:byte = 1;
		//   }
		//   var d:int_ptr = a[9];
		//   var e:int_ptr = (d[6])[32]:int;
		//   d = d[7];
		//   var g:int = call_indirect(d, (d = d[0])[179], d[178]);
		//   c = a[9];
		//   d = c[8];
		//   f_kkx(c[6], ((a[10])[6]:int)[32]:int, 0);
		//   c = (a[9])[7]:int;
		//   call_indirect(
		//     c,
		//     call_indirect(f = (a[10])[7]:int, (f = f[0])[179], f[178]),
		//     (c = c[0])[181],
		//     c[180]);
		//   (a[9])[8]:int = (c = (a[10])[8]:int);
		//   c = 
		//     Mono_Security_X509_X509Crl_X509CrlEntry_ctor(
		//       UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(c + 16, 0),
		//       (((a[9])[8]:int)[2]:int)[3]:int,
		//       0);
		//   f = d_p444444444444044P44p44444444[14795]:int;
		//   if (eqz(f[29])) { f_ahje(f) }
		//   UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_TryLoadLayout(
		//     c,
		//     0);
		//   b = select_if(20, 16, b);
		//   (b + (c = a[9])[8])[0]:int = c[4];
		//   f_kkx((a[10])[6]:int, e, 0);
		//   e = (a[10])[7]:int;
		//   call_indirect(e, g, (e = e[0])[181], e[180]);
		//   a = a[10];
		//   a[8] = d;
		//   (b + d)[0]:int = a[4];
	}

	public void SwapTwoItemUI(ItemUIType itemUIType)
	{
		// ---- decompiled from wasm (Inventory_SwapTwoItemUI) ----
		//   var this:int;
		//   var d:int_ptr;
		//   var e:int;
		//   var itemUIType:int;
		//   f_sbnb(f_canb((this[10]:int)[6]:int, 0), 1, 0);
		//   f_sbnb(f_canb((this[10]:int)[7]:int, 0), 1, 0);
		//   f_kkx((this[10]:int)[6]:int, ((this[9]:int)[6]:int)[32]:int, 0);
		//   var methodInfo:int = (this[10]:int)[7]:int;
		//   call_indirect(
		//     methodInfo,
		//     call_indirect(d = (this[9]:int)[7]:int, (d = d[0])[179], d[178]),
		//     (methodInfo = methodInfo[0]:int)[181]:int,
		//     methodInfo[180]:int);
		//   methodInfo = this[10]:int;
		//   methodInfo[8]:int = (e = (d = this[9]:int)[8]);
		//   (e + select_if(20, 16, itemUIType))[0]:int = methodInfo[4]:int;
		//   methodInfo[48]:byte = 1;
		//   f_sbnb(f_canb(d[6], 0), 0, 0);
		//   f_sbnb(f_canb((this[9]:int)[7]:int, 0), 0, 0);
		//   this = this[9]:int;
		//   this[8]:int = 0;
		//   this[48]:byte = 0;
	}

	public void SwapItemUIWithEmptySlot(ItemUIType itemUITypee)
	{
		// ---- decompiled from wasm (Inventory_SwapItemUIWithEmptySlot) ----
		//   var c:int_ptr;
		//   f_sbnb(f_canb((a[10]:int)[6]:int, 0), 1, 0);
		//   f_sbnb(f_canb((a[10]:int)[7]:int, 0), 1, 0);
		//   f_kkx((a[10]:int)[6]:int, ((a[9]:int)[6]:int)[32]:int, 0);
		//   b = (a[10]:int)[7]:int;
		//   call_indirect(
		//     b,
		//     call_indirect(c = (a[9]:int)[7]:int, (c = c[0])[179], c[178]),
		//     (b = b[0])[181],
		//     b[180]);
		//   b = a[10]:int;
		//   b[8] = (a = (a[9]:int)[8]:int);
		//   b = b[4];
		//   a[24]:byte = 1;
		//   a[5]:int = b;
	}

	public void MoveItemToHotBar()
	{
		// ---- decompiled from wasm (Inventory_MoveItemToHotBar) ----
		//   var f:int;
		//   var i:int_ptr;
		//   var e:int_ptr = g_a - 16;
		//   g_a = e;
		//   if (eqz(6703291[0]:ubyte)) {
		//     f_hpa(5675712);
		//     f_hpa(5649476);
		//     f_hpa(5682460);
		//     f_hpa(5619244);
		//     f_hpa(5731316);
		//     6703291[0]:byte = 1;
		//   }
		//   e[3] = 0;
		//   if (b > 0) {
		//     loop L_c {
		//       c = a[6];
		//       var d:int = d_p444444444444044P44p44444444[16103]:int;
		//       if (eqz(d[29]:int)) { f_ahje(d) }
		//       c = f_ltxb(c, d_p444444444444044P44p44444444[31907]:int);
		//       UnityEngine_Transform_SetParent(
		//         UnityEngine_GameObject_AddComponent(c, 0),
		//         UnityEngine_GameObject_AddComponent(a[7], 0),
		//         0,
		//         0);
		//       d = UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(e + 12, 0);
		//       UnityEngine_Object_Instantiate(
		//         c,
		//         Mono_Security_X509_X509Crl_X509CrlEntry_ctor(
		//           d_p444444444444044P44p44444444[44121]:int,
		//           d,
		//           0),
		//         0);
		//       d = 
		//         UnityEngine_Object_set_name(c,
		//                                     d_p444444444444044P44p44444444[30220]:int);
		//       d[4]:int = (f = e[3]);
		//       d[48]:byte = 0;
		//       d[8]:long@4 = 0L;
		//       var h:int_ptr = d_p444444444444044P44p44444444[23661]:int;
		//       c = a[4];
		//       c[4] = c[4] + 1;
		//       var g:int = c[3];
		//       if (g < (i = c[2])[3]) {
		//         c[3] = g + 1;
		//         i[g + 4]:int = d;
		//         goto B_e;
		//       }
		//       System_String_Substring(c, d, ((h[4])[24]:int)[14]:int);
		//       f = e[3];
		//       label B_e:
		//       e[3] = (c = f + 1);
		//       if (b > c) continue L_c;
		//     }
		//   }
		//   g_a = e + 16;
	}

	public void InitializeInventorySlotList(int quantity)
	{
		// ---- decompiled from wasm (Inventory_InitializeInventorySlotList) ----
		//   var quantity:int;
		//   var this:int_ptr;
		//   var f:int;
		//   var i:int_ptr;
		//   var e:int_ptr = g_a - 16;
		//   g_a = e;
		//   if (eqz(6703292[0]:ubyte)) {
		//     f_hpa(5675712);
		//     f_hpa(5649476);
		//     f_hpa(5682460);
		//     f_hpa(5619244);
		//     f_hpa(5731316);
		//     6703292[0]:byte = 1;
		//   }
		//   e[3] = 0;
		//   if (quantity > 0) {
		//     loop L_c {
		//       var methodInfo:int_ptr = this[6];
		//       var d:int = d_p444444444444044P44p44444444[16103]:int;
		//       if (eqz(d[29]:int)) { f_ahje(d) }
		//       methodInfo = 
		//         f_ltxb(methodInfo, d_p444444444444044P44p44444444[31907]:int);
		//       UnityEngine_Transform_SetParent(
		//         UnityEngine_GameObject_AddComponent(methodInfo, 0),
		//         UnityEngine_GameObject_AddComponent(this[8], 0),
		//         0,
		//         0);
		//       d = UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(e + 12, 0);
		//       UnityEngine_Object_Instantiate(
		//         methodInfo,
		//         Mono_Security_X509_X509Crl_X509CrlEntry_ctor(
		//           d_p444444444444044P44p44444444[44121]:int,
		//           d,
		//           0),
		//         0);
		//       d = 
		//         UnityEngine_Object_set_name(methodInfo,
		//                                     d_p444444444444044P44p44444444[30220]:int);
		//       d[4]:int = (f = e[3]);
		//       d[48]:byte = 0;
		//       d[8]:long@4 = 4294967296L;
		//       var h:int_ptr = d_p444444444444044P44p44444444[23661]:int;
		//       methodInfo = this[5];
		//       methodInfo[4] = methodInfo[4] + 1;
		//       var g:int = methodInfo[3];
		//       if (g < (i = methodInfo[2])[3]) {
		//         methodInfo[3] = g + 1;
		//         i[g + 4]:int = d;
		//         goto B_e;
		//       }
		//       System_String_Substring(methodInfo, d, ((h[4])[24]:int)[14]:int);
		//       f = e[3];
		//       label B_e:
		//       e[3] = (methodInfo = f + 1);
		//       if (quantity > methodInfo) continue L_c;
		//     }
		//   }
		//   g_a = e + 16;
	}

	public void InitializeHotBarSlotList(int quantity)
	{
		// ---- decompiled from wasm (Inventory_InitializeHotBarSlotList) ----
		//   if (eqz(6703293[0]:ubyte)) {
		//     f_hpa(5649472);
		//     f_hpa(5607324);
		//     6703293[0]:byte = 1;
		//   }
		//   b = f_icke(d_p444444444444044P44p44444444[13123]:int);
		//   multiple_System_Collections_Generic_List_1_cctor(
		//     b,
		//     d_p444444444444044P44p44444444[23660]:int);
		//   a[4] = b;
		//   b = f_icke(d_p444444444444044P44p44444444[13123]:int);
		//   multiple_System_Collections_Generic_List_1_cctor(
		//     b,
		//     d_p444444444444044P44p44444444[23660]:int);
		//   a[5] = b;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (Inventory_ctor) ----
		//   var this:int;
		//   if (eqz(6703294[0]:ubyte)) {
		//     f_hpa(5601852);
		//     f_hpa(5678964);
		//     6703294[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[11755]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31033]:int,
		//     0);
		//   StaticEventHandler_CallItemUIHoverChangedEvent(methodInfo, this);
	}

}
