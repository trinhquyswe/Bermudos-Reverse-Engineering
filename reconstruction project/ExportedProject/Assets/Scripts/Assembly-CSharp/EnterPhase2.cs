using UnityEngine;

// NOTE: the original base class is BehaviorDesigner.Runtime.Tasks.Action (Behavior Designer),
// which is not part of the exported project. Re-exposed as a MonoBehaviour keeping the exact
// serialized field names; task callbacks (OnAwake/OnStart/OnUpdate) kept with the same names.
public class EnterPhase2 : MonoBehaviour
{
    private Animator animator;
    private DealContactDamage dealContactDamage;

    // TODO(il2cpp): originally BehaviorDesigner.Runtime.SharedVariable<Material> (SharedMaterial);
    // the shared variable's current value is accessed directly here.
    public Material material;
    public float fadeInTime;
    private float fadeInTime2;
    private float fadeInAmount;
    private Rigidbody2D rb;
    private RangedSkills rangedSkills;
    private BossEffect bossEffect;
    public Poise poise;
    private Boss boss;

    public EnterPhase2()
    {
        fadeInAmount = 1f;
        fadeInTime = 1f;
    }

    public void OnAwake()
    {
        animator = GetComponent<Animator>();
        dealContactDamage = GetComponent<DealContactDamage>();
        rb = GetComponent<Rigidbody2D>();
        rangedSkills = GetComponent<RangedSkills>();
        bossEffect = GetComponent<BossEffect>();
        poise = GetComponent<Poise>();
        boss = GetComponent<Boss>();
    }

    public void OnStart()
    {
        gameObject.layer = LayerMask.NameToLayer("Boss");
        poise.currentPoise = poise.maxPoise;
        rangedSkills.ammo = rangedSkills.ammoPhase2;
        animator.SetTrigger(Settings.Idle2);
        fadeInTime2 = fadeInTime;
        dealContactDamage.isRemoved = true;
        rb.constraints = (RigidbodyConstraints2D)4; // FreezeRotation
        bossEffect.isPhase2 = true;
        boss.isPhaseTwo = true;
    }

    public void OnUpdate()
    {
        if (fadeInTime > 0f)
        {
            fadeInAmount -= Time.deltaTime / fadeInTime2;
            material.SetFloat("_FadeAmount", fadeInAmount);
            fadeInTime -= Time.deltaTime;
            return; // TODO(il2cpp): returned TaskStatus.Running
        }
        gameObject.layer = LayerMask.NameToLayer("Boss");
        // TODO(il2cpp): returned TaskStatus.Success
    }
}
