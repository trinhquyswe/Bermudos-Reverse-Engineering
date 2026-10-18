// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: MeleeSkills  (Assembly-CSharp)

function MeleeSkills_Awake(a:int, b:int) { // func86616
  var this:int;
  this[76]:byte = 0;
  UnityEngine_ContactFilter2D_CheckConsistency(this + 36, this[7]:int, 0);
  this[18]:short = 257;
}

function MeleeSkills_Start(a:int, b:int, c:{ a:long, b:long, c:long, d:long, e:int, f:long, g:long, h:long }) { // func86617
  var i:int;
  var k:long;
  c = g_a - 80;
  g_a = c;
  if (eqz(6703451[0]:ubyte)) {
    f_hpa(5609960);
    f_hpa(5668596);
    f_hpa(5668612);
    f_hpa(5668840);
    f_hpa(5619244);
    f_hpa(5619608);
    f_hpa(5660012);
    6703451[0]:byte = 1;
  }
  Weapon_Start(a[5]:int, 0);
  var d:int = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
  d = 
    ((if (d[189]:ubyte & 1) { d } else { System_Threading_Monitor_Enter_1(d) })[24]:int)[2]:int;
  if (eqz(d[189]:ubyte & 1)) { d = System_Threading_Monitor_Enter_1(d) }
  SoundEffectManager_Start((d[23]:int)[0]:int, a[18]:int, d);
  var h:int = Mono_Security_ASN1Convert_ToOid(
                d_p444444444444044P44p44444444[13782]:int,
                1);
  d = (a[5]:int)[5]:int;
  var f:int_ptr = c + 72;
  f[0] = a[15]:int;
  var e:int = c - -64;
  e[0]:long = a[13]:long@4;
  c.h = a[11]:long@4;
  c.g = a[9]:long@4;
  var g:int_ptr = d_p444444444444044P44p44444444[16194]:int;
  if (eqz(g[29])) { f_ahje(g) }
  c.e = f[0];
  c.d = e[0]:long;
  c.c = c.h;
  c.b = c.g;
  var j:int = f_ndx(d, c + 8, h, 0);
  if (j > 0) {
    f = 0;
    g = 0;
    loop L_f {
      d = h[f + 4]:int;
      e = d_p444444444444044P44p44444444[16103]:int;
      if (eqz(e[29]:int)) { f_ahje(e) }
      if (eqz(UnityEngine_Camera_get_targetTexture(d, 0, 0))) goto B_h;
      e = UnityEngine_GameObject_get_activeInHierarchy(
            d,
            d_p444444444444044P44p44444444[28445]:int);
      g = select_if(e, g, e);
      if (e) { ReceiveDamage_Awake(g, b, 0) }
      e = UnityEngine_GameObject_get_activeInHierarchy(
            d,
            d_p444444444444044P44p44444444[28441]:int);
      i = select_if(e, i, e);
      if (e) {
        UnityEngine_Camera_get_farClipPlane(
          c + 48,
          System_Linq_Enumerable_Count(a, 0),
          0);
        c.f = (k = c.g);
        c.a = k;
        PlayerEffect_DamageFlashCoroutine(i, c, 0);
      }
      e = UnityEngine_GameObject_get_activeInHierarchy(
            d,
            d_p444444444444044P44p44444444[28441]:int);
      if (eqz(e)) goto B_h;
      PlayerEffect_Update(
        e,
        UnityEngine_MonoBehaviour_InvokeRepeating(0)[6]:int,
        UnityEngine_MonoBehaviour_InvokeRepeating(0)[7]:int,
        f_rrrc(d, d_p444444444444044P44p44444444[28502]:int),
        0);
      label B_h:
      f = f + 1;
      if (f != j) continue L_f;
    }
  }
  g_a = c + 80;
}

function MeleeSkills_DealDamage(a:int, b:int, c:int) { // func86618
  var this:int_ptr;
  var damage:int;
  var methodInfo:int_ptr = this[16];
  if (methodInfo) { UnityEngine_MonoBehaviour_StopCoroutine(this, methodInfo, 0) }
  if (eqz(6703452[0]:ubyte)) {
    f_hpa(5628728);
    6703452[0]:byte = 1;
  }
  methodInfo = f_icke(d_p444444444444044P44p44444444[18474]:int);
  methodInfo[5] = damage;
  methodInfo[4] = this;
  methodInfo[2] = 0;
  this[16] =
    UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
}

