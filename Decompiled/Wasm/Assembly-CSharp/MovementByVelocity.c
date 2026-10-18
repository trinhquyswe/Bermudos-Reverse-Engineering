// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: MovementByVelocity  (Assembly-CSharp)

function MovementByVelocity_Awake(a:int, b:int) { // func86518
  var this:int_ptr;
  var g:int;
  var c:int;
  var d:int;
  if (eqz(6703395[0]:ubyte)) {
    f_hpa(5601748);
    f_hpa(5601988);
    f_hpa(5602036);
    f_hpa(5681536);
    f_hpa(5681540);
    f_hpa(5681544);
    6703395[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[5];
  var e:int = f_icke(d_p444444444444044P44p44444444[11801]:int);
  f_ofkc(e, this, d_p444444444444044P44p44444444[31678]:int, 0);
  if (eqz(6703399[0]:ubyte)) {
    f_hpa(5602036);
    6703399[0]:byte = 1;
  }
  var f:int = methodInfo + 16;
  methodInfo = methodInfo[4];
  loop L_d {
    c = 0;
    d = f_iyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11801]:int);
      if (eqz(c)) goto B_c;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_d;
  }
  methodInfo = this[6];
  c = f_icke(d_p444444444444044P44p44444444[11789]:int);
  f_ofkc(c, this, d_p444444444444044P44p44444444[31676]:int, 0);
  Destroyed_Die_d_7_System_Collections_IEnumerator_get_Current(
    methodInfo,
    c,
    0);
  methodInfo = this[7];
  c = f_icke(d_p444444444444044P44p44444444[11729]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    this,
    d_p444444444444044P44p44444444[31677]:int,
    0);
  DestroyedEventArgs_ctor(methodInfo, c, 0);
  return ;
  label B_c:
  f_ypa(d, g);
  unreachable;
}

