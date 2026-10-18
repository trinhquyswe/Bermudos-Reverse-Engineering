// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: ReceiveDamage  (Assembly-CSharp)

function ReceiveDamage_Awake(a:int, b:int, c:int) { // func86840
  if (eqz(a[24]:ubyte)) {
    Health_Start(a[5]:int, select_if(b, a = a[4]:int, a <= 0), a)
  }
}

function ReceiveDamage_ctor(a:int, b:int) { // func86926
  var this:int_ptr;
  if (eqz(6703777[0]:ubyte)) {
    f_hpa(5610740);
    f_hpa(5728548);
    6703777[0]:byte = 1;
  }
  var methodInfo:int_ptr = Mono_Security_ASN1Convert_ToOid(
                             d_p444444444444044P44p44444444[13977]:int,
                             1);
  methodInfo[4] = d_p444444444444044P44p44444444[43429]:int;
  this[4] = UnityEngine_LayerMask_NameToLayer(methodInfo, 0);
  f_sbnb(f_canb(this[5], 0), 0, 0);
}

