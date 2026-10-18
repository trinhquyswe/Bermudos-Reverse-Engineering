// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: MenuInGame  (Assembly-CSharp)

function MenuInGame_Awake(a:int, b:int) { // func86469
  var this:int_ptr;
  var methodInfo:int_ptr = g_a - 16;
  g_a = methodInfo;
  if (eqz(6703364[0]:ubyte)) {
    f_hpa(5601936);
    f_hpa(5613524);
    f_hpa(5680952);
    6703364[0]:byte = 1;
  }
  methodInfo[2] = this[10];
  UnityEngine_InputSystem_InputAction_ToString(
    InputSystem_Actions_UIActions_get_UseItem(methodInfo + 8, 0),
    0);
  methodInfo[2] = this[10];
  var c:int_ptr = 
    InputSystem_Actions_UIActions_get_UseItem(methodInfo + 8, 0);
  var d:int = f_icke(d_p444444444444044P44p44444444[11776]:int);
  f_wyjc(d, this, d_p444444444444044P44p44444444[31530]:int, 0);
  UnityEngine_InputSystem_InputAction_add_performed(c, d, 0);
  this = System_Linq_Enumerable_Count(this, 0);
  c = d_p444444444444044P44p44444444[14673]:int;
  if (eqz(c[29])) { f_ahje(c) }
  DG_Tweening_DOTween_KillAll_1(this, 0, 0);
  g_a = methodInfo + 16;
}

function MenuInGame_OnDestroy(a:int, b:int) { // func86470
  var this:int_ptr;
  var methodInfo:int = g_a + -64;
  g_a = methodInfo;
  if (eqz(6703365[0]:ubyte)) {
    f_hpa(5668620);
    f_hpa(5690236);
    f_hpa(5690240);
    f_hpa(5690328);
    f_hpa(5690336);
    f_hpa(5709024);
    f_hpa(5709028);
    6703365[0]:byte = 1;
  }
  var d:int = UnityEngine_GameObject_set_layer(f_canb(this, 0), 0);
  var c:int = f_canb(this, 0);
  if (d) {
    f_sbnb(c, 0, 0);
    goto B_b;
  }
  f_sbnb(c, 1, 0);
  TMPEffects_Components_TMPEffectComponent_get_TextComponent(
    this[8],
    d_p444444444444044P44p44444444[38548]:int,
    0);
  TMPEffects_Components_TMPEffectComponent_get_TextComponent(
    this[9],
    d_p444444444444044P44p44444444[38549]:int,
    0);
  d = System_Linq_Enumerable_Count(this, 0);
  if (eqz(6703145[0]:ubyte)) {
    f_hpa(5623880);
    6703145[0]:byte = 1;
  }
  c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
  var e:long = c[0]:long@4;
  methodInfo[6]:int = (c = c[2]:int);
  methodInfo[14]:int = c;
  methodInfo[6]:long = e;
  methodInfo[2]:long = e;
  multiple_UnityEngine_Transform_get_localScale(d, methodInfo + 16, 0);
  DG_Tweening_TweenSettingsExtensions_SetTarget(
    DG_Tweening_TweenSettingsExtensions_SetEase(
      DG_Tweening_ShortcutExtensions_DOScale(
        System_Linq_Enumerable_Count(this, 0),
        1.0f,
        0.5f,
        0),
      this[11],
      d_p444444444444044P44p44444444[33852]:int),
    1,
    d_p444444444444044P44p44444444[33876]:int);
  d = UnityEngine_GameObject_get_activeInHierarchy(
        this,
        d_p444444444444044P44p44444444[28447]:int);
  c = UnityEngine_RefreshRate_ToString(0);
  methodInfo[11]:int = 0;
  methodInfo[10]:float = f32_convert_i32_s(0 - c);
  methodInfo[1]:long = methodInfo[5]:long;
  UnityEngine_RectTransform_get_anchoredPosition_Injected(
    d,
    methodInfo + 8,
    0);
  if (eqz(6703146[0]:ubyte)) {
    f_hpa(5623844);
    6703146[0]:byte = 1;
  }
  methodInfo[4]:long =
    (e = ((d_p444444444444044P44p44444444[17253]:int)[23]:int)[0]:long@4);
  methodInfo[0]:long = e;
  DG_Tweening_TweenSettingsExtensions_SetTarget(
    DG_Tweening_TweenSettingsExtensions_SetEase(
      DG_Tweening_DOTweenModuleUI_DOScale(d, methodInfo, 0.5f, 0, 0),
      this[11],
      d_p444444444444044P44p44444444[33851]:int),
    1,
    d_p444444444444044P44p44444444[33874]:int);
  label B_b:
  g_a = methodInfo - -64;
}

