using UnityEngine;

// approx: Awake body not recovered from dump; only signature is confirmed
public abstract class SingletonMonobehaviour<T> : MonoBehaviour where T : MonoBehaviour
{
    private static T instance;

    public static T Instance
    {
        get { return instance; }
    }

    protected virtual void Awake()
    {
        // TODO(il2cpp): confirm instance assignment and duplicate handling in Awake
        instance = this as T;
    }
}
