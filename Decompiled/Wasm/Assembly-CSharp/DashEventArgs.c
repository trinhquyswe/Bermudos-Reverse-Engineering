// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: DashEventArgs  (Assembly-CSharp)

function DashEventArgs_ctor(a:int, b:int) { // func86681
  var this:int;
  var d:int;
  var c:int_ptr;
  if (eqz(6703496[0]:ubyte)) {
    f_hpa(5601868);
    f_hpa(5611444);
    f_hpa(5686668);
    f_hpa(5686672);
    f_hpa(5686676);
    6703496[0]:byte = 1;
  }
  var e:int = f_icke(d_p444444444444044P44p44444444[14153]:int);
  f_uhrd(e, this, d_p444444444444044P44p44444444[32960]:int, 0);
  if (eqz(6703547[0]:ubyte)) {
    f_hpa(5611444);
    f_hpa(5621908);
    6703547[0]:byte = 1;
  }
  var methodInfo:int = 
    ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[7]:int;
  loop L_e {
    c = f_iyud(methodInfo, e, 0);
    if (c) {
      d = d_p444444444444044P44p44444444[14153]:int;
      if (d != c[0]) goto B_d;
    }
    d = methodInfo !=
        (c = System_Net_WebOperation_ctor(
               (d_p444444444444044P44p44444444[16769]:int)[23]:int + 28,
               c,
               methodInfo));
    methodInfo = c;
    if (d) continue L_e;
  }
  e = f_icke(d_p444444444444044P44p44444444[14153]:int);
  f_uhrd(e, this, d_p444444444444044P44p44444444[32959]:int, 0);
  if (eqz(6703544[0]:ubyte)) {
    f_hpa(5611444);
    f_hpa(5621908);
    6703544[0]:byte = 1;
  }
  methodInfo = 
    ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[6]:int;
  loop L_h {
    c = f_iyud(methodInfo, e, 0);
    if (c) {
      d = d_p444444444444044P44p44444444[14153]:int;
      if (d != c[0]) goto B_c;
    }
    d = methodInfo !=
        (c = System_Net_WebOperation_ctor(
               (d_p444444444444044P44p44444444[16769]:int)[23]:int + 24,
               c,
               methodInfo));
    methodInfo = c;
    if (d) continue L_h;
  }
  methodInfo = f_icke(d_p444444444444044P44p44444444[11759]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[32961]:int,
    0);
  Rage_ctor(methodInfo, 0);
  return ;
  label B_d:
  f_ypa(c, d);
  unreachable;
  label B_c:
  f_ypa(c, d);
  unreachable;
}

