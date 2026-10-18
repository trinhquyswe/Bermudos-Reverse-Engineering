// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

public class MoveByEnemyAIEvent : MonoBehaviour
{
	public event Action<MoveByEnemyAIEvent> OnMoveByEnemyAI;

	public void CallMoveByEnemyAIEvent()
	{
		OnMoveByEnemyAI?.Invoke(this);
	}
}
