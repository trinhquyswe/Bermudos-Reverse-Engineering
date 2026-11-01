using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class ItemDropper : MonoBehaviour
{
    [SerializeField]
    private List<ItemSO> itemSOList;

    private DestroyedEvent destroyedEvent;

    private void Awake()
    {
        destroyedEvent = GetComponent<DestroyedEvent>();
    }

    private void OnEnable()
    {
        destroyedEvent.OnDestroyed += DestroyedEvent_OnDestroyed;
    }

    private void OnDisable()
    {
        destroyedEvent.OnDestroyed -= DestroyedEvent_OnDestroyed;
    }

    private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
    {
        if (destroyedEventArgs.playerDied == false)
        {
            DropItemOnDeath();
        }
    }

    private void DropItemOnDeath()
    {
        int index = Random.Range(0, itemSOList.Count);
        ItemSO item = itemSOList[index];

        int roll = Random.Range(0, 100);
        if (roll < item.dropRate)
        {
            Vector3 position = transform.position;
            Quaternion rotation = Quaternion.identity;
            // TODO(il2cpp): spawn call (unnamed_function_86418, prefab + position + rotation) is unresolved.
            // Instantiate is assumed; the original may use a pooled spawn instead.
            GameObject spawned = Instantiate(item.itemPrefabs, position, rotation);
            spawned.GetComponent<Item>().itemSO = item;
        }
    }
}
