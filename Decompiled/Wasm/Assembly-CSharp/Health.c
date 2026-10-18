// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Health  (Assembly-CSharp)

function Health_Start(a:int_ptr, b:int, c:int) { // func86834
  if (eqz(6703932[0]:ubyte)) {
    f_hpa(5668592);
    f_hpa(5619244);
    f_hpa(5660012);
    6703932[0]:byte = 1;
  }
  a[4] = a[4] - b;
  c = UnityEngine_GameObject_get_activeInHierarchy(
        a,
        d_p444444444444044P44p44444444[28440]:int);
  var d:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(d[29])) { f_ahje(d) }
  d = UnityEngine_Camera_get_targetTexture(c, 0, 0);
  c = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  var e:int = c[189]:ushort@1 & 1;
  d = 
    {
      if (d) {
        c = 
          ((if (e) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
        c = 
          ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int;
        UnityEngine_MonoBehaviour_InvokeRepeating(a) + 92;
        goto B_c;
      }
      c = 
        ((if (e) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
      c = 
        ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int;
      UnityEngine_MonoBehaviour_InvokeRepeating(a) + 88;
      label B_c:
    }
  SoundEffectManager_Start(c, d[0], 0);
  HealthEvent_remove_OnHealthChanged(
    a[6],
    f32_convert_i32_s(c = a[4]) / f32_convert_i32_s(a[5]),
    c,
    b,
    a);
}

function Health_Awake(a:int, b:int) { // func87153
  var this:int_ptr;
  var f:int;
  if (eqz(6703930[0]:ubyte)) {
    f_hpa(5601748);
    f_hpa(5611444);
    f_hpa(5676592);
    f_hpa(5676596);
    f_hpa(5619244);
    6703930[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[14153]:int);
  f_uhrd(methodInfo, this, d_p444444444444044P44p44444444[30441]:int, 0);
  StaticEventHandler_CallPressRestEvent(methodInfo, 0);
  methodInfo = this[7];
  var c:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29])) { f_ahje(c) }
  if (UnityEngine_Camera_get_targetTexture(methodInfo, 0, 0)) {
    methodInfo = this[7];
    var d:int = f_icke(d_p444444444444044P44p44444444[11729]:int);
    UnityEngine_UIElements_VisualElement_get_layout(
      d,
      this,
      d_p444444444444044P44p44444444[30440]:int,
      0);
    if (eqz(6703927[0]:ubyte)) {
      f_hpa(5601748);
      6703927[0]:byte = 1;
    }
    var e:int = methodInfo + 16;
    this = methodInfo[4];
    loop L_f {
      methodInfo = 0;
      c = f_iyud(this, d, 0);
      if (c) {
        methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11729]:int);
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

function Health_OnEnable(a:int, b:int) { // func87154
  var this:int_ptr;
  var f:int;
  if (eqz(6703931[0]:ubyte)) {
    f_hpa(5601748);
    f_hpa(5611444);
    f_hpa(5676592);
    f_hpa(5676596);
    f_hpa(5619244);
    6703931[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[14153]:int);
  f_uhrd(methodInfo, this, d_p444444444444044P44p44444444[30441]:int, 0);
  StaticEventHandler_add_OnRestInBonfire(methodInfo, 0);
  methodInfo = this[7];
  var c:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29])) { f_ahje(c) }
  if (UnityEngine_Camera_get_targetTexture(methodInfo, 0, 0)) {
    methodInfo = this[7];
    var d:int = f_icke(d_p444444444444044P44p44444444[11729]:int);
    UnityEngine_UIElements_VisualElement_get_layout(
      d,
      this,
      d_p444444444444044P44p44444444[30440]:int,
      0);
    if (eqz(6703928[0]:ubyte)) {
      f_hpa(5601748);
      6703928[0]:byte = 1;
    }
    var e:int = methodInfo + 16;
    this = methodInfo[4];
    loop L_f {
      methodInfo = 0;
      c = f_kyud(this, d, 0);
      if (c) {
        methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11729]:int);
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

function Health_TakeDamage(a:int, b:int, c:int) { // func87156
  var this:int_ptr;
  var methodInfo:int;
  var damageAmount:int;
  this[4] =
    (damageAmount = select_if(methodInfo = this[5],
                              damageAmount = this[4] + damageAmount,
                              damageAmount > methodInfo));
  HealthEvent_remove_OnHealthChanged(
    this[6],
    f32_convert_i32_s(damageAmount) / f32_convert_i32_s(methodInfo),
    damageAmount,
    0,
    this);
}

function Health_StaticEventHandler_OnRestInBonfire(a:int_ptr, b:int, c:int) { // func87157
  var d:float;
  a[4] = (b = a[5]);
  HealthEvent_remove_OnHealthChanged(a[6],
                                     (d = f32_convert_i32_s(b)) / d,
                                     b,
                                     0,
                                     a);
}

function Health_ctor(a:int, b:int) { // func87158
  var this:int;
  var f:int;
  var c:int;
  if (eqz(6703933[0]:ubyte)) {
    f_hpa(5601996);
    f_hpa(5676600);
    f_hpa(5660024);
    6703933[0]:byte = 1;
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
                   })[23]:int)[0]:int)[4]:int)[11]:int;
  var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[30442]:int, 0);
  if (eqz(6703935[0]:ubyte)) {
    f_hpa(5601996);
    6703935[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  methodInfo = methodInfo[4]:int;
  loop L_f {
    this = 0;
    c = f_iyud(methodInfo, d, 0);
    if (c) {
      this = f_upa(c, f = d_p444444444444044P44p44444444[11791]:int);
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

