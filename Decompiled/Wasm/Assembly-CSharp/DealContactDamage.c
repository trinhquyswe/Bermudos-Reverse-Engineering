// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: DealContactDamage  (Assembly-CSharp)

function DealContactDamage_Awake(a:int, b:int) { // func86897
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703760[0]:ubyte)) {
    f_hpa(5602056);
    f_hpa(5671168);
    6703760[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[4];
  var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[29084]:int, 0);
  if (eqz(6703940[0]:ubyte)) {
    f_hpa(5602056);
    6703940[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_iyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
      if (eqz(methodInfo)) goto B_c;
    }
    c = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (c) continue L_d;
  }
  return ;
  label B_c:
  f_ypa(c, f);
  unreachable;
}

function DealContactDamage_OnEnable(a:int, b:int) { // func86899
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703761[0]:ubyte)) {
    f_hpa(5602056);
    f_hpa(5671168);
    6703761[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[4];
  var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[29084]:int, 0);
  if (eqz(6703941[0]:ubyte)) {
    f_hpa(5602056);
    6703941[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_kyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
      if (eqz(methodInfo)) goto B_c;
    }
    c = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (c) continue L_d;
  }
  return ;
  label B_c:
  f_ypa(c, f);
  unreachable;
}

function DealContactDamage_OnDisable(a:float_ptr, b:int, c:float_ptr, d:int) { // func86901
  if (c[3] <= 0.0f) { a[8] = c[5] }
}

function DealContactDamage_PoiseEvent_OnPoise(a:int_ptr, b:int_ptr) { // func86902
  if (eqz(6703762[0]:ubyte)) {
    f_hpa(5610740);
    f_hpa(5728548);
    6703762[0]:byte = 1;
  }
  b = Mono_Security_ASN1Convert_ToOid(
        d_p444444444444044P44p44444444[13977]:int,
        1);
  b[4] = d_p444444444444044P44p44444444[43429]:int;
  a[6] = UnityEngine_LayerMask_NameToLayer(b, 0);
}

function DealContactDamage_Start(a:int, b:int) { // func86903
  var this:float_ptr;
  var c:float = this[8];
  if (c > 0.0f) { this[8] = c - UnityEngine_Time_get_time(0) }
}

function DealContactDamage_Update(a:int, b:int, c:int) { // func86904
  if (eqz(6703763[0]:ubyte)) {
    f_hpa(5668596);
    f_hpa(5668840);
    6703763[0]:byte = 1;
  }
  if (a[36]:ubyte) goto B_b;
  if (a[28]:ubyte) goto B_b;
  if (a[8]:float > 0.0f) goto B_b;
  c = UnityEngine_Camera_get_cullingMask(f_canb(b, 0), 0);
  if (eqz(a[6]:int >> c & 1)) goto B_b;
  DealContactDamage_OnTriggerStay2D(a, b, a);
  c = UnityEngine_GameObject_get_activeInHierarchy(
        b,
        d_p444444444444044P44p44444444[28441]:int);
  var d:int = UnityEngine_MonoBehaviour_InvokeRepeating(a)[6]:int;
  var e:int = UnityEngine_MonoBehaviour_InvokeRepeating(a)[7]:int;
  b = f_rrrc(b, d_p444444444444044P44p44444444[28502]:int);
  if (eqz(UnityEngine_GameObject_set_layer(f_canb(c, 0), 0))) goto B_b;
  if (eqz(6703845[0]:ubyte)) {
    f_hpa(5629432);
    6703845[0]:byte = 1;
  }
  a = f_icke(d_p444444444444044P44p44444444[18650]:int);
  a[6]:int = c;
  a[2]:int = 0;
  a[7]:int = e;
  a[5]:int = d;
  a[4]:int = b;
  UnityEngine_MonoBehaviour_StartCoroutine_1(c, a, 0);
  label B_b:
}

function DealContactDamage_OnTriggerStay2D(a:int, b:int, c:int) { // func86905
  var collision:int_ptr;
  var this:int;
  if (eqz(6703765[0]:ubyte)) {
    f_hpa(5675744);
    f_hpa(5619244);
    f_hpa(5730008);
    6703765[0]:byte = 1;
  }
  collision = 
    UnityEngine_Object_set_name(f_canb(collision, 0),
                                d_p444444444444044P44p44444444[30228]:int);
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
  if (UnityEngine_Camera_get_targetTexture(collision, 0, 0)) {
    this[28]:byte = 1;
    UnityEngine_MonoBehaviour_CancelInvoke(
      this,
      d_p444444444444044P44p44444444[43794]:int,
      0.5f,
      0);
    Health_Start(
      collision[5],
      select_if(this[5]:int, collision = collision[4], collision <= 0),
      collision);
  }
}

function DealContactDamage_OnTriggerEnter2D(a:int, b:int, c:int) { // func86906
  var this:int;
  var collision:int;
  if (eqz(6703764[0]:ubyte)) {
    f_hpa(5668596);
    f_hpa(5668840);
    6703764[0]:byte = 1;
  }
  if (this[36]:ubyte) goto B_b;
  if (this[28]:ubyte) goto B_b;
  if (this[8]:float > 0.0f) goto B_b;
  var methodInfo:int = 
    UnityEngine_Camera_get_cullingMask(f_canb(collision, 0), 0);
  if (eqz(this[6]:int >> methodInfo & 1)) goto B_b;
  DealContactDamage_OnTriggerStay2D(this, collision, this);
  methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                 collision,
                 d_p444444444444044P44p44444444[28441]:int);
  var d:int = UnityEngine_MonoBehaviour_InvokeRepeating(this)[6]:int;
  var e:int = UnityEngine_MonoBehaviour_InvokeRepeating(this)[7]:int;
  collision = 
    f_rrrc(collision, d_p444444444444044P44p44444444[28502]:int);
  if (
    eqz(UnityEngine_GameObject_set_layer(f_canb(methodInfo, 0), 0))) goto B_b;
  if (eqz(6703845[0]:ubyte)) {
    f_hpa(5629432);
    6703845[0]:byte = 1;
  }
  this = f_icke(d_p444444444444044P44p44444444[18650]:int);
  this[6]:int = methodInfo;
  this[2]:int = 0;
  this[7]:int = e;
  this[5]:int = d;
  this[4]:int = collision;
  UnityEngine_MonoBehaviour_StartCoroutine_1(methodInfo, this, 0);
  label B_b:
}

function DealContactDamage_ctor(a:int, b:int) { // func86908
  var this:int;
  if (eqz(6703766[0]:ubyte)) {
    f_hpa(5668704);
    6703766[0]:byte = 1;
  }
  UnityEngine_ContactFilter2D_CheckConsistency(this + 20, this[4]:int, 0);
  this[12]:int =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28468]:int);
  this[10]:short = 256;
}

