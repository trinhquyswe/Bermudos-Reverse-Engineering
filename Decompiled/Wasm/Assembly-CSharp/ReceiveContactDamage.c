// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: ReceiveContactDamage  (Assembly-CSharp)

function ReceiveContactDamage_Awake(a:int_ptr, b:int, c:int) { // func86907
  Health_Start(a[5], select_if(b, a = a[4], a <= 0), a)
}

function ReceiveContactDamage_ctor(a:int, b:int) { // func86925
  var this:int_ptr;
  if (eqz(6703776[0]:ubyte)) {
    f_hpa(5668504);
    6703776[0]:byte = 1;
  }
  this[5] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28418]:int);
}

