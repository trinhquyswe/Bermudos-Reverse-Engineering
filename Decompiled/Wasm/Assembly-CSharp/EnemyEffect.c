// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: EnemyEffect  (Assembly-CSharp)

function EnemyEffect_DamageFlashCoroutine(a:int, b:int, c:long_ptr) { // func86837
  c = g_a - 16;
  g_a = c;
  if (UnityEngine_GameObject_set_layer(f_canb(a, 0), 0)) {
    UnityEngine_RaycastHit2D_op_Implicit(c + 8, a[8]:int, 0);
    var i:long = c[1];
    var g:float = a[11]:float;
    UnityEngine_RaycastHit2D_op_Implicit(c + 8, a[8]:int, 0);
    var e:float = b[0]:float;
    var j:long = c[1];
    var d:float = f32_reinterpret_i32(i32_wrap_i64(j));
    var f:float = f32_reinterpret_i32(i32_wrap_i64(j >> 32L));
    var h:float = b[1]:float;
    if (eqz(6698157[0]:ubyte)) {
      f_hpa(5618360);
      6698157[0]:byte = 1;
    }
    e = d - e;
    d = f - h;
    b = d_p444444444444044P44p44444444[15882]:int;
    if (eqz(b[29]:int)) { f_ahje(b) }
    e = {
          f = sqrt(e * e + d * d);
          if (f > 0.00001f) {
            d = d / f;
            e / f;
            goto B_d;
          }
          if (eqz(6703146[0]:ubyte)) {
            f_hpa(5623844);
            6703146[0]:byte = 1;
          }
          b = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
          d = b[1]:float;
          b[0]:float;
          label B_d:
        }
    d = g * d + f32_reinterpret_i32(i32_wrap_i64(i >> 32L));
    e = g * e + f32_reinterpret_i32(i32_wrap_i64(i));
    if (eqz(6703839[0]:ubyte)) {
      f_hpa(5627344);
      6703839[0]:byte = 1;
    }
    b = f_icke(d_p444444444444044P44p44444444[18128]:int);
    b[7]:int = 0;
    b[6]:float = d;
    b[5]:float = e;
    b[4]:int = a;
    b[2]:int = 0;
    a[17]:int = UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
  }
  g_a = c + 16;
}

function EnemyEffect_Start(a:int, b:int, c:int, d:int, e:int_ptr) { // func86842
  if (UnityEngine_GameObject_set_layer(f_canb(a, 0), 0)) {
    if (eqz(6703838[0]:ubyte)) {
      f_hpa(5627340);
      6703838[0]:byte = 1;
    }
    e = f_icke(d_p444444444444044P44p44444444[18127]:int);
    e[6] = a;
    e[2] = 0;
    e[7] = c;
    e[5] = b;
    e[4] = d;
    UnityEngine_MonoBehaviour_StartCoroutine_1(a, e, 0);
  }
}

function EnemyEffect_PushEnemyByAmmo(a:int, b:int, c:int) { // func86918
  var this:float_ptr;
  var targetPosition:int;
  var methodInfo:{ a:float, b:float, c:float } = g_a - 16;
  g_a = methodInfo;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo,
    System_Linq_Enumerable_Count(this, 0),
    0);
  var i:float = methodInfo.c;
  var j:float = methodInfo.b;
  var k:float = methodInfo.a;
  var h:float = this[11];
  UnityEngine_Camera_get_farClipPlane(
    methodInfo,
    System_Linq_Enumerable_Count(this, 0),
    0);
  var f:float = methodInfo.a;
  var d:float = methodInfo.b;
  var e:float = methodInfo.c;
  var g:float = targetPosition[2]:float;
  var l:float = targetPosition[1]:float;
  var m:float = targetPosition[0]:float;
  if (eqz(6703148[0]:ubyte)) {
    f_hpa(5618360);
    6703148[0]:byte = 1;
  }
  e = e - g;
  d = d - l;
  f = f - m;
  targetPosition = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(targetPosition[29]:int)) { f_ahje(targetPosition) }
  f = 
    {
      g = sqrt(f * f + d * d + e * e);
      if (g > 0.00001f) {
        e = e / g;
        d = d / g;
        f / g;
        goto B_c;
      }
      if (eqz(6703145[0]:ubyte)) {
        f_hpa(5623880);
        6703145[0]:byte = 1;
      }
      targetPosition = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
      e = targetPosition[2]:float;
      d = targetPosition[1]:float;
      targetPosition[0]:float;
      label B_c:
    }
  if (eqz(6703840[0]:ubyte)) {
    f_hpa(5627348);
    6703840[0]:byte = 1;
  }
  targetPosition = f_icke(d_p444444444444044P44p44444444[18129]:int);
  targetPosition[7]:float = i + h * e;
  targetPosition[6]:float = j + h * d;
  targetPosition[5]:float = k + h * f;
  targetPosition[4]:int = this;
  targetPosition[2]:int = 0;
  UnityEngine_MonoBehaviour_StartCoroutine_1(this, targetPosition, 0);
  g_a = methodInfo + 16;
}

