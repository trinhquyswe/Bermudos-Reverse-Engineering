// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class AnimateEventArgs : EventArgs
{
	// Fields
	public AimDirection aimDirection;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (AnimateEventArgs_ctor) ----
		//   var this:int_ptr;
		//   var methodInfo:int_ptr;
		//   if (eqz(6703744[0]:ubyte)) {
		//     f_hpa(5668468);
		//     f_hpa(5668592);
		//     f_hpa(5621280);
		//     6703744[0]:byte = 1;
		//   }
		//   this[4] =
		//     (methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
		//                     this,
		//                     d_p444444444444044P44p44444444[28440]:int));
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     methodInfo[17],
		//     ((if ((methodInfo = d_p444444444444044P44p44444444[16612]:int)[29]) {
		//         methodInfo
		//       } else {
		//         f_ahje(methodInfo);
		//         d_p444444444444044P44p44444444[16612]:int;
		//       })[23]:int)[6]:int,
		//     1,
		//     0);
		//   this[5] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28409]:int);
	}

}
