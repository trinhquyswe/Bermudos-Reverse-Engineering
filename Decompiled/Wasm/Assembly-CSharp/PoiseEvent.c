// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: PoiseEvent  (Assembly-CSharp)

function PoiseEvent_add_OnPoise(a:int, b:int, c:int) { // func86900
  var this:int_ptr;
  var value:int;
  var f:int;
  var d:int;
  if (eqz(6703941[0]:ubyte)) {
    f_hpa(5602056);
    6703941[0]:byte = 1;
  }
  var e:int = this + 16;
  this = this[4];
  loop L_c {
    var methodInfo:int = 0;
    d = f_kyud(this, value, 0);
    if (d) {
      methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11806]:int);
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

function PoiseEvent_remove_OnPoise(a:int_ptr, b:float, c:float, d:float, e:float, f:float_ptr) { // func87163
  if (eqz(6703942[0]:ubyte)) {
    f_hpa(5619836);
    6703942[0]:byte = 1;
  }
  var g:int_ptr = a[4];
  if (g) {
    f = f_icke(d_p444444444444044P44p44444444[16251]:int);
    f[5] = e;
    f[4] = d;
    f[3] = c;
    f[2] = b;
    call_indirect(g[8], a, f, g[5], g[3]);
  }
}

