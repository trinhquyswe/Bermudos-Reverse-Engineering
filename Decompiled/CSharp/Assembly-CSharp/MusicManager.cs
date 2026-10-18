// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class MusicManager : SingletonMonobehaviourPersistent<MusicManager>
{
	// Fields
	private AudioSource musicAudioSource;
	private AudioClip currentAudioClip;
	private Coroutine fadeOutMusicCoroutine;
	private Coroutine fadeInMusicCoroutine;
	public float musicVolume;
	private bool isPlayingFirstClip;

	// Methods
	protected override void Awake()
	{
		// ---- decompiled from wasm (MusicManager_Awake) ----
		//   var this:float_ptr;
		//   var c:float;
		//   if (eqz(6703505[0]:ubyte)) {
		//     f_hpa(5752408);
		//     6703505[0]:byte = 1;
		//   }
		//   if (eqz(UnityEngine_PlayerPrefs_GetString_1(
		//             d_p444444444444044P44p44444444[49394]:int,
		//             0))) {
		//     c = this[8];
		//     goto B_b;
		//   }
		//   this[8] =
		//     (c = UnityEngine_PlayerPrefs_GetFloat(
		//            d_p444444444444044P44p44444444[49394]:int,
		//            0));
		//   label B_b:
		//   if (eqz(6703511[0]:ubyte)) {
		//     f_hpa(5752408);
		//     6703511[0]:byte = 1;
		//   }
		//   var d:float = -80.0f;
		//   var methodInfo:int = 
		//     UnityEngine_Audio_AudioMixer_GetFloat(
		//       UnityEngine_MonoBehaviour_InvokeRepeating(0)[14]:int,
		//       0);
		//   if (c != 0.0f) { d = HelperUtilities_GetMousePositionInUI(c, 0) }
		//   UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
		//     methodInfo,
		//     d_p444444444444044P44p44444444[49394]:int,
		//     d,
		//     0);
		//   MusicManager_Start(this, this);
	}

	private void Start()
	{
		// ---- decompiled from wasm (MusicManager_Start) ----
		//   var this:int;
		//   if (eqz(6703506[0]:ubyte)) {
		//     f_hpa(5728560);
		//     6703506[0]:byte = 1;
		//   }
		//   var methodInfo:int = this[36]:ubyte;
		//   var c:int_ptr = UnityEngine_MonoBehaviour_InvokeRepeating(0);
		//   var d:float = 
		//     UnityEngine_AudioClip_ctor(
		//       ({
		//          if (methodInfo) {
		//            c = c[18];
		//            if (eqz(6703508[0]:ubyte)) {
		//              f_hpa(5628940);
		//              6703508[0]:byte = 1;
		//            }
		//            methodInfo = f_icke(d_p444444444444044P44p44444444[18527]:int);
		//            methodInfo[6]:long@4 = 4539628425446424576L;
		//            methodInfo[5]:int = c;
		//            methodInfo[4]:int = this;
		//            methodInfo[2]:int = 0;
		//            UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
		//            this[36]:byte = 0;
		//            UnityEngine_MonoBehaviour_InvokeRepeating(0) + 72;
		//            goto B_b;
		//          }
		//          c = c[19];
		//          if (eqz(6703508[0]:ubyte)) {
		//            f_hpa(5628940);
		//            6703508[0]:byte = 1;
		//          }
		//          methodInfo = f_icke(d_p444444444444044P44p44444444[18527]:int);
		//          methodInfo[6]:long@4 = 4539628425446424576L;
		//          methodInfo[5]:int = c;
		//          methodInfo[4]:int = this;
		//          methodInfo[2]:int = 0;
		//          UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
		//          this[36]:byte = 1;
		//          UnityEngine_MonoBehaviour_InvokeRepeating(0) + 76;
		//          label B_b:
		//        }[0]:int)[4]:int,
		//       0);
		//   UnityEngine_MonoBehaviour_CancelInvoke(
		//     this,
		//     d_p444444444444044P44p44444444[43432]:int,
		//     d,
		//     0);
	}

	public void PlayBackgroundMusic()
	{
		// ---- decompiled from wasm (MusicManager_PlayBackgroundMusic) ----
		//   var this:int_ptr;
		//   if (eqz(6703507[0]:ubyte)) {
		//     f_hpa(5728528);
		//     6703507[0]:byte = 1;
		//   }
		//   UnityEngine_AudioSource_SetScheduledEndTime(this[4], 0);
		//   multiple_UnityEngine_MonoBehaviour_Invoke(
		//     this,
		//     d_p444444444444044P44p44444444[43424]:int,
		//     0);
	}

	public void StopPlayingBackgroundMusic()
	{
		// ---- decompiled from wasm (MusicManager_StopPlayingBackgroundMusic) ----
		//   if (eqz(6703508[0]:ubyte)) {
		//     f_hpa(5628940);
		//     6703508[0]:byte = 1;
		//   }
		//   e = f_icke(d_p444444444444044P44p44444444[18527]:int);
		//   e[7]:float = d;
		//   e[6]:float = c;
		//   e[5]:int = b;
		//   e[4]:int = a;
		//   e[2]:int = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(a, e, 0);
	}

	public void PlayMusic(MusicTrackSO musicTrack, float fadeOutTime = 0.5, float fadeInTime = 0.5)
	{
		// <no wasm mapping>
	}

	public void StopMusic()
	{
		// <no wasm mapping>
	}

	private IEnumerator PlayMusicRoutine(MusicTrackSO musicTrack, float fadeOutTime, float fadeInTime)
	{
		// <no wasm mapping>
	}

	private IEnumerator FadeOutMusic(float fadeOutTime)
	{
		// <no wasm mapping>
	}

	private IEnumerator FadeInMusic(MusicTrackSO musicTrack, float fadeInTime)
	{
		// ---- decompiled from wasm (MusicManager_FadeInMusic) ----
		//   if (eqz(b >= 20.0f)) {
		//     a[8] = b;
		//     if (eqz(6703511[0]:ubyte)) {
		//       f_hpa(5752408);
		//       6703511[0]:byte = 1;
		//     }
		//     var d:float = -80.0f;
		//     a = UnityEngine_Audio_AudioMixer_GetFloat(
		//           UnityEngine_MonoBehaviour_InvokeRepeating(0)[14]:int,
		//           0);
		//     if (b != 0.0f) { d = HelperUtilities_GetMousePositionInUI(b, 0) }
		//     UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
		//       a,
		//       d_p444444444444044P44p44444444[49394]:int,
		//       d,
		//       0);
		//   }
	}

	public void ChangeMusicVolume(float musicVolume)
	{
		// ---- decompiled from wasm (MusicManager_ChangeMusicVolume) ----
		//   var musicVolume:float;
		//   if (eqz(6703511[0]:ubyte)) {
		//     f_hpa(5752408);
		//     6703511[0]:byte = 1;
		//   }
		//   var d:float = -80.0f;
		//   var this:int = 
		//     UnityEngine_Audio_AudioMixer_GetFloat(
		//       UnityEngine_MonoBehaviour_InvokeRepeating(0)[14]:int,
		//       0);
		//   if (musicVolume != 0.0f) {
		//     d = HelperUtilities_GetMousePositionInUI(musicVolume, 0)
		//   }
		//   UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
		//     this,
		//     d_p444444444444044P44p44444444[49394]:int,
		//     d,
		//     0);
	}

	public void SetMusicVolume(float musicVolume)
	{
		// ---- decompiled from wasm (MusicManager_SetMusicVolume) ----
		//   if (eqz(6703512[0]:ubyte)) {
		//     f_hpa(5659984);
		//     6703512[0]:byte = 1;
		//   }
		//   a[36]:byte = 1;
		//   a[8]:int = 1101004800;
		//   multiple_127_System_Collections_Generic_ShortEnumEqualityComparer_1_GetHashCode(
		//     a,
		//     d_p444444444444044P44p44444444[26288]:int);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// MusicManager_FadeInMusic_d_14_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5699084));
	//   unreachable;

	// MusicManager_FadeOutMusic_d_13_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5699088));
	//   unreachable;

	// MusicManager_PlayMusicRoutine_d_12_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5699092));
	//   unreachable;

	// MusicManager_PlayMusicRoutine_d_12_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int_ptr;
	//   this[5] = 1065353216;
	//   UnityEngine_RuntimeInitializeOnLoadMethodAttribute_set_loadType(this,
	//                                                                   0);

}
