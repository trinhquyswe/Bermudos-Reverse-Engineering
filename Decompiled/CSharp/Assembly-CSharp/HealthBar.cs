// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class HealthBar : MonoBehaviour
{
	// Fields
	private Slider healthBar;
	private Slider easeHealthBar;
	private float lerpSpeed;

	// Methods
	private void OnEnable()
	{
		// ---- decompiled from wasm (HealthBar_OnEnable) ----
		//   var this:int;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703934[0]:ubyte)) {
		//     f_hpa(5601996);
		//     f_hpa(5676600);
		//     f_hpa(5660024);
		//     6703934[0]:byte = 1;
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
		//                    })[23]:int)[0]:int)[4]:int)[11]:int;
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[30442]:int, 0);
		//   if (eqz(6703936[0]:ubyte)) {
		//     f_hpa(5601996);
		//     6703936[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   methodInfo = methodInfo[4]:int;
		//   loop L_f {
		//     this = 0;
		//     c = f_kyud(methodInfo, d, 0);
		//     if (c) {
		//       this = f_upa(c, f = d_p444444444444044P44p44444444[11791]:int);
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

	private void OnDisable()
	{
		// <no wasm mapping>
	}

	private void HealthEvent_OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
	{
		// <no wasm mapping>
	}

	private void Update()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (HealthBar_ctor) ----
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703935[0]:ubyte)) {
		//     f_hpa(5601996);
		//     6703935[0]:byte = 1;
		//   }
		//   var e:int = a + 16;
		//   a = a[4];
		//   loop L_c {
		//     c = 0;
		//     d = f_iyud(a, b, 0);
		//     if (d) {
		//       c = f_upa(d, f = d_p444444444444044P44p44444444[11791]:int);
		//       if (eqz(c)) goto B_b;
		//     }
		//     d = a != (c = System_Net_WebOperation_ctor(e, c, a));
		//     a = c;
		//     if (d) continue L_c;
		//   }
		//   return ;
		//   label B_b:
		//   f_ypa(d, f);
		//   unreachable;
	}

}
