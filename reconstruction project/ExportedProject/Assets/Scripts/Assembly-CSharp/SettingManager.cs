using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SettingManager : MonoBehaviour
{
    [SerializeField]
    private Button controlsBtn;
    [SerializeField]
    private Button audioBtn;
    [SerializeField]
    private Button backBtn;
    private TextMeshProUGUI controlsText;
    private TextMeshProUGUI audioText;
    [SerializeField]
    private Image controlsPanel;
    [SerializeField]
    private Image audioPanel;
    private float aplha = 0.5f;
    private float startFontSize = 10f;

    private void Awake()
    {
        controlsText = controlsBtn.GetComponentInChildren<TextMeshProUGUI>();
        audioText = audioBtn.GetComponentInChildren<TextMeshProUGUI>();
    }

    private void Start()
    {
        controlsBtn.onClick.AddListener(OpenControls);
        audioBtn.onClick.AddListener(OpenAudio);
        backBtn.onClick.AddListener(() =>
        {
            SoundEffectManager.Instance.PlaySoundEffect(GameResources.Instance.clickButton);
            gameObject.SetActive(false);
        });
    }

    private void OnDestroy()
    {
        DOTween.Kill(transform);
    }

    private void OpenControls()
    {
        audioPanel.gameObject.SetActive(false);
        controlsPanel.gameObject.SetActive(true);
        SoundEffectManager.Instance.PlaySoundEffect(GameResources.Instance.clickButton);
        Effect(controlsText, audioText);
    }

    private void OpenAudio()
    {
        controlsPanel.gameObject.SetActive(false);
        audioPanel.gameObject.SetActive(true);
        SoundEffectManager.Instance.PlaySoundEffect(GameResources.Instance.clickButton);
        Effect(audioText, controlsText);
    }

    private void Effect(TextMeshProUGUI currentText, TextMeshProUGUI previousText)
    {
        previousText.fontSize = startFontSize;
        float startSize = currentText.fontSize;
        // TODO(il2cpp): color fade channel writes (aplha) not recovered
        currentText.DOFontSize(1f, 0.5f).SetEase(Ease.InBounce);
        DOTween.To(() => startSize, x => currentText.fontSize = x, 12.5f, 0.5f);
    }
}
