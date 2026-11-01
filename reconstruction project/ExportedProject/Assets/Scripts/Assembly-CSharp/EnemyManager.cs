using System.Collections.Generic;
using UnityEngine;

public class EnemyManager : MonoBehaviour
{
    [SerializeField] private GameObject enemy;
    [SerializeField] private EnemyManagerDetailsSO enemyManagerDetailsSO;
    [SerializeField] private EnemyManagerData enemyManagerData;

    private List<GameObject> enemyList = new List<GameObject>();

    private void Start()
    {
        // TODO(il2cpp): save-load of enemyManagerData not recovered.
    }

    private void OnEnable()
    {
        // TODO(il2cpp): StaticEventHandler is still a dummy; event name and args type assumed.
        StaticEventHandler.OnBuildNavMesh += StaticEventHandler_OnBuildNavMesh;
    }

    private void OnDisable()
    {
        StaticEventHandler.OnBuildNavMesh -= StaticEventHandler_OnBuildNavMesh;
    }

    private void StaticEventHandler_OnBuildNavMesh(BuildNavMeshEventArgs args)
    {
        if (args.isBuildWhenMapChanged)
        {
            for (int i = 0; i < enemyManagerData.enemieStateList.Count; i++)
            {
                if (enemyManagerData.enemieStateList[i])
                {
                    GameObject spawned = Instantiate(enemy, enemyManagerDetailsSO.enemyPostionList[i], Quaternion.identity);
                    // TODO(il2cpp): per-enemy setup after Instantiate not recovered.
                    enemyList.Add(spawned);
                }
            }
        }
        else
        {
            foreach (GameObject spawned in enemyList)
            {
                if (spawned != null)
                {
                    Destroy(spawned);
                }
            }

            enemyList.Clear();
        }
    }
}
