using Esper.ESave;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    [SerializeField]
    private Button newGameBtn;
    [SerializeField]
    private Button continueGameBtn;
    [SerializeField]
    private Button settingsBtn;
    [SerializeField]
    private Button exitGameBtn;
    [SerializeField]
    private Image SettingPanel;
    [SerializeField]
    private Image controlsPanel;
    [SerializeField]
    private Image audioPanel;
    [SerializeField]
    private Intro intro;
    private SaveFileSetup saveFileSetup;
    private bool isfirstTime;

    public MainMenu()
    {
        isfirstTime = true;
    }

    private void Awake()
    {
        saveFileSetup = GetComponent<SaveFileSetup>();
    }

    private void Start()
    {
        SaveFile saveFile = saveFileSetup.GetSaveFile();
        bool hasFirstTimeData = saveFile.HasData("FirstTime");
        if (!hasFirstTimeData)
        {
            saveFile.AddOrUpdateData<bool>("FirstTime", true);
            saveFile.Save();
            isfirstTime = true;
        }
        else
        {
            saveFile.AddOrUpdateData<bool>("FirstTime", false);
            saveFile.Save();
            isfirstTime = false;
        }
        SyncFirstTimePlayerPrefs();

        newGameBtn.onClick.AddListener(OnNewGameClick);
        continueGameBtn.onClick.AddListener(OnContinueGameClick);
        settingsBtn.onClick.AddListener(OnSettingsClick);
        exitGameBtn.onClick.AddListener(OnExitGameClick);
    }

    private void SyncFirstTimePlayerPrefs()
    {
        // TODO(il2cpp): JsonUtility does not support bare bool values; the decompiled PlayerPrefs round-trip is kept. Verify at runtime.
        if (!PlayerPrefs.HasKey("FirstTime"))
        {
            PlayerPrefs.SetString("FirstTime", JsonUtility.ToJson(isfirstTime));
            PlayerPrefs.Save();
        }
        else
        {
            isfirstTime = JsonUtility.FromJson<bool>(PlayerPrefs.GetString("FirstTime"));
        }
    }

    private void OnNewGameClick()
    {
        SoundEffectManager.Instance.PlaySoundEffect(GameResources.Instance.clickButton);
        intro.gameObject.SetActive(true);
    }

    private void OnContinueGameClick()
    {
        if (!isfirstTime)
        {
            SceneManager.LoadScene("MainScene");
            SceneManager.sceneLoaded += LoadContineGameScene;
            SoundEffectManager.Instance.PlaySoundEffect(GameResources.Instance.clickButton);
        }
    }

    private void LoadContineGameScene(Scene scene, LoadSceneMode mode)
    {
        if (scene.name == "MainScene" && scene.isLoaded)
        {
            GameManager.Instance.TransitionToGame();
            SceneManager.sceneLoaded -= LoadContineGameScene;
        }
    }

    private void OnSettingsClick()
    {
        SettingPanel.gameObject.SetActive(true);
        controlsPanel.gameObject.SetActive(false);
        audioPanel.gameObject.SetActive(false);
        SoundEffectManager.Instance.PlaySoundEffect(GameResources.Instance.clickButton);
    }

    private void OnExitGameClick()
    {
        SoundEffectManager.Instance.PlaySoundEffect(GameResources.Instance.clickButton);
        Application.Quit();
    }
}
