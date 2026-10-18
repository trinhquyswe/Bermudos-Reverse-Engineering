// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskIcon("{SkinColor}SelectorEvaluatorIcon.png")]
[TaskDescription("The selector evaluator is a selector task which reevaluates its children every tick. It will run the lowest priority child which returns a task status of running. This is done each tick. If a higher priority child is running and the next frame a lower priority child wants to run it will interrupt the higher priority child. The selector evaluator will return success as soon as the first child returns success otherwise it will keep trying higher priority children. This task mimics the conditional abort functionality except the child tasks don't always have to be conditional tasks.")]
public class SelectorEvaluator : Composite
{
	// Fields
	private int currentChildIndex;
	private TaskStatus executionStatus;
	private int storedCurrentChildIndex;
	private TaskStatus storedExecutionStatus;

	// Methods
	public override int CurrentChildIndex()
	{
		// <no wasm mapping>
	}

	public override void OnChildStarted(int childIndex)
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

	public override void OnEnd()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OverrideStatus(TaskStatus status)
	{
		// <no wasm mapping>
	}

	public override bool CanRunParallelChildren()
	{
		// <no wasm mapping>
	}

	public override bool CanReevaluate()
	{
		// <no wasm mapping>
	}

	public override bool OnReevaluationStarted()
	{
		// <no wasm mapping>
	}

	public override void OnReevaluationEnded(TaskStatus status)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
