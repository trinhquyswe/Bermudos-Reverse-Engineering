// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class ReceiveDamage : MonoBehaviour
{
	// Fields
	private int damageAmount;
	private Health health;
	public bool isNotReceivingDamage;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (ReceiveDamage_Awake) ----
		//   if (eqz(a[24]:ubyte)) {
		//     Health_Start(a[5]:int, select_if(b, a = a[4]:int, a <= 0), a)
		//   }
	}

	public void TakeDamage(int damageAmount = 0)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (ReceiveDamage_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703777[0]:ubyte)) {
		//     f_hpa(5610740);
		//     f_hpa(5728548);
		//     6703777[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = Mono_Security_ASN1Convert_ToOid(
		//                              d_p444444444444044P44p44444444[13977]:int,
		//                              1);
		//   methodInfo[4] = d_p444444444444044P44p44444444[43429]:int;
		//   this[4] = UnityEngine_LayerMask_NameToLayer(methodInfo, 0);
		//   f_sbnb(f_canb(this[5], 0), 0, 0);
	}

}
