// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: RangedSkills  (Assembly-CSharp)

function RangedSkills_Awake(a:int, b:int):int { // func86627
  var e:long;
  var f:float;
  var g:float;
  var this:int = g_a - 96;
  g_a = this;
  if (eqz(6703458[0]:ubyte)) {
    f_hpa(5610900);
    6703458[0]:byte = 1;
  }
  var c:long_ptr = Mono_Security_ASN1Convert_ToOid(
                     d_p444444444444044P44p44444444[14017]:int,
                     15);
  if (eqz(6691348[0]:ubyte)) {
    f_hpa(5623844);
    6691348[0]:byte = 1;
  }
  c[2] =
    i64_extend_i32_u(
      i32_reinterpret_f32(
        f = 
          f32_reinterpret_i32(
            i32_wrap_i64(
              (e = ((d_p444444444444044P44p44444444[17253]:int)[23]:int)[10]:long@4) >>
              32L)) *
          30.0f)) <<
    32L |
    i64_extend_i32_u(
      i32_reinterpret_f32(g = f32_reinterpret_i32(i32_wrap_i64(e)) * 30.0f));
  var methodInfo:int = 1;
  loop L_c {
    var d:int = this + 88;
    d[0]:float = f32_convert_i32_s(methodInfo * 24) * 0.017453f;
    this[10]:int = d[0]:int;
    this[4]:long = 0L;
    this[10]:long = 0L;
    f_gul(this - -64, this + 32, 0);
    this[14]:int = 0;
    this[2]:int = 0;
    this[3]:long = this[9]:long;
    this[13]:float = f;
    this[12]:float = g;
    this[2]:long = this[8]:long;
    this[0]:long = this[6]:long;
    UnityEngine_Quaternion_op_Multiply(this + 80, this + 16, this, 0);
    c[methodInfo + 2]:long = this[10]:long;
    methodInfo = methodInfo + 1;
    if (methodInfo != 15) continue L_c;
  }
  g_a = this + 96;
  return c;
}

function RangedSkills_Get15ShootDirections(a:int, b:int) { // func86628
  var this:int_ptr;
  var c:int;
  var methodInfo:int = g_a + -64;
  g_a = methodInfo;
  var d:int_ptr = RangedSkills_Awake(methodInfo, methodInfo);
  if (d[3] > 0) {
    loop L_b {
      UnityEngine_Camera_get_farClipPlane(
        methodInfo + 48,
        System_Linq_Enumerable_Count(this, 0),
        0);
      var h:float = methodInfo[13]:float;
      var i:float = methodInfo[12]:float;
      var j:float = methodInfo[14]:float;
      var g:long = d[c + 2]:long;
      var e:int = this[6];
      UnityEngine_Camera_get_farClipPlane(
        methodInfo + 48,
        System_Linq_Enumerable_Count(this, 0),
        0);
      var f:int = methodInfo + 40;
      f[0]:float = j + 0.0f;
      methodInfo[6]:int = methodInfo[14]:int;
      methodInfo[2]:int = f[0]:int;
      methodInfo[8]:float = i + f32_reinterpret_i32(i32_wrap_i64(g));
      methodInfo[9]:float = h + f32_reinterpret_i32(i32_wrap_i64(g >> 32L));
      methodInfo[2]:long = methodInfo[6]:long;
      methodInfo[0]:long = methodInfo[4]:long;
      f_ucxd(methodInfo, e, methodInfo + 16, methodInfo, methodInfo);
      c = c + 1;
      if (c < d[3]) continue L_b;
    }
  }
  g_a = methodInfo - -64;
}

