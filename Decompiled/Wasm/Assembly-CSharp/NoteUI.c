// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: NoteUI  (Assembly-CSharp)

function NoteUI_Start(a:int, b:int) { // func86563
  var this:int_ptr;
  var methodInfo:int = g_a - 48;
  g_a = methodInfo;
  if (eqz(6703419[0]:ubyte)) {
    f_hpa(5690228);
    6703419[0]:byte = 1;
  }
  var d:int_ptr = this[5];
  var f:int = methodInfo + 40;
  f[0]:long = 1065353216L;
  methodInfo[4]:long = 4575657222473777152L;
  var c:int_ptr = d[0];
  var e:int = c[94];
  c = c[95];
  methodInfo[3]:long = 1065353216L;
  methodInfo[2]:long = 4575657222473777152L;
  call_indirect(d, methodInfo + 16, c, e);
  call_indirect(methodInfo + 32, d = this[4], (c = d[0])[93], c[92]);
  var g:float = methodInfo[8]:float;
  call_indirect(methodInfo + 32, c = this[4], (c = c[0])[93], c[92]);
  var h:float = methodInfo[9]:float;
  call_indirect(methodInfo + 32, c = this[4], (c = c[0])[93], c[92]);
  f[0]:float = methodInfo[10]:float;
  methodInfo[11]:int = 0;
  methodInfo[9]:float = h;
  methodInfo[8]:float = g;
  c = d[0];
  e = c[94];
  c = c[95];
  methodInfo[1]:long = f[0]:long;
  methodInfo[0]:long = methodInfo[4]:long;
  call_indirect(d, methodInfo, c, e);
  DG_Tweening_TweenSettingsExtensions_SetEase(
    DG_Tweening_DOTweenModuleUI_DOColor_1(this[5], 1.0f, 1.0f, 0),
    4,
    d_p444444444444044P44p44444444[33849]:int);
  DG_Tweening_TweenSettingsExtensions_SetEase(
    DG_Tweening_DOTweenModuleUI_DOColor(this[4], 1.0f, 1.0f, 0),
    4,
    d_p444444444444044P44p44444444[33849]:int);
  g_a = methodInfo + 48;
}

function NoteUI_OnEnable(a:int, b:int) { // func86564
  var this:int;
  if (eqz(6703420[0]:ubyte)) {
    f_hpa(5601856);
    f_hpa(5613524);
    f_hpa(5682336);
    6703420[0]:byte = 1;
  }
  var methodInfo:int = System_Linq_Enumerable_Count(this, 0);
  var c:int_ptr = d_p444444444444044P44p44444444[14673]:int;
  if (eqz(c[29])) { f_ahje(c) }
  DG_Tweening_DOTween_KillAll_1(methodInfo, 0, 0);
  methodInfo = f_icke(d_p444444444444044P44p44444444[11756]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[31876]:int,
    0);
  StaticEventHandler_add_OnNoteOpened(methodInfo, this);
}

function NoteUI_OnDestroy(a:int_ptr, b:int, c:int) { // func86566
  var d:int = b[8]:ubyte;
  c = f_canb(a, 0);
  if (d) {
    f_sbnb(c, 1, 0);
    a = a[4];
    call_indirect(a, b[3]:int, (a = a[0])[181], a[180]);
    return ;
  }
  f_sbnb(c, 0, 0);
}

function NoteUI_ctor(a:int, b:int) { // func86567
  var this:int_ptr;
  if (eqz(6703421[0]:ubyte)) {
    f_hpa(5668372);
    f_hpa(5668376);
    f_hpa(5668384);
    f_hpa(5668392);
    f_hpa(5668448);
    f_hpa(5668452);
    f_hpa(5668464);
    f_hpa(5668468);
    f_hpa(5668508);
    f_hpa(5668516);
    f_hpa(5668532);
    f_hpa(5668564);
    f_hpa(5668568);
    f_hpa(5668596);
    f_hpa(5668608);
    f_hpa(5668652);
    f_hpa(5668648);
    6703421[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28433]:int);
  this[5] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28434]:int);
  this[7] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28421]:int);
  this[8] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28385]:int);
  this[9] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28388]:int);
  this[10] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28405]:int);
  this[11] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28419]:int);
  this[12] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28408]:int);
  this[13] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28390]:int);
  this[14] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28404]:int);
  this[15] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28455]:int);
  this[16] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28454]:int);
  this[17] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28386]:int);
  this[18] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28441]:int);
  this[19] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28444]:int);
  this[20] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28425]:int);
  this[21] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28409]:int);
}

