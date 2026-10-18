// GameResources.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in GameResources.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class GameResources : MonoBehaviour
{
	// Fields
	private static GameResources instance; // 0x0
	public TileBase[] enemyUnwalkableCollisionTilesArray; // 0x10
	public TileBase preferredEnemyPathTile; // 0x14
	public Material damegeFlashMaterial; // 0x18
	public Material litMaterial; // 0x1C
	public GameObject ammoHitEffectPrefab; // 0x20
	public GameObject bloodEffectPrefab; // 0x24
	public GameObject playerShadowPrefab; // 0x28
	public Material beginUI; // 0x2C
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
	public static GameResources Instance
	{
		get
		{
			int param_1 = 0; // IL2CPP hidden slot
			int param_2 = 0; // IL2CPP hidden slot
			uint param_3 = 0; // IL2CPP hidden slot
				int *piVar1;
				int iVar2;
				uint uVar3;
				uint uVar4;
				int *piVar5;
				int iVar6;
				uint uVar7;
				ulong uStack_30;
				ulong uStack_28;
				ulong uStack_20;
				uint uStack_18;
				ulong uStack_10;
				uint uStack_8;

				if (cRam006649a0 == '\0') {
					unnamed_function_1099(0x563b3c);
					unnamed_function_1099(0x565d64);
					unnamed_function_1099(0x55c78c);
					cRam006649a0 = '\x01';
				}
				iVar2 = *(int *)(iRam00565d64 + 0x10);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				uVar3 = *(uint *)(param_2 + 0x10);
				uVar4 = **(uint **)(iVar2 + 0x5c);
				if (cRam00664829 == '\0') {
					unnamed_function_1099(0x55d048);
					cRam00664829 = '\x01';
				}
				uStack_8 = *(uint *)(*(ulong **)(iRam0055d048 + 0x5c) + 1);
				uStack_10 = **(ulong **)(iRam0055d048 + 0x5c);
				if (cRam006603e8 == '\0') {
					unnamed_function_1099(0x55c148);
					cRam006603e8 = '\x01';
				}
				uStack_18 = uStack_8;
				uStack_20 = uStack_10;
				uStack_28 = (*(ulong **)(iRam0055c148 + 0x5c))[1];
				uStack_30 = **(ulong **)(iRam0055c148 + 0x5c);
				piVar1 = (int *)PoolManager.CreatePool(uVar4,uVar3,&uStack_20,&uStack_30,&uStack_30);
				if (piVar1 != (int *)0x0) {
					if (((uint)*(byte *)(*piVar1 + 0xb8) < (uint)*(byte *)(iRam0055c78c + 0xb8)) ||
						 (*(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iRam0055c78c + 0xb8) * 4 + -4) !=
							iRam0055c78c)) {
						unnamed_function_1116(piVar1,iRam0055c78c);
						do {
							halt_trap();
						} while( true );
					}
				}
				piVar5 = piVar1 + 4;
				UnityEngine.AudioSource.get_volume(*piVar5,*(uint *)(param_2 + 0x18),0);
				UnityEngine.AudioSource.get_clip(*piVar5,*(uint *)(param_2 + 0x14),0);
				UnityEngine.AudioSource.GetPitch(*piVar5,*(uint *)(param_2 + 0x1c),0);
				piVar1[5] = param_2;
				UnityEngine.AudioSource.get_loop(*piVar5,param_3,0);
				uVar3 = unnamed_function_44644(piVar1,0);
				unnamed_function_44686(uVar3,1,0);
				iVar2 = iRam00563b3c;
				iVar6 = *(int *)(param_1 + 0x14);
				*(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
				uVar7 = *(uint *)(iVar6 + 0xc);
				if (uVar7 < *(uint *)(*(int *)(iVar6 + 8) + 0xc)) {
					*(uint *)(iVar6 + 0xc) = uVar7 + 1;
					*(int **)(*(int *)(iVar6 + 8) + uVar7 * 4 + 0x10) = piVar1;
				}
				else {
					System.String.Substring
										(iVar6,piVar1,*(uint *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
				}
				return;
		}
	}

	// Methods

	// wasm func87138 -> ram:81a543c4  [GameResources::.ctor]
	public GameResources()
	{
			uint uVar1;

			if (cRam00664b2a == '\0') {
				unnamed_function_1099(0x557a2c);
				unnamed_function_1099(0x567898);
				cRam00664b2a = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a2c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam00567898,0);
			StaticEventHandler.CallPlayerChangedEvent(uVar1,0);
			return;
	}
}

