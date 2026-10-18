// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Boss  (Assembly-CSharp)

function Boss_Awake(a:int, b:int) { // func86938
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703787[0]:ubyte)) {
    f_hpa(5601996);
    f_hpa(5666956);
    6703787[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[4];
  var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[28031]:int, 0);
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

function Boss_OnEnable(a:int, b:int) { // func86940
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703788[0]:ubyte)) {
    f_hpa(5601996);
    f_hpa(5666956);
    6703788[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[4];
  var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[28031]:int, 0);
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

function Boss_OnDisable(a:int, b:int) { // func86942
  var this:int;
  if (eqz(6703789[0]:ubyte)) {
    f_hpa(5741568);
    6703789[0]:byte = 1;
  }
  StaticEventHandler_remove_OnBossChanged(this, 0);
  UnityEngine_Material_SetInt(
    UnityEngine_MonoBehaviour_InvokeRepeating(this)[12]:int,
    d_p444444444444044P44p44444444[46684]:int,
    0.0f,
    0);
}

function Boss_Start(a:int, b:int):int { // func86943
  var this:int;
  if (eqz(6703790[0]:ubyte)) {
    f_hpa(5625948);
    6703790[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[17779]:int);
  methodInfo[4] = this;
  methodInfo[2] = 0;
  return methodInfo;
}

function Boss_BossAttack(a:int, b:int_ptr, c:int_ptr, d:int) { // func86944
  var f:int;
  if (eqz(6703791[0]:ubyte)) {
    f_hpa(5601996);
    f_hpa(5666956);
    6703791[0]:byte = 1;
  }
  if (c[3] <= 0) {
    Boss_HealthEvent_OnHealthLost(a, c);
    d = f_icke(d_p444444444444044P44p44444444[11791]:int);
    f_ofkc(d, a, d_p444444444444044P44p44444444[28031]:int, 0);
    if (eqz(6703936[0]:ubyte)) {
      f_hpa(5601996);
      6703936[0]:byte = 1;
    }
    var e:int = b + 16;
    c = b[4];
    loop L_e {
      a = 0;
      b = f_kyud(c, d, 0);
      if (b) {
        a = f_upa(b, f = d_p444444444444044P44p44444444[11791]:int);
        if (eqz(a)) goto B_b;
      }
      b = c != (a = System_Net_WebOperation_ctor(e, a, c));
      c = a;
      if (b) continue L_e;
    }
  }
  return ;
  label B_b:
  f_ypa(b, f);
  unreachable;
}

function Boss_HealthEvent_OnHealthLost(a:byte_ptr, b:int_ptr) { // func86945
  if (eqz(6703792[0]:ubyte)) {
    f_hpa(5668464);
    f_hpa(5614436);
    6703792[0]:byte = 1;
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
  a[9] = 1;
  b = c[4];
  if (b) { call_indirect(b[8], c, a, b[5], b[3]) }
}

function Boss_BossAttack_d_11_System_IDisposable_Dispose(a:int, b:int):int { // func86947
  var this:int;
  if (eqz(6703793[0]:ubyte)) {
    f_hpa(5621280);
    6703793[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[4]:int;
  br_table[B_d, B_c, ..B_b](this[2]:int)
  label B_d:
  this[2]:int = -1;
  multiple_UnityEngine_Animator_SetTrigger(
    methodInfo[9],
    ((if ((methodInfo = d_p444444444444044P44p44444444[16612]:int)[29]) {
        methodInfo
      } else {
        f_ahje(methodInfo);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[18]:int,
    0);
  this[2]:long@4 = 1L;
  return 1;
  label B_c:
  this[2]:int = -1;
  multiple_UnityEngine_Animator_SetTrigger(
    methodInfo[9],
    ((if ((this = d_p444444444444044P44p44444444[16612]:int)[29]:int) {
        this
      } else {
        f_ahje(this);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[19]:int,
    0);
  label B_b:
  return 0;
}

function Boss_BossAttack_d_11_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86948
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5696308));
  unreachable;
}

function Boss_BossAttack_d_11_System_Collections_IEnumerator_get_Current(a:int, b:int) { // func86949
  var this:int_ptr;
  var methodInfo:int;
  var c:{ a:long, b:long } = g_a - 16;
  g_a = c;
  if (eqz(6703794[0]:ubyte)) {
    f_hpa(5666972);
    f_hpa(5660024);
    f_hpa(5623156);
    f_hpa(5690176);
    f_hpa(5690236);
    6703794[0]:byte = 1;
  }
  if (eqz(6703796[0]:ubyte)) {
    f_hpa(5750280);
    6703796[0]:byte = 1;
  }
  if (eqz(UnityEngine_PlayerPrefs_GetString_1(
            d_p444444444444044P44p44444444[48862]:int,
            0))) goto B_d;
  if (UnityEngine_PlayerPrefs_GetInt(
        d_p444444444444044P44p44444444[48862]:int,
        0) !=
      1) goto B_d;
  f_sbnb(this[8], 0, 0);
  methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[23]:int)[0]:int;
  if (eqz(6703899[0]:ubyte)) {
    f_hpa(5659992);
    6703899[0]:byte = 1;
  }
  methodInfo[7]:int = 3;
  if (eqz(6703903[0]:ubyte)) {
    f_hpa(5668632);
    6703903[0]:byte = 1;
  }
  UnityEngine_Rigidbody2D_get_mass(
    UnityEngine_GameObject_get_activeInHierarchy(
      methodInfo[4]:int,
      d_p444444444444044P44p44444444[28450]:int),
    0.5f,
    0);
  methodInfo = methodInfo[8]:int;
  if (methodInfo) {
    call_indirect(methodInfo[8]:int, 3, methodInfo[5]:int, methodInfo[3]:int)
  }
  f_sbnb(f_canb(this, 0), 0, 0);
  goto B_c;
  label B_d:
  methodInfo = this[4];
  c.b = 4906108845224984576L;
  c.a = 4906108845224984576L;
  methodInfo = 
    DG_Tweening_TweenSettingsExtensions_SetEase(
      DG_Tweening_DOTweenModuleUI_DOPivotY(methodInfo, c, 1.0f, 0, 0),
      27,
      d_p444444444444044P44p44444444[33851]:int);
  var d:int = f_icke(d_p444444444444044P44p44444444[17081]:int);
  DG_Tweening_Color2_op_Multiply(
    d,
    this,
    d_p444444444444044P44p44444444[28035]:int,
    0);
  DG_Tweening_TweenSettingsExtensions_From_6(
    methodInfo,
    d,
    d_p444444444444044P44p44444444[33836]:int);
  label B_c:
  g_a = c + 16;
}