function EnemyEffect_PushEnemyByWeaponCoroutine(a:int_ptr, b:int) { // func86919
  UnityEngine_ParticleSystem_Play(a[14], 0)
}

function EnemyEffect_Awake(a:int, b:int) { // func87023
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703836[0]:ubyte)) {
    f_hpa(5602056);
    f_hpa(5672632);
    6703836[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[15];
  var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[29450]:int, 0);
  if (eqz(6703940[0]:ubyte)) {
    f_hpa(5602056);
    6703940[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_iyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
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

function EnemyEffect_OnEnable(a:int, b:int) { // func87024
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703837[0]:ubyte)) {
    f_hpa(5602056);
    f_hpa(5672632);
    6703837[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[15];
  var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[29450]:int, 0);
  if (eqz(6703941[0]:ubyte)) {
    f_hpa(5602056);
    6703941[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_kyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
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

function EnemyEffect_PoiseEvent_onPoiseEvent(a:int_ptr, b:int) { // func87025
  UnityEngine_ParticleSystem_Stop_1(a[14], 0);
  UnityEngine_ParticleSystem_Stop_1(a[13], 0);
}

function EnemyEffect_CallDamageFlashEffect(a:int, b:int, c:int, d:int, e:int):int { // func87026
  var this:int;
  var defaultMaterial:int;
  var damageFlash:int;
  var spriteRenderers:int;
  if (eqz(6703838[0]:ubyte)) {
    f_hpa(5627340);
    6703838[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[18127]:int);
  methodInfo[6] = this;
  methodInfo[2] = 0;
  methodInfo[7] = defaultMaterial;
  methodInfo[5] = damageFlash;
  methodInfo[4] = spriteRenderers;
  return methodInfo;
}

function EnemyEffect_DamagePushEfect(a:int, b:int, c:int):int { // func87027
  var this:int;
  var ammo:int;
  if (eqz(6703839[0]:ubyte)) {
    f_hpa(5627344);
    6703839[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[18128]:int);
  methodInfo[4]:int = this;
  methodInfo[2]:int = 0;
  methodInfo[5]:long@4 = ammo[0]:long@4;
  methodInfo[7]:int = ammo[2]:int;
  return methodInfo;
}

function EnemyEffect_PushEnemyByWeapon(a:int, b:int, c:int):int { // func87028
  var this:int;
  var playerPosition:int;
  if (eqz(6703840[0]:ubyte)) {
    f_hpa(5627348);
    6703840[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[18129]:int);
  methodInfo[4]:int = this;
  methodInfo[2]:int = 0;
  methodInfo[5]:long@4 = playerPosition[0]:long@4;
  methodInfo[7]:int = playerPosition[2]:int;
  return methodInfo;
}

function EnemyEffect_DamageFlashCoroutine_d_9_System_IDisposable_Dispose(a:int, b:int):int { // func87029
  var this:int;
  var f:int_ptr;
  var c:float;
  var d:{ a:long, b:long } = g_a - 16;
  g_a = d;
  var methodInfo:int = 0;
  if (eqz(6703841[0]:ubyte)) {
    f_hpa(5741640);
    f_hpa(5741636);
    6703841[0]:byte = 1;
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

function EnemyEffect_DamageFlashCoroutine_d_9_System_Collections_Generic_IEnumerator_System_Object_get_Curren(a:int, b:int) { // func87030
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5697820));
  unreachable;
}

function EnemyEffect_PushEnemyByAmmo_d_11_System_IDisposable_Dispose(a:int, b:int):int { // func87031
  var this:int;
  var l:long;
  var e:int;
  var methodInfo:int = g_a - 48;
  g_a = methodInfo;
  var c:int = this[4]:int;
  var d:int = -1;
  var f:float = 
    {
      br_table[B_e, B_d, B_b, ..B_a](this[2]:int)
      label B_e:
      this[2]:int = -1;
      UnityEngine_RaycastHit2D_op_Implicit(methodInfo + 40, c[8]:int, 0);
      l = methodInfo[5]:long;
      this[10]:long@4 = 0L;
      this[9]:int = l >> 32L;
      this[8]:int = l;
      0.0f;
      goto B_c;
      label B_d:
      this[2]:int = -1;
      this[11]:float;
      label B_c:
    }
  d = 2;
  var i:float = c[12]:float;
  if (i > f) {
    var j:float = this[6]:float;
    var g:float = this[9]:float;
    var k:float = this[5]:float;
    var h:float = this[8]:float;
    UnityEngine_RaycastHit2D_op_Implicit(methodInfo + 40, c[8]:int, 0);
    l = methodInfo[5]:long;
    if (UnityEngine_AI_NavMeshAgent_set_updateUpAxis((c[16]:int)[8]:int, 0)) {
      d = (c[16]:int)[8]:int;
      methodInfo[8]:int = 0;
      methodInfo[4]:int = 0;
      methodInfo[7]:float =
        g + (f = select_if(0.0f, (f = f / i) min 1.0f, f < 0.0f)) * (j - g) -
        f32_reinterpret_i32(i32_wrap_i64(l >> 32L));
      methodInfo[6]:float =
        h + f * (k - h) - f32_reinterpret_i32(i32_wrap_i64(l));
      methodInfo[1]:long = methodInfo[3]:long;
      multiple_UnityEngine_AI_NavMeshAgent_Warp(d, methodInfo + 8, 0);
    }
    this[11]:float =
      this[11]:float + UnityEngine_Time_get_fixedUnscaledDeltaTime(0);
    d = 1;
  }
  this[3]:int = c[10]:int;
  e = 1;
  label B_b:
  this[2]:int = d;
  label B_a:
  g_a = methodInfo + 48;
  return e;
}

function EnemyEffect_PushEnemyByAmmo_d_11_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func87032
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5697824));
  unreachable;
}

function EnemyEffect_PushEnemyByWeaponCoroutine_d_13_System_IDisposable_Dispose(a:int, b:int):int { // func87033
  var this:int;
  var p:int;
  var methodInfo:int = g_a - 48;
  g_a = methodInfo;
  var o:int = this[4]:int;
  var n:{ a:float, b:float, c:float } = -1;
  var c:float = 
    {
      br_table[B_e, B_d, B_b, ..B_a](this[2]:int)
      label B_e:
      this[2]:int = -1;
      UnityEngine_RaycastHit2D_op_Implicit(methodInfo + 32, o[8]:int, 0);
      var q:long = methodInfo[4]:long;
      this[10]:long@4 = 0L;
      this[9]:int = q >> 32L;
      this[8]:int = q;
      0.0f;
      goto B_c;
      label B_d:
      this[2]:int = -1;
      this[11]:float;
      label B_c:
    }
  n = 2;
  var g:float = o[12]:float;
  if (g > c) {
    var h:float = this[6]:float;
    var d:float = this[9]:float;
    var i:float = this[7]:float;
    var e:float = this[10]:float;
    var j:float = this[5]:float;
    var f:float = this[8]:float;
    UnityEngine_Camera_get_farClipPlane(
      methodInfo + 32,
      System_Linq_Enumerable_Count(o, 0),
      0);
    var k:float = methodInfo[8]:float;
    var l:float = methodInfo[9]:float;
    var m:float = methodInfo[10]:float;
    UnityEngine_Camera_get_farClipPlane(
      methodInfo + 32,
      System_Linq_Enumerable_Count(o, 0),
      0);
    e = 
      e + (c = select_if(0.0f, (c = c / g) min 1.0f, c < 0.0f)) * (i - e);
    g = e - methodInfo[10]:float;
    h = d + c * (h - d);
    d = h - methodInfo[9]:float;
    f = f + c * (j - f);
    c = f - methodInfo[8]:float;
    if (eqz(6703145[0]:ubyte)) {
      f_hpa(5623880);
      6703145[0]:byte = 1;
    }
    c = c - (n = (d_p444444444444044P44p44444444[17262]:int)[23]:int).a;
    if (c * c + (c = d - n.b) * c + (c = g - n.c) * c < 0.0f) goto B_h;
    if (
      eqz(
        UnityEngine_AI_NavMeshAgent_set_updateUpAxis((o[16]:int)[8]:int, 0))) goto B_h;
    n = (o[16]:int)[8]:int;
    p = methodInfo + 24;
    p[0]:float = e - m;
    methodInfo[2]:int = p[0]:int;
    methodInfo[5]:float = h - l;
    methodInfo[4]:float = f - k;
    methodInfo[0]:long = methodInfo[2]:long;
    multiple_UnityEngine_AI_NavMeshAgent_Warp(n, methodInfo, 0);
    label B_h:
    this[11]:float =
      this[11]:float + UnityEngine_Time_get_fixedUnscaledDeltaTime(0);
    n = 1;
  }
  this[3]:int = o[10]:int;
  p = 1;
  label B_b:
  this[2]:int = n;
  label B_a:
  g_a = methodInfo + 48;
  return p;
}

function EnemyEffect_PushEnemyByWeaponCoroutine_d_13_System_Collections_Generic_IEnumerator_System_Object_get(a:int, b:int) { // func87034
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5697828));
  unreachable;
}

function EnemyEffect_PushEnemyByWeaponCoroutine_d_13_System_Collections_IEnumerator_get_Current(a:int, b:int) { // func87035
  var this:int_ptr;
  if (eqz(6703842[0]:ubyte)) {
    f_hpa(5683504);
    f_hpa(5620984);
    f_hpa(5609548);
    6703842[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[13679]:int);
  f_yibd(methodInfo, this, d_p444444444444044P44p44444444[32168]:int, 0);
  this = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(this[29])) { f_ahje(this) }
  UnityEngine_SceneManagement_SceneManager_LoadFirstScene_Internal(
    methodInfo,
    0);
}

