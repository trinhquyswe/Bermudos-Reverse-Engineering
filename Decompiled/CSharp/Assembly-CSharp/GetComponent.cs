// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject
[TaskCategory("Unity/GameObject")]
[TaskDescription("Returns the component of Type type if the game object has one attached, null if it doesn't. Returns Success.")]
public class GetComponent : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedString type;
	public SharedObject storeValue;

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
