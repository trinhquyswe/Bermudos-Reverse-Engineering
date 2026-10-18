// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[HelpURL("https://www.opsive.com/support/documentation/behavior-designer/events/")]
[TaskIcon("{SkinColor}SendEventIcon.png")]
[TaskDescription("Sends an event to the behavior tree, returns success after sending the event.")]
public class SendEvent : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedString eventName;
	public SharedInt group;
	public SharedVariable argument1;
	public SharedVariable argument2;
	public SharedVariable argument3;
	private BehaviorTree behaviorTree;

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
