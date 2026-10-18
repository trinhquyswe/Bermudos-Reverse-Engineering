// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: StaminaBar  (Assembly-CSharp)

function StaminaBar_ctor(a:int_ptr, b:int, c:int) { // func87173
  var f:int;
  var d:int;
  if (eqz(6703949[0]:ubyte)) {
    f_hpa(5602064);
    6703949[0]:byte = 1;
  }
  var e:int = a + 16;
  a = a[4];
  loop L_c {
    c = 0;
    d = f_iyud(a, b, 0);
    if (d) {
      c = f_upa(d, f = d_p444444444444044P44p44444444[11808]:int);
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

function StaminaBar_OnEnable(a:int, b:int) { // func87174
  var this:int;
  var f:int;
  var c:int;
  if (eqz(6703948[0]:ubyte)) {
    f_hpa(5602064);
    f_hpa(5660024);
    f_hpa(5687756);
    6703948[0]:byte = 1;
  }
  var methodInfo:int = 
    (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  methodInfo = ((((if (methodInfo[189]:ubyte & 1) {
                     methodInfo
                   } else {
                     System_Threading_Monitor_Enter_1(methodInfo)
                   })[23]:int)[0]:int)[4]:int)[15]:int;
  var d:int = f_icke(d_p444444444444044P44p44444444[11808]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[33231]:int, 0);
  if (eqz(6703950[0]:ubyte)) {
    f_hpa(5602064);
    6703950[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  methodInfo = methodInfo[4]:int;
  loop L_f {
    this = 0;
    c = f_kyud(methodInfo, d, 0);
    if (c) {
      this = f_upa(c, f = d_p444444444444044P44p44444444[11808]:int);
      if (eqz(this)) goto B_e;
    }
    c = methodInfo !=
        (this = System_Net_WebOperation_ctor(e, this, methodInfo));
    methodInfo = this;
    if (c) continue L_f;
  }
  return ;
  label B_e:
  f_ypa(c, f);
  unreachable;
}

