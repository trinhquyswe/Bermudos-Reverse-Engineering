// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class AnimateEvent : MonoBehaviour
{
	// Fields
	private Action<AnimateEvent, AnimateEventArgs> OnAnimate;

	// Methods
	public void add_OnAnimate(Action<AnimateEvent, AnimateEventArgs> value)
	{
		// ---- decompiled from wasm (AnimateEvent_add_OnAnimate) ----
		//   var this:int_ptr;
		//   var value:int;
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703741[0]:ubyte)) {
		//     f_hpa(5601960);
		//     6703741[0]:byte = 1;
		//   }
		//   var e:int = this + 16;
		//   this = this[4];
		//   loop L_c {
		//     var methodInfo:int = 0;
		//     d = f_kyud(this, value, 0);
		//     if (d) {
		//       methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11782]:int);
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

	public void remove_OnAnimate(Action<AnimateEvent, AnimateEventArgs> value)
	{
		// ---- decompiled from wasm (AnimateEvent_remove_OnAnimate) ----
		//   var this:int_ptr;
		//   var value:int;
		//   if (eqz(6703742[0]:ubyte)) {
		//     f_hpa(5611548);
		//     6703742[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[4];
		//   if (methodInfo) {
		//     var d:int_ptr = f_icke(d_p444444444444044P44p44444444[14179]:int);
		//     if (eqz(6703743[0]:ubyte)) {
		//       f_hpa(5614872);
		//       6703743[0]:byte = 1;
		//     }
		//     var e:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//     if (eqz(e[29])) { f_ahje(e) }
		//     d[2] = value;
		//     call_indirect(methodInfo[8], this, d, methodInfo[5], methodInfo[3]);
		//   }
	}

	public void CallAnimateEvent(AimDirection aimDirection)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (AnimateEvent_ctor) ----
		//   if (eqz(6703743[0]:ubyte)) {
		//     f_hpa(5614872);
		//     6703743[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
	}

}
