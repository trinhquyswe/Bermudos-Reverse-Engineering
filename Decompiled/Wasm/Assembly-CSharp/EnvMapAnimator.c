// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: EnvMapAnimator  (Assembly-CSharp)

function EnvMapAnimator_Awake(a:int, b:int):int { // func86177
  var this:int;
  if (eqz(6703173[0]:ubyte)) {
    f_hpa(5627388);
    6703173[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[18139]:int);
  methodInfo[4] = this;
  methodInfo[2] = 0;
  return methodInfo;
}

function EnvMapAnimator_Start_d_4_System_IDisposable_Dispose(a:int, b:int):int { // func86178
  var this:int;
  var e:int;
  var c:long_ptr@4;
  var methodInfo:int = g_a - 176;
  g_a = methodInfo;
  if (eqz(6703174[0]:ubyte)) {
    f_hpa(5741508);
    6703174[0]:byte = 1;
  }
  var d:int = this[4]:int;
  br_table[B_e, B_d, ..B_b](this[2]:int)
  label B_e:
  this[20]:long@1 = 0L;
  this[2]:int = -1;
  this[28]:long@1 = 0L;
  this[36]:long@1 = 0L;
  this[44]:long@1 = 0L;
  this[52]:long@1 = 0L;
  this[60]:long@1 = 0L;
  this[68]:long@1 = 0L;
  this[76]:long@1 = 0L;
  goto B_c;
  label B_d:
  this[2]:int = -1;
  label B_c:
  if (eqz(6703145[0]:ubyte)) {
    f_hpa(5623880);
    6703145[0]:byte = 1;
  }
  c = this + 20;
  var f:int_ptr = methodInfo + 152;
  f[0] =
    (e = (d_p444444444444044P44p44444444[17262]:int)[23]:int)[2]:int;
  methodInfo[18]:long = e[0]:long@4;
  var g:float = 
    UnityEngine_Rendering_Universal_ScriptableRenderer_InternalStartRendering(
      0);
  var h:float = d[4]:float;
  var i:float = 
    UnityEngine_Rendering_Universal_ScriptableRenderer_InternalStartRendering(
      0);
  var j:float = d[5]:float;
  e = methodInfo + 168;
  e[0]:float =
    UnityEngine_Rendering_Universal_ScriptableRenderer_InternalStartRendering(
      0) *
    d[6]:float *
    0.017453f;
  methodInfo[30]:int = e[0]:int;
  methodInfo[41]:float = i * j * 0.017453f;
  methodInfo[40]:float = g * h * 0.017453f;
  methodInfo[14]:long = methodInfo[20]:long;
  f_gul(methodInfo + 128, methodInfo + 112, 0);
  if (eqz(6695507[0]:ubyte)) {
    f_hpa(5623880);
    6695507[0]:byte = 1;
  }
  e = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
  methodInfo[26]:int = f[0];
  methodInfo[11]:long = methodInfo[17]:long;
  methodInfo[12]:long = methodInfo[18]:long;
  methodInfo[10]:long = methodInfo[16]:long;
  methodInfo[18]:int = e[5]:int;
  methodInfo[8]:long = e[3]:long@4;
  UnityEngine_Matrix4x4_get_decomposeProjection(c,
                                                methodInfo + 96,
                                                methodInfo + 80,
                                                methodInfo - -64,
                                                0);
  d = d[8]:int;
  methodInfo[1]:long = c[2];
  methodInfo[2]:long = c[4];
  methodInfo[3]:long = c[6];
  methodInfo[4]:long = c[8];
  methodInfo[5]:long = c[10];
  methodInfo[6]:long = c[12];
  methodInfo[7]:long = c[14];
  methodInfo[0]:long = c[0];
  UnityEngine_Material_SetVector_1(
    d,
    d_p444444444444044P44p44444444[46669]:int,
    methodInfo,
    0);
  this[2]:long@4 = 1L;
  c = 1;
  label B_b:
  g_a = methodInfo + 176;
  return c;
}

function EnvMapAnimator_Start_d_4_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86179
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5697880));
  unreachable;
}

function EnvMapAnimator_Start_d_4_System_Collections_IEnumerator_get_Current(a:int, b:int) { // func86180
  var this:int;
  if (eqz(6703175[0]:ubyte)) {
    f_hpa(5609924);
    f_hpa(5702988);
    f_hpa(5702992);
    6703175[0]:byte = 1;
  }
  var methodInfo:int = Mono_Security_ASN1Convert_ToOid(
                         d_p444444444444044P44p44444444[13773]:int,
                         50017);
  System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_1(
    methodInfo,
    d_p444444444444044P44p44444444[37040]:int,
    0);
  var c:int = Mono_Security_ASN1Convert_ToOid(
                d_p444444444444044P44p44444444[13773]:int,
                39051);
  System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_1(
    c,
    d_p444444444444044P44p44444444[37039]:int,
    0);
  this[17]:short@1 = 0;
  this[16]:byte = 0;
  this[2]:long@4 = 2950642533071L;
  this[1]:int = c;
  this[0]:int = methodInfo;
  this[19]:byte = 0;
}

