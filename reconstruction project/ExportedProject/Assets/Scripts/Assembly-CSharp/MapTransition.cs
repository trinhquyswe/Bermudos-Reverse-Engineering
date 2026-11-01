using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MapTransition : MonoBehaviour
{
    private Image image;
    private TextMeshProUGUI text;
    private bool isLoadedMap;
    public float transitonTime;

    private void Awake()
    {
        image = GetComponent<Image>();
        text = GetComponentInChildren<TextMeshProUGUI>();
        StaticEventHandler.OnMapTransition += OnMapTransition;
    }

    private void Start()
    {
        // TODO(il2cpp): pseudo names these restImage/restText (RestUI fields); the field offsets (0x10/0x14) match image/text here.
        image.gameObject.SetActive(false);
        text.gameObject.SetActive(false);
    }

    private void OnDestroy()
    {
        DOTween.Kill(transform);
        StaticEventHandler.OnMapTransition -= OnMapTransition;
    }

    private void OnMapTransition()
    {
        image.gameObject.SetActive(true);
        text.gameObject.SetActive(true);
        float halfTime = transitonTime * 0.5f;
        Sequence sequence = DOTween.Sequence();
        sequence.Append(image.DOFade(1f, halfTime).SetEase(Ease.InOutSine));
        sequence.Join(text.DOFade(1f, halfTime).SetEase(Ease.InOutSine));
        sequence.Append(image.DOFade(0f, halfTime));
        sequence.Join(text.DOFade(0f, halfTime).SetEase(Ease.InOutSine));
        sequence.AppendCallback(() =>
        {
            // TODO(il2cpp): same restImage/restText naming artifact as Start; hides image/text.
            image.gameObject.SetActive(false);
            text.gameObject.SetActive(false);
        });
    }
}
