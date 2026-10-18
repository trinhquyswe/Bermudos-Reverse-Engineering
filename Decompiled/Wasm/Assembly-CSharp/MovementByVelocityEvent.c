// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: MovementByVelocityEvent  (Assembly-CSharp)

function MovementByVelocityEvent_add_OnMovementByVelocity(a:int, b:int, c:int) { // func86521
  var this:int_ptr;
  var value:int;
  var f:int;
  var d:int;
  if (eqz(6703400[0]:ubyte)) {
    f_hpa(5602036);
    6703400[0]:byte = 1;
  }
  var e:int = this + 16;
  this = this[4];
  loop L_c {
    var methodInfo:int = 0;
    d = f_kyud(this, value, 0);
    if (d) {
      methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11801]:int);
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

function MovementByVelocityEvent_remove_OnMovementByVelocity(a:int_ptr, b:long_ptr@4, c:float, d:int) { // func86526
  if (eqz(6703401[0]:ubyte)) {
    f_hpa(5618812);
    6703401[0]:byte = 1;
  }
  var e:int_ptr = a[4];
  if (e) {
    d = f_icke(d_p444444444444044P44p44444444[15995]:int);
    if (eqz(6703402[0]:ubyte)) {
      f_hpa(5614872);
      6703402[0]:byte = 1;
    }
    var f:int_ptr = d_p444444444444044P44p44444444[15010]:int;
    if (eqz(f[29])) { f_ahje(f) }
    var g:long = b[0];
    d[4]:float = c;
    d[2]:long@4 = g;
    call_indirect(e[8], a, d, e[5], e[3]);
  }
}

function MovementByVelocityEvent_ctor(a:int, b:int) { // func86527
  if (eqz(6703402[0]:ubyte)) {
    f_hpa(5614872);
    6703402[0]:byte = 1;
  }
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[15010]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
}

