// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class HealthEvent : MonoBehaviour
{
	// Fields
	private Action<HealthEvent, HealthEventArgs> OnHealthChanged;

	// Methods
	public void add_OnHealthChanged(Action<HealthEvent, HealthEventArgs> value)
	{
		// ---- decompiled from wasm (HealthEvent_add_OnHealthChanged) ----
		//   var this:int_ptr;
		//   var value:int;
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703936[0]:ubyte)) {
		//     f_hpa(5601996);
		//     6703936[0]:byte = 1;
		//   }
		//   var e:int = this + 16;
		//   this = this[4];
		//   loop L_c {
		//     var methodInfo:int = 0;
		//     d = f_kyud(this, value, 0);
		//     if (d) {
		//       methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11791]:int);
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

	public void remove_OnHealthChanged(Action<HealthEvent, HealthEventArgs> value)
	{
		// ---- decompiled from wasm (HealthEvent_remove_OnHealthChanged) ----
		//   if (eqz(6703937[0]:ubyte)) {
		//     f_hpa(5615724);
		//     6703937[0]:byte = 1;
		//   }
		//   var f:int_ptr = a[4];
		//   if (f) {
		//     e = f_icke(d_p444444444444044P44p44444444[15223]:int);
		//     if (eqz(6703938[0]:ubyte)) {
		//       f_hpa(5614872);
		//       6703938[0]:byte = 1;
		//     }
		//     var g:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//     if (eqz(g[29])) { f_ahje(g) }
		//     e[4]:int = d;
		//     e[3]:int = c;
		//     e[2]:float = b;
		//     call_indirect(f[8], a, e, f[5], f[3]);
		//   }
	}

	public void CallHealthChangedEvent(float healthPercent, int healthAmount, int damageAmount)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (HealthEvent_ctor) ----
		//   if (eqz(6703938[0]:ubyte)) {
		//     f_hpa(5614872);
		//     6703938[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
	}

}
