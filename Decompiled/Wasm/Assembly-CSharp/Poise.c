// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Poise  (Assembly-CSharp)

function Poise_Start(a:int, b:int_ptr, c:int_ptr) { // func86843
  var e:float;
  var d:float;
  a[6]:float = (d = a[6]:float - (e = f32_convert_i32_s(b)));
  if (eqz(d <= 0.0f)) goto B_a;
  var f:float = a[7]:float;
  var g:float = a[5]:float;
  c = a[4]:int;
  if (eqz(6703942[0]:ubyte)) {
    f_hpa(5619836);
    6703942[0]:byte = 1;
  }
  b = c[4];
  if (eqz(b)) goto B_a;
  a = f_icke(d_p444444444444044P44p44444444[16251]:int);
  a[5]:float = f;
  a[4]:float = g;
  a[3]:float = d;
  a[2]:float = e;
  call_indirect(b[8], c, a, b[5], b[3]);
  label B_a:
}

function Poise_ctor(a:int_ptr, b:int, c:int) { // func86898
  var f:int;
  var d:int;
  if (eqz(6703940[0]:ubyte)) {
    f_hpa(5602056);
    6703940[0]:byte = 1;
  }
  var e:int = a + 16;
  a = a[4];
  loop L_c {
    c = 0;
    d = f_iyud(a, b, 0);
    if (d) {
      c = f_upa(d, f = d_p444444444444044P44p44444444[11806]:int);
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

function Poise_Awake(a:int, b:int) { // func87162
  var this:float_ptr;
  this[6] = this[5];
}

