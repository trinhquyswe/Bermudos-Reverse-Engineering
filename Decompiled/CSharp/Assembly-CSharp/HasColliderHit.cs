// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController
[TaskCategory("Unity/CharacterController")]
[TaskDescription("Returns Success if the collider hit another object, otherwise Failure.")]
public class HasColliderHit : Conditional
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedString tag;
	public SharedGameObject collidedGameObject;
	private bool enteredCollision;

	// Methods
	public override TaskStatus OnUpdate()
	{
		// <no wasm mapping>
	}

	public override void OnEnd()
	{
		// <no wasm mapping>
	}

	public override void OnControllerColliderHit(ControllerColliderHit hit)
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
