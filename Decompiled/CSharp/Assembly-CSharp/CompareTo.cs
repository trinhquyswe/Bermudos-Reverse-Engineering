// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityString
[TaskCategory("Unity/String")]
[TaskDescription("Compares the first string to the second string. Returns an int which indicates whether the first string precedes, matches, or follows the second string.")]
public class CompareTo : Action
{
	// Fields
	public SharedString firstString;
	public SharedString secondString;
	public SharedInt storeResult;

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