function RangedSkills_BaseShoot(a:int, b:int) { // func86629
  var c:int;
  var this:int_ptr;
  var methodInfo:int = g_a - 96;
  g_a = methodInfo;
  if (eqz(6703459[0]:ubyte)) {
    f_hpa(5675608);
    f_hpa(5682504);
    f_hpa(5619244);
    f_hpa(5660024);
    6703459[0]:byte = 1;
  }
  UnityEngine_Camera_get_farClipPlane(
    methodInfo - -64,
    System_Linq_Enumerable_Count(
      (((if ((c = 
                ((if ((c = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
                      1) {
                    c
                  } else {
                    System_Threading_Monitor_Enter_1(c)
                  })[24]:int)[2]:int)[189]:ubyte &
             1) {
           c
         } else {
           System_Threading_Monitor_Enter_1(c)
         })[23]:int)[0]:int)[4]:int,
      0),
    0);
  var e:float = methodInfo[17]:float;
  var f:float = methodInfo[16]:float;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo - -64,
    System_Linq_Enumerable_Count(this, 0),
    0);
  c = methodInfo + 88;
  c[0]:float =
    (f_nvq(e - methodInfo[17]:float, f - methodInfo[16]:float) * 57.29578f +
     90.0f) *
    0.017453f;
  methodInfo[10]:int = c[0]:int;
  methodInfo[4]:long = 0L;
  methodInfo[10]:long = 0L;
  f_gul(methodInfo + 48, methodInfo + 32, 0);
  methodInfo[9]:long = methodInfo[7]:long;
  methodInfo[8]:long = methodInfo[6]:long;
  c = this[8];
  UnityEngine_Camera_get_farClipPlane(methodInfo + 80, this[5], 0);
  var d:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(d[29])) { f_ahje(d) }
  methodInfo[6]:int = methodInfo[22]:int;
  methodInfo[1]:long = methodInfo[9]:long;
  methodInfo[2]:long = methodInfo[10]:long;
  methodInfo[0]:long = methodInfo[8]:long;
  c = f_uuwd(c,
             methodInfo + 16,
             methodInfo,
             d_p444444444444044P44p44444444[31918]:int);
  UnityEngine_Object_set_name(c,
                              d_p444444444444044P44p44444444[30194]:int)[11]:int =
    1080033280;
  UnityEngine_Transform_get_parent(
    UnityEngine_GameObject_AddComponent(c, 0),
    System_Linq_Enumerable_Count(this, 0),
    0);
  g_a = methodInfo + 96;
}

function RangedSkills_EyeAttack(a:int, b:float, c:float, d:int) { // func86630
  if (eqz(6703460[0]:ubyte)) {
    f_hpa(5629620);
    6703460[0]:byte = 1;
  }
  d = f_icke(d_p444444444444044P44p44444444[18697]:int);
  d[6]:float = c;
  d[5]:float = b;
  d[4]:int = a;
  d[2]:int = 0;
  UnityEngine_MonoBehaviour_StartCoroutine_1(a, d, 0);
}

