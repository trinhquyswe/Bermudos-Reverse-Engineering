// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: EnemyManagerData  (Assembly-CSharp)

function EnemyManagerData_ctor(a:int_ptr, b:int, c:int_ptr) { // func87089
  var e:int;
  if (eqz(6703871[0]:ubyte)) {
    f_hpa(5647180);
    6703871[0]:byte = 1;
  }
  if (a[3] > 0) {
    loop L_c {
      var f:int_ptr = d_p444444444444044P44p44444444[23087]:int;
      c = a[4];
      c[4] = c[4] + 1;
      var d:int = c[3];
      var g:int_ptr = c[2];
      var h:int = g[3];
      if (b == e) {
        if (d < h) {
          c[3] = d + 1;
          (d + g)[16]:byte = 0;
          goto B_d;
        }
        f_jkn(c, 0, ((f[4])[24]:int)[14]:int);
        goto B_d;
      }
      if (d < h) {
        c[3] = d + 1;
        (d + g)[16]:byte = 1;
        goto B_d;
      }
      f_jkn(c, 1, ((f[4])[24]:int)[14]:int);
      label B_d:
      e = e + 1;
      if (e < a[3]) continue L_c;
    }
  }
}

