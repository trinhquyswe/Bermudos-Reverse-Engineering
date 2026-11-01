// NOTE: the original base class is BehaviorDesigner.Runtime.Tasks.Action (task-based, TaskStatus returns).
// Re-exposed as a MonoBehaviour keeping the exact serialized field names. BehaviorDesigner is not in this project,
// so TaskStatus returns are marked TODO(il2cpp).
using UnityEngine;

public class Spinny : MonoBehaviour
{
    private Animator animator;
    private Vector2 direction;
    private Weapon weapon;
    private DealContactDamage dealContactDamage;
    private Rigidbody2D rb;
    [SerializeField]
    private float speed;
    [SerializeField]
    private int damage;
    private bool isColliding;
    private MeleeSkills meleeSkills;
    private BoxCollider2D boxCollider2D;
    [SerializeField]
    private SoundEffectSO spinnySoundEffect;
    [SerializeField]
    private float spinnyTime;

    public Spinny()
    {
        spinnyTime = 5f;
        speed = 5f;
        damage = 10;
    }

    public void OnAwake()
    {
        animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
        meleeSkills = GetComponent<MeleeSkills>();
        weapon = GetComponent<Weapon>();
        dealContactDamage = GetComponent<DealContactDamage>();
        boxCollider2D = GetComponent<BoxCollider2D>();
    }

    public void OnStart()
    {
        rb.drag = 0f;

        // TODO(il2cpp): original called Physics2D.IgnoreCollision(boxCollider2D, <player collider>, ...). The collider
        // component type was not resolved, so this call is not reproduced.

        transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
        dealContactDamage.isRemoved = false;
        isColliding = false;
        animator.SetTrigger(Settings.spinny2);

        Vector3 toPlayer = GameManager.Instance.player.transform.position - transform.position;
        float length = toPlayer.magnitude;
        if (length > 1e-5f)
        {
            direction = new Vector2(toPlayer.x, toPlayer.y) / length;
        }
        else
        {
            // TODO(il2cpp): fallback direction came from an unresolved Vector2 static; using zero.
            direction = Vector2.zero;
        }

        dealContactDamage.contactDamageAmount = damage;
        SoundEffectManager.Instance.PlaySoundEffectPersistent(spinnySoundEffect, true);
        spinnyTime = 5f;
    }

    public void OnFixedUpdate()
    {
        rb.velocity = direction * speed;
    }

    public void OnUpdate()
    {
        // TODO(il2cpp): original returned a BehaviorDesigner TaskStatus; the returned status is not reproduced.
        if (!isColliding && spinnyTime >= 0f)
        {
            spinnyTime -= Time.deltaTime;
        }
    }

    public void OnLateUpdate()
    {
        weapon.GetWeaponCollider();
    }

    public void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.layer == LayerMask.NameToLayer("Collision"))
        {
            isColliding = true;
        }
    }

    public void OnEnd()
    {
        SoundEffectManager.Instance.StopSoundEffectLoop(spinnySoundEffect);
        rb.drag = 100000f;

        // TODO(il2cpp): original called Physics2D.IgnoreCollision(boxCollider2D, <player collider>, false); not reproduced (see OnStart).

        rb.velocity = Vector2.zero;
        dealContactDamage.isRemoved = true;
        transform.localScale = new Vector3(3f, 3f, 3f);
    }
}
