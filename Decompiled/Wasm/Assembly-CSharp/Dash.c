// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Dash  (Assembly-CSharp)

function Dash_Awake(a:int, b:int) { // func86668
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703487[0]:ubyte)) {
    f_hpa(5601980);
    f_hpa(5670112);
    6703487[0]:byte = 1;
  }
  var methodInfo:int_ptr = (this[4])[14]:int;
  var d:int = f_icke(d_p444444444444044P44p44444444[11787]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[28820]:int, 0);
  if (eqz(6703492[0]:ubyte)) {
    f_hpa(5601980);
    6703492[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_iyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11787]:int);
      if (eqz(methodInfo)) goto B_c;
    }
    c = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (c) continue L_d;
  }
  return ;
  label B_c:
  f_ypa(c, f);
  unreachable;
}

function Dash_DashCoroutine_d_10_System_Collections_IEnumerator_get_Current(a:int_ptr, b:int, c:int) { // func86669
  var f:int;
  var d:int;
  if (eqz(6703492[0]:ubyte)) {
    f_hpa(5601980);
    6703492[0]:byte = 1;
  }
  var e:int = a + 16;
  a = a[4];
  loop L_c {
    c = 0;
    d = f_iyud(a, b, 0);
    if (d) {
      c = f_upa(d, f = d_p444444444444044P44p44444444[11787]:int);
      if (eqz(c)) goto B_b;
    }
    d = a != (c = System_Net_WebOperation_ctor(e, c, a));
    a = c;
    if (d) continue L_c;
  }
  return ;
  label B_b:
  f_ypa(d, f);
  unreachable;
}

function Dash_OnEnable(a:int, b:int) { // func86670
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703488[0]:ubyte)) {
    f_hpa(5601980);
    f_hpa(5670112);
    6703488[0]:byte = 1;
  }
  var methodInfo:int_ptr = (this[4])[14]:int;
  var d:int = f_icke(d_p444444444444044P44p44444444[11787]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[28820]:int, 0);
  if (eqz(6703493[0]:ubyte)) {
    f_hpa(5601980);
    6703493[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_kyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11787]:int);
      if (eqz(methodInfo)) goto B_c;
    }
    c = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (c) continue L_d;
  }
  return ;
  label B_c:
  f_ypa(c, f);
  unreachable;
}

function Dash_OnDisable(a:int, b:ubyte_ptr, c:int, d:int) { // func86672
  if (eqz(6703489[0]:ubyte)) {
    f_hpa(5660012);
    6703489[0]:byte = 1;
  }
  if (
    eqz(
      UnityEngine_Rendering_Universal_ScriptableRenderer_InternalStartRendering(
        0) >
      a[7]:float)) goto B_b;
  if (
    eqz(((a[4]:int)[16]:int)[5]:float > f32_convert_i32_s(a[8]:int))) goto B_b;
  b = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  b = 
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  SoundEffectManager_Start(
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int,
    (a[4]:int)[24]:int,
    a);
  var e:long = c[2]:long@4;
  c = a[5]:int;
  if (c) { UnityEngine_MonoBehaviour_StopCoroutine(a, c, 0) }
  if (eqz(6703490[0]:ubyte)) {
    f_hpa(5626748);
    6703490[0]:byte = 1;
  }
  c = f_icke(d_p444444444444044P44p44444444[17979]:int);
  c[5]:long@4 = e;
  c[4]:int = a;
  c[2]:int = 0;
  a[5]:int = UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
  ((a[4]:int)[18]:int)[68]:byte = 1;
  a[7]:float =
    UnityEngine_Rendering_Universal_ScriptableRenderer_InternalStartRendering(
      0) +
    ((c = a[4]:int)[6]:int)[7]:float;
  Stamina_Update(c[16]:int, a[8]:int, 0);
  label B_b:
}

function Dash_DashEvent_OnDashEvent(a:int_ptr, b:int, c:int) { // func86673
  c = a[5];
  if (c) { UnityEngine_MonoBehaviour_StopCoroutine(a, c, 0) }
  var d:long = b[0]:long@4;
  if (eqz(6703490[0]:ubyte)) {
    f_hpa(5626748);
    6703490[0]:byte = 1;
  }
  b = f_icke(d_p444444444444044P44p44444444[17979]:int);
  b[5]:long@4 = d;
  b[4]:int = a;
  b[2]:int = 0;
  a[5] = UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
  ((a[4])[18]:int)[68]:byte = 1;
}

function Dash_OnTriggerEnter2D(a:int_ptr, b:int) { // func86674
  b = a[5];
  if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
}

