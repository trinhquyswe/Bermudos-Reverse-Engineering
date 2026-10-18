// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: UnitySourceGeneratedAssemblyMonoScriptTypes_v1  (Assembly-CSharp)

function UnitySourceGeneratedAssemblyMonoScriptTypes_v1_ctor(a:int_ptr, b:int, c:int) { // func23273
  if (eqz(6670334[0]:ubyte)) {
    f_hpa(5635348);
    f_hpa(5635360);
    f_hpa(5646024);
    6670334[0]:byte = 1;
  }
  if (eqz(f_nxn(a[3], b, d_p444444444444044P44p44444444[20129]:int))) {
    f_micd(
      a[3],
      b,
      System_WeakReference_ctor(a[2],
                                b,
                                d_p444444444444044P44p44444444[22798]:int),
      d_p444444444444044P44p44444444[20132]:int)
  }
}

function UnitySourceGeneratedAssemblyMonoScriptTypes_v1_ctor_1(a:int_ptr, b:int, c:int, d:int, e:int):int { // func25056
  e = 0;
  var f:int = b - 1;
  if (f >= (b = a[2]) - 3) goto B_a;
  var g:int = b - 1;
  loop L_b {
    b = System_String_Contains_1(a, 60, f = f + 1, 0);
    if (b == -1) goto B_a;
    if (b == g) goto B_a;
    var h:int = System_String_Contains_1(a, 62, b + 1, 0);
    if (h == -1) goto B_a;
    if (
      eqz(
        TMPEffects_TextProcessing_ParsingUtility_GetNextTag(a, b, h, c, d, b))) continue L_b;
  }
  e = 1;
  label B_a:
  return e;
}

function UnitySourceGeneratedAssemblyMonoScriptTypes_v1_ctor_2(a:int, b:int):int { // func42597
  return 60
}

function UnitySourceGeneratedAssemblyMonoScriptTypes_v1_ctor_3(a:int, b:int):int { // func60681
  var this:{ a:float, b:float }
  if (eqz(6692639[0]:ubyte)) {
    f_hpa(5610656);
    6692639[0]:byte = 1;
  }
  var methodInfo:float_ptr = 
    Mono_Security_ASN1Convert_ToOid(
      d_p444444444444044P44p44444444[13956]:int,
      2);
  methodInfo[4] = this.a;
  methodInfo[5] = this.b;
  return methodInfo;
}

function UnitySourceGeneratedAssemblyMonoScriptTypes_v1_ctor_4(a:int, b:float, c:float, d:int_ptr):int { // func63186
  if (eqz(6693382[0]:ubyte)) {
    f_hpa(5602744);
    f_hpa(5602784);
    f_hpa(5613524);
    f_hpa(5690296);
    f_hpa(5696648);
    f_hpa(5696652);
    f_hpa(5626440);
    6693382[0]:byte = 1;
  }
  d = f_icke(d_p444444444444044P44p44444444[17902]:int);
  d[2] = a;
  b = {
        0.0f;
        if (b < 0.0f) goto B_b;
        b;
        if (eqz(b > 1.0f)) goto B_b;
        1.0f;
        label B_b:
      }
  a = f_icke(d_p444444444444044P44p44444444[11978]:int);
  f_gqkd(a, d, d_p444444444444044P44p44444444[35454]:int, 0);
  var e:int = f_icke(d_p444444444444044P44p44444444[11988]:int);
  f_drkd(e, d, d_p444444444444044P44p44444444[35455]:int, 0);
  var f:int_ptr = d_p444444444444044P44p44444444[14673]:int;
  if (eqz(f[29])) { f_ahje(f) }
  a = DG_Tweening_DOTween_ManualUpdate(a, e, b, c, 0);
  DG_Tweening_TweenSettingsExtensions_SetSpeedBased_1(
    a,
    d[2],
    d_p444444444444044P44p44444444[33866]:int);
  return a;
}

function UnitySourceGeneratedAssemblyMonoScriptTypes_v1_ctor_5(a:int, b:int) { // func86061
  var c:int;
  if (multiple_UnityEngine_Input_GetKeyUpInt(113, 0)) {
    AllIn1SpriteShader_All1DemoChangeScene_Update(c, c)
  }
}

function UnitySourceGeneratedAssemblyMonoScriptTypes_v1_ctor_6(a:int, b:int_ptr, c:int_ptr, d:int, e:int_ptr):int { // func86182
  a = g_a - 16;
  g_a = a;
  a[7]:short = d;
  e = 0;
  if (eqz(6703177[0]:ubyte)) {
    f_hpa(5612740);
    6703177[0]:byte = 1;
  }
  if ((d - 58 & 65535) >= 65526) {
    d = b[0];
    e = d_p444444444444044P44p44444444[14477]:int;
    if (eqz(e[29])) { f_ahje(e) }
    b[0] =
      Mono_Security_X509_X509Crl_X509CrlEntry_ctor(d, f_idrd(a + 14, 0), 0);
    c[0] = c[0] + 1;
    e = a[7]:ushort;
  }
  g_a = a + 16;
  return e & 65535;
}

