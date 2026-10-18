// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: AnimateBoss  (Assembly-CSharp)

function AnimateBoss_Awake(a:int, b:int) { // func86852
  var c:int;
  var this:int;
  var methodInfo:int = g_a - 48;
  g_a = methodInfo;
  if (eqz(6703727[0]:ubyte)) {
    f_hpa(5660024);
    6703727[0]:byte = 1;
  }
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
  var d:float = methodInfo[8]:float;
  var e:float = methodInfo[9]:float;
  var f:float = methodInfo[10]:float;
  UnityEngine_Camera_get_farClipPlane(
    methodInfo + 32,
    System_Linq_Enumerable_Count(this, 0),
    0);
  c = methodInfo + 24;
  c[0]:float = f - methodInfo[10]:float;
  methodInfo[2]:int = c[0]:int;
  methodInfo[5]:float = e - methodInfo[9]:float;
  methodInfo[4]:float = d - methodInfo[8]:float;
  methodInfo[0]:long = methodInfo[2]:long;
  AnimateBoss_InitializeAimDirection(this, methodInfo, methodInfo);
  g_a = methodInfo + 48;
}

function AnimateBoss_InitializeAimDirection(a:int_ptr, b:int, c:{ a:long, b:int }):int { // func86853
  var d:float;
  var e:int;
  var f:int;
  c = g_a - 16;
  g_a = c;
  if (eqz(6703729[0]:ubyte)) {
    f_hpa(5621280);
    6703729[0]:byte = 1;
  }
  c.b = b[2]:int;
  c.a = b[0]:long@4;
  d = f_wkwd(c, 0);
  if (eqz(d > 45.0f)) goto B_e;
  if (eqz(d <= 135.0f)) goto B_e;
  AnimateBoss_Update(a, c);
  a = (a[4])[9]:int;
  e = 16;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29]:int)) goto B_d;
  goto B_c;
  label B_e:
  if (eqz(d <= 180.0f & d > 135.0f)) {
    if (eqz(d > -180.0f)) goto B_f;
    if (eqz(d <= -155.0f)) goto B_f;
  }
  AnimateBoss_Update(a, c);
  a = (a[4])[9]:int;
  f = 4;
  e = 40;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29]:int)) goto B_d;
  goto B_c;
  label B_f:
  if (eqz(d > -155.0f)) goto B_h;
  if (eqz(d <= -45.0f)) goto B_h;
  AnimateBoss_Update(a, c);
  a = (a[4])[9]:int;
  f = 5;
  e = 24;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (eqz(b[29]:int)) goto B_d;
  goto B_c;
  label B_h:
  f = 8;
  if (eqz(d > -45.0f)) goto B_b;
  if (eqz(d <= 45.0f)) goto B_b;
  AnimateBoss_Update(a, c);
  a = (a[4])[9]:int;
  f = 3;
  e = 36;
  b = d_p444444444444044P44p44444444[16612]:int;
  if (b[29]:int) goto B_c;
  label B_d:
  f_ahje(b);
  b = d_p444444444444044P44p44444444[16612]:int;
  label B_c:
  multiple_UnityEngine_Animator_SetTrigger(a, (b[23]:int + e)[0]:int, 0);
  label B_b:
  g_a = c + 16;
  return f;
}

function AnimateBoss_Update(a:int, b:int) { // func86854
  var this:int_ptr;
  var methodInfo:int_ptr;
  if (eqz(6703728[0]:ubyte)) {
    f_hpa(5621280);
    6703728[0]:byte = 1;
  }
  multiple_UnityEngine_Animator_GetBool_1(
    (this[4])[9]:int,
    ((if ((methodInfo = d_p444444444444044P44p44444444[16612]:int)[29]) {
        methodInfo
      } else {
        f_ahje(methodInfo);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[4]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (this[4])[9]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[6]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (this[4])[9]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[10]:int,
    0,
    0);
  multiple_UnityEngine_Animator_GetBool_1(
    (this[4])[9]:int,
    ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[9]:int,
    0,
    0);
}

function AnimateBoss_ctor(a:int, b:int) { // func86855
  var this:int_ptr;
  if (eqz(6703730[0]:ubyte)) {
    f_hpa(5668472);
    6703730[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28410]:int);
}

