// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: BossEffect  (Assembly-CSharp)

function BossEffect_PoiseEvent_onPoiseEvent(a:float_ptr, b:int, c:{ a:float, b:float, c:float }) { // func86838
  c = g_a - 16;
  g_a = c;
  UnityEngine_Camera_get_farClipPlane(
    c,
    System_Linq_Enumerable_Count(a, 0),
    0);
  var i:float = c.c;
  var j:float = c.b;
  var k:float = c.a;
  var h:float = a[11];
  UnityEngine_Camera_get_farClipPlane(
    c,
    System_Linq_Enumerable_Count(a, 0),
    0);
  var f:float = c.a;
  var d:float = c.b;
  var e:float = c.c;
  var g:float = b[2]:float;
  var l:float = b[1]:float;
  var m:float = b[0]:float;
  if (eqz(6703148[0]:ubyte)) {
    f_hpa(5618360);
    6703148[0]:byte = 1;
  }
  e = e - g;
  d = d - l;
  f = f - m;
  b = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(b[29]:int)) { f_ahje(b) }
  f = {
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
        b = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
        e = b[2]:float;
        d = b[1]:float;
        b[0]:float;
        label B_c:
      }
  if (eqz(6703832[0]:ubyte)) {
    f_hpa(5625952);
    6703832[0]:byte = 1;
  }
  b = f_icke(d_p444444444444044P44p44444444[17780]:int);
  b[7]:float = i + h * e;
  b[6]:float = j + h * d;
  b[5]:float = k + h * f;
  b[4]:int = a;
  b[2]:int = 0;
  UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
  g_a = c + 16;
}

function BossEffect_PushEnemyByWeaponCoroutine(a:int, b:int) { // func86844
  if (eqz(6703833[0]:ubyte)) {
    f_hpa(5621280);
    6703833[0]:byte = 1;
  }
  b = a[60]:ubyte;
  multiple_UnityEngine_Animator_SetTrigger(
    a[16]:int,
    ((if ((a = d_p444444444444044P44p44444444[16612]:int)[29]:int) {
        a
      } else {
        f_ahje(a);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int +
     select_if(108, 56, b))[0]:int,
    0);
}

function BossEffect_Awake(a:int, b:int) { // func87014
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703830[0]:ubyte)) {
    f_hpa(5602056);
    f_hpa(5666960);
    6703830[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[17];
  var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[28032]:int, 0);
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

function BossEffect_OnEnable(a:int, b:int) { // func87015
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703831[0]:ubyte)) {
    f_hpa(5602056);
    f_hpa(5666960);
    6703831[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[17];
  var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[28032]:int, 0);
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

function BossEffect_PushEnemyByWeaponCoroutine_d_8_System_Collections_IEnumerator_get_Current(a:int_ptr, b:float, c:int_ptr) { // func87017
  c = g_a - 16;
  g_a = c;
  c[2] = a[13];
  multiple_UnityEngine_ParticleSystem_MainModule_set_startLifetime(
    c + 8,
    b,
    0);
  UnityEngine_ParticleSystem_Play(a[13], 0);
  g_a = c + 16;
}

function BossEffect_PushBossByWeapon(a:int, b:int, c:int):int { // func87018
  var this:int;
  var playerPosition:int;
  if (eqz(6703832[0]:ubyte)) {
    f_hpa(5625952);
    6703832[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[17780]:int);
  methodInfo[4]:int = this;
  methodInfo[2]:int = 0;
  methodInfo[5]:long@4 = playerPosition[0]:long@4;
  methodInfo[7]:int = playerPosition[2]:int;
  return methodInfo;
}

function BossEffect_PushEnemyByWeaponCoroutine_d_8_System_IDisposable_Dispose(a:int, b:int):int { // func87020
  var this:int;
  var h:float;
  var i:long;
  var e:int;
  var methodInfo:long_ptr = g_a - 32;
  g_a = methodInfo;
  var d:int = this[4]:int;
  var c:int = -1;
  var f:float = 
    {
      br_table[B_e, B_d, B_b, ..B_a](this[2]:int)
      label B_e:
      this[2]:int = -1;
      UnityEngine_RaycastHit2D_op_Implicit(methodInfo + 24, d[8]:int, 0);
      i = methodInfo[3];
      this[10]:long@4 = 0L;
      this[9]:int = i >> 32L;
      this[8]:int = i;
      0.0f;
      goto B_c;
      label B_d:
      this[2]:int = -1;
      this[11]:float;
      label B_c:
    }
  c = 2;
  var g:float = d[12]:float;
  if (g > f) {
    c = d[8]:int;
    methodInfo[1] =
      (i = 
         i64_extend_i32_u(
           i32_reinterpret_f32(
             (h = this[9]:float) +
             (f = select_if(0.0f, (f = f / g) min 1.0f, f < 0.0f)) *
             (this[6]:float - h))) <<
         32L |
         i64_extend_i32_u(
           i32_reinterpret_f32((g = this[8]:float) + f * (this[5]:float - g))));
    methodInfo[2] = i;
    multiple_UnityEngine_Rigidbody2D_get_rotation(c, methodInfo + 8, 0);
    this[11]:float =
      this[11]:float + UnityEngine_Time_get_fixedUnscaledDeltaTime(0);
    c = 1;
  }
  this[3]:int = d[10]:int;
  e = 1;
  label B_b:
  this[2]:int = c;
  label B_a:
  g_a = methodInfo + 32;
  return e;
}

function BossEffect_PushEnemyByWeaponCoroutine_d_8_System_Collections_Generic_IEnumerator_System_Object_get_C(a:int, b:int) { // func87021
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5696312));
  unreachable;
}

