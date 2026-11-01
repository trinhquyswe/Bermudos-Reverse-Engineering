using UnityEngine;

public class Idle : MonoBehaviour
{
    private Rigidbody2D rigidBody2D;
    private IdleEvent idleEvent;

    private void Awake()
    {
        rigidBody2D = GetComponent<Rigidbody2D>();
        idleEvent = GetComponent<IdleEvent>();
    }

    private void OnEnable()
    {
        idleEvent.OnIdle += IdleEvent_OnIdle;
        GameManager.Instance.OnGameStateChange += GameStateChanged_OnIdle;
    }

    private void OnDisable()
    {
        idleEvent.OnIdle -= IdleEvent_OnIdle;
    }

    private void GameStateChanged_OnIdle(GameState gameState)
    {
        if (gameState == GameState.Intro)
        {
            rigidBody2D.constraints = (RigidbodyConstraints2D)7; // 7 = FreezeAll (FreezePositionX/Y + FreezeRotation)
        }
        else if (gameState != GameState.Begin && gameState == GameState.Instruct)
        {
            rigidBody2D.constraints = (RigidbodyConstraints2D)4; // 4 = FreezeRotation
            GameManager.Instance.OnGameStateChange -= GameStateChanged_OnIdle;
        }
    }

    private void IdleEvent_OnIdle(IdleEvent idleEvent)
    {
        rigidBody2D.velocity = Vector2.zero;
    }

    private void IdleRigidBody()
    {
        rigidBody2D.velocity = Vector2.zero;
    }
}
