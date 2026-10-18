// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator
[TaskCategory("Unity/Animator")]
[TaskDescription("Waits for the Animator to reach the specified state.")]
public class WaitForState : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedString stateName;
	public SharedInt layer;
	private Animator animator;
	private GameObject prevGameObject;
	private int stateHash;

	// Methods
	public override void OnAwake()
	{
		// <no wasm mapping>
	}

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
