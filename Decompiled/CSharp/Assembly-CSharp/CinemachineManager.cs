// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class CinemachineManager : MonoBehaviour
{
	// Fields
	private CinemachineVirtualCamera cinemachineVirtualCamera;
	private CinemachineVirtualCamera zoomCamera;
	private CinemachineConfiner2D cinemachineConfiner2D;
	private Collider2D mapCollider;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (CinemachineManager_Awake) ----
		//   var this:int;
		//   if (eqz(6703887[0]:ubyte)) {
		//     f_hpa(5601808);
		//     f_hpa(5601772);
		//     f_hpa(5667724);
		//     f_hpa(5667728);
		//     f_hpa(5660024);
		//     6703887[0]:byte = 1;
		//   }
		//   var methodInfo:ubyte_ptr = 
		//     f_icke(d_p444444444444044P44p44444444[11744]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[28224]:int,
		//     0);
		//   SoundEffectSO_ctor(methodInfo, 0);
		//   methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189] & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   var d:int_ptr = ((if (methodInfo[189] & 1) {
		//                       methodInfo
		//                     } else {
		//                       System_Threading_Monitor_Enter_1(methodInfo)
		//                     })[23]:int)[0]:int;
		//   methodInfo = d[8];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11735]:int);
		//   f_eujc(c, this, d_p444444444444044P44p44444444[28223]:int, 0);
		//   this = f_iyud(methodInfo, c, 0);
		//   if (eqz(this)) {
		//     d[8] = 0;
		//     return ;
		//   }
		//   methodInfo = 
		//     f_upa(this, c = d_p444444444444044P44p44444444[11735]:int);
		//   if (methodInfo) {
		//     d[8] = methodInfo;
		//     if (
		//       eqz(
		//         f_upa(this, methodInfo = d_p444444444444044P44p44444444[11735]:int))) goto B_e;
		//     return ;
		//   }
		//   f_ypa(this, c);
		//   unreachable;
		//   label B_e:
		//   f_ypa(this, methodInfo);
		//   unreachable;
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (CinemachineManager_OnEnable) ----
		//   var this:int;
		//   if (eqz(6703888[0]:ubyte)) {
		//     f_hpa(5601808);
		//     f_hpa(5667728);
		//     6703888[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[11744]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[28224]:int,
		//     0);
		//   StaticEventHandler_add_OnMapChanged(methodInfo, 0);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (CinemachineManager_OnDisable) ----
		//   var d:int_ptr;
		//   if (eqz(6703889[0]:ubyte)) {
		//     f_hpa(5601772);
		//     f_hpa(5667724);
		//     f_hpa(5667720);
		//     f_hpa(5602744);
		//     f_hpa(5602784);
		//     f_hpa(5613524);
		//     f_hpa(5660024);
		//     f_hpa(5623156);
		//     f_hpa(5690172);
		//     f_hpa(5690232);
		//     f_hpa(5696372);
		//     f_hpa(5696376);
		//     f_hpa(5626128);
		//     6703889[0]:byte = 1;
		//   }
		//   br_table[B_g, B_f, B_d, B_e, ..B_d](b)
		//   label B_g:
		//   if (eqz(6703891[0]:ubyte)) {
		//     f_hpa(5626132);
		//     6703891[0]:byte = 1;
		//   }
		//   b = f_icke(d_p444444444444044P44p44444444[17825]:int);
		//   b[4]:int = a;
		//   b[2]:int = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
		//   return ;
		//   label B_f:
		//   b = f_icke(d_p444444444444044P44p44444444[17824]:int);
		//   b[3]:int = a;
		//   b[2]:float = (a[5])[29]:float;
		//   c = f_icke(d_p444444444444044P44p44444444[11978]:int);
		//   f_gqkd(c, b, d_p444444444444044P44p44444444[35385]:int, 0);
		//   d = f_icke(d_p444444444444044P44p44444444[11988]:int);
		//   f_drkd(d, b, d_p444444444444044P44p44444444[35386]:int, 0);
		//   b = d_p444444444444044P44p44444444[14673]:int;
		//   if (eqz(b[29]:int)) { f_ahje(b) }
		//   b = DG_Tweening_TweenSettingsExtensions_SetEase(
		//         DG_Tweening_DOTween_ManualUpdate(c, d, 8.4375f, 5.0f, 0),
		//         1,
		//         d_p444444444444044P44p44444444[33850]:int);
		//   c = f_icke(d_p444444444444044P44p44444444[17081]:int);
		//   DG_Tweening_Color2_op_Multiply(
		//     c,
		//     a,
		//     d_p444444444444044P44p44444444[28222]:int,
		//     0);
		//   DG_Tweening_TweenSettingsExtensions_From_6(
		//     b,
		//     c,
		//     d_p444444444444044P44p44444444[33835]:int);
		//   return ;
		//   label B_e:
		//   f_sbnb(f_canb(a[5], 0), 0, 0);
		//   f_sbnb(f_canb(a[4], 0), 1, 0);
		//   b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   b = 
		//     ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//   d = 
		//     ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
		//   b = d[8];
		//   c = f_icke(d_p444444444444044P44p44444444[11735]:int);
		//   f_eujc(c, a, d_p444444444444044P44p44444444[28223]:int, 0);
		//   a = f_kyud(b, c, 0);
		//   if (eqz(a)) {
		//     d[8] = 0;
		//     return ;
		//   }
		//   b = f_upa(a, c = d_p444444444444044P44p44444444[11735]:int);
		//   if (eqz(b)) goto B_c;
		//   d[8] = b;
		//   if (
		//     eqz(f_upa(a, b = d_p444444444444044P44p44444444[11735]:int))) goto B_b;
		//   label B_d:
		//   return ;
		//   label B_c:
		//   f_ypa(a, c);
		//   unreachable;
		//   label B_b:
		//   f_ypa(a, b);
		//   unreachable;
	}

	private void GameManager_OnGameStateChange(GameState gameState)
	{
		// ---- decompiled from wasm (CinemachineManager_GameManager_OnGameStateChange) ----
		//   var this:int;
		//   var gameState:int_ptr;
		//   CinemachineManager_ZoomCam(this, gameState[2], this);
	}

	private void StaticEventHandler_OnMapChanged(MapChangedEventArgs mapChangedEventArgs)
	{
		// ---- decompiled from wasm (CinemachineManager_StaticEventHandler_OnMapChanged) ----
		//   var c:int;
		//   if (eqz(6703890[0]:ubyte)) {
		//     f_hpa(5660024);
		//     6703890[0]:byte = 1;
		//   }
		//   b = a[4];
		//   call_indirect(
		//     b,
		//     System_Linq_Enumerable_Count(
		//       (((if ((c = 
		//                 ((if ((c = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
		//                       1) {
		//                     c
		//                   } else {
		//                     System_Threading_Monitor_Enter_1(c)
		//                   })[24]:int)[2]:int)[189]:ubyte &
		//              1) {
		//            c
		//          } else {
		//            System_Threading_Monitor_Enter_1(c)
		//          })[23]:int)[0]:int)[4]:int,
		//       0),
		//     (c = b[0]:int)[113]:int,
		//     c[112]:int);
		//   a = a[5];
		//   call_indirect(
		//     a,
		//     System_Linq_Enumerable_Count(
		//       (((if ((b = 
		//                 ((if ((b = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
		//                       1) {
		//                     b
		//                   } else {
		//                     System_Threading_Monitor_Enter_1(b)
		//                   })[24]:int)[2]:int)[189]:ubyte &
		//              1) {
		//            b
		//          } else {
		//            System_Threading_Monitor_Enter_1(b)
		//          })[23]:int)[0]:int)[4]:int,
		//       0),
		//     (b = a[0])[113]:int,
		//     b[112]:int);
	}

	private void Start()
	{
		// <no wasm mapping>
	}

	private IEnumerator ZoomCam()
	{
		// ---- decompiled from wasm (CinemachineManager_ZoomCam) ----
		//   if (eqz(6703892[0]:ubyte)) {
		//     f_hpa(5668440);
		//     f_hpa(5619244);
		//     6703892[0]:byte = 1;
		//   }
		//   c = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(c[29])) { f_ahje(c) }
		//   if (f_qcnb(b, 0, 0)) goto B_c;
		//   a[7] =
		//     (b = UnityEngine_GameObject_get_activeInHierarchy(
		//            b,
		//            d_p444444444444044P44p44444444[28402]:int));
		//   c = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(c[29])) { f_ahje(c) }
		//   if (eqz(UnityEngine_Camera_get_targetTexture(b, 0, 0))) goto B_c;
		//   (a[6])[6]:int = a[7];
		//   label B_c:
	}

	private void Confine(Map map)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (CinemachineManager_ctor) ----
		//   var this:int;
		//   if (eqz(6703893[0]:ubyte)) {
		//     f_hpa(5601772);
		//     f_hpa(5667724);
		//     f_hpa(5660024);
		//     6703893[0]:byte = 1;
		//   }
		//   f_sbnb(f_canb(this[5]:int, 0), 0, 0);
		//   f_sbnb(f_canb(this[4]:int, 0), 1, 0);
		//   var methodInfo:ubyte_ptr = 
		//     (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189] & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   var d:int_ptr = ((if (methodInfo[189] & 1) {
		//                       methodInfo
		//                     } else {
		//                       System_Threading_Monitor_Enter_1(methodInfo)
		//                     })[23]:int)[0]:int;
		//   methodInfo = d[8];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11735]:int);
		//   f_eujc(c, this, d_p444444444444044P44p44444444[28223]:int, 0);
		//   this = f_kyud(methodInfo, c, 0);
		//   if (eqz(this)) {
		//     d[8] = 0;
		//     goto B_f;
		//   }
		//   methodInfo = 
		//     f_upa(this, c = d_p444444444444044P44p44444444[11735]:int);
		//   if (eqz(methodInfo)) goto B_e;
		//   d[8] = methodInfo;
		//   if (
		//     eqz(
		//       f_upa(this, methodInfo = d_p444444444444044P44p44444444[11735]:int))) goto B_d;
		//   label B_f:
		//   this = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   this = 
		//     ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
		//   this = 
		//     ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[23]:int)[0]:int;
		//   if (eqz(6703899[0]:ubyte)) {
		//     f_hpa(5659992);
		//     6703899[0]:byte = 1;
		//   }
		//   this[7]:int = 2;
		//   f_sbnb(this[13]:int, 1, 0);
		//   f_sbnb(this[14]:int, 1, 0);
		//   f_sbnb(this[15]:int, 1, 0);
		//   this = this[8]:int;
		//   if (this) { call_indirect(this[8]:int, 2, this[5]:int, this[3]:int) }
		//   return ;
		//   label B_e:
		//   f_ypa(this, c);
		//   unreachable;
		//   label B_d:
		//   f_ypa(this, methodInfo);
		//   unreachable;
	}

	private void <GameManager_OnGameStateChange>b__7_2()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// CinemachineManager_c_DisplayClass7_0_GameManager_OnGameStateChange_b_0(a:int, b:float, c:int)
	//   a[2]:float = b;
	//   ((a[3]:int)[5]:int)[29]:float = b;

	// CinemachineManager_ZoomCam_d_10_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5696380));
	//   unreachable;

	// CinemachineManager_ZoomCam_d_10_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int;
	//   if (eqz(6703895[0]:ubyte)) {
	//     f_hpa(5601860);
	//     f_hpa(5611444);
	//     f_hpa(5675412);
	//     f_hpa(5675416);
	//     6703895[0]:byte = 1;
	//   }
	//   var methodInfo:int = 
	//     f_icke(d_p444444444444044P44p44444444[11757]:int);
	//   UnityEngine_UIElements_VisualElement_get_layout(
	//     methodInfo,
	//     this,
	//     d_p444444444444044P44p44444444[30145]:int,
	//     0);
	//   StaticEventHandler_CallNoteOpenedEvent(methodInfo, 0);
	//   methodInfo = f_icke(d_p444444444444044P44p44444444[14153]:int);
	//   f_uhrd(methodInfo, this, d_p444444444444044P44p44444444[30146]:int, 0);
	//   StaticEventHandler_CallPressRestEvent(methodInfo, 0);

}
