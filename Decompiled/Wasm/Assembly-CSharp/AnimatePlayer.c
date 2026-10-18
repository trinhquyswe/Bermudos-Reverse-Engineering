// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: AnimatePlayer  (Assembly-CSharp)

function AnimatePlayer_PlayAttackAnimationCoroutine_d_18_System_Collections_IEnumerator_get_Current(a:int_ptr, b:int, c:int) { // func86858
  var f:int;
  var d:int;
  if (eqz(6703757[0]:ubyte)) {
    f_hpa(5601704);
    6703757[0]:byte = 1;
  }
  var e:int = a + 16;
  a = a[4];
  loop L_c {
    c = 0;
    d = f_iyud(a, b, 0);
    if (d) {
      c = f_upa(d, f = d_p444444444444044P44p44444444[11718]:int);
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

function AnimatePlayer_Awake(a:int, b:int) { // func86876
  var this:int_ptr;
  var g:int;
  var c:int;
  var d:int_ptr;
  if (eqz(6703745[0]:ubyte)) {
    f_hpa(5601788);
    f_hpa(5601704);
    f_hpa(5601748);
    f_hpa(5601772);
    f_hpa(5601988);
    f_hpa(5602036);
    f_hpa(5601960);
    f_hpa(5664212);
    f_hpa(5664216);
    f_hpa(5664220);
    f_hpa(5664224);
    f_hpa(5664228);
    f_hpa(5664232);
    f_hpa(5664236);
    f_hpa(5660024);
    6703745[0]:byte = 1;
  }
  var methodInfo:int = (this[4])[8]:int;
  var e:int = f_icke(d_p444444444444044P44p44444444[11782]:int);
  f_ofkc(e, this, d_p444444444444044P44p44444444[27345]:int, 0);
  if (eqz(6703740[0]:ubyte)) {
    f_hpa(5601960);
    6703740[0]:byte = 1;
  }
  var f:int = methodInfo + 16;
  methodInfo = methodInfo[4]:int;
  loop L_i {
    c = 0;
    d = f_iyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11782]:int);
      if (eqz(c)) goto B_h;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_i;
  }
  methodInfo = (this[4])[7]:int;
  c = f_icke(d_p444444444444044P44p44444444[11739]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    this,
    d_p444444444444044P44p44444444[27350]:int,
    0);
  Idle_ctor(methodInfo, c, 0);
  methodInfo = (this[4])[4]:int;
  c = f_icke(d_p444444444444044P44p44444444[11801]:int);
  f_ofkc(c, this, d_p444444444444044P44p44444444[27351]:int, 0);
  MovementByVelocity_ctor(methodInfo, c, 0);
  methodInfo = (this[4])[9]:int;
  e = f_icke(d_p444444444444044P44p44444444[11718]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    e,
    this,
    d_p444444444444044P44p44444444[27346]:int,
    0);
  if (eqz(6703757[0]:ubyte)) {
    f_hpa(5601704);
    6703757[0]:byte = 1;
  }
  f = methodInfo + 16;
  methodInfo = methodInfo[4]:int;
  loop L_l {
    c = 0;
    d = f_iyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11718]:int);
      if (eqz(c)) goto B_g;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_l;
  }
  methodInfo = (this[4])[12]:int;
  e = f_icke(d_p444444444444044P44p44444444[11789]:int);
  f_ofkc(e, this, d_p444444444444044P44p44444444[27347]:int, 0);
  if (eqz(6703924[0]:ubyte)) {
    f_hpa(5601988);
    6703924[0]:byte = 1;
  }
  f = methodInfo + 16;
  methodInfo = methodInfo[4]:int;
  loop L_o {
    c = 0;
    d = f_iyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11789]:int);
      if (eqz(c)) goto B_f;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_o;
  }
  methodInfo = this[5];
  e = f_icke(d_p444444444444044P44p44444444[11729]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    e,
    this,
    d_p444444444444044P44p44444444[27348]:int,
    0);
  if (eqz(6703927[0]:ubyte)) {
    f_hpa(5601748);
    6703927[0]:byte = 1;
  }
  f = methodInfo + 16;
  methodInfo = methodInfo[4]:int;
  loop L_r {
    c = 0;
    d = f_iyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11729]:int);
      if (eqz(c)) goto B_e;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_r;
  }
  methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  d = ((if (methodInfo[189]:ubyte & 1) {
          methodInfo
        } else {
          System_Threading_Monitor_Enter_1(methodInfo)
        })[23]:int)[0]:int;
  methodInfo = d[8];
  c = f_icke(d_p444444444444044P44p44444444[11735]:int);
  f_eujc(c, this, d_p444444444444044P44p44444444[27349]:int, 0);
  methodInfo = f_iyud(methodInfo, c, 0);
  if (eqz(methodInfo)) {
    d[8] = 0;
    return ;
  }
  c = f_upa(methodInfo, e = d_p444444444444044P44p44444444[11735]:int);
  if (eqz(c)) goto B_d;
  d[8] = c;
  if (
    eqz(f_upa(methodInfo, c = d_p444444444444044P44p44444444[11735]:int))) goto B_c;
  return ;
  label B_h:
  f_ypa(d, g);
  unreachable;
  label B_g:
  f_ypa(d, g);
  unreachable;
  label B_f:
  f_ypa(d, g);
  unreachable;
  label B_e:
  f_ypa(d, g);
  unreachable;
  label B_d:
  f_ypa(methodInfo, e);
  unreachable;
  label B_c:
  f_ypa(methodInfo, c);
  unreachable;
}

