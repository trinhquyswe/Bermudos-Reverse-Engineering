using System.Collections;
using UnityEngine;

// NOTE: the original base class is BehaviorDesigner.Runtime.Tasks.Action (Behavior Designer),
// which is not part of the exported project. Re-exposed as a MonoBehaviour keeping the exact
// serialized field names; task callbacks (OnAwake/OnStart/OnUpdate) kept with the same names.
public class EndPhase1 : MonoBehaviour
{
    private Animator animator;
    // TODO(il2cpp): originally BehaviorDesigner.Runtime.SharedVariable<Material> (SharedMaterial).
    public Material material;
    public float transitionTime;
    private float fadeAmount;
    private float transitionTime2;
    private RangedSkills rangedSkills;
    private MeleeSkills meleeSkills;
    private bool isEyeLoopDeath;
    [SerializeField]
    private SoundEffectSO transitionSoundEffect;

    public EndPhase1()
    {
        transitionTime = 1f;
    }

    public void OnAwake()
    {
        animator = GetComponent<Animator>();
        rangedSkills = GetComponent<RangedSkills>();
        meleeSkills = GetComponent<MeleeSkills>();
    }

    public void OnStart()
    {
        SoundEffectManager.Instance.PlaySoundEffect(transitionSoundEffect);
        rangedSkills.StopAllCoroutines();
        meleeSkills.StopAllCoroutines();
        transitionTime2 = transitionTime;
        StartCoroutine(EndPhase1Coroutine());
        gameObject.layer = LayerMask.NameToLayer("Default");
    }

    public void OnUpdate()
    {
        if (transitionTime > 0f)
        {
            if (isEyeLoopDeath)
            {
                fadeAmount += Time.deltaTime / transitionTime2;
                transitionTime -= Time.deltaTime;
                material.SetFloat("_FadeAmount", fadeAmount);
            }
            return; // TODO(il2cpp): returned TaskStatus.Running
        }
        // TODO(il2cpp): returned TaskStatus.Success
    }

    public IEnumerator EndPhase1Coroutine()
    {
        // TODO(il2cpp): coroutine body (EndPhase1.<EndPhase1Coroutine>d__12.MoveNext) is not in the dump or the pseudo output.
        yield break;
    }
}
