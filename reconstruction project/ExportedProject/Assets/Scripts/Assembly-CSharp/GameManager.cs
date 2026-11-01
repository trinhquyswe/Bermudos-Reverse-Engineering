using System;
using DG.Tweening;
using Esper.ESave;
using TMPEffects.Components;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : SingletonMonobehaviour<GameManager>
{
    [HideInInspector]
    public Player player;
    public EnemyManagerDetailsSO[] enemyManagerDetailsSO;
    [HideInInspector]
    public SaveFileSetup saveFileSetup;
    public GameState gameState;
    [HideInInspector]
    public Action<GameState> OnGameStateChange;
    [SerializeField]
    public Image beginSreen;
    [SerializeField]
    private Image wonPanel;
    [SerializeField]
    private Image wonScreen;
    [SerializeField]
    private TextMeshProUGUI wonText;
    [SerializeField]
    private GameObject healthBar;
    [SerializeField]
    private GameObject staminaBar;
    [SerializeField]
    private GameObject skillBar;

    private void OnEnable()
    {
        StaticEventHandler.OnPlayerChanged += StaticEventHandler_OnPlayerChanged;
        StaticEventHandler.OnRestInBonfire += StaticEventHandler_OnRestInBonfire;
    }

    private void OnDisable()
    {
        StaticEventHandler.OnPlayerChanged -= StaticEventHandler_OnPlayerChanged;
        StaticEventHandler.OnRestInBonfire -= StaticEventHandler_OnRestInBonfire;
    }

    private void StaticEventHandler_OnPlayerChanged(OnPlayerChangedEventArgs onPlayerChangedEventArgs)
    {
        player = onPlayerChangedEventArgs.player;
    }

    private void StaticEventHandler_OnRestInBonfire()
    {
        InitializeEnemyManagerData();
    }

    protected override void Awake()
    {
        base.Awake();
        saveFileSetup = GetComponent<SaveFileSetup>();
    }

    private void Start()
    {
        InitializeEnemyManagerData();
    }

    public void TransitionToGame()
    {
        SaveFile saveFile = saveFileSetup.GetSaveFile();
        if (saveFile.HasData("Checkpoint"))
        {
            string checkpoint = saveFile.GetData<string>("Checkpoint", null);
            string sceneName = null;
            if (checkpoint == "Coast")
            {
                player.transform.position = player.spawnPosition[0];
                sceneName = "Coast";
            }
            else if (checkpoint == "The Forest")
            {
                player.transform.position = player.spawnPosition[1];
                sceneName = "The Forest";
            }

            if (sceneName != null)
            {
                SceneManager.LoadScene(sceneName, LoadSceneMode.Additive);
            }
        }

        GameResources.Instance.beginUI.SetFloat("_FadeAmount", 0f);
        beginSreen.color = Color.black;
        beginSreen.gameObject.SetActive(true);
        beginSreen.DOFade(0f, 1.5f).SetEase(Ease.InOutSine).OnComplete(() =>
        {
            beginSreen.gameObject.SetActive(false);
            gameState = GameState.Play;
            Play();
            OnGameStateChange?.Invoke(gameState);
        });
    }

    public void HandleGameState(GameState gameState)
    {
        this.gameState = gameState;

        if (gameState == GameState.Intro)
        {
            SaveBossState(0);
            Intro();
        }
        else if (gameState == GameState.Instruct)
        {
            Instruct();
        }
        else if (gameState == GameState.Play)
        {
            Play();
        }
        else if (gameState == GameState.EngagedBoss)
        {
            EngagedBoss();
            MusicManager.Instance.StopPlayingBackgroundMusic();
            MusicManager.Instance.PlayMusic(GameResources.Instance.musicTrack_Bossfight, 0.5f, 0.5f);
        }
        else if (gameState == GameState.Won)
        {
            SaveBossState(1);
            WonScene();
        }

        OnGameStateChange?.Invoke(gameState);
    }

    private void SaveBossState(int isBossDefeated)
    {
        PlayerPrefs.SetInt("isBossDefeated", isBossDefeated);
    }

    private void WonScene()
    {
        SceneManager.UnloadSceneAsync("North Of The Forest");
        wonPanel.gameObject.SetActive(true);
        wonPanel.color = Color.clear;
        wonPanel.DOFade(1f, 1f).OnComplete(_WonScene_b__20_0);
    }

    private void _WonScene_b__20_0()
    {
        wonText.gameObject.SetActive(true);
        TMPWriter writer = wonText.GetComponent<TMPWriter>();
        writer.OnFinishWriter.RemoveAllListeners();
        writer.OnFinishWriter.AddListener(_WonScene_b__20_1);
    }

    private void _WonScene_b__20_1(TMPWriter tMP)
    {
        DOTweenModuleUI.DOFade(wonText, 0f, 3f).OnComplete(_WonScene_b__20_2);
    }

    private void _WonScene_b__20_2()
    {
        wonText.gameObject.SetActive(false);
        wonScreen.gameObject.SetActive(true);
        wonScreen.transform.DOScale(0f, 3f).OnComplete(() =>
        {
            // TODO(il2cpp): OnComplete body (GameManager.<>c.<WonScene>b__20_3) is not in the pseudo output.
        });
    }

    private void Instruct()
    {
        healthBar.SetActive(true);
        staminaBar.SetActive(true);
        skillBar.SetActive(true);
    }

    public void Intro()
    {
        healthBar.SetActive(false);
        staminaBar.SetActive(false);
        skillBar.SetActive(false);
        GameResources.Instance.beginUI.SetFloat("_FadeAmount", 0f);
        beginSreen.gameObject.SetActive(true);
        beginSreen.DOColor(Color.black, 3f).OnComplete(() =>
        {
            SceneManager.LoadScene("Coast", LoadSceneMode.Additive);
            SaveFile saveFile = saveFileSetup.GetSaveFile();
            saveFile.AddOrUpdateData("Checkpoint", "Coast");
            saveFile.Save();
            PlayerPrefs.SetString("Checkpoint", JsonUtility.ToJson("Coast"));
            PlayerPrefs.Save();
            GameResources.Instance.beginUI.DOFloat(1f, "_FadeAmount", 2f).OnComplete(() =>
            {
                beginSreen.gameObject.SetActive(false);
                gameState = GameState.Begin;
                OnGameStateChange?.Invoke(gameState);
            });
        });
    }

    public void Play()
    {
        player.GetComponent<Rigidbody2D>().mass = 0.5f;
    }

    public void EngagedBoss()
    {
        player.GetComponent<Rigidbody2D>().mass = 1000000f;
    }

    public void InitializeEnemyManagerData()
    {
        for (int i = 0; i < enemyManagerDetailsSO.Length; i++)
        {
            EnemyManagerDetailsSO details = enemyManagerDetailsSO[i];
            EnemyManagerData data = new EnemyManagerData();
            data.enemieStateList = new System.Collections.Generic.List<bool>();
            data.enemyCount = details.enemyPostionList.Count;
            data.enemyName = details.enemyName;
            data.GetEnemyList(-1);
            SaveFile saveFile = saveFileSetup.GetSaveFile();
            saveFile.AddOrUpdateData(details.enemyManagerDataKey, data);
            saveFile.Save();
        }
    }
}
