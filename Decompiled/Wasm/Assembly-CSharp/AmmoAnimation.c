// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: AmmoAnimation  (Assembly-CSharp)

function AmmoAnimation_Awake(a:int, b:int) { // func86830
  var this:int_ptr;
  if (eqz(6703723[0]:ubyte)) {
    f_hpa(5611636);
    f_hpa(5725072);
    6703723[0]:byte = 1;
  }
  var c:int = UnityEngine_Animator_StopRecording(this[4], 0);
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[14201]:int);
  UnityEngine_Animator_MatchTarget_Injected(methodInfo, c, 0);
  multiple_UnityEngine_AnimatorOverrideController_Internal_Create(
    methodInfo,
    d_p444444444444044P44p44444444[42560]:int,
    ((this[5])[4]:int)[6]:int,
    0);
  UnityEngine_Animator_get_runtimeAnimatorController(this[4],
                                                     methodInfo,
                                                     0);
}

