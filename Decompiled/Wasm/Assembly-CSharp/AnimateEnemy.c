// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: AnimateEnemy  (Assembly-CSharp)

function AnimateEnemy_Awake(a:int, b:int) { // func86856
  var this:int_ptr;
  var g:int;
  var c:int;
  var d:int;
  if (eqz(6703731[0]:ubyte)) {
    f_hpa(5601788);
    f_hpa(5601704);
    f_hpa(5601820);
    f_hpa(5601960);
    f_hpa(5664196);
    f_hpa(5664200);
    f_hpa(5664204);
    f_hpa(5664208);
    6703731[0]:byte = 1;
  }
  var methodInfo:int_ptr = (this[4])[4]:int;
  var e:int = f_icke(d_p444444444444044P44p44444444[11782]:int);
  f_ofkc(e, this, d_p444444444444044P44p44444444[27341]:int, 0);
  if (eqz(6703740[0]:ubyte)) {
    f_hpa(5601960);
    6703740[0]:byte = 1;
  }
  var f:int = methodInfo + 16;
  methodInfo = methodInfo[4];
  loop L_e {
    c = 0;
    d = f_iyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11782]:int);
      if (eqz(c)) goto B_d;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_e;
  }
  methodInfo = (this[4])[12]:int;
  c = f_icke(d_p444444444444044P44p44444444[11739]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    this,
    d_p444444444444044P44p44444444[27343]:int,
    0);
  Idle_ctor(methodInfo, c, 0);
  methodInfo = (this[4])[13]:int;
  c = f_icke(d_p444444444444044P44p44444444[11747]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    this,
    d_p444444444444044P44p44444444[27344]:int,
    0);
  IdleEvent_ctor(methodInfo, c, 0);
  methodInfo = (this[4])[14]:int;
  e = f_icke(d_p444444444444044P44p44444444[11718]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    e,
    this,
    d_p444444444444044P44p44444444[27342]:int,
    0);
  if (eqz(6703757[0]:ubyte)) {
    f_hpa(5601704);
    6703757[0]:byte = 1;
  }
  f = methodInfo + 16;
  methodInfo = methodInfo[4];
  loop L_h {
    c = 0;
    d = f_iyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11718]:int);
      if (eqz(c)) goto B_c;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_h;
  }
  return ;
  label B_d:
  f_ypa(d, g);
  unreachable;
  label B_c:
  f_ypa(d, g);
  unreachable;
}

