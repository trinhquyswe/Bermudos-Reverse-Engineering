// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.Math
[TaskDescription("Performs a math operation on two bools: AND, OR, NAND, or XOR.")]
[TaskCategory("Unity/Math")]
public class BoolOperator : Action
{
	// Fields
	public BoolOperator.Operation operation;
	public SharedBool bool1;
	public SharedBool bool2;
	public SharedBool storeResult;

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
