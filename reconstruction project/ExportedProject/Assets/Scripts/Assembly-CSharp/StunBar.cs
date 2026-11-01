using UnityEngine;
using UnityEngine.UI;

public class StunBar : MonoBehaviour
{
    private PoiseEvent poiseEvent;
    private Slider stunBar;
    private float stunTime;

    private void Awake()
    {
        poiseEvent = GetComponent<PoiseEvent>();
        stunBar = GetComponentInChildren<Slider>();
    }

    private void OnEnable()
    {
        poiseEvent.OnPoise += PoiseEvent_OnPoise;
    }

    private void OnDisable()
    {
        poiseEvent.OnPoise -= PoiseEvent_OnPoise;
    }

    private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
    {
        if (poiseEventArgs.currentPoise <= 0f)
        {
            stunTime = poiseEventArgs.stunTime;
            stunBar.maxValue = stunTime;
            stunBar.value = stunTime;
        }
    }

    private void Update()
    {
        if (stunBar.value > 0f)
        {
            stunBar.value -= Time.deltaTime;
        }
    }
}
