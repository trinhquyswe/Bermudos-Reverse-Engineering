// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: PlayerEffect  (Assembly-CSharp)

function PlayerEffect_DamageFlashCoroutine(a:int, b:long_ptr@4, c:int) { // func86835
  var h:long_ptr = g_a - 16;
  g_a = h;
  c = a[16]:int;
  if (c) { UnityEngine_MonoBehaviour_StopCoroutine(a, c, 0) }
  if (UnityEngine_GameObject_set_layer(f_canb(a, 0), 0)) {
    UnityEngine_RaycastHit2D_op_Implicit(h + 8, a[8]:int, 0);
    var i:long = h[1];
    var g:float = a[11]:float;
    UnityEngine_RaycastHit2D_op_Implicit(h + 8, a[8]:int, 0);
    var j:long = h[1];
    var d:float = f32_reinterpret_i32(i32_wrap_i64(j >> 32L));
    var k:long = b[0];
    var e:float = f32_reinterpret_i32(i32_wrap_i64(k >> 32L));
    var f:float = f32_reinterpret_i32(i32_wrap_i64(j));
    if (eqz(6698157[0]:ubyte)) {
      f_hpa(5618360);
      6698157[0]:byte = 1;
    }
    d = d - e;
    e = f - f32_reinterpret_i32(i32_wrap_i64(k));
    c = d_p444444444444044P44p44444444[15882]:int;
    if (eqz(c[29]:int)) { f_ahje(c) }
    e = {
          f = sqrt(e * e + d * d);
          if (f > 0.00001f) {
            d = d / f;
            e / f;
            goto B_e;
          }
          if (eqz(6703146[0]:ubyte)) {
            f_hpa(5623844);
            6703146[0]:byte = 1;
          }
          c = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
          d = c[1]:float;
          c[0]:float;
          label B_e:
        }
    d = g * d + f32_reinterpret_i32(i32_wrap_i64(i >> 32L));
    e = g * e + f32_reinterpret_i32(i32_wrap_i64(i));
    if (eqz(6703846[0]:ubyte)) {
      f_hpa(5629436);
      6703846[0]:byte = 1;
    }
    c = f_icke(d_p444444444444044P44p44444444[18651]:int);
    c[7]:int = 0;
    c[6]:float = d;
    c[5]:float = e;
    c[4]:int = a;
    c[2]:int = 0;
    a[16]:int = UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
  }
  g_a = h + 16;
}

function PlayerEffect_Update(a:int, b:int, c:int, d:int, e:int_ptr) { // func86841
  if (UnityEngine_GameObject_set_layer(f_canb(a, 0), 0)) {
    if (eqz(6703845[0]:ubyte)) {
      f_hpa(5629432);
      6703845[0]:byte = 1;
    }
    e = f_icke(d_p444444444444044P44p44444444[18650]:int);
    e[6] = a;
    e[2] = 0;
    e[7] = c;
    e[5] = b;
    e[4] = d;
    UnityEngine_MonoBehaviour_StartCoroutine_1(a, e, 0);
  }
}

function PlayerEffect_OnEnable(a:int, b:int) { // func87036
  var this:int_ptr;
  if (eqz(6703843[0]:ubyte)) {
    f_hpa(5683504);
    f_hpa(5620984);
    f_hpa(5609548);
    6703843[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[13679]:int);
  f_yibd(methodInfo, this, d_p444444444444044P44p44444444[32168]:int, 0);
  this = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(this[29])) { f_ahje(this) }
  UnityEngine_SceneManagement_SceneManager_add_sceneLoaded(methodInfo, 0);
}

function PlayerEffect_OnDisable(a:int_ptr, b:int, c:int, d:int) { // func87037
  b = a[16];
  if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
}

function PlayerEffect_OnSceneLoaded(a:int_ptr, b:int) { // func87038
  if (eqz(6703844[0]:ubyte)) {
    f_hpa(5668592);
    f_hpa(5668632);
    6703844[0]:byte = 1;
  }
  a[15] =
    UnityEngine_GameObject_get_activeInHierarchy(
      a,
      d_p444444444444044P44p44444444[28440]:int);
  a[8] =
    UnityEngine_GameObject_get_activeInHierarchy(
      a,
      d_p444444444444044P44p44444444[28450]:int);
}

function PlayerEffect_Awake(a:int, b:int) { // func87039
  var this:ubyte_ptr;
  if (this[68]) { PlayerEffect_PushPlayerByEnemy(this, this) }
}

