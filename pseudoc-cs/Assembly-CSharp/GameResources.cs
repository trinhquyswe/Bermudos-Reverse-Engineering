// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/GameResources.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(a)(args)                  virtual call through vtable slot a
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class GameResources : MonoBehaviour // TypeDefIndex: 5613
{
    // Fields
    private static GameResources instance; // 0x0
    [Header("SPECIAL TILEMAP TILES")]
    [Tooltip("Collision tiles that the enemies can navigate to")]
    [Space(10)]
    public TileBase[] enemyUnwalkableCollisionTilesArray; // 0x10
    [Tooltip("Preferred path tile for enemy navigation")]
    public TileBase preferredEnemyPathTile; // 0x14
    [Tooltip("Sprite-Lit-Default Material")]
    [Header("MATERIALS")]
    [Space(10)]
    public Material damegeFlashMaterial; // 0x18
    [Tooltip("Sprite-Lit-Default Material")]
    public Material litMaterial; // 0x1C
    [Tooltip("Ammo Hit Effect Prefab")]
    public GameObject ammoHitEffectPrefab; // 0x20
    [Tooltip("Blood Effect Prefab")]
    public GameObject bloodEffectPrefab; // 0x24
    [Tooltip("Player Shadow Prefab")]
    public GameObject playerShadowPrefab; // 0x28
    [Tooltip("Begin UI Material")]
    public Material beginUI; // 0x2C
    [Tooltip("Boss Material")]
    public Material boss; // 0x30
    public AudioMixerGroup soundsMasterMixerGroup; // 0x34
    public AudioMixerGroup musicMasterMixerGroup; // 0x38
    public AudioMixerSnapshot musicLowSnapshot; // 0x3C
    public AudioMixerSnapshot musicOnFullSnapshot; // 0x40
    public AudioMixerSnapshot musicOffSnapshot; // 0x44
    public MusicTrackSO musicTrack1; // 0x48
    public MusicTrackSO musicTrack2; // 0x4C
    public MusicTrackSO musicTrack_Bossfight; // 0x50
    public SoundEffectSO rain; // 0x54
    public SoundEffectSO getHurtEnemy; // 0x58
    public SoundEffectSO getHurtPlayer; // 0x5C
    public SoundEffectSO clickButton; // 0x60
    public SoundEffectSO flowingWater; // 0x64
    public SoundEffectSO waweOceanEffect; // 0x68

    // Properties
    public static GameResources Instance { get; }

    // Methods

    // RVA: 0x3662 Offset: 0x3662 VA: 0x3662
    public static GameResources get_Instance()
    {
        int iVar1 = default;
        int uVar2 = default;

        uVar2 = Raw.Deref(Raw.Read<object>(GameResources_TypeInfo + 0x5c));
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            uVar2 = UnityEngine.Resources.Load<object>("GameResources",DAT_ram_0056bfa8);
            GameResources.instance = uVar2;
        }
        return (GameResources)Raw.Deref(Raw.Read<object>(GameResources_TypeInfo + 0x5c));
    }

    // RVA: 0x380A Offset: 0x380A VA: 0x380A
    public GameResources()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
