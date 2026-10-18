// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: ItemConsumer  (Assembly-CSharp)

function ItemConsumer_UsePotion(a:int, b:int_ptr) { // func86153
  if (eqz(6703155[0]:ubyte)) {
    f_hpa(5614872);
    6703155[0]:byte = 1;
  }
  b = d_p444444444444044P44p44444444[15010]:int;
  if (eqz(b[29])) { f_ahje(b) }
}

function ItemConsumer_Awake(a:int, b:int) { // func86396
  var this:int;
  if (eqz(6703316[0]:ubyte)) {
    f_hpa(5601848);
    f_hpa(5679044);
    6703316[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[11754]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[31053]:int,
    0);
  StaticEventHandler_CallItemUIClickChangedEvent(methodInfo, this);
}

function ItemConsumer_OnEnable(a:int, b:int) { // func86398
  var this:int;
  if (eqz(6703317[0]:ubyte)) {
    f_hpa(5601848);
    f_hpa(5679044);
    6703317[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[11754]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[31053]:int,
    0);
  StaticEventHandler_add_OnHotBarScrollChanged(methodInfo, this);
}

function ItemConsumer_OnDisable(a:int, b:int) { // func86400
  var this:int_ptr;
  this[15] = (this[5])[13]:int;
}

function ItemConsumer_Start(a:int_ptr, b:int_ptr, c:int) { // func86401
  a[13] = b[2]
}

function ItemConsumer_StaticEventHandler_OnHotBarScrollChanged(a:int_ptr, b:int_ptr) { // func86402
  var f:int_ptr;
  var e:int_ptr;
  var d:int_ptr;
  var c:int = g_a - 32;
  g_a = c;
  if (eqz(6703318[0]:ubyte)) {
    f_hpa(5640824);
    f_hpa(5640828);
    f_hpa(5640832);
    f_hpa(5649440);
    f_hpa(5649444);
    f_hpa(5649448);
    f_hpa(5649452);
    f_hpa(5619244);
    6703318[0]:byte = 1;
  }
  if (eqz(a[13])) {
    if (InventoryDescription_ctor(a[4], c)[3]:int <= 0) {
      b = a[13];
      goto B_d;
    }
    a[13] =
      (b = f_dqi(InventoryDescription_ctor(a[4], c),
                 0,
                 d_p444444444444044P44p44444444[23655]:int));
    label B_d:
    if (eqz(b)) goto B_b;
  }
  UnityEngine_ComputeBuffer_Release(
    c,
    (a[4])[4]:int,
    d_p444444444444044P44p44444444[23652]:int);
  c[3]:long = c[1]:long;
  c[2]:long = c[0]:long;
  c[0]:int = 0;
  c[1]:int = c + 16;
  b = 
    {
      loop L_m {
        6151988[0]:int = 0;
        d = 
          env_invoke_iii(1155, c + 16, d_p444444444444044P44p44444444[21499]:int);
        b = 6151988[0]:int;
        6151988[0]:int = 0;
        if (b == 1) goto B_g;
        if (eqz(d)) goto B_h;
        f = c[7]:int;
        b = f[2];
        d = (a[13])[2]:int;
        e = d_p444444444444044P44p44444444[16103]:int;
        if (eqz(e[29])) {
          6151988[0]:int = 0;
          env_invoke_vi(252, e);
          e = 6151988[0]:int;
          6151988[0]:int = 0;
          if (e == 1) goto B_l;
        }
        6151988[0]:int = 0;
        d = env_invoke_iiii(2135, b, d, 0);
        b = 6151988[0]:int;
        6151988[0]:int = 0;
        if (b == 1) goto B_k;
        if (eqz(d)) continue L_m;
      }
      f[3] = f[3] - 1;
      b = (f[2])[3]:int;
      6151988[0]:int = 0;
      env_invoke_viii(13918, a, b, c);
      b = 6151988[0]:int;
      6151988[0]:int = 0;
      if (b == 1) goto B_j;
      if (eqz(6703552[0]:ubyte)) {
        6151988[0]:int = 0;
        env_invoke_vi(250, 5619360);
        b = 6151988[0]:int;
        6151988[0]:int = 0;
        if (b == 1) goto B_i;
        6151988[0]:int = 0;
        env_invoke_vi(250, 5621908);
        b = 6151988[0]:int;
        6151988[0]:int = 0;
        if (b == 1) goto B_i;
        6703552[0]:byte = 1;
      }
      b = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[8]:int;
      if (b) {
        6151988[0]:int = 0;
        d = env_invoke_ii(268, d_p444444444444044P44p44444444[16132]:int);
        e = 6151988[0]:int;
        6151988[0]:int = 0;
        if (e == 1) goto B_i;
        6151988[0]:int = 0;
        env_invoke_vii(13919, d, 0);
        e = 6151988[0]:int;
        6151988[0]:int = 0;
        if (e == 1) goto B_i;
        d[2] = f;
        e = b[5];
        var g:int = b[8];
        b = b[3];
        6151988[0]:int = 0;
        env_invoke_viii(b, g, d, e);
        b = 6151988[0]:int;
        6151988[0]:int = 0;
        if (b == 1) goto B_i;
      }
      if (f[3]) goto B_h;
      b = (a[4])[4]:int;
      6151988[0]:int = 0;
      env_invoke_iiii(2150, b, f, d_p444444444444044P44p44444444[23653]:int);
      b = 6151988[0]:int;
      6151988[0]:int = 0;
      if (b != 1) goto B_h;
      env_cxa_find_matching_catch_3(4889068);
      goto B_f;
      label B_l:
      env_cxa_find_matching_catch_3(4889068);
      goto B_f;
      label B_k:
      env_cxa_find_matching_catch_3(4889068);
      goto B_f;
      label B_j:
      env_cxa_find_matching_catch_3(4889068);
      goto B_f;
      label B_i:
      env_cxa_find_matching_catch_3(4889068);
      goto B_f;
      label B_h:
      d_p444444444444044P44p44444444[21498]:int;
      goto B_b;
      label B_g:
      env_cxa_find_matching_catch_3(4889068);
      label B_f:
    }
  if (env_getTempRet0() == env_llvm_eh_typeid_for(4889068)) {
    b = env_cxa_begin_catch(b)[0]:int;
    6151988[0]:int = 0;
    c[0]:int = b;
    env_invoke_v(58);
    d = 6151988[0]:int;
    6151988[0]:int = 0;
    if (d != 1) {
      d_p444444444444044P44p44444444[21498]:int;
      if (eqz(b)) goto B_b;
      System_Net_CommandStream_ReceiveCommandResponseCallback(b);
      unreachable;
    }
    b = env_cxa_find_matching_catch();
    env_getTempRet0();
  }
  6151988[0]:int = 0;
  env_invoke_ii(13920, c);
  c = 6151988[0]:int;
  6151988[0]:int = 0;
  if (c != 1) {
    env_resumeException(b);
    unreachable;
  }
  env_cxa_find_matching_catch_3(0);
  env_getTempRet0();
  f_sx();
  unreachable;
  label B_b:
  g_a = c + 32;
}

function ItemConsumer_UseItemFromHotBar(a:int, b:int) { // func86405
  var this:int_ptr;
  var methodInfo:int_ptr = this[8];
  if (methodInfo) { UnityEngine_MonoBehaviour_StopCoroutine(this, methodInfo, 0) }
  (this[5])[13]:int = this[15];
  if (eqz(6703320[0]:ubyte)) {
    f_hpa(5628352);
    6703320[0]:byte = 1;
  }
  methodInfo = f_icke(d_p444444444444044P44p44444444[18380]:int);
  methodInfo[4] = this;
  methodInfo[2] = 0;
  this[8] =
    UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
}

function ItemConsumer_UseAttackPotionCoroutine(a:int, b:int) { // func86406
  var this:int_ptr;
  Health_TakeDamage(this[6], this[10], 0);
}

function ItemConsumer_UseBigHealthPotion(a:int, b:int) { // func86407
  var this:int_ptr;
  Health_TakeDamage(this[6], this[11], 0);
}

function ItemConsumer_UseSmallHealthPotion(a:int, b:int) { // func86408
  var this:int_ptr;
  PoiseEventArgs_ctor(this[7], f32_convert_i32_s(this[12]), 0);
}

function ItemConsumer_UseAttackPotion(a:int, b:int):int { // func86409
  var this:int;
  if (eqz(6703320[0]:ubyte)) {
    f_hpa(5628352);
    6703320[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[18380]:int);
  methodInfo[4] = this;
  methodInfo[2] = 0;
  return methodInfo;
}

function ItemConsumer_UseRagePotion(a:int, b:int) { // func86410
  var this:long_ptr@4;
  this[11] = 8589934612L;
  this[9] = 215815815168L;
  multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
}

function ItemConsumer_UseAttackPotionCoroutine_d_20_System_IDisposable_Dispose(a:int, b:int):int { // func86411
  var this:int_ptr;
  var c:int_ptr;
  if (eqz(6703321[0]:ubyte)) {
    f_hpa(5624116);
    6703321[0]:byte = 1;
  }
  var methodInfo:int = this[4];
  br_table[B_d, B_c, ..B_b](this[2])
  label B_d:
  this[2] = -1;
  methodInfo = 
    {
      var d:float = 
        methodInfo[9]:float * f32_convert_i32_s((c = methodInfo[5]:int)[13]);
      if (abs(d) < 2147483648.0f) {
        i32_trunc_f32_s(d);
        goto B_e;
      }
      -2147483648;
      label B_e:
    }
  c[13] = methodInfo;
  methodInfo = f_icke(d_p444444444444044P44p44444444[17321]:int);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
    methodInfo,
    20.0f,
    0);
  this[2] = 1;
  this[3] = methodInfo;
  return 1;
  label B_c:
  this[2] = -1;
  (methodInfo[5]:int)[13]:int = methodInfo[15]:int;
  label B_b:
  return 0;
}

function ItemConsumer_UseAttackPotionCoroutine_d_20_System_Collections_Generic_IEnumerator_System_Object_get_(a:int, b:int) { // func86412
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5698716));
  unreachable;
}

function ItemConsumer_UseAttackPotionCoroutine_d_20_System_Collections_IEnumerator_get_Current(a:int, b:int) { // func86413
  var this:int_ptr;
  if (eqz(6703322[0]:ubyte)) {
    f_hpa(5668464);
    6703322[0]:byte = 1;
  }
  this[5] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28408]:int);
}