function AnimatePlayer_OnEnable(a:int, b:int) { // func86879
  var this:int_ptr;
  var g:int;
  var c:int;
  var d:int;
  if (eqz(6703746[0]:ubyte)) {
    f_hpa(5601788);
    f_hpa(5601704);
    f_hpa(5601748);
    f_hpa(5601988);
    f_hpa(5602036);
    f_hpa(5601960);
    f_hpa(5664212);
    f_hpa(5664216);
    f_hpa(5664220);
    f_hpa(5664224);
    f_hpa(5664232);
    f_hpa(5664236);
    6703746[0]:byte = 1;
  }
  var methodInfo:int_ptr = (this[4])[8]:int;
  var e:int = f_icke(d_p444444444444044P44p44444444[11782]:int);
  f_ofkc(e, this, d_p444444444444044P44p44444444[27345]:int, 0);
  if (eqz(6703741[0]:ubyte)) {
    f_hpa(5601960);
    6703741[0]:byte = 1;
  }
  var f:int = methodInfo + 16;
  methodInfo = methodInfo[4];
  loop L_g {
    c = 0;
    d = f_kyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11782]:int);
      if (eqz(c)) goto B_f;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_g;
  }
  methodInfo = (this[4])[7]:int;
  c = f_icke(d_p444444444444044P44p44444444[11739]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    this,
    d_p444444444444044P44p44444444[27350]:int,
    0);
  IdleEvent_add_OnIdle(methodInfo, c, 0);
  methodInfo = (this[4])[4]:int;
  c = f_icke(d_p444444444444044P44p44444444[11801]:int);
  f_ofkc(c, this, d_p444444444444044P44p44444444[27351]:int, 0);
  MovementByVelocityEvent_add_OnMovementByVelocity(methodInfo, c, 0);
  methodInfo = (this[4])[9]:int;
  e = f_icke(d_p444444444444044P44p44444444[11718]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    e,
    this,
    d_p444444444444044P44p44444444[27346]:int,
    0);
  if (eqz(6703758[0]:ubyte)) {
    f_hpa(5601704);
    6703758[0]:byte = 1;
  }
  f = methodInfo + 16;
  methodInfo = methodInfo[4];
  loop L_j {
    c = 0;
    d = f_kyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11718]:int);
      if (eqz(c)) goto B_e;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_j;
  }
  methodInfo = this[5];
  e = f_icke(d_p444444444444044P44p44444444[11729]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    e,
    this,
    d_p444444444444044P44p44444444[27348]:int,
    0);
  if (eqz(6703928[0]:ubyte)) {
    f_hpa(5601748);
    6703928[0]:byte = 1;
  }
  f = methodInfo + 16;
  methodInfo = methodInfo[4];
  loop L_m {
    c = 0;
    d = f_kyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11729]:int);
      if (eqz(c)) goto B_d;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_m;
  }
  methodInfo = (this[4])[12]:int;
  e = f_icke(d_p444444444444044P44p44444444[11789]:int);
  f_ofkc(e, this, d_p444444444444044P44p44444444[27347]:int, 0);
  if (eqz(6703925[0]:ubyte)) {
    f_hpa(5601988);
    6703925[0]:byte = 1;
  }
  f = methodInfo + 16;
  methodInfo = methodInfo[4];
  loop L_p {
    c = 0;
    d = f_kyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11789]:int);
      if (eqz(c)) goto B_c;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_p;
  }
  return ;
  label B_f:
  f_ypa(d, g);
  unreachable;
  label B_e:
  f_ypa(d, g);
  unreachable;
  label B_d:
  f_ypa(d, g);
  unreachable;
  label B_c:
  f_ypa(d, g);
  unreachable;
}

