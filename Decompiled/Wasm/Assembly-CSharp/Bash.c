// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Bash  (Assembly-CSharp)

function Bash_Awake(a:int, b:int) { // func86645
  var this:int_ptr;
  var e:int;
  var f:int;
  if (eqz(6703468[0]:ubyte)) {
    f_hpa(5601772);
    f_hpa(5601964);
    f_hpa(5666452);
    f_hpa(5666456);
    f_hpa(5660024);
    6703468[0]:byte = 1;
  }
  var methodInfo:int = 
    (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  var d:int_ptr = ((if (methodInfo[189]:ubyte & 1) {
                      methodInfo
                    } else {
                      System_Threading_Monitor_Enter_1(methodInfo)
                    })[23]:int)[0]:int;
  methodInfo = d[8];
  var c:int = f_icke(d_p444444444444044P44p44444444[11735]:int);
  f_eujc(c, this, d_p444444444444044P44p44444444[27905]:int, 0);
  methodInfo = f_iyud(methodInfo, c, 0);
  if (eqz(methodInfo)) {
    d[8] = 0;
    goto B_g;
  }
  c = f_upa(methodInfo, e = d_p444444444444044P44p44444444[11735]:int);
  if (eqz(c)) goto B_f;
  d[8] = c;
  if (
    eqz(f_upa(methodInfo, c = d_p444444444444044P44p44444444[11735]:int))) goto B_e;
  label B_g:
  methodInfo = (this[6])[13]:int;
  d = f_icke(d_p444444444444044P44p44444444[11783]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[27906]:int, 0);
  if (eqz(6703478[0]:ubyte)) {
    f_hpa(5601964);
    6703478[0]:byte = 1;
  }
  e = methodInfo + 16;
  this = methodInfo[4]:int;
  loop L_j {
    methodInfo = 0;
    c = f_iyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11783]:int);
      if (eqz(methodInfo)) goto B_d;
    }
    c = this !=
        (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
    this = methodInfo;
    if (c) continue L_j;
  }
  return ;
  label B_f:
  f_ypa(methodInfo, e);
  unreachable;
  label B_e:
  f_ypa(methodInfo, c);
  unreachable;
  label B_d:
  f_ypa(c, f);
  unreachable;
}

