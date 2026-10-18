// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class MapTransition : MonoBehaviour
{
	// Fields
	private Image image;
	private TextMeshProUGUI text;
	private bool isLoadedMap;
	public float transitonTime;

	// Methods
	private void Awake()
	{
		// <no wasm mapping>
	}

	private void Start()
	{
		// ---- decompiled from wasm (MapTransition_Start) ----
		//   var this:int;
		//   if (eqz(6703378[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5613524);
		//     f_hpa(5680540);
		//     6703378[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = System_Linq_Enumerable_Count(this, 0);
		//   var c:int_ptr = d_p444444444444044P44p44444444[14673]:int;
		//   if (eqz(c[29])) { f_ahje(c) }
		//   DG_Tweening_DOTween_KillAll_1(methodInfo, 0, 0);
		//   var d:int = f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(d, this, d_p444444444444044P44p44444444[31427]:int, 0);
		//   if (eqz(6703530[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5621908);
		//     6703530[0]:byte = 1;
		//   }
		//   this = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[1]:int;
		//   loop L_e {
		//     methodInfo = f_kyud(this, d, 0);
		//     if (methodInfo) {
		//       c = d_p444444444444044P44p44444444[14153]:int;
		//       if (c != methodInfo[0]) goto B_d;
		//     }
		//     c = this !=
		//         (methodInfo = 
		//            System_Net_WebOperation_ctor(
		//              (d_p444444444444044P44p44444444[16769]:int)[23]:int + 4,
		//              methodInfo,
		//              this));
		//     this = methodInfo;
		//     if (c) continue L_e;
		//   }
		//   return ;
		//   label B_d:
		//   f_ypa(methodInfo, c);
		//   unreachable;
	}

	private void OnDestroy()
	{
		// ---- decompiled from wasm (MapTransition_OnDestroy) ----
		//   var this:int;
		//   if (eqz(6703379[0]:ubyte)) {
		//     f_hpa(5613524);
		//     f_hpa(5680536);
		//     f_hpa(5623156);
		//     f_hpa(5690228);
		//     6703379[0]:byte = 1;
		//   }
		//   f_sbnb(f_canb(this[4]:int, 0), 1, 0);
		//   f_sbnb(f_canb(this[5]:int, 0), 1, 0);
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[14673]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
		//   methodInfo = DG_Tweening_DOTween_To_15(0);
		//   DG_Tweening_TweenSettingsExtensions_Prepend(
		//     DG_Tweening_TweenParams_cctor(
		//       methodInfo,
		//       DG_Tweening_TweenSettingsExtensions_SetEase(
		//         DG_Tweening_DOTweenModuleUI_DOColor_1(this[4]:int,
		//                                               1.0f,
		//                                               this[7]:float * 0.5f,
		//                                               0),
		//         4,
		//         d_p444444444444044P44p44444444[33849]:int),
		//       0),
		//     DG_Tweening_TweenSettingsExtensions_SetEase(
		//       DG_Tweening_DOTweenModuleUI_DOColor(this[5]:int,
		//                                           1.0f,
		//                                           this[7]:float * 0.5f,
		//                                           0),
		//       4,
		//       d_p444444444444044P44p44444444[33849]:int),
		//     0);
		//   methodInfo = 
		//     DG_Tweening_TweenSettingsExtensions_Prepend(
		//       DG_Tweening_TweenParams_cctor(
		//         methodInfo,
		//         DG_Tweening_DOTweenModuleUI_DOColor_1(this[4]:int,
		//                                               0.0f,
		//                                               this[7]:float * 0.5f,
		//                                               0),
		//         0),
		//       DG_Tweening_TweenSettingsExtensions_SetEase(
		//         DG_Tweening_DOTweenModuleUI_DOColor(this[5]:int,
		//                                             0.0f,
		//                                             this[7]:float * 0.5f,
		//                                             0),
		//         4,
		//         d_p444444444444044P44p44444444[33849]:int),
		//       0);
		//   var c:int = f_icke(d_p444444444444044P44p44444444[17081]:int);
		//   DG_Tweening_Color2_op_Multiply(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[31426]:int,
		//     0);
		//   DG_Tweening_TweenSettingsExtensions_PrependInterval(methodInfo, c, 0);
	}

	private void OnMapTransition()
	{
		// ---- decompiled from wasm (MapTransition_OnMapTransition) ----
		//   var this:int_ptr;
		//   this[7] = 1056964608;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	private void <OnMapTransition>b__7_0()
	{
		// ---- decompiled from wasm (MapTransition_OnMapTransition_b_7_0) ----
		//   if (eqz(6703380[0]:ubyte)) {
		//     f_hpa(5660024);
		//     f_hpa(5726944);
		//     f_hpa(5715292);
		//     f_hpa(5728548);
		//     6703380[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   c = 
		//     ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
		//   if (
		//     (((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int)[7]:int !=
		//     2) goto B_c;
		//   if (eqz(multiple_System_String_Equals(
		//             (a[4]:int)[4]:int,
		//             d_p444444444444044P44p44444444[43028]:int,
		//             0))) goto B_c;
		//   a = d_p444444444444044P44p44444444[40115]:int;
		//   if (eqz(6703582[0]:ubyte)) {
		//     f_hpa(5621908);
		//     6703582[0]:byte = 1;
		//   }
		//   c = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[18]:int;
		//   if (eqz(c)) goto B_b;
		//   call_indirect(c[8]:int, a, -1, 1, c[5]:int, c[3]:int);
		//   return ;
		//   label B_c:
		//   if (eqz(UnityEngine_Component_GetComponents(
		//             b,
		//             d_p444444444444044P44p44444444[43429]:int,
		//             0))) goto B_b;
		//   if (a[20]:ubyte) goto B_b;
		//   if (eqz(6703381[0]:ubyte)) {
		//     f_hpa(5631208);
		//     6703381[0]:byte = 1;
		//   }
		//   c = f_icke(d_p444444444444044P44p44444444[19094]:int);
		//   c[5]:int = b;
		//   c[4]:int = a;
		//   c[2]:int = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
		//   a[20]:byte = 1;
		//   label B_b:
	}

}
