// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskDescription("Returns success as soon as the event specified by eventName has been received.")]
[TaskIcon("{SkinColor}HasReceivedEventIcon.png")]
public class HasReceivedEvent : Conditional
{
	// Fields
	public SharedString eventName;
	public SharedVariable storedValue1;
	public SharedVariable storedValue2;
	public SharedVariable storedValue3;
	private bool eventReceived;
	private bool registered;

	// Methods
	public override void OnStart()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// <no wasm mapping>
	}

	public override void OnEnd()
	{
		// <no wasm mapping>
	}

	private void ReceivedEvent()
	{
		// <no wasm mapping>
	}

	private void ReceivedEvent(object arg1)
	{
		// <no wasm mapping>
	}

	private void ReceivedEvent(object arg1, object arg2)
	{
		// <no wasm mapping>
	}

	private void ReceivedEvent(object arg1, object arg2, object arg3)
	{
		// <no wasm mapping>
	}

	public override void OnBehaviorComplete()
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
