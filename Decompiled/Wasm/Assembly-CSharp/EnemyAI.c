// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: EnemyAI  (Assembly-CSharp)

function EnemyAI_Awake(a:int, b:int) { // func87060
  var this:int_ptr;
  var e:int;
  var f:int;
  if (eqz(6703857[0]:ubyte)) {
    f_hpa(5601992);
    f_hpa(5602056);
    f_hpa(5672624);
    f_hpa(5672628);
    6703857[0]:byte = 1;
  }
  var d:int_ptr = this[6];
  var methodInfo:int_ptr = d[4];
  var c:int = f_icke(d_p444444444444044P44p44444444[11790]:int);
  f_ofkc(c, this, d_p444444444444044P44p44444444[29448]:int, 0);
  methodInfo = f_iyud(methodInfo, c, 0);
  if (eqz(methodInfo)) {
    d[4] = 0;
    goto B_e;
  }
  c = f_upa(methodInfo, e = d_p444444444444044P44p44444444[11790]:int);
  if (eqz(c)) goto B_d;
  d[4] = c;
  if (
    eqz(f_upa(methodInfo, c = d_p444444444444044P44p44444444[11790]:int))) goto B_c;
  label B_e:
  methodInfo = (this[7])[10]:int;
  d = f_icke(d_p444444444444044P44p44444444[11806]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[29449]:int, 0);
  if (eqz(6703940[0]:ubyte)) {
    f_hpa(5602056);
    6703940[0]:byte = 1;
  }
  e = methodInfo + 16;
  this = methodInfo[4];
  loop L_h {
    methodInfo = 0;
    c = f_iyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
      if (eqz(methodInfo)) goto B_b;
    }
    c = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (c) continue L_h;
  }
  return ;
  label B_d:
  f_ypa(methodInfo, e);
  unreachable;
  label B_c:
  f_ypa(methodInfo, c);
  unreachable;
  label B_b:
  f_ypa(c, f);
  unreachable;
}

function EnemyAI_OnEnable(a:int, b:int) { // func87061
  var this:int_ptr;
  var e:int;
  var f:int;
  if (eqz(6703858[0]:ubyte)) {
    f_hpa(5601992);
    f_hpa(5602056);
    f_hpa(5672624);
    f_hpa(5672628);
    6703858[0]:byte = 1;
  }
  var d:int_ptr = this[6];
  var methodInfo:int_ptr = d[4];
  var c:int = f_icke(d_p444444444444044P44p44444444[11790]:int);
  f_ofkc(c, this, d_p444444444444044P44p44444444[29448]:int, 0);
  methodInfo = f_kyud(methodInfo, c, 0);
  if (eqz(methodInfo)) {
    d[4] = 0;
    goto B_e;
  }
  c = f_upa(methodInfo, e = d_p444444444444044P44p44444444[11790]:int);
  if (eqz(c)) goto B_d;
  d[4] = c;
  if (
    eqz(f_upa(methodInfo, c = d_p444444444444044P44p44444444[11790]:int))) goto B_c;
  label B_e:
  methodInfo = (this[7])[10]:int;
  d = f_icke(d_p444444444444044P44p44444444[11806]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[29449]:int, 0);
  if (eqz(6703940[0]:ubyte)) {
    f_hpa(5602056);
    6703940[0]:byte = 1;
  }
  e = methodInfo + 16;
  this = methodInfo[4];
  loop L_h {
    methodInfo = 0;
    c = f_iyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
      if (eqz(methodInfo)) goto B_b;
    }
    c = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (c) continue L_h;
  }
  return ;
  label B_d:
  f_ypa(methodInfo, e);
  unreachable;
  label B_c:
  f_ypa(methodInfo, c);
  unreachable;
  label B_b:
  f_ypa(c, f);
  unreachable;
}

