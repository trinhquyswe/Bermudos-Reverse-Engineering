// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class RainEffect : MonoBehaviour
{
	// Fields
	private int appearanceRate;
	private SoundEffectSO rainEffect;

	// Methods
	private void Start()
	{
		// ---- decompiled from wasm (RainEffect_Start) ----
		//   var this:int_ptr;
		//   if (eqz(6703851[0]:ubyte)) {
		//     f_hpa(5660012);
		//     6703851[0]:byte = 1;
		//   }
		//   var methodInfo:ubyte_ptr = 
		//     (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189] & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   SoundEffectManager_PlaySoundEffect(
		//     ((if (methodInfo[189] & 1) {
		//         methodInfo
		//       } else {
		//         System_Threading_Monitor_Enter_1(methodInfo)
		//       })[23]:int)[0]:int,
		//     this[5],
		//     0);
	}

	private void OnDisable()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (RainEffect_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703852[0]:ubyte)) {
		//     f_hpa(5668372);
		//     f_hpa(5668376);
		//     f_hpa(5668384);
		//     f_hpa(5668476);
		//     f_hpa(5668484);
		//     f_hpa(5668492);
		//     f_hpa(5668508);
		//     f_hpa(5668504);
		//     f_hpa(5668516);
		//     f_hpa(5668560);
		//     f_hpa(5668604);
		//     f_hpa(5668644);
		//     6703852[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28385]:int);
		//   this[5] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28419]:int);
		//   this[6] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28415]:int);
		//   this[10] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28443]:int);
		//   this[7] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28386]:int);
		//   this[8] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28418]:int);
		//   this[9] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28413]:int);
		//   this[11] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28453]:int);
		//   this[12] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28421]:int);
		//   this[13] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28432]:int);
		//   this[15] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28411]:int);
		//   this[14] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28388]:int);
	}

}
