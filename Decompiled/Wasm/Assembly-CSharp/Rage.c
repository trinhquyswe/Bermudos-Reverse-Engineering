// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Rage  (Assembly-CSharp)

function Rage_ctor(a:int, b:int) { // func87165
  var this:int;
  var e:int;
  var d:int;
  if (eqz(6703943[0]:ubyte)) {
    f_hpa(5601868);
    f_hpa(5620152);
    6703943[0]:byte = 1;
  }
  var methodInfo:int = 
    ((d_p444444444444044P44p44444444[16330]:int)[23]:int)[0]:int;
  loop L_c {
    var c:int = 0;
    d = f_iyud(methodInfo, this, 0);
    if (d) {
      c = f_upa(d, e = d_p444444444444044P44p44444444[11759]:int);
      if (eqz(c)) goto B_b;
    }
    d = methodInfo !=
        (c = System_Net_WebOperation_ctor(
               (d_p444444444444044P44p44444444[16330]:int)[23]:int,
               c,
               methodInfo));
    methodInfo = c;
    if (d) continue L_c;
  }
  return ;
  label B_b:
  f_ypa(d, e);
  unreachable;
}