function PlayerEffect_PushPlayerByEnemy(a:int, b:{ a:long, b:long, c:long, d:int, e:long, f:long, g:long, h:int }) { // func87040
  var c:int;
  var d:ubyte_ptr;
  b = g_a + -64;
  g_a = b;
  if (eqz(6703847[0]:ubyte)) {
    f_hpa(5668840);
    f_hpa(5619712);
    f_hpa(5660004);
    6703847[0]:byte = 1;
  }
  var f:int = f_rrrc(a, d_p444444444444044P44p44444444[28502]:int);
  var j:float = a[18]:float;
  if (j > 0.0f) {
    a[18]:float = j - UnityEngine_Time_get_time(0);
    goto B_c;
  }
  c = (d_p444444444444044P44p44444444[26293]:int)[4]:int;
  c = 
    ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
  c = 
    ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int;
  d = UnityEngine_MonoBehaviour_InvokeRepeating(b)[10]:int;
  UnityEngine_Camera_get_farClipPlane(
    b + 48,
    System_Linq_Enumerable_Count(a[15]:int, 0),
    0);
  if (eqz(6685672[0]:ubyte)) {
    f_hpa(5620040);
    6685672[0]:byte = 1;
  }
  var e:int = (d_p444444444444044P44p44444444[16302]:int)[23]:int;
  var h:long = e[2]:long@4;
  var i:long = e[0]:long@4;
  b.d = b.h;
  b.b = h;
  b.f = h;
  b.e = i;
  b.a = i;
  b.c = b.g;
  c = PoolManager_CreatePool(c, d, b + 16, b, 0);
  if (c) {
    d = d_p444444444444044P44p44444444[16220]:int;
    var g:int = d[184];
    if (g > (e = c[0]:int)[184]:ubyte) goto B_b;
    if ((e[25]:int + (g << 2) - 4)[0]:int != d) goto B_b;
  }
  f_sbnb(f_canb(c, 0), 1, 0);
  PlayerShadow_DisablePlayerShadow(c, f, b);
  a[18]:int = 1024416809;
  label B_c:
  g_a = b - -64;
  return ;
  label B_b:
  f_ypa(c, d);
  unreachable;
}

