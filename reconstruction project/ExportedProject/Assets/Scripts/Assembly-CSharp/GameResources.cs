using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.Tilemaps;

[DisallowMultipleComponent]
public class GameResources : MonoBehaviour
{
    private static GameResources instance;

    [Header("SPECIAL TILEMAP TILES")]
    [Tooltip("Collision tiles that the enemies can navigate to")]
    [Space(10)]
    public TileBase[] enemyUnwalkableCollisionTilesArray;
    [Tooltip("Preferred path tile for enemy navigation")]
    public TileBase preferredEnemyPathTile;
    [Tooltip("Sprite-Lit-Default Material")]
    [Header("MATERIALS")]
    [Space(10)]
    public Material damegeFlashMaterial;
    [Tooltip("Sprite-Lit-Default Material")]
    public Material litMaterial;
    [Tooltip("Ammo Hit Effect Prefab")]
    public GameObject ammoHitEffectPrefab;
    [Tooltip("Blood Effect Prefab")]
    public GameObject bloodEffectPrefab;
    [Tooltip("Player Shadow Prefab")]
    public GameObject playerShadowPrefab;
    [Tooltip("Begin UI Material")]
    public Material beginUI;
    [Tooltip("Boss Material")]
    public Material boss;
    public AudioMixerGroup soundsMasterMixerGroup;
    public AudioMixerGroup musicMasterMixerGroup;
    public AudioMixerSnapshot musicLowSnapshot;
    public AudioMixerSnapshot musicOnFullSnapshot;
    public AudioMixerSnapshot musicOffSnapshot;
    public MusicTrackSO musicTrack1;
    public MusicTrackSO musicTrack2;
    public MusicTrackSO musicTrack_Bossfight;
    public SoundEffectSO rain;
    public SoundEffectSO getHurtEnemy;
    public SoundEffectSO getHurtPlayer;
    public SoundEffectSO clickButton;
    public SoundEffectSO flowingWater;
    public SoundEffectSO waweOceanEffect;

    public static GameResources Instance
    {
        get
        {
            if (instance == null)
            {
                instance = Resources.Load<GameResources>("GameResources");
            }
            return instance;
        }
    }
}
