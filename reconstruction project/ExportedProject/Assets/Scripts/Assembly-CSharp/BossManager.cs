using DG.Tweening;
using UnityEngine;

public class BossManager : MonoBehaviour
{
    [SerializeField]
    private RectTransform backgroundrectTransform;
    [SerializeField]
    private GameObject bossUI;
    [SerializeField]
    private GameObject boss;
    [SerializeField]
    private GameObject bossContainer;
    [SerializeField]
    private GameObject bossHealthBar;

    private void Start()
    {
        if (!PlayerPrefs.HasKey("isBossDefeated") || PlayerPrefs.GetInt("isBossDefeated", 0) != 1)
        {
            backgroundrectTransform.DOSizeDelta(new Vector2(2200f, 600f), 1f).SetEase(Ease.OutBack).OnComplete(() =>
            {
                bossUI.transform.DOLocalMove(new Vector3(50f, -11f, 0f), 1f).SetEase(Ease.OutBack).OnComplete(() =>
                {
                    backgroundrectTransform.DOSizeDelta(new Vector2(2200f, 2000f), 1f).SetEase(Ease.InBack);
                    bossUI.transform.DOLocalMove(new Vector3(1824f, -387f, 0f), 1f).SetEase(Ease.InBack).OnComplete(() =>
                    {
                        SpawnBoss();
                        gameObject.SetActive(false);
                    });
                });
            });
        }
        else
        {
            bossHealthBar.SetActive(false);
            GameManager gm = GameManager.Instance;
            gm.gameState = GameState.Play;
            // TODO(il2cpp): player Rigidbody2D setter with 0.5f not recovered
            gm.OnGameStateChange?.Invoke(GameState.Play);
            gameObject.SetActive(false);
        }
    }

    private void SpawnBoss()
    {
        Instantiate(boss, new Vector3(14f, 15f, 0f), Quaternion.identity, bossContainer.transform);
    }

    private int GetBossState()
    {
        // TODO(il2cpp): return path approximate; decompile lost the return value
        if (PlayerPrefs.HasKey("isBossDefeated"))
        {
            return PlayerPrefs.GetInt("isBossDefeated", 0);
        }
        return 0;
    }

    private void OnDestroy()
    {
        DOTween.Kill(backgroundrectTransform);
    }
}
