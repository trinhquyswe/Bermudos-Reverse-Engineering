// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Player  (Assembly-CSharp)

function Player_Awake(a:int, b:int) { // func86568
  var this:int_ptr;
  var c:int_ptr;
  var e:int;
  if (eqz(6703422[0]:ubyte)) {
    f_hpa(5601748);
    f_hpa(5601772);
    f_hpa(5601996);
    f_hpa(5683420);
    f_hpa(5683424);
    f_hpa(5683428);
    f_hpa(5660024);
    6703422[0]:byte = 1;
  }
  if (eqz(6703537[0]:ubyte)) {
    f_hpa(5619372);
    f_hpa(5621908);
    6703537[0]:byte = 1;
  }
  var methodInfo:int = 
    ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[3]:int;
  if (methodInfo) {
    c = f_icke(d_p444444444444044P44p44444444[16135]:int);
    MapChangedEventArgs_ctor(c, 0);
    c[2] = this;
    call_indirect(methodInfo[8]:int, c, methodInfo[5]:int, methodInfo[3]:int);
  }
  methodInfo = this[11];
  c = f_icke(d_p444444444444044P44p44444444[11791]:int);
  f_ofkc(c, this, d_p444444444444044P44p44444444[32149]:int, 0);
  HealthBar_ctor(methodInfo, c, 0);
  methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  var d:int_ptr = ((if (methodInfo[189]:ubyte & 1) {
                      methodInfo
                    } else {
                      System_Threading_Monitor_Enter_1(methodInfo)
                    })[23]:int)[0]:int;
  methodInfo = d[8];
  c = f_icke(d_p444444444444044P44p44444444[11735]:int);
  f_eujc(c, this, d_p444444444444044P44p44444444[32148]:int, 0);
  methodInfo = f_iyud(methodInfo, c, 0);
  if (eqz(methodInfo)) {
    d[8] = 0;
    goto B_h;
  }
  c = f_upa(methodInfo, e = d_p444444444444044P44p44444444[11735]:int);
  if (eqz(c)) goto B_g;
  d[8] = c;
  if (
    eqz(f_upa(methodInfo, c = d_p444444444444044P44p44444444[11735]:int))) goto B_f;
  label B_h:
  methodInfo = this[21];
  c = f_icke(d_p444444444444044P44p44444444[11729]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    this,
    d_p444444444444044P44p44444444[32147]:int,
    0);
  DestroyedEventArgs_ctor(methodInfo, c, 0);
  return ;
  label B_g:
  f_ypa(methodInfo, e);
  unreachable;
  label B_f:
  f_ypa(methodInfo, c);
  unreachable;
}

function Player_OnEnable(a:int, b:int) { // func86570
  var this:int_ptr;
  if (eqz(6703423[0]:ubyte)) {
    f_hpa(5601748);
    f_hpa(5601996);
    f_hpa(5683420);
    f_hpa(5683428);
    6703423[0]:byte = 1;
  }
  var methodInfo:int = this[11];
  var c:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
  f_ofkc(c, this, d_p444444444444044P44p44444444[32149]:int, 0);
  HealthEvent_add_OnHealthChanged(methodInfo, c, 0);
  methodInfo = this[21];
  c = f_icke(d_p444444444444044P44p44444444[11729]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    this,
    d_p444444444444044P44p44444444[32147]:int,
    0);
  DieEvent_add_OnDie(methodInfo, c, 0);
}

function Player_OnDisable(a:long_ptr@4, b:int, c:long_ptr) { // func86571
  c = g_a - 16;
  g_a = c;
  UnityEngine_Camera_get_farClipPlane(
    c,
    System_Linq_Enumerable_Count(b, 0),
    0);
  a[0] = c[0];
  g_a = c + 16;
}

function Player_DieEvent_OnDie(a:int, b:int, c:int, d:int) { // func86573
  if (eqz(6703425[0]:ubyte)) {
    f_hpa(5614436);
    6703425[0]:byte = 1;
  }
  a[108]:byte =
    if (c[3]:int <= 0) {
      if (eqz(a[108]:ubyte)) goto B_b;
      d = a[12]:int;
      DestroyedEvent_ctor(
        c = f_icke(d_p444444444444044P44p44444444[14901]:int),
        0);
      c[8]:byte = 1;
      multiple_DestroyedEvent_remove_OnDestroyed(d, c, 0);
      0;
    } else {
      1
    }
  label B_b:
}

function Player_HealthEvent_OnHealthChanged(a:int_ptr, b:ubyte_ptr, c:{ a:long, b:int, c:long }) { // func86574
  var d:int_ptr;
  c = g_a - 32;
  g_a = c;
  if (eqz(6703426[0]:ubyte)) {
    f_hpa(5601772);
    f_hpa(5683424);
    f_hpa(5660024);
    6703426[0]:byte = 1;
  }
  if (b) goto B_d;
  b = UnityEngine_GameObject_AddComponent(f_canb(a, 0), 0);
  var f:long = (a[22])[2]:long;
  d = c + 24;
  d[0] = 0;
  c.b = d[0];
  c.c = f;
  c.a = f;
  multiple_UnityEngine_Transform_ctor(b, c, 0);
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  var e:int_ptr = 
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
  b = e[8];
  d = f_icke(d_p444444444444044P44p44444444[11735]:int);
  f_eujc(d, a, d_p444444444444044P44p44444444[32148]:int, 0);
  a = f_kyud(b, d, 0);
  if (eqz(a)) {
    e[8] = 0;
    goto B_d;
  }
  b = f_upa(a, d = d_p444444444444044P44p44444444[11735]:int);
  if (eqz(b)) goto B_c;
  e[8] = b;
  if (
    eqz(f_upa(a, b = d_p444444444444044P44p44444444[11735]:int))) goto B_b;
  label B_d:
  g_a = c + 32;
  return ;
  label B_c:
  f_ypa(a, d);
  unreachable;
  label B_b:
  f_ypa(a, b);
  unreachable;
}