function RangedSkills_StartEyeLoop(a:int, b:float, c:float, d:int):int { // func86631
  var eyeLoopRate:float;
  var eyeLoopDuration:float;
  var this:int;
  if (eqz(6703460[0]:ubyte)) {
    f_hpa(5629620);
    6703460[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[18697]:int);
  methodInfo[6]:float = eyeLoopRate;
  methodInfo[5]:float = eyeLoopDuration;
  methodInfo[4]:int = this;
  methodInfo[2]:int = 0;
  return methodInfo;
}

function RangedSkills_EyeLoop(a:int_ptr, b:int) { // func86632
  var g:long;
  var c:int;
  b = g_a - 112;
  g_a = b;
  if (eqz(6703461[0]:ubyte)) {
    f_hpa(5641676);
    f_hpa(5641680);
    f_hpa(5641684);
    f_hpa(5652788);
    6703461[0]:byte = 1;
  }
  b[13]:long = 0L;
  b[12]:long = 0L;
  b[11]:long = 0L;
  f_xsg(b + 88,
        RangedSkills_OpenMouth(a, b),
        d_p444444444444044P44p44444444[24489]:int);
  b[16]:int = 0;
  b[17]:int = b + 88;
  var e:int = b + 100;
  a = 
    {
      loop L_k {
        6151988[0]:int = 0;
        var d:int_ptr = 
          env_invoke_iii(13926, b + 88, d_p444444444444044P44p44444444[21712]:int);
        c = 6151988[0]:int;
        6151988[0]:int = 0;
        if (c == 1) goto B_h;
        if (d) {
          d = b + 80;
          d[0] = e[2]:int;
          b[9]:long = e[0]:long@4;
          var f:int = a[6];
          c = a[5];
          6151988[0]:int = 0;
          env_invoke_viii(2279, b + 48, c, 0);
          c = 6151988[0]:int;
          6151988[0]:int = 0;
          if (c == 1) goto B_j;
          b[10]:int = (c = b[14]:int);
          b[6]:int = c;
          b[2]:int = d[0];
          b[4]:long = (g = b[6]:long);
          6151988[0]:int = 0;
          b[2]:long = g;
          b[0]:long = b[9]:long;
          env_invoke_viiiii(13927, b, f, b + 16, b, b);
          c = 6151988[0]:int;
          6151988[0]:int = 0;
          if (c == 1) goto B_i;
          continue L_k;
        }
      }
      d_p444444444444044P44p44444444[21711]:int;
      goto B_f;
      label B_j:
      env_cxa_find_matching_catch_3(4889068);
      goto B_g;
      label B_i:
      env_cxa_find_matching_catch_3(4889068);
      goto B_g;
      label B_h:
      env_cxa_find_matching_catch_3(4889068);
      label B_g:
    }
  if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_d;
  a = env_cxa_begin_catch(a)[0]:int;
  6151988[0]:int = 0;
  b[16]:int = a;
  env_invoke_v(58);
  c = 6151988[0]:int;
  6151988[0]:int = 0;
  if (c == 1) goto B_e;
  d_p444444444444044P44p44444444[21711]:int;
  if (a) goto B_c;
  label B_f:
  g_a = b + 112;
  return ;
  label B_e:
  a = env_cxa_find_matching_catch();
  env_getTempRet0();
  label B_d:
  6151988[0]:int = 0;
  env_invoke_ii(13928, b - -64);
  b = 6151988[0]:int;
  6151988[0]:int = 0;
  if (b != 1) goto B_b;
  env_cxa_find_matching_catch_3(0);
  env_getTempRet0();
  f_sx();
  unreachable;
  label B_c:
  System_Net_CommandStream_ReceiveCommandResponseCallback(a);
  unreachable;
  label B_b:
  env_resumeException(a);
  unreachable;
}

function RangedSkills_OpenMouth(a:int, b:int):int { // func86633
  var d:int;
  var this:int_ptr;
  var c:int;
  var e:int;
  var g:int_ptr;
  var f:int_ptr;
  var methodInfo:int = g_a - 48;
  g_a = methodInfo;
  if (eqz(6703462[0]:ubyte)) {
    f_hpa(5652776);
    f_hpa(5652768);
    f_hpa(5607904);
    f_hpa(5660024);
    6703462[0]:byte = 1;
  }
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 32,
    System_Linq_Enumerable_Count(
      (((if ((d = 
                ((if ((d = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
                      1) {
                    d
                  } else {
                    System_Threading_Monitor_Enter_1(d)
                  })[24]:int)[2]:int)[189]:ubyte &
             1) {
           d
         } else {
           System_Threading_Monitor_Enter_1(d)
         })[23]:int)[0]:int)[4]:int,
      0),
    0);
  var h:float = methodInfo[9]:float;
  var i:float = methodInfo[8]:float;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 32,
    System_Linq_Enumerable_Count(this, 0),
    0);
  var j:float = methodInfo[9]:float;
  var k:float = methodInfo[8]:float;
  d = f_icke(d_p444444444444044P44p44444444[13268]:int);
  multiple_System_Collections_Generic_List_1_cctor(
    d,
    d_p444444444444044P44p44444444[24484]:int);
  var l:float = h - j;
  h = abs(l);
  if (h < (i = abs(k = i - k))) {
    if ((this[9])[3]:int <= 0) goto B_d;
    loop L_f {
      UnityEngine_Camera_get_farClipPlane(
        methodInfo + 32,
        System_Linq_Enumerable_Count(
          (((if ((c = 
                    ((if ((c = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
                          1) {
                        c
                      } else {
                        System_Threading_Monitor_Enter_1(c)
                      })[24]:int)[2]:int)[189]:ubyte &
                 1) {
               c
             } else {
               System_Threading_Monitor_Enter_1(c)
             })[23]:int)[0]:int)[4]:int,
          0),
        0);
      h = methodInfo[9]:float;
      i = methodInfo[8]:float;
      j = (this[9])[e + 4]:float;
      f = d_p444444444444044P44p44444444[24486]:int;
      methodInfo[10]:int = 0;
      methodInfo[8]:float = k + i;
      methodInfo[9]:float = h + l + j;
      d[4]:int = d[4]:int + 1;
      c = d[3]:int;
      if (c < (g = d[2]:int)[3]) {
        d[3]:int = c + 1;
        c = g + c * 12;
        c[6]:int = methodInfo[10]:int;
        c[4]:long@4 = methodInfo[4]:long;
        goto B_i;
      }
      c = ((f[4])[24]:int)[14]:int;
      methodInfo[2]:int = methodInfo[10]:int;
      methodInfo[0]:long = methodInfo[4]:long;
      f_isg(d, methodInfo, c);
      label B_i:
      e = e + 1;
      if (e < (this[9])[3]:int) continue L_f;
    }
    goto B_d;
  }
  if (eqz(h > i)) goto B_d;
  if ((this[9])[3]:int <= 0) goto B_d;
  loop L_k {
    UnityEngine_Camera_get_farClipPlane(
      methodInfo + 32,
      System_Linq_Enumerable_Count(
        (((if ((c = 
                  ((if ((c = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
                        1) {
                      c
                    } else {
                      System_Threading_Monitor_Enter_1(c)
                    })[24]:int)[2]:int)[189]:ubyte &
               1) {
             c
           } else {
             System_Threading_Monitor_Enter_1(c)
           })[23]:int)[0]:int)[4]:int,
        0),
      0);
    h = methodInfo[8]:float;
    i = methodInfo[9]:float;
    j = (this[9])[e + 4]:float;
    f = d_p444444444444044P44p44444444[24486]:int;
    methodInfo[10]:int = 0;
    methodInfo[9]:float = l + i;
    methodInfo[8]:float = h + k + j;
    d[4]:int = d[4]:int + 1;
    c = d[3]:int;
    if (c < (g = d[2]:int)[3]) {
      d[3]:int = c + 1;
      c = g + c * 12;
      c[6]:int = methodInfo[10]:int;
      c[4]:long@4 = methodInfo[4]:long;
      goto B_n;
    }
    c = ((f[4])[24]:int)[14]:int;
    methodInfo[6]:int = methodInfo[10]:int;
    methodInfo[2]:long = methodInfo[4]:long;
    f_isg(d, methodInfo + 16, c);
    label B_n:
    e = e + 1;
    if (e < (this[9])[3]:int) continue L_k;
  }
  label B_d:
  g_a = methodInfo + 48;
  return d;
}

function RangedSkills_Shoot(a:{ a:int, b:int }):int { // func86634
  a.b;
  d_p444444444444044P44p44444444[21711]:int;
  var b:int = a.a;
  if (b) {
    System_Net_CommandStream_ReceiveCommandResponseCallback(b);
    unreachable;
  }
  return a;
}

function RangedSkills_GetTargetPositionList(a:int, b:float, c:float, d:int) { // func86635
  if (eqz(6703463[0]:ubyte)) {
    f_hpa(5629624);
    6703463[0]:byte = 1;
  }
  d = f_icke(d_p444444444444044P44p44444444[18698]:int);
  d[6]:float = b;
  d[4]:int = a;
  d[2]:int = 0;
  d[5]:float = c;
  UnityEngine_MonoBehaviour_StartCoroutine_1(a, d, 0);
}

function RangedSkills_StartMouthOpenLoopMouth(a:int, b:float, c:float, d:int):int { // func86636
  var mouthOpenLoopRate:float;
  var this:int;
  var mouthOpenLoopDuration:float;
  if (eqz(6703463[0]:ubyte)) {
    f_hpa(5629624);
    6703463[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[18698]:int);
  methodInfo[6]:float = mouthOpenLoopRate;
  methodInfo[4]:int = this;
  methodInfo[2]:int = 0;
  methodInfo[5]:float = mouthOpenLoopDuration;
  return methodInfo;
}

function RangedSkills_EyeLoop_d_11_System_IDisposable_Dispose(a:int, b:int):int { // func86637
  var this:int;
  var c:float;
  var d:int;
  if (eqz(6703464[0]:ubyte)) {
    f_hpa(5624116);
    6703464[0]:byte = 1;
  }
  if (this[2]:int >= 2) goto B_b;
  var methodInfo:int = this[4]:int;
  this[2]:int = -1;
  if (eqz(this[5]:float > 0.0f)) goto B_b;
  RangedSkills_BaseShoot(methodInfo, this);
  this[5]:float = this[5]:float - (c = this[6]:float);
  methodInfo = f_icke(d_p444444444444044P44p44444444[17321]:int);
  multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
    methodInfo,
    c,
    0);
  d = 1;
  this[2]:int = 1;
  this[3]:int = methodInfo;
  label B_b:
  return d;
}

function RangedSkills_EyeLoop_d_11_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86638
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5699708));
  unreachable;
}

