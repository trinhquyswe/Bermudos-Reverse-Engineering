// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityQuaternion
[TaskDescription("Stores the quaternion after a rotation.")]
[TaskCategory("Unity/Quaternion")]
public class RotateTowards : Action
{
	// Fields
	public SharedQuaternion fromQuaternion;
	public SharedQuaternion toQuaternion;
	public SharedFloat maxDeltaDegrees;
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
