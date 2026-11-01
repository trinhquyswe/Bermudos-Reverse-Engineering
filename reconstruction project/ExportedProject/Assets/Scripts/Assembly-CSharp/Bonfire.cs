using UnityEngine;

public class Bonfire : MonoBehaviour
{
    private LayerMask playerLayer;
    [SerializeField]
    private SpriteRenderer icon;
    [SerializeField]
    private SoundEffectSO restSoundEffect;

    private void Awake()
    {
        playerLayer = LayerMask.GetMask("Player");
        icon.gameObject.SetActive(false);
    }

    private void OnEnable()
    {
        // TODO(il2cpp): handler delegate target is not named in the pseudo; RestInBonfire assumed by elimination.
        StaticEventHandler.OnPressRestEvent += RestInBonfire;
    }

    private void OnDisable()
    {
        StaticEventHandler.OnPressRestEvent -= RestInBonfire;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if ((playerLayer.value & (1 << collision.gameObject.layer)) > 0)
        {
            icon.gameObject.SetActive(true);
        }
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        icon.gameObject.SetActive(false);
    }

    public void RestInBonfire()
    {
        if (icon.gameObject.activeSelf)
        {
            StaticEventHandler.CallRestInBonfireEvent();
            SaveCheckPointAtBonfire();
            SoundEffectManager.Instance.PlaySoundEffect(restSoundEffect);
        }
    }

    private void SaveCheckPointAtBonfire()
    {
        GameManager.Instance.saveFileSetup.GetSaveFile().AddOrUpdateData("Checkpoint", "The Forest");
        GameManager.Instance.saveFileSetup.GetSaveFile().Save();
        PlayerPrefs.SetString("Checkpoint", JsonUtility.ToJson("The Forest"));
        PlayerPrefs.Save();
    }
}