function AnimatePlayer_OnDisable(a:int_ptr, b:int, c:int) { // func86882
  var g:int;
  var d:int_ptr;
  var e:int;
  var f:int;
  if (eqz(6703747[0]:ubyte)) {
    f_hpa(5601788);
    f_hpa(5601704);
    f_hpa(5601772);
    f_hpa(5601988);
    f_hpa(5602036);
    f_hpa(5664216);
    f_hpa(5664220);
    f_hpa(5664228);
    f_hpa(5664232);
    f_hpa(5664236);
    f_hpa(5621280);
    f_hpa(5660024);
    6703747[0]:byte = 1;
  }
  br_table[B_j, B_h, B_i, ..B_h](b)
  label B_j:
  b = (a[4])[7]:int;
  c = f_icke(d_p444444444444044P44p44444444[11739]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    a,
    d_p444444444444044P44p44444444[27350]:int,
    0);
  IdleEvent_add_OnIdle(b, c, 0);
  b = (a[4])[4]:int;
  c = f_icke(d_p444444444444044P44p44444444[11801]:int);
  f_ofkc(c, a, d_p444444444444044P44p44444444[27351]:int, 0);
  MovementByVelocityEvent_add_OnMovementByVelocity(b, c, 0);
  b = (a[4])[9]:int;
  e = f_icke(d_p444444444444044P44p44444444[11718]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    e,
    a,
    d_p444444444444044P44p44444444[27346]:int,
    0);
  if (eqz(6703758[0]:ubyte)) {
    f_hpa(5601704);
    6703758[0]:byte = 1;
  }
  f = b + 16;
  b = b[4]:int;
  loop L_l {
    c = 0;
    d = f_kyud(b, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11718]:int);
      if (eqz(c)) goto B_g;
    }
    d = b != (c = System_Net_WebOperation_ctor(f, c, b));
    b = c;
    if (d) continue L_l;
  }
  b = (a[4])[12]:int;
  e = f_icke(d_p444444444444044P44p44444444[11789]:int);
  f_ofkc(e, a, d_p444444444444044P44p44444444[27347]:int, 0);
  if (eqz(6703925[0]:ubyte)) {
    f_hpa(5601988);
    6703925[0]:byte = 1;
  }
  f = b + 16;
  b = b[4]:int;
  loop L_o {
    c = 0;
    d = f_kyud(b, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11789]:int);
      if (eqz(c)) goto B_f;
    }
    d = b != (c = System_Net_WebOperation_ctor(f, c, b));
    b = c;
    if (d) continue L_o;
  }
  AnimatePlayer_InitializeAimAnimationParameters(a, b);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[17]:int,
    ((if ((b = d_p444444444444044P44p44444444[16612]:int)[29]:int) {
        b
      } else {
        f_ahje(b);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[3]:int,
    1,
    0);
  return ;
  label B_i:
  b = (a[4])[7]:int;
  c = f_icke(d_p444444444444044P44p44444444[11739]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    a,
    d_p444444444444044P44p44444444[27350]:int,
    0);
  Idle_ctor(b, c, 0);
  b = (a[4])[4]:int;
  c = f_icke(d_p444444444444044P44p44444444[11801]:int);
  f_ofkc(c, a, d_p444444444444044P44p44444444[27351]:int, 0);
  MovementByVelocity_ctor(b, c, 0);
  b = (a[4])[9]:int;
  e = f_icke(d_p444444444444044P44p44444444[11718]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    e,
    a,
    d_p444444444444044P44p44444444[27346]:int,
    0);
  if (eqz(6703757[0]:ubyte)) {
    f_hpa(5601704);
    6703757[0]:byte = 1;
  }
  f = b + 16;
  b = b[4]:int;
  loop L_s {
    c = 0;
    d = f_iyud(b, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11718]:int);
      if (eqz(c)) goto B_e;
    }
    d = b != (c = System_Net_WebOperation_ctor(f, c, b));
    b = c;
    if (d) continue L_s;
  }
  b = (a[4])[12]:int;
  e = f_icke(d_p444444444444044P44p44444444[11789]:int);
  f_ofkc(e, a, d_p444444444444044P44p44444444[27347]:int, 0);
  if (eqz(6703924[0]:ubyte)) {
    f_hpa(5601988);
    6703924[0]:byte = 1;
  }
  f = b + 16;
  b = b[4]:int;
  loop L_v {
    c = 0;
    d = f_iyud(b, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11789]:int);
      if (eqz(c)) goto B_d;
    }
    d = b != (c = System_Net_WebOperation_ctor(f, c, b));
    b = c;
    if (d) continue L_v;
  }
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  d = 
    ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
  b = d[8];
  c = f_icke(d_p444444444444044P44p44444444[11735]:int);
  f_eujc(c, a, d_p444444444444044P44p44444444[27349]:int, 0);
  b = f_kyud(b, c, 0);
  if (eqz(b)) {
    d[8] = 0;
    return ;
  }
  c = f_upa(b, e = d_p444444444444044P44p44444444[11735]:int);
  if (eqz(c)) goto B_c;
  d[8] = c;
  if (
    eqz(f_upa(b, c = d_p444444444444044P44p44444444[11735]:int))) goto B_b;
  label B_h:
  return ;
  label B_g:
  f_ypa(d, g);
  unreachable;
  label B_f:
  f_ypa(d, g);
  unreachable;
  label B_e:
  f_ypa(d, g);
  unreachable;
  label B_d:
  f_ypa(d, g);
  unreachable;
  label B_c:
  f_ypa(b, e);
  unreachable;
  label B_b:
  f_ypa(b, c);
  unreachable;
}

