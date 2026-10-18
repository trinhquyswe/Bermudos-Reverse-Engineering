// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using BehaviorDesigner.Runtime.Tasks;

public class IsHealthLow : Conditional
{
	public float healthThreshold = 0.5f;
	private Health health;
	private bool isFirstEnd = true;

	public override void OnAwake()
	{
		health = GetComponent<Health>();
	}

	public override TaskStatus OnUpdate()
	{
		if (healthThreshold * (float)health.startingHealth < (float)health.currentHealth)
		{
			return TaskStatus.Failure;
		}
		return TaskStatus.Success;
	}

	public override void OnEnd()
	{
		if (!isFirstEnd)
		{
			healthThreshold = -1f;
		}
		isFirstEnd = false;
	}
}