function MeleeSkills_ActiveSkill(a:int_ptr, b:int) { // func86619
  b = a[16];
  if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
}

function MeleeSkills_PlayActiveSkill(a:int, b:int, c:int):int { // func86620
  var skill:int;
  var this:int;
  if (eqz(6703452[0]:ubyte)) {
    f_hpa(5628728);
    6703452[0]:byte = 1;
  }
  var methodInfo:int_ptr = 
    f_icke(d_p444444444444044P44p44444444[18474]:int);
  methodInfo[5] = skill;
  methodInfo[4] = this;
  methodInfo[2] = 0;
  return methodInfo;
}

function MeleeSkills_StopActiveSkillRoutine(a:int, b:int, c:int) { // func86621
  if (eqz(6703453[0]:ubyte)) {
    f_hpa(5728548);
    6703453[0]:byte = 1;
  }
  if (UnityEngine_Camera_get_cullingMask(
        UnityEngine_Collision2D_get_rigidbody(b, 0),
        0) !=
      UnityEngine_LayerMask_LayerToName(
        d_p444444444444044P44p44444444[43429]:int,
        0)) {
    b = a[16]:int;
    if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
    a[76]:byte = 1;
  }
}

function MeleeSkills_OnCollisionEnter2D(a:int_ptr, b:int) { // func86622
  if (eqz(6703454[0]:ubyte)) {
    f_hpa(5624112);
    6703454[0]:byte = 1;
  }
  a[6] = 1073741824;
  a[17] = f_icke(d_p444444444444044P44p44444444[17320]:int);
  multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
}

