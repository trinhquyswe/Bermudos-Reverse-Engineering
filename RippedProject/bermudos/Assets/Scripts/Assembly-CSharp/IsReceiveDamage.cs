// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using BehaviorDesigner.Runtime.Tasks;

public class IsReceiveDamage : Conditional
{
	private HealthEvent healthEvent;
	private bool isReceiveDamage;

	public override void OnAwake()
	{
		healthEvent = GetComponent<HealthEvent>();
		healthEvent.OnHealthChanged += OnHealthChanged;
	}

	private void OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
	{
		isReceiveDamage = true;
	}

	public override TaskStatus OnUpdate()
	{
		if (isReceiveDamage)
		{
			return TaskStatus.Success;
		}
		return TaskStatus.Failure;
	}

	public override void OnEnd()
	{
		isReceiveDamage = false;
	}
}
