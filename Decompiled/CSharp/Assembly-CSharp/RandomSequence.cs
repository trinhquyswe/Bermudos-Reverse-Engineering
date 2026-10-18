// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskIcon("{SkinColor}RandomSequenceIcon.png")]
[TaskDescription("Similar to the sequence task, the random sequence task will return success as soon as every child task returns success.  The difference is that the random sequence class will run its children in a random order. The sequence task is deterministic in that it will always run the tasks from left to right within the tree. The random sequence task shuffles the child tasks up and then begins execution in a random order. Other than that the random sequence class is the same as the sequence class. It will stop running tasks as soon as a single task ends in failure. On a task failure it will stop executing all of the child tasks and return failure. If no child returns failure then it will return success.")]
public class RandomSequence : Composite
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
