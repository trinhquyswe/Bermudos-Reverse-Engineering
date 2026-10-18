// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class AmmoAnimation : MonoBehaviour
{
	// Fields
	private Animator animator;
	private Ammo ammo;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (AmmoAnimation_Awake) ----
		//   var this:int_ptr;
		//   if (eqz(6703723[0]:ubyte)) {
		//     f_hpa(5611636);
		//     f_hpa(5725072);
		//     6703723[0]:byte = 1;
		//   }
		//   var c:int = UnityEngine_Animator_StopRecording(this[4], 0);
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[14201]:int);
		//   UnityEngine_Animator_MatchTarget_Injected(methodInfo, c, 0);
		//   multiple_UnityEngine_AnimatorOverrideController_Internal_Create(
		//     methodInfo,
		//     d_p444444444444044P44p44444444[42560]:int,
		//     ((this[5])[4]:int)[6]:int,
		//     0);
		//   UnityEngine_Animator_get_runtimeAnimatorController(this[4],
		//                                                      methodInfo,
		//                                                      0);
	}

	public void InitializeAmmoAnimation()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
