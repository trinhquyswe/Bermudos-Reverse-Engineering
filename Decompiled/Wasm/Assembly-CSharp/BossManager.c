// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: BossManager  (Assembly-CSharp)

function BossManager_SpawnBoss(a:int, b:int):int { // func86950
  var this:int = 0;
  if (eqz(6703796[0]:ubyte)) {
    f_hpa(5750280);
    6703796[0]:byte = 1;
  }
  return if (UnityEngine_PlayerPrefs_GetString_1(
               d_p444444444444044P44p44444444[48862]:int,
               0)) {
           UnityEngine_PlayerPrefs_GetInt(
             d_p444444444444044P44p44444444[48862]:int,
             0)
         } else {
           this
         }
}

function BossManager_Start(a:int, b:int) { // func86954
  var this:int_ptr;
  var c:int;
  var methodInfo:int = g_a + -64;
  g_a = methodInfo;
  if (eqz(6703795[0]:ubyte)) {
    f_hpa(5682516);
    f_hpa(5619244);
    6703795[0]:byte = 1;
  }
  var d:int = this[6];
  if (eqz(6685672[0]:ubyte)) {
    f_hpa(5620040);
    6685672[0]:byte = 1;
  }
  var e:long_ptr = methodInfo + 40;
  e[0] =
    (c = (d_p444444444444044P44p44444444[16302]:int)[23]:int)[2]:long@4;
  methodInfo[4]:long = c[0]:long@4;
  this = UnityEngine_GameObject_AddComponent(this[7], 0);
  c = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29]:int)) { f_ahje(c) }
  methodInfo[6]:int = 0;
  c = d_p444444444444044P44p44444444[31921]:int;
  methodInfo[14]:int = 0;
  methodInfo[1]:long = e[0];
  methodInfo[2]:long = 4715268810953719808L;
  methodInfo[0]:long = methodInfo[4]:long;
  methodInfo[6]:long = 4715268810953719808L;
  UnityEngine_Quaternion_Internal_FromEulerRad(d,
                                               methodInfo + 16,
                                               methodInfo,
                                               this,
                                               c);
  g_a = methodInfo - -64;
}

function BossManager_GetBossState(a:int, b:int) { // func86956
  var this:int_ptr;
  if (eqz(6703797[0]:ubyte)) {
    f_hpa(5613524);
    6703797[0]:byte = 1;
  }
  this = this[4];
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[14673]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
  DG_Tweening_DOTween_KillAll_1(this, 0, 0);
}

function BossManager_ctor(a:int, b:int) { // func86957
  var this:int_ptr;
  var methodInfo:{ a:long, b:int, c:long, d:int } = g_a - 32;
  g_a = methodInfo;
  if (eqz(6703798[0]:ubyte)) {
    f_hpa(5666976);
    f_hpa(5623156);
    f_hpa(5690180);
    f_hpa(5690240);
    6703798[0]:byte = 1;
  }
  var c:int = UnityEngine_GameObject_AddComponent(this[5], 0);
  methodInfo.d = 0;
  methodInfo.b = 0;
  methodInfo.c = -4526117624395333632L;
  methodInfo.a = -4526117624395333632L;
  c = 
    DG_Tweening_TweenSettingsExtensions_SetEase(
      DG_Tweening_ShortcutExtensions_DOMoveZ(c, methodInfo, 1.0f, 0, 0),
      27,
      d_p444444444444044P44p44444444[33852]:int);
  var d:int = f_icke(d_p444444444444044P44p44444444[17081]:int);
  DG_Tweening_Color2_op_Multiply(
    d,
    this,
    d_p444444444444044P44p44444444[28036]:int,
    0);
  DG_Tweening_TweenSettingsExtensions_From_6(
    c,
    d,
    d_p444444444444044P44p44444444[33837]:int);
  g_a = methodInfo + 32;
}

function BossManager_Start_b_5_0(a:int, b:int) { // func86958
  var this:int_ptr;
  var methodInfo:{ a:long, b:int, c:long, d:long, e:int, f:long } = 
    g_a - 48;
  g_a = methodInfo;
  if (eqz(6703799[0]:ubyte)) {
    f_hpa(5666980);
    f_hpa(5623156);
    f_hpa(5690180);
    f_hpa(5690236);
    f_hpa(5690240);
    6703799[0]:byte = 1;
  }
  var c:int = this[4];
  methodInfo.f = 4970285139915014144L;
  methodInfo.c = 4970285139915014144L;
  DG_Tweening_TweenSettingsExtensions_SetEase(
    DG_Tweening_DOTweenModuleUI_DOPivotY(c, methodInfo + 16, 1.0f, 0, 0),
    26,
    d_p444444444444044P44p44444444[33851]:int);
  c = UnityEngine_GameObject_AddComponent(this[5], 0);
  methodInfo.e = 0;
  methodInfo.b = 0;
  methodInfo.d = -4341047827164332032L;
  methodInfo.a = -4341047827164332032L;
  c = 
    DG_Tweening_TweenSettingsExtensions_SetEase(
      DG_Tweening_ShortcutExtensions_DOMoveZ(c, methodInfo, 1.0f, 0, 0),
      26,
      d_p444444444444044P44p44444444[33852]:int);
  var d:int = f_icke(d_p444444444444044P44p44444444[17081]:int);
  DG_Tweening_Color2_op_Multiply(
    d,
    this,
    d_p444444444444044P44p44444444[28037]:int,
    0);
  DG_Tweening_TweenSettingsExtensions_From_6(
    c,
    d,
    d_p444444444444044P44p44444444[33837]:int);
  g_a = methodInfo + 48;
}

function BossManager_Start_b_5_1(a:int, b:int) { // func86959
  var this:int;
  BossManager_Start(this, this);
  f_sbnb(f_canb(this, 0), 0, 0);
}

function BossManager_Start_b_5(a:int, b:int) { // func86960
  var this:int;
  var methodInfo:{ a:long, b:long } = g_a - 16;
  g_a = methodInfo;
  if (eqz(6703800[0]:ubyte)) {
    f_hpa(5659852);
    f_hpa(5741568);
    f_hpa(5705720);
    f_hpa(5741572);
    6703800[0]:byte = 1;
  }
  UnityEngine_ColorUtility_DoTryParseHtmlColor(
    d_p444444444444044P44p44444444[37722]:int,
    this + 76,
    0);
  UnityEngine_Material_SetInt(
    f_zmlc(this[11]:int, d_p444444444444044P44p44444444[26255]:int),
    d_p444444444444044P44p44444444[46684]:int,
    this[17]:float,
    0);
  this[18]:float = this[16]:float;
  var c:int = 
    f_zmlc(this[11]:int, d_p444444444444044P44p44444444[26255]:int);
  methodInfo.b = this[14]:long@4;
  methodInfo.a = this[12]:long@4;
  UnityEngine_Material_SetFloat(
    c,
    d_p444444444444044P44p44444444[46685]:int,
    methodInfo,
    0);
  g_a = methodInfo + 16;
}

