// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class EnemyStateEventArgs : EventArgs
{
	// Fields
	public EnemyState enemyState;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (EnemyStateEventArgs_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703883[0]:ubyte)) {
		//     f_hpa(5668720);
		//     f_hpa(5668604);
		//     6703883[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28443]:int);
		//   this[5] = f_irrc(this, d_p444444444444044P44p44444444[28472]:int);
	}

}
