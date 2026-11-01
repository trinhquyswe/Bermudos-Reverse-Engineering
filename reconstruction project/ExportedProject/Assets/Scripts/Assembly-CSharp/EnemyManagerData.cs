using System.Collections.Generic;

public class EnemyManagerData
{
    public string enemyName;
    public int enemyCount;
    public List<bool> enemieStateList;

    public EnemyManagerData(string enemyName, int enemyCount, int count)
    {
        enemieStateList = new List<bool>();
        this.enemyCount = enemyCount;
        this.enemyName = enemyName;
        GetEnemyList(count);
    }

    public void GetEnemyList(int count)
    {
        for (int i = 0; i < enemyCount; i++)
        {
            enemieStateList.Add(count != i);
        }
    }
}