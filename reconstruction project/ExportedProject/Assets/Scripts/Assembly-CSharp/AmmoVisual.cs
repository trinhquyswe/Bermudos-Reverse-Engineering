using UnityEngine;

public class AmmoVisual : MonoBehaviour
{
    private Ammo ammo;
    private Vector2 target;

    private void Awake()
    {
        ammo = GetComponent<Ammo>();
    }

    private void Start()
    {
    }

    private void Update()
    {
        UpdateAmmoRotation();
    }

    private void UpdateAmmoRotation()
    {
        Vector2 direction = ammo.GetAmmoMoveDirection();

        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

        ammo.transform.rotation = Quaternion.Euler(0f, 0f, angle);
    }

    public void SetTarget(Vector2 target)
    {
        this.target = target;
    }
}
