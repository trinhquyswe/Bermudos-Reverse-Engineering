using UnityEngine;

public class AnimateBoss : MonoBehaviour
{
    private Boss boss;

    private void Awake()
    {
        boss = GetComponent<Boss>();
    }

    public void Update()
    {
        Vector3 direction = GameManager.Instance.player.transform.position - transform.position;

        SetAimDirection(direction);
    }

    public void InitializeAimDirection()
    {
        boss.animator.SetBool(Settings.aimUp, false);
        boss.animator.SetBool(Settings.aimDown, false);
        boss.animator.SetBool(Settings.aimLeft, false);
        boss.animator.SetBool(Settings.aimRight, false);
    }

    public AimDirection SetAimDirection(Vector3 direction)
    {
        float angle = HelperUtilities.GetAngleFromVector(direction);

        if (angle > 135f || angle <= -155f)
        {
            InitializeAimDirection();
            boss.animator.SetTrigger(Settings.aimLeft);
            return AimDirection.Left;
        }

        if (angle > 45f)
        {
            InitializeAimDirection();
            boss.animator.SetTrigger(Settings.aimUp);
            return AimDirection.Up;
        }

        if (angle > -45f)
        {
            InitializeAimDirection();
            boss.animator.SetTrigger(Settings.aimRight);
            return AimDirection.Right;
        }

        InitializeAimDirection();
        boss.animator.SetTrigger(Settings.aimDown);
        return AimDirection.Down;
    }
}