function AnimatePlayer_InitializeAimAnimationParameters(a:int, b:int) { // func86883
  var this:int_ptr;
  var methodInfo:int_ptr;
  if (eqz(6703754[0]:ubyte)) {
    f_hpa(5621280);
    6703754[0]:byte = 1;
  }
  multiple_UnityEngine_Animator_GetBool_1(
    (this[4])[17]:int,
    ((if ((methodInfo = d_p444444444444044P44p44444444[16612]:int)[29]) {
        methodInfo
      } else {
        f_ahje(methodInfo);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[0]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (this[4])[17]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[1]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (this[4])[17]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[2]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (this[4])[17]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[3]:int,
    0,
    0);
}

function AnimatePlayer_GameStateChanged_OnPlayer(a:int, b:int, c:int_ptr, d:int) { // func86884
  AnimatePlayer_DieEvent_OnDie(a, a);
  AnimatePlayer_InitializeStateAnimationParameters(a, c[2], a);
}

function AnimatePlayer_DieEvent_OnDie(a:int_ptr, b:int_ptr) { // func86885
  if (eqz(6703753[0]:ubyte)) {
    f_hpa(5621280);
    6703753[0]:byte = 1;
  }
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[17]:int,
    ((if ((b = d_p444444444444044P44p44444444[16612]:int)[29]) {
        b
      } else {
        f_ahje(b);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[4]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[17]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[7]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[17]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[8]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[17]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[9]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[17]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[10]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[17]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[6]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[17]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[11]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[17]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[12]:int,
    0,
    0);
}

function AnimatePlayer_InitializeStateAnimationParameters(a:int_ptr, b:int_ptr, c:int) { // func86886
  if (eqz(6703755[0]:ubyte)) {
    f_hpa(5621280);
    6703755[0]:byte = 1;
  }
  br_table[B_l, B_k, B_j, B_i, B_h, B_g, B_f, B_e, ..B_b](b)
  label B_l:
  a = (a[4])[17]:int;
  c = 16;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29])) goto B_d;
  goto B_c;
  label B_k:
  a = (a[4])[17]:int;
  c = 28;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29])) goto B_d;
  goto B_c;
  label B_j:
  a = (a[4])[17]:int;
  c = 32;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29])) goto B_d;
  goto B_c;
  label B_i:
  a = (a[4])[17]:int;
  c = 36;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29])) goto B_d;
  goto B_c;
  label B_h:
  a = (a[4])[17]:int;
  c = 40;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29])) goto B_d;
  goto B_c;
  label B_g:
  a = (a[4])[17]:int;
  c = 24;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29])) goto B_d;
  goto B_c;
  label B_f:
  a = (a[4])[17]:int;
  c = 44;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29])) goto B_d;
  goto B_c;
  label B_e:
  a = (a[4])[17]:int;
  c = 48;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (b[29]) goto B_c;
  label B_d:
  f_ahje(b);
  b = d_p444444444444044P44p44444444[16612]:int;
  label B_c:
  multiple_UnityEngine_Animator_GetBool_1(a, (b[23] + c)[0]:int, 1, 0);
  label B_b:
}

