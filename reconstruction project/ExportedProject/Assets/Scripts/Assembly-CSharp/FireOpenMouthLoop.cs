using UnityEngine;

// The original base class is BehaviorDesigner.Runtime.Tasks.Action, which is not part of the exported project.
public class FireOpenMouthLoop : MonoBehaviour
{
    private RangedSkills rangedSkills;
    public float mouthOpenLoopRate;
    public float mouthOpenLoopDuration;

    public void OnAwake()
    {
        rangedSkills = GetComponent<RangedSkills>();
    }

    public void OnUpdate()
    {
        rangedSkills.StartMouthOpenLoopMouth(mouthOpenLoopRate, mouthOpenLoopDuration);
    }
}
