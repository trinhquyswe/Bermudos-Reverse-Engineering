// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: TransitionPoint  (Assembly-CSharp)

function TransitionPoint_OnTriggerEnter2D(a:int, b:int, c:int):int { // func86501
  var collision:int;
  var this:int;
  if (eqz(6703381[0]:ubyte)) {
    f_hpa(5631208);
    6703381[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[19094]:int);
  methodInfo[5] = collision;
  methodInfo[4] = this;
  methodInfo[2] = 0;
  return methodInfo;
}

function TransitionPoint_MapTransitionCoroutine(a:int_ptr, b:ubyte_ptr, c:int, d:int) { // func86502
  if (eqz(6703382[0]:ubyte)) {
    f_hpa(5620984);
    f_hpa(5660024);
    f_hpa(5690092);
    f_hpa(5609548);
    f_hpa(5726944);
    6703382[0]:byte = 1;
  }
  if (multiple_System_String_Equals(
        (a[4])[4]:int,
        d_p444444444444044P44p44444444[43028]:int,
        0)) {
    b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
    b = 
      ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
    GameManager_TransitionToGame(
      ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int,
      4,
      0);
  }
  b = f_icke(d_p444444444444044P44p44444444[13679]:int);
  f_yibd(b, a, d_p444444444444044P44p44444444[33815]:int, 0);
  a = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(a[29])) { f_ahje(a) }
  UnityEngine_SceneManagement_SceneManager_add_sceneLoaded(b, 0);
}

function TransitionPoint_SceneManager_sceneLoaded(a:int_ptr, b:int) { // func86503
  if (eqz(6703383[0]:ubyte)) {
    f_hpa(5624116);
    6703383[0]:byte = 1;
  }
  b = f_icke(d_p444444444444044P44p44444444[17321]:int);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
    b,
    0.1f,
    0);
  a[6] = b;
  multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
}

function TransitionPoint_MapTransitionCoroutine_d_4_System_IDisposable_Dispose(a:int, b:int):int { // func86504
  var this:int_ptr;
  var d:int = g_a - 48;
  g_a = d;
  var methodInfo:int_ptr = 0;
  if (eqz(6703384[0]:ubyte)) {
    f_hpa(5668592);
    f_hpa(5620984);
    f_hpa(5690092);
    f_hpa(5609548);
    6703384[0]:byte = 1;
  }
  var c:int_ptr = this[4];
  br_table[B_d, B_c, ..B_b](this[2])
  label B_d:
  this[2] = -1;
  if (eqz(6703531[0]:ubyte)) {
    f_hpa(5621908);
    6703531[0]:byte = 1;
  }
  methodInfo = 
    ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[1]:int;
  if (methodInfo) { call_indirect(methodInfo[8], methodInfo[5], methodInfo[3]) }
  c = c[6];
  methodInfo = 1;
  this[2] = 1;
  this[3] = c;
  goto B_b;
  label B_c:
  this[2] = -1;
  methodInfo = (c[4])[3]:int;
  var e:int_ptr = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(e[29])) { f_ahje(e) }
  d[10]:int =
    UnityEngine_SceneManagement_SceneManager_GetActiveScene(methodInfo, 0);
  if (UnityEngine_SceneManagement_Scene_get_name(d + 40, 0)) {
    methodInfo = (c[4])[3]:int;
    e = d_p444444444444044P44p44444444[16538]:int;
    if (eqz(e[29])) { f_ahje(e) }
    UnityEngine_SceneManagement_SceneManager_LoadScene_4(methodInfo, 0);
  }
  e = (c[4])[4]:int;
  methodInfo = 0;
  var f:int_ptr = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(f[29])) { f_ahje(f) }
  UnityEngine_SceneManagement_SceneManager_remove_sceneUnloaded(e, 1, 0);
  e = f_icke(d_p444444444444044P44p44444444[13679]:int);
  f_yibd(e, c, d_p444444444444044P44p44444444[33815]:int, 0);
  UnityEngine_SceneManagement_SceneManager_LoadFirstScene_Internal(e, 0);
  this = System_Linq_Enumerable_Count(
           UnityEngine_GameObject_get_activeInHierarchy(
             this[5],
             d_p444444444444044P44p44444444[28440]:int),
           0);
  var g:long = (c[4])[5]:long@4;
  c = d + 32;
  c[0] = 0;
  d[4]:int = c[0];
  d[3]:long = g;
  d[1]:long = g;
  multiple_UnityEngine_Transform_ctor(this, d + 8, 0);
  label B_b:
  g_a = d + 48;
  return methodInfo;
}

function TransitionPoint_MapTransitionCoroutine_d_4_System_Collections_Generic_IEnumerator_System_Object_get_(a:int, b:int) { // func86505
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5701596));
  unreachable;
}

