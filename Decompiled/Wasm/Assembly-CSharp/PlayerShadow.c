// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: PlayerShadow  (Assembly-CSharp)

function PlayerShadow_DisablePlayerShadow(a:int, b:int_ptr, c:int) { // func87041
  var d:int;
  if (eqz(6703849[0]:ubyte)) {
    f_hpa(5668840);
    6703849[0]:byte = 1;
  }
  var e:int_ptr = f_rrrc(a, d_p444444444444044P44p44444444[28502]:int);
  a = e[3];
  if (a <= 0) goto B_b;
  c = b[3];
  if (c <= 0) goto B_b;
  loop L_c {
    if (c > 0) {
      var f:int = e[d + 4]:int;
      a = 0;
      loop L_e {
        c = b[a + 4]:int;
        if (multiple_System_String_Equals(
              UnityEngine_TextCore_Text_FontAsset_LoadFontFace(f, 0),
              UnityEngine_TextCore_Text_FontAsset_LoadFontFace(c, 0),
              0)) {
          UnityEngine_SpriteRenderer_InvokeSpriteChanged(
            f,
            UnityEngine_U2D_Animation_SpriteSkin_GetSpriteBonesTransforms(c, 0),
            0)
        }
        a = a + 1;
        if (a < (c = b[3])) continue L_e;
      }
      a = e[3];
    }
    d = d + 1;
    if (d < a) continue L_c;
  }
  label B_b:
}

function PlayerShadow_InitialisePlayerShadow(a:int, b:int) { // func87050
  f_sbnb(f_canb(a, 0), 1, 0)
}

function PlayerShadow_ctor(a:int, b:int) { // func87051
  var this:int_ptr;
  var methodInfo:int;
  var c:int_ptr = g_a - 16;
  g_a = c;
  if (eqz(6703850[0]:ubyte)) {
    f_hpa(5620984);
    f_hpa(5660012);
    f_hpa(5725100);
    6703850[0]:byte = 1;
  }
  c[2] = 0;
  f_sbnb(f_canb(this, 0), 0, 0);
  this[4] =
    (methodInfo = multiple_UnityEngine_PropertyName_ToString(0, 3, 0));
  if (methodInfo) {
    methodInfo = d_p444444444444044P44p44444444[16538]:int;
    if (eqz(methodInfo[29]:int)) { f_ahje(methodInfo) }
    c[2] = UnityEngine_SceneManagement_SceneManager_GetSceneByName(0, 0);
    if (
      eqz(multiple_System_String_Equals(
            UnityEngine_SceneManagement_Scene_IsValid(c + 8, 0),
            d_p444444444444044P44p44444444[42567]:int,
            0))) goto B_b;
  }
  f_sbnb(f_canb(this, 0), 1, 0);
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
    this[5],
    1,
    0);
  label B_b:
  g_a = c + 16;
}

