// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class StaminaEvent : MonoBehaviour
{
	// Fields
	private Action<StaminaEvent, StaminaEventArgs> OnStaminaChanged;

	// Methods
	public void add_OnStaminaChanged(Action<StaminaEvent, StaminaEventArgs> value)
	{
		// ---- decompiled from wasm (StaminaEvent_add_OnStaminaChanged) ----
		//   var this:int_ptr;
		//   var value:int;
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703950[0]:ubyte)) {
		//     f_hpa(5602064);
		//     6703950[0]:byte = 1;
		//   }
		//   var e:int = this + 16;
		//   this = this[4];
		//   loop L_c {
		//     var methodInfo:int = 0;
		//     d = f_kyud(this, value, 0);
		//     if (d) {
		//       methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11808]:int);
		//       if (eqz(methodInfo)) goto B_b;
		//     }
		//     d = this !=
		//         (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
		//     this = methodInfo;
		//     if (d) continue L_c;
		//   }
		//   return ;
		//   label B_b:
		//   f_ypa(d, f);
		//   unreachable;
	}

	public void remove_OnStaminaChanged(Action<StaminaEvent, StaminaEventArgs> value)
	{
		// ---- decompiled from wasm (StaminaEvent_remove_OnStaminaChanged) ----
		//   if (eqz(6703951[0]:ubyte)) {
		//     f_hpa(5621896);
		//     6703951[0]:byte = 1;
		//   }
		//   var f:int_ptr = a[4];
		//   if (f) {
		//     e = f_icke(d_p444444444444044P44p44444444[16766]:int);
		//     if (eqz(6703952[0]:ubyte)) {
		//       f_hpa(5614872);
		//       6703952[0]:byte = 1;
		//     }
		//     var g:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//     if (eqz(g[29])) { f_ahje(g) }
		//     e[4] = d;
		//     e[3] = c;
		//     e[2] = b;
		//     call_indirect(f[8], a, e, f[5], f[3]);
		//   }
	}

	public void CallStaminaChangedEvent(float staminaPercent, float currentStamina, float staminaAmount)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (StaminaEvent_ctor) ----
		//   if (eqz(6703952[0]:ubyte)) {
		//     f_hpa(5614872);
		//     6703952[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
	}

}
