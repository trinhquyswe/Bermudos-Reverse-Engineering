// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class AudioManager : MonoBehaviour
{
	// Fields
	private Slider musicSlider;
	private Slider sfxSlider;
	private float normalizedValue;

	// Methods
	private void Start()
	{
		// <no wasm mapping>
	}

	private IEnumerator SetVolumeCoroutine()
	{
		// ---- decompiled from wasm (AudioManager_SetVolumeCoroutine) ----
		//   var this:int_ptr;
		//   this[6] = 1101004800;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (AudioManager_ctor) ----
		//   if (eqz(6703501[0]:ubyte)) {
		//     f_hpa(5659992);
		//     f_hpa(5752408);
		//     6703501[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[26290]:int)[4]:int;
		//   c = 
		//     ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
		//   if (eqz(c[189]:ubyte & 1)) { c = System_Threading_Monitor_Enter_1(c) }
		//   var d:float = a[6] * b;
		//   if (eqz(d >= 20.0f)) {
		//     ((c[23]:int)[0]:int)[8]:float = d;
		//     if (eqz(6703511[0]:ubyte)) {
		//       f_hpa(5752408);
		//       6703511[0]:byte = 1;
		//     }
		//     var e:float = -80.0f;
		//     c = UnityEngine_Audio_AudioMixer_GetFloat(
		//           UnityEngine_MonoBehaviour_InvokeRepeating(0)[14]:int,
		//           0);
		//     if (d != 0.0f) { e = HelperUtilities_GetMousePositionInUI(d, 0) }
		//     UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
		//       c,
		//       d_p444444444444044P44p44444444[49394]:int,
		//       e,
		//       0);
		//     d = a[6] * b;
		//   }
		//   UnityEngine_PlayerPrefs_GetInt_1(
		//     d_p444444444444044P44p44444444[49394]:int,
		//     d,
		//     0);
		//   UnityEngine_PlayerPrefs_DeleteAll(0);
	}

	private void <Start>b__3_0(float value)
	{
		// ---- decompiled from wasm (AudioManager_Start_b_3_0) ----
		//   var this:float_ptr;
		//   var value:float;
		//   if (eqz(6703502[0]:ubyte)) {
		//     f_hpa(5660012);
		//     f_hpa(5755444);
		//     6703502[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   if (eqz(methodInfo[189]:ubyte & 1)) {
		//     methodInfo = System_Threading_Monitor_Enter_1(methodInfo)
		//   }
		//   var d:float = this[6] * value;
		//   if (eqz(d >= 20.0f)) {
		//     ((methodInfo[23]:int)[0]:int)[4]:float = d;
		//     if (eqz(6703523[0]:ubyte)) {
		//       f_hpa(5755444);
		//       6703523[0]:byte = 1;
		//     }
		//     var e:float = -80.0f;
		//     methodInfo = UnityEngine_Audio_AudioMixer_GetFloat(
		//                    UnityEngine_MonoBehaviour_InvokeRepeating(0)[13]:int,
		//                    0);
		//     if (d != 0.0f) { e = HelperUtilities_GetMousePositionInUI(d, 0) }
		//     UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
		//       methodInfo,
		//       d_p444444444444044P44p44444444[50153]:int,
		//       e,
		//       0);
		//     d = this[6] * value;
		//   }
		//   UnityEngine_PlayerPrefs_GetInt_1(
		//     d_p444444444444044P44p44444444[50153]:int,
		//     d,
		//     0);
		//   UnityEngine_PlayerPrefs_DeleteAll(0);
	}

	private void <Start>b__3_1(float value)
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// AudioManager_SetVolumeCoroutine_d_4_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5696204));
	//   unreachable;

	// AudioManager_SetVolumeCoroutine_d_4_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int_ptr;
	//   if (eqz(6703504[0]:ubyte)) {
	//     f_hpa(5668388);
	//     f_hpa(5659988);
	//     6703504[0]:byte = 1;
	//   }
	//   SingletonMonobehaviourPersistent_1_ctor(
	//     this,
	//     d_p444444444444044P44p44444444[26289]:int);
	//   this[4] =
	//     UnityEngine_GameObject_get_activeInHierarchy(
	//       this,
	//       d_p444444444444044P44p44444444[28389]:int);
	//   UnityEngine_Audio_AudioMixerSnapshot_get_audioMixer(
	//     UnityEngine_MonoBehaviour_InvokeRepeating(0)[17]:int,
	//     0.0f,
	//     0);

}
