// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: SettingManager  (Assembly-CSharp)

function SettingManager_Awake(a:int, b:int) { // func86461
  var this:int;
  if (eqz(6703357[0]:ubyte)) {
    f_hpa(5686328);
    f_hpa(5686332);
    f_hpa(5686324);
    f_hpa(5623544);
    6703357[0]:byte = 1;
  }
  var methodInfo:int = (this[4]:int)[45]:int;
  var c:int = f_icke(d_p444444444444044P44p44444444[17178]:int);
  UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
    c,
    this,
    d_p444444444444044P44p44444444[32875]:int,
    0);
  UnityEngine_Events_UnityEvent_ctor(methodInfo, c, 0);
  methodInfo = (this[5]:int)[45]:int;
  c = f_icke(d_p444444444444044P44p44444444[17178]:int);
  UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
    c,
    this,
    d_p444444444444044P44p44444444[32874]:int,
    0);
  UnityEngine_Events_UnityEvent_ctor(methodInfo, c, 0);
  methodInfo = (this[6]:int)[45]:int;
  c = f_icke(d_p444444444444044P44p44444444[17178]:int);
  UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
    c,
    this,
    d_p444444444444044P44p44444444[32873]:int,
    0);
  UnityEngine_Events_UnityEvent_ctor(methodInfo, c, 0);
  this[11]:long@4 = 4692750812777021440L;
}

function SettingManager_Start(a:int, b:int) { // func86462
  var this:int;
  if (eqz(6703358[0]:ubyte)) {
    f_hpa(5613524);
    6703358[0]:byte = 1;
  }
  this = System_Linq_Enumerable_Count(this, 0);
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[14673]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
  DG_Tweening_DOTween_KillAll_1(this, 0, 0);
}

