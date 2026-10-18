// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: EnterPhase2  (Assembly-CSharp)

function EnterPhase2_OnAwake(a:int, b:int) { // func86972
  var this:int;
  if (eqz(6703809[0]:ubyte)) {
    f_hpa(5621280);
    f_hpa(5712544);
    6703809[0]:byte = 1;
  }
  UnityEngine_GameObject_get_transform(
    this[2]:int,
    UnityEngine_LayerMask_LayerToName(
      d_p444444444444044P44p44444444[39428]:int,
      0),
    0);
  var methodInfo:int = this[20]:int;
  methodInfo[6]:float = methodInfo[5]:float;
  methodInfo = this[18]:int;
  methodInfo[6]:int = methodInfo[7]:int;
  multiple_UnityEngine_Animator_SetTrigger(
    this[11]:int,
    ((if ((methodInfo = d_p444444444444044P44p44444444[16612]:int)[29]:int) {
        methodInfo
      } else {
        f_ahje(methodInfo);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[26]:int,
    0);
  this[15]:float = this[14]:float;
  (this[12]:int)[36]:byte = 1;
  UnityEngine_Rigidbody2D_set_isKinematic(this[17]:int, 4, 0);
  (this[19]:int)[60]:byte = 1;
  (this[21]:int)[40]:byte = 1;
}

function EnterPhase2_OnStart(a:int, b:int):int { // func86973
  var this:int;
  if (eqz(6703810[0]:ubyte)) {
    f_hpa(5659852);
    f_hpa(5741568);
    f_hpa(5712544);
    6703810[0]:byte = 1;
  }
  if (this[14]:float > 0.0f) {
    this[16]:float =
      this[16]:float - UnityEngine_Time_get_time(0) / this[15]:float;
    UnityEngine_Material_SetInt(
      f_zmlc(this[13]:int, d_p444444444444044P44p44444444[26255]:int),
      d_p444444444444044P44p44444444[46684]:int,
      this[16]:float,
      0);
    this[14]:float = this[14]:float - UnityEngine_Time_get_time(0);
    return 3;
  }
  UnityEngine_GameObject_get_transform(
    this[2]:int,
    UnityEngine_LayerMask_LayerToName(
      d_p444444444444044P44p44444444[39428]:int,
      0),
    0);
  return 2;
}

function EnterPhase2_OnUpdate(a:int, b:int) { // func86974
  var this:int_ptr;
  this[16] = 1065353216;
  this[14] = 1065353216;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool_cctor(this, 0);
}

function EnterPhase2_ctor(a:int, b:int) { // func86975
  var this:int_ptr;
  if (eqz(6703811[0]:ubyte)) {
    f_hpa(5689060);
    6703811[0]:byte = 1;
  }
  this[11] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33557]:int);
}

