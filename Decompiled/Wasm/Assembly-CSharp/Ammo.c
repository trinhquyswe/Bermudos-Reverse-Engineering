// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Ammo  (Assembly-CSharp)

function Ammo_SetAmmoPlayer(a:long_ptr@4, b:long_ptr@4, c:int) { // func21524
  a[15] = b[0]
}

function Ammo_Awake(a:int, b:int) { // func86820
  var this:int;
  var c:long_ptr = g_a - 16;
  g_a = c;
  if (eqz(6703717[0]:ubyte)) {
    f_hpa(5660012);
    6703717[0]:byte = 1;
  }
  UnityEngine_Camera_get_farClipPlane(
    c,
    System_Linq_Enumerable_Count(this, 0),
    0);
  this[13]:long@4 = c[0];
  if (this[128]:ubyte) {
    this[128]:byte = 0;
    goto B_b;
  }
  var methodInfo:ubyte_ptr = 
    (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  methodInfo = ((if (methodInfo[189] & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  SoundEffectManager_Start(
    ((if (methodInfo[189] & 1) {
        methodInfo
      } else {
        System_Threading_Monitor_Enter_1(methodInfo)
      })[23]:int)[0]:int,
    this[31]:int,
    0);
  label B_b:
  g_a = c + 16;
}

function Ammo_OnEnable(a:int, b:int) { // func86821
  var this:int;
  Ammo_AmmoHitEffect(this, this);
}

function Ammo_AmmoHitEffect(a:int, b:int) { // func86822
  var this:int_ptr;
  if (eqz(6703721[0]:ubyte)) {
    f_hpa(5610740);
    f_hpa(5718404);
    f_hpa(5712544);
    f_hpa(5728548);
    6703721[0]:byte = 1;
  }
  var methodInfo:int_ptr = Mono_Security_ASN1Convert_ToOid(
                             d_p444444444444044P44p44444444[13977]:int,
                             1);
  methodInfo[4] = d_p444444444444044P44p44444444[40893]:int;
  this[10] = UnityEngine_LayerMask_NameToLayer(methodInfo, 0);
  methodInfo = Mono_Security_ASN1Convert_ToOid(
                 d_p444444444444044P44p44444444[13977]:int,
                 1);
  methodInfo[4] = d_p444444444444044P44p44444444[43429]:int;
  this[11] = UnityEngine_LayerMask_NameToLayer(methodInfo, 0);
  methodInfo = Mono_Security_ASN1Convert_ToOid(
                 d_p444444444444044P44p44444444[13977]:int,
                 1);
  methodInfo[4] = d_p444444444444044P44p44444444[39428]:int;
  this[12] = UnityEngine_LayerMask_NameToLayer(methodInfo, 0);
}

function Ammo_Start(a:int, b:int) { // func86823
  var this:int_ptr;
  br_table[B_b, B_a, ..B_c](this[29] - 1)
  label B_c:
  Ammo_Update(this, this);
  return ;
  label B_b:
  Ammo_GetNextPositionYCorrectionAbsolute(this, this);
  label B_a:
}

function Ammo_Update(a:int, b:int) { // func86824
  var this:int;
  var e:long;
  var f:long;
  var c:float;
  var d:float;
  this[17]:long@4 =
    i64_extend_i32_u(
      i32_reinterpret_f32(
        c = f32_reinterpret_i32(i32_wrap_i64((e = this[15]:long@4) >> 32L)) -
            f32_reinterpret_i32(i32_wrap_i64((f = this[13]:long@4) >> 32L)))) <<
    32L |
    i64_extend_i32_u(
      i32_reinterpret_f32(d = f32_reinterpret_i32(i32_wrap_i64(e)) -
                              f32_reinterpret_i32(i32_wrap_i64(f))));
  if (eqz(6698157[0]:ubyte)) {
    f_hpa(5618360);
    6698157[0]:byte = 1;
  }
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
  methodInfo = 
    {
      c = sqrt(d * d + c * c);
      if (c > 0.00001f) {
        i32_reinterpret_f32(d / c);
        goto B_c;
      }
      if (eqz(6703146[0]:ubyte)) {
        f_hpa(5623844);
        6703146[0]:byte = 1;
      }
      ((d_p444444444444044P44p44444444[17253]:int)[23]:int)[0]:int;
      label B_c:
    }
  d = this[18]:float;
  c = this[17]:float;
  if (eqz(6698157[0]:ubyte)) {
    f_hpa(5618360);
    6698157[0]:byte = 1;
  }
  methodInfo = methodInfo & 2147483647;
  var g:int_ptr = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(g[29])) { f_ahje(g) }
  if (abs(
        {
          c = sqrt(c * c + d * d);
          if (c > 0.00001f) {
            d / c;
            goto B_h;
          }
          if (eqz(6703146[0]:ubyte)) {
            f_hpa(5623844);
            6703146[0]:byte = 1;
          }
          ((d_p444444444444044P44p44444444[17253]:int)[23]:int)[1]:float;
          label B_h:
        }) >
      f32_reinterpret_i32(methodInfo)) {
    if (this[18]:float < 0.0f) { this[26]:float = -(this[26]:float) }
    Ammo_UpdateAmmoPosition(this, this);
    return ;
  }
  if (this[17]:float < 0.0f) { this[26]:float = -(this[26]:float) }
  Ammo_UpdateAmmoXPosition(this, this);
}

function Ammo_GetNextPositionYCorrectionAbsolute(a:int, b:int) { // func86825
  var this:int;
  var k:int;
  var f:float;
  var e:float;
  var methodInfo:int = g_a - 48;
  g_a = methodInfo;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 32,
    k = System_Linq_Enumerable_Count(this, 0),
    0);
  var g:float = methodInfo[10]:float;
  var h:float = methodInfo[9]:float;
  var i:float = methodInfo[8]:float;
  var c:float = this[20]:float;
  var d:float = this[19]:float;
  if (eqz(6698157[0]:ubyte)) {
    f_hpa(5618360);
    6698157[0]:byte = 1;
  }
  var j:int = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(j[29]:int)) { f_ahje(j) }
  e = {
        e = sqrt(d * d + c * c);
        if (e > 0.00001f) {
          f = c / e;
          d / e;
          goto B_c;
        }
        if (eqz(6703146[0]:ubyte)) {
          f_hpa(5623844);
          6703146[0]:byte = 1;
        }
        j = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
        f = j[1]:float;
        j[0]:float;
        label B_c:
      }
  j = methodInfo + 24;
  j[0]:float =
    g +
    (c = (this[4]:int)[3]:float) * 0.0f *
    (d = UnityEngine_Time_get_time(0));
  methodInfo[2]:int = j[0]:int;
  methodInfo[5]:float = h + d * f * c;
  methodInfo[4]:float = i + d * e * c;
  methodInfo[0]:long = methodInfo[2]:long;
  multiple_UnityEngine_Transform_ctor(k, methodInfo, 0);
  g_a = methodInfo + 48;
}

function Ammo_UpdateAmmoPosition(a:int, b:int) { // func86826
  var this:int;
  var c:float;
  var h:float;
  var d:float;
  var methodInfo:int = g_a - 48;
  g_a = methodInfo;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 32,
    System_Linq_Enumerable_Count(this, 0),
    0);
  var e:float = methodInfo[9]:float;
  var f:float = this[26]:float;
  var g:float = UnityEngine_Time_get_time(0);
  g = UnityEngine_AnimationCurve_get_length(
        (this[4]:int)[12]:int,
        f = ((e = e + f * g) - this[14]:float) / this[18]:float,
        0);
  this[25]:float =
    (h = 
       UnityEngine_AnimationCurve_get_length((this[4]:int)[13]:int, f, 0) *
       (c = this[17]:float));
  this[22]:float = (d = g * this[23]:float);
  if (eqz(c > 0.0f)) goto B_a;
  if (eqz(this[18]:float > 0.0f)) goto B_a;
  this[22]:float = (d = -(d));
  label B_a:
  if (eqz(c < 0.0f)) goto B_b;
  if (eqz(this[18]:float < 0.0f)) goto B_b;
  this[22]:float = (d = -(d));
  label B_b:
  c = this[13]:float;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 32,
    System_Linq_Enumerable_Count(this, 0),
    0);
  this[19]:long@4 =
    i64_extend_i32_u(
      i32_reinterpret_f32((c = h + c + d) - methodInfo[8]:float)) |
    i64_extend_i32_u(i32_reinterpret_f32(e - methodInfo[9]:float)) << 32L;
  this[26]:float =
    UnityEngine_AnimationCurve_get_length((this[4]:int)[14]:int, g, 0) *
    (this[4]:int)[3]:float;
  var i:int = System_Linq_Enumerable_Count(this, 0);
  methodInfo[6]:int = 0;
  methodInfo[2]:int = 0;
  methodInfo[5]:float = e;
  methodInfo[4]:float = c;
  methodInfo[0]:long = methodInfo[2]:long;
  multiple_UnityEngine_Transform_ctor(i, methodInfo, 0);
  if (f64_promote_f32(f) > 0.996) { this[29]:int = 1 }
  g_a = methodInfo + 48;
}

