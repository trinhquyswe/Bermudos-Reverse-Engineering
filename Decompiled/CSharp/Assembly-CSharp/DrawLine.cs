// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug
[TaskCategory("Unity/Debug")]
[TaskDescription("Draws a debug line")]
public class DrawLine : Action
{
	// Fields
	public SharedVector3 start;
	public SharedVector3 end;
	public SharedColor color;
	public SharedFloat duration;
	public SharedBool depthTest;

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
