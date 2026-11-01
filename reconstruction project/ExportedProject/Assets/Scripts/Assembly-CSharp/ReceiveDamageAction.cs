using UnityEngine;

// Originally a BehaviorDesigner Action task; re-exposed as a MonoBehaviour with the same callback names.
public class ReceiveDamageAction : MonoBehaviour
{
    private Animator animator;
    private RangedSkills rangedSkills;
    private MeleeSkills meleeSkills;
    private bool isFirstUpdate;
    // TODO(il2cpp): originally SharedFloat (BehaviorDesigner SharedVariable<float>); value used directly.
    public float stunTime;
    private Poise poise;

    public void OnAwake()
    {
        poise = GetComponent<Poise>();
        animator = GetComponent<Animator>();
        rangedSkills = GetComponent<RangedSkills>();
        meleeSkills = GetComponent<MeleeSkills>();
    }

    public void OnStart()
    {
        rangedSkills.StopAllCoroutines();
        meleeSkills.StopAllCoroutines();
        isFirstUpdate = true;
        stunTime = poise.stunTime;
    }

    public void OnUpdate()
    {
        if (poise.currentPoise <= 0f && stunTime > 0f)
        {
            stunTime -= Time.deltaTime;
        }

        if (!isFirstUpdate)
        {
            animator.GetCurrentAnimatorStateInfo(0);
        }
        else
        {
            isFirstUpdate = false;
        }
        // TODO(il2cpp): returned BehaviorDesigner TaskStatus not recovered from pseudo output.
    }
}
