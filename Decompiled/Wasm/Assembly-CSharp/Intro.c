// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Intro  (Assembly-CSharp)

function Intro_Awake(a:int, b:int) { // func86442
  var this:int_ptr;
  if (eqz(6703341[0]:ubyte)) {
    f_hpa(5613524);
    f_hpa(5678932);
    f_hpa(5678936);
    f_hpa(5609520);
    f_hpa(5623544);
    f_hpa(5662744);
    6703341[0]:byte = 1;
  }
  var methodInfo:int_ptr = (this[10])[13]:int;
  var c:int = f_icke(d_p444444444444044P44p44444444[13672]:int);
  f_oibd(c, this, d_p444444444444044P44p44444444[31025]:int, 0);
  multiple_3_UnityEngine_Events_UnityEvent_1_Invoke(
    methodInfo,
    c,
    d_p444444444444044P44p44444444[26978]:int);
  methodInfo = (this[8])[45]:int;
  c = f_icke(d_p444444444444044P44p44444444[17178]:int);
  UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
    c,
    this,
    d_p444444444444044P44p44444444[31026]:int,
    0);
  UnityEngine_Events_UnityEvent_AddListener(methodInfo, c, 0);
  this = System_Linq_Enumerable_Count(this, 0);
  methodInfo = d_p444444444444044P44p44444444[14673]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
  DG_Tweening_DOTween_KillAll_1(this, 0, 0);
}

function Intro_OnDestroy(a:int, b:int) { // func86443
  var this:int_ptr;
  var methodInfo:{ a:long, b:int, c:long, d:int } = g_a - 32;
  g_a = methodInfo;
  if (eqz(6703342[0]:ubyte)) {
    f_hpa(5678928);
    f_hpa(5623156);
    f_hpa(5690180);
    f_hpa(5690240);
    6703342[0]:byte = 1;
  }
  f_sbnb(f_canb(this[6], 0), 1, 0);
  var c:int = 
    UnityEngine_GameObject_AddComponent(f_canb(this[6], 0), 0);
  methodInfo.d = 1090519040;
  methodInfo.b = 1090519040;
  methodInfo.c = 4683743613555834880L;
  methodInfo.a = 4683743613555834880L;
  c = 
    DG_Tweening_TweenSettingsExtensions_SetEase(
      DG_Tweening_ShortcutExtensions_DOLocalRotateQuaternion(c,
                                                             methodInfo,
                                                             2.5f,
                                                             0),
      1,
      d_p444444444444044P44p44444444[33852]:int);
  var d:int = f_icke(d_p444444444444044P44p44444444[17081]:int);
  DG_Tweening_Color2_op_Multiply(
    d,
    this,
    d_p444444444444044P44p44444444[31024]:int,
    0);
  DG_Tweening_TweenSettingsExtensions_From_6(
    c,
    d,
    d_p444444444444044P44p44444444[33837]:int);
  g_a = methodInfo + 32;
}

function Intro_Start(a:int_ptr, b:int, c:int) { // func86444
  f_sbnb(f_canb(a[8], 0), 1, 0)
}

function Intro_OnFinishWriter(a:int_ptr, b:int_ptr) { // func86445
  var c:{ a:long, b:long, c:long, d:long } = g_a - 32;
  g_a = c;
  if (eqz(6703343[0]:ubyte)) {
    f_hpa(5678940);
    f_hpa(5620984);
    f_hpa(5609548);
    f_hpa(5725104);
    6703343[0]:byte = 1;
  }
  b = a[5];
  c.d = 1065353216L;
  c.c = 4575657222473777152L;
  var d:int_ptr = b[0];
  var e:int = d[94];
  d = d[95];
  c.b = 1065353216L;
  c.a = 4575657222473777152L;
  call_indirect(b, c, d, e);
  f_sbnb(f_canb(a[8], 0), 0, 0);
  b = a[9];
  if (b < (d = a[4])[3]) {
    f_kkx(a[5], (d[b + 4]:int)[3]:int, 0);
    b = a[5];
    if (b) { DG_Tweening_DOTweenModuleUI_DOColor_1(b, 1.0f, 2.0f, 0) }
    b = a[7];
    call_indirect(b, ((a[4])[a[9] + 4]:int)[4]:int, (b = b[0])[181], b[180]);
    goto B_b;
  }
  b = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(b[29])) { f_ahje(b) }
  UnityEngine_SceneManagement_SceneManager_LoadScene_1(
    d_p444444444444044P44p44444444[42568]:int,
    0);
  b = f_icke(d_p444444444444044P44p44444444[13679]:int);
  f_yibd(b, a, d_p444444444444044P44p44444444[31027]:int, 0);
  UnityEngine_SceneManagement_SceneManager_LoadFirstScene_Internal(b, 0);
  label B_b:
  a[9] = a[9] + 1;
  g_a = c + 32;
}

