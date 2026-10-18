// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: SoundEffect  (Assembly-CSharp)

function SoundEffect_Awake(a:int, b:int) { // func86720
  var this:int_ptr;
  if (eqz(6703517[0]:ubyte)) {
    f_hpa(5619244);
    6703517[0]:byte = 1;
  }
  var methodInfo:int = 
    UnityEngine_AudioSource_get_timeSamples(this[4], 0);
  var c:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29])) { f_ahje(c) }
  if (UnityEngine_Camera_get_targetTexture(methodInfo, 0, 0)) {
    UnityEngine_AudioSource_set_clip(this[4], 0)
  }
}

function SoundEffect_OnDisable(a:int_ptr, b:int, c:int, d:int) { // func86721
  UnityEngine_AudioSource_get_volume(a[4], b[6]:float, 0);
  UnityEngine_AudioSource_get_clip(a[4], b[5]:int, 0);
  multiple_UnityEngine_AudioSource_GetPitch(a[4], b[7]:float, 0);
  a[5] = b;
  UnityEngine_AudioSource_get_loop(a[4], c, 0);
}

function SoundEffect_ctor(a:int, b:int) { // func86722
  var this:float_ptr;
  var c:float;
  if (eqz(6703518[0]:ubyte)) {
    f_hpa(5755444);
    6703518[0]:byte = 1;
  }
  if (eqz(UnityEngine_PlayerPrefs_GetString_1(
            d_p444444444444044P44p44444444[50153]:int,
            0))) {
    c = this[4];
    goto B_b;
  }
  this[4] =
    (c = UnityEngine_PlayerPrefs_GetFloat(
           d_p444444444444044P44p44444444[50153]:int,
           0));
  label B_b:
  if (eqz(6703523[0]:ubyte)) {
    f_hpa(5755444);
    6703523[0]:byte = 1;
  }
  var d:float = -80.0f;
  this = UnityEngine_Audio_AudioMixer_GetFloat(
           UnityEngine_MonoBehaviour_InvokeRepeating(0)[13]:int,
           0);
  if (c != 0.0f) { d = HelperUtilities_GetMousePositionInUI(c, 0) }
  UnityEngine_Audio_AudioMixer_TransitionToSnapshotInternal(
    this,
    d_p444444444444044P44p44444444[50153]:int,
    d,
    0);
}

