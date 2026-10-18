// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: IsReceiveDamage  (Assembly-CSharp)

function IsReceiveDamage_OnAwake(a:byte_ptr, b:int, c:int, d:int) { // func86992
  a[48] = 1
}

function IsReceiveDamage_OnHealthChanged(a:ubyte_ptr, b:int):int { // func86993
  return select_if(2, 1, a[48])
}

function IsReceiveDamage_OnUpdate(a:int, b:int) { // func86994
  var this:byte_ptr;
  this[48] = 0;
}

function IsReceiveDamage_ctor(a:int, b:int) { // func86995
  var this:int_ptr;
  if (eqz(6703817[0]:ubyte)) {
    f_hpa(5689052);
    6703817[0]:byte = 1;
  }
  ReceiveDamageAction_ctor(this, this);
  this[42] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33555]:int);
}

