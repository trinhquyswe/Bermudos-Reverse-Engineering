using UnityEngine;

public class Rage : MonoBehaviour
{
    [HideInInspector]
    public float maxRage = 10f;
    [HideInInspector]
    public float currentRage;

    public void IncreaseRage(float amount)
    {
        currentRage += amount;
        if (maxRage < currentRage)
        {
            currentRage = maxRage;
        }
        // TODO(il2cpp): the decompiled code wrote maxRage into RageEventArgs.currentRage; the current value is used here.
        RageEvent.RaiseRageChanged(new RageEventArgs
        {
            ragePercent = currentRage / maxRage,
            currentRage = currentRage,
            maxRage = maxRage
        });
    }
}
