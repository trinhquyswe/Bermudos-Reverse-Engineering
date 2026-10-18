// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class Stamina : MonoBehaviour
{
	// Fields
	private int maxStamina;
	public float currentStamina;
	private Player player;
	private float staminaRecoveryTimer;
	private float staminaRecoveryRate;
	private float staminaRegenAmount;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (Stamina_Awake) ----
		//   var this:int;
		//   var c:float;
		//   this[5]:float = (c = f32_convert_i32_s(this[4]:int));
		//   StaminaEvent_remove_OnStaminaChanged((this[6]:int)[15]:int,
		//                                        c / c,
		//                                        c,
		//                                        0.0f,
		//                                        this);
	}

	private void Start()
	{
		// ---- decompiled from wasm (Stamina_Start) ----
		//   var this:int;
		//   var c:float = this[5]:float;
		//   if (c < f32_convert_i32_s(this[4]:int)) {
		//     this[5]:float =
		//       (c = c + this[9]:float * UnityEngine_Time_get_time(0));
		//     StaminaEvent_remove_OnStaminaChanged(
		//       (this[6]:int)[15]:int,
		//       c / f32_convert_i32_s(this[4]:int),
		//       c,
		//       0.0f,
		//       this);
		//   }
		//   this[7]:float =
		//     UnityEngine_Rendering_Universal_ScriptableRenderer_InternalStartRendering(
		//       0) +
		//     this[8]:float;
	}

	private void Update()
	{
		// ---- decompiled from wasm (Stamina_Update) ----
		//   var e:float;
		//   var d:float = a[5]:float;
		//   if (d > 0.0f) {
		//     a[5]:float = (d = d - (e = f32_convert_i32_s(b)));
		//     StaminaEvent_remove_OnStaminaChanged((a[6]:int)[15]:int,
		//                                          d / f32_convert_i32_s(a[4]:int),
		//                                          d,
		//                                          e,
		//                                          a);
		//   }
	}

	public void UseStamina(int staminaAmount)
	{
		// ---- decompiled from wasm (Stamina_UseStamina) ----
		//   var c:float = a[5]:float;
		//   if (c < f32_convert_i32_s(a[4]:int)) {
		//     a[5]:float = (c = c + a[9]:float * UnityEngine_Time_get_time(0));
		//     StaminaEvent_remove_OnStaminaChanged((a[6]:int)[15]:int,
		//                                          c / f32_convert_i32_s(a[4]:int),
		//                                          c,
		//                                          0.0f,
		//                                          a);
		//   }
	}

	private void RegenerateStamina()
	{
		// ---- decompiled from wasm (Stamina_RegenerateStamina) ----
		//   var this:long_ptr@4;
		//   this[8] = 4656722015766446080L;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (Stamina_ctor) ----
		//   var this:int;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703947[0]:ubyte)) {
		//     f_hpa(5602064);
		//     f_hpa(5660024);
		//     f_hpa(5687756);
		//     6703947[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   methodInfo = ((((if (methodInfo[189]:ubyte & 1) {
		//                      methodInfo
		//                    } else {
		//                      System_Threading_Monitor_Enter_1(methodInfo)
		//                    })[23]:int)[0]:int)[4]:int)[15]:int;
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11808]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[33231]:int, 0);
		//   if (eqz(6703949[0]:ubyte)) {
		//     f_hpa(5602064);
		//     6703949[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   methodInfo = methodInfo[4]:int;
		//   loop L_f {
		//     this = 0;
		//     c = f_iyud(methodInfo, d, 0);
		//     if (c) {
		//       this = f_upa(c, f = d_p444444444444044P44p44444444[11808]:int);
		//       if (eqz(this)) goto B_e;
		//     }
		//     c = methodInfo !=
		//         (this = System_Net_WebOperation_ctor(e, this, methodInfo));
		//     methodInfo = this;
		//     if (c) continue L_f;
		//   }
		//   return ;
		//   label B_e:
		//   f_ypa(c, f);
		//   unreachable;
	}

}
