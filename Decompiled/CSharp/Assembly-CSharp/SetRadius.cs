// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityCapsuleCollider
[TaskDescription("Sets the radius of the CapsuleCollider. Returns Success.")]
[TaskCategory("Unity/CapsuleCollider")]
public class SetRadius : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedFloat radius;
	private CapsuleCollider capsuleCollider;
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