function Dash_PlayDash(a:int, b:int, c:int):int { // func86675
  var this:int;
  var direction:long_ptr@4;
  if (eqz(6703490[0]:ubyte)) {
    f_hpa(5626748);
    6703490[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[17979]:int);
  methodInfo[4]:int = this;
  methodInfo[2]:int = 0;
  methodInfo[5]:long@4 = direction[0];
  return methodInfo;
}

function Dash_StopPlayerDashRoutine(a:int, b:int) { // func86677
  var this:int_ptr;
  if (eqz(6703491[0]:ubyte)) {
    f_hpa(5624112);
    6703491[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[17320]:int);
  this[8] = 10;
  this[6] = methodInfo;
  multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
}

function Dash_DashCoroutine_d_10_System_IDisposable_Dispose(a:int, b:int):int { // func86678
  var this:int;
  var h:long;
  var k:float;
  var l:float;
  var j:float;
  var c:int;
  var methodInfo:int = g_a + -64;
  g_a = methodInfo;
  var d:int_ptr = this[4]:int;
  var f:int = 
    {
      br_table[B_d, B_c, ..B_a](this[2]:int)
      label B_d:
      this[2]:int = -1;
      UnityEngine_Camera_get_farClipPlane(
        methodInfo + 48,
        System_Linq_Enumerable_Count(d, 0),
        0);
      k = methodInfo[12]:float;
      l = methodInfo[13]:float;
      j = ((d[4])[6]:int)[6]:float;
      this[9]:int = 1041865114;
      this[7]:long@4 =
        (h = 
           i64_extend_i32_u(
             i32_reinterpret_f32(
               l +
               j * f32_reinterpret_i32(i32_wrap_i64((h = this[5]:long@4) >> 32L)))) <<
           32L |
           i64_extend_i32_u(
             i32_reinterpret_f32(k + j * f32_reinterpret_i32(i32_wrap_i64(h)))));
      this + 28;
      goto B_b;
      label B_c:
      this[2]:int = -1;
      h = this[7]:long@4;
      this + 28;
      label B_b:
    }
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 48,
    System_Linq_Enumerable_Count(d, 0),
    0);
  c = i32_wrap_i64(h >> 32L);
  j = methodInfo[13]:float;
  k = methodInfo[12]:float;
  var e:int_ptr = i32_wrap_i64(h);
  if (eqz(6665195[0]:ubyte)) {
    f_hpa(5618360);
    6665195[0]:byte = 1;
  }
  l = f32_reinterpret_i32(c);
  c = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(c[29]:int)) { f_ahje(c) }
  if (eqz(this[9]:float <
          sqrt((k = f32_reinterpret_i32(e) - k) * k + (j = l - j) * j))) {
    c = 0;
    this = System_Linq_Enumerable_Count(d, 0);
    h = f[0]:long@4;
    e = methodInfo + 24;
    e[0] = 0;
    methodInfo[2]:int = e[0];
    methodInfo[2]:long = h;
    methodInfo[0]:long = h;
    multiple_UnityEngine_Transform_ctor(this, methodInfo, 0);
    ((d[4])[18]:int)[68]:byte = 0;
    goto B_a;
  }
  f = (d[4])[5]:int;
  h = this[7]:long@4;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 32,
    System_Linq_Enumerable_Count(d, 0),
    0);
  var i:long = this[5]:long@4;
  j = ((d[4])[6]:int)[5]:float;
  methodInfo[14]:int = methodInfo[10]:int;
  methodInfo[6]:long = methodInfo[4]:long;
  if (eqz(6703408[0]:ubyte)) {
    f_hpa(5618816);
    6703408[0]:byte = 1;
  }
  e = f[4]:int;
  if (e) {
    c = f_icke(d_p444444444444044P44p44444444[15996]:int);
    if (eqz(6703409[0]:ubyte)) {
      f_hpa(5614872);
      6703409[0]:byte = 1;
    }
    var g:int_ptr = d_p444444444444044P44p44444444[15010]:int;
    if (eqz(g[29])) { f_ahje(g) }
    c[4]:int = 0;
    c[3]:int = h >> 32L;
    c[2]:int = h;
    c[5]:long@4 = methodInfo[6]:long;
    c[7]:int = methodInfo[14]:int;
    c[44]:byte = 1;
    c[9]:long@4 = i;
    c[8]:float = j;
    call_indirect(e[8], f, c, e[5], e[3]);
  }
  d = d[6];
  c = 1;
  this[2]:int = 1;
  this[3]:int = d;
  label B_a:
  g_a = methodInfo - -64;
  return c;
}

function Dash_DashCoroutine_d_10_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86679
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5697260));
  unreachable;
}

