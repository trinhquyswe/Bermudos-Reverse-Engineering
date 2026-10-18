// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: DieEvent  (Assembly-CSharp)

function DieEvent_add_OnDie(a:int, b:int, c:int) { // func86880
  var this:int_ptr;
  var value:int;
  var f:int;
  var d:int;
  if (eqz(6703928[0]:ubyte)) {
    f_hpa(5601748);
    6703928[0]:byte = 1;
  }
  var e:int = this + 16;
  this = this[4];
  loop L_c {
    var methodInfo:int = 0;
    d = f_kyud(this, value, 0);
    if (d) {
      methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11729]:int);
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

function DieEvent_ctor(a:int, b:int) { // func87152
  var this:int_ptr;
  if (eqz(6703929[0]:ubyte)) {
    f_hpa(5668468);
    f_hpa(5668508);
    6703929[0]:byte = 1;
  }
  this[6] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28419]:int);
  this[7] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28409]:int);
}

