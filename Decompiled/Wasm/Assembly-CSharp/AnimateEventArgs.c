// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: AnimateEventArgs  (Assembly-CSharp)

function AnimateEventArgs_ctor(a:int, b:int) { // func86875
  var this:int_ptr;
  var methodInfo:int_ptr;
  if (eqz(6703744[0]:ubyte)) {
    f_hpa(5668468);
    f_hpa(5668592);
    f_hpa(5621280);
    6703744[0]:byte = 1;
  }
  this[4] =
    (methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                    this,
                    d_p444444444444044P44p44444444[28440]:int));
  multiple_UnityEngine_Animator_GetBool_1(
    methodInfo[17],
    ((if ((methodInfo = d_p444444444444044P44p44444444[16612]:int)[29]) {
        methodInfo
      } else {
        f_ahje(methodInfo);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[6]:int,
    1,
    0);
  this[5] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28409]:int);
}

