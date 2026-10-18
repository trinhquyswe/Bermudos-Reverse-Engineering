// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskDescription("Similar to the selector task, the parallel selector task will return success as soon as a child task returns success. The difference is that the parallel task will run all of its children tasks simultaneously versus running each task one at a time. If one tasks returns success the parallel selector task will end all of the child tasks and return success. If every child task returns failure then the parallel selector task will return failure.")]
[TaskIcon("{SkinColor}ParallelSelectorIcon.png")]
public class ParallelSelector : Composite
{
	// Fields
	private int currentChildIndex;
	private TaskStatus[] executionStatus;

	// Methods
	public override void OnAwake()
	{
		// <no wasm mapping>
	}

	public override void OnChildStarted(int childIndex)
	{
		// <no wasm mapping>
	}

	public override bool CanRunParallelChildren()
	{
		// <no wasm mapping>
	}

	public override int CurrentChildIndex()
	{
		// <no wasm mapping>
	}

	public override bool CanExecute()
	{
		// <no wasm mapping>
	}

	public override void OnChildExecuted(int childIndex, TaskStatus childStatus)
	{
		// <no wasm mapping>
	}

	public override void OnConditionalAbort(int childIndex)
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
