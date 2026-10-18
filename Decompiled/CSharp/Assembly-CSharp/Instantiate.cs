// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject
[TaskDescription("Instantiates a new GameObject. Returns Success.")]
[TaskCategory("Unity/GameObject")]
public class Instantiate : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedVector3 position;
	public SharedQuaternion rotation;
	public SharedGameObject storeResult;

	// Methods
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
