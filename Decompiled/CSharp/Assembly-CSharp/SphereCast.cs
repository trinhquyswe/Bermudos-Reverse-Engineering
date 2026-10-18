// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityPhysics
[TaskCategory("Unity/Physics")]
[TaskDescription("Casts a sphere against all colliders in the scene. Returns success if a collider was hit.")]
public class SphereCast : Action
{
	// Fields
	public SharedGameObject originGameObject;
	public SharedVector3 originPosition;
	public SharedFloat radius;
	public SharedVector3 direction;
	public SharedFloat distance;
	public LayerMask layerMask;
	public Space space;
	public SharedGameObject storeHitObject;
	public SharedVector3 storeHitPoint;
	public SharedVector3 storeHitNormal;
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