function EnemyAI_OnDisable(a:int, b:int, c:int, d:int) { // func87062
  if (c[3]:float <= 0.0f) {
    var e:float = c[5]:float;
    if (eqz(6703859[0]:ubyte)) {
      f_hpa(5627336);
      6703859[0]:byte = 1;
    }
    c = f_icke(d_p444444444444044P44p44444444[18126]:int);
    c[5]:float = e;
    c[4]:int = a;
    c[2]:int = 0;
    UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
  }
}

function EnemyAI_Update(a:int, b:float, c:int) { // func87063
  if (eqz(6703859[0]:ubyte)) {
    f_hpa(5627336);
    6703859[0]:byte = 1;
  }
  c = f_icke(d_p444444444444044P44p44444444[18126]:int);
  c[5]:float = b;
  c[4]:int = a;
  c[2]:int = 0;
  UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
}

function EnemyAI_OnEnemyState(a:int, b:int_ptr) { // func87064
  br_table[B_d, B_b, B_e, B_c, B_a, ..B_e](a[8]:int - 1)
  label B_e:
  multiple_8_AttackEvent_remove_OnAttack((a[7]:int)[13]:int, 0);
  EnemyMovement_Start(a[4]:int, a);
  EnemyMovement_MoveRoamingPosition(a[4]:int, a);
  f_ttxd(a[4]:int, 0, a);
  return ;
  label B_d:
  multiple_8_AttackEvent_remove_OnAttack((a[7]:int)[13]:int, 0);
  EnemyMovement_FindPlayer(a[4]:int, a);
  EnemyMovement_MoveToPlayer(a[4]:int, a);
  f_ttxd(a[4]:int, 1, a);
  return ;
  label B_c:
  multiple_8_AttackEvent_remove_OnAttack((a[7]:int)[13]:int, 0);
  EnemyMovement_GetDistanceToStartPosition(a[4]:int, a);
  f_ttxd(a[4]:int, 0, a);
  return ;
  label B_b:
  if (eqz(a[40]:ubyte)) goto B_a;
  var c:int_ptr = (a[7]:int)[14]:int;
  b = c[4];
  if (b) { call_indirect(b[8], c, b[5], b[3]) }
  EnemyAttack_Start(a[5]:int, a);
  EnemyMovement_StopEnemyCoroutine_d_19_System_Collections_IEnumerator_get_Current(
    a[6]:int,
    1,
    a);
  label B_a:
}

function EnemyAI_StopAttack(a:int, b:float, c:int):int { // func87074
  var stunTime:float;
  var this:int;
  if (eqz(6703859[0]:ubyte)) {
    f_hpa(5627336);
    6703859[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[18126]:int);
  methodInfo[5]:float = stunTime;
  methodInfo[4]:int = this;
  methodInfo[2]:int = 0;
  return methodInfo;
}

function EnemyAI_StopAttackCoroutine(a:byte_ptr, b:int) { // func87075
  a[40] = 1;
  multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
}

function EnemyAI_StopAttackCoroutine_d_14_System_IDisposable_Dispose(a:int, b:int):int { // func87076
  var this:int;
  if (eqz(6703860[0]:ubyte)) {
    f_hpa(5624116);
    6703860[0]:byte = 1;
  }
  var methodInfo:byte_ptr = this[4]:int;
  br_table[B_d, B_c, ..B_b](this[2]:int)
  label B_d:
  this[2]:int = -1;
  methodInfo[40] = 0;
  var c:float = this[5]:float;
  methodInfo = f_icke(d_p444444444444044P44p44444444[17321]:int);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
    methodInfo,
    c,
    0);
  this[2]:int = 1;
  this[3]:int = methodInfo;
  return 1;
  label B_c:
  this[2]:int = -1;
  methodInfo[40] = 1;
  label B_b:
  return 0;
}

function EnemyAI_StopAttackCoroutine_d_14_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func87077
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5697816));
  unreachable;
}

function EnemyAI_StopAttackCoroutine_d_14_System_Collections_IEnumerator_get_Current(a:int, b:int) { // func87078
  var this:int_ptr;
  if (eqz(6703861[0]:ubyte)) {
    f_hpa(5668472);
    6703861[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28410]:int);
}

