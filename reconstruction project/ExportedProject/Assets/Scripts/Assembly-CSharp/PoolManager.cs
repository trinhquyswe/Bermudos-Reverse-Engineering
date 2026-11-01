using System;
using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class PoolManager : SingletonMonobehaviourPersistent<PoolManager>
{
    [Serializable]
    public struct Pool
    {
        public int poolSize;
        public GameObject prefab;
        public string componentType;
    }

    [SerializeField]
    [Tooltip("Populate this array with prefabs that you want to add to the pool, and specify the number of gameobjects to be created for each.")]
    private PoolManager.Pool[] poolArray;
    private Transform objectPoolTransform;
    private Dictionary<int, Queue<Component>> poolDictionary;

    protected override void Awake()
    {
        base.Awake();
        objectPoolTransform = gameObject.transform;
        foreach (PoolManager.Pool pool in poolArray)
        {
            CreatePool(pool.prefab, pool.poolSize, pool.componentType);
        }
    }

    private void CreatePool(GameObject prefab, int poolSize, string componentType)
    {
        int key = prefab.GetInstanceID();
        GameObject anchor = new GameObject(prefab.name + " Anchor");
        anchor.transform.SetParent(objectPoolTransform);
        if (poolDictionary.ContainsKey(key))
        {
            return;
        }

        poolDictionary.Add(key, new Queue<Component>());
        // TODO(il2cpp): pseudo resolves componentType through a 3-arg helper; Type.GetType(string) is an assumed match.
        Type type = Type.GetType(componentType);
        for (int i = 0; i < poolSize; i++)
        {
            GameObject instance = Instantiate(prefab, anchor.transform);
            instance.SetActive(false);
            poolDictionary[key].Enqueue(instance.GetComponent(type));
        }
    }

    public Component ReuseComponent(GameObject prefab, Vector3 position, Quaternion rotation)
    {
        int poolKey = prefab.GetInstanceID();
        if (!poolDictionary.ContainsKey(poolKey))
        {
            // TODO(il2cpp): the null-prefab branch of the log message is approximated.
            Debug.Log("No object pool for " + prefab);
            return null;
        }

        Component reused = GetComponentFromPool(poolKey);
        ResetObject(position, rotation, reused, prefab);
        return reused;
    }

    private Component GetComponentFromPool(int poolKey)
    {
        Queue<Component> queue = poolDictionary[poolKey];
        Component component = queue.Dequeue();
        queue.Enqueue(component);
        if (component.gameObject.activeSelf)
        {
            component.gameObject.SetActive(false);
        }
        return component;
    }

    private void ResetObject(Vector3 position, Quaternion rotation, Component componentToReuse, GameObject prefab)
    {
        componentToReuse.transform.position = position;
        componentToReuse.transform.rotation = rotation;
        componentToReuse.transform.localScale = prefab.transform.localScale;
    }

    public PoolManager()
    {
        poolDictionary = new Dictionary<int, Queue<Component>>();
        // TODO(il2cpp): trailing AmmoAnimation ctor call in the pseudo is a mis-decoded base-ctor chain; omitted.
    }
}