function MenuInGame_OpenMenu(a:int, b:int) { // func86471
  var this:int_ptr;
  if (eqz(6703366[0]:ubyte)) {
    f_hpa(5680956);
    f_hpa(5680960);
    f_hpa(5623544);
    6703366[0]:byte = 1;
  }
  var methodInfo:int = (this[4])[45]:int;
  var c:int = f_icke(d_p444444444444044P44p44444444[17178]:int);
  UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
    c,
    this,
    d_p444444444444044P44p44444444[31531]:int,
    0);
  UnityEngine_Events_UnityEvent_ctor(methodInfo, c, 0);
  methodInfo = (this[5])[45]:int;
  c = f_icke(d_p444444444444044P44p44444444[17178]:int);
  UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
    c,
    this,
    d_p444444444444044P44p44444444[31532]:int,
    0);
  UnityEngine_Events_UnityEvent_ctor(methodInfo, c, 0);
  f_sbnb(f_canb(this, 0), 0, 0);
}

function MenuInGame_Start(a:int, b:int) { // func86472
  var this:int_ptr;
  var c:{ a:long, b:long, c:long, d:long } = g_a - 32;
  g_a = c;
  if (eqz(6703367[0]:ubyte)) {
    f_hpa(5668520);
    6703367[0]:byte = 1;
  }
  if (eqz(6703561[0]:ubyte)) {
    f_hpa(5621908);
    6703561[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[11]:int;
  if (methodInfo) { call_indirect(methodInfo[8], methodInfo[5], methodInfo[3]) }
  methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                 this,
                 d_p444444444444044P44p44444444[28422]:int);
  c.d = 0L;
  c.c = 0L;
  var d:int_ptr = methodInfo[0];
  var e:int = d[95];
  d = d[94];
  c.b = 0L;
  c.a = 0L;
  call_indirect(methodInfo, c, e, d);
  f_sbnb(f_canb(this[4], 0), 0, 0);
  f_sbnb(f_canb(this[5], 0), 0, 0);
  if (eqz(6703531[0]:ubyte)) {
    f_hpa(5621908);
    6703531[0]:byte = 1;
  }
  methodInfo = 
    ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[1]:int;
  if (methodInfo) { call_indirect(methodInfo[8], methodInfo[5], methodInfo[3]) }
  if (eqz(6703368[0]:ubyte)) {
    f_hpa(5628732);
    6703368[0]:byte = 1;
  }
  methodInfo = f_icke(d_p444444444444044P44p44444444[18475]:int);
  methodInfo[2] = 0;
  UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
  g_a = c + 32;
}

function MenuInGame_Exit(a:int, b:int):int { // func86475
  if (eqz(6703368[0]:ubyte)) {
    f_hpa(5628732);
    6703368[0]:byte = 1;
  }
  var this:int_ptr = f_icke(d_p444444444444044P44p44444444[18475]:int);
  this[2] = 0;
  return this;
}

function MenuInGame_WaitMapTransitionEvent(a:int, b:int) { // func86476
  var this:int;
  UnityEngine_Time_get_timeScale(1.0f, 0);
  f_sbnb(f_canb(this, 0), 0, 0);
}

function MenuInGame_WaitMapTransitionEvent_d_13_System_IDisposable_Dispose(a:int, b:int):int { // func86478
  var this:int_ptr;
  if (eqz(6703369[0]:ubyte)) {
    f_hpa(5620984);
    f_hpa(5624116);
    f_hpa(5725100);
    6703369[0]:byte = 1;
  }
  br_table[B_d, B_c, ..B_b](this[2])
  label B_d:
  this[2] = -1;
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[17321]:int);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
    methodInfo,
    0.3f,
    0);
  this[2] = 1;
  this[3] = methodInfo;
  return 1;
  label B_c:
  this[2] = -1;
  this = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(this[29])) { f_ahje(this) }
  UnityEngine_SceneManagement_SceneManager_LoadScene_1(
    d_p444444444444044P44p44444444[42567]:int,
    0);
  label B_b:
  return 0;
}

function MenuInGame_WaitMapTransitionEvent_d_13_System_Collections_Generic_IEnumerator_System_Object_get_Curr(a:int, b:int) { // func86479
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5698968));
  unreachable;
}

