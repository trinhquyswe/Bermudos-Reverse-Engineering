// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: BashEvent  (Assembly-CSharp)

function BashEvent_remove_OnBash(a:int, b:int, c:int) { // func86587
  var this:int_ptr;
  var value:int;
  if (eqz(6703480[0]:ubyte)) {
    f_hpa(5612036);
    6703480[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[4];
  if (methodInfo) {
    var d:int_ptr = f_icke(d_p444444444444044P44p44444444[14301]:int);
    if (eqz(6703481[0]:ubyte)) {
      f_hpa(5614872);
      6703481[0]:byte = 1;
    }
    var e:int_ptr = d_p444444444444044P44p44444444[15010]:int;
    if (eqz(e[29])) { f_ahje(e) }
    d[2] = value;
    call_indirect(methodInfo[8], this, d, methodInfo[5], methodInfo[3]);
  }
}

function BashEvent_add_OnBash(a:int, b:int, c:int) { // func86648
  var this:int_ptr;
  var value:int;
  var f:int;
  var d:int;
  if (eqz(6703479[0]:ubyte)) {
    f_hpa(5601964);
    6703479[0]:byte = 1;
  }
  var e:int = this + 16;
  this = this[4];
  loop L_c {
    var methodInfo:int = 0;
    d = f_kyud(this, value, 0);
    if (d) {
      methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11783]:int);
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

function BashEvent_ctor(a:int, b:int) { // func86661
  if (eqz(6703481[0]:ubyte)) {
    f_hpa(5614872);
    6703481[0]:byte = 1;
  }
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[15010]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
}

