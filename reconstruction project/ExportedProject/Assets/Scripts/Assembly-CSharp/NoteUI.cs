using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class NoteUI : MonoBehaviour
{
    private TextMeshProUGUI textMeshPro;
    private Image Image;

    private void Awake()
    {
        textMeshPro = GetComponentInChildren<TextMeshProUGUI>();
        Image = GetComponent<Image>();
        StaticEventHandler.OnNoteOpened += OnNoteOpened;
    }

    private void Start()
    {
        gameObject.SetActive(false);
    }

    private void OnEnable()
    {
        // Image color is set to (1, 1, 1, 0). Text keeps its RGB with alpha 0. Both then fade in.
        Image.color = new Color(1f, 1f, 1f, 0f);
        Color textColor = textMeshPro.color;
        textColor.a = 0f;
        textMeshPro.color = textColor;
        Image.DOFade(1f, 1f).SetEase(Ease.InOutSine);
        textMeshPro.DOFade(1f, 1f).SetEase(Ease.InOutSine);
    }

    private void OnDestroy()
    {
        DOTween.Kill(transform);
        StaticEventHandler.OnNoteOpened -= OnNoteOpened;
    }

    private void OnNoteOpened(OnNoteOpenedEventArgs onNoteOpenedEventArgs)
    {
        bool isOpening = onNoteOpenedEventArgs.isOpening;
        if (isOpening == false)
        {
            gameObject.SetActive(false);
            return;
        }

        gameObject.SetActive(true);
        // TODO(il2cpp): the original calls a virtual method (vtable slot 66) with the note string.
        // Assumed to be the TextMeshPro text setter; verify.
        textMeshPro.text = onNoteOpenedEventArgs.note;
    }
}