function Ammo_UpdateAmmoXPosition(a:int, b:int) { // func86827
  var this:int;
  var f:float;
  var g:float;
  var h:float;
  var methodInfo:int = g_a - 48;
  g_a = methodInfo;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 32,
    System_Linq_Enumerable_Count(this, 0),
    0);
  var d:float = methodInfo[8]:float;
  var c:float = this[26]:float;
  var e:float = UnityEngine_Time_get_time(0);
  c = UnityEngine_AnimationCurve_get_length(
        (this[4]:int)[12]:int,
        d = ((e = d + c * e) - this[13]:float) / this[17]:float,
        0);
  this[24]:float =
    (g = 
       UnityEngine_AnimationCurve_get_length((this[4]:int)[13]:int, d, 0) *
       (f = this[18]:float));
  this[21]:float = (c = c * this[23]:float);
  h = this[17]:float;
  if (eqz(h > 0.0f)) goto B_a;
  if (eqz(f < 0.0f)) goto B_a;
  this[21]:float = (c = -(c));
  label B_a:
  if (eqz(h < 0.0f)) goto B_b;
  if (eqz(f < 0.0f)) goto B_b;
  this[21]:float = (c = -(c));
  label B_b:
  f = this[14]:float;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 32,
    System_Linq_Enumerable_Count(this, 0),
    0);
  this[19]:long@4 =
    i64_extend_i32_u(i32_reinterpret_f32(e - methodInfo[8]:float)) |
    i64_extend_i32_u(
      i32_reinterpret_f32((c = g + f + c) - methodInfo[9]:float)) <<
    32L;
  this[26]:float =
    UnityEngine_AnimationCurve_get_length((this[4]:int)[14]:int, d, 0) *
    (this[4]:int)[3]:float;
  var i:int = System_Linq_Enumerable_Count(this, 0);
  methodInfo[6]:int = 0;
  methodInfo[2]:int = 0;
  methodInfo[5]:float = c;
  methodInfo[4]:float = e;
  methodInfo[0]:long = methodInfo[2]:long;
  multiple_UnityEngine_Transform_ctor(i, methodInfo, 0);
  if (f64_promote_f32(d) > 0.996) { this[29]:int = 1 }
  g_a = methodInfo + 48;
}