function AnimatePlayer_AnimatePlayer_OnAnimate(a:int_ptr, b:int, c:int) { // func86887
  if (eqz(6703748[0]:ubyte)) {
    f_hpa(5621280);
    6703748[0]:byte = 1;
  }
  if (eqz(a[6])) {
    AnimatePlayer_InitializeAimAnimationParameters(a, a);
    multiple_UnityEngine_Animator_GetBool_1(
      (a[4])[17]:int,
      ((if ((a = d_p444444444444044P44p44444444[16612]:int)[29]) {
          a
        } else {
          f_ahje(a);
          d_p444444444444044P44p44444444[16612]:int;
        })[23]:int)[0]:int,
      1,
      0);
  }
}

function AnimatePlayer_IdleEvent_OnIdle(a:int_ptr, b:int, c:int, d:int) { // func86888
  if (eqz(6703749[0]:ubyte)) {
    f_hpa(5621280);
    6703749[0]:byte = 1;
  }
  if (eqz(a[6])) {
    AnimatePlayer_InitializeAimAnimationParameters(a, a);
    multiple_UnityEngine_Animator_GetBool_1(
      (a[4])[17]:int,
      ((if ((a = d_p444444444444044P44p44444444[16612]:int)[29]) {
          a
        } else {
          f_ahje(a);
          d_p444444444444044P44p44444444[16612]:int;
        })[23]:int)[1]:int,
      1,
      0);
  }
}

