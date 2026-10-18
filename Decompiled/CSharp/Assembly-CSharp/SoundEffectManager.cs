// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class SoundEffectManager : SingletonMonobehaviourPersistent<SoundEffectManager>
{
	// Fields
	public float soundsVolume;
	private List<SoundEffect> soundEffects;

	// Methods
	private void Start()
	{
		// ---- decompiled from wasm (SoundEffectManager_Start) ----
		//   var d:{ a:long, b:long, c:long, d:int, e:long } = g_a - 48;
		//   g_a = d;
		//   if (eqz(6703519[0]:ubyte)) {
		//     f_hpa(5660004);
		//     f_hpa(5621644);
		//     6703519[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[26293]:int)[4]:int;
		//   c = 
		//     ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
		//   if (eqz(c[189]:ubyte & 1)) { c = System_Threading_Monitor_Enter_1(c) }
		//   var e:int = b[4]:int;
		//   var f:int = (c[23]:int)[0]:int;
		//   if (eqz(6703145[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6703145[0]:byte = 1;
		//   }
		//   var g:int_ptr = d + 40;
		//   g[0] =
		//     (c = (d_p444444444444044P44p44444444[17262]:int)[23]:int)[2]:int;
		//   d.e = c[0]:long@4;
		//   if (eqz(6685672[0]:ubyte)) {
		//     f_hpa(5620040);
		//     6685672[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[16302]:int)[23]:int;
		//   d.d = g[0];
		//   d.c = d.e;
		//   d.b = c[2]:long@4;
		//   d.a = c[0]:long@4;
		//   c = PoolManager_CreatePool(f, e, d + 16, d, d);
		//   if (c) {
		//     e = d_p444444444444044P44p44444444[16703]:int;
		//     g = e[184]:ubyte;
		//     if (g > (f = c[0]:int)[184]:ubyte) goto B_f;
		//     if ((f[25]:int + (g << 2) - 4)[0]:int != e) goto B_f;
		//   }
		//   e = c + 16;
		//   UnityEngine_AudioSource_get_volume(e[0]:int, b[6]:float, 0);
		//   UnityEngine_AudioSource_get_clip(e[0]:int, b[5]:int, 0);
		//   multiple_UnityEngine_AudioSource_GetPitch(e[0]:int, b[7]:float, 0);
		//   c[5]:int = b;
		//   UnityEngine_AudioSource_get_loop(e[0]:int, 0, 0);
		//   f_sbnb(f_canb(c, 0), 1, 0);
		//   var h:float = UnityEngine_AudioClip_ctor(b[5]:int, 0);
		//   if (eqz(6703522[0]:ubyte)) {
		//     f_hpa(5630476);
		//     6703522[0]:byte = 1;
		//   }
		//   b = f_icke(d_p444444444444044P44p44444444[18911]:int);
		//   b[5]:int = c;
		//   b[2]:int = 0;
		//   b[4]:float = h;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
		//   g_a = d + 48;
		//   return ;
		//   label B_f:
		//   f_ypa(c, e);
		//   unreachable;
	}

	public void PlaySoundEffect(SoundEffectSO soundEffect)
	{
		// ---- decompiled from wasm (SoundEffectManager_PlaySoundEffect) ----
		//   var this:int_ptr;
		//   var soundEffect:int;
		//   var f:int_ptr;
		//   var methodInfo:int;
		//   var e:int_ptr;
		//   var d:int = g_a - 32;
		//   g_a = d;
		//   if (eqz(6703521[0]:ubyte)) {
		//     f_hpa(5641376);
		//     f_hpa(5641380);
		//     f_hpa(5641384);
		//     f_hpa(5651264);
		//     f_hpa(5651268);
		//     f_hpa(5619244);
		//     6703521[0]:byte = 1;
		//   }
		//   d[3]:long = 0L;
		//   d[2]:long = 0L;
		//   UnityEngine_ComputeBuffer_Release(
		//     d + 16,
		//     this[5],
		//     d_p444444444444044P44p44444444[24108]:int);
		//   d[2]:int = 0;
		//   d[3]:int = d + 16;
		//   methodInfo = 
		//     {
		//       loop L_m {
		//         6151988[0]:int = 0;
		//         e = 
		//           env_invoke_iii(1155, d + 16, d_p444444444444044P44p44444444[21637]:int);
		//         methodInfo = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (methodInfo == 1) goto B_h;
		//         if (eqz(e)) goto B_i;
		//         f = d[7]:int;
		//         methodInfo = f[5];
		//         e = d_p444444444444044P44p44444444[16103]:int;
		//         if (eqz(e[29])) {
		//           6151988[0]:int = 0;
		//           env_invoke_vi(252, e);
		//           e = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (e == 1) goto B_l;
		//         }
		//         6151988[0]:int = 0;
		//         e = env_invoke_iiii(2135, methodInfo, soundEffect, 0);
		//         methodInfo = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (methodInfo == 1) goto B_k;
		//         if (eqz(e)) continue L_m;
		//       }
		//       6151988[0]:int = 0;
		//       e = env_invoke_iii(2179, f, 0);
		//       methodInfo = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (methodInfo == 1) goto B_j;
		//       6151988[0]:int = 0;
		//       env_invoke_viii(7986, e, 0, 0);
		//       methodInfo = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (methodInfo == 1) goto B_j;
		//       methodInfo = this[5];
		//       6151988[0]:int = 0;
		//       env_invoke_iiii(2150,
		//                       methodInfo,
		//                       f,
		//                       d_p444444444444044P44p44444444[24109]:int);
		//       methodInfo = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (methodInfo != 1) goto B_i;
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_l:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_k:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_j:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_i:
		//       d_p444444444444044P44p44444444[21636]:int;
		//       goto B_f;
		//       label B_h:
		//       env_cxa_find_matching_catch_3(4889068);
		//       label B_g:
		//     }
		//   if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_d;
		//   methodInfo = env_cxa_begin_catch(methodInfo)[0]:int;
		//   6151988[0]:int = 0;
		//   d[2]:int = methodInfo;
		//   env_invoke_v(58);
		//   e = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (e == 1) goto B_e;
		//   d_p444444444444044P44p44444444[21636]:int;
		//   if (methodInfo) goto B_c;
		//   label B_f:
		//   g_a = d + 32;
		//   return ;
		//   label B_e:
		//   methodInfo = env_cxa_find_matching_catch();
		//   env_getTempRet0();
		//   label B_d:
		//   6151988[0]:int = 0;
		//   env_invoke_ii(13925, d + 8);
		//   d = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (d != 1) goto B_b;
		//   env_cxa_find_matching_catch_3(0);
		//   env_getTempRet0();
		//   f_sx();
		//   unreachable;
		//   label B_c:
		//   System_Net_CommandStream_ReceiveCommandResponseCallback(methodInfo);
		//   unreachable;
		//   label B_b:
		//   env_resumeException(methodInfo);
		//   unreachable;
	}

	public void PlaySoundEffectPersistent(SoundEffectSO soundEffect, bool isLoop)
	{
		// <no wasm mapping>
	}

	public void StopSoundEffectLoop(SoundEffectSO soundEffect)
	{
		// <no wasm mapping>
	}

	private IEnumerator DisableSound(SoundEffect sound, float soundDuration)
	{
		// ---- decompiled from wasm (SoundEffectManager_DisableSound) ----
		//   if (eqz(b >= 20.0f)) {
		//     a[4] = b;
		//     if (eqz(6703523[0]:ubyte)) {
		//       f_hpa(5755444);
		//       6703523[0]:byte = 1;
		//     }
		//     var d:float = -80.0f;
		//     a = UnityEngine_Audio_AudioMixer_GetFloat(
		//           UnityEngine_MonoBehaviour_InvokeRepeating(0)[13]:int,
		//           0);
		//     if (b != 0.0f) { d = HelperUtilities_GetMousePositionInUI(b, 0) }
		//     UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
		//       a,
		//       d_p444444444444044P44p44444444[50153]:int,
		//       d,
		//       0);
		//   }
	}

	public void ChangeSoundsVolume(float soundsVolume)
	{
		// ---- decompiled from wasm (SoundEffectManager_ChangeSoundsVolume) ----
		//   var soundsVolume:float;
		//   if (eqz(6703523[0]:ubyte)) {
		//     f_hpa(5755444);
		//     6703523[0]:byte = 1;
		//   }
		//   var d:float = -80.0f;
		//   var this:int = 
		//     UnityEngine_Audio_AudioMixer_GetFloat(
		//       UnityEngine_MonoBehaviour_InvokeRepeating(0)[13]:int,
		//       0);
		//   if (soundsVolume != 0.0f) {
		//     d = HelperUtilities_GetMousePositionInUI(soundsVolume, 0)
		//   }
		//   UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
		//     this,
		//     d_p444444444444044P44p44444444[50153]:int,
		//     d,
		//     0);
	}

	private void SetSoundsVolume(float soundsVolume)
	{
		// ---- decompiled from wasm (SoundEffectManager_SetSoundsVolume) ----
		//   if (eqz(6703524[0]:ubyte)) {
		//     f_hpa(5651256);
		//     f_hpa(5607660);
		//     f_hpa(5660008);
		//     6703524[0]:byte = 1;
		//   }
		//   a[4] = 1092616192;
		//   b = f_icke(d_p444444444444044P44p44444444[13207]:int);
		//   multiple_System_Collections_Generic_List_1_cctor(
		//     b,
		//     d_p444444444444044P44p44444444[24106]:int);
		//   a[5] = b;
		//   multiple_127_System_Collections_Generic_ShortEnumEqualityComparer_1_GetHashCode(
		//     a,
		//     d_p444444444444044P44p44444444[26294]:int);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// SoundEffectManager_DisableSound_d_6_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5700968));
	//   unreachable;

	// SoundEffectManager_DisableSound_d_6_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:long_ptr@4;
	//   this[6] = 4575657222473777152L;
	//   UnityEngine_RuntimeInitializeOnLoadMethodAttribute_set_loadType(this,
	//                                                                   0);

}
