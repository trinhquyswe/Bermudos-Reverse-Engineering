// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[CreateAssetMenu(fileName = "AmmoDetailsSO_", menuName = "ScriptableObjects/AmmoDetailsSO", order = 1)]
public class AmmoDetailsSO : ScriptableObject
{
	// Fields
	public float maxSpeed;
	public int damage;
	public float trajectoryMaxHeight;
	public AnimationClip enemyAmmoType;
	public Color ammoEffectType;
	public GameObject ammoPrefab;
	public AnimationCurve trajectoryAnimationCurve;
	public AnimationCurve axisCorrectionAnimationCurve;
	public AnimationCurve ammoSpeedAnimationCurve;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (AmmoDetailsSO_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703724[0]:ubyte)) {
		//     f_hpa(5668588);
		//     6703724[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28439]:int);
	}

}
