using UnityEngine;

public abstract class Effect : MonoBehaviour
{
    [SerializeField]
    [ColorUsage(true, true)]
    protected Color flashColor;
    protected Rigidbody2D rb;
    public AnimationCurve damageFlashCurve;
    protected WaitForFixedUpdate waitForFixedUpdate = new WaitForFixedUpdate();
    [SerializeField]
    protected float damageForce;
    [SerializeField]
    protected float duration = 0.25f;
    [SerializeField]
    protected ParticleSystem stunEffect;
    [SerializeField]
    protected ParticleSystem bloodEffect;

    public void StunEffect(float stunTime)
    {
        var main = stunEffect.main;
        main.startLifetimeMultiplier = stunTime;
        stunEffect.Play();
    }
}