function Bash_ctor(a:int_ptr, b:int, c:int) { // func86646
  var f:int;
  var d:int;
  if (eqz(6703478[0]:ubyte)) {
    f_hpa(5601964);
    6703478[0]:byte = 1;
  }
  var e:int = a + 16;
  a = a[4];
  loop L_c {
    c = 0;
    d = f_iyud(a, b, 0);
    if (d) {
      c = f_upa(d, f = d_p444444444444044P44p44444444[11783]:int);
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

function Bash_OnEnable(a:int, b:int) { // func86647
  var this:int_ptr;
  var f:int;
  var c:int;
  if (eqz(6703469[0]:ubyte)) {
    f_hpa(5601964);
    f_hpa(5666456);
    6703469[0]:byte = 1;
  }
  var methodInfo:int_ptr = (this[6])[13]:int;
  var d:int = f_icke(d_p444444444444044P44p44444444[11783]:int);
  f_ofkc(d, this, d_p444444444444044P44p44444444[27906]:int, 0);
  if (eqz(6703479[0]:ubyte)) {
    f_hpa(5601964);
    6703479[0]:byte = 1;
  }
  var e:int = methodInfo + 16;
  this = methodInfo[4];
  loop L_d {
    methodInfo = 0;
    c = f_kyud(this, d, 0);
    if (c) {
      methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11783]:int);
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

function Bash_OnDisable(a:int, b:ubyte_ptr, c:int) { // func86649
  if (eqz(6703470[0]:ubyte)) {
    f_hpa(5601772);
    f_hpa(5666452);
    f_hpa(5660024);
    f_hpa(5722324);
    6703470[0]:byte = 1;
  }
  if (b == 2) {
    f_xcnb(a, d_p444444444444044P44p44444444[41873]:int, 0.0f, 0.15f, 0);
    b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
    b = 
      ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
    var d:int_ptr = 
      ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
    b = d[8];
    c = f_icke(d_p444444444444044P44p44444444[11735]:int);
    f_eujc(c, a, d_p444444444444044P44p44444444[27905]:int, 0);
    a = f_kyud(b, c, 0);
    if (eqz(a)) {
      d[8] = 0;
      return ;
    }
    b = f_upa(a, c = d_p444444444444044P44p44444444[11735]:int);
    if (eqz(b)) goto B_c;
    d[8] = b;
    if (
      eqz(f_upa(a, b = d_p444444444444044P44p44444444[11735]:int))) goto B_b;
  }
  return ;
  label B_c:
  f_ypa(a, c);
  unreachable;
  label B_b:
  f_ypa(a, b);
  unreachable;
}

function Bash_GameStateChanged_OnBash(a:int, b:ubyte_ptr) { // func86650
  var d:{ a:long, b:long, c:long } = g_a - 32;
  g_a = d;
  if (eqz(6703471[0]:ubyte)) {
    f_hpa(5668360);
    f_hpa(5619244);
    f_hpa(5619608);
    f_hpa(5660024);
    6703471[0]:byte = 1;
  }
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  if (
    (((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int)[7]:int !=
    2) goto B_b;
  UnityEngine_Camera_get_farClipPlane(
    d + 16,
    System_Linq_Enumerable_Count(a, 0),
    0);
  var e:long = d.c;
  var f:float = a[16]:float;
  b = (a + 20)[0]:int;
  var c:int_ptr = d_p444444444444044P44p44444444[16194]:int;
  if (eqz(c[29])) { f_ahje(c) }
  d.a = e;
  d.b = e;
  a[4]:int =
    (b = UnityEngine_Physics2D_GetRayIntersectionNonAlloc_2(d, f, b, 0));
  c = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29])) { f_ahje(c) }
  if (f_qcnb(b, 0, 0)) goto B_b;
  b = UnityEngine_GameObject_get_activeInHierarchy(
        a[4]:int,
        d_p444444444444044P44p44444444[28382]:int);
  c = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29])) { f_ahje(c) }
  if (f_qcnb(b, 0, 0)) goto B_b;
  UnityEngine_Time_get_timeScale(0.0f, 0);
  a[13]:int = 1092616192;
  a[48]:byte = 1;
  b = a[17]:int;
  c = a[11]:int;
  if (eqz(6703582[0]:ubyte)) {
    f_hpa(5621908);
    6703582[0]:byte = 1;
  }
  a = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[18]:int;
  if (eqz(a)) goto B_b;
  call_indirect(a[8]:int, c, b, 1, a[5]:int, a[3]:int);
  label B_b:
  g_a = d + 32;
}

function Bash_OnBashEvent_OnBash(a:int_ptr, b:int_ptr) { // func86652
  if (eqz(6703472[0]:ubyte)) {
    f_hpa(5610740);
    f_hpa(5718412);
    6703472[0]:byte = 1;
  }
  b = Mono_Security_ASN1Convert_ToOid(
        d_p444444444444044P44p44444444[13977]:int,
        1);
  b[4] = d_p444444444444044P44p44444444[40895]:int;
  a[5] = UnityEngine_LayerMask_NameToLayer(b, 0);
}

function Bash_Start(a:int, b:int) { // func86653
  var this:int;
  br_table[B_e, B_d, B_c, B_b, ..B_a](this[8]:int)
  label B_e:
  Bash_Update(this, this);
  return ;
  label B_d:
  if (eqz(this[48]:ubyte)) goto B_a;
  Bash_Prepare(this, this);
  return ;
  label B_c:
  if (eqz(this[49]:ubyte)) goto B_a;
  Bash_During(this, this);
  return ;
  label B_b:
  this[24]:short = 0;
  label B_a:
}

