using UnityEngine;

public class AmmoDetailsSO : ScriptableObject
{
    public float maxSpeed;
    public int damage;
    public float trajectoryMaxHeight;
    public AnimationClip enemyAmmoType;
    public Color ammoEffectType;
    public GameObject ammoPrefab;
    public AnimationCurve trajectoryAnimationCurve;
    public AnimationCurve axisCorrectionAnimationCurve;
    public AnimationCurve ammoSpeedAnimationCurve;
}
