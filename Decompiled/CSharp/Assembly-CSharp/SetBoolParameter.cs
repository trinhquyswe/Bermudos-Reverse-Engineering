// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator
[TaskCategory("Unity/Animator")]
[TaskDescription("Sets the bool parameter on an animator. Returns Success.")]
public class SetBoolParameter : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedString paramaterName;
	public SharedBool boolValue;
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

	public IEnumerator ResetValue(bool origVale)
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
