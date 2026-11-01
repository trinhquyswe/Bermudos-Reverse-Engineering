using DG.Tweening;
using TMPro;
using UnityEngine;

public class Instruction : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI instructionText;
    [SerializeField]
    private TextMeshProUGUI displayCount;

    // TODO(il2cpp): base scale is packed Vector3 constants (Vector3 statics +0xc/+0x10/+0x14) that were not decoded; Vector3.one is a placeholder.
    private static Vector3 BaseScale => Vector3.one;

    private void Start()
    {
        gameObject.SetActive(false);
        StaticEventHandler.OnInstructionChanged += OnInstructionChanged;
    }

    private void OnEnable()
    {
        transform.localScale = BaseScale * 2f;
        transform.DOScale(BaseScale, 0.3f).SetEase(Ease.OutBack);
    }

    private void OnDestroy()
    {
        StaticEventHandler.OnInstructionChanged -= OnInstructionChanged;
        DOTween.Kill(transform);
    }

    private void OnInstructionChanged(string instruction, int displayCount = -1, bool isActive = true)
    {
        if (displayCount == -1)
        {
            gameObject.SetActive(true);
            instructionText.text = instruction;
            this.displayCount.text = "";
            return;
        }

        if (displayCount >= 0 && displayCount < 3)
        {
            transform.localScale = BaseScale * 2f;
            transform.DOScale(BaseScale, 0.3f).SetEase(Ease.OutBack).SetUpdate(true);
            gameObject.SetActive(true);
            instructionText.text = instruction;
            this.displayCount.text = displayCount.ToString() + "/3";
        }
        else
        {
            gameObject.SetActive(false);
        }

        if (!isActive)
        {
            gameObject.SetActive(false);
        }
    }
}
