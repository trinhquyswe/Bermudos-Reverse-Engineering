// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class MovementToPositionArgs : EventArgs
{
	// Fields
	public Vector3 movePosition;
	public Vector3 currentPosition;
	public float moveSpeed;
	public Vector2 moveDirection;
	public bool isDashing;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (MovementToPositionArgs_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703410[0]:ubyte)) {
		//     f_hpa(5668584);
		//     6703410[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28438]:int);
	}

}
