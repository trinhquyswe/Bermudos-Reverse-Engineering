// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class BashEvent : MonoBehaviour
{
	// Fields
	private Action<BashEvent, BashEventArgs> OnBash;

	// Methods
	public void add_OnBash(Action<BashEvent, BashEventArgs> value)
	{
		// ---- decompiled from wasm (BashEvent_add_OnBash) ----
		//   var this:int_ptr;
		//   var value:int;
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703479[0]:ubyte)) {
		//     f_hpa(5601964);
		//     6703479[0]:byte = 1;
		//   }
		//   var e:int = this + 16;
		//   this = this[4];
		//   loop L_c {
		//     var methodInfo:int = 0;
		//     d = f_kyud(this, value, 0);
		//     if (d) {
		//       methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11783]:int);
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

	public void remove_OnBash(Action<BashEvent, BashEventArgs> value)
	{
		// ---- decompiled from wasm (BashEvent_remove_OnBash) ----
		//   var this:int_ptr;
		//   var value:int;
		//   if (eqz(6703480[0]:ubyte)) {
		//     f_hpa(5612036);
		//     6703480[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[4];
		//   if (methodInfo) {
		//     var d:int_ptr = f_icke(d_p444444444444044P44p44444444[14301]:int);
		//     if (eqz(6703481[0]:ubyte)) {
		//       f_hpa(5614872);
		//       6703481[0]:byte = 1;
		//     }
		//     var e:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//     if (eqz(e[29])) { f_ahje(e) }
		//     d[2] = value;
		//     call_indirect(methodInfo[8], this, d, methodInfo[5], methodInfo[3]);
		//   }
	}

	public void CallOnBashEvent(BashState bashState)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (BashEvent_ctor) ----
		//   if (eqz(6703481[0]:ubyte)) {
		//     f_hpa(5614872);
		//     6703481[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
	}

}
