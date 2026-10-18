// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody2D
[TaskCategory("Unity/Rigidbody2D")]
[TaskDescription("Stores the gravity scale of the Rigidbody2D. Returns Success.")]
public class GetGravityScale : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedFloat storeValue;
	private Rigidbody2D rigidbody2D;
	private GameObject prevGameObject;

	// Methods
	public override void OnStart()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// <no wasm mapping>
	}

	public override void OnReset()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
