// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: InventoryDescription  (Assembly-CSharp)

function InventoryDescription_ctor(a:int, b:int):int { // func86330
  var this:int_ptr;
  if (eqz(6703297[0]:ubyte)) {
    f_hpa(5673348);
    f_hpa(5673756);
    f_hpa(5673860);
    f_hpa(5605048);
    f_hpa(5605044);
    f_hpa(5698704);
    f_hpa(5698708);
    f_hpa(5628344);
    6703297[0]:byte = 1;
  }
  var c:int = this[4];
  this = d_p444444444444044P44p44444444[18378]:int;
  if (eqz(this[29])) {
    f_ahje(this);
    this = d_p444444444444044P44p44444444[18378]:int;
  }
  var methodInfo:int = (this[23])[1]:int;
  if (eqz(methodInfo)) {
    this = ((if (this[29]) {
               this
             } else {
               f_ahje(this);
               d_p444444444444044P44p44444444[18378]:int;
             })[23]:int)[0]:int;
    methodInfo = f_icke(d_p444444444444044P44p44444444[12553]:int);
    UnityEngine_Rendering_DebugUI_Panel_get_isEditorOnly(
      methodInfo,
      this,
      d_p444444444444044P44p44444444[35968]:int,
      0);
    ((d_p444444444444044P44p44444444[18378]:int)[23]:int)[1]:int =
      methodInfo;
  }
  c = UnityEngine_Rendering_ListPool_1_Get(
        c,
        methodInfo,
        d_p444444444444044P44p44444444[29757]:int);
  this = d_p444444444444044P44p44444444[18378]:int;
  if (eqz(this[29])) {
    f_ahje(this);
    this = d_p444444444444044P44p44444444[18378]:int;
  }
  methodInfo = (this[23])[2]:int;
  if (eqz(methodInfo)) {
    this = ((if (this[29]) {
               this
             } else {
               f_ahje(this);
               d_p444444444444044P44p44444444[18378]:int;
             })[23]:int)[0]:int;
    methodInfo = f_icke(d_p444444444444044P44p44444444[12554]:int);
    f_nzed(methodInfo, this, d_p444444444444044P44p44444444[35969]:int, 0);
    ((d_p444444444444044P44p44444444[18378]:int)[23]:int)[2]:int =
      methodInfo;
  }
  return 
    f_tdbd(
      f_mbbd(c, methodInfo, d_p444444444444044P44p44444444[29629]:int),
      d_p444444444444044P44p44444444[29731]:int);
}

function InventoryDescription_OnEnable(a:int, b:int) { // func86362
  var this:int;
  if (eqz(6703295[0]:ubyte)) {
    f_hpa(5601852);
    f_hpa(5678964);
    6703295[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[11755]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[31033]:int,
    0);
  StaticEventHandler_add_OnItemUIClickChanged(methodInfo, this);
}

function InventoryDescription_OnDisable(a:int_ptr, b:int_ptr, c:int_ptr) { // func86363
  if (eqz(6703296[0]:ubyte)) {
    f_hpa(5619244);
    6703296[0]:byte = 1;
  }
  a[4] = (b = b[2]);
  c = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29])) { f_ahje(c) }
  if (UnityEngine_Camera_get_targetTexture(b, 0, 0)) {
    f_sbnb(f_canb(a[5], 0), 1, 0);
    f_kkx(a[5], (((a[4])[8]:int)[2]:int)[5]:int, 0);
    b = a[6];
    call_indirect(b, (((a[4])[8]:int)[2]:int)[3]:int, (b = b[0])[181], b[180]);
    b = a[7];
    call_indirect(b, (((a[4])[8]:int)[2]:int)[6]:int, (a = b[0])[181], a[180]);
  }
}

