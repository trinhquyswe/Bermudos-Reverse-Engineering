// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: StunBar  (Assembly-CSharp)

function StunBar_Awake(a:int, b:int) { // func87102
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703884[0]:ubyte)) {
    f_hpa(5602056);
    f_hpa(5688272);
    6703884[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[4];
  var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[33360]:int, 0);
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

function StunBar_OnEnable(a:int, b:int) { // func87103
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703885[0]:ubyte)) {
    f_hpa(5602056);
    f_hpa(5688272);
    6703885[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[4];
  var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[33360]:int, 0);
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

function StunBar_OnDisable(a:int, b:int, c:int, d:int) { // func87104
  var e:float;
  if (c[3]:float <= 0.0f) {
    a[6]:float = (e = c[5]:float);
    UnityEngine_UI_Slider_get_maxValue(a[5]:int, e, 0);
    c = a[5]:int;
    call_indirect(c, a[6]:float, (a = c[0]:int)[143]:int, a[142]:int);
  }
}

function StunBar_PoiseEvent_OnPoise(a:int_ptr, b:int_ptr) { // func87105
  b = a[5];
  if (call_indirect(b, (b = b[0])[141], b[140]) > 0.0f) {
    a = a[5];
    call_indirect(a,
                  call_indirect(a, (b = a[0])[141], b[140]) -
                  UnityEngine_Time_get_time(0),
                  (b = a[0])[143],
                  b[142]);
  }
}

function StunBar_ctor(a:int, b:int) { // func87106
  var this:int_ptr;
  if (eqz(6703886[0]:ubyte)) {
    f_hpa(5668712);
    6703886[0]:byte = 1;
  }
  this[6] = f_irrc(this, d_p444444444444044P44p44444444[28470]:int);
}