function Ammo_MoveAmmoByDirection(a:int, b:float, c:int) { // func86828
  a[26]:float =
    UnityEngine_AnimationCurve_get_length((a[4]:int)[14]:int, b, 0) *
    (a[4]:int)[3]:float
}

function Ammo_CalculateNextAmmoMoveSpeed(a:int, b:float_ptr, c:{ a:float, b:float, c:float }, d:{ a:float, b:float, c:float }) { // func86829
  d = g_a - 16;
  g_a = d;
  a[4]:int = b;
  var e:float = c.a;
  var i:float = c.b;
  var f:float = c.c;
  UnityEngine_Camera_get_farClipPlane(
    d,
    System_Linq_Enumerable_Count(a, 0),
    0);
  var g:float = d.c;
  var h:float = d.b;
  var j:float = d.a;
  if (eqz(6698158[0]:ubyte)) {
    f_hpa(5618360);
    6698158[0]:byte = 1;
  }
  f = f - g;
  g = i - h;
  h = e - j;
  c = i32_reinterpret_f32(i);
  var k:int_ptr = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(k[29])) { f_ahje(k) }
  k = i32_reinterpret_f32(e);
  UnityEngine_Camera_get_farClipPlane(
    d,
    System_Linq_Enumerable_Count(a, 0),
    0);
  e = b[5];
  a[15]:long@4 = i64_extend_i32_u(k) | i64_extend_i32_u(c) << 32L;
  a[23]:float = e * abs(sqrt(h * h + g * g + f * f));
  if (eqz(6703718[0]:ubyte)) {
    f_hpa(5718412);
    6703718[0]:byte = 1;
  }
  UnityEngine_GameObject_get_transform(
    f_canb(a, 0),
    UnityEngine_LayerMask_LayerToName(
      d_p444444444444044P44p44444444[40895]:int,
      0),
    0);
  a[120]:byte = 0;
  a[29]:int = 0;
  AmmoAnimation_Awake(a[9]:int, a);
  f_sbnb(f_canb(a, 0), 1, 0);
  g_a = d + 16;
}

function Ammo_InitialiseAmmo(a:int, b:int) { // func86831
  if (eqz(6703718[0]:ubyte)) {
    f_hpa(5718412);
    6703718[0]:byte = 1;
  }
  UnityEngine_GameObject_get_transform(
    f_canb(a, 0),
    UnityEngine_LayerMask_LayerToName(
      d_p444444444444044P44p44444444[40895]:int,
      0),
    0);
}

function Ammo_SetTargetPosition(a:int, b:int, c:int) { // func86832
  var this:int;
  var target:int;
  f_sbnb(f_canb(this, 0), target, 0);
}

function Ammo_SetGameObjectActive(a:int, b:int, c:int) { // func86833
  var this:int;
  var isActive:int;
  var m:long;
  var methodInfo:int;
  var e:int_ptr;
  var g:int;
  var f:int_ptr;
  var h:int;
  var j:float;
  var i:float;
  var k:float;
  var l:float;
  var d:{ a:long, b:int, c:long, d:int, e:long, f:long, g:long, h:int } = 
    g_a + -64;
  g_a = d;
  if (eqz(6703719[0]:ubyte)) {
    f_hpa(5668404);
    f_hpa(5668484);
    f_hpa(5668596);
    f_hpa(5668600);
    f_hpa(5668612);
    f_hpa(5668840);
    6703719[0]:byte = 1;
  }
  if (eqz(this[120]:ubyte)) {
    methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                   isActive,
                   d_p444444444444044P44p44444444[28445]:int);
    if (eqz(methodInfo)) goto B_c;
    if (methodInfo[24]:ubyte) goto B_c;
    Health_Start(methodInfo[5]:int,
                 select_if((this[4]:int)[4]:int,
                           methodInfo = methodInfo[4]:int,
                           methodInfo <= 0),
                 this);
    label B_c:
    if (
      (this[11]:int &
       1 << UnityEngine_Camera_get_cullingMask(f_canb(isActive, 0), 0)) <=
      0) goto B_d;
    methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                   isActive,
                   d_p444444444444044P44p44444444[28441]:int);
    UnityEngine_Camera_get_farClipPlane(
      d + 48,
      System_Linq_Enumerable_Count(this, 0),
      0);
    d.f = (m = d.g);
    d.e = m;
    PlayerEffect_DamageFlashCoroutine(methodInfo, d + 32, this);
    e = UnityEngine_GameObject_get_activeInHierarchy(
          isActive,
          d_p444444444444044P44p44444444[28441]:int);
    f = UnityEngine_MonoBehaviour_InvokeRepeating(this)[6]:int;
    g = UnityEngine_MonoBehaviour_InvokeRepeating(this)[7]:int;
    h = f_rrrc(isActive, d_p444444444444044P44p44444444[28502]:int);
    if (eqz(UnityEngine_GameObject_set_layer(f_canb(e, 0), 0))) goto B_d;
    if (eqz(6703845[0]:ubyte)) {
      f_hpa(5629432);
      6703845[0]:byte = 1;
    }
    methodInfo = f_icke(d_p444444444444044P44p44444444[18650]:int);
    methodInfo[6]:int = e;
    methodInfo[2]:int = 0;
    methodInfo[7]:int = g;
    methodInfo[5]:int = f;
    methodInfo[4]:int = h;
    UnityEngine_MonoBehaviour_StartCoroutine_1(e, methodInfo, 0);
    label B_d:
    if (
      (this[10]:int &
       1 << UnityEngine_Camera_get_cullingMask(f_canb(isActive, 0), 0)) <=
      0) goto B_f;
    methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                   isActive,
                   d_p444444444444044P44p44444444[28413]:int);
    if (methodInfo) {
      UnityEngine_Camera_get_farClipPlane(
        d + 48,
        System_Linq_Enumerable_Count(this, 0),
        0);
      d.d = d.h;
      d.c = d.g;
      EnemyEffect_DamageFlashCoroutine(methodInfo, d + 16, this);
    }
    methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                   isActive,
                   d_p444444444444044P44p44444444[28413]:int);
    if (eqz(methodInfo)) goto B_h;
    f = UnityEngine_MonoBehaviour_InvokeRepeating(this)[6]:int;
    g = UnityEngine_MonoBehaviour_InvokeRepeating(this)[7]:int;
    h = f_rrrc(isActive, d_p444444444444044P44p44444444[28502]:int);
    if (
      eqz(UnityEngine_GameObject_set_layer(f_canb(methodInfo, 0), 0))) goto B_h;
    if (eqz(6703838[0]:ubyte)) {
      f_hpa(5627340);
      6703838[0]:byte = 1;
    }
    e = f_icke(d_p444444444444044P44p44444444[18127]:int);
    e[6] = methodInfo;
    e[2] = 0;
    e[7] = g;
    e[5] = f;
    e[4] = h;
    UnityEngine_MonoBehaviour_StartCoroutine_1(methodInfo, e, 0);
    label B_h:
    methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                   isActive,
                   d_p444444444444044P44p44444444[28442]:int);
    methodInfo[6]:float =
      (i = methodInfo[6]:float - (j = f32_convert_i32_s(this[27]:int)));
    if (eqz(i <= 0.0f)) goto B_f;
    k = methodInfo[7]:float;
    l = methodInfo[5]:float;
    f = methodInfo[4]:int;
    if (eqz(6703942[0]:ubyte)) {
      f_hpa(5619836);
      6703942[0]:byte = 1;
    }
    e = f[4];
    if (eqz(e)) goto B_f;
    methodInfo = f_icke(d_p444444444444044P44p44444444[16251]:int);
    methodInfo[5]:float = k;
    methodInfo[4]:float = l;
    methodInfo[3]:float = i;
    methodInfo[2]:float = j;
    call_indirect(e[8], f, methodInfo, e[5], e[3]);
    label B_f:
    if (
      (this[12]:int &
       1 << UnityEngine_Camera_get_cullingMask(f_canb(isActive, 0), 0)) <=
      0) goto B_k;
    methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                   isActive,
                   d_p444444444444044P44p44444444[28442]:int);
    methodInfo[6]:float =
      (i = methodInfo[6]:float - (j = f32_convert_i32_s(this[27]:int)));
    if (eqz(i <= 0.0f)) goto B_l;
    k = methodInfo[7]:float;
    l = methodInfo[5]:float;
    f = methodInfo[4]:int;
    if (eqz(6703942[0]:ubyte)) {
      f_hpa(5619836);
      6703942[0]:byte = 1;
    }
    e = f[4];
    if (eqz(e)) goto B_l;
    methodInfo = f_icke(d_p444444444444044P44p44444444[16251]:int);
    methodInfo[5]:float = k;
    methodInfo[4]:float = l;
    methodInfo[3]:float = i;
    methodInfo[2]:float = j;
    call_indirect(e[8], f, methodInfo, e[5], e[3]);
    label B_l:
    methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                   isActive,
                   d_p444444444444044P44p44444444[28393]:int);
    if (methodInfo) {
      UnityEngine_Camera_get_farClipPlane(
        d + 48,
        System_Linq_Enumerable_Count(this, 0),
        0);
      d.b = d.h;
      d.a = d.g;
      BossEffect_PoiseEvent_onPoiseEvent(methodInfo, d, this);
    }
    isActive = UnityEngine_GameObject_get_activeInHierarchy(
                 isActive,
                 d_p444444444444044P44p44444444[28393]:int);
    if (eqz(isActive)) goto B_k;
    if (eqz(6703833[0]:ubyte)) {
      f_hpa(5621280);
      6703833[0]:byte = 1;
    }
    methodInfo = isActive[60]:ubyte;
    multiple_UnityEngine_Animator_SetTrigger(
      isActive[16]:int,
      ((if ((isActive = d_p444444444444044P44p44444444[16612]:int)[29]:int) {
          isActive
        } else {
          f_ahje(isActive);
          d_p444444444444044P44p44444444[16612]:int;
        })[23]:int +
       select_if(108, 56, methodInfo & 255))[0]:int,
      0);
    label B_k:
    Ammo_OnTriggerEnter2D(this, this);
    f_sbnb(f_canb(this, 0), 0, 0);
    this[120]:byte = 1;
  }
  g_a = d - -64;
}

function Ammo_OnTriggerEnter2D(a:int, b:int) { // func86839
  b = g_a - 208;
  g_a = b;
  if (eqz(6703720[0]:ubyte)) {
    f_hpa(5611532);
    f_hpa(5660004);
    6703720[0]:byte = 1;
  }
  var c:int = (d_p444444444444044P44p44444444[26293]:int)[4]:int;
  c = 
    ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
  c = 
    ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int;
  var d:ubyte_ptr = UnityEngine_MonoBehaviour_InvokeRepeating(b)[8]:int;
  UnityEngine_Camera_get_farClipPlane(
    b + 120,
    System_Linq_Enumerable_Count(a, 0),
    0);
  if (eqz(6685672[0]:ubyte)) {
    f_hpa(5620040);
    6685672[0]:byte = 1;
  }
  var e:long_ptr@4 = 
    (d_p444444444444044P44p44444444[16302]:int)[23]:int;
  var g:long = e[2];
  var h:long = e[0];
  b[24]:int = b[32]:int;
  b[10]:long = g;
  b[14]:long = g;
  b[13]:long = h;
  b[9]:long = h;
  b[11]:long = b[15]:long;
  c = PoolManager_CreatePool(c, d, b + 88, b + 72, 0);
  e = ((c[0]:int)[25]:int +
       ((d = d_p444444444444044P44p44444444[14175]:int)[184] << 2) -
       4)[0]:int;
  var f:long_ptr = b + 144;
  f[0] = (a = a[4]:int)[9]:long@4;
  b[17]:long = a[7]:long@4;
  a = select_if(c, 0, d == e);
  c = a[4]:int;
  (b - -64)[0]:long = f[0];
  b[50]:int = c;
  b[7]:long = b[17]:long;
  multiple_UnityEngine_ParticleSystem_MinMaxCurve_op_Implicit(b + 152,
                                                              b + 56,
                                                              0);
  b[12]:int = b[48]:int;
  b[5]:long = b[23]:long;
  b[4]:long = b[22]:long;
  b[3]:long = b[21]:long;
  b[2]:long = b[20]:long;
  b[1]:long = b[19]:long;
  multiple_UnityEngine_ParticleSystem_MainModule_set_startRotation(
    b + 200,
    b + 8,
    0);
  f_sbnb(f_canb(a, 0), 1, 0);
  g_a = b + 208;
}

function Ammo_DisableAmmo(a:int, b:int) { // func86846
  var this:byte_ptr;
  this[128] = 1;
  multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
}

function Ammo_ctor(a:int, b:int) { // func86847
  var this:int_ptr;
  if (eqz(6703722[0]:ubyte)) {
    f_hpa(5668360);
    f_hpa(5668376);
    6703722[0]:byte = 1;
  }
  this[5] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28382]:int);
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28386]:int);
}