function MeleeSkills_ActiveSkill_d_18_System_IDisposable_Dispose(a:int, b:int):int { // func86623
  var this:int;
  var i:float;
  var k:float;
  var h:float;
  var j:float;
  var c:int = g_a - 48;
  g_a = c;
  var methodInfo:int = 0;
  if (eqz(6703455[0]:ubyte)) {
    f_hpa(5621280);
    f_hpa(5660024);
    6703455[0]:byte = 1;
  }
  var d:int = this[4]:int;
  br_table[B_e, B_d, ..B_b](this[2]:int)
  label B_e:
  this[2]:int = -1;
  UnityEngine_Camera_get_farClipPlane(
    c + 32,
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
  this[6]:long@4 = c[4]:long;
  methodInfo = this + 32;
  methodInfo[0]:int = c[10]:int;
  i = this[7]:float;
  h = methodInfo[0]:float;
  j = this[6]:float;
  UnityEngine_Camera_get_farClipPlane(
    c + 16,
    System_Linq_Enumerable_Count(d, 0),
    0);
  k = c[6]:float;
  var l:float = c[5]:float;
  var m:float = c[4]:float;
  if (eqz(6703148[0]:ubyte)) {
    f_hpa(5618360);
    6703148[0]:byte = 1;
  }
  h = h - k;
  i = i - l;
  j = j - m;
  methodInfo = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(methodInfo[29]:int)) { f_ahje(methodInfo) }
  i = 
    {
      k = sqrt(j * j + i * i + h * h);
      if (k > 0.00001f) {
        h = h / k;
        j = j / k;
        i / k;
        goto B_j;
      }
      if (eqz(6703145[0]:ubyte)) {
        f_hpa(5623880);
        6703145[0]:byte = 1;
      }
      methodInfo = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
      h = methodInfo[2]:float;
      j = methodInfo[0]:float;
      methodInfo[1]:float;
      label B_j:
    }
  this[9]:float = j;
  this[11]:float = h;
  this[10]:float = i;
  multiple_UnityEngine_Animator_SetTrigger(
    (d[4]:int)[9]:int,
    ((if ((methodInfo = d_p444444444444044P44p44444444[16612]:int)[29]:int) {
        methodInfo
      } else {
        f_ahje(methodInfo);
        d_p444444444444044P44p44444444[16612]:int;
      })[23]:int)[34]:int,
    0);
  goto B_c;
  label B_d:
  this[2]:int = -1;
  label B_c:
  h = this[7]:float;
  i = this[6]:float;
  UnityEngine_Camera_get_farClipPlane(
    c + 32,
    System_Linq_Enumerable_Count(d, 0),
    0);
  j = c[9]:float;
  k = c[8]:float;
  if (eqz(6665195[0]:ubyte)) {
    f_hpa(5618360);
    6665195[0]:byte = 1;
  }
  methodInfo = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(methodInfo[29]:int)) { f_ahje(methodInfo) }
  if (d[6]:float < sqrt((i = i - k) * i + (h = h - j) * h)) {
    if (d[23]:int < 3) goto B_p
  }
  methodInfo = 0;
  d[23]:int = 0;
  multiple_UnityEngine_Animator_SetTrigger((d[4]:int)[9]:int,
                                           this[5]:int,
                                           0);
  d[76]:byte = 1;
  goto B_b;
  label B_p:
  h = this[7]:float;
  i = this[6]:float;
  UnityEngine_Camera_get_farClipPlane(
    c + 32,
    System_Linq_Enumerable_Count(d, 0),
    0);
  j = c[9]:float;
  k = c[8]:float;
  if (eqz(6665195[0]:ubyte)) {
    f_hpa(5618360);
    6665195[0]:byte = 1;
  }
  methodInfo = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(methodInfo[29]:int)) { f_ahje(methodInfo) }
  if (d[22]:float == sqrt((i = i - k) * i + (h = h - j) * h)) {
    d[23]:int = d[23]:int + 1
  }
  h = this[7]:float;
  i = this[6]:float;
  UnityEngine_Camera_get_farClipPlane(
    c + 32,
    System_Linq_Enumerable_Count(d, 0),
    0);
  j = c[9]:float;
  k = c[8]:float;
  if (eqz(6665195[0]:ubyte)) {
    f_hpa(5618360);
    6665195[0]:byte = 1;
  }
  methodInfo = this + 24;
  var e:int_ptr = d_p444444444444044P44p44444444[15882]:int;
  if (eqz(e[29])) { f_ahje(e) }
  d[22]:float = sqrt((i = i - k) * i + (h = h - j) * h);
  var f:int_ptr = d[8]:int;
  c[2]:int = methodInfo[2]:int;
  c[0]:long = methodInfo[0]:long@4;
  UnityEngine_Camera_get_farClipPlane(
    c + 16,
    System_Linq_Enumerable_Count(d, 0),
    0);
  var n:long = this[9]:long@4;
  h = d[20]:float;
  c[10]:int = c[6]:int;
  c[4]:long = c[2]:long;
  if (eqz(6703408[0]:ubyte)) {
    f_hpa(5618816);
    6703408[0]:byte = 1;
  }
  e = f[4];
  if (e) {
    methodInfo = f_icke(d_p444444444444044P44p44444444[15996]:int);
    if (eqz(6703409[0]:ubyte)) {
      f_hpa(5614872);
      6703409[0]:byte = 1;
    }
    var g:int_ptr = d_p444444444444044P44p44444444[15010]:int;
    if (eqz(g[29])) { f_ahje(g) }
    methodInfo[4]:int = c[2]:int;
    methodInfo[2]:long@4 = c[0]:long;
    methodInfo[5]:long@4 = c[4]:long;
    methodInfo[7]:int = c[10]:int;
    methodInfo[44]:byte = 1;
    methodInfo[9]:long@4 = n;
    methodInfo[8]:float = h;
    call_indirect(e[8], f, methodInfo, e[5], e[3]);
  }
  d = d[17]:int;
  methodInfo = 1;
  this[2]:int = 1;
  this[3]:int = d;
  label B_b:
  g_a = c + 48;
  return methodInfo;
}

function MeleeSkills_ActiveSkill_d_18_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int) { // func86624
  var this:int = f_icke(f_jlje(5619160));
  f_uzsd(this, 0);
  f_rpa(this, f_jlje(5698956));
  unreachable;
}

function MeleeSkills_ActiveSkill_d_18_System_Collections_IEnumerator_get_Current(a:int, b:int) { // func86625
  var this:int_ptr;
  if (eqz(6703456[0]:ubyte)) {
    f_hpa(5668376);
    6703456[0]:byte = 1;
  }
  this[4] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28386]:int);
}

