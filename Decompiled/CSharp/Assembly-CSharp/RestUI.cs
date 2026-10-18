// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class RestUI : MonoBehaviour
{
	// Fields
	private Image restImage;
	private TextMeshProUGUI restText;

	// Methods
	private void Awake()
	{
		// <no wasm mapping>
	}

	private void Start()
	{
		// ---- decompiled from wasm (RestUI_Start) ----
		//   var this:int;
		//   if (eqz(6703783[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5685204);
		//     6703783[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(methodInfo, this, d_p444444444444044P44p44444444[32593]:int, 0);
		//   StaticEventHandler_CallPressRestEvent(methodInfo, 0);
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (RestUI_OnEnable) ----
		//   var this:int;
		//   if (eqz(6703784[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5685204);
		//     6703784[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(methodInfo, this, d_p444444444444044P44p44444444[32593]:int, 0);
		//   StaticEventHandler_add_OnRestInBonfire(methodInfo, 0);
	}

	private void OnDestroy()
	{
		// ---- decompiled from wasm (RestUI_OnDestroy) ----
		//   var this:int_ptr;
		//   if (eqz(6703785[0]:ubyte)) {
		//     f_hpa(5613524);
		//     f_hpa(5685200);
		//     f_hpa(5623156);
		//     f_hpa(5690228);
		//     6703785[0]:byte = 1;
		//   }
		//   f_sbnb(f_canb(this[4], 0), 1, 0);
		//   f_sbnb(f_canb(this[5], 0), 1, 0);
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[14673]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
		//   methodInfo = DG_Tweening_DOTween_To_15(0);
		//   DG_Tweening_TweenSettingsExtensions_Prepend(
		//     DG_Tweening_TweenParams_cctor(
		//       methodInfo,
		//       DG_Tweening_TweenSettingsExtensions_SetEase(
		//         DG_Tweening_DOTweenModuleUI_DOColor(this[5], 1.0f, 1.0f, 0),
		//         4,
		//         d_p444444444444044P44p44444444[33849]:int),
		//       0),
		//     DG_Tweening_TweenSettingsExtensions_SetEase(
		//       DG_Tweening_DOTweenModuleUI_DOColor_1(this[4], 0.6f, 1.0f, 0),
		//       4,
		//       d_p444444444444044P44p44444444[33849]:int),
		//     0);
		//   methodInfo = 
		//     DG_Tweening_TweenSettingsExtensions_Prepend(
		//       DG_Tweening_TweenParams_cctor(
		//         methodInfo,
		//         DG_Tweening_TweenSettingsExtensions_SetEase(
		//           DG_Tweening_DOTweenModuleUI_DOColor(this[5], 0.0f, 1.0f, 0),
		//           4,
		//           d_p444444444444044P44p44444444[33849]:int),
		//         0),
		//       DG_Tweening_TweenSettingsExtensions_SetEase(
		//         DG_Tweening_DOTweenModuleUI_DOColor_1(this[4], 0.0f, 1.0f, 0),
		//         4,
		//         d_p444444444444044P44p44444444[33849]:int),
		//       0);
		//   var c:int = f_icke(d_p444444444444044P44p44444444[17081]:int);
		//   DG_Tweening_Color2_op_Multiply(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[32592]:int,
		//     0);
		//   DG_Tweening_TweenSettingsExtensions_PrependInterval(methodInfo, c, 0);
	}

	private void ShowRestUI()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	private void <ShowRestUI>b__6_0()
	{
		// ---- decompiled from wasm (RestUI_ShowRestUI_b_6_0) ----
		//   var this:int_ptr;
		//   if (eqz(6703786[0]:ubyte)) {
		//     f_hpa(5668376);
		//     f_hpa(5668404);
		//     f_hpa(5668464);
		//     f_hpa(5668508);
		//     f_hpa(5668604);
		//     f_hpa(5668632);
		//     6703786[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28419]:int);
		//   this[5] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28408]:int);
		//   this[6] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28443]:int);
		//   this[8] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28393]:int);
		//   this[9] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28386]:int);
		//   this[7] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28450]:int);
	}

}
