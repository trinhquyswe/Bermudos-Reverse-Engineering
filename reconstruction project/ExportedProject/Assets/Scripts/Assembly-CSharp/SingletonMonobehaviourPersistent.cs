using UnityEngine;

// Approx: base class source absent from the folder; reconstructed from SoundEffectManager usage (Instance, Awake override).
public class SingletonMonobehaviourPersistent<T> : MonoBehaviour where T : MonoBehaviour
{
    private static T instance;

    public static T Instance => instance;

    protected virtual void Awake()
    {
        if (instance != null && instance != (this as T))
        {
            Destroy(gameObject);
            return;
        }

        instance = this as T;
        DontDestroyOnLoad(gameObject);
    }
}
