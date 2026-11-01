using UnityEngine;

public class AmmoHitEffect : MonoBehaviour
{
    private ParticleSystem particleSystemHitEffect;

    private void Awake()
    {
        particleSystemHitEffect = GetComponent<ParticleSystem>();
    }

    public void InitialiseAmmoHitEffect(Color ammoHitEffectType)
    {
        ParticleSystem.MainModule mainModule = particleSystemHitEffect.main;
        mainModule.startColor = ammoHitEffectType;

        gameObject.SetActive(true);
    }
}
