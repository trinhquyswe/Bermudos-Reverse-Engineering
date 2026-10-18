// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: OnNoteOpenedEventArgs  (Assembly-CSharp)

function OnNoteOpenedEventArgs_ctor(a:int_ptr, b:int_ptr, c:int, d:int):int { // func86156
  if (eqz(6703158[0]:ubyte)) {
    f_hpa(5614012);
    f_hpa(5705180);
    f_hpa(5704252);
    6703158[0]:byte = 1;
  }
  c = multiple_System_String_Equals(
        c,
        d_p444444444444044P44p44444444[37355]:int,
        0);
  if (c) {
    a = UnityEngine_TextCore_Text_FontAsset_LoadFontFace(a, 0);
    a = call_indirect(a, (a = a[0])[55], a[54]);
    a = f_unpd(b, d_p444444444444044P44p44444444[37587]:int, a, 0);
    b = d_p444444444444044P44p44444444[14795]:int;
    if (eqz(b[29])) { f_ahje(b) }
    UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_TryLoadLayout(
      a,
      0);
  }
  return c;
}

