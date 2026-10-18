// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

[RequireComponent(typeof(Rigidbody2D))]
public class Idle : MonoBehaviour
{
	private Rigidbody2D rigidBody2D;
	private IdleEvent idleEvent;

	private void Awake()
	{
		rigidBody2D = GetComponent<Rigidbody2D>();
		idleEvent = GetComponent<IdleEvent>();
		GameManager.Instance.OnGameStateChange += GameStateChanged_OnIdle;
	}

	private void OnEnable()
	{
		idleEvent.OnIdle += IdleEvent_OnIdle;
	}

	private void OnDisable()
	{
		idleEvent.OnIdle -= IdleEvent_OnIdle;
		GameManager.Instance.OnGameStateChange -= GameStateChanged_OnIdle;
	}

	private void GameStateChanged_OnIdle(GameState gameState)
	{
		switch (gameState)
		{
			case GameState.Intro:
				rigidBody2D.constraints = RigidbodyConstraints2D.FreezeAll;
				break;
			case GameState.Instruct:
				rigidBody2D.constraints = RigidbodyConstraints2D.FreezeRotation;
				GameManager.Instance.OnGameStateChange += GameStateChanged_OnIdle;
				break;
		}
	}

	private void IdleEvent_OnIdle(IdleEvent idleEvent)
	{
		IdleRigidBody();
	}

	private void IdleRigidBody()
	{
		rigidBody2D.velocity = Vector2.zero;
	}
}
