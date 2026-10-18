// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: GameManager  (Assembly-CSharp)

function GameManager_TransitionToGame(a:int_ptr, b:int, c:ubyte_ptr) { // func86951
  if (eqz(6703899[0]:ubyte)) {
    f_hpa(5659992);
    6703899[0]:byte = 1;
  }
  a[7] = b;
  br_table[B_g, B_b, B_f, B_e, B_d, B_c, ..B_b](b)
  label B_g:
  if (eqz(6703900[0]:ubyte)) {
    f_hpa(5750280);
    6703900[0]:byte = 1;
  }
  UnityEngine_PlayerPrefs_TrySetSetString(
    d_p444444444444044P44p44444444[48862]:int,
    0,
    0);
  GameManager_Instruct(a, a);
  goto B_b;
  label B_f:
  f_sbnb(a[13], 1, 0);
  f_sbnb(a[14], 1, 0);
  f_sbnb(a[15], 1, 0);
  goto B_b;
  label B_e:
  if (eqz(6703903[0]:ubyte)) {
    f_hpa(5668632);
    6703903[0]:byte = 1;
  }
  UnityEngine_Rigidbody2D_get_mass(
    UnityEngine_GameObject_get_activeInHierarchy(
      a[4],
      d_p444444444444044P44p44444444[28450]:int),
    0.5f,
    0);
  goto B_b;
  label B_d:
  if (eqz(6703904[0]:ubyte)) {
    f_hpa(5668632);
    6703904[0]:byte = 1;
  }
  UnityEngine_Rigidbody2D_get_mass(
    UnityEngine_GameObject_get_activeInHierarchy(
      a[4],
      d_p444444444444044P44p44444444[28450]:int),
    1000000.0f,
    0);
  c = (d_p444444444444044P44p44444444[26290]:int)[4]:int;
  c = 
    ((if (c[189] & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
  MusicManager_PlayBackgroundMusic(
    ((if (c[189] & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int,
    0);
  c = (d_p444444444444044P44p44444444[26290]:int)[4]:int;
  c = 
    ((if (c[189] & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
  MusicManager_StopPlayingBackgroundMusic(
    ((if (c[189] & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int,
    UnityEngine_MonoBehaviour_InvokeRepeating(a)[20]:int,
    0.5f,
    0.5f,
    0);
  goto B_b;
  label B_c:
  if (eqz(6703900[0]:ubyte)) {
    f_hpa(5750280);
    6703900[0]:byte = 1;
  }
  UnityEngine_PlayerPrefs_TrySetSetString(
    d_p444444444444044P44p44444444[48862]:int,
    1,
    0);
  GameManager_SaveBossState(a, a);
  label B_b:
  a = a[8];
  if (a) { call_indirect(a[8], b, a[5], a[3]) }
}

function GameManager_Instruct(a:int, b:int) { // func86952
  var this:int_ptr;
  var methodInfo:{ a:long, b:long, c:long } = g_a - 32;
  g_a = methodInfo;
  if (eqz(6703902[0]:ubyte)) {
    f_hpa(5675388);
    f_hpa(5623156);
    f_hpa(5690168);
    f_hpa(5741568);
    6703902[0]:byte = 1;
  }
  f_sbnb(this[13], 0, 0);
  f_sbnb(this[14], 0, 0);
  f_sbnb(this[15], 0, 0);
  UnityEngine_Material_SetInt(
    UnityEngine_MonoBehaviour_InvokeRepeating(this)[11]:int,
    d_p444444444444044P44p44444444[46684]:int,
    0.0f,
    0);
  f_sbnb(f_canb(this[9], 0), 1, 0);
  var c:int = this[9];
  var d:long_ptr = methodInfo + 24;
  d[0] = 4575657221408423936L;
  methodInfo.b = d[0];
  methodInfo.c = 0L;
  methodInfo.a = 0L;
  c = DG_Tweening_DOTweenModuleUI_DOFade_1(c, methodInfo, 3.0f, 0);
  d = f_icke(d_p444444444444044P44p44444444[17081]:int);
  DG_Tweening_Color2_op_Multiply(
    d,
    this,
    d_p444444444444044P44p44444444[30139]:int,
    0);
  DG_Tweening_TweenSettingsExtensions_From_6(
    c,
    d,
    d_p444444444444044P44p44444444[33834]:int);
  g_a = methodInfo + 32;
}

function GameManager_SaveBossState(a:int_ptr, b:{ a:long, b:long, c:long, d:long }) { // func86953
  b = g_a - 32;
  g_a = b;
  if (eqz(6703901[0]:ubyte)) {
    f_hpa(5675400);
    f_hpa(5620984);
    f_hpa(5623156);
    f_hpa(5690168);
    f_hpa(5726944);
    6703901[0]:byte = 1;
  }
  var c:int_ptr = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(c[29])) { f_ahje(c) }
  UnityEngine_SceneManagement_SceneManager_LoadScene_4(
    d_p444444444444044P44p44444444[43028]:int,
    0);
  f_sbnb(f_canb(a[10], 0), 1, 0);
  c = a[10];
  b.d = 0L;
  b.c = 0L;
  var d:int_ptr = c[0];
  var e:int = d[95];
  d = d[94];
  b.b = 0L;
  b.a = 0L;
  call_indirect(c, b, e, d);
  c = DG_Tweening_DOTweenModuleUI_DOColor_1(a[10], 1.0f, 1.0f, 0);
  d = f_icke(d_p444444444444044P44p44444444[17081]:int);
  DG_Tweening_Color2_op_Multiply(
    d,
    a,
    d_p444444444444044P44p44444444[30142]:int,
    0);
  DG_Tweening_TweenSettingsExtensions_From_6(
    c,
    d,
    d_p444444444444044P44p44444444[33834]:int);
  g_a = b + 32;
}

function GameManager_OnEnable(a:int, b:int) { // func87119
  var this:int;
  if (eqz(6703896[0]:ubyte)) {
    f_hpa(5601860);
    f_hpa(5611444);
    f_hpa(5675412);
    f_hpa(5675416);
    6703896[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[11757]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[30145]:int,
    0);
  StaticEventHandler_add_OnPlayerChanged(methodInfo, 0);
  methodInfo = f_icke(d_p444444444444044P44p44444444[14153]:int);
  f_uhrd(methodInfo, this, d_p444444444444044P44p44444444[30146]:int, 0);
  StaticEventHandler_add_OnRestInBonfire(methodInfo, 0);
}

function GameManager_OnDisable(a:int_ptr, b:int_ptr, c:int) { // func87120
  a[4] = b[2]
}

function GameManager_Start(a:int, b:int) { // func87122
  var this:int_ptr;
  var d:int;
  if (eqz(6703905[0]:ubyte)) {
    f_hpa(5614756);
    f_hpa(5652760);
    f_hpa(5685664);
    6703905[0]:byte = 1;
  }
  var c:int_ptr = this[5];
  if (c[3] > 0) {
    loop L_c {
      var e:int_ptr = c[d + 4]:int;
      var f:int = e[4];
      var g:int = (e[5])[3]:int;
      var methodInfo:int_ptr = 
        f_icke(d_p444444444444044P44p44444444[14981]:int);
      if (eqz(6703870[0]:ubyte)) {
        f_hpa(5647176);
        f_hpa(5606908);
        6703870[0]:byte = 1;
      }
      var h:int = f_icke(d_p444444444444044P44p44444444[13019]:int);
      multiple_System_Collections_Generic_List_1_cctor(
        h,
        d_p444444444444044P44p44444444[23086]:int);
      methodInfo[4] = h;
      methodInfo[3] = g;
      methodInfo[2] = f;
      EnemyManagerData_ctor(methodInfo, -1, methodInfo);
      Esper_ESave_SaveFile_AddOrUpdateData_5(
        Esper_ESave_SaveFileSetup_GenerateAESTokens(this[6], 0),
        e[6],
        methodInfo,
        d_p444444444444044P44p44444444[32708]:int);
      Esper_ESave_SaveFile_SetSetupData(
        Esper_ESave_SaveFileSetup_GenerateAESTokens(this[6], 0),
        0,
        0);
      d = d + 1;
      if (d < c[3]) continue L_c;
    }
  }
}

function GameManager_StaticEventHandler_OnRestInBonfire(a:int, b:int) { // func87123
  var this:int_ptr;
  if (eqz(6703897[0]:ubyte)) {
    f_hpa(5668636);
    f_hpa(5660020);
    6703897[0]:byte = 1;
  }
  SingletonMonobehaviour_1_ctor(
    this,
    d_p444444444444044P44p44444444[26297]:int);
  this[6] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28451]:int);
}

function GameManager_Awake(a:int, b:int) { // func87124
  var this:int_ptr;
  var d:int_ptr;
  var f:long;
  var c:int_ptr;
  var methodInfo:int = g_a - 96;
  g_a = methodInfo;
  if (eqz(6703898[0]:ubyte)) {
    f_hpa(5675396);
    f_hpa(5685704);
    f_hpa(5620984);
    f_hpa(5623156);
    f_hpa(5690168);
    f_hpa(5690228);
    f_hpa(5741568);
    f_hpa(5733492);
    f_hpa(5715064);
    f_hpa(5714812);
    6703898[0]:byte = 1;
  }
  if (
    eqz(f_wukc(Esper_ESave_SaveFileSetup_GenerateAESTokens(this[6], 0),
               d_p444444444444044P44p44444444[39995]:int,
               0))) goto B_b;
  c = Esper_ESave_SaveFile_HasData(
        Esper_ESave_SaveFileSetup_GenerateAESTokens(this[6], 0),
        d_p444444444444044P44p44444444[39995]:int,
        0,
        d_p444444444444044P44p44444444[32718]:int);
  if (multiple_System_String_Equals(
        c,
        d_p444444444444044P44p44444444[40058]:int,
        0)) {
    c = System_Linq_Enumerable_Count(this[4], 0);
    f = ((this[4])[22]:int)[2]:long;
    d = methodInfo + 72;
    d[0] = 0;
    methodInfo[6]:int = d[0];
    methodInfo[8]:long = f;
    methodInfo[2]:long = f;
    multiple_UnityEngine_Transform_ctor(c, methodInfo + 16, 0);
    c = 5715064;
    d = d_p444444444444044P44p44444444[16538]:int;
    if (eqz(d[29])) goto B_d;
    goto B_c;
  }
  if (eqz(multiple_System_String_Equals(
            c,
            d_p444444444444044P44p44444444[44665]:int,
            0))) goto B_b;
  c = System_Linq_Enumerable_Count(this[4], 0);
  f = ((this[4])[22]:int)[3]:long;
  d = methodInfo + 56;
  d[0] = 0;
  methodInfo[10]:int = d[0];
  methodInfo[6]:long = f;
  methodInfo[4]:long = f;
  multiple_UnityEngine_Transform_ctor(c, methodInfo + 32, 0);
  c = 5733492;
  d = d_p444444444444044P44p44444444[16538]:int;
  if (d[29]) goto B_c;
  label B_d:
  f_ahje(d);
  label B_c:
  UnityEngine_SceneManagement_SceneManager_remove_sceneUnloaded(c[0], 1, 0);
  label B_b:
  UnityEngine_Material_SetInt(
    UnityEngine_MonoBehaviour_InvokeRepeating(methodInfo)[11]:int,
    d_p444444444444044P44p44444444[46684]:int,
    0.0f,
    0);
  c = this[9];
  methodInfo[11]:long = 4575657221408423936L;
  methodInfo[10]:long = 0L;
  d = c[0];
  var e:int = d[94];
  d = d[95];
  methodInfo[1]:long = 4575657221408423936L;
  methodInfo[0]:long = 0L;
  call_indirect(c, methodInfo, d, e);
  f_sbnb(f_canb(this[9], 0), 1, 0);
  c = DG_Tweening_TweenSettingsExtensions_SetEase(
        DG_Tweening_DOTweenModuleUI_DOColor_1(this[9], 0.0f, 1.5f, 0),
        4,
        d_p444444444444044P44p44444444[33849]:int);
  d = f_icke(d_p444444444444044P44p44444444[17081]:int);
  DG_Tweening_Color2_op_Multiply(
    d,
    this,
    d_p444444444444044P44p44444444[30141]:int,
    0);
  DG_Tweening_TweenSettingsExtensions_From_6(
    c,
    d,
    d_p444444444444044P44p44444444[33834]:int);
  g_a = methodInfo + 96;
}

function GameManager_HandleGameState(a:int, b:int, c:int) { // func87125
  var gameState:int;
  if (eqz(6703900[0]:ubyte)) {
    f_hpa(5750280);
    6703900[0]:byte = 1;
  }
  UnityEngine_PlayerPrefs_TrySetSetString(
    d_p444444444444044P44p44444444[48862]:int,
    gameState,
    0);
}

function GameManager_WonScene(a:int, b:int) { // func87126
  var this:int_ptr;
  f_sbnb(this[13], 1, 0);
  f_sbnb(this[14], 1, 0);
  f_sbnb(this[15], 1, 0);
}

function GameManager_Intro(a:int, b:int) { // func87127
  var this:int_ptr;
  if (eqz(6703903[0]:ubyte)) {
    f_hpa(5668632);
    6703903[0]:byte = 1;
  }
  UnityEngine_Rigidbody2D_get_mass(
    UnityEngine_GameObject_get_activeInHierarchy(
      this[4],
      d_p444444444444044P44p44444444[28450]:int),
    0.5f,
    0);
}

function GameManager_Play(a:int, b:int) { // func87128
  var this:int_ptr;
  if (eqz(6703904[0]:ubyte)) {
    f_hpa(5668632);
    6703904[0]:byte = 1;
  }
  UnityEngine_Rigidbody2D_get_mass(
    UnityEngine_GameObject_get_activeInHierarchy(
      this[4],
      d_p444444444444044P44p44444444[28450]:int),
    1000000.0f,
    0);
}

function GameManager_InitializeEnemyManagerData(a:int, b:int) { // func87129
  var this:int;
  if (eqz(6703906[0]:ubyte)) {
    f_hpa(5660016);
    6703906[0]:byte = 1;
  }
  multiple_127_System_Collections_Generic_ShortEnumEqualityComparer_1_GetHashCode(
    this,
    d_p444444444444044P44p44444444[26296]:int);
}

function GameManager_ctor(a:int, b:int) { // func87130
  var this:int_ptr;
  f_sbnb(f_canb(this[9], 0), 0, 0);
  if (eqz(6703899[0]:ubyte)) {
    f_hpa(5659992);
    6703899[0]:byte = 1;
  }
  this[7] = 3;
  if (eqz(6703903[0]:ubyte)) {
    f_hpa(5668632);
    6703903[0]:byte = 1;
  }
  UnityEngine_Rigidbody2D_get_mass(
    UnityEngine_GameObject_get_activeInHierarchy(
      this[4],
      d_p444444444444044P44p44444444[28450]:int),
    0.5f,
    0);
  this = this[8];
  if (this) { call_indirect(this[8], 3, this[5], this[3]) }
}

function GameManager_TransitionToGame_b_17_0(a:int, b:int) { // func87131
  var this:int_ptr;
  if (eqz(6703907[0]:ubyte)) {
    f_hpa(5668660);
    f_hpa(5675404);
    f_hpa(5609520);
    f_hpa(5662736);
    6703907[0]:byte = 1;
  }
  f_sbnb(f_canb(this[12], 0), 1, 0);
  var methodInfo:int_ptr = 
    UnityEngine_GameObject_get_activeInHierarchy(
      this[12],
      d_p444444444444044P44p44444444[28457]:int) +
    52;
  UnityEngine_Events_UnityEventBase_RemoveListener(methodInfo[0], 0);
  methodInfo = methodInfo[0];
  var c:int = f_icke(d_p444444444444044P44p44444444[13672]:int);
  f_oibd(c, this, d_p444444444444044P44p44444444[30143]:int, 0);
  UnityEngine_Events_UnityEvent_1_ctor(
    methodInfo,
    c,
    d_p444444444444044P44p44444444[26976]:int);
}

function GameManager_WonScene_b_20_0(a:int_ptr, b:int, c:int) { // func87132
  if (eqz(6703908[0]:ubyte)) {
    f_hpa(5675408);
    f_hpa(5623156);
    f_hpa(5690168);
    6703908[0]:byte = 1;
  }
  b = DG_Tweening_DOTweenModuleUI_DOColor(a[12], 0.0f, 3.0f, 0);
  c = f_icke(d_p444444444444044P44p44444444[17081]:int);
  DG_Tweening_Color2_op_Multiply(
    c,
    a,
    d_p444444444444044P44p44444444[30144]:int,
    0);
  DG_Tweening_TweenSettingsExtensions_From_6(
    b,
    c,
    d_p444444444444044P44p44444444[33834]:int);
}

function GameManager_WonScene_b_20_1(a:int_ptr, b:int) { // func87133
  if (eqz(6703909[0]:ubyte)) {
    f_hpa(5623156);
    f_hpa(5690180);
    f_hpa(5698152);
    f_hpa(5627748);
    6703909[0]:byte = 1;
  }
  f_sbnb(f_canb(a[12], 0), 0, 0);
  f_sbnb(f_canb(a[11], 0), 1, 0);
  var c:int = DG_Tweening_ShortcutExtensions_DOScale(
                System_Linq_Enumerable_Count(a[11], 0),
                0.0f,
                3.0f,
                0);
  a = d_p444444444444044P44p44444444[18229]:int;
  if (eqz(a[29])) {
    f_ahje(a);
    a = d_p444444444444044P44p44444444[18229]:int;
  }
  b = (a[23])[1]:int;
  if (eqz(b)) {
    a = ((if (a[29]) {
            a
          } else {
            f_ahje(a);
            d_p444444444444044P44p44444444[18229]:int;
          })[23]:int)[0]:int;
    b = f_icke(d_p444444444444044P44p44444444[17081]:int);
    DG_Tweening_Color2_op_Multiply(
      b,
      a,
      d_p444444444444044P44p44444444[35830]:int,
      0);
    ((d_p444444444444044P44p44444444[18229]:int)[23]:int)[1]:int = b;
  }
  DG_Tweening_TweenSettingsExtensions_From_6(
    c,
    b,
    d_p444444444444044P44p44444444[33837]:int);
}

function GameManager_WonScene_b_20(a:int, b:int) { // func87134
  var this:int_ptr;
  if (eqz(6703910[0]:ubyte)) {
    f_hpa(5675392);
    f_hpa(5685680);
    f_hpa(5620984);
    f_hpa(5623156);
    f_hpa(5690172);
    f_hpa(5741568);
    f_hpa(5715064);
    f_hpa(5714812);
    6703910[0]:byte = 1;
  }
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
  UnityEngine_SceneManagement_SceneManager_remove_sceneUnloaded(
    d_p444444444444044P44p44444444[40058]:int,
    1,
    0);
  Esper_ESave_SaveFile_AddOrUpdateData_5(
    Esper_ESave_SaveFileSetup_GenerateAESTokens(this[6], 0),
    d_p444444444444044P44p44444444[39995]:int,
    d_p444444444444044P44p44444444[40058]:int,
    d_p444444444444044P44p44444444[32712]:int);
  Esper_ESave_SaveFile_SetSetupData(
    Esper_ESave_SaveFileSetup_GenerateAESTokens(this[6], 0),
    0,
    0);
  methodInfo = f_dzjb(d_p444444444444044P44p44444444[40058]:int, 0);
  UnityEngine_PlayerPrefs_GetFloat_1(
    d_p444444444444044P44p44444444[39995]:int,
    methodInfo,
    0);
  UnityEngine_PlayerPrefs_DeleteAll(0);
  methodInfo = 
    DG_Tweening_ShortcutExtensions_DOFade_2(
      UnityEngine_MonoBehaviour_InvokeRepeating(this)[11]:int,
      1.0f,
      d_p444444444444044P44p44444444[46684]:int,
      2.0f,
      0);
  var c:int = f_icke(d_p444444444444044P44p44444444[17081]:int);
  DG_Tweening_Color2_op_Multiply(
    c,
    this,
    d_p444444444444044P44p44444444[30140]:int,
    0);
  DG_Tweening_TweenSettingsExtensions_From_6(
    methodInfo,
    c,
    d_p444444444444044P44p44444444[33835]:int);
}

function GameManager_Intro_b_22_0(a:int, b:int) { // func87135
  var this:int_ptr;
  f_sbnb(f_canb(this[9], 0), 0, 0);
  if (eqz(6703899[0]:ubyte)) {
    f_hpa(5659992);
    6703899[0]:byte = 1;
  }
  this[7] = 1;
  this = this[8];
  if (this) { call_indirect(this[8], 1, this[5], this[3]) }
}

function GameManager_Intro_b_22_1(a:int) { // func87136
  if (eqz(6703911[0]:ubyte)) {
    f_hpa(5627748);
    6703911[0]:byte = 1;
  }
  a = f_icke(d_p444444444444044P44p44444444[18229]:int);
  ((d_p444444444444044P44p44444444[18229]:int)[23]:int)[0]:int = a;
}

function GameManager_c_ctor(a:int, b:int) { // func87137
  if (eqz(6703912[0]:ubyte)) {
    f_hpa(5620984);
    f_hpa(5659992);
    f_hpa(5725100);
    6703912[0]:byte = 1;
  }
  var this:int = (d_p444444444444044P44p44444444[26290]:int)[4]:int;
  this = 
    ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
  MusicManager_Start(
    ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[23]:int)[0]:int,
    0);
  this = d_p444444444444044P44p44444444[16538]:int;
  if (eqz(this[29]:int)) { f_ahje(this) }
  UnityEngine_SceneManagement_SceneManager_LoadScene_1(
    d_p444444444444044P44p44444444[42567]:int,
    0);
}