function Intro_OnNextBtnClick(a:int_ptr, b:ubyte_ptr, c:int_ptr, d:int) { // func86446
  c = g_a - 16;
  g_a = c;
  c[2] = b;
  if (eqz(6703344[0]:ubyte)) {
    f_hpa(5678940);
    f_hpa(5620984);
    f_hpa(5660024);
    f_hpa(5609548);
    f_hpa(5725104);
    6703344[0]:byte = 1;
  }
  if (
    eqz(multiple_System_String_Equals(
          UnityEngine_SceneManagement_Scene_IsValid(c + 8, 0),
          d_p444444444444044P44p44444444[42568]:int,
          0))) goto B_b;
  if (
    eqz(UnityEngine_SceneManagement_Scene_get_name(c + 8, 0))) goto B_b;
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  GameManager_TransitionToGame(
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int,
    0,
    0);
  b = f_icke(d_p444444444444044P44p44444444[13679]:int);
  f_yibd(b, a, d_p444444444444044P44p44444444[31027]:int, 0);
  a = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(a[29])) { f_ahje(a) }
  UnityEngine_SceneManagement_SceneManager_add_sceneLoaded(b, 0);
  label B_b:
  g_a = c + 16;
}

function Intro_OnSceneLoaded(a:int, b:int_ptr):int { // func86447
  if (eqz(6703345[0]:ubyte)) {
    f_hpa(5628340);
    6703345[0]:byte = 1;
  }
  b = f_icke(d_p444444444444044P44p44444444[18377]:int);
  b[4] = a;
  b[2] = 0;
  return b;
}

function Intro_WaitUntilIntroEnable(a:int, b:int) { // func86448
  var this:int_ptr;
  if (eqz(6703346[0]:ubyte)) {
    f_hpa(5610392);
    6703346[0]:byte = 1;
  }
  this[4] =
    Mono_Security_ASN1Convert_ToOid(
      d_p444444444444044P44p44444444[13890]:int,
      4);
  multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
}

function Intro_ctor(a:int, b:int) { // func86449
  var this:int_ptr;
  if (eqz(6703347[0]:ubyte)) {
    f_hpa(5678932);
    f_hpa(5678936);
    f_hpa(5609520);
    f_hpa(5623544);
    f_hpa(5662736);
    6703347[0]:byte = 1;
  }
  f_sbnb(f_canb(this[6], 0), 0, 0);
  var methodInfo:int_ptr = (this[10])[13]:int;
  var c:int = f_icke(d_p444444444444044P44p44444444[13672]:int);
  f_oibd(c, this, d_p444444444444044P44p44444444[31025]:int, 0);
  UnityEngine_Events_UnityEvent_1_ctor(
    methodInfo,
    c,
    d_p444444444444044P44p44444444[26976]:int);
  if (eqz(6703345[0]:ubyte)) {
    f_hpa(5628340);
    6703345[0]:byte = 1;
  }
  methodInfo = f_icke(d_p444444444444044P44p44444444[18377]:int);
  methodInfo[4] = this;
  methodInfo[2] = 0;
  UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
  methodInfo = (this[8])[45]:int;
  c = f_icke(d_p444444444444044P44p44444444[17178]:int);
  UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
    c,
    this,
    d_p444444444444044P44p44444444[31026]:int,
    0);
  UnityEngine_Events_UnityEvent_ctor(methodInfo, c, 0);
  UnityEngine_ExcludeFromPresetAttribute_ctor(this[5], 1, 0);
}

function Intro_WaitUntilIntroEnable_d_13_System_IDisposable_Dispose(a:int, b:int):int { // func86450
  var this:int_ptr;
  var c:int_ptr;
  var e:int;
  var methodInfo:{ a:long, b:long, c:long, d:long } = g_a - 32;
  g_a = methodInfo;
  if (eqz(6703348[0]:ubyte)) {
    f_hpa(5624116);
    6703348[0]:byte = 1;
  }
  br_table[B_d, B_c, ..B_b](this[2])
  label B_d:
  this[2] = -1;
  c = f_icke(d_p444444444444044P44p44444444[17321]:int);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
    c,
    2.0f,
    0);
  e = 1;
  this[2] = 1;
  this[3] = c;
  goto B_b;
  label B_c:
  c = this[4];
  this[2] = -1;
  this = c[5];
  methodInfo.d = 4575657222473777152L;
  methodInfo.c = 4575657222473777152L;
  var d:int_ptr = this[0];
  var f:int = d[94];
  d = d[95];
  methodInfo.b = 4575657222473777152L;
  methodInfo.a = 4575657222473777152L;
  call_indirect(this, methodInfo, d, f);
  Intro_OnFinishWriter(c, this);
  label B_b:
  g_a = methodInfo + 32;
  return e;
}

function Intro_WaitUntilIntroEnable_d_13_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86451
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5698700));
  unreachable;
}