function AnimateEnemy_PlayAttackAnimationCoroutine_d_10_System_Collections_IEnumerator_get_Current(a:int_ptr, b:int, c:int) { // func86857
  var f:int;
  var d:int;
  if (eqz(6703740[0]:ubyte)) {
    f_hpa(5601960);
    6703740[0]:byte = 1;
  }
  var e:int = a + 16;
  a = a[4];
  loop L_c {
    c = 0;
    d = f_iyud(a, b, 0);
    if (d) {
      c = f_upa(d, f = d_p444444444444044P44p44444444[11782]:int);
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

function AnimateEnemy_Start(a:int, b:int) { // func86859
  var this:int_ptr;
  var g:int;
  var c:int;
  var d:int;
  if (eqz(6703732[0]:ubyte)) {
    f_hpa(5601788);
    f_hpa(5601704);
    f_hpa(5601820);
    f_hpa(5601960);
    f_hpa(5664196);
    f_hpa(5664200);
    f_hpa(5664204);
    f_hpa(5664208);
    6703732[0]:byte = 1;
  }
  var methodInfo:int_ptr = (this[4])[4]:int;
  var e:int = f_icke(d_p444444444444044P44p44444444[11782]:int);
  f_ofkc(e, this, d_p444444444444044P44p44444444[27341]:int, 0);
  if (eqz(6703741[0]:ubyte)) {
    f_hpa(5601960);
    6703741[0]:byte = 1;
  }
  var f:int = methodInfo + 16;
  methodInfo = methodInfo[4];
  loop L_e {
    c = 0;
    d = f_kyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11782]:int);
      if (eqz(c)) goto B_d;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_e;
  }
  methodInfo = (this[4])[12]:int;
  c = f_icke(d_p444444444444044P44p44444444[11739]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    this,
    d_p444444444444044P44p44444444[27343]:int,
    0);
  IdleEvent_add_OnIdle(methodInfo, c, 0);
  methodInfo = (this[4])[13]:int;
  c = f_icke(d_p444444444444044P44p44444444[11747]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    c,
    this,
    d_p444444444444044P44p44444444[27344]:int,
    0);
  MoveByEnemyAIEvent_add_OnMoveByEnemyAI(methodInfo, c, 0);
  methodInfo = (this[4])[14]:int;
  e = f_icke(d_p444444444444044P44p44444444[11718]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    e,
    this,
    d_p444444444444044P44p44444444[27342]:int,
    0);
  if (eqz(6703758[0]:ubyte)) {
    f_hpa(5601704);
    6703758[0]:byte = 1;
  }
  f = methodInfo + 16;
  methodInfo = methodInfo[4];
  loop L_h {
    c = 0;
    d = f_kyud(methodInfo, e, 0);
    if (d) {
      c = f_upa(d, g = d_p444444444444044P44p44444444[11718]:int);
      if (eqz(c)) goto B_c;
    }
    d = 
      methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
    methodInfo = c;
    if (d) continue L_h;
  }
  return ;
  label B_d:
  f_ypa(d, g);
  unreachable;
  label B_c:
  f_ypa(d, g);
  unreachable;
}

function AnimateEnemy_OnDisable(a:int_ptr, b:int, c:int) { // func86862
  if (eqz(6703733[0]:ubyte)) {
    f_hpa(5621280);
    6703733[0]:byte = 1;
  }
  if (a[6]) goto B_b;
  if ((a[4])[16]:int - 1 > 1) goto B_b;
  AnimateEnemy_PlayAttackAnimationCoroutine(a, a);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[7]:int,
    ((if ((a = d_p444444444444044P44p44444444[16612]:int)[29]) {
        a
      } else {
        f_ahje(a);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[1]:int,
    1,
    0);
  label B_b:
}

function AnimateEnemy_PlayAttackAnimationCoroutine(a:int, b:int) { // func86863
  var this:int_ptr;
  if (eqz(6703737[0]:ubyte)) {
    f_hpa(5621280);
    6703737[0]:byte = 1;
  }
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[16612]:int;
  var c:int = methodInfo[29];
  var e:int_ptr = this[4];
  var d:int = e[7];
  c = 
    {
      if (e[16] == 2) {
        multiple_UnityEngine_Animator_GetBool_1(
          d,
          ((if (c) {
              methodInfo
            } else {
              f_ahje(methodInfo);
              d_p444444444444044P44p44444444[16612]:int;
            })[23]:int)[0]:int,
          0,
          0);
        methodInfo = (d_p444444444444044P44p44444444[16612]:int)[23]:int + 4;
        d = (this[4])[7]:int;
        8;
        goto B_b;
      }
      methodInfo = (if (c) {
                      methodInfo
                    } else {
                      f_ahje(methodInfo);
                      d_p444444444444044P44p44444444[16612]:int;
                    })[23]:int;
      4;
      label B_b:
    }
  multiple_UnityEngine_Animator_GetBool_1(d, methodInfo[0], 0, 0);
  multiple_UnityEngine_Animator_GetBool_1(
    (this[4])[7]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int + c)[0]:int,
    0,
    0);
}

function AnimateEnemy_MoveByEnemyAIEvent_OnMoveByEnemyAI(a:int, b:int, c:int) { // func86864
  var this:int_ptr;
  if (eqz(6703734[0]:ubyte)) {
    f_hpa(5621280);
    6703734[0]:byte = 1;
  }
  if ((this[4])[16]:int - 1 <= 1) {
    AnimateEnemy_PlayAttackAnimationCoroutine(this, this);
    multiple_UnityEngine_Animator_GetBool_1(
      (this[4])[7]:int,
      ((if ((this = d_p444444444444044P44p44444444[16612]:int)[29]) {
          this
        } else {
          f_ahje(this);
          d_p444444444444044P44p44444444[16612]:int;
        })[23]:int)[0]:int,
      1,
      0);
  }
}

function AnimateEnemy_IdleEvent_OnIdle(a:int, b:int, c:int) { // func86865
  var this:int_ptr;
  if (eqz(6703735[0]:ubyte)) {
    f_hpa(5621280);
    6703735[0]:byte = 1;
  }
  if ((this[4])[16]:int == 2) {
    var idleEvent:int_ptr = this[6];
    if (idleEvent) { UnityEngine_MonoBehaviour_StopCoroutine(this, idleEvent, 0) }
    if (eqz(6703736[0]:ubyte)) {
      f_hpa(5625724);
      6703736[0]:byte = 1;
    }
    idleEvent = f_icke(d_p444444444444044P44p44444444[17723]:int);
    idleEvent[4] = this;
    idleEvent[2] = 0;
    this[6] =
      UnityEngine_MonoBehaviour_StartCoroutine_1(this, idleEvent, 0);
    AnimateEnemy_PlayAttackAnimationCoroutine(this, this);
    multiple_UnityEngine_Animator_SetTrigger(
      (this[4])[7]:int,
      ((if ((this = d_p444444444444044P44p44444444[16612]:int)[29]) {
          this
        } else {
          f_ahje(this);
          d_p444444444444044P44p44444444[16612]:int;
        })[23]:int)[2]:int,
      0);
  }
}

function AnimateEnemy_AttackEvent_OnAttack(a:int_ptr, b:int_ptr) { // func86866
  b = a[6];
  if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
  if (eqz(6703736[0]:ubyte)) {
    f_hpa(5625724);
    6703736[0]:byte = 1;
  }
  b = f_icke(d_p444444444444044P44p44444444[17723]:int);
  b[4] = a;
  b[2] = 0;
  a[6] = UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
}

function AnimateEnemy_PlayAttackAnimation(a:int, b:int):int { // func86867
  var this:int;
  if (eqz(6703736[0]:ubyte)) {
    f_hpa(5625724);
    6703736[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[17723]:int);
  methodInfo[4] = this;
  methodInfo[2] = 0;
  return methodInfo;
}

function AnimateEnemy_InitializeStateAnimationParameters(a:int_ptr, b:int, c:int_ptr, d:int) { // func86868
  AnimateEnemy_AnimateEnemy_OnAnimate(a, a);
  AnimateEnemy_InitializeAnimationParameters(a, c[2], a);
  a[5] = c[2];
}

function AnimateEnemy_AnimateEnemy_OnAnimate(a:int_ptr, b:int_ptr) { // func86869
  if (eqz(6703738[0]:ubyte)) {
    f_hpa(5621280);
    6703738[0]:byte = 1;
  }
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[7]:int,
    ((if ((b = d_p444444444444044P44p44444444[16612]:int)[29]) {
        b
      } else {
        f_ahje(b);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[6]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[7]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[4]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[7]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[9]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (a[4])[7]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[10]:int,
    0,
    0);
}

function AnimateEnemy_InitializeAnimationParameters(a:int_ptr, b:int_ptr, c:int) { // func86870
  if (eqz(6703739[0]:ubyte)) {
    f_hpa(5621280);
    6703739[0]:byte = 1;
  }
  br_table[B_g, B_b, B_b, B_f, B_e, B_h, ..B_b](b)
  label B_h:
  a = (a[4])[7]:int;
  c = 24;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29])) goto B_d;
  goto B_c;
  label B_g:
  a = (a[4])[7]:int;
  c = 16;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29])) goto B_d;
  goto B_c;
  label B_f:
  a = (a[4])[7]:int;
  c = 36;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29])) goto B_d;
  goto B_c;
  label B_e:
  a = (a[4])[7]:int;
  c = 40;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (b[29]) goto B_c;
  label B_d:
  f_ahje(b);
  b = d_p444444444444044P44p44444444[16612]:int;
  label B_c:
  multiple_UnityEngine_Animator_GetBool_1(a, (b[23] + c)[0]:int, 1, 0);
  label B_b:
}

