// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class InventoryManager : MonoBehaviour
{
	// Fields
	public List<InventoryItem> inventoryItemList;
	public List<ItemSO> itemSOList;
	private Inventory inventory;
	private SaveFileSetup saveFileSetup;
	private SaveFile saveFile;
	public Image inventoryInstructionImg;
	private string instructionText;
	private bool isInstruction;
	public List<InventoryItem> HotBarItem { get; }

	// Methods
	public List<InventoryItem> get_HotBarItem()
	{
		// ---- decompiled from wasm (InventoryManager_get_HotBarItem) ----
		//   var this:int_ptr;
		//   var methodInfo:int;
		//   if (eqz(6703298[0]:ubyte)) {
		//     f_hpa(5668636);
		//     6703298[0]:byte = 1;
		//   }
		//   this[7] =
		//     (methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
		//                     this,
		//                     d_p444444444444044P44p44444444[28451]:int));
		//   this[8] = Esper_ESave_SaveFileSetup_GenerateAESTokens(methodInfo, 0);
	}

	private void Awake()
	{
		// ---- decompiled from wasm (InventoryManager_Awake) ----
		//   var this:int;
		//   var e:int;
		//   if (eqz(6703299[0]:ubyte)) {
		//     f_hpa(5601844);
		//     f_hpa(5601772);
		//     f_hpa(5611444);
		//     f_hpa(5678968);
		//     f_hpa(5678972);
		//     f_hpa(5678976);
		//     f_hpa(5660024);
		//     6703299[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   var d:int_ptr = ((if (methodInfo[189]:ubyte & 1) {
		//                       methodInfo
		//                     } else {
		//                       System_Threading_Monitor_Enter_1(methodInfo)
		//                     })[23]:int)[0]:int;
		//   methodInfo = d[8];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11735]:int);
		//   f_eujc(c, this, d_p444444444444044P44p44444444[31034]:int, 0);
		//   methodInfo = f_iyud(methodInfo, c, 0);
		//   if (eqz(methodInfo)) {
		//     d[8] = 0;
		//     goto B_g;
		//   }
		//   c = f_upa(methodInfo, e = d_p444444444444044P44p44444444[11735]:int);
		//   if (eqz(c)) goto B_f;
		//   d[8] = c;
		//   if (
		//     eqz(f_upa(methodInfo, c = d_p444444444444044P44p44444444[11735]:int))) goto B_e;
		//   label B_g:
		//   methodInfo = f_icke(d_p444444444444044P44p44444444[11753]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31036]:int,
		//     0);
		//   StaticEventHandler_CallExitEvent(methodInfo, this);
		//   d = f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(d, this, d_p444444444444044P44p44444444[31035]:int, 0);
		//   if (eqz(6703559[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5621908);
		//     6703559[0]:byte = 1;
		//   }
		//   this = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[11]:int;
		//   loop L_j {
		//     methodInfo = f_iyud(this, d, 0);
		//     if (methodInfo) {
		//       c = d_p444444444444044P44p44444444[14153]:int;
		//       if (c != methodInfo[0]:int) goto B_d;
		//     }
		//     c = this !=
		//         (methodInfo = 
		//            System_Net_WebOperation_ctor(
		//              (d_p444444444444044P44p44444444[16769]:int)[23]:int + 44,
		//              methodInfo,
		//              this));
		//     this = methodInfo;
		//     if (c) continue L_j;
		//   }
		//   return ;
		//   label B_f:
		//   f_ypa(methodInfo, e);
		//   unreachable;
		//   label B_e:
		//   f_ypa(methodInfo, c);
		//   unreachable;
		//   label B_d:
		//   f_ypa(methodInfo, c);
		//   unreachable;
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (InventoryManager_OnEnable) ----
		//   var this:int;
		//   var e:int;
		//   if (eqz(6703300[0]:ubyte)) {
		//     f_hpa(5601844);
		//     f_hpa(5601772);
		//     f_hpa(5611444);
		//     f_hpa(5678968);
		//     f_hpa(5678972);
		//     f_hpa(5678976);
		//     f_hpa(5660024);
		//     6703300[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   var d:int_ptr = ((if (methodInfo[189]:ubyte & 1) {
		//                       methodInfo
		//                     } else {
		//                       System_Threading_Monitor_Enter_1(methodInfo)
		//                     })[23]:int)[0]:int;
		//   methodInfo = d[8];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11735]:int);
		//   f_eujc(c, this, d_p444444444444044P44p44444444[31034]:int, 0);
		//   methodInfo = f_kyud(methodInfo, c, 0);
		//   if (eqz(methodInfo)) {
		//     d[8] = 0;
		//     goto B_g;
		//   }
		//   c = f_upa(methodInfo, e = d_p444444444444044P44p44444444[11735]:int);
		//   if (eqz(c)) goto B_f;
		//   d[8] = c;
		//   if (
		//     eqz(f_upa(methodInfo, c = d_p444444444444044P44p44444444[11735]:int))) goto B_e;
		//   label B_g:
		//   methodInfo = f_icke(d_p444444444444044P44p44444444[11753]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31036]:int,
		//     0);
		//   StaticEventHandler_add_OnInventoryChanged(methodInfo, this);
		//   d = f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(d, this, d_p444444444444044P44p44444444[31035]:int, 0);
		//   if (eqz(6703560[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5621908);
		//     6703560[0]:byte = 1;
		//   }
		//   this = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[11]:int;
		//   loop L_j {
		//     methodInfo = f_kyud(this, d, 0);
		//     if (methodInfo) {
		//       c = d_p444444444444044P44p44444444[14153]:int;
		//       if (c != methodInfo[0]:int) goto B_d;
		//     }
		//     c = this !=
		//         (methodInfo = 
		//            System_Net_WebOperation_ctor(
		//              (d_p444444444444044P44p44444444[16769]:int)[23]:int + 44,
		//              methodInfo,
		//              this));
		//     this = methodInfo;
		//     if (c) continue L_j;
		//   }
		//   return ;
		//   label B_f:
		//   f_ypa(methodInfo, e);
		//   unreachable;
		//   label B_e:
		//   f_ypa(methodInfo, c);
		//   unreachable;
		//   label B_d:
		//   f_ypa(methodInfo, c);
		//   unreachable;
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (InventoryManager_OnDisable) ----
		//   var d:int;
		//   if (eqz(6703301[0]:ubyte)) {
		//     f_hpa(5601772);
		//     f_hpa(5678968);
		//     f_hpa(5660024);
		//     6703301[0]:byte = 1;
		//   }
		//   br_table[B_g, B_f, ..B_d](b - 2)
		//   label B_g:
		//   a[44]:byte = 1;
		//   b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   b = 
		//     ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//   b = 
		//     ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
		//   c = b[8]:int;
		//   d = f_icke(d_p444444444444044P44p44444444[11735]:int);
		//   f_eujc(d, a, d_p444444444444044P44p44444444[31034]:int, 0);
		//   a = b + 32;
		//   b = f_kyud(c, d, 0);
		//   if (eqz(b)) goto B_e;
		//   c = f_upa(b, d = d_p444444444444044P44p44444444[11735]:int);
		//   if (eqz(c)) goto B_c;
		//   a[0]:int = c;
		//   if (f_upa(b, a = d_p444444444444044P44p44444444[11735]:int)) goto B_d;
		//   f_ypa(b, a);
		//   unreachable;
		//   label B_f:
		//   InventoryManager_CollectIntentoryItem(a, a);
		//   b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   b = 
		//     ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//   b = 
		//     ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
		//   c = b[8]:int;
		//   d = f_icke(d_p444444444444044P44p44444444[11735]:int);
		//   f_eujc(d, a, d_p444444444444044P44p44444444[31034]:int, 0);
		//   a = b + 32;
		//   b = f_kyud(c, d, 0);
		//   if (eqz(b)) goto B_e;
		//   c = f_upa(b, d = d_p444444444444044P44p44444444[11735]:int);
		//   if (eqz(c)) goto B_b;
		//   a[0]:int = c;
		//   if (f_upa(b, a = d_p444444444444044P44p44444444[11735]:int)) goto B_d;
		//   f_ypa(b, a);
		//   unreachable;
		//   label B_e:
		//   a[0]:int = 0;
		//   label B_d:
		//   return ;
		//   label B_c:
		//   f_ypa(b, d);
		//   unreachable;
		//   label B_b:
		//   f_ypa(b, d);
		//   unreachable;
	}

	private void Instance_OnGameStateChange(GameState gameState)
	{
		// ---- decompiled from wasm (InventoryManager_Instance_OnGameStateChange) ----
		//   var this:int_ptr;
		//   var gameState:int_ptr;
		//   this[6] = (gameState = gameState[2]);
		//   f_sbnb(f_canb(gameState, 0), 0, 0);
		//   Inventory_MoveItemToHotBar(this[6], 70, this);
		//   Inventory_InitializeInventorySlotList(this[6], 10, this);
	}

	private void StaticEventHandler_OnInventoryChanged(OnInventoryChangedEventArgs onInventoryChangedEventArgs)
	{
		// <no wasm mapping>
	}

	private void Start()
	{
		// ---- decompiled from wasm (InventoryManager_Start) ----
		//   var this:int;
		//   var methodInfo:int_ptr;
		//   if (eqz(6703302[0]:ubyte)) {
		//     f_hpa(5649448);
		//     f_hpa(5704252);
		//     6703302[0]:byte = 1;
		//   }
		//   if (UnityEngine_GameObject_set_layer(f_canb(this[6]:int, 0), 0)) {
		//     f_sbnb(f_canb(this[6]:int, 0), 0, 0);
		//     if (InventoryDescription_ctor(this, this)[3]:int > 0) { this[44]:byte = 0 }
		//     methodInfo = d_p444444444444044P44p44444444[37355]:int;
		//     if (eqz(6703582[0]:ubyte)) {
		//       f_hpa(5621908);
		//       6703582[0]:byte = 1;
		//     }
		//     this = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[18]:int;
		//     if (eqz(this)) goto B_b;
		//     call_indirect(this[8]:int, methodInfo, -9, 0, this[5]:int, this[3]:int);
		//     return ;
		//   }
		//   Inventory_OnDestroy(this[6]:int, this[4]:int, this);
		//   InventoryManager_ToggleInventory(this, this);
		//   if (eqz(this[44]:ubyte)) goto B_f;
		//   if ((this[4]:int)[3]:int <= 0) goto B_f;
		//   var c:int = this[10]:int;
		//   if (eqz(6703582[0]:ubyte)) {
		//     f_hpa(5621908);
		//     6703582[0]:byte = 1;
		//   }
		//   methodInfo = 
		//     ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[18]:int;
		//   if (eqz(methodInfo)) goto B_f;
		//   call_indirect(methodInfo[8], c, -1, 1, methodInfo[5], methodInfo[3]);
		//   label B_f:
		//   f_sbnb(f_canb(this[6]:int, 0), 1, 0);
		//   label B_b:
	}

	public void ToggleInventory()
	{
		// ---- decompiled from wasm (InventoryManager_ToggleInventory) ----
		//   var this:int_ptr;
		//   var g:int;
		//   var methodInfo:int_ptr;
		//   var c:int;
		//   var d:int = g_a - 32;
		//   g_a = d;
		//   if (eqz(6703303[0]:ubyte)) {
		//     f_hpa(5640848);
		//     f_hpa(5640852);
		//     f_hpa(5640856);
		//     f_hpa(5649480);
		//     f_hpa(5649448);
		//     f_hpa(5649484);
		//     f_hpa(5649452);
		//     6703303[0]:byte = 1;
		//   }
		//   var h:long_ptr = d + 24;
		//   h[0] = 0L;
		//   d[2]:long = 0L;
		//   c = this[4];
		//   if (c[3]:int > 0) {
		//     loop L_g {
		//       var e:int_ptr = 
		//         f_dqi(c, g, d_p444444444444044P44p44444444[23655]:int);
		//       c = (this[6])[4]:int;
		//       methodInfo = e[4];
		//       if (methodInfo >= 0) {
		//         c = f_dqi(c, methodInfo, d_p444444444444044P44p44444444[23663]:int);
		//         f_sbnb(f_canb(c[6]:int, 0), 1, 0);
		//         methodInfo = c + 28;
		//         f_sbnb(f_canb(methodInfo[0], 0), 1, 0);
		//         f_kkx(c[6]:int, (e[2])[5]:int, 0);
		//         methodInfo = methodInfo[0];
		//         call_indirect(
		//           methodInfo,
		//           UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(e + 12, 0),
		//           (methodInfo = methodInfo[0])[181],
		//           methodInfo[180]);
		//         c[48]:byte = 1;
		//         c[8]:int = e;
		//         goto B_h;
		//       }
		//       UnityEngine_ComputeBuffer_Release(
		//         d,
		//         c,
		//         d_p444444444444044P44p44444444[23662]:int);
		//       h[0] = d[1]:long;
		//       d[2]:long = d[0]:long;
		//       d[0]:int = 0;
		//       d[1]:int = d + 16;
		//       loop L_l {
		//         6151988[0]:int = 0;
		//         methodInfo = 
		//           env_invoke_iii(1155, d + 16, d_p444444444444044P44p44444444[21505]:int);
		//         c = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (c == 1) goto B_j;
		//         if (eqz(methodInfo)) goto B_k;
		//         c = d[7]:int;
		//         if (c[48]:ubyte) continue L_l;
		//       }
		//       methodInfo = c[6]:int;
		//       6151988[0]:int = 0;
		//       var f:int_ptr = env_invoke_iii(2179, methodInfo, 0);
		//       methodInfo = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (methodInfo == 1) goto B_j;
		//       6151988[0]:int = 0;
		//       env_invoke_viii(7986, f, 1, 0);
		//       methodInfo = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (methodInfo == 1) goto B_j;
		//       methodInfo = c[7]:int;
		//       6151988[0]:int = 0;
		//       f = env_invoke_iii(2179, methodInfo, 0);
		//       methodInfo = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (methodInfo == 1) goto B_j;
		//       6151988[0]:int = 0;
		//       env_invoke_viii(7986, f, 1, 0);
		//       methodInfo = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (methodInfo == 1) goto B_j;
		//       methodInfo = c[6]:int;
		//       f = (e[2])[5]:int;
		//       6151988[0]:int = 0;
		//       env_invoke_viii(13916, methodInfo, f, 0);
		//       methodInfo = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (methodInfo == 1) goto B_j;
		//       methodInfo = c[7]:int;
		//       6151988[0]:int = 0;
		//       var i:int = env_invoke_iii(2331, e + 12, 0);
		//       f = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (f == 1) goto B_j;
		//       f = methodInfo[0];
		//       var j:int = f[181];
		//       f = f[180];
		//       6151988[0]:int = 0;
		//       env_invoke_viii(f, methodInfo, i, j);
		//       methodInfo = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (methodInfo == 1) goto B_j;
		//       c[48]:byte = 1;
		//       c[8]:int = e;
		//       e[4] = c[4]:int;
		//       label B_k:
		//       d_p444444444444044P44p44444444[21504]:int;
		//       goto B_h;
		//       label B_j:
		//       c = env_cxa_find_matching_catch_3(4889068);
		//       if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_d;
		//       c = env_cxa_begin_catch(c)[0]:int;
		//       6151988[0]:int = 0;
		//       d[0]:int = c;
		//       env_invoke_v(58);
		//       methodInfo = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (methodInfo == 1) goto B_e;
		//       d_p444444444444044P44p44444444[21504]:int;
		//       if (c) goto B_c;
		//       label B_h:
		//       c = e[5];
		//       if (c >= 0) {
		//         c = 
		//           f_dqi((this[6])[5]:int, c, d_p444444444444044P44p44444444[23663]:int);
		//         f_sbnb(f_canb(c[6]:int, 0), 1, 0);
		//         methodInfo = c + 28;
		//         f_sbnb(f_canb(methodInfo[0], 0), 1, 0);
		//         f_kkx(c[6]:int, (e[2])[5]:int, 0);
		//         methodInfo = methodInfo[0];
		//         call_indirect(
		//           methodInfo,
		//           UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(e + 12, 0),
		//           (methodInfo = methodInfo[0])[181],
		//           methodInfo[180]);
		//         c[48]:byte = 1;
		//         c[8]:int = e;
		//       }
		//       g = g + 1;
		//       if (g < (c = this[4])[3]:int) continue L_g;
		//     }
		//   }
		//   g_a = d + 32;
		//   return ;
		//   label B_e:
		//   c = env_cxa_find_matching_catch();
		//   env_getTempRet0();
		//   label B_d:
		//   6151988[0]:int = 0;
		//   env_invoke_ii(13917, d);
		//   d = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (d != 1) goto B_b;
		//   env_cxa_find_matching_catch_3(0);
		//   env_getTempRet0();
		//   f_sx();
		//   unreachable;
		//   label B_c:
		//   System_Net_CommandStream_ReceiveCommandResponseCallback(c);
		//   unreachable;
		//   label B_b:
		//   env_resumeException(c);
		//   unreachable;
	}

	private void LoadItemsToInventory()
	{
		// ---- decompiled from wasm (InventoryManager_LoadItemsToInventory) ----
		//   f_sbnb(f_canb(b[6]:int, 0), 1, 0);
		//   f_sbnb(f_canb(b[7]:int, 0), 1, 0);
		//   f_kkx(b[6]:int, (c[2])[5]:int, 0);
		//   a = b[7]:int;
		//   call_indirect(
		//     a,
		//     UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(c + 12, 0),
		//     (a = a[0])[181],
		//     a[180]);
		//   b[48]:byte = 1;
		//   b[8]:int = c;
	}

	private void SetInventorySlot(ItemUI slot, InventoryItem item)
	{
		// ---- decompiled from wasm (InventoryManager_SetInventorySlot) ----
		//   var e:int_ptr;
		//   if (eqz(6703304[0]:ubyte)) {
		//     f_hpa(5617460);
		//     f_hpa(5649432);
		//     f_hpa(5649448);
		//     f_hpa(5649452);
		//     f_hpa(5619244);
		//     6703304[0]:byte = 1;
		//   }
		//   var d:int_ptr = a[4];
		//   if (d[3] > 0) {
		//     c = 0;
		//     loop L_d {
		//       var f:int_ptr = 
		//         f_dqi(d, c, d_p444444444444044P44p44444444[23655]:int);
		//       d = f[2];
		//       e = d_p444444444444044P44p44444444[16103]:int;
		//       if (eqz(e[29])) { f_ahje(e) }
		//       if (f_qcnb(d, b, 0)) {
		//         c = f[3];
		//         if (c > 9) goto B_b;
		//         f[3] = c + 1;
		//         if (eqz(6703552[0]:ubyte)) {
		//           f_hpa(5619360);
		//           f_hpa(5621908);
		//           6703552[0]:byte = 1;
		//         }
		//         c = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[8]:int;
		//         if (eqz(c)) goto B_b;
		//         d = f_icke(d_p444444444444044P44p44444444[16132]:int);
		//         ItemConsumer_UsePotion(d, 0);
		//         d[2] = f;
		//         call_indirect(c[8]:int, d, c[5]:int, c[3]:int);
		//         return ;
		//       }
		//       c = c + 1;
		//       if (c < (d = a[4])[3]) continue L_d;
		//     }
		//   }
		//   c = f_icke(d_p444444444444044P44p44444444[15657]:int);
		//   c[5]:int = -1;
		//   c[3]:long@4 = -4294967295L;
		//   c[2]:int = b;
		//   b = d_p444444444444044P44p44444444[23650]:int;
		//   d = a[4];
		//   d[4] = d[4] + 1;
		//   e = d[3];
		//   if (e < (a = d[2])[3]) {
		//     d[3] = e + 1;
		//     a[e + 4]:int = c;
		//     return ;
		//   }
		//   System_String_Substring(d, c, ((b[4])[24]:int)[14]:int);
		//   label B_b:
	}

	public void CollectIntentoryItem(ItemSO itemSO)
	{
		// ---- decompiled from wasm (InventoryManager_CollectIntentoryItem) ----
		//   var g:int_ptr;
		//   var c:int;
		//   var d:int = g_a - 32;
		//   g_a = d;
		//   if (eqz(6703305[0]:ubyte)) {
		//     f_hpa(5640836);
		//     f_hpa(5640840);
		//     f_hpa(5640844);
		//     f_hpa(5617460);
		//     f_hpa(5649432);
		//     f_hpa(5649460);
		//     f_hpa(5685696);
		//     6703305[0]:byte = 1;
		//   }
		//   d[3]:long = 0L;
		//   d[2]:long = 0L;
		//   UnityEngine_ComputeBuffer_Release(
		//     d + 16,
		//     a[5],
		//     d_p444444444444044P44p44444444[23657]:int);
		//   d[2]:int = 0;
		//   d[3]:int = d + 16;
		//   b = 
		//     {
		//       loop L_m {
		//         6151988[0]:int = 0;
		//         c = 
		//           env_invoke_iii(1155, d + 16, d_p444444444444044P44p44444444[21502]:int);
		//         b = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (b == 1) goto B_i;
		//         if (c) {
		//           var e:int_ptr = d[7]:int;
		//           b = e[3];
		//           c = a[8];
		//           6151988[0]:int = 0;
		//           c = env_invoke_iiii(13913, c, b, 0);
		//           b = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (b == 1) goto B_h;
		//           if (eqz(c)) continue L_m;
		//           b = e[3];
		//           c = a[8];
		//           6151988[0]:int = 0;
		//           c = 
		//             env_invoke_iiiii(13914, c, b, 0, d_p444444444444044P44p44444444[32716]:int);
		//           b = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (b == 1) goto B_l;
		//           6151988[0]:int = 0;
		//           b = env_invoke_ii(268, d_p444444444444044P44p44444444[15657]:int);
		//           var f:int_ptr = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (f == 1) goto B_k;
		//           6151988[0]:int = 0;
		//           f = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (f == 1) goto B_k;
		//           b[2]:int = e;
		//           b[3]:int = c[2]:int;
		//           b[4]:int = c[3]:int;
		//           b[5]:int = c[4]:int;
		//           b[24]:byte = c[20]:ubyte;
		//           f = d_p444444444444044P44p44444444[23650]:int;
		//           c = a[4];
		//           c[4]:int = c[4]:int + 1;
		//           e = c[3]:int;
		//           if (e < (g = c[2]:int)[3]) {
		//             c[3]:int = e + 1;
		//             g[e + 4]:int = b;
		//             continue L_m;
		//           }
		//           e = ((f[4])[24]:int)[14]:int;
		//           6151988[0]:int = 0;
		//           env_invoke_viii(1153, c, b, e);
		//           b = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (b == 1) goto B_j;
		//           continue L_m;
		//         }
		//       }
		//       b = d[2]:int;
		//       goto B_f;
		//       label B_l:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_k:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_j:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_i:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_h:
		//       env_cxa_find_matching_catch_3(4889068);
		//       label B_g:
		//     }
		//   if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_d;
		//   b = env_cxa_begin_catch(b)[0]:int;
		//   6151988[0]:int = 0;
		//   d[2]:int = b;
		//   env_invoke_v(58);
		//   c = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (c == 1) goto B_e;
		//   label B_f:
		//   d[3]:int;
		//   d_p444444444444044P44p44444444[21501]:int;
		//   if (b) goto B_c;
		//   g_a = d + 32;
		//   return ;
		//   label B_e:
		//   b = env_cxa_find_matching_catch();
		//   env_getTempRet0();
		//   label B_d:
		//   6151988[0]:int = 0;
		//   env_invoke_ii(13915, d + 8);
		//   d = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (d != 1) goto B_b;
		//   env_cxa_find_matching_catch_3(0);
		//   env_getTempRet0();
		//   f_sx();
		//   unreachable;
		//   label B_c:
		//   System_Net_CommandStream_ReceiveCommandResponseCallback(b);
		//   unreachable;
		//   label B_b:
		//   env_resumeException(b);
		//   unreachable;
	}

	public void LoadItemFromJson()
	{
		// ---- decompiled from wasm (InventoryManager_LoadItemFromJson) ----
		//   var this:int_ptr;
		//   var d:int;
		//   var c:int;
		//   var f:int;
		//   var e:int;
		//   var g:long;
		//   if (eqz(6703306[0]:ubyte)) {
		//     f_hpa(5617508);
		//     f_hpa(5649448);
		//     f_hpa(5649452);
		//     f_hpa(5685668);
		//     6703306[0]:byte = 1;
		//   }
		//   Esper_ESave_SaveFile_LoadData(this[8], 0);
		//   var methodInfo:int = this[4];
		//   if (methodInfo[3]:int > 0) {
		//     loop L_c {
		//       c = f_dqi(methodInfo, d, d_p444444444444044P44p44444444[23655]:int);
		//       g = c[3]:long@4;
		//       e = c[5]:int;
		//       f = c[24]:ubyte;
		//       methodInfo = f_icke(d_p444444444444044P44p44444444[15669]:int);
		//       methodInfo[20]:byte = f;
		//       methodInfo[4]:int = e;
		//       methodInfo[2]:long@4 = g;
		//       Esper_ESave_SaveFile_AddOrUpdateData_5(
		//         this[8],
		//         (c[2]:int)[3]:int,
		//         methodInfo,
		//         d_p444444444444044P44p44444444[32709]:int);
		//       d = d + 1;
		//       if (d < (methodInfo = this[4])[3]:int) continue L_c;
		//     }
		//   }
		//   d = 0;
		//   Esper_ESave_SaveFile_SetSetupData(this[8], 0, 0);
		//   methodInfo = this[4];
		//   if (methodInfo[3]:int > 0) {
		//     loop L_e {
		//       c = f_dqi(methodInfo, d, d_p444444444444044P44p44444444[23655]:int);
		//       g = c[3]:long@4;
		//       e = c[5]:int;
		//       f = c[24]:ubyte;
		//       methodInfo = f_icke(d_p444444444444044P44p44444444[15669]:int);
		//       methodInfo[20]:byte = f;
		//       methodInfo[4]:int = e;
		//       methodInfo[2]:long@4 = g;
		//       methodInfo = f_dzjb(methodInfo, 0);
		//       UnityEngine_PlayerPrefs_GetFloat_1((c[2]:int)[3]:int, methodInfo, 0);
		//       d = d + 1;
		//       if (d < (methodInfo = this[4])[3]:int) continue L_e;
		//     }
		//   }
	}

	private void SaveItemToJson()
	{
		// <no wasm mapping>
	}

	private void OnApplicationQuit()
	{
		// <no wasm mapping>
	}

	private void StaticEventHandler_OnExit()
	{
		// ---- decompiled from wasm (InventoryManager_StaticEventHandler_OnExit) ----
		//   var this:int_ptr;
		//   if (eqz(6703307[0]:ubyte)) {
		//     f_hpa(5649456);
		//     f_hpa(5649428);
		//     f_hpa(5607320);
		//     f_hpa(5607316);
		//     f_hpa(5717768);
		//     6703307[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[13121]:int);
		//   multiple_System_Collections_Generic_List_1_cctor(
		//     methodInfo,
		//     d_p444444444444044P44p44444444[23649]:int);
		//   this[4] = methodInfo;
		//   methodInfo = f_icke(d_p444444444444044P44p44444444[13122]:int);
		//   multiple_System_Collections_Generic_List_1_cctor(
		//     methodInfo,
		//     d_p444444444444044P44p44444444[23656]:int);
		//   this[5] = methodInfo;
		//   this[10] = d_p444444444444044P44p44444444[40734]:int;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (InventoryManager_ctor) ----
		//   if (eqz(6703308[0]:ubyte)) {
		//     f_hpa(5628344);
		//     6703308[0]:byte = 1;
		//   }
		//   a = f_icke(d_p444444444444044P44p44444444[18378]:int);
		//   ((d_p444444444444044P44p44444444[18378]:int)[23]:int)[0]:int = a;
	}

}
