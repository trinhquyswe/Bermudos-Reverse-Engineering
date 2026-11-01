using DG.Tweening;
using UnityEngine;

public class Item : MonoBehaviour
{
    private float timeToDestroy = 10f;
    private LayerMask playerLayerMark;
    public ItemSO itemSO;
    private float jumDuration = 0.5f;
    private int numJumps = 2;
    private float jumpPower = 1f;
    private float shakeDuration = 0.46f;
    private float shakeStrength = 0.5f;
    private int shakeVibrato = 3;
    private bool isColliding = true;
    [SerializeField]
    private SoundEffectSO dropItemSoundEffect;

    private void Start()
    {
        playerLayerMark = LayerMask.GetMask("Player");
        DropItemEffect();
    }

    private void Update()
    {
        if (timeToDestroy <= 0f)
        {
            Destroy(gameObject);
            return;
        }
        timeToDestroy -= Time.deltaTime;
    }

    private void OnDestroy()
    {
        DOTween.Kill(gameObject); // approximated from decompile
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if ((playerLayerMark.value & (1 << collision.gameObject.layer)) != 0 && isColliding)
        {
            SoundEffectManager.Instance.PlaySoundEffect(dropItemSoundEffect);
            InventoryManager inventoryManager = collision.GetComponent<InventoryManager>();
            if (inventoryManager != null)
            {
                inventoryManager.CollectIntentoryItem(itemSO);
            }
            Destroy(gameObject);
            isColliding = false;
        }
    }

    public void DropItemEffect()
    {
        Vector3 direction = transform.position - GameManager.Instance.player.transform.position;
        if (direction.magnitude > 1e-5f)
        {
            direction = direction.normalized;
        }
        else
        {
            direction = Vector3.zero; // TODO(il2cpp): fallback vector not recoverable from decompile
        }

        Vector3 target = transform.position + direction * 2f;
        transform.DOJump(target, jumpPower, numJumps, jumDuration).OnComplete(() =>
        {
            transform.DOShakePosition(shakeDuration, new Vector3(0f, shakeStrength, 0f), shakeVibrato, 0f, false, true).SetLoops(-1);
        });
    }
}
