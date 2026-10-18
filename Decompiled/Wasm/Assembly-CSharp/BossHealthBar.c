// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: BossHealthBar  (Assembly-CSharp)

function BossHealthBar_OnEnable(a:int, b:int) { // func87139
  var this:int_ptr;
  var f:int;
  if (eqz(6703915[0]:ubyte)) {
    f_hpa(5601836);
    f_hpa(5601996);
    f_hpa(5666964);
    f_hpa(5666968);
    f_hpa(5619244);
    6703915[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[11751]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[28034]:int,
    0);
  StaticEventHandler_add_OnBossChanged(methodInfo, 0);
  methodInfo = this[7];
  var c:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29])) { f_ahje(c) }
  if (UnityEngine_Camera_get_targetTexture(methodInfo, 0, 0)) {
    methodInfo = this[7];
    var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
    f_ofkc(d, this, d_p444444444444044P44p44444444[28033]:int, 0);
    if (eqz(6703936[0]:ubyte)) {
      f_hpa(5601996);
      6703936[0]:byte = 1;
    }
    var e:int = methodInfo + 16;
    this = methodInfo[4];
    loop L_f {
      methodInfo = 0;
      c = f_kyud(this, d, 0);
      if (c) {
        methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11791]:int);
        if (eqz(methodInfo)) goto B_c;
      }
      c = this !=
          (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
      this = methodInfo;
      if (c) continue L_f;
    }
  }
  return ;
  label B_c:
  f_ypa(c, f);
  unreachable;
}

function BossHealthBar_OnDisable(a:int_ptr, b:int_ptr, c:int) { // func87140
  var f:int;
  if (eqz(6703916[0]:ubyte)) {
    f_hpa(5601996);
    f_hpa(5666964);
    6703916[0]:byte = 1;
  }
  a[7] = (b = (b[2])[4]:int);
  var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
  f_ofkc(d, a, d_p444444444444044P44p44444444[28033]:int, 0);
  if (eqz(6703935[0]:ubyte)) {
    f_hpa(5601996);
    6703935[0]:byte = 1;
  }
  var e:int = b + 16;
  a = b[4];
  loop L_d {
    b = 0;
    c = f_iyud(a, d, 0);
    if (c) {
      b = f_upa(c, f = d_p444444444444044P44p44444444[11791]:int);
      if (eqz(b)) goto B_c;
    }
    c = a != (b = System_Net_WebOperation_ctor(e, b, a));
    a = b;
    if (c) continue L_d;
  }
  return ;
  label B_c:
  f_ypa(c, f);
  unreachable;
}

function BossHealthBar_ctor(a:int, b:int) { // func87144
  var this:int_ptr;
  if (eqz(6703917[0]:ubyte)) {
    f_hpa(5668464);
    f_hpa(5668468);
    f_hpa(5668592);
    6703917[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28408]:int);
  this[5] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28440]:int);
  this[6] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28409]:int);
}