function Bash_Update(a:int, b:int) { // func86654
  var this:int;
  var c:int_ptr;
  var d:{ a:long, b:long, c:long } = g_a - 32;
  g_a = d;
  if (eqz(6703473[0]:ubyte)) {
    f_hpa(5668360);
    f_hpa(5619244);
    f_hpa(5619608);
    6703473[0]:byte = 1;
  }
  var methodInfo:float_ptr = (this[6]:int)[16]:int;
  if (methodInfo[5] < f32_convert_i32_s(c = this[15]:int)) goto B_b;
  Stamina_Update(methodInfo, c, 0);
  UnityEngine_Camera_get_farClipPlane(
    d + 16,
    System_Linq_Enumerable_Count(this, 0),
    0);
  var e:long = d.c;
  var f:float = this[16]:float;
  methodInfo = (this + 20)[0]:int;
  c = d_p444444444444044P44p44444444[16194]:int;
  if (eqz(c[29])) { f_ahje(c) }
  d.a = e;
  d.b = e;
  this[4]:int =
    (methodInfo = 
       UnityEngine_Physics2D_GetRayIntersectionNonAlloc_2(d, f, methodInfo, 0));
  c = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29])) { f_ahje(c) }
  if (f_qcnb(methodInfo, 0, 0)) goto B_b;
  methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                 this[4]:int,
                 d_p444444444444044P44p44444444[28382]:int);
  c = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29])) { f_ahje(c) }
  if (f_qcnb(methodInfo, 0, 0)) goto B_b;
  if (
    eqz(
      ((this[6]:int)[16]:int)[5]:float >= f32_convert_i32_s(this[15]:int))) goto B_b;
  UnityEngine_Time_get_timeScale(0.0f, 0);
  this[13]:int = 1073741824;
  this[48]:byte = 1;
  label B_b:
  g_a = d + 32;
}

function Bash_Prepare(a:int, b:int) { // func86655
  var this:int;
  var f:float;
  var methodInfo:{ a:long, b:long, c:long, d:long, e:long } = g_a - 48;
  g_a = methodInfo;
  if (eqz(6703474[0]:ubyte)) {
    f_hpa(5619244);
    f_hpa(5660012);
    6703474[0]:byte = 1;
  }
  this[13]:float =
    (f = this[13]:float - UnityEngine_Time_get_fixedUnscaledTime(0));
  if (f <= 0.0f) {
    UnityEngine_LineRenderer_set_endColor((this[7]:int)[4]:int, 0, 0);
    UnityEngine_Time_get_timeScale(1.0f, 0);
    this[48]:byte = 0;
    goto B_b;
  }
  this[49]:byte = 1;
  var c:ubyte_ptr = this[4]:int;
  var d:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(d[29])) { f_ahje(d) }
  if (eqz(UnityEngine_Camera_get_targetTexture(c, 0, 0))) goto B_b;
  if (eqz(this[50]:ubyte)) {
    c = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
    c = 
      ((if (c[189] & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
    SoundEffectManager_Start(
      ((if (c[189] & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int,
      this[9]:int,
      this);
    this[50]:byte = 1;
  }
  c = this[7]:int;
  HelperUtilities_ValidateCheckPositiveValue(methodInfo + 32, 0);
  var e:long = methodInfo.e;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 32,
    System_Linq_Enumerable_Count(this[4]:int, 0),
    0);
  methodInfo.d = e;
  methodInfo.b = e;
  methodInfo.c = (e = methodInfo.e);
  methodInfo.a = e;
  Arrow_Awake(c, methodInfo + 8, methodInfo, this);
  label B_b:
  g_a = methodInfo + 48;
}

function Bash_During(a:int, b:int) { // func86656
  var this:int;
  if (eqz(6703475[0]:ubyte)) {
    f_hpa(5668360);
    f_hpa(5619244);
    f_hpa(5660012);
    f_hpa(5712196);
    6703475[0]:byte = 1;
  }
  UnityEngine_Time_get_timeScale(1.0f, 0);
  var methodInfo:ubyte_ptr = this[4]:int;
  var c:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29])) { f_ahje(c) }
  if (
    eqz(UnityEngine_Camera_get_targetTexture(methodInfo, 0, 0))) goto B_c;
  if (eqz(this[49]:ubyte)) goto B_c;
  UnityEngine_GameObject_get_activeInHierarchy(
    this[4]:int,
    d_p444444444444044P44p44444444[28382]:int)[29]:int =
    2;
  UnityEngine_GameObject_get_transform(
    f_canb(this[4]:int, 0),
    UnityEngine_LayerMask_LayerToName(
      d_p444444444444044P44p44444444[39341]:int,
      0),
    0);
  Bash_InitializeFlagVarible(this, this);
  UnityEngine_LineRenderer_set_endColor((this[7]:int)[4]:int, 0, 0);
  if (this[50]:ubyte) {
    methodInfo = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
    methodInfo = ((if (methodInfo[189] & 1) {
                     methodInfo
                   } else {
                     System_Threading_Monitor_Enter_1(methodInfo)
                   })[24]:int)[2]:int;
    SoundEffectManager_Start(
      ((if (methodInfo[189] & 1) {
          methodInfo
        } else {
          System_Threading_Monitor_Enter_1(methodInfo)
        })[23]:int)[0]:int,
      this[10]:int,
      this);
    this[50]:byte = 0;
  }
  Bash_MoveAmmoByBash(this, this);
  label B_c:
  this[8]:int = 3;
}

function Bash_InitializeFlagVarible(a:int, b:int) { // func86657
  var this:int;
  var i:long;
  var methodInfo:{ a:long, b:long, c:float, d:float } = g_a - 32;
  g_a = methodInfo;
  if (eqz(6703476[0]:ubyte)) {
    f_hpa(5668632);
    6703476[0]:byte = 1;
  }
  var h:int = UnityEngine_GameObject_get_activeInHierarchy(
                this[4]:int,
                d_p444444444444044P44p44444444[28450]:int);
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 16,
    System_Linq_Enumerable_Count(this[4]:int, 0),
    0);
  var d:float = methodInfo.c;
  var c:float = methodInfo.d;
  HelperUtilities_ValidateCheckPositiveValue(methodInfo + 16, 0);
  var e:float = methodInfo.d;
  var f:float = methodInfo.c;
  if (eqz(6698157[0]:ubyte)) {
    f_hpa(5618360);
    6698157[0]:byte = 1;
  }
  c = c - e;
  d = d - f;
  var g:int = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(g[29]:int)) { f_ahje(g) }
  d = {
        e = sqrt(d * d + c * c);
        if (e > 0.00001f) {
          c = c / e;
          d / e;
          goto B_d;
        }
        if (eqz(6703146[0]:ubyte)) {
          f_hpa(5623844);
          6703146[0]:byte = 1;
        }
        g = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
        c = g[1]:float;
        g[0]:float;
        label B_d:
      }
  methodInfo.a =
    (i = 
       i64_extend_i32_u(i32_reinterpret_f32(c * (e = this[14]:float))) <<
       32L |
       i64_extend_i32_u(i32_reinterpret_f32(d * e)));
  methodInfo.b = i;
  multiple_UnityEngine_Rigidbody2D_AddForce(h, methodInfo, 1, 0);
  g_a = methodInfo + 32;
}

