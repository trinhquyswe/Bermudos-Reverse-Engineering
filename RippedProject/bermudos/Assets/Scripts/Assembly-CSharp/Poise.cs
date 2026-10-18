// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

[DisallowMultipleComponent]
public class Poise : MonoBehaviour
{
	private PoiseEvent poiseEvent;
	public float maxPoise;
	public float currentPoise;
	public float stunTime;

	private void Awake()
	{
		currentPoise = maxPoise;
	}

	private void Start()
	{
		currentPoise = maxPoise;
	}

	public void TakePoise(int poiseAmount)
	{
		currentPoise -= (float)poiseAmount;
		if (currentPoise <= 0f)
		{
			poiseEvent.CallPoiseEvent((float)poiseAmount, currentPoise, maxPoise, stunTime);
		}
	}
}
