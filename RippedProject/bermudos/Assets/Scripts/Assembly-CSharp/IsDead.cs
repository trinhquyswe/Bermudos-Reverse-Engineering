// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using BehaviorDesigner.Runtime.Tasks;

public class IsDead : Conditional
{
	private Health health;

	public override void OnAwake()
	{
		health = GetComponent<Health>();
	}

	public override TaskStatus OnUpdate()
	{
		if (0 < health.currentHealth)
		{
			return TaskStatus.Failure;
		}
		return TaskStatus.Success;
	}
}
