using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

[DisallowMultipleComponent]
public class TransitionPoint : MonoBehaviour
{
    [SerializeField]
    private TransitionPointDetailsSO TransitionPointDetailsSO;

    private bool isCollider;
    private WaitForSeconds waitForSeconds;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (GameManager.Instance.gameState == GameState.Instruct
            && TransitionPointDetailsSO.transitionMap == "North Of The Forest")
        {
            StaticEventHandler.CallInstructionChangedEvent("Complete the instructions to enter this map", -1, true);
            return;
        }

        if (collision.CompareTag("Player") && !isCollider)
        {
            StartCoroutine(MapTransitionCoroutine(collision));
            isCollider = true;
        }
    }

    private IEnumerator MapTransitionCoroutine(Collider2D collision)
    {
        // Approximate: the state machine MoveNext body is an empty stub in dump.cs and absent from pseudo-C#.
        // TODO: transition body (scene load, player placement, sceneLoaded subscription) is not recoverable from current artifacts.
        yield return waitForSeconds;
    }

    private void SceneManager_sceneLoaded(Scene arg0, LoadSceneMode arg1)
    {
        if (TransitionPointDetailsSO.transitionMap == "North Of The Forest")
        {
            GameManager.Instance.HandleGameState(GameState.EngagedBoss);
        }

        SceneManager.sceneLoaded -= SceneManager_sceneLoaded;
    }

    public TransitionPoint()
    {
        waitForSeconds = new WaitForSeconds(0.1f);
    }
}
