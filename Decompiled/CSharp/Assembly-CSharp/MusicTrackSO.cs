// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[CreateAssetMenu(fileName = "MusicTrack_", menuName = "ScriptableObjects/Sounds/MusicTrack")]
public class MusicTrackSO : ScriptableObject
{
	// Fields
	public string musicName;
	public AudioClip musicClip;
	public float musicVolume;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (MusicTrackSO_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703516[0]:ubyte)) {
		//     f_hpa(5668388);
		//     6703516[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28389]:int);
	}

}
