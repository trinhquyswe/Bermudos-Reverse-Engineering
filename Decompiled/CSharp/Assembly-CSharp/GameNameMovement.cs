// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class GameNameMovement : MonoBehaviour
{
	// Fields
	private RectTransform rectTransform;
	public float moveDistance;
	public float duration;
	public Ease easeType;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (GameNameMovement_Awake) ----
		//   var this:int;
		//   GameNameMovement_OnDestroy(this, this);
	}

	private void Start()
	{
		// ---- decompiled from wasm (GameNameMovement_Start) ----
		//   var this:int;
		//   if (eqz(6703333[0]:ubyte)) {
		//     f_hpa(5613524);
		//     6703333[0]:byte = 1;
		//   }
		//   this = System_Linq_Enumerable_Count(this, 0);
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[14673]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
		//   DG_Tweening_DOTween_KillAll_1(this, 0, 0);
	}

	private void OnDestroy()
	{
		// ---- decompiled from wasm (GameNameMovement_OnDestroy) ----
		//   var this:int;
		//   var g:float;
		//   var c:long_ptr = g_a - 16;
		//   g_a = c;
		//   if (eqz(6703334[0]:ubyte)) {
		//     f_hpa(5623156);
		//     f_hpa(5690176);
		//     f_hpa(5690236);
		//     f_hpa(5698156);
		//     f_hpa(5627752);
		//     6703334[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[18230]:int);
		//   methodInfo[2]:int = this;
		//   UnityEngine_RectTransform_set_anchorMax(c + 8, this[4]:int, 0);
		//   var e:long = c[1];
		//   var f:float = this[5]:float;
		//   methodInfo[5]:int = 0;
		//   methodInfo[3]:int = e;
		//   methodInfo[4]:float =
		//     (g = f32_reinterpret_i32(i32_wrap_i64(e >> 32L))) - f;
		//   this = DG_Tweening_TweenSettingsExtensions_SetEase(
		//            DG_Tweening_DOTweenModuleUI_DOAnchorPosX(this[4]:int,
		//                                                     f + g,
		//                                                     this[6]:float,
		//                                                     0,
		//                                                     0),
		//            this[7]:int,
		//            d_p444444444444044P44p44444444[33851]:int);
		//   var d:int = f_icke(d_p444444444444044P44p44444444[17081]:int);
		//   DG_Tweening_Color2_op_Multiply(
		//     d,
		//     methodInfo,
		//     d_p444444444444044P44p44444444[35831]:int,
		//     0);
		//   DG_Tweening_TweenSettingsExtensions_From_6(
		//     this,
		//     d,
		//     d_p444444444444044P44p44444444[33836]:int);
		//   g_a = c + 16;
	}

	private void GameNameAnimation()
	{
		// ---- decompiled from wasm (GameNameMovement_GameNameAnimation) ----
		//   var this:int;
		//   this[7]:int = 4;
		//   this[5]:long@4 = 4575657222492651520L;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (GameNameMovement_c_DisplayClass7_0_ctor) ----
		//   var this:int;
		//   if (eqz(6703335[0]:ubyte)) {
		//     f_hpa(5690236);
		//     f_hpa(5690260);
		//     6703335[0]:byte = 1;
		//   }
		//   var methodInfo:int = this[2]:int;
		//   DG_Tweening_TweenSettingsExtensions_SetLoops(
		//     DG_Tweening_TweenSettingsExtensions_SetEase(
		//       DG_Tweening_DOTweenModuleUI_DOAnchorPosX(methodInfo[4]:int,
		//                                                this[4]:float,
		//                                                methodInfo[6]:float,
		//                                                0,
		//                                                0),
		//       (this[2]:int)[7]:int,
		//       d_p444444444444044P44p44444444[33851]:int),
		//     -1,
		//     1,
		//     d_p444444444444044P44p44444444[33857]:int);
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// GameNameMovement_c_DisplayClass7_0_GameNameAnimation_b_0(a:int, b:int)
	//   var this:int;
	//   if (eqz(6703336[0]:ubyte)) {
	//     f_hpa(5602112);
	//     f_hpa(5678872);
	//     6703336[0]:byte = 1;
	//   }
	//   f_sbnb(f_canb(this, 0), 0, 0);
	//   var methodInfo:int = 
	//     f_icke(d_p444444444444044P44p44444444[11820]:int);
	//   f_ngkc(methodInfo, this, d_p444444444444044P44p44444444[31010]:int, 0);
	//   StaticEventHandler_CallMoveItemToHotBarEvent(methodInfo, this);

}
