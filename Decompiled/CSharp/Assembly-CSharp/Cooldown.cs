// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskIcon("{SkinColor}CooldownIcon.png")]
[TaskDescription("Waits the specified duration after the child has completed before returning the child's status of success or failure.")]
public class Cooldown : Decorator
{
	// Fields
	public SharedFloat duration;
	private TaskStatus executionStatus;
	private float cooldownTime;

	// Methods
	public override bool CanExecute()
	{
		// <no wasm mapping>
	}

	public override int CurrentChildIndex()
	{
		// <no wasm mapping>
	}

	public override void OnChildExecuted(TaskStatus childStatus)
	{
		// <no wasm mapping>
	}

	public override TaskStatus OverrideStatus()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OverrideStatus(TaskStatus status)
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
