// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class Rage : MonoBehaviour
{
	// Fields
	public float maxRage;
	public float currentRage;

	// Methods
	public void IncreaseRage(float amount)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (Rage_ctor) ----
		//   var this:int;
		//   var e:int;
		//   var d:int;
		//   if (eqz(6703943[0]:ubyte)) {
		//     f_hpa(5601868);
		//     f_hpa(5620152);
		//     6703943[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     ((d_p444444444444044P44p44444444[16330]:int)[23]:int)[0]:int;
		//   loop L_c {
		//     var c:int = 0;
		//     d = f_iyud(methodInfo, this, 0);
		//     if (d) {
		//       c = f_upa(d, e = d_p444444444444044P44p44444444[11759]:int);
		//       if (eqz(c)) goto B_b;
		//     }
		//     d = methodInfo !=
		//         (c = System_Net_WebOperation_ctor(
		//                (d_p444444444444044P44p44444444[16330]:int)[23]:int,
		//                c,
		//                methodInfo));
		//     methodInfo = c;
		//     if (d) continue L_c;
		//   }
		//   return ;
		//   label B_b:
		//   f_ypa(d, e);
		//   unreachable;
	}

}
