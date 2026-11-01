using System.Collections;
using Esper.ESave;
using UnityEngine;

public class Destroyed : MonoBehaviour
{
    private DestroyedEvent destroyedEvent;
    private Player player;
    private DieEvent dieEvent;

    private void Awake()
    {
        destroyedEvent = GetComponent<DestroyedEvent>();
        player = GetComponent<Player>();
        dieEvent = GetComponent<DieEvent>();
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
        if (destroyedEventArgs.playerDied)
        {
            StartCoroutine(Die());
            return;
        }
        if (!destroyedEventArgs.bossDied)
        {
            MarkEnemyAsDead();
            Destroy(gameObject);
        }
    }

    private IEnumerator Die()
    {
        // TODO(il2cpp): coroutine body not recoverable from decompile
        yield break;
    }

    private void MarkEnemyAsDead()
    {
        Enemy enemy = GetComponent<Enemy>();
        EnemyManagerDetailsSO[] detailsList = GameManager.Instance.enemyManagerDetailsSO;
        for (int i = 0; i < detailsList.Length; i++)
        {
            EnemyManagerDetailsSO details = detailsList[i];
            if (string.Equals(enemy.mapKey, details.enemyManagerDataKey))
            {
                SaveFile saveFile = GameManager.Instance.saveFileSetup.GetSaveFile();
                if (saveFile.HasData(details.enemyManagerDataKey))
                {
                    EnemyManagerData data = saveFile.GetData<EnemyManagerData>(details.enemyManagerDataKey, default(EnemyManagerData));
                    data.enemieStateList[enemy.enemyID] = false; // approximated from decompile (literal 0)
                    saveFile.AddOrUpdateData(details.enemyManagerDataKey, data);
                    saveFile.Save();
                    Debug.Log("Enemy Marked as dead" + enemy.enemyID);
                }
            }
        }
    }
}
