using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class SkillCooldownTimer : MonoBehaviour
{
    [SerializeField]
    private Image dashCooldownImage;
    [SerializeField]
    private Image bashCooldownImage;
    [SerializeField]
    private Image beamCooldownImage;
    [SerializeField]
    private Image beamIcon;
    public float dashCooldown;
    public float bashCooldown;

    private void OnEnable()
    {
        StaticEventHandler.OnTriggerDash += GetDashCooldown;
        StaticEventHandler.OnTriggerBash += GetBashCooldown;
        RageEvent.OnRageChanged += IncreaseBeamCooldown;
    }

    private void OnDisable()
    {
        StaticEventHandler.OnTriggerDash -= GetDashCooldown;
        StaticEventHandler.OnTriggerBash -= GetBashCooldown;
        RageEvent.OnRageChanged -= IncreaseBeamCooldown;
    }

    public void GetDashCooldown()
    {
        dashCooldown = 1f;
        dashCooldownImage.fillAmount = 1f;
    }

    public void GetBashCooldown()
    {
        bashCooldown = 0.5f;
        bashCooldownImage.fillAmount = 1f;
    }

    public void IncreaseBeamCooldown(RageEventArgs rageEventArgs)
    {
        beamCooldownImage.DOFillAmount(rageEventArgs.ragePercent, 0.3f).OnComplete(() =>
        {
            float fill = beamCooldownImage.fillAmount;
            beamCooldownImage.gameObject.SetActive(fill != 1f);
            beamIcon.gameObject.SetActive(fill == 1f);
        });
    }

    private void Start()
    {
        dashCooldownImage.fillAmount = 0f;
        bashCooldownImage.fillAmount = 0f;
        beamCooldownImage.fillAmount = 0f;
    }

    private void Update()
    {
        if (dashCooldownImage.fillAmount > 0f)
        {
            dashCooldownImage.fillAmount += (-1f / dashCooldown) * Time.deltaTime;
        }
        if (bashCooldownImage.fillAmount > 0f)
        {
            bashCooldownImage.fillAmount += (-1f / bashCooldown) * Time.deltaTime;
        }
    }
}
