using System.Collections.Generic;
using UnityEngine;

public class EnemyManagerDetailsSO : ScriptableObject
{
    public GameObject enemyPrefab;
    public string enemyName;
    public List<Vector2> enemyPostionList;
    public string enemyManagerDataKey;
}
