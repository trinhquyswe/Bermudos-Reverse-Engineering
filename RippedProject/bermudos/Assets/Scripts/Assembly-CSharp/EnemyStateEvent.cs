// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System;
using UnityEngine;

[DisallowMultipleComponent]
public class EnemyStateEvent : MonoBehaviour
{
	public Action<EnemyStateEvent, EnemyStateEventArgs> onEnemyState;

	public void CallEnemyStateEvent(EnemyState enemyState)
	{
		onEnemyState?.Invoke(this, new EnemyStateEventArgs() { enemyState = enemyState });
	}
}
