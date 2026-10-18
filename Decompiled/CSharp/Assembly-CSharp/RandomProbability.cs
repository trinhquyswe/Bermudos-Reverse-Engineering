// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskDescription("The random probability task will return success when the random probability is below the succeed probability. It will otherwise return failure.")]
public class RandomProbability : Conditional
{
	// Fields
	public SharedFloat successProbability;
	public SharedInt seed;
	public SharedBool useSeed;

	// Methods
	public override void OnAwake()
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
