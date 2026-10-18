// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation
[TaskCategory("Unity/Animation")]
[TaskDescription("Cross fades an animation after previous animations has finished playing. Returns Success.")]
public class CrossFadeQueued : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedString animationName;
	public float fadeLength;
	public QueueMode queue;
	public PlayMode playMode;
	private Animation animation;
	private GameObject prevGameObject;

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
