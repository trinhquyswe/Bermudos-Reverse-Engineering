// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: AttackEvent  (Assembly-CSharp)

function AttackEvent_add_OnAttack(a:int, b:int, c:int) { // func86861
  var this:int_ptr;
  var value:int;
  var f:int;
  var d:int;
  if (eqz(6703758[0]:ubyte)) {
    f_hpa(5601704);
    6703758[0]:byte = 1;
  }
  var e:int = this + 16;
  this = this[4];
  loop L_c {
    var methodInfo:int = 0;
    d = f_kyud(this, value, 0);
    if (d) {
      methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11718]:int);
      if (eqz(methodInfo)) goto B_b;
    }
    d = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (d) continue L_c;
  }
  return ;
  label B_b:
  f_ypa(d, f);
  unreachable;
}

function AttackEvent_ctor(a:int, b:int) { // func86896
  var this:int_ptr;
  if (eqz(6703759[0]:ubyte)) {
    f_hpa(5668604);
    6703759[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28443]:int);
}

