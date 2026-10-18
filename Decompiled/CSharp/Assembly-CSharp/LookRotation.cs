// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion
[TaskDescription("Stores the quaternion of a forward vector.")]
[TaskCategory("Unity/Quaternion")]
public class LookRotation : Action
{
	// Fields
	public SharedVector3 forwardVector;
	public SharedVector3 secondVector3;
	public SharedQuaternion storeResult;

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
