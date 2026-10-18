// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: DeadAction  (Assembly-CSharp)

function DeadAction_OnStart(a:int, b:int):int { // func86961
  var this:int;
  if (eqz(6703801[0]:ubyte)) {
    f_hpa(5659852);
    f_hpa(5660024);
    f_hpa(5741568);
    6703801[0]:byte = 1;
  }
  if (this[16]:float > 0.0f) {
    this[17]:float =
      this[17]:float + UnityEngine_Time_get_time(0) / this[18]:float;
    UnityEngine_Material_SetInt(
      f_zmlc(this[11]:int, d_p444444444444044P44p44444444[26255]:int),
      d_p444444444444044P44p44444444[46684]:int,
      this[17]:float,
      0);
    this[16]:float = this[16]:float - UnityEngine_Time_get_time(0);
    return 3;
  }
  this = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  this = 
    ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
  this = 
    ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[23]:int)[0]:int;
  if (eqz(6703899[0]:ubyte)) {
    f_hpa(5659992);
    6703899[0]:byte = 1;
  }
  this[7]:int = 5;
  if (eqz(6703900[0]:ubyte)) {
    f_hpa(5750280);
    6703900[0]:byte = 1;
  }
  UnityEngine_PlayerPrefs_TrySetSetString(
    d_p444444444444044P44p44444444[48862]:int,
    1,
    0);
  GameManager_SaveBossState(this, this);
  this = this[8]:int;
  if (this) { call_indirect(this[8]:int, 5, this[5]:int, this[3]:int) }
  return 1;
}

function DeadAction_OnUpdate(a:int, b:int) { // func86962
  var this:int;
  var methodInfo:{ a:long, b:long } = g_a - 16;
  g_a = methodInfo;
  if (eqz(6703802[0]:ubyte)) {
    f_hpa(5659852);
    f_hpa(5741568);
    f_hpa(5741572);
    6703802[0]:byte = 1;
  }
  var c:int = 
    f_zmlc(this[11]:int, d_p444444444444044P44p44444444[26255]:int);
  methodInfo.b = this[21]:long@4;
  methodInfo.a = this[19]:long@4;
  UnityEngine_Material_SetFloat(
    c,
    d_p444444444444044P44p44444444[46685]:int,
    methodInfo,
    0);
  f_sbnb(this[2]:int, 0, 0);
  UnityEngine_Material_SetInt(
    f_zmlc(this[11]:int, d_p444444444444044P44p44444444[26255]:int),
    d_p444444444444044P44p44444444[46684]:int,
    0.0f,
    0);
  g_a = methodInfo + 16;
}

function DeadAction_OnEnd(a:int, b:int) { // func86963
  var this:int_ptr;
  this[16] = 1077936128;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool_cctor(this, 0);
}

function DeadAction_ctor(a:int, b:int) { // func86964
  var this:int_ptr;
  if (eqz(6703803[0]:ubyte)) {
    f_hpa(5689024);
    f_hpa(5689052);
    f_hpa(5689060);
    6703803[0]:byte = 1;
  }
  this[11] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33548]:int);
  this[16] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33557]:int);
  this[17] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33555]:int);
}

