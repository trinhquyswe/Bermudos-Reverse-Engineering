// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class DashEvent : MonoBehaviour
{
	// Fields
	private Action<DashEvent, DashEventArgs> OnDashEvent;

	// Methods
	public void add_OnDashEvent(Action<DashEvent, DashEventArgs> value)
	{
		// ---- decompiled from wasm (DashEvent_add_OnDashEvent) ----
		//   var this:int_ptr;
		//   var value:int;
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703493[0]:ubyte)) {
		//     f_hpa(5601980);
		//     6703493[0]:byte = 1;
		//   }
		//   var e:int = this + 16;
		//   this = this[4];
		//   loop L_c {
		//     var methodInfo:int = 0;
		//     d = f_kyud(this, value, 0);
		//     if (d) {
		//       methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11787]:int);
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

	public void remove_OnDashEvent(Action<DashEvent, DashEventArgs> value)
	{
		// ---- decompiled from wasm (DashEvent_remove_OnDashEvent) ----
		//   var this:int_ptr;
		//   var value:long_ptr@4;
		//   if (eqz(6703494[0]:ubyte)) {
		//     f_hpa(5613568);
		//     6703494[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[4];
		//   if (methodInfo) {
		//     var d:long_ptr@4 = f_icke(d_p444444444444044P44p44444444[14684]:int);
		//     if (eqz(6703495[0]:ubyte)) {
		//       f_hpa(5614872);
		//       6703495[0]:byte = 1;
		//     }
		//     var e:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//     if (eqz(e[29])) { f_ahje(e) }
		//     d[2] = value[0];
		//     call_indirect(methodInfo[8], this, d, methodInfo[5], methodInfo[3]);
		//   }
	}

	public void CallDashEvent(Vector2 direction)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (DashEvent_ctor) ----
		//   if (eqz(6703495[0]:ubyte)) {
		//     f_hpa(5614872);
		//     6703495[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
	}

}
