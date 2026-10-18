// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskDescription("Similar to the selector task, the random selector task will return success as soon as a child task returns success.  The difference is that the random selector class will run its children in a random order. The selector task is deterministic in that it will always run the tasks from left to right within the tree. The random selector task shuffles the child tasks up and then begins execution in a random order. Other than that the random selector class is the same as the selector class. It will continue running tasks until a task completes successfully. If no child tasks return success then it will return failure.")]
[TaskIcon("{SkinColor}RandomSelectorIcon.png")]
public class RandomSelector : Composite
{
	// Fields
	public int seed;
	public bool useSeed;
	private List<int> childIndexList;
	private Stack<int> childrenExecutionOrder;
	private TaskStatus executionStatus;

	// Methods
	public override void OnAwake()
	{
		// <no wasm mapping>
	}

	public override void OnStart()
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

	public override void OnChildExecuted(TaskStatus childStatus)
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

	public override void OnReset()
	{
		// <no wasm mapping>
	}

	private void ShuffleChilden()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
