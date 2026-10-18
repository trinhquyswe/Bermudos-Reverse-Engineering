// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[CreateAssetMenu(fileName = "SoundEffect_", menuName = "ScriptableObjects/Sounds/SoundEffect")]
public class SoundEffectSO : ScriptableObject
{
	// Fields
	public string soundEffectName;
	public GameObject soundPrefab;
	public AudioClip soundEffectClip;
	public float soundEffectVolume;
	public float soundEffectPitch;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (SoundEffectSO_ctor) ----
		//   var this:int;
		//   var e:int;
		//   var d:int;
		//   if (eqz(6703526[0]:ubyte)) {
		//     f_hpa(5601808);
		//     f_hpa(5621908);
		//     6703526[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[0]:int;
		//   loop L_c {
		//     var c:int = 0;
		//     d = f_iyud(methodInfo, this, 0);
		//     if (d) {
		//       c = f_upa(d, e = d_p444444444444044P44p44444444[11744]:int);
		//       if (eqz(c)) goto B_b;
		//     }
		//     d = methodInfo !=
		//         (c = System_Net_WebOperation_ctor(
		//                (d_p444444444444044P44p44444444[16769]:int)[23]:int,
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
