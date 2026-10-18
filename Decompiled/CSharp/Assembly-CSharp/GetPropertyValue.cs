// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskCategory("Reflection")]
[TaskDescription("Gets the value from the property specified. Returns success if the property was retrieved.")]
[TaskIcon("{SkinColor}ReflectionIcon.png")]
public class GetPropertyValue : Action
{
	// Fields
	public SharedGameObject targetGameObject;
	public SharedString componentName;
	public SharedString propertyName;
	public SharedVariable propertyValue;

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