function Player_GameStateChanged_OnPlayer(a:int, b:int, c:int) { // func86575
  var gameState:int;
  if (eqz(6703427[0]:ubyte)) {
    f_hpa(5675612);
    f_hpa(5712544);
    6703427[0]:byte = 1;
  }
  if (UnityEngine_Camera_get_cullingMask(
        UnityEngine_Collision2D_get_rigidbody(gameState, 0),
        0) !=
      UnityEngine_LayerMask_LayerToName(
        d_p444444444444044P44p44444444[39428]:int,
        0)) goto B_b;
  gameState = UnityEngine_Object_set_name(
                UnityEngine_Collision2D_get_rigidbody(gameState, 0),
                d_p444444444444044P44p44444444[30195]:int);
  if (eqz(gameState[40]:ubyte)) goto B_b;
  UnityEngine_Rigidbody2D_set_isKinematic(gameState[7]:int, 7, 0);
  label B_b:
}

function Player_OnCollisionStay2D(a:int, b:int, c:int) { // func86576
  var collision:int;
  if (eqz(6703428[0]:ubyte)) {
    f_hpa(5675612);
    f_hpa(5712544);
    6703428[0]:byte = 1;
  }
  if (UnityEngine_Camera_get_cullingMask(
        UnityEngine_Collision2D_get_rigidbody(collision, 0),
        0) !=
      UnityEngine_LayerMask_LayerToName(
        d_p444444444444044P44p44444444[39428]:int,
        0)) goto B_b;
  collision = UnityEngine_Object_set_name(
                UnityEngine_Collision2D_get_rigidbody(collision, 0),
                d_p444444444444044P44p44444444[30195]:int);
  if (eqz(collision[40]:ubyte)) goto B_b;
  UnityEngine_Rigidbody2D_set_isKinematic(collision[7]:int, 4, 0);
  label B_b:
}

function Player_OnCollisionExit2D(a:int_ptr, b:int) { // func86577
  if (eqz(6703429[0]:ubyte)) {
    f_hpa(5610900);
    6703429[0]:byte = 1;
  }
  a[22] =
    Mono_Security_ASN1Convert_ToOid(
      d_p444444444444044P44p44444444[14017]:int,
      2);
  multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
}

function Player_ctor(a:int) { // func86578
  if (eqz(6703430[0]:ubyte)) {
    f_hpa(5629388);
    6703430[0]:byte = 1;
  }
  a = f_icke(d_p444444444444044P44p44444444[18639]:int);
  ((d_p444444444444044P44p44444444[18639]:int)[23]:int)[0]:int = a;
}

function Player_c_ctor(a:int, b:int) { // func86579
  if (eqz(6703431[0]:ubyte)) {
    f_hpa(5659992);
    f_hpa(5660024);
    6703431[0]:byte = 1;
  }
  var this:int = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  this = 
    ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
  f_sbnb(
    f_canb(
      (((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[23]:int)[0]:int)[9]:int,
      0),
    0,
    0);
  this = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  this = 
    ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
  if ((((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[23]:int)[0]:int)[7]:int ==
      4) {
    this = (d_p444444444444044P44p44444444[26290]:int)[4]:int;
    this = 
      ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
    if (eqz(this[189]:ubyte & 1)) { this = System_Threading_Monitor_Enter_1(this) }
    MusicManager_Start((this[23]:int)[0]:int, this);
    this = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
    this = 
      ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
    GameManager_TransitionToGame(
      ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[23]:int)[0]:int,
      3,
      0);
  }
}

function Player_c_DieEvent_OnDie_b_28_0(a:int, b:int) { // func86581
  var this:int_ptr;
  if (eqz(6703432[0]:ubyte)) {
    f_hpa(5601772);
    f_hpa(5668396);
    f_hpa(5668532);
    f_hpa(5668536);
    f_hpa(5668592);
    f_hpa(5617220);
    f_hpa(5683492);
    f_hpa(5660024);
    6703432[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28440]:int);
  this[14] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28391]:int);
  this[15] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28425]:int);
  this[16] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28426]:int);
  var methodInfo:ubyte_ptr = 
    f_icke(d_p444444444444044P44p44444444[15597]:int);
  InputSystem_Actions_get_asset(methodInfo, 0);
  this[5] = methodInfo;
  methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189] & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  var d:int_ptr = ((if (methodInfo[189] & 1) {
                      methodInfo
                    } else {
                      System_Threading_Monitor_Enter_1(methodInfo)
                    })[23]:int)[0]:int;
  methodInfo = d[8];
  var c:int = f_icke(d_p444444444444044P44p44444444[11735]:int);
  f_eujc(c, this, d_p444444444444044P44p44444444[32165]:int, 0);
  this = f_iyud(methodInfo, c, 0);
  if (eqz(this)) {
    d[8] = 0;
    return ;
  }
  methodInfo = 
    f_upa(this, c = d_p444444444444044P44p44444444[11735]:int);
  if (methodInfo) {
    d[8] = methodInfo;
    if (
      eqz(
        f_upa(this, methodInfo = d_p444444444444044P44p44444444[11735]:int))) goto B_e;
    return ;
  }
  f_ypa(this, c);
  unreachable;
  label B_e:
  f_ypa(this, methodInfo);
  unreachable;
}

