// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: EndPhase1  (Assembly-CSharp)

function EndPhase1_OnAwake(a:int, b:int) { // func86965
  var this:int;
  if (eqz(6703804[0]:ubyte)) {
    f_hpa(5660012);
    f_hpa(5717216);
    6703804[0]:byte = 1;
  }
  var methodInfo:int = 
    (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  SoundEffectManager_Start(
    ((if (methodInfo[189]:ubyte & 1) {
        methodInfo
      } else {
        System_Threading_Monitor_Enter_1(methodInfo)
      })[23]:int)[0]:int,
    this[19]:int,
    0);
  UnityEngine_MonoBehaviour_StopCoroutine_2(this[16]:int, 0);
  UnityEngine_MonoBehaviour_StopCoroutine_2(this[17]:int, 0);
  this[15]:float = this[13]:float;
  if (eqz(6703806[0]:ubyte)) {
    f_hpa(5627332);
    6703806[0]:byte = 1;
  }
  methodInfo = f_icke(d_p444444444444044P44p44444444[18125]:int);
  methodInfo[4]:int = this;
  methodInfo[2]:int = 0;
  BehaviorDesigner_Runtime_Tasks_Task_StartCoroutine(this, methodInfo, 0);
  UnityEngine_GameObject_get_transform(
    this[2]:int,
    UnityEngine_LayerMask_LayerToName(
      d_p444444444444044P44p44444444[40596]:int,
      0),
    0);
}

function EndPhase1_OnUpdate(a:int, b:int):int { // func86966
  var this:int;
  if (eqz(6703806[0]:ubyte)) {
    f_hpa(5627332);
    6703806[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[18125]:int);
  methodInfo[4] = this;
  methodInfo[2] = 0;
  return methodInfo;
}

function EndPhase1_OnStart(a:int, b:int):int { // func86967
  var this:int;
  if (eqz(6703805[0]:ubyte)) {
    f_hpa(5659852);
    f_hpa(5741568);
    6703805[0]:byte = 1;
  }
  var methodInfo:int = this[72]:ubyte;
  if (eqz(this[13]:float > 0.0f)) { return select_if(2, 3, methodInfo) }
  if (methodInfo) {
    this[14]:float =
      this[14]:float + UnityEngine_Time_get_time(0) / this[15]:float;
    this[13]:float = this[13]:float - UnityEngine_Time_get_time(0);
    UnityEngine_Material_SetInt(
      f_zmlc(this[12]:int, d_p444444444444044P44p44444444[26255]:int),
      d_p444444444444044P44p44444444[46684]:int,
      this[14]:float,
      0);
  }
  return 3;
}

function EndPhase1_EndPhase1Coroutine(a:int, b:int) { // func86968
  var this:int_ptr;
  this[13] = 1065353216;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool_cctor(this, 0);
}

function EndPhase1_EndPhase1Coroutine_d_12_System_IDisposable_Dispose(a:int, b:int):int { // func86969
  var this:int_ptr;
  var methodInfo:int;
  if (eqz(6703807[0]:ubyte)) {
    f_hpa(5621280);
    f_hpa(5624116);
    6703807[0]:byte = 1;
  }
  br_table[B_d, B_c, ..B_b](this[2])
  label B_d:
  this[2] = -1;
  methodInfo = f_icke(d_p444444444444044P44p44444444[17321]:int);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
    methodInfo,
    0.5f,
    0);
  this[2] = 1;
  this[3] = methodInfo;
  return 1;
  label B_c:
  methodInfo = this[4];
  this[2] = -1;
  multiple_UnityEngine_Animator_SetTrigger(
    methodInfo[11]:int,
    ((if ((this = d_p444444444444044P44p44444444[16612]:int)[29]) {
        this
      } else {
        f_ahje(this);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[19]:int,
    0);
  methodInfo[72]:byte = 1;
  label B_b:
  return 0;
}

function EndPhase1_EndPhase1Coroutine_d_12_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86970
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5697812));
  unreachable;
}

function EndPhase1_EndPhase1Coroutine_d_12_System_Collections_IEnumerator_get_Current(a:int, b:int) { // func86971
  var this:int_ptr;
  if (eqz(6703808[0]:ubyte)) {
    f_hpa(5689024);
    f_hpa(5689032);
    f_hpa(5689028);
    f_hpa(5689040);
    f_hpa(5689056);
    f_hpa(5689060);
    f_hpa(5689064);
    6703808[0]:byte = 1;
  }
  this[11] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33548]:int);
  this[12] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33552]:int);
  this[17] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33558]:int);
  this[18] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33557]:int);
  this[19] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33550]:int);
  this[20] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33556]:int);
  this[21] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33549]:int);
}

