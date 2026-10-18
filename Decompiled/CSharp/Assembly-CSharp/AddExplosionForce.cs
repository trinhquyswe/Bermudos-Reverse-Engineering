// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityRigidbody
[TaskCategory("Unity/Rigidbody")]
[TaskDescription("Applies a force to the rigidbody that simulates explosion effects. Returns Success.")]
public class AddExplosionForce : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedFloat explosionForce;
	public SharedVector3 explosionPosition;
	public SharedFloat explosionRadius;
	public float upwardsModifier;
	public ForceMode forceMode;
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
