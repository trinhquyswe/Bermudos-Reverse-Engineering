using UnityEngine;

public class DealContactDamage : MonoBehaviour
{
    public int contactDamageAmount;

    private PoiseEvent poiseEvent;
    private LayerMask playerlayerMask;
    private bool isColliding;
    private float stunTime;
    public bool isRemoved; // TODO(il2cpp): no writer recovered; removal path not verified.

    private void Awake()
    {
        poiseEvent = GetComponent<PoiseEvent>();
    }

    private void OnEnable()
    {
        poiseEvent.OnPoise += PoiseEvent_OnPoise;
    }

    private void OnDisable()
    {
        poiseEvent.OnPoise -= PoiseEvent_OnPoise;
    }

    private void Start()
    {
        playerlayerMask = LayerMask.GetMask("Player");
    }

    private void Update()
    {
        if (stunTime > 0f)
        {
            stunTime -= Time.deltaTime;
        }
    }

    private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs args)
    {
        if (args.currentPoise <= 0f)
        {
            stunTime = args.stunTime;
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        HandleContact(collision);
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        HandleContact(collision);
    }

    private void HandleContact(Collider2D collision)
    {
        if (!isRemoved && !isColliding && stunTime <= 0f && ((1 << collision.gameObject.layer) & playerlayerMask.value) != 0)
        {
            ContactDamage(collision);
            // TODO(il2cpp): damage flash effect call not recovered.
        }
    }

    private void ContactDamage(Collider2D collision)
    {
        ReceiveContactDamage receiveContactDamage = collision.GetComponent<ReceiveContactDamage>();
        if (receiveContactDamage != null)
        {
            isColliding = true;
            Invoke(nameof(ResetContactCollision), 0.5f);
            receiveContactDamage.TakeContactDamage(contactDamageAmount);
        }
    }

    private void ResetContactCollision()
    {
        isColliding = false;
    }
}
