// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: SoundEffectSO  (Assembly-CSharp)

function SoundEffectSO_ctor(a:int, b:int) { // func86541
  var this:int;
  var e:int;
  var d:int;
  if (eqz(6703526[0]:ubyte)) {
    f_hpa(5601808);
    f_hpa(5621908);
    6703526[0]:byte = 1;
  }
  var methodInfo:int = 
    ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[0]:int;
  loop L_c {
    var c:int = 0;
    d = f_iyud(methodInfo, this, 0);
    if (d) {
      c = f_upa(d, e = d_p444444444444044P44p44444444[11744]:int);
      if (eqz(c)) goto B_b;
    }
    d = methodInfo !=
        (c = System_Net_WebOperation_ctor(
               (d_p444444444444044P44p44444444[16769]:int)[23]:int,
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

