// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: IdleAction  (Assembly-CSharp)

function IdleAction_OnAwake(a:int, b:int):int { // func86982
  var this:int_ptr;
  if (eqz(6703813[0]:ubyte)) {
    f_hpa(5635412);
    6703813[0]:byte = 1;
  }
  multiple_UnityEngine_Animator_SetTrigger(
    this[11],
    f_xmjd(this[41], this[12], d_p444444444444044P44p44444444[20145]:int),
    0);
  return 2;
}

function IdleAction_ctor(a:int, b:int) { // func86985
  var this:int_ptr;
  if (eqz(6703814[0]:ubyte)) {
    f_hpa(5689044);
    6703814[0]:byte = 1;
  }
  this[11] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33553]:int);
}

