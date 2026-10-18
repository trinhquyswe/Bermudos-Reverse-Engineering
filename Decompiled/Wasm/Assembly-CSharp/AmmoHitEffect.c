// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: AmmoHitEffect  (Assembly-CSharp)

function AmmoHitEffect_Awake(a:int_ptr, b:long_ptr@4, c:int) { // func86845
  c = g_a - 128;
  g_a = c;
  c[30]:int = a[4];
  (c - -64)[0]:long = b[2];
  c[7]:long = b[0];
  multiple_UnityEngine_ParticleSystem_MinMaxCurve_op_Implicit(c + 72,
                                                              c + 56,
                                                              0);
  c[12]:int = c[28]:int;
  c[5]:long = c[13]:long;
  c[4]:long = c[12]:long;
  c[3]:long = c[11]:long;
  c[2]:long = c[10]:long;
  c[1]:long = c[9]:long;
  multiple_UnityEngine_ParticleSystem_MainModule_set_startRotation(
    c + 120,
    c + 8,
    0);
  f_sbnb(f_canb(a, 0), 1, 0);
  g_a = c + 128;
}

function AmmoHitEffect_ctor(a:int, b:int) { // func86849
  var this:int_ptr;
  if (eqz(6703725[0]:ubyte)) {
    f_hpa(5668360);
    6703725[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28382]:int);
}

