// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: MovementToPositionEvent  (Assembly-CSharp)

function MovementToPositionEvent_add_OnMovementToPosition(a:int, b:int, c:int) { // func86534
  var this:int_ptr;
  var value:int;
  var f:int;
  var d:int;
  if (eqz(6703407[0]:ubyte)) {
    f_hpa(5602040);
    6703407[0]:byte = 1;
  }
  var e:int = this + 16;
  this = this[4];
  loop L_c {
    var methodInfo:int = 0;
    d = f_kyud(this, value, 0);
    if (d) {
      methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11802]:int);
      if (eqz(methodInfo)) goto B_b;
    }
    d = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (d) continue L_c;
  }
  return ;
  label B_b:
  f_ypa(d, f);
  unreachable;
}

function MovementToPositionEvent_remove_OnMovementToPosition(a:int_ptr, b:int, c:int, d:float, e:long_ptr@4, f:int, g:int) { // func86537
  if (eqz(6703408[0]:ubyte)) {
    f_hpa(5618816);
    6703408[0]:byte = 1;
  }
  var h:int_ptr = a[4];
  if (h) {
    g = f_icke(d_p444444444444044P44p44444444[15996]:int);
    if (eqz(6703409[0]:ubyte)) {
      f_hpa(5614872);
      6703409[0]:byte = 1;
    }
    var i:int_ptr = d_p444444444444044P44p44444444[15010]:int;
    if (eqz(i[29])) { f_ahje(i) }
    g[4]:int = b[2]:int;
    g[2]:long@4 = b[0]:long@4;
    g[5]:long@4 = c[0]:long@4;
    g[7]:int = c[2]:int;
    g[8]:float = d;
    var j:long = e[0];
    g[44]:byte = f;
    g[9]:long@4 = j;
    call_indirect(h[8], a, g, h[5], h[3]);
  }
}

function MovementToPositionEvent_ctor(a:int, b:int) { // func86538
  if (eqz(6703409[0]:ubyte)) {
    f_hpa(5614872);
    6703409[0]:byte = 1;
  }
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[15010]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
}

