// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

[DisallowMultipleComponent]
public class Rage : MonoBehaviour
{
	[HideInInspector]
	public float maxRage;
	[HideInInspector]
	public float currentRage;

	public void IncreaseRage(float amount)
	{
		currentRage += amount;
		if (currentRage > maxRage)
		{
			currentRage = maxRage;
		}
		RageEvent.CallRageChangedEvent(currentRage / maxRage, currentRage, maxRage);
	}
}
