// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[CreateAssetMenu(fileName = "IntroSO_", menuName = "ScriptableObjects/IntroSO", order = 1)]
public class IntroSO : ScriptableObject
{
	// Fields
	public Sprite introSprite;
	public string introText;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (IntroSO_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703349[0]:ubyte)) {
		//     f_hpa(5668636);
		//     6703349[0]:byte = 1;
		//   }
		//   this[12] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28451]:int);
	}

}
