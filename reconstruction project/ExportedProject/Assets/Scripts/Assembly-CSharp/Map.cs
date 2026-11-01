using System.Collections.Generic;
using UnityEngine;

public class Map : MonoBehaviour
{
    [SerializeField]
    private string mapName;
    private float repeatInterval = 10f;
    [SerializeField]
    private List<Enviroment> enviroments;

    private void Start()
    {
        StaticEventHandler.CallMapChangedEvent(this);

        // TODO(il2cpp): try/catch wrapper around the loop not recovered
        foreach (Enviroment enviroment in enviroments)
        {
            if (enviroment == Enviroment.Water)
            {
                InvokeRepeating("PlayFlowingWaterSoundEffect", 0f, repeatInterval);
            }
            else if (enviroment == Enviroment.Sea)
            {
                SoundEffectManager.Instance.PlaySoundEffectPersistent(GameResources.Instance.waweOceanEffect, true);
            }
        }
    }

    private void OnDisable()
    {
        CancelInvoke("PlayFlowingWaterSoundEffect");
        SoundEffectManager.Instance.StopSoundEffectLoop(GameResources.Instance.waweOceanEffect);
    }

    private void PlayFlowingWaterSoundEffect()
    {
        SoundEffectManager.Instance.PlaySoundEffect(GameResources.Instance.flowingWater);
    }

    public int GetBossState()
    {
        // TODO(il2cpp): return path approximate; decompile lost the return value
        if (PlayerPrefs.HasKey("isBossDefeated"))
        {
            return PlayerPrefs.GetInt("isBossDefeated", 0);
        }
        return 0;
    }
}
