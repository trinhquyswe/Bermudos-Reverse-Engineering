// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskDescription("Start a new behavior tree and return success after it has been started.")]
[TaskIcon("{SkinColor}StartBehaviorTreeIcon.png")]
public class StartBehaviorTree : Action
{
	// Fields
	public SharedGameObject behaviorGameObject;
	public SharedInt group;
	public SharedBool waitForCompletion;
	public SharedBool synchronizeVariables;
	private bool behaviorComplete;
	private Behavior behavior;

	// Methods
	public override void OnStart()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// <no wasm mapping>
	}

	private void BehaviorEnded(Behavior behavior)
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
