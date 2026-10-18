// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityCircleCollider2D
[TaskCategory("Unity/CircleCollider2D")]
[TaskDescription("Sets the offset of the CircleCollider2D. Returns Success.")]
public class SetOffset : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedVector3 offset;
	private CircleCollider2D circleCollider2D;
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
