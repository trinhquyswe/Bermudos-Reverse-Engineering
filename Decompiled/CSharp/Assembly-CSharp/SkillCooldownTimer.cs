// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class SkillCooldownTimer : MonoBehaviour
{
	// Fields
	private Image dashCooldownImage;
	private Image bashCooldownImage;
	private Image beamCooldownImage;
	private Image beamIcon;
	public float dashCooldown;
	public float bashCooldown;

	// Methods
	private void OnEnable()
	{
		// ---- decompiled from wasm (SkillCooldownTimer_OnEnable) ----
		//   var this:int;
		//   var d:int;
		//   var c:int_ptr;
		//   if (eqz(6703497[0]:ubyte)) {
		//     f_hpa(5601868);
		//     f_hpa(5611444);
		//     f_hpa(5686668);
		//     f_hpa(5686672);
		//     f_hpa(5686676);
		//     6703497[0]:byte = 1;
		//   }
		//   var e:int = f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(e, this, d_p444444444444044P44p44444444[32960]:int, 0);
		//   if (eqz(6703548[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5621908);
		//     6703548[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[7]:int;
		//   loop L_e {
		//     c = f_kyud(methodInfo, e, 0);
		//     if (c) {
		//       d = d_p444444444444044P44p44444444[14153]:int;
		//       if (d != c[0]) goto B_d;
		//     }
		//     d = methodInfo !=
		//         (c = System_Net_WebOperation_ctor(
		//                (d_p444444444444044P44p44444444[16769]:int)[23]:int + 28,
		//                c,
		//                methodInfo));
		//     methodInfo = c;
		//     if (d) continue L_e;
		//   }
		//   e = f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(e, this, d_p444444444444044P44p44444444[32959]:int, 0);
		//   if (eqz(6703545[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5621908);
		//     6703545[0]:byte = 1;
		//   }
		//   methodInfo = 
		//     ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[6]:int;
		//   loop L_h {
		//     c = f_kyud(methodInfo, e, 0);
		//     if (c) {
		//       d = d_p444444444444044P44p44444444[14153]:int;
		//       if (d != c[0]) goto B_c;
		//     }
		//     d = methodInfo !=
		//         (c = System_Net_WebOperation_ctor(
		//                (d_p444444444444044P44p44444444[16769]:int)[23]:int + 24,
		//                c,
		//                methodInfo));
		//     methodInfo = c;
		//     if (d) continue L_h;
		//   }
		//   methodInfo = f_icke(d_p444444444444044P44p44444444[11759]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[32961]:int,
		//     0);
		//   RageEvent_add_OnRageChanged(methodInfo, 0);
		//   return ;
		//   label B_d:
		//   f_ypa(c, d);
		//   unreachable;
		//   label B_c:
		//   f_ypa(c, d);
		//   unreachable;
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (SkillCooldownTimer_OnDisable) ----
		//   var this:int_ptr;
		//   this[8] = 1065353216;
		//   UnityEngine_UI_Image_get_fillAmount(this[4], 1.0f, 0);
	}

	public void GetDashCooldown()
	{
		// ---- decompiled from wasm (SkillCooldownTimer_GetDashCooldown) ----
		//   var this:int_ptr;
		//   this[9] = 1056964608;
		//   UnityEngine_UI_Image_get_fillAmount(this[5], 1.0f, 0);
	}

	public void GetBashCooldown()
	{
		// ---- decompiled from wasm (SkillCooldownTimer_GetBashCooldown) ----
		//   if (eqz(6703498[0]:ubyte)) {
		//     f_hpa(5686664);
		//     f_hpa(5623156);
		//     f_hpa(5690172);
		//     6703498[0]:byte = 1;
		//   }
		//   b = DG_Tweening_DOTweenModuleUI_DOFade_2(a[6], b[2], 0.3f, 0);
		//   c = f_icke(d_p444444444444044P44p44444444[17081]:int);
		//   DG_Tweening_Color2_op_Multiply(
		//     c,
		//     a,
		//     d_p444444444444044P44p44444444[32958]:int,
		//     0);
		//   DG_Tweening_TweenSettingsExtensions_From_6(
		//     b,
		//     c,
		//     d_p444444444444044P44p44444444[33835]:int);
	}

	public void IncreaseBeamCooldown(RageEventArgs rageEventArgs)
	{
		// ---- decompiled from wasm (SkillCooldownTimer_IncreaseBeamCooldown) ----
		//   UnityEngine_UI_Image_get_fillAmount(a[4], 0.0f, 0);
		//   UnityEngine_UI_Image_get_fillAmount(a[5], 0.0f, 0);
		//   UnityEngine_UI_Image_get_fillAmount(a[6], 0.0f, 0);
	}

	private void Start()
	{
		// ---- decompiled from wasm (SkillCooldownTimer_Start) ----
		//   var this:int;
		//   var methodInfo:float_ptr = this[4]:int;
		//   var c:float = methodInfo[37];
		//   if (c > 0.0f) {
		//     UnityEngine_UI_Image_get_fillAmount(
		//       methodInfo,
		//       c + -1.0f / this[8]:float * UnityEngine_Time_get_time(0),
		//       0)
		//   }
		//   methodInfo = this[5]:int;
		//   c = methodInfo[37];
		//   if (c > 0.0f) {
		//     UnityEngine_UI_Image_get_fillAmount(
		//       methodInfo,
		//       c + -1.0f / this[9]:float * UnityEngine_Time_get_time(0),
		//       0)
		//   }
	}

	private void Update()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (SkillCooldownTimer_ctor) ----
		//   var this:int_ptr;
		//   var methodInfo:float_ptr = this[6];
		//   var c:float = methodInfo[37];
		//   f_sbnb(f_canb(methodInfo, 0), c != 1.0f, 0);
		//   f_sbnb(f_canb(this[7], 0), c == 1.0f, 0);
	}

	private void <IncreaseBeamCooldown>b__10_0()
	{
		// ---- decompiled from wasm (SkillCooldownTimer_IncreaseBeamCooldown_b_10_0) ----
		//   var this:int_ptr;
		//   if (eqz(6703499[0]:ubyte)) {
		//     f_hpa(5666188);
		//     f_hpa(5666192);
		//     f_hpa(5609512);
		//     f_hpa(5662692);
		//     6703499[0]:byte = 1;
		//   }
		//   if (eqz(6703500[0]:ubyte)) {
		//     f_hpa(5625804);
		//     6703500[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = 
		//     f_icke(d_p444444444444044P44p44444444[17743]:int);
		//   methodInfo[4] = this;
		//   methodInfo[2] = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
		//   UnityEngine_Events_UnityEventBase_RemoveListener((this[4])[52]:int, 0);
		//   UnityEngine_Events_UnityEventBase_RemoveListener((this[5])[52]:int, 0);
		//   methodInfo = (this[4])[52]:int;
		//   var c:int = f_icke(d_p444444444444044P44p44444444[13670]:int);
		//   f_qibd(c, this, d_p444444444444044P44p44444444[27839]:int, 0);
		//   UnityEngine_Events_UnityEvent_1_ctor(
		//     methodInfo,
		//     c,
		//     d_p444444444444044P44p44444444[26965]:int);
		//   methodInfo = (this[5])[52]:int;
		//   c = f_icke(d_p444444444444044P44p44444444[13670]:int);
		//   f_qibd(c, this, d_p444444444444044P44p44444444[27840]:int, 0);
		//   UnityEngine_Events_UnityEvent_1_ctor(
		//     methodInfo,
		//     c,
		//     d_p444444444444044P44p44444444[26965]:int);
	}

}
