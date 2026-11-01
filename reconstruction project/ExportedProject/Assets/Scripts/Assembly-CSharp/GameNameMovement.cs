using DG.Tweening;
using UnityEngine;

public class GameNameMovement : MonoBehaviour
{
    private RectTransform rectTransform;
    public float moveDistance;
    public float duration;
    public Ease easeType;

    public GameNameMovement()
    {
        easeType = Ease.InOutSine;
        moveDistance = 5f;
        duration = 1f;
    }

    private void Awake()
    {
        rectTransform = GetComponent<RectTransform>();
    }

    private void Start()
    {
        GameNameAnimation();
    }

    private void OnDestroy()
    {
        transform.DOKill();
    }

    private void GameNameAnimation()
    {
        Vector2 anchoredPosition = rectTransform.anchoredPosition;
        Vector3 bottomPosition = new Vector3(anchoredPosition.x, anchoredPosition.y - moveDistance, 0f);
        rectTransform.DOAnchorPosY(anchoredPosition.y + moveDistance, duration)
            .SetEase(easeType)
            .OnComplete(() =>
            {
                // TODO(il2cpp): OnComplete lambda body not recovered; expected to tween toward bottomPosition (approx).
            });
    }
}