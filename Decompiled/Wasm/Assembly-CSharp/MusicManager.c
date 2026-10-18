// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: MusicManager  (Assembly-CSharp)

function MusicManager_Start(a:int, b:int) { // func86580
  var this:int;
  if (eqz(6703506[0]:ubyte)) {
    f_hpa(5728560);
    6703506[0]:byte = 1;
  }
  var methodInfo:int = this[36]:ubyte;
  var c:int_ptr = UnityEngine_MonoBehaviour_InvokeRepeating(0);
  var d:float = 
    UnityEngine_AudioClip_ctor(
      ({
         if (methodInfo) {
           c = c[18];
           if (eqz(6703508[0]:ubyte)) {
             f_hpa(5628940);
             6703508[0]:byte = 1;
           }
           methodInfo = f_icke(d_p444444444444044P44p44444444[18527]:int);
           methodInfo[6]:long@4 = 4539628425446424576L;
           methodInfo[5]:int = c;
           methodInfo[4]:int = this;
           methodInfo[2]:int = 0;
           UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
           this[36]:byte = 0;
           UnityEngine_MonoBehaviour_InvokeRepeating(0) + 72;
           goto B_b;
         }
         c = c[19];
         if (eqz(6703508[0]:ubyte)) {
           f_hpa(5628940);
           6703508[0]:byte = 1;
         }
         methodInfo = f_icke(d_p444444444444044P44p44444444[18527]:int);
         methodInfo[6]:long@4 = 4539628425446424576L;
         methodInfo[5]:int = c;
         methodInfo[4]:int = this;
         methodInfo[2]:int = 0;
         UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
         this[36]:byte = 1;
         UnityEngine_MonoBehaviour_InvokeRepeating(0) + 76;
         label B_b:
       }[0]:int)[4]:int,
      0);
  UnityEngine_MonoBehaviour_CancelInvoke(
    this,
    d_p444444444444044P44p44444444[43432]:int,
    d,
    0);
}

function MusicManager_FadeInMusic(a:float_ptr, b:float, c:int) { // func86697
  if (eqz(b >= 20.0f)) {
    a[8] = b;
    if (eqz(6703511[0]:ubyte)) {
      f_hpa(5752408);
      6703511[0]:byte = 1;
    }
    var d:float = -80.0f;
    a = UnityEngine_Audio_AudioMixer_GetFloat(
          UnityEngine_MonoBehaviour_InvokeRepeating(0)[14]:int,
          0);
    if (b != 0.0f) { d = HelperUtilities_GetMousePositionInUI(b, 0) }
    UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
      a,
      d_p444444444444044P44p44444444[49394]:int,
      d,
      0);
  }
}

function MusicManager_Awake(a:int, b:int) { // func86703
  var this:float_ptr;
  var c:float;
  if (eqz(6703505[0]:ubyte)) {
    f_hpa(5752408);
    6703505[0]:byte = 1;
  }
  if (eqz(UnityEngine_PlayerPrefs_GetString_1(
            d_p444444444444044P44p44444444[49394]:int,
            0))) {
    c = this[8];
    goto B_b;
  }
  this[8] =
    (c = UnityEngine_PlayerPrefs_GetFloat(
           d_p444444444444044P44p44444444[49394]:int,
           0));
  label B_b:
  if (eqz(6703511[0]:ubyte)) {
    f_hpa(5752408);
    6703511[0]:byte = 1;
  }
  var d:float = -80.0f;
  var methodInfo:int = 
    UnityEngine_Audio_AudioMixer_GetFloat(
      UnityEngine_MonoBehaviour_InvokeRepeating(0)[14]:int,
      0);
  if (c != 0.0f) { d = HelperUtilities_GetMousePositionInUI(c, 0) }
  UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
    methodInfo,
    d_p444444444444044P44p44444444[49394]:int,
    d,
    0);
  MusicManager_Start(this, this);
}

function MusicManager_ChangeMusicVolume(a:int, b:float, c:int) { // func86704
  var musicVolume:float;
  if (eqz(6703511[0]:ubyte)) {
    f_hpa(5752408);
    6703511[0]:byte = 1;
  }
  var d:float = -80.0f;
  var this:int = 
    UnityEngine_Audio_AudioMixer_GetFloat(
      UnityEngine_MonoBehaviour_InvokeRepeating(0)[14]:int,
      0);
  if (musicVolume != 0.0f) {
    d = HelperUtilities_GetMousePositionInUI(musicVolume, 0)
  }
  UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
    this,
    d_p444444444444044P44p44444444[49394]:int,
    d,
    0);
}

function MusicManager_StopPlayingBackgroundMusic(a:int, b:int, c:float, d:float, e:int) { // func86705
  if (eqz(6703508[0]:ubyte)) {
    f_hpa(5628940);
    6703508[0]:byte = 1;
  }
  e = f_icke(d_p444444444444044P44p44444444[18527]:int);
  e[7]:float = d;
  e[6]:float = c;
  e[5]:int = b;
  e[4]:int = a;
  e[2]:int = 0;
  UnityEngine_MonoBehaviour_StartCoroutine_1(a, e, 0);
}

function MusicManager_PlayBackgroundMusic(a:int, b:int) { // func86706
  var this:int_ptr;
  if (eqz(6703507[0]:ubyte)) {
    f_hpa(5728528);
    6703507[0]:byte = 1;
  }
  UnityEngine_AudioSource_SetScheduledEndTime(this[4], 0);
  multiple_UnityEngine_MonoBehaviour_Invoke(
    this,
    d_p444444444444044P44p44444444[43424]:int,
    0);
}

function MusicManager_StopMusic(a:int, b:int, c:float, d:float, e:int):int { // func86708
  if (eqz(6703508[0]:ubyte)) {
    f_hpa(5628940);
    6703508[0]:byte = 1;
  }
  e = f_icke(d_p444444444444044P44p44444444[18527]:int);
  e[7]:float = d;
  e[6]:float = c;
  e[5]:int = b;
  e[4]:int = a;
  e[2]:int = 0;
  return e;
}

function MusicManager_PlayMusicRoutine(a:int, b:float, c:int):int { // func86709
  if (eqz(6703509[0]:ubyte)) {
    f_hpa(5628936);
    6703509[0]:byte = 1;
  }
  a = f_icke(d_p444444444444044P44p44444444[18526]:int);
  a[4]:float = b;
  a[2]:int = 0;
  return a;
}

function MusicManager_FadeOutMusic(a:int, b:int, c:float, d:int):int { // func86710
  if (eqz(6703510[0]:ubyte)) {
    f_hpa(5628932);
    6703510[0]:byte = 1;
  }
  d = f_icke(d_p444444444444044P44p44444444[18525]:int);
  d[6]:float = c;
  d[5]:int = b;
  d[4]:int = a;
  d[2]:int = 0;
  return d;
}

function MusicManager_SetMusicVolume(a:int, b:int) { // func86711
  if (eqz(6703512[0]:ubyte)) {
    f_hpa(5659984);
    6703512[0]:byte = 1;
  }
  a[36]:byte = 1;
  a[8]:int = 1101004800;
  multiple_127_System_Collections_Generic_ShortEnumEqualityComparer_1_GetHashCode(
    a,
    d_p444444444444044P44p44444444[26288]:int);
}

function MusicManager_FadeInMusic_d_14_System_IDisposable_Dispose(a:int, b:int):int { // func86712
  var this:int;
  var methodInfo:int_ptr = 0;
  if (eqz(6703513[0]:ubyte)) {
    f_hpa(5624116);
    6703513[0]:byte = 1;
  }
  var c:int = -1;
  br_table[B_d, B_c, ..B_b](this[2]:int)
  label B_d:
  this[2]:int = -1;
  methodInfo = this[4]:int;
  UnityEngine_AudioSource_get_clip(methodInfo[4], (this[5]:int)[4]:int, 0);
  UnityEngine_AudioSource_get_volume(methodInfo[4],
                                     (this[5]:int)[5]:float,
                                     0);
  UnityEngine_AudioSource_set_clip(methodInfo[4], 0);
  UnityEngine_Audio_AudioMixerSnapshot_get_audioMixer(
    UnityEngine_MonoBehaviour_InvokeRepeating(0)[16]:int,
    this[6]:float,
    0);
  var d:float = this[6]:float;
  methodInfo = f_icke(d_p444444444444044P44p44444444[17321]:int);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
    methodInfo,
    d,
    0);
  this[3]:int = methodInfo;
  c = 1;
  methodInfo = 1;
  label B_c:
  this[2]:int = c;
  label B_b:
  return methodInfo;
}

