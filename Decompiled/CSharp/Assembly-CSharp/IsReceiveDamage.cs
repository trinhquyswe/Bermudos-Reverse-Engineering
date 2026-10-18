// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class IsReceiveDamage : Conditional
{
	// Fields
	private HealthEvent healthEvent;
	private bool isReceiveDamage;

	// Methods
	public override void OnAwake()
	{
		// ---- decompiled from wasm (IsReceiveDamage_OnAwake) ----
		//   a[48] = 1
	}

	private void OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// ---- decompiled from wasm (IsReceiveDamage_OnUpdate) ----
		//   var this:byte_ptr;
		//   this[48] = 0;
	}

	public override void OnEnd()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (IsReceiveDamage_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703817[0]:ubyte)) {
		//     f_hpa(5689052);
		//     6703817[0]:byte = 1;
		//   }
		//   ReceiveDamageAction_ctor(this, this);
		//   this[42] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33555]:int);
	}

}
