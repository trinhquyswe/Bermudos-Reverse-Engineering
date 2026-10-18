// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

[TaskIcon("{SkinColor}TaskGuardIcon.png")]
public class TaskGuard : Decorator
{
	// Fields
	public SharedInt maxTaskAccessCount;
	public TaskGuard[] linkedTaskGuards;
	public SharedBool waitUntilTaskAvailable;
	private int executingTasks;
	private bool executing;

	// Methods
	public override bool CanExecute()
	{
		// <no wasm mapping>
	}

	public override void OnChildStarted()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OverrideStatus(TaskStatus status)
	{
		// <no wasm mapping>
	}

	public void taskExecuting(bool increase)
	{
		// <no wasm mapping>
	}

	public override void OnEnd()
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