function MusicManager_FadeInMusic_d_14_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86713
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5699084));
  unreachable;
}

function MusicManager_FadeOutMusic_d_13_System_IDisposable_Dispose(a:int, b:int):int { // func86714
  var this:int;
  var methodInfo:int = 0;
  if (eqz(6703514[0]:ubyte)) {
    f_hpa(5624116);
    6703514[0]:byte = 1;
  }
  var c:int = -1;
  br_table[B_d, B_c, ..B_b](this[2]:int)
  label B_d:
  this[2]:int = -1;
  UnityEngine_Audio_AudioMixerSnapshot_get_audioMixer(
    UnityEngine_MonoBehaviour_InvokeRepeating(0)[15]:int,
    this[4]:float,
    0);
  var d:float = this[4]:float;
  methodInfo = f_icke(d_p444444444444044P44p44444444[17321]:int);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
    methodInfo,
    d,
    0);
  this[3]:int = methodInfo;
  c = 1;
  methodInfo = 1;
  label B_c:
  this[2]:int = c;
  label B_b:
  return methodInfo;
}

function MusicManager_FadeOutMusic_d_13_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86715
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5699088));
  unreachable;
}

function MusicManager_PlayMusicRoutine_d_12_System_IDisposable_Dispose(a:int, b:int):int { // func86716
  var this:int;
  var c:int;
  var h:float;
  if (eqz(6703515[0]:ubyte)) {
    f_hpa(5619244);
    6703515[0]:byte = 1;
  }
  var e:int = 3;
  var d:int_ptr = this[4]:int;
  var methodInfo:int = -1;
  br_table[B_f, B_e, B_d, B_c, ..B_b](this[2]:int)
  label B_f:
  this[2]:int = -1;
  c = d[6];
  if (c) { UnityEngine_MonoBehaviour_StopCoroutine(d, c, 0) }
  c = d[7];
  if (c) { UnityEngine_MonoBehaviour_StopCoroutine(d, c, 0) }
  methodInfo = d[5];
  var f:int = (this[5]:int)[4]:int;
  c = 0;
  var g:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(g[29])) { f_ahje(g) }
  if (
    eqz(UnityEngine_Camera_get_targetTexture(f, methodInfo, 0))) goto B_d;
  d[5] = (this[5]:int)[4]:int;
  h = this[6]:float;
  if (eqz(6703509[0]:ubyte)) {
    f_hpa(5628936);
    6703509[0]:byte = 1;
  }
  c = f_icke(d_p444444444444044P44p44444444[18526]:int);
  c[4]:float = h;
  c[2]:int = 0;
  d[6] = (c = UnityEngine_MonoBehaviour_StartCoroutine_1(d, c, 0));
  e = 1;
  goto B_d;
  label B_e:
  this[2]:int = -1;
  h = this[7]:float;
  methodInfo = this[5]:int;
  if (eqz(6703510[0]:ubyte)) {
    f_hpa(5628932);
    6703510[0]:byte = 1;
  }
  c = f_icke(d_p444444444444044P44p44444444[18525]:int);
  c[6]:float = h;
  c[5]:int = methodInfo;
  c[4]:int = d;
  c[2]:int = 0;
  d[7] = (c = UnityEngine_MonoBehaviour_StartCoroutine_1(d, c, 0));
  e = 2;
  label B_d:
  this[3]:int = c;
  c = 1;
  methodInfo = e;
  label B_c:
  this[2]:int = methodInfo;
  label B_b:
  return c;
}

function MusicManager_PlayMusicRoutine_d_12_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86717
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5699092));
  unreachable;
}

function MusicManager_PlayMusicRoutine_d_12_System_Collections_IEnumerator_get_Current(a:int, b:int) { // func86718
  var this:int_ptr;
  this[5] = 1065353216;
  UnityEngine_RuntimeInitializeOnLoadMethodAttribute_set_loadType(this,
                                                                  0);
}

