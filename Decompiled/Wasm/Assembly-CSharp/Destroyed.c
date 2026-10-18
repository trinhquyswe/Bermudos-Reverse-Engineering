// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Destroyed  (Assembly-CSharp)

function Destroyed_Die_d_7_System_Collections_IEnumerator_get_Current(a:int_ptr, b:int, c:int) { // func86877
  var f:int;
  var d:int;
  if (eqz(6703924[0]:ubyte)) {
    f_hpa(5601988);
    6703924[0]:byte = 1;
  }
  var e:int = a + 16;
  a = a[4];
  loop L_c {
    c = 0;
    d = f_iyud(a, b, 0);
    if (d) {
      c = f_upa(d, f = d_p444444444444044P44p44444444[11789]:int);
      if (eqz(c)) goto B_b;
    }
    d = a != (c = System_Net_WebOperation_ctor(e, c, a));
    a = c;
    if (d) continue L_c;
  }
  return ;
  label B_b:
  f_ypa(d, f);
  unreachable;
}

function Destroyed_Awake(a:int, b:int) { // func87145
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703918[0]:ubyte)) {
    f_hpa(5601988);
    f_hpa(5672116);
    6703918[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[4];
  var d:int = f_icke(d_p444444444444044P44p44444444[11789]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[29321]:int, 0);
  if (eqz(6703924[0]:ubyte)) {
    f_hpa(5601988);
    6703924[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_iyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11789]:int);
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

function Destroyed_OnEnable(a:int, b:int) { // func87146
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703919[0]:ubyte)) {
    f_hpa(5601988);
    f_hpa(5672116);
    6703919[0]:byte = 1;
  }
  var methodInfo:int_ptr = this[4];
  var d:int = f_icke(d_p444444444444044P44p44444444[11789]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[29321]:int, 0);
  if (eqz(6703925[0]:ubyte)) {
    f_hpa(5601988);
    6703925[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_kyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11789]:int);
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

function Destroyed_OnDisable(a:int, b:int, c:int, d:int) { // func87147
  if (eqz(6703920[0]:ubyte)) {
    f_hpa(5619244);
    6703920[0]:byte = 1;
  }
  if (c[8]:ubyte) {
    if (eqz(6703921[0]:ubyte)) {
      f_hpa(5627168);
      6703921[0]:byte = 1;
    }
    c = f_icke(d_p444444444444044P44p44444444[18084]:int);
    c[4]:int = a;
    c[2]:int = 0;
    UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
    return ;
  }
  if (eqz(c[9]:ubyte)) {
    Destroyed_Die(a, a);
    a = f_canb(a, 0);
    c = d_p444444444444044P44p44444444[16103]:int;
    if (eqz(c[29]:int)) { f_ahje(c) }
    f_kfnb(a, 0);
  }
}

function Destroyed_Die(a:int, b:int) { // func87148
  var this:ubyte_ptr;
  var c:int;
  if (eqz(6703922[0]:ubyte)) {
    f_hpa(5668472);
    f_hpa(5614012);
    f_hpa(5647208);
    f_hpa(5685664);
    f_hpa(5685692);
    f_hpa(5660024);
    f_hpa(5718408);
    6703922[0]:byte = 1;
  }
  var d:int_ptr = UnityEngine_GameObject_get_activeInHierarchy(
                    this,
                    d_p444444444444044P44p44444444[28410]:int);
  this = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  this = 
    ((if (this[189] & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
  var e:int_ptr = 
    (((if (this[189] & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[23]:int)[0]:int)[5]:int;
  if (e[3] > 0) {
    var f:int_ptr = d + 72;
    this = 0;
    loop L_e {
      if (
        eqz(
          multiple_System_String_Equals(d[17], (c = e[this + 4]:int)[6]:int, 0))) goto B_f;
      var methodInfo:int = 
        (d_p444444444444044P44p44444444[26298]:int)[4]:int;
      methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                       methodInfo
                     } else {
                       System_Threading_Monitor_Enter_1(methodInfo)
                     })[24]:int)[2]:int;
      if (
        eqz(f_wukc(Esper_ESave_SaveFileSetup_GenerateAESTokens(
                     (((if (methodInfo[189]:ubyte & 1) {
                          methodInfo
                        } else {
                          System_Threading_Monitor_Enter_1(methodInfo)
                        })[23]:int)[0]:int)[6]:int,
                     0),
                   c[6]:int,
                   0))) goto B_f;
      methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
      methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                       methodInfo
                     } else {
                       System_Threading_Monitor_Enter_1(methodInfo)
                     })[24]:int)[2]:int;
      var g:int_ptr = Esper_ESave_SaveFile_HasData(
                        Esper_ESave_SaveFileSetup_GenerateAESTokens(
                          (((if (methodInfo[189]:ubyte & 1) {
                               methodInfo
                             } else {
                               System_Threading_Monitor_Enter_1(methodInfo)
                             })[23]:int)[0]:int)[6]:int,
                          0),
                        c[6]:int,
                        0,
                        d_p444444444444044P44p44444444[32715]:int);
      f_fkn(g[4], f[0], 0, d_p444444444444044P44p44444444[23094]:int);
      methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
      methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                       methodInfo
                     } else {
                       System_Threading_Monitor_Enter_1(methodInfo)
                     })[24]:int)[2]:int;
      Esper_ESave_SaveFile_AddOrUpdateData_5(
        Esper_ESave_SaveFileSetup_GenerateAESTokens(
          (((if (methodInfo[189]:ubyte & 1) {
               methodInfo
             } else {
               System_Threading_Monitor_Enter_1(methodInfo)
             })[23]:int)[0]:int)[6]:int,
          0),
        c[6]:int,
        g,
        d_p444444444444044P44p44444444[32708]:int);
      c = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
      c = 
        ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
      Esper_ESave_SaveFile_SetSetupData(
        Esper_ESave_SaveFileSetup_GenerateAESTokens(
          (((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int)[6]:int,
          0),
        0,
        0);
      c = UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(f, 0);
      c = Mono_Security_X509_X509Crl_X509CrlEntry_ctor(
            d_p444444444444044P44p44444444[40894]:int,
            c,
            0);
      methodInfo = d_p444444444444044P44p44444444[14795]:int;
      if (eqz(methodInfo[29]:int)) { f_ahje(methodInfo) }
      UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_TryLoadLayout(
        c,
        0);
      label B_f:
      this = this + 1;
      if (this < e[3]) continue L_e;
    }
  }
}

