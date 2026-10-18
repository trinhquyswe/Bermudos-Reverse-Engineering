// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2
[TaskCategory("Unity/Vector2")]
[TaskDescription("Move from the current position to the target position.")]
public class MoveTowards : Action
{
	// Fields
	public SharedVector2 currentPosition;
	public SharedVector2 targetPosition;
	public SharedFloat speed;
	public SharedVector2 storeResult;

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