function AnimateEnemy_PlayAttackAnimationCoroutine_d_10_System_IDisposable_Dispose(a:int, b:int):int { // func86871
  var this:int;
  var c:int;
  var methodInfo:int = g_a - 80;
  g_a = methodInfo;
  br_table[B_c, B_b, B_b, ..B_a](this[2]:int)
  label B_c:
  this[2]:long@4 = 1L;
  c = 1;
  goto B_a;
  label B_b:
  var d:int_ptr = this[4]:int;
  this[2]:int = -1;
  UnityEngine_Animator_GetAnimatorStateInfo(methodInfo, (d[4])[7]:int, 0, 0);
  methodInfo[18]:int = methodInfo[8]:int;
  (methodInfo - -64)[0]:long = methodInfo[3]:long;
  methodInfo[7]:long = methodInfo[2]:long;
  methodInfo[6]:long = methodInfo[1]:long;
  methodInfo[5]:long = methodInfo[0]:long;
  if (eqz((methodInfo + 40)[3]:float < 1.0f)) {
    d[6] = 0;
    goto B_a;
  }
  this[2]:long@4 = 2L;
  c = 1;
  label B_a:
  g_a = methodInfo + 80;
  return c;
}

function AnimateEnemy_PlayAttackAnimationCoroutine_d_10_System_Collections_Generic_IEnumerator_System_Object_(a:int, b:int) { // func86872
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5696020));
  unreachable;
}