function PlayerEffect_CallDamageFlashEffect(a:int, b:int, c:int, d:int, e:int):int { // func87042
  var this:int;
  var defaultMaterial:int;
  var damageFlash:int;
  var spriteRenderers:int;
  if (eqz(6703845[0]:ubyte)) {
    f_hpa(5629432);
    6703845[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[18650]:int);
  methodInfo[6] = this;
  methodInfo[2] = 0;
  methodInfo[7] = defaultMaterial;
  methodInfo[5] = damageFlash;
  methodInfo[4] = spriteRenderers;
  return methodInfo;
}

function PlayerEffect_DamagePushEfect(a:int, b:int, c:int):int { // func87043
  var this:int;
  var damageSource:int;
  if (eqz(6703846[0]:ubyte)) {
    f_hpa(5629436);
    6703846[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[18651]:int);
  methodInfo[4]:int = this;
  methodInfo[2]:int = 0;
  methodInfo[5]:long@4 = damageSource[0]:long@4;
  methodInfo[7]:int = damageSource[2]:int;
  return methodInfo;
}

function PlayerEffect_PushPlayerByEnemy_d_12_System_Collections_IEnumerator_get_Current(a:int, b:int, c:int) { // func87044
  f_sbnb(f_canb(a, 0), 1, 0);
  PlayerShadow_DisablePlayerShadow(a, b, a);
}

function PlayerEffect_DashShadowPlayerEffect(a:int, b:int) { // func87045
  var this:int_ptr;
  this[18] = 1028443341;
  if (eqz(6703834[0]:ubyte)) {
    f_hpa(5624112);
    6703834[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[17320]:int);
  this[12] = 1048576000;
  this[10] = methodInfo;
  multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
}

function PlayerEffect_DamageFlashCoroutine_d_10_System_IDisposable_Dispose(a:int, b:int):int { // func87046
  var this:int;
  var f:int_ptr;
  var c:float;
  var d:{ a:long, b:long } = g_a - 16;
  g_a = d;
  var methodInfo:int = 0;
  if (eqz(6703848[0]:ubyte)) {
    f_hpa(5741640);
    f_hpa(5741636);
    6703848[0]:byte = 1;
  }
  var e:int = this[6]:int;
  br_table[B_g, B_f, B_e, ..B_b](this[2]:int)
  label B_g:
  this[2]:int = -1;
  this[9]:int = 0;
  this[8]:int = (f = this[4]:int);
  goto B_d;
  label B_f:
  this[2]:int = -1;
  c = this[11]:float;
  if (c < 1.0f) goto B_c;
  multiple_UnityEngine_Renderer_GetSharedMaterial(this[10]:int,
                                                  this[7]:int,
                                                  0);
  this[2]:long@4 = 2L;
  methodInfo = 1;
  goto B_b;
  label B_e:
  this[10]:int = 0;
  this[2]:int = -1;
  this[9]:int = (methodInfo = this[9]:int + 1);
  f = this[8]:int;
  label B_d:
  if (f[3] <= methodInfo) {
    methodInfo = 0;
    this[8]:int = 0;
    goto B_b;
  }
  this[10]:int = (methodInfo = f[methodInfo + 4]:int);
  multiple_UnityEngine_Renderer_GetSharedMaterial(methodInfo,
                                                  this[5]:int,
                                                  0);
  methodInfo = 
    multiple_UnityEngine_Renderer_get_bounds(this[10]:int, 0);
  d.b = e[6]:long@4;
  d.a = e[4]:long@4;
  UnityEngine_Material_SetFloat(
    methodInfo,
    d_p444444444444044P44p44444444[46702]:int,
    d,
    0);
  this[11]:int = 0;
  label B_c:
  this[11]:float = (c = c + UnityEngine_Time_get_time(0) * 10.0f);
  methodInfo = 
    multiple_UnityEngine_Renderer_get_bounds(this[10]:int, 0);
  c = UnityEngine_AnimationCurve_get_length(
        e[9]:int,
        select_if(0.0f, (c min 1.0f) + 0.0f, c < 0.0f),
        0);
  UnityEngine_Material_SetInt(methodInfo,
                              d_p444444444444044P44p44444444[46701]:int,
                              c,
                              0);
  this[2]:long@4 = 1L;
  methodInfo = 1;
  label B_b:
  g_a = d + 16;
  return methodInfo;
}

function PlayerEffect_DamageFlashCoroutine_d_10_System_Collections_Generic_IEnumerator_System_Object_get_Curr(a:int, b:int) { // func87047
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5699348));
  unreachable;
}

function PlayerEffect_PushPlayerByEnemy_d_12_System_IDisposable_Dispose(a:int, b:int):int { // func87048
  var this:int;
  var f:float;
  var g:float;
  var h:long;
  var d:int;
  var methodInfo:long_ptr = g_a - 32;
  g_a = methodInfo;
  var c:int = this[4]:int;
  var e:float = 
    {
      br_table[B_d, B_c, ..B_a](this[2]:int)
      label B_d:
      this[2]:int = -1;
      UnityEngine_RaycastHit2D_op_Implicit(methodInfo + 24, c[8]:int, 0);
      h = methodInfo[3];
      this[10]:long@4 = 0L;
      this[9]:int = h >> 32L;
      this[8]:int = h;
      0.0f;
      goto B_b;
      label B_c:
      this[2]:int = -1;
      this[11]:float;
      label B_b:
    }
  if (eqz(e < (f = c[12]:float))) goto B_a;
  d = c[8]:int;
  methodInfo[1] =
    (h = 
       i64_extend_i32_u(
         i32_reinterpret_f32(
           (g = this[9]:float) +
           (e = select_if(0.0f, (e = e / f) min 1.0f, e < 0.0f)) *
           (this[6]:float - g))) <<
       32L |
       i64_extend_i32_u(
         i32_reinterpret_f32((f = this[8]:float) + e * (this[5]:float - f))));
  methodInfo[2] = h;
  multiple_UnityEngine_Rigidbody2D_get_rotation(d, methodInfo + 8, 0);
  this[11]:float =
    this[11]:float + UnityEngine_Time_get_fixedUnscaledDeltaTime(0);
  c = c[10]:int;
  d = 1;
  this[2]:int = 1;
  this[3]:int = c;
  label B_a:
  g_a = methodInfo + 32;
  return d;
}

function PlayerEffect_PushPlayerByEnemy_d_12_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func87049
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5699352));
  unreachable;
}

