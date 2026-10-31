// Assembly-CSharp :: GameResources
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
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
	public static GameResources get_Instance() { }

	// RVA: 0x380A Offset: 0x380A VA: 0x380A
	public void .ctor() { }
}

===== C# end =====
*/

// ---- GameResources$$get_Instance ----
// C#: GameResources_o* GameResources__get_Instance (const MethodInfo* method);

GameResources_o * GameResources__get_Instance(MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_ram_00664b29 == '\0') {
    unnamed_function_1099(&GameResources_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056bfa8);
    unnamed_function_1099(&StringLiteral_4037 /* "GameResources" */);
    DAT_ram_00664b29 = '\x01';
  }
  uVar2 = **(undefined4 **)(GameResources_TypeInfo + 0x5c);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 != 0) {
    uVar2 = unnamed_function_60803(StringLiteral_4037 /* "GameResources" */,DAT_ram_0056bfa8);
    **(undefined4 **)(GameResources_TypeInfo + 0x5c) = uVar2;
  }
  return (GameResources_o *)**(undefined4 **)(GameResources_TypeInfo + 0x5c);
}

// ---- GameResources$$.ctor ----
// C#: void GameResources___ctor (GameResources_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

