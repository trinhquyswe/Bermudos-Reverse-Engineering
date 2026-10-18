// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics
[TaskCategory("Unity/Physics")]
[TaskDescription("Returns success if there is any collider intersecting the line between start and end")]
public class Linecast : Action
{
	// Fields
	public SharedVector3 startPosition;
	public SharedVector3 endPosition;
	public LayerMask layerMask;

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
