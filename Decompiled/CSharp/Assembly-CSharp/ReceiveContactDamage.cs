// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
[RequireComponent(typeof(Health))]
public class ReceiveContactDamage : MonoBehaviour
{
	// Fields
	private int contactDamageAmount;
	private Health health;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (ReceiveContactDamage_Awake) ----
		//   Health_Start(a[5], select_if(b, a = a[4], a <= 0), a)
	}

	public void TakeContactDamage(int damageAmount = 0)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (ReceiveContactDamage_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703776[0]:ubyte)) {
		//     f_hpa(5668504);
		//     6703776[0]:byte = 1;
		//   }
		//   this[5] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28418]:int);
	}

}
