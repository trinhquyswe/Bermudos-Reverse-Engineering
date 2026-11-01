using UnityEngine;

public class BossMap : Map
{
    [SerializeField]
    private GameObject NorthOfTheForestToTheForest;

    private void Start()
    {
        StaticEventHandler.CallMapChangedEvent(this);
    }

    private void OnEnable()
    {
        GameManager.Instance.OnGameStateChange += OnGameStateChanged_Map;
    }

    private void OnDisable()
    {
        GameManager.Instance.OnGameStateChange -= OnGameStateChanged_Map;
    }

    private void OnGameStateChanged_Map(GameState gameState)
    {
        if (gameState == GameState.EngagedBoss)
        {
            if (NorthOfTheForestToTheForest != null)
            {
                NorthOfTheForestToTheForest.SetActive(PlayerPrefs.HasKey("isBossDefeated") && PlayerPrefs.GetInt("isBossDefeated", 0) == 1);
            }
        }
        else if (gameState == GameState.Won)
        {
            NorthOfTheForestToTheForest.SetActive(true);
        }
    }
}
