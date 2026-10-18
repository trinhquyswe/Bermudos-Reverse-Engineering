// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator
[TaskCategory("Unity/Animator")]
[TaskDescription("Sets the int parameter on an animator. Returns Success.")]
public class SetIntegerParameter : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedString paramaterName;
	public SharedInt intValue;
	public bool setOnce;
	private int hashID;
	private Animator animator;
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

	public IEnumerator ResetValue(int origVale)
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
