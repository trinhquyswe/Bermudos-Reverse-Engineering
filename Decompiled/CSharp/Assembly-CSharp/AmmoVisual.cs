// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class AmmoVisual : MonoBehaviour
{
	// Fields
	private Ammo ammo;
	private Vector2 target;

	// Methods
	private void Awake()
	{
		// <no wasm mapping>
	}

	private void Start()
	{
		// <no wasm mapping>
	}

	private void Update()
	{
		// <no wasm mapping>
	}

	private void UpdateAmmoRotation()
	{
		// ---- decompiled from wasm (AmmoVisual_UpdateAmmoRotation) ----
		//   a[5] = b[0]
	}

	public void SetTarget(Vector2 target)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (AmmoVisual_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703726[0]:ubyte)) {
		//     f_hpa(5668400);
		//     6703726[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28392]:int);
	}

}
