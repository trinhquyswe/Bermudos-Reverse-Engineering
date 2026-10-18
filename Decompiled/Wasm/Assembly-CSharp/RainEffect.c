// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: RainEffect  (Assembly-CSharp)

function RainEffect_Start(a:int, b:int) { // func87052
  var this:int_ptr;
  if (eqz(6703851[0]:ubyte)) {
    f_hpa(5660012);
    6703851[0]:byte = 1;
  }
  var methodInfo:ubyte_ptr = 
    (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  methodInfo = ((if (methodInfo[189] & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  SoundEffectManager_PlaySoundEffect(
    ((if (methodInfo[189] & 1) {
        methodInfo
      } else {
        System_Threading_Monitor_Enter_1(methodInfo)
      })[23]:int)[0]:int,
    this[5],
    0);
}

function RainEffect_ctor(a:int, b:int) { // func87053
  var this:int_ptr;
  if (eqz(6703852[0]:ubyte)) {
    f_hpa(5668372);
    f_hpa(5668376);
    f_hpa(5668384);
    f_hpa(5668476);
    f_hpa(5668484);
    f_hpa(5668492);
    f_hpa(5668508);
    f_hpa(5668504);
    f_hpa(5668516);
    f_hpa(5668560);
    f_hpa(5668604);
    f_hpa(5668644);
    6703852[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28385]:int);
  this[5] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28419]:int);
  this[6] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28415]:int);
  this[10] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28443]:int);
  this[7] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28386]:int);
  this[8] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28418]:int);
  this[9] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28413]:int);
  this[11] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28453]:int);
  this[12] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28421]:int);
  this[13] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28432]:int);
  this[15] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28411]:int);
  this[14] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28388]:int);
}

