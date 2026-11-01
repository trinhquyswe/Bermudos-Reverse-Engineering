using UnityEngine;

public class Poise : MonoBehaviour
{
    private PoiseEvent poiseEvent;
    public float maxPoise, currentPoise, stunTime;

    private void Awake()
    {
        poiseEvent = GetComponent<PoiseEvent>();
    }

    private void Start()
    {
        currentPoise = maxPoise;
    }

    public void TakePoise(int poiseAmount)
    {
        currentPoise -= poiseAmount;
        if (currentPoise <= 0f)
        {
            poiseEvent.CallPoiseEvent(poiseAmount, currentPoise, maxPoise, stunTime);
        }
    }
}