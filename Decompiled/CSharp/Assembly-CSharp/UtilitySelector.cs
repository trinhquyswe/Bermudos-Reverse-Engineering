// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskDescription("The utility selector task evaluates the child tasks using Utility Theory AI. The child task can override the GetUtility method and return the utility value at that particular time. The task with the highest utility value will be selected and the existing running task will be aborted. The utility selector task reevaluates its children every tick.")]
[TaskIcon("{SkinColor}UtilitySelectorIcon.png")]
public class UtilitySelector : Composite
{
	// Fields
	private int currentChildIndex;
	private float highestUtility;
	private TaskStatus executionStatus;
	private bool reevaluating;
	private List<int> availableChildren;

	// Methods
	public override void OnStart()
	{
		// <no wasm mapping>
	}

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
