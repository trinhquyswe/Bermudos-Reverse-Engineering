using Cinemachine;
using DG.Tweening;
using System.Collections;
using UnityEngine;

public class CinemachineManager : MonoBehaviour
{
    [SerializeField] private Camera zoomCamera;
    [SerializeField] private CinemachineVirtualCamera cinemachineVirtualCamera;

    private CinemachineConfiner2D cinemachineConfiner2D;

    private void Awake()
    {
        cinemachineConfiner2D = GetComponentInChildren<CinemachineConfiner2D>();
    }

    private void OnEnable()
    {
        // TODO(il2cpp): StaticEventHandler is still a dummy; event names and args type assumed from pseudo.
        StaticEventHandler.OnMapChanged += StaticEventHandler_OnMapChanged;
        GameManager.Instance.OnGameStateChange += GameManager_OnGameStateChange;
    }

    private void OnDisable()
    {
        // Original only unsubscribes OnMapChanged; the game-state subscription removes itself on Play.
        StaticEventHandler.OnMapChanged -= StaticEventHandler_OnMapChanged;
    }

    private void Start()
    {
        // TODO(il2cpp): camera follow target assignment via virtual call not recovered.
    }

    private void GameManager_OnGameStateChange(GameState gameState)
    {
        switch (gameState)
        {
            case GameState.Intro:
                StartCoroutine(ZoomCam());
                break;
            case GameState.Begin:
                // Zoom target and tween setup are approximated from pseudo.
                zoomCamera.DOOrthoSize(8.4375f, 5f);
                break;
            case GameState.Play:
                zoomCamera.gameObject.SetActive(false);
                cinemachineVirtualCamera.gameObject.SetActive(true);
                GameManager.Instance.OnGameStateChange -= GameManager_OnGameStateChange;
                break;
        }
    }

    private void StaticEventHandler_OnMapChanged(MapChangedEventArgs args)
    {
        Confine(args.map);
    }

    private void Confine(Map map)
    {
        // TODO(il2cpp): Confine body not recovered; expected to assign the confiner bounding shape from map.
    }

    private IEnumerator ZoomCam()
    {
        // TODO(il2cpp): ZoomCam coroutine body not recovered.
        yield break;
    }
}
