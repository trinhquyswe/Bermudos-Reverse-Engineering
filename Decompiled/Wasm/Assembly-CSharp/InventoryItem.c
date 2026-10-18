// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: InventoryItem  (Assembly-CSharp)

function InventoryItem_ctor(a:int, b:int) { // func86386
  var this:int;
  if (eqz(6703309[0]:ubyte)) {
    f_hpa(5610740);
    f_hpa(5728548);
    6703309[0]:byte = 1;
  }
  var methodInfo:int_ptr = Mono_Security_ASN1Convert_ToOid(
                             d_p444444444444044P44p44444444[13977]:int,
                             1);
  methodInfo[4] = d_p444444444444044P44p44444444[43429]:int;
  multiple_89_Mono_Runtime_cctor(
    this + 20,
    UnityEngine_LayerMask_NameToLayer(methodInfo, 0),
    0);
  Item_OnTriggerEnter2D(this, this);
}

