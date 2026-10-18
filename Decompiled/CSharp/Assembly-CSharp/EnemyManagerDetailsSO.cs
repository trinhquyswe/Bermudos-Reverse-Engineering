// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[CreateAssetMenu(fileName = "EnemyManagerDetailsSO_", menuName = "ScriptableObjects/Enemy/EnemyManagerDetailsSO", order = 1)]
public class EnemyManagerDetailsSO : ScriptableObject
{
	// Fields
	public GameObject enemyPrefab;
	public string enemyName;
	public List<Vector2> enemyPostionList;
	public string enemyManagerDataKey;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (EnemyManagerDetailsSO_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703872[0]:ubyte)) {
		//     f_hpa(5668472);
		//     f_hpa(5668572);
		//     6703872[0]:byte = 1;
		//   }
		//   this[10] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28410]:int);
		//   this[8] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28435]:int);
	}

}