function AnimatePlayer_MovementByVelocityEvent_OnMovementByVelocity(a:int, b:int, c:int, d:int) { // func86889
  var this:int_ptr;
  var g:int;
  var methodInfo:int;
  if (eqz(6703750[0]:ubyte)) {
    f_hpa(5601788);
    f_hpa(5601704);
    f_hpa(5602036);
    f_hpa(5664216);
    f_hpa(5664232);
    f_hpa(5664236);
    f_hpa(5621280);
    6703750[0]:byte = 1;
  }
  var movementByVelocityEvent:int_ptr = (this[4])[7]:int;
  var movementByVelocityArgs:int = 
    f_icke(d_p444444444444044P44p44444444[11739]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    movementByVelocityArgs,
    this,
    d_p444444444444044P44p44444444[27350]:int,
    0);
  IdleEvent_add_OnIdle(movementByVelocityEvent, movementByVelocityArgs, 0);
  movementByVelocityEvent = (this[4])[4]:int;
  movementByVelocityArgs = 
    f_icke(d_p444444444444044P44p44444444[11801]:int);
  f_ofkc(movementByVelocityArgs,
         this,
         d_p444444444444044P44p44444444[27351]:int,
         0);
  MovementByVelocityEvent_add_OnMovementByVelocity(
    movementByVelocityEvent,
    movementByVelocityArgs,
    0);
  movementByVelocityEvent = (this[4])[9]:int;
  var e:int = f_icke(d_p444444444444044P44p44444444[11718]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    e,
    this,
    d_p444444444444044P44p44444444[27346]:int,
    0);
  if (eqz(6703758[0]:ubyte)) {
    f_hpa(5601704);
    6703758[0]:byte = 1;
  }
  var f:int = movementByVelocityEvent + 16;
  movementByVelocityEvent = movementByVelocityEvent[4];
  loop L_d {
    movementByVelocityArgs = 0;
    methodInfo = f_kyud(movementByVelocityEvent, e, 0);
    if (methodInfo) {
      movementByVelocityArgs = 
        f_upa(methodInfo, g = d_p444444444444044P44p44444444[11718]:int);
      if (eqz(movementByVelocityArgs)) goto B_c;
    }
    methodInfo = 
      movementByVelocityEvent !=
      (movementByVelocityArgs = 
         System_Net_WebOperation_ctor(f,
                                      movementByVelocityArgs,
                                      movementByVelocityEvent));
    movementByVelocityEvent = movementByVelocityArgs;
    if (methodInfo) continue L_d;
  }
  AnimatePlayer_InitializeAimAnimationParameters(
    this,
    movementByVelocityEvent);
  multiple_UnityEngine_Animator_GetBool_1(
    (this[4])[17]:int,
    ((if ((movementByVelocityEvent = d_p444444444444044P44p44444444[16612]:int)[29]) {
        movementByVelocityEvent
      } else {
        f_ahje(movementByVelocityEvent);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[3]:int,
    1,
    0);
  return ;
  label B_c:
  f_ypa(methodInfo, g);
  unreachable;
}

function AnimatePlayer_DestroyedEvent_OnDestroyed(a:int_ptr, b:int_ptr, c:int) { // func86890
  if (eqz(6703751[0]:ubyte)) {
    f_hpa(5621280);
    6703751[0]:byte = 1;
  }
  AnimatePlayer_InitializeAimAnimationParameters(a, a);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[17]:int,
    ((if ((b = d_p444444444444044P44p44444444[16612]:int)[29]) {
        b
      } else {
        f_ahje(b);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[2]:int,
    1,
    0);
  b = a[6];
  if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
  if (eqz(6703756[0]:ubyte)) {
    f_hpa(5625728);
    6703756[0]:byte = 1;
  }
  b = f_icke(d_p444444444444044P44p44444444[17724]:int);
  b[4] = a;
  b[2] = 0;
  a[6] = UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
}

function AnimatePlayer_SetAimAnimationParameters(a:int_ptr, b:int_ptr) { // func86891
  b = a[6];
  if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
  if (eqz(6703756[0]:ubyte)) {
    f_hpa(5625728);
    6703756[0]:byte = 1;
  }
  b = f_icke(d_p444444444444044P44p44444444[17724]:int);
  b[4] = a;
  b[2] = 0;
  a[6] = UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
}

function AnimatePlayer_AttackEvent_OnAttack(a:int, b:int, c:int) { // func86892
  var this:int_ptr;
  var f:int;
  if (eqz(6703752[0]:ubyte)) {
    f_hpa(5601788);
    f_hpa(5601704);
    f_hpa(5602036);
    f_hpa(5664216);
    f_hpa(5664232);
    f_hpa(5664236);
    6703752[0]:byte = 1;
  }
  var attackEvent:int_ptr = (this[4])[7]:int;
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[11739]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[27350]:int,
    0);
  Idle_ctor(attackEvent, methodInfo, 0);
  attackEvent = (this[4])[4]:int;
  methodInfo = f_icke(d_p444444444444044P44p44444444[11801]:int);
  f_ofkc(methodInfo, this, d_p444444444444044P44p44444444[27351]:int, 0);
  MovementByVelocity_ctor(attackEvent, methodInfo, 0);
  attackEvent = (this[4])[9]:int;
  var d:int = f_icke(d_p444444444444044P44p44444444[11718]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    d,
    this,
    d_p444444444444044P44p44444444[27346]:int,
    0);
  if (eqz(6703757[0]:ubyte)) {
    f_hpa(5601704);
    6703757[0]:byte = 1;
  }
  var e:int = attackEvent + 16;
  this = attackEvent[4];
  loop L_d {
    attackEvent = 0;
    methodInfo = f_iyud(this, d, 0);
    if (methodInfo) {
      attackEvent = 
        f_upa(methodInfo, f = d_p444444444444044P44p44444444[11718]:int);
      if (eqz(attackEvent)) goto B_c;
    }
    methodInfo = 
      this !=
      (attackEvent = System_Net_WebOperation_ctor(e, attackEvent, this));
    this = attackEvent;
    if (methodInfo) continue L_d;
  }
  return ;
  label B_c:
  f_ypa(methodInfo, f);
  unreachable;
}

function AnimatePlayer_PlayAttackAnimation(a:int, b:int):int { // func86893
  var this:int;
  if (eqz(6703756[0]:ubyte)) {
    f_hpa(5625728);
    6703756[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[17724]:int);
  methodInfo[4] = this;
  methodInfo[2] = 0;
  return methodInfo;
}

function AnimatePlayer_PlayAttackAnimationCoroutine_d_18_System_IDisposable_Dispose(a:int, b:int):int { // func86894
  var this:int;
  var f:int_ptr;
  var h:long_ptr;
  var j:long_ptr;
  var l:long_ptr;
  var d:int;
  var methodInfo:long_ptr = g_a - 80;
  g_a = methodInfo;
  br_table[B_c, B_b, B_b, ..B_a](this[2]:int)
  label B_c:
  this[5]:int = 0;
  this[2]:long@4 = 1L;
  d = 1;
  goto B_a;
  label B_b:
  var c:int_ptr = this[4]:int;
  this[2]:int = -1;
  UnityEngine_Animator_GetAnimatorStateInfo(methodInfo, (c[4])[17]:int, 0, 0);
  var e:int_ptr = methodInfo + 72;
  e[0] = (f = methodInfo + 32)[0];
  var g:long_ptr = methodInfo - -64;
  g[0] = (h = methodInfo + 24)[0];
  var i:long_ptr = methodInfo + 56;
  i[0] = (j = methodInfo + 16)[0];
  var k:long_ptr = methodInfo + 48;
  k[0] = (l = methodInfo + 8)[0];
  methodInfo[5] = methodInfo[0];
  if (eqz((methodInfo + 40)[3]:float < 1.0f)) {
    c[6] = 0;
    goto B_a;
  }
  UnityEngine_Animator_GetAnimatorStateInfo(methodInfo, (c[4])[17]:int, 0, 0);
  e[0] = f[0];
  g[0] = h[0];
  i[0] = j[0];
  k[0] = l[0];
  methodInfo[5] = methodInfo[0];
  var m:float = (methodInfo + 40)[3]:float;
  if (m < this[5]:float) {
    UnityEngine_MonoBehaviour_StopCoroutine(c, c[6], 0);
    c[6] = 0;
  }
  this[5]:float = m;
  this[2]:long@4 = 2L;
  d = 1;
  label B_a:
  g_a = methodInfo + 80;
  return d;
}

function AnimatePlayer_PlayAttackAnimationCoroutine_d_18_System_Collections_Generic_IEnumerator_System_Object(a:int, b:int) { // func86895
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5696024));
  unreachable;
}

