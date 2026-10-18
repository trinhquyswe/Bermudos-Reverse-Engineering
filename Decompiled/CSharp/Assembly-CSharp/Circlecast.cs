// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics2D
[TaskDescription("Casts a circle against all colliders in the scene. Returns success if a collider was hit.")]
[TaskCategory("Unity/Physics2D")]
public class Circlecast : Action
{
	// Fields
	public SharedGameObject originGameObject;
	public SharedVector2 originPosition;
	public SharedFloat radius;
	public SharedVector2 direction;
	public SharedFloat distance;
	public LayerMask layerMask;
	public Space space;
	public SharedGameObject storeHitObject;
	public SharedVector2 storeHitPoint;
	public SharedVector2 storeHitNormal;
	public SharedFloat storeHitDistance;

	// Methods
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
