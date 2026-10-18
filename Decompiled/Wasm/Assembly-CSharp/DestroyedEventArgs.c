// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: DestroyedEventArgs  (Assembly-CSharp)

function DestroyedEventArgs_ctor(a:int_ptr, b:int, c:int) { // func86878
  var f:int;
  var d:int;
  if (eqz(6703927[0]:ubyte)) {
    f_hpa(5601748);
    6703927[0]:byte = 1;
  }
  var e:int = a + 16;
  a = a[4];
  loop L_c {
    c = 0;
    d = f_iyud(a, b, 0);
    if (d) {
      c = f_upa(d, f = d_p444444444444044P44p44444444[11729]:int);
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

