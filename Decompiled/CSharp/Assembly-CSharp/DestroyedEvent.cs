// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class DestroyedEvent : MonoBehaviour
{
	// Fields
	private Action<DestroyedEvent, DestroyedEventArgs> OnDestroyed;

	// Methods
	public void add_OnDestroyed(Action<DestroyedEvent, DestroyedEventArgs> value)
	{
		// ---- decompiled from wasm (DestroyedEvent_add_OnDestroyed) ----
		//   var this:int_ptr;
		//   var value:int;
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703925[0]:ubyte)) {
		//     f_hpa(5601988);
		//     6703925[0]:byte = 1;
		//   }
		//   var e:int = this + 16;
		//   this = this[4];
		//   loop L_c {
		//     var methodInfo:int = 0;
		//     d = f_kyud(this, value, 0);
		//     if (d) {
		//       methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11789]:int);
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

	public void remove_OnDestroyed(Action<DestroyedEvent, DestroyedEventArgs> value)
	{
		// <no wasm mapping>
	}

	public void CallDestroyedEvent(DestroyedEventArgs destroyedEventArgs)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (DestroyedEvent_ctor) ----
		//   if (eqz(6703926[0]:ubyte)) {
		//     f_hpa(5614872);
		//     6703926[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
	}

}
