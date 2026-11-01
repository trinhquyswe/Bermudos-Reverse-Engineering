using UnityEngine;

// The original base class is BehaviorDesigner.Runtime.Tasks.Action, which is not part of the exported project.
public class FireEyeAttackLoop : MonoBehaviour
{
    private RangedSkills rangedSkills;
    [Header("EYE LOOP")]
    public float eyeLoopRate;
    public float eyeLoopDuration;

    public void OnAwake()
    {
        rangedSkills = GetComponent<RangedSkills>();
    }

    public void OnUpdate()
    {
        rangedSkills.StartEyeLoop(eyeLoopDuration, eyeLoopRate);
    }
}