function SettingManager_OnDestroy(a:int, b:int) { // func86463
  var this:int_ptr;
  if (eqz(6703359[0]:ubyte)) {
    f_hpa(5660012);
    6703359[0]:byte = 1;
  }
  f_sbnb(f_canb(this[10], 0), 0, 0);
  f_sbnb(f_canb(this[9], 0), 1, 0);
  var methodInfo:ubyte_ptr = 
    (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  methodInfo = ((if (methodInfo[189] & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  SoundEffectManager_Start(
    ((if (methodInfo[189] & 1) {
        methodInfo
      } else {
        System_Threading_Monitor_Enter_1(methodInfo)
      })[23]:int)[0]:int,
    UnityEngine_MonoBehaviour_InvokeRepeating(0)[24]:int,
    this);
  SettingManager_OpenAudio(this, this[7], this[8], this);
}

function SettingManager_OpenAudio(a:int, b:int_ptr, c:int_ptr, d:int) { // func86464
  d = g_a - 32;
  g_a = d;
  if (eqz(6703361[0]:ubyte)) {
    f_hpa(5602744);
    f_hpa(5602784);
    f_hpa(5613524);
    f_hpa(5690228);
    f_hpa(5700044);
    f_hpa(5700048);
    f_hpa(5630052);
    6703361[0]:byte = 1;
  }
  var e:int = f_icke(d_p444444444444044P44p44444444[18805]:int);
  var f:int_ptr = e + 12;
  f[0] = b;
  TMPro_TMP_Text_get_fontSize(c, a[12]:float, 0);
  call_indirect(d + 16, b = a[8]:int, (b = b[0])[93], b[92]);
  var h:float = d[4]:float;
  call_indirect(d + 16, b = a[8]:int, (b = b[0])[93], b[92]);
  var i:float = d[5]:float;
  call_indirect(d + 16, b = a[8]:int, (b = b[0])[93], b[92]);
  var j:float = a[11]:float;
  a = d + 24;
  a[0]:float = d[6]:float;
  d[7]:float = j;
  d[5]:float = i;
  d[4]:float = h;
  b = c[0];
  var g:int = b[94];
  b = b[95];
  d[1]:long = a[0]:long;
  d[0]:long = d[2]:long;
  call_indirect(c, d, b, g);
  e[2]:float = (f[0])[82]:float;
  a = d_p444444444444044P44p44444444[14673]:int;
  if (eqz(a[29]:int)) { f_ahje(a) }
  DG_Tweening_DOTween_Goto(0, 0);
  DG_Tweening_TweenSettingsExtensions_SetEase(
    DG_Tweening_DOTweenModuleUI_DOColor(e[3]:int, 1.0f, 0.5f, 0),
    29,
    d_p444444444444044P44p44444444[33849]:int);
  a = f_icke(d_p444444444444044P44p44444444[11978]:int);
  f_gqkd(a, e, d_p444444444444044P44p44444444[36303]:int, 0);
  c = f_icke(d_p444444444444044P44p44444444[11988]:int);
  f_drkd(c, e, d_p444444444444044P44p44444444[36304]:int, 0);
  DG_Tweening_DOTween_ManualUpdate(a, c, 12.5f, 0.5f, 0);
  g_a = d + 32;
}

function SettingManager_OpenControls(a:int, b:int) { // func86465
  var this:int_ptr;
  if (eqz(6703360[0]:ubyte)) {
    f_hpa(5660012);
    6703360[0]:byte = 1;
  }
  f_sbnb(f_canb(this[9], 0), 0, 0);
  f_sbnb(f_canb(this[10], 0), 1, 0);
  var methodInfo:ubyte_ptr = 
    (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  methodInfo = ((if (methodInfo[189] & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  SoundEffectManager_Start(
    ((if (methodInfo[189] & 1) {
        methodInfo
      } else {
        System_Threading_Monitor_Enter_1(methodInfo)
      })[23]:int)[0]:int,
    UnityEngine_MonoBehaviour_InvokeRepeating(0)[24]:int,
    this);
  SettingManager_OpenAudio(this, this[8], this[7], this);
}

function SettingManager_ctor(a:int, b:int) { // func86466
  var this:int;
  if (eqz(6703362[0]:ubyte)) {
    f_hpa(5660012);
    6703362[0]:byte = 1;
  }
  var methodInfo:int = 
    (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  if (eqz(methodInfo[189]:ubyte & 1)) {
    methodInfo = System_Threading_Monitor_Enter_1(methodInfo)
  }
  SoundEffectManager_Start(
    (methodInfo[23]:int)[0]:int,
    UnityEngine_MonoBehaviour_InvokeRepeating(0)[24]:int,
    methodInfo);
  f_sbnb(f_canb(this, 0), 0, 0);
}

function SettingManager_c_DisplayClass14_0_Effect_b_0(a:int, b:float, c:int) { // func86467
  a[2]:float = b;
  TMPro_TMP_Text_get_fontSize(a[3]:int, b, 0);
}

function SettingManager_c_DisplayClass14_0_Effect_b_1(a:int_ptr, b:int_ptr) { // func86468
  b = g_a - 16;
  g_a = b;
  if (eqz(6703363[0]:ubyte)) {
    f_hpa(5601936);
    f_hpa(5668728);
    f_hpa(5668660);
    f_hpa(5617220);
    f_hpa(5680948);
    6703363[0]:byte = 1;
  }
  a[6] = f_irrc(a[4], d_p444444444444044P44p44444444[28474]:int);
  a[7] = f_irrc(a[5], d_p444444444444044P44p44444444[28474]:int);
  a[8] =
    UnityEngine_GameObject_get_activeInHierarchy(
      a[6],
      d_p444444444444044P44p44444444[28457]:int);
  a[9] =
    UnityEngine_GameObject_get_activeInHierarchy(
      a[7],
      d_p444444444444044P44p44444444[28457]:int);
  var c:int = f_icke(d_p444444444444044P44p44444444[15597]:int);
  InputSystem_Actions_get_asset(c, 0);
  a[10] = c;
  b[2] = c;
  f_iitb(InputSystem_Actions_UIActions_get_UseItem(b + 8, 0), 0);
  b[2] = a[10];
  c = InputSystem_Actions_UIActions_get_UseItem(b + 8, 0);
  var d:int = f_icke(d_p444444444444044P44p44444444[11776]:int);
  f_wyjc(d, a, d_p444444444444044P44p44444444[31529]:int, 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(c, d, 0);
  g_a = b + 16;
}

