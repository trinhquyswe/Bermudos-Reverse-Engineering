using UnityEngine;

public class DealDamage : MonoBehaviour
{
    [SerializeField] private LayerMask enemyLayer;

    public int damage = 10;

    private ContactFilter2D contactFilter2D;
    private Weapon weapon;
    private int attackCost = 10;
    private Collider2D[] overlapResults = new Collider2D[1]; // TODO(il2cpp): result buffer size approximated.

    private void Awake()
    {
        weapon = GetComponent<Weapon>();
        contactFilter2D = new ContactFilter2D();
        contactFilter2D.SetLayerMask(enemyLayer);
        contactFilter2D.useTriggers = false;
        contactFilter2D.useLayerMask = true;
    }

    private void OnEnable()
    {
        GameManager.Instance.player.dealDamageEvent.OnDealDamage += DealDamageEvent_OnDealDamage;
    }

    private void OnDisable()
    {
        GameManager.Instance.player.dealDamageEvent.OnDealDamage -= DealDamageEvent_OnDealDamage;
    }

    private void DealDamageEvent_OnDealDamage(DealDamageEvent dealDamageEvent, DealDamageEventAgrs args)
    {
        weapon.GetWeaponCollider();
        GameManager.Instance.player.stamina.UseStamina(attackCost);

        // TODO(il2cpp): the overlap origin collider is approximated as this object's own Collider2D.
        int count = GetComponent<Collider2D>().OverlapCollider(contactFilter2D, overlapResults);
        for (int i = 0; i < count; i++)
        {
            Collider2D hit = overlapResults[i];
            if (hit != null)
            {
                DealDamageHandle(hit);
            }
        }

        GameManager.Instance.player.rage.IncreaseRage(1f); // TODO(il2cpp): guard condition for rage gain not recovered.
    }

    private void DealDamageHandle(Collider2D collision)
    {
        Vector3 playerPosition = GameManager.Instance.player.transform.position;

        Enemy enemy = collision.GetComponent<Enemy>();
        if (enemy != null)
        {
            enemy.enemyEffect.PushEnemyByWeapon(playerPosition);
            collision.GetComponent<ReceiveDamage>().TakeDamage(damage);
            return;
        }

        Boss boss = collision.GetComponent<Boss>();
        if (boss != null)
        {
            boss.bossEffect.PushBossByWeapon(playerPosition);
            // TODO(il2cpp): boss damage application not recovered.
        }
    }
}
