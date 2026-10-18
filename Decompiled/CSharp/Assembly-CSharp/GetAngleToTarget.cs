// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityTransform
[TaskCategory("Unity/Transform")]
[TaskDescription("Gets the Angle between a GameObject's forward direction and a target. Returns Success.")]
public class GetAngleToTarget : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedGameObject targetObject;
	public SharedVector3 targetPosition;
	public SharedBool ignoreHeight;
	public SharedFloat storeValue;
	private Transform targetTransform;
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
