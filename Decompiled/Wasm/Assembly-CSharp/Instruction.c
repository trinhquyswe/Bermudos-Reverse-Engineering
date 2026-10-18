// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Instruction  (Assembly-CSharp)

function Instruction_Start(a:int, b:int) { // func86437
  var this:int;
  var h:float;
  var methodInfo:int = g_a - 48;
  g_a = methodInfo;
  if (eqz(6703337[0]:ubyte)) {
    f_hpa(5690240);
    6703337[0]:byte = 1;
  }
  var d:int = System_Linq_Enumerable_Count(this, 0);
  if (eqz(6695507[0]:ubyte)) {
    f_hpa(5623880);
    6695507[0]:byte = 1;
  }
  var c:int = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
  var f:float = c[3]:float;
  var g:float = c[4]:float;
  var e:int = methodInfo + 40;
  e[0]:float = (h = c[5]:float) + h;
  methodInfo[6]:int = e[0]:int;
  methodInfo[9]:float = g + g;
  methodInfo[8]:float = f + f;
  methodInfo[2]:long = methodInfo[4]:long;
  multiple_UnityEngine_Transform_get_localScale(d, methodInfo + 16, 0);
  this = System_Linq_Enumerable_Count(this, 0);
  if (eqz(6695507[0]:ubyte)) {
    f_hpa(5623880);
    6695507[0]:byte = 1;
  }
  methodInfo[2]:int =
    (c = (d_p444444444444044P44p44444444[17262]:int)[23]:int)[5]:int;
  methodInfo[0]:long = c[3]:long@4;
  DG_Tweening_TweenSettingsExtensions_SetEase(
    DG_Tweening_ShortcutExtensions_DOLocalRotateQuaternion(this,
                                                           methodInfo,
                                                           0.3f,
                                                           0),
    27,
    d_p444444444444044P44p44444444[33852]:int);
  g_a = methodInfo + 48;
}

function Instruction_OnEnable(a:int, b:int) { // func86438
  var this:int;
  if (eqz(6703338[0]:ubyte)) {
    f_hpa(5602112);
    f_hpa(5613524);
    f_hpa(5678872);
    6703338[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[11820]:int);
  f_ngkc(methodInfo, this, d_p444444444444044P44p44444444[31010]:int, 0);
  StaticEventHandler_add_OnInstructionChanged(methodInfo, this);
  this = System_Linq_Enumerable_Count(this, 0);
  methodInfo = d_p444444444444044P44p44444444[14673]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
  DG_Tweening_DOTween_KillAll_1(this, 0, 0);
}

function Instruction_OnDestroy(a:int_ptr, b:int_ptr, c:int, d:int, e:int) { // func86440
  var j:float;
  e = g_a - 48;
  g_a = e;
  e[11]:int = c;
  if (eqz(6703339[0]:ubyte)) {
    f_hpa(5690240);
    f_hpa(5690336);
    f_hpa(5707868);
    f_hpa(5704252);
    6703339[0]:byte = 1;
  }
  if (c == -1) {
    f_sbnb(f_canb(a, 0), 1, 0);
    c = a[4];
    call_indirect(c, b, (c = c[0]:int)[181]:int, c[180]:int);
    a = a[5];
    call_indirect(a,
                  d_p444444444444044P44p44444444[37355]:int,
                  (a = a[0])[181],
                  a[180]);
    goto B_b;
  }
  if (c <= 2) {
    var f:int = System_Linq_Enumerable_Count(a, 0);
    if (eqz(6695507[0]:ubyte)) {
      f_hpa(5623880);
      6695507[0]:byte = 1;
    }
    c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
    var h:float = c[3]:float;
    var i:float = c[4]:float;
    var g:int = e + 40;
    g[0]:float = (j = c[5]:float) + j;
    e[6]:int = g[0]:int;
    e[9]:float = i + i;
    e[8]:float = h + h;
    e[2]:long = e[4]:long;
    multiple_UnityEngine_Transform_get_localScale(f, e + 16, 0);
    c = System_Linq_Enumerable_Count(a, 0);
    if (eqz(6695507[0]:ubyte)) {
      f_hpa(5623880);
      6695507[0]:byte = 1;
    }
    e[2]:int =
      (f = (d_p444444444444044P44p44444444[17262]:int)[23]:int)[5]:int;
    e[0]:long = f[3]:long@4;
    DG_Tweening_TweenSettingsExtensions_SetTarget(
      DG_Tweening_TweenSettingsExtensions_SetEase(
        DG_Tweening_ShortcutExtensions_DOLocalRotateQuaternion(c, e, 0.3f, 0),
        27,
        d_p444444444444044P44p44444444[33852]:int),
      1,
      d_p444444444444044P44p44444444[33876]:int);
    f_sbnb(f_canb(a, 0), 1, 0);
    c = a[4];
    call_indirect(c, b, (c = c[0]:int)[181]:int, c[180]:int);
    c = UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(e + 44, 0);
    b = a[5];
    call_indirect(b,
                  Mono_Security_X509_X509Crl_X509CrlEntry_ctor(
                    c,
                    d_p444444444444044P44p44444444[38259]:int,
                    0),
                  (c = b[0])[181]:int,
                  c[180]:int);
    goto B_d;
  }
  f_sbnb(f_canb(a, 0), 0, 0);
  label B_d:
  if (d) goto B_b;
  f_sbnb(f_canb(a, 0), 0, 0);
  label B_b:
  g_a = e + 48;
}

function Instruction_ctor(a:int, b:int) { // func86441
  var this:int_ptr;
  var methodInfo:int;
  if (eqz(6703340[0]:ubyte)) {
    f_hpa(5668708);
    f_hpa(5668724);
    f_hpa(5668728);
    6703340[0]:byte = 1;
  }
  this[10] = f_irrc(this, d_p444444444444044P44p44444444[28473]:int);
  this[7] = f_irrc(this, d_p444444444444044P44p44444444[28474]:int);
  this[8] =
    (methodInfo = f_irrc(this, d_p444444444444044P44p44444444[28469]:int));
  f_sbnb(f_canb(methodInfo, 0), 0, 0);
  UnityEngine_ExcludeFromPresetAttribute_ctor(this[5], 0, 0);
}

