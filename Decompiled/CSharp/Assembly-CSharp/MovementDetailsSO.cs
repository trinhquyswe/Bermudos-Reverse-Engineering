// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[CreateAssetMenu(fileName = "MovementDetails_", menuName = "ScriptableObjects/Movement/MovementDetails")]
public class MovementDetailsSO : ScriptableObject
{
	// Fields
	public float minMoveSpeed;
	public float maxMoveSpeed;
	public float dashSpeed;
	public float dashDistance;
	public float dashCooldownTime;

	// Methods
	public float GetMoveSpeed()
	{
		// ---- decompiled from wasm (MovementDetailsSO_GetMoveSpeed) ----
		//   var this:long_ptr@4;
		//   this[3] = 4683743613555834880L;
		//   UnityEngine_RuntimeInitializeOnLoadMethodAttribute_set_loadType(this,
		//                                                                   0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (MovementDetailsSO_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703403[0]:ubyte)) {
		//     f_hpa(5668568);
		//     f_hpa(5668632);
		//     6703403[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28450]:int);
		//   this[5] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28434]:int);
	}

}