function MovementByVelocity_ctor(a:int_ptr, b:int, c:int) { // func86519
  var f:int;
  var d:int;
  if (eqz(6703399[0]:ubyte)) {
    f_hpa(5602036);
    6703399[0]:byte = 1;
  }
  var e:int = a + 16;
  a = a[4];
  loop L_c {
    c = 0;
    d = f_iyud(a, b, 0);
    if (d) {
      c = f_upa(d, f = d_p444444444444044P44p44444444[11801]:int);
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

function MovementByVelocity_OnEnable(a:int, b:int) { // func86520
  var this:int_ptr;
  var g:int;
  var c:int;
  var d:int;
  if (eqz(6703396[0]:ubyte)) {
    f_hpa(5601748);
    f_hpa(5601988);
    f_hpa(5602036);
    f_hpa(5681536);
    f_hpa(5681540);
    f_hpa(5681544);
    6703396[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[5];
  var e:int = f_icke(d_p444444444444044P44p44444444[11801]:int);
  f_ofkc(e, this, d_p444444444444044P44p44444444[31678]:int, 0);
  if (eqz(6703400[0]:ubyte)) {
    f_hpa(5602036);
    6703400[0]:byte = 1;
  }
  var f:int = methodInfo + 16;
  methodInfo = methodInfo[4];
  loop L_d {
    c = 0;
    d = f_kyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11801]:int);
      if (eqz(c)) goto B_c;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_d;
  }
  methodInfo = this[6];
  c = f_icke(d_p444444444444044P44p44444444[11789]:int);
  f_ofkc(c, this, d_p444444444444044P44p44444444[31676]:int, 0);
  DestroyedEvent_add_OnDestroyed(methodInfo, c, 0);
  methodInfo = this[7];
  c = f_icke(d_p444444444444044P44p44444444[11729]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    this,
    d_p444444444444044P44p44444444[31677]:int,
    0);
  DieEvent_add_OnDie(methodInfo, c, 0);
  return ;
  label B_c:
  f_ypa(d, g);
  unreachable;
}

function MovementByVelocity_OnDisable(a:int_ptr, b:int, c:int, d:int) { // func86522
  var f:int;
  if (eqz(6703397[0]:ubyte)) {
    f_hpa(5602036);
    f_hpa(5681544);
    6703397[0]:byte = 1;
  }
  if (c[8]:ubyte) {
    c = a[5];
    d = f_icke(d_p444444444444044P44p44444444[11801]:int);
    f_ofkc(d, a, d_p444444444444044P44p44444444[31678]:int, 0);
    if (eqz(6703400[0]:ubyte)) {
      f_hpa(5602036);
      6703400[0]:byte = 1;
    }
    var e:int = c + 16;
    a = c[4]:int;
    loop L_e {
      c = 0;
      b = f_kyud(a, d, 0);
      if (b) {
        c = f_upa(b, f = d_p444444444444044P44p44444444[11801]:int);
        if (eqz(c)) goto B_b;
      }
      b = a != (c = System_Net_WebOperation_ctor(e, c, a));
      a = c;
      if (b) continue L_e;
    }
  }
  return ;
  label B_b:
  f_ypa(b, f);
  unreachable;
}

function MovementByVelocity_DestroyedEvent_OnDestroyed(a:int_ptr, b:int_ptr, c:int) { // func86523
  var f:int;
  if (eqz(6703398[0]:ubyte)) {
    f_hpa(5602036);
    f_hpa(5681544);
    6703398[0]:byte = 1;
  }
  b = a[5];
  var d:int = f_icke(d_p444444444444044P44p44444444[11801]:int);
  f_ofkc(d, a, d_p444444444444044P44p44444444[31678]:int, 0);
  if (eqz(6703399[0]:ubyte)) {
    f_hpa(5602036);
    6703399[0]:byte = 1;
  }
  var e:int = b + 16;
  a = b[4];
  loop L_d {
    b = 0;
    c = f_iyud(a, d, 0);
    if (c) {
      b = f_upa(c, f = d_p444444444444044P44p44444444[11801]:int);
      if (eqz(b)) goto B_c;
    }
    c = a != (b = System_Net_WebOperation_ctor(e, b, a));
    a = b;
    if (c) continue L_d;
  }
  return ;
  label B_c:
  f_ypa(c, f);
  unreachable;
}

function MovementByVelocity_DieEvent_OnDie(a:int_ptr, b:{ a:long, b:long }, c:int, d:int) { // func86524
  var f:float;
  var e:long;
  b = g_a - 16;
  g_a = b;
  a = a[4];
  b.a =
    (e = 
       i64_extend_i32_u(
         i32_reinterpret_f32(
           (f = c[4]:float) *
           f32_reinterpret_i32(i32_wrap_i64((e = c[2]:long@4) >> 32L)))) <<
       32L |
       i64_extend_i32_u(
         i32_reinterpret_f32(f * f32_reinterpret_i32(i32_wrap_i64(e)))));
  b.b = e;
  UnityEngine_Rigidbody2D_get_velocity_Injected(a, b, 0);
  g_a = b + 16;
}

function MovementByVelocity_MovementByVelocityEvent_OnMovementByVelocity(a:int, b:int, c:float, d:int) { // func86525
  var this:int_ptr;
  var movementByVelocityEvent:long_ptr@4;
  var e:long;
  var movementByVelocityArgs:float;
  var methodInfo:{ a:long, b:long } = g_a - 16;
  g_a = methodInfo;
  this = this[4];
  methodInfo.a =
    (e = 
       i64_extend_i32_u(
         i32_reinterpret_f32(
           f32_reinterpret_i32(
             i32_wrap_i64((e = movementByVelocityEvent[0]) >> 32L)) *
           movementByVelocityArgs)) <<
       32L |
       i64_extend_i32_u(
         i32_reinterpret_f32(
           f32_reinterpret_i32(i32_wrap_i64(e)) * movementByVelocityArgs)));
  methodInfo.b = e;
  UnityEngine_Rigidbody2D_get_velocity_Injected(this, methodInfo, 0);
  g_a = methodInfo + 16;
}

