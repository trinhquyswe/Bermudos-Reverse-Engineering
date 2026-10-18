// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Item  (Assembly-CSharp)

function Item_OnTriggerEnter2D(a:int, b:int) { // func86387
  var c:int;
  b = g_a - 48;
  g_a = b;
  if (eqz(6703313[0]:ubyte)) {
    f_hpa(5679040);
    f_hpa(5660024);
    f_hpa(5623156);
    f_hpa(5690184);
    6703313[0]:byte = 1;
  }
  UnityEngine_Camera_get_farClipPlane(
    b + 32,
    System_Linq_Enumerable_Count(a, 0),
    0);
  var f:float = b[10]:float;
  var h:float = b[9]:float;
  var g:float = b[8]:float;
  UnityEngine_Camera_get_farClipPlane(
    b + 32,
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
  var i:float = b[10]:float;
  var j:float = b[9]:float;
  var k:float = b[8]:float;
  if (eqz(6703148[0]:ubyte)) {
    f_hpa(5618360);
    6703148[0]:byte = 1;
  }
  f = f - i;
  h = h - j;
  g = g - k;
  c = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(c[29]:int)) { f_ahje(c) }
  h = {
        i = sqrt(g * g + h * h + f * f);
        if (i > 0.00001f) {
          f = f / i;
          g = g / i;
          h / i;
          goto B_f;
        }
        if (eqz(6703145[0]:ubyte)) {
          f_hpa(5623880);
          6703145[0]:byte = 1;
        }
        c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
        f = c[2]:float;
        g = c[0]:float;
        c[1]:float;
        label B_f:
      }
  UnityEngine_Camera_get_farClipPlane(
    b + 32,
    System_Linq_Enumerable_Count(a, 0),
    0);
  i = b[10]:float;
  j = b[8]:float;
  k = b[9]:float;
  c = System_Linq_Enumerable_Count(a, 0);
  var l:float = a[7]:float;
  var d:int = a[8]:int;
  var m:float = a[9]:float;
  var e:int = b + 24;
  e[0]:float = i + f + f;
  b[2]:int = e[0]:int;
  b[5]:float = k + h + h;
  b[4]:float = j + g + g;
  b[0]:long = b[2]:long;
  c = 
    DG_Tweening_ShortcutExtensions_DOShakeScale_1(c, b, m, d, l, 0, 0);
  d = f_icke(d_p444444444444044P44p44444444[17081]:int);
  DG_Tweening_Color2_op_Multiply(
    d,
    a,
    d_p444444444444044P44p44444444[31052]:int,
    0);
  DG_Tweening_TweenSettingsExtensions_From_6(
    c,
    d,
    d_p444444444444044P44p44444444[33838]:int);
  g_a = b + 48;
}

function Item_Start(a:int, b:int) { // func86388
  var this:float_ptr;
  if (eqz(6703310[0]:ubyte)) {
    f_hpa(5619244);
    6703310[0]:byte = 1;
  }
  var c:float = this[4];
  if (c <= 0.0f) {
    this = f_canb(this, 0);
    var methodInfo:int_ptr = d_p444444444444044P44p44444444[16103]:int;
    if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
    f_kfnb(this, 0);
    return ;
  }
  this[4] = c - UnityEngine_Time_get_time(0);
}

function Item_Update(a:int, b:int) { // func86389
  var this:int;
  if (eqz(6703311[0]:ubyte)) {
    f_hpa(5613524);
    f_hpa(5619244);
    6703311[0]:byte = 1;
  }
  this = f_canb(this, 0);
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
  this = f_venb(this, 0);
  methodInfo = d_p444444444444044P44p44444444[14673]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
  DG_Tweening_DOTween_Goto(this, 0);
}

function Item_OnDestroy(a:int, b:int, c:int) { // func86390
  if (eqz(6703312[0]:ubyte)) {
    f_hpa(5668532);
    f_hpa(5619244);
    f_hpa(5660012);
    6703312[0]:byte = 1;
  }
  if (
    ((a + 20)[0]:int &
     1 << UnityEngine_Camera_get_cullingMask(f_canb(b, 0), 0)) <=
    0) goto B_b;
  if (eqz(a[52]:ubyte)) goto B_b;
  c = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  c = 
    ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
  SoundEffectManager_Start(
    ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int,
    a[14]:int,
    a);
  b = UnityEngine_GameObject_get_activeInHierarchy(
        b,
        d_p444444444444044P44p44444444[28425]:int);
  if (b) { InventoryManager_SetInventorySlot(b, a[6]:int, a) }
  b = f_canb(a, 0);
  c = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(c[29]:int)) { f_ahje(c) }
  f_kfnb(b, 0);
  a[52]:byte = 0;
  label B_b:
}

function Item_DropItemEffect(a:int, b:int) { // func86393
  var this:int;
  this[52]:byte = 1;
  this[11]:long@4 = 13941866496L;
  this[9]:long@4 = 4533863819134369792L;
  this[7]:long@4 = 9646899200L;
  this[4]:int = 1092616192;
  multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
}

function Item_ctor(a:int, b:int) { // func86394
  var this:int;
  var methodInfo:int = g_a - 32;
  g_a = methodInfo;
  if (eqz(6703314[0]:ubyte)) {
    f_hpa(5690252);
    6703314[0]:byte = 1;
  }
  var c:int = System_Linq_Enumerable_Count(this, 0);
  var d:int = this[12]:int;
  var e:float = this[10]:float;
  var f:float = this[11]:float;
  this = methodInfo + 24;
  this[0]:int = 0;
  methodInfo[2]:int = this[0]:int;
  methodInfo[5]:float = f;
  methodInfo[4]:int = 0;
  methodInfo[0]:long = methodInfo[2]:long;
  DG_Tweening_TweenSettingsExtensions_SetLink_1(
    DG_Tweening_ShortcutExtensions_DOShakePosition_2(c,
                                                     e,
                                                     methodInfo,
                                                     d,
                                                     0.0f,
                                                     0,
                                                     1,
                                                     0,
                                                     0),
    -1,
    d_p444444444444044P44p44444444[33855]:int);
  g_a = methodInfo + 32;
}

function Item_DropItemEffect_b_15_0(a:int, b:int) { // func86395
  var this:int_ptr;
  if (eqz(6703315[0]:ubyte)) {
    f_hpa(5668716);
    f_hpa(5668504);
    f_hpa(5668532);
    f_hpa(5668608);
    6703315[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28425]:int);
  this[5] = f_irrc(this, d_p444444444444044P44p44444444[28471]:int);
  this[6] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28418]:int);
  this[7] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28444]:int);
}

