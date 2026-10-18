// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskDescription("Pause or disable a behavior tree and return success after it has been stopped.")]
[TaskIcon("{SkinColor}StopBehaviorTreeIcon.png")]
public class StopBehaviorTree : Action
{
	// Fields
	public SharedGameObject behaviorGameObject;
	public SharedInt group;
	public SharedBool pauseBehavior;
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

	public override void OnReset()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
