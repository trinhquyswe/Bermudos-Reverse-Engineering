using DG.Tweening;
using UnityEngine;

public class Note : MonoBehaviour
{
    private LayerMask playerLayer;
    private SpriteRenderer spriteRenderer;
    [TextArea]
    public string noteText;

    private void Awake()
    {
        playerLayer = LayerMask.GetMask("Player");
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    private void Start()
    {
        spriteRenderer.DOFade(0.3f, 1.5f).SetEase(Ease.InOutSine).SetLoops(-1, LoopType.Yoyo);
    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        if ((playerLayer.value & (1 << collision.gameObject.layer)) > 0)
        {
            StaticEventHandler.OnNoteOpened?.Invoke(new OnNoteOpenedEventArgs
            {
                note = noteText,
                isOpening = true
            });
        }
    }

    private void OnDestroy()
    {
        DOTween.Kill(transform);
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        if ((playerLayer.value & (1 << collision.gameObject.layer)) > 0)
        {
            StaticEventHandler.OnNoteOpened?.Invoke(new OnNoteOpenedEventArgs
            {
                note = noteText,
                isOpening = false
            });
        }
    }
}
