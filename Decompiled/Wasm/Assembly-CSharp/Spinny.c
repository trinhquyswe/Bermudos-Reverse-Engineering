// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Spinny  (Assembly-CSharp)

function Spinny_OnAwake(a:int, b:int) { // func87006
  var this:int;
  var c:int = g_a - 48;
  g_a = c;
  if (eqz(6703826[0]:ubyte)) {
    f_hpa(5668408);
    f_hpa(5619608);
    f_hpa(5621280);
    f_hpa(5660012);
    f_hpa(5660024);
    6703826[0]:byte = 1;
  }
  UnityEngine_Rigidbody2D_get_drag(this[16]:int, 0.0f, 0);
  var d:int = this[21]:int;
  var methodInfo:int = 
    (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
                 (((if (methodInfo[189]:ubyte & 1) {
                      methodInfo
                    } else {
                      System_Threading_Monitor_Enter_1(methodInfo)
                    })[23]:int)[0]:int)[4]:int,
                 d_p444444444444044P44p44444444[28394]:int);
  var e:int_ptr = d_p444444444444044P44p44444444[16194]:int;
  if (eqz(e[29])) { f_ahje(e) }
  UnityEngine_Physics2D_get_queriesHitTriggers(d, methodInfo, 0);
  methodInfo = UnityEngine_GameObject_AddComponent(this[2]:int, 0);
  c[10]:int = 1069547520;
  c[2]:int = 1069547520;
  c[4]:long = 4593671620987453440L;
  c[0]:long = 4593671620987453440L;
  multiple_UnityEngine_Transform_get_localScale(methodInfo, c, 0);
  (this[15]:int)[36]:byte = 0;
  this[76]:byte = 0;
  multiple_UnityEngine_Animator_SetTrigger(
    this[11]:int,
    ((if ((methodInfo = d_p444444444444044P44p44444444[16612]:int)[29]:int) {
        methodInfo
      } else {
        f_ahje(methodInfo);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[38]:int,
    0);
  UnityEngine_Camera_get_farClipPlane(
    c + 16,
    System_Linq_Enumerable_Count(
      (((if ((methodInfo = 
                ((if ((methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
                      1) {
                    methodInfo
                  } else {
                    System_Threading_Monitor_Enter_1(methodInfo)
                  })[24]:int)[2]:int)[189]:ubyte &
             1) {
           methodInfo
         } else {
           System_Threading_Monitor_Enter_1(methodInfo)
         })[23]:int)[0]:int)[4]:int,
      0),
    0);
  var h:float = c[4]:float;
  var f:float = c[5]:float;
  var g:float = c[6]:float;
  UnityEngine_Camera_get_farClipPlane(c + 16, this[3]:int, 0);
  var i:float = c[6]:float;
  var j:float = c[5]:float;
  var k:float = c[4]:float;
  if (eqz(6703148[0]:ubyte)) {
    f_hpa(5618360);
    6703148[0]:byte = 1;
  }
  g = g - i;
  f = f - j;
  h = h - k;
  methodInfo = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(methodInfo[29]:int)) { f_ahje(methodInfo) }
  this[12]:long@4 =
    i64_extend_i32_u(
      i32_reinterpret_f32(
        {
          if ((g = sqrt(h * h + f * f + g * g)) > 0.00001f) {
            f = f / g;
            h / g;
            goto B_j;
          }
          if (eqz(6703145[0]:ubyte)) {
            f_hpa(5623880);
            6703145[0]:byte = 1;
          }
          f = 
            (methodInfo = (d_p444444444444044P44p44444444[17262]:int)[23]:int)[1]:float;
          methodInfo[0]:float;
          label B_j:
        })) |
    i64_extend_i32_u(i32_reinterpret_f32(f)) << 32L;
  (this[15]:int)[5]:int = this[18]:int;
  methodInfo = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  GameResources_get_Instance(
    ((if (methodInfo[189]:ubyte & 1) {
        methodInfo
      } else {
        System_Threading_Monitor_Enter_1(methodInfo)
      })[23]:int)[0]:int,
    this[22]:int,
    1,
    0);
  this[23]:int = 1084227584;
  g_a = c + 48;
}

function Spinny_OnStart(a:int, b:int) { // func87007
  var this:int;
  var e:float;
  var c:long;
  var methodInfo:{ a:long, b:long } = g_a - 16;
  g_a = methodInfo;
  var d:int = this[16]:int;
  methodInfo.a =
    (c = 
       i64_extend_i32_u(
         i32_reinterpret_f32(
           (e = this[17]:float) *
           f32_reinterpret_i32(i32_wrap_i64((c = this[12]:long@4) >> 32L)))) <<
       32L |
       i64_extend_i32_u(
         i32_reinterpret_f32(e * f32_reinterpret_i32(i32_wrap_i64(c)))));
  methodInfo.b = c;
  UnityEngine_Rigidbody2D_get_velocity_Injected(d, methodInfo, 0);
  g_a = methodInfo + 16;
}

function Spinny_OnFixedUpdate(a:int, b:int):int { // func87008
  var this:int;
  var methodInfo:int = 2;
  if (this[76]:ubyte) goto B_a;
  var c:float = this[23]:float;
  if (c < 0.0f) goto B_a;
  this[23]:float = c - UnityEngine_Time_get_time(0);
  methodInfo = 3;
  label B_a:
  return methodInfo;
}

function Spinny_OnUpdate(a:int, b:int) { // func87009
  var this:int_ptr;
  Weapon_Start(this[14], 0);
}

function Spinny_OnLateUpdate(a:byte_ptr, b:int, c:int) { // func87010
  if (eqz(6703827[0]:ubyte)) {
    f_hpa(5715116);
    6703827[0]:byte = 1;
  }
  if (UnityEngine_Camera_get_cullingMask(
        UnityEngine_Collision2D_get_rigidbody(b, 0),
        0) ==
      UnityEngine_LayerMask_LayerToName(
        d_p444444444444044P44p44444444[40071]:int,
        0)) {
    a[76] = 1
  }
}

function Spinny_OnCollisionEnter2D(a:int_ptr, b:ubyte_ptr) { // func87011
  var f:long;
  var c:{ a:long, b:int, c:long, d:long, e:int, f:long } = g_a - 48;
  g_a = c;
  if (eqz(6703828[0]:ubyte)) {
    f_hpa(5668408);
    f_hpa(5619608);
    f_hpa(5660012);
    f_hpa(5660024);
    6703828[0]:byte = 1;
  }
  b = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  b = 
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  SoundEffectManager_PlaySoundEffect(
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int,
    a[22],
    0);
  UnityEngine_Rigidbody2D_get_drag(a[16], 100000.0f, 0);
  var d:int = a[21];
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  b = 
    UnityEngine_GameObject_get_activeInHierarchy(
      (((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int)[4]:int,
      d_p444444444444044P44p44444444[28394]:int);
  var e:int_ptr = d_p444444444444044P44p44444444[16194]:int;
  if (eqz(e[29])) { f_ahje(e) }
  UnityEngine_Physics2D_IgnoreCollision(d, b, 0, 0);
  b = a[16];
  if (eqz(6703146[0]:ubyte)) {
    f_hpa(5623844);
    6703146[0]:byte = 1;
  }
  c.f =
    (f = ((d_p444444444444044P44p44444444[17253]:int)[23]:int)[0]:long@4);
  c.c = f;
  UnityEngine_Rigidbody2D_get_velocity_Injected(b, c + 16, 0);
  (a[15])[36]:byte = 1;
  a = UnityEngine_GameObject_AddComponent(a[2], 0);
  c.e = 1077936128;
  c.b = 1077936128;
  c.d = 4629700418014806016L;
  c.a = 4629700418014806016L;
  multiple_UnityEngine_Transform_get_localScale(a, c, 0);
  g_a = c + 48;
}

function Spinny_OnEnd(a:int, b:int) { // func87012
  var this:int;
  this[23]:int = 1084227584;
  this[17]:long@4 = 44033900544L;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool_cctor(this, 0);
}

function Spinny_ctor(a:int, b:int) { // func87013
  var this:int_ptr;
  if (eqz(6703829[0]:ubyte)) {
    f_hpa(5668376);
    f_hpa(5668604);
    f_hpa(5668632);
    6703829[0]:byte = 1;
  }
  this[8] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28450]:int);
  this[16] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28386]:int);
  this[17] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28443]:int);
}

