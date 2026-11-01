using System.Collections;
using DG.Tweening;
using TMPEffects.Components;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Intro : MonoBehaviour
{
    [SerializeField]
    private IntroSO[] introSOList = new IntroSO[4];
    [SerializeField]
    private Image introImage;
    [SerializeField]
    private Image map;
    private TextMeshProUGUI introText;
    private Button nextBtn;
    private int introIndex;
    private TMPWriter tmpWriter;

    private void Awake()
    {
        tmpWriter = GetComponentInChildren<TMPWriter>();
        introText = GetComponentInChildren<TextMeshProUGUI>();
        nextBtn = GetComponentInChildren<Button>();
        nextBtn.gameObject.SetActive(false);
        introImage.enabled = false;
    }

    private void OnDestroy()
    {
        tmpWriter.OnFinishWriter.RemoveListener(OnFinishWriter);
        nextBtn.onClick.RemoveListener(OnNextBtnClick);
        DOTween.Kill(transform);
    }

    private void Start()
    {
        map.gameObject.SetActive(true);
        map.transform.DOScale(new Vector3(8f, 8f, 8f), 2.5f).SetEase(Ease.Linear).OnComplete(() =>
        {
            map.gameObject.SetActive(false);
            tmpWriter.OnFinishWriter.AddListener(OnFinishWriter);
            StartCoroutine(WaitUntilIntroEnable());
            nextBtn.onClick.AddListener(OnNextBtnClick);
            introImage.enabled = true;
        });
    }

    private void OnFinishWriter(TMPWriter tmpWriter)
    {
        nextBtn.gameObject.SetActive(true);
    }

    private void OnNextBtnClick()
    {
        introImage.color = Color.white; // approximated from decompile
        nextBtn.gameObject.SetActive(false);
        if (introIndex < introSOList.Length)
        {
            introImage.sprite = introSOList[introIndex].introSprite;
            if (introImage != null)
            {
                introImage.DOFade(1f, 2f);
            }
            introText.text = introSOList[introIndex].introText;
        }
        else
        {
            SceneManager.LoadScene("MainScene");
            SceneManager.sceneLoaded += OnSceneLoaded;
        }
        introIndex++;
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name == "MainScene" && scene.isLoaded)
        {
            GameManager.Instance.HandleGameState(GameState.Intro); // approximated from decompile
            SceneManager.sceneLoaded -= OnSceneLoaded;
        }
    }

    private IEnumerator WaitUntilIntroEnable()
    {
        // TODO(il2cpp): coroutine body not recoverable from decompile
        yield break;
    }
}
