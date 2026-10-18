// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody
[TaskDescription("Rotates the Rigidbody to the specified rotation. Returns Success.")]
[TaskCategory("Unity/Rigidbody")]
public class MoveRotation : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedQuaternion rotation;
	private Rigidbody rigidbody;
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