function RangedSkills_MouthOpenLoop_d_16_System_IDisposable_Dispose(a:int, b:int):int { // func86639
  var this:int;
  var c:ubyte_ptr;
  var f:float;
  var methodInfo:{ a:long, b:int, c:long, d:int, e:long, f:int, g:long, h:int } = 
    g_a + -64;
  g_a = methodInfo;
  if (eqz(6703465[0]:ubyte)) {
    f_hpa(5660024);
    f_hpa(5624116);
    6703465[0]:byte = 1;
  }
  if (this[2]:int >= 2) goto B_b;
  var d:int_ptr = this[4]:int;
  this[2]:int = -1;
  if (this[5]:float > 0.0f) {
    var e:int = d[6];
    UnityEngine_Camera_get_farClipPlane(methodInfo + 48, d[5], 0);
    UnityEngine_Camera_get_farClipPlane(
      methodInfo + 32,
      System_Linq_Enumerable_Count(
        (((if ((c = 
                  ((if ((c = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189] & 1) {
                      c
                    } else {
                      System_Threading_Monitor_Enter_1(c)
                    })[24]:int)[2]:int)[189] &
               1) {
             c
           } else {
             System_Threading_Monitor_Enter_1(c)
           })[23]:int)[0]:int)[4]:int,
        0),
      0);
    methodInfo.d = methodInfo.h;
    methodInfo.b = methodInfo.f;
    methodInfo.c = methodInfo.g;
    methodInfo.a = methodInfo.e;
    f_ucxd(this, e, methodInfo + 16, methodInfo, this);
    this[5]:float = this[5]:float - (f = this[6]:float);
    d = f_icke(d_p444444444444044P44p44444444[17321]:int);
    multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
      d,
      f,
      0);
    c = 1;
    this[2]:int = 1;
    this[3]:int = d;
    goto B_b;
  }
  this[5]:int = 1084227584;
  label B_b:
  g_a = methodInfo - -64;
  return c;
}

function RangedSkills_MouthOpenLoop_d_16_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86640
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5699712));
  unreachable;
}

function RangedSkills_MouthOpenLoop_d_16_System_Collections_IEnumerator_get_Current(a:int, b:int) { // func86641
  var this:int_ptr;
  if (eqz(6703466[0]:ubyte)) {
    f_hpa(5668552);
    6703466[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28430]:int);
}

