// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimator
[TaskDescription("Automatically adjust the gameobject position and rotation so that the AvatarTarget reaches the matchPosition when the current state is at the specified progress. Returns Success.")]
[TaskCategory("Unity/Animator")]
public class MatchTarget : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedVector3 matchPosition;
	public SharedQuaternion matchRotation;
	public AvatarTarget targetBodyPart;
	public Vector3 weightMaskPosition;
	public float weightMaskRotation;
	public float startNormalizedTime;
	public float targetNormalizedTime;
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

	public override void OnReset()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
