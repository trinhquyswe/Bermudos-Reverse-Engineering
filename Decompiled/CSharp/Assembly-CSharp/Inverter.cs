// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskIcon("{SkinColor}InverterIcon.png")]
[TaskDescription("The inverter task will invert the return value of the child task after it has finished executing. If the child returns success, the inverter task will return failure. If the child returns failure, the inverter task will return success.")]
public class Inverter : Decorator
{
	// Fields
	private TaskStatus executionStatus;

	// Methods
	public override bool CanExecute()
	{
		// <no wasm mapping>
	}

	public override void OnChildExecuted(TaskStatus childStatus)
	{
		// <no wasm mapping>
	}

	public override TaskStatus Decorate(TaskStatus status)
	{
		// <no wasm mapping>
	}

	public override void OnEnd()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
