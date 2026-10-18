// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator
[TaskDescription("Sets the look at weight. Returns success immediately after.")]
[TaskCategory("Unity/Animator")]
public class SetLookAtWeight : Action
{
	// Fields
	public SharedFloat weight;
	public float bodyWeight;
	public float headWeight;
	public float eyesWeight;
	public float clampWeight;
	private Animator animator;
	private bool weightSet;

	// Methods
	public override void OnStart()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// <no wasm mapping>
	}

	public override void OnAnimatorIK()
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
