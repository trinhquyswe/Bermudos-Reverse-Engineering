// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class GameResources : MonoBehaviour
{
	// Fields
	private static GameResources instance;
	public TileBase[] enemyUnwalkableCollisionTilesArray;
	public TileBase preferredEnemyPathTile;
	public Material damegeFlashMaterial;
	public Material litMaterial;
	public GameObject ammoHitEffectPrefab;
	public GameObject bloodEffectPrefab;
	public GameObject playerShadowPrefab;
	public Material beginUI;
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
	public static GameResources Instance { get; }

	// Methods
	public static GameResources get_Instance()
	{
		// ---- decompiled from wasm (GameResources_get_Instance) ----
		//   var e:{ a:long, b:long, c:long, d:int, e:long } = g_a - 48;
		//   g_a = e;
		//   if (eqz(6703520[0]:ubyte)) {
		//     f_hpa(5651260);
		//     f_hpa(5660004);
		//     f_hpa(5621644);
		//     6703520[0]:byte = 1;
		//   }
		//   d = (d_p444444444444044P44p44444444[26293]:int)[4]:int;
		//   d = 
		//     ((if (d[189]:ubyte & 1) { d } else { System_Threading_Monitor_Enter_1(d) })[24]:int)[2]:int;
		//   if (eqz(d[189]:ubyte & 1)) { d = System_Threading_Monitor_Enter_1(d) }
		//   var f:int = b[4]:int;
		//   var g:int = (d[23]:int)[0]:int;
		//   if (eqz(6703145[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6703145[0]:byte = 1;
		//   }
		//   var h:int_ptr = e + 40;
		//   h[0] =
		//     (d = (d_p444444444444044P44p44444444[17262]:int)[23]:int)[2]:int;
		//   e.e = d[0]:long@4;
		//   if (eqz(6685672[0]:ubyte)) {
		//     f_hpa(5620040);
		//     6685672[0]:byte = 1;
		//   }
		//   d = (d_p444444444444044P44p44444444[16302]:int)[23]:int;
		//   e.d = h[0];
		//   e.c = e.e;
		//   e.b = d[2]:long@4;
		//   e.a = d[0]:long@4;
		//   d = PoolManager_CreatePool(g, f, e + 16, e, e);
		//   if (d) {
		//     f = d_p444444444444044P44p44444444[16703]:int;
		//     h = f[184]:ubyte;
		//     if (h > (g = d[0]:int)[184]:ubyte) goto B_f;
		//     if ((g[25]:int + (h << 2) - 4)[0]:int != f) goto B_f;
		//   }
		//   f = d + 16;
		//   UnityEngine_AudioSource_get_volume(f[0]:int, b[6]:float, 0);
		//   UnityEngine_AudioSource_get_clip(f[0]:int, b[5]:int, 0);
		//   multiple_UnityEngine_AudioSource_GetPitch(f[0]:int, b[7]:float, 0);
		//   d[5]:int = b;
		//   UnityEngine_AudioSource_get_loop(f[0]:int, c, 0);
		//   f_sbnb(f_canb(d, 0), 1, 0);
		//   g = d_p444444444444044P44p44444444[24107]:int;
		//   b = a[5];
		//   b[4]:int = b[4]:int + 1;
		//   f = b[3]:int;
		//   if (f < (h = b[2]:int)[3]) {
		//     b[3]:int = f + 1;
		//     h[f + 4]:int = d;
		//     goto B_h;
		//   }
		//   System_String_Substring(b, d, ((g[4]:int)[24]:int)[14]:int);
		//   label B_h:
		//   g_a = e + 48;
		//   return ;
		//   label B_f:
		//   f_ypa(d, f);
		//   unreachable;
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (GameResources_ctor) ----
		//   var this:int;
		//   if (eqz(6703914[0]:ubyte)) {
		//     f_hpa(5601836);
		//     f_hpa(5666968);
		//     6703914[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[11751]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[28034]:int,
		//     0);
		//   StaticEventHandler_CallPlayerChangedEvent(methodInfo, 0);
	}

}
