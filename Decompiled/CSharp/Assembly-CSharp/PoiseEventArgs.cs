// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class PoiseEventArgs
{
	// Fields
	public float poiseAmount;
	public float currentPoise;
	public float maxPoise;
	public float stunTime;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (PoiseEventArgs_ctor) ----
		//   var d:float;
		//   a[5] = (d = a[5] + b);
		//   b = a[4];
		//   if (b < d) {
		//     a[5] = b;
		//     d = b;
		//   }
		//   if (eqz(6703945[0]:ubyte)) {
		//     f_hpa(5620156);
		//     f_hpa(5620152);
		//     6703945[0]:byte = 1;
		//   }
		//   c = ((d_p444444444444044P44p44444444[16330]:int)[23]:int)[0]:int;
		//   if (c) {
		//     a = f_icke(d_p444444444444044P44p44444444[16331]:int);
		//     a[4] = b;
		//     a[3] = b;
		//     a[2] = d / b;
		//     call_indirect(c[8], a, c[5], c[3]);
		//   }
	}

}