function Destroyed_DestroyedEvent_OnDestroyed(a:int, b:int_ptr):int { // func87149
  if (eqz(6703921[0]:ubyte)) {
    f_hpa(5627168);
    6703921[0]:byte = 1;
  }
  b = f_icke(d_p444444444444044P44p44444444[18084]:int);
  b[4] = a;
  b[2] = 0;
  return b;
}

function Destroyed_Die_d_7_System_IDisposable_Dispose(a:int, b:int):int { // func87150
  var this:int;
  var methodInfo:int_ptr;
  if (eqz(6703923[0]:ubyte)) {
    f_hpa(5660024);
    f_hpa(5624116);
    6703923[0]:byte = 1;
  }
  br_table[B_d, B_c, ..B_b](this[2]:int)
  label B_d:
  this[2]:int = -1;
  methodInfo = f_icke(d_p444444444444044P44p44444444[17321]:int);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
    methodInfo,
    3.0f,
    0);
  this[2]:int = 1;
  this[3]:int = methodInfo;
  return 1;
  label B_c:
  methodInfo = this[4]:int;
  this[2]:int = -1;
  this = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  this = 
    ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
  if (eqz(this[189]:ubyte & 1)) { this = System_Threading_Monitor_Enter_1(this) }
  GameManager_Start((this[23]:int)[0]:int, this);
  methodInfo = methodInfo[6];
  this = methodInfo[4];
  if (eqz(this)) goto B_b;
  call_indirect(this[8]:int, methodInfo, this[5]:int, this[3]:int);
  label B_b:
  return 0;
}

function Destroyed_Die_d_7_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func87151
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5697576));
  unreachable;
}

