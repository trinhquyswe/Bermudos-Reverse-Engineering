// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Enemy  (Assembly-CSharp)

function Enemy_Awake(a:int, b:int) { // func87054
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703853[0]:ubyte)) {
    f_hpa(5601996);
    f_hpa(5672620);
    6703853[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[5];
  var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[29447]:int, 0);
  if (eqz(6703935[0]:ubyte)) {
    f_hpa(5601996);
    6703935[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_iyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11791]:int);
      if (eqz(methodInfo)) goto B_c;
    }
    c = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (c) continue L_d;
  }
  return ;
  label B_c:
  f_ypa(c, f);
  unreachable;
}

function Enemy_OnEnable(a:int, b:int) { // func87055
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703854[0]:ubyte)) {
    f_hpa(5601996);
    f_hpa(5672620);
    6703854[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[5];
  var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[29447]:int, 0);
  if (eqz(6703936[0]:ubyte)) {
    f_hpa(5601996);
    6703936[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_kyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11791]:int);
      if (eqz(methodInfo)) goto B_c;
    }
    c = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (c) continue L_d;
  }
  return ;
  label B_c:
  f_ypa(c, f);
  unreachable;
}

function Enemy_OnDisable(a:int_ptr, b:int, c:int, d:int) { // func87056
  a[18] = c;
  a[17] = b;
}

function Enemy_InitializeEnemy(a:int, b:int, c:int, d:int) { // func87057
  var enemyID:int_ptr;
  var this:int;
  if (enemyID[3] <= 0) { Enemy_HealthEvent_OnHealthLost(this, enemyID) }
}

function Enemy_HealthEvent_OnHealthLost(a:byte_ptr, b:int_ptr) { // func87058
  if (eqz(6703855[0]:ubyte)) {
    f_hpa(5668464);
    f_hpa(5614436);
    6703855[0]:byte = 1;
  }
  var c:int_ptr = UnityEngine_GameObject_get_activeInHierarchy(
                    a,
                    d_p444444444444044P44p44444444[28408]:int);
  a = f_icke(d_p444444444444044P44p44444444[14901]:int);
  if (eqz(6703926[0]:ubyte)) {
    f_hpa(5614872);
    6703926[0]:byte = 1;
  }
  b = d_p444444444444044P44p44444444[15010]:int;
  if (eqz(b[29])) { f_ahje(b) }
  a[8] = 0;
  b = c[4];
  if (b) { call_indirect(b[8], c, a, b[5], b[3]) }
}

function Enemy_ctor(a:int, b:int) { // func87059
  var this:int_ptr;
  if (eqz(6703856[0]:ubyte)) {
    f_hpa(5668480);
    f_hpa(5668488);
    f_hpa(5668492);
    f_hpa(5668472);
    6703856[0]:byte = 1;
  }
  this[7] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28410]:int);
  this[6] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28415]:int);
  this[5] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28412]:int);
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28414]:int);
}

