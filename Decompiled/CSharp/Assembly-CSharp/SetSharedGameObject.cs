// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables
[TaskCategory("Unity/SharedVariable")]
[TaskDescription("Sets the SharedGameObject variable to the specified object. Returns Success.")]
public class SetSharedGameObject : Action
{
	// Fields
	public SharedGameObject targetValue;
	public SharedGameObject targetVariable;
	public SharedBool valueCanBeNull;

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