function Bash_MoveAmmoByBash(a:int, b:int) { // func86658
  var this:int_ptr;
  if (eqz(6703477[0]:ubyte)) {
    f_hpa(5660024);
    f_hpa(5722324);
    6703477[0]:byte = 1;
  }
  var methodInfo:ubyte_ptr = 
    (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189] & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  if ((((if (methodInfo[189] & 1) {
           methodInfo
         } else {
           System_Threading_Monitor_Enter_1(methodInfo)
         })[23]:int)[0]:int)[7]:int !=
      2) goto B_b;
  this[17] =
    (methodInfo = 
       if ((methodInfo = this[17]) == 2) {
         multiple_UnityEngine_MonoBehaviour_Invoke(
           this,
           d_p444444444444044P44p44444444[41873]:int,
           0);
         GameManager_TransitionToGame(
           ((if ((methodInfo = 
                    ((if ((methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189] &
                          1) {
                        methodInfo
                      } else {
                        System_Threading_Monitor_Enter_1(methodInfo)
                      })[24]:int)[2]:int)[189] &
                 1) {
               methodInfo
             } else {
               System_Threading_Monitor_Enter_1(methodInfo)
             })[23]:int)[0]:int,
           3,
           0);
         this[17];
       } else {
         methodInfo
       } +
       1);
  var c:int = this[11];
  if (eqz(6703582[0]:ubyte)) {
    f_hpa(5621908);
    6703582[0]:byte = 1;
  }
  this = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[18]:int;
  if (eqz(this)) goto B_b;
  call_indirect(this[8], c, methodInfo, 1, this[5], this[3]);
  label B_b:
}

function Bash_Release(a:int, b:int) { // func86659
  var this:short_ptr;
  this[24] = 0;
}

function Bash_ProcessInstructionBashInRealseState(a:int, b:int) { // func86660
  var this:int;
  this[16]:int = 1075838976;
  this[14]:long@4 = 44042289152L;
  multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
}

