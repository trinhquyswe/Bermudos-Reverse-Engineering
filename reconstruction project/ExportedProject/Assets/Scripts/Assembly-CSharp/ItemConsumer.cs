using System.Collections;
using UnityEngine;

// Approx: component lookups in Awake and the potion amounts/multiplier are not in the pseudo; flagged.
// TODO(il2cpp): Start, UsePotion name mapping and UseAttackPotionCoroutine body not recovered.
[DisallowMultipleComponent]
public class ItemConsumer : MonoBehaviour
{
    private InventoryManager inventoryManager;
    private DealDamage dealDamage;
    private Health health;
    private Rage rage;
    private Coroutine attackPotionCoroutine;
    private float attackPotionMultiplier;
    private int bigHealthPotionAmount;
    private int smallHealthPotionAmount;
    private int ragePotionAmount;
    private InventoryItem currentInventoryItem;
    [SerializeField]
    private SoundEffectSO useItemSoundEffect;
    private int normalDamage;

    private void Awake()
    {
        inventoryManager = GetComponent<InventoryManager>();
        dealDamage = GetComponent<DealDamage>();
        health = GetComponent<Health>();
        rage = GetComponent<Rage>();
    }

    private void OnEnable()
    {
        StaticEventHandler.OnHotBarScrollChanged += StaticEventHandler_OnHotBarScrollChanged;
    }

    private void OnDisable()
    {
        StaticEventHandler.OnHotBarScrollChanged -= StaticEventHandler_OnHotBarScrollChanged;
    }

    private void Start()
    {
    }

    private void StaticEventHandler_OnHotBarScrollChanged(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs)
    {
        currentInventoryItem = onInventoryItemChangedEventArgs.inventoryItem;
    }

    public void UseItemFromHotBar()
    {
        if (currentInventoryItem == null || currentInventoryItem.itemSO == null)
        {
            return;
        }

        UsePotion(currentInventoryItem.itemSO.itemName);
    }

    // TODO(il2cpp): potion-name-to-effect mapping not recovered (string literals unavailable).
    private void UsePotion(string potionName)
    {
    }

    private void UseAttackPotion()
    {
        if (attackPotionCoroutine != null)
        {
            return;
        }

        attackPotionCoroutine = StartCoroutine(UseAttackPotionCoroutine());
    }

    // TODO(il2cpp): coroutine body not recovered; attackPotionMultiplier and normalDamage are not applied here.
    private IEnumerator UseAttackPotionCoroutine()
    {
        yield break;
    }

    private void UseBigHealthPotion()
    {
        if (health == null)
        {
            return;
        }

        health.IncreaseHealth(bigHealthPotionAmount);
        SoundEffectManager.Instance.PlaySoundEffect(useItemSoundEffect);
    }

    public void UseSmallHealthPotion()
    {
        if (health == null)
        {
            return;
        }

        health.IncreaseHealth(smallHealthPotionAmount);
        SoundEffectManager.Instance.PlaySoundEffect(useItemSoundEffect);
    }

    public void UseRagePotion()
    {
        if (rage == null)
        {
            return;
        }

        rage.IncreaseRage(ragePotionAmount);
        SoundEffectManager.Instance.PlaySoundEffect(useItemSoundEffect);
    }
}
