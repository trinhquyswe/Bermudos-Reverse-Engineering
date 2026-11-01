using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RestUI : MonoBehaviour
{
    private Image restImage;
    private TextMeshProUGUI restText;

    private void Awake()
    {
        restText = GetComponentInChildren<TextMeshProUGUI>();
        restImage = GetComponent<Image>();
    }

    private void Start()
    {
        restImage.gameObject.SetActive(false);
        restText.gameObject.SetActive(false);
    }

    private void OnEnable()
    {
        StaticEventHandler.OnRestInBonfire += ShowRestUI;
    }

    private void OnDestroy()
    {
        StaticEventHandler.OnRestInBonfire -= ShowRestUI;
    }

    private void ShowRestUI()
    {
        restImage.gameObject.SetActive(true);
        restText.gameObject.SetActive(true);

        Sequence sequence = DOTween.Sequence();
        sequence.Append(restText.DOFade(1f, 1f).SetEase(Ease.InOutSine));
        sequence.Join(restImage.DOFade(0.6f, 1f).SetEase(Ease.InOutSine));
        sequence.Append(restText.DOFade(0f, 1f).SetEase(Ease.InOutSine));
        sequence.Join(restImage.DOFade(0f, 1f).SetEase(Ease.InOutSine));
        sequence.AppendCallback(() =>
        {
            // TODO(il2cpp): callback body (RestUI.<ShowRestUI>b__6_0) is not in the dump or the pseudo output.
        });
    }
}
