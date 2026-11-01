using UnityEngine;
using UnityEngine.UI;

public class StaminaBar : MonoBehaviour
{
    [SerializeField]
    private Slider staminaBar;
    [SerializeField]
    private Slider easeStaminaBar;
    private float lerpSpeed = 0.05f;

    private void OnEnable()
    {
        GameManager.Instance.player.staminaEvent.OnStaminaChanged += StaminaEvent_OnStaminaChanged;
    }

    private void OnDisable()
    {
        GameManager.Instance.player.staminaEvent.OnStaminaChanged -= StaminaEvent_OnStaminaChanged;
    }

    private void StaminaEvent_OnStaminaChanged(StaminaEvent staminaEvent, StaminaEventArgs staminaEventArgs)
    {
        // TODO(il2cpp): pseudo reads healthBar/healthEventArgs.healthPercent (HealthBar copy-paste artifact); stamina equivalent used.
        staminaBar.value = staminaEventArgs.staminaPercent;
    }

    private void Update()
    {
        if (staminaBar.value != easeStaminaBar.value)
        {
            easeStaminaBar.value = easeStaminaBar.value + (staminaBar.value - easeStaminaBar.value) * Mathf.Clamp01(lerpSpeed);
        }
    }
}
