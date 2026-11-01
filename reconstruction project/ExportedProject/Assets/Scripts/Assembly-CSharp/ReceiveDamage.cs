using UnityEngine;

public class ReceiveDamage : MonoBehaviour
{
    [SerializeField]
    [Header("The damage amount to receive")]
    private int damageAmount;
    private Health health;
    public bool isNotReceivingDamage;

    private void Awake()
    {
        health = GetComponent<Health>();
    }

    public void TakeDamage(int damageAmount = 0)
    {
        if (isNotReceivingDamage)
        {
            return;
        }

        if (this.damageAmount > 0)
        {
            damageAmount = this.damageAmount;
        }
        health.TakeDamage(damageAmount);
    }
}
