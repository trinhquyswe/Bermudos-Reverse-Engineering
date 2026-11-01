using UnityEngine;
using UnityEngine.SceneManagement;

public class RainEffect : MonoBehaviour
{
    private int appearanceRate;
    [SerializeField]
    private SoundEffectSO rainEffect;

    private void Start()
    {
        gameObject.SetActive(false);
        appearanceRate = Random.Range(0, 3);
        if (appearanceRate != 0 && SceneManager.GetSceneAt(0).name != "MainMenu")
        {
            return;
        }
        gameObject.SetActive(true);
        SoundEffectManager.Instance.PlaySoundEffectPersistent(rainEffect, true);
    }

    private void OnDisable()
    {
        SoundEffectManager.Instance.StopSoundEffectLoop(rainEffect); // TODO(il2cpp): singleton chain mapped to project pattern (approx).
    }
}