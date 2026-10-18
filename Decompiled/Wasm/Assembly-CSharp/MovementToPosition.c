// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: MovementToPosition  (Assembly-CSharp)

function MovementToPosition_Awake(a:int, b:int) { // func86531
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703404[0]:ubyte)) {
    f_hpa(5602040);
    f_hpa(5681548);
    6703404[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[5];
  var d:int = f_icke(d_p444444444444044P44p44444444[11802]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[31679]:int, 0);
  if (eqz(6703406[0]:ubyte)) {
    f_hpa(5602040);
    6703406[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_iyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11802]:int);
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

function MovementToPosition_ctor(a:int_ptr, b:int, c:int) { // func86532
  var f:int;
  var d:int;
  if (eqz(6703406[0]:ubyte)) {
    f_hpa(5602040);
    6703406[0]:byte = 1;
  }
  var e:int = a + 16;
  a = a[4];
  loop L_c {
    c = 0;
    d = f_iyud(a, b, 0);
    if (d) {
      c = f_upa(d, f = d_p444444444444044P44p44444444[11802]:int);
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

function MovementToPosition_OnEnable(a:int, b:int) { // func86533
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703405[0]:ubyte)) {
    f_hpa(5602040);
    f_hpa(5681548);
    6703405[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[5];
  var d:int = f_icke(d_p444444444444044P44p44444444[11802]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[31679]:int, 0);
  if (eqz(6703407[0]:ubyte)) {
    f_hpa(5602040);
    6703407[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_kyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11802]:int);
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

function MovementToPosition_OnDisable(a:int, b:{ a:long, b:int, c:long, d:int }, c:int, d:int) { // func86535
  b = g_a - 32;
  g_a = b;
  var e:float = c[8]:float;
  b.d = c[4]:int;
  b.c = c[2]:long@4;
  b.b = c[7]:int;
  b.a = c[5]:long@4;
  MovementToPosition_MovementToPositionEvent_OnMovementToPosition(
    a,
    b + 16,
    b,
    e,
    b);
  g_a = b + 32;
}

function MovementToPosition_MovementToPositionEvent_OnMovementToPosition(a:int_ptr, b:int, c:{ a:float, b:float, c:float }, d:float, e:long_ptr) { // func86536
  e = g_a - 32;
  g_a = e;
  var f:float = c.c;
  var g:float = b[2]:float;
  var i:float = c.b;
  var j:float = b[1]:float;
  var k:float = c.a;
  var l:float = b[0]:float;
  if (eqz(6703148[0]:ubyte)) {
    f_hpa(5618360);
    6703148[0]:byte = 1;
  }
  var h:float = g - f;
  f = j - i;
  g = l - k;
  b = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(b[29]:int)) { f_ahje(b) }
  g = {
        h = sqrt(g * g + f * f + h * h);
        if (h > 0.00001f) {
          f = f / h;
          g / h;
          goto B_c;
        }
        if (eqz(6703145[0]:ubyte)) {
          f_hpa(5623880);
          6703145[0]:byte = 1;
        }
        b = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
        f = b[1]:float;
        b[0]:float;
        label B_c:
      }
  UnityEngine_RaycastHit2D_op_Implicit(e + 24, b = a[4], 0);
  var m:long = e[3];
  e[1] =
    (m = 
       i64_extend_i32_u(
         i32_reinterpret_f32(
           f * d * (f = UnityEngine_Time_get_fixedUnscaledDeltaTime(0)) +
           f32_reinterpret_i32(i32_wrap_i64(m >> 32L)))) <<
       32L |
       i64_extend_i32_u(
         i32_reinterpret_f32(g * d * f + f32_reinterpret_i32(i32_wrap_i64(m)))));
  e[2] = m;
  multiple_UnityEngine_Rigidbody2D_get_rotation(b, e + 8, 0);
  g_a = e + 32;
}

