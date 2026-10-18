// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class MainMenu : MonoBehaviour
{
	// Fields
	private Button newGameBtn;
	private Button continueGameBtn;
	private Button settingsBtn;
	private Button exitGameBtn;
	private Image SettingPanel;
	private Image controlsPanel;
	private Image audioPanel;
	private Intro intro;
	private SaveFileSetup saveFileSetup;
	private bool isfirstTime;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (MainMenu_Awake) ----
		//   var this:int;
		//   var d:byte_ptr = g_a - 16;
		//   g_a = d;
		//   if (eqz(6703350[0]:ubyte)) {
		//     f_hpa(5612328);
		//     f_hpa(5679924);
		//     f_hpa(5680480);
		//     f_hpa(5680484);
		//     f_hpa(5680488);
		//     f_hpa(5680492);
		//     f_hpa(5685660);
		//     f_hpa(5623544);
		//     f_hpa(5719876);
		//     6703350[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_wukc(Esper_ESave_SaveFileSetup_GenerateAESTokens(this[12]:int, 0),
		//            d_p444444444444044P44p44444444[41261]:int,
		//            0);
		//   var c:int = 
		//     Esper_ESave_SaveFileSetup_GenerateAESTokens(this[12]:int, 0);
		//   var e:int = d_p444444444444044P44p44444444[32707]:int;
		//   var f:int = d_p444444444444044P44p44444444[41261]:int;
		//   if (methodInfo) {
		//     f_yxkc(c, f, 0, e);
		//     Esper_ESave_SaveFile_SetSetupData(
		//       Esper_ESave_SaveFileSetup_GenerateAESTokens(this[12]:int, 0),
		//       0,
		//       0);
		//     this[52]:byte = 0;
		//     if (UnityEngine_PlayerPrefs_GetString_1(
		//           d_p444444444444044P44p44444444[41261]:int,
		//           0)) {
		//       this[52]:byte =
		//         Newtonsoft_Json_Serialization_JsonTypeReflector_GetCachedAttribute(
		//           UnityEngine_PlayerPrefs_GetString(
		//             d_p444444444444044P44p44444444[41261]:int,
		//             0),
		//           d_p444444444444044P44p44444444[31273]:int);
		//       goto B_b;
		//     }
		//     d[15] = this[52]:ubyte;
		//     methodInfo = 
		//       f_dzjb(f_vpa(d_p444444444444044P44p44444444[14374]:int, d + 15), 0);
		//     UnityEngine_PlayerPrefs_GetFloat_1(
		//       d_p444444444444044P44p44444444[41261]:int,
		//       methodInfo,
		//       0);
		//     UnityEngine_PlayerPrefs_DeleteAll(0);
		//     goto B_b;
		//   }
		//   f_yxkc(c, f, 1, e);
		//   Esper_ESave_SaveFile_SetSetupData(
		//     Esper_ESave_SaveFileSetup_GenerateAESTokens(this[12]:int, 0),
		//     0,
		//     0);
		//   this[52]:byte = 1;
		//   if (UnityEngine_PlayerPrefs_GetString_1(
		//         d_p444444444444044P44p44444444[41261]:int,
		//         0)) {
		//     this[52]:byte =
		//       Newtonsoft_Json_Serialization_JsonTypeReflector_GetCachedAttribute(
		//         UnityEngine_PlayerPrefs_GetString(
		//           d_p444444444444044P44p44444444[41261]:int,
		//           0),
		//         d_p444444444444044P44p44444444[31273]:int);
		//     goto B_b;
		//   }
		//   d[14] = this[52]:ubyte;
		//   methodInfo = 
		//     f_dzjb(f_vpa(d_p444444444444044P44p44444444[14374]:int, d + 14), 0);
		//   UnityEngine_PlayerPrefs_GetFloat_1(
		//     d_p444444444444044P44p44444444[41261]:int,
		//     methodInfo,
		//     0);
		//   UnityEngine_PlayerPrefs_DeleteAll(0);
		//   label B_b:
		//   methodInfo = (this[4]:int)[45]:int;
		//   c = f_icke(d_p444444444444044P44p44444444[17178]:int);
		//   UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[31414]:int,
		//     0);
		//   UnityEngine_Events_UnityEvent_ctor(methodInfo, c, 0);
		//   methodInfo = (this[5]:int)[45]:int;
		//   c = f_icke(d_p444444444444044P44p44444444[17178]:int);
		//   UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[31412]:int,
		//     0);
		//   UnityEngine_Events_UnityEvent_ctor(methodInfo, c, 0);
		//   methodInfo = (this[6]:int)[45]:int;
		//   c = f_icke(d_p444444444444044P44p44444444[17178]:int);
		//   UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[31415]:int,
		//     0);
		//   UnityEngine_Events_UnityEvent_ctor(methodInfo, c, 0);
		//   methodInfo = (this[7]:int)[45]:int;
		//   c = f_icke(d_p444444444444044P44p44444444[17178]:int);
		//   UnityEngine_Events_UnityEventBase_GetValidMethodInfo(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[31413]:int,
		//     0);
		//   UnityEngine_Events_UnityEvent_ctor(methodInfo, c, 0);
		//   g_a = d + 16;
	}

	private void Start()
	{
		// ---- decompiled from wasm (MainMenu_Start) ----
		//   var this:int_ptr;
		//   if (eqz(6703351[0]:ubyte)) {
		//     f_hpa(5660012);
		//     6703351[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   if (eqz(methodInfo[189]:ubyte & 1)) {
		//     methodInfo = System_Threading_Monitor_Enter_1(methodInfo)
		//   }
		//   SoundEffectManager_Start(
		//     (methodInfo[23]:int)[0]:int,
		//     UnityEngine_MonoBehaviour_InvokeRepeating(0)[24]:int,
		//     methodInfo);
		//   f_sbnb(f_canb(this[11], 0), 1, 0);
	}

	private void OnNewGameClick()
	{
		// ---- decompiled from wasm (MainMenu_OnNewGameClick) ----
		//   var this:int;
		//   if (eqz(6703352[0]:ubyte)) {
		//     f_hpa(5680476);
		//     f_hpa(5620984);
		//     f_hpa(5660012);
		//     f_hpa(5609548);
		//     f_hpa(5725104);
		//     6703352[0]:byte = 1;
		//   }
		//   if (eqz(this[52]:ubyte)) {
		//     var methodInfo:int_ptr = d_p444444444444044P44p44444444[16538]:int;
		//     if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
		//     UnityEngine_SceneManagement_SceneManager_LoadScene_1(
		//       d_p444444444444044P44p44444444[42568]:int,
		//       0);
		//     methodInfo = f_icke(d_p444444444444044P44p44444444[13679]:int);
		//     f_yibd(methodInfo, this, d_p444444444444044P44p44444444[31411]:int, 0);
		//     UnityEngine_SceneManagement_SceneManager_LoadFirstScene_Internal(
		//       methodInfo,
		//       0);
		//     this = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//     this = 
		//       ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
		//     if (eqz(this[189]:ubyte & 1)) { this = System_Threading_Monitor_Enter_1(this) }
		//     SoundEffectManager_Start(
		//       (this[23]:int)[0]:int,
		//       UnityEngine_MonoBehaviour_InvokeRepeating(0)[24]:int,
		//       this);
		//   }
	}

	private void OnContinueGameClick()
	{
		// ---- decompiled from wasm (MainMenu_OnContinueGameClick) ----
		//   c = g_a - 16;
		//   g_a = c;
		//   c[2] = b;
		//   if (eqz(6703353[0]:ubyte)) {
		//     f_hpa(5680476);
		//     f_hpa(5620984);
		//     f_hpa(5660024);
		//     f_hpa(5609548);
		//     f_hpa(5725104);
		//     6703353[0]:byte = 1;
		//   }
		//   if (
		//     eqz(multiple_System_String_Equals(
		//           UnityEngine_SceneManagement_Scene_IsValid(c + 8, 0),
		//           d_p444444444444044P44p44444444[42568]:int,
		//           0))) goto B_b;
		//   if (
		//     eqz(UnityEngine_SceneManagement_Scene_get_name(c + 8, 0))) goto B_b;
		//   b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   b = 
		//     ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//   GameManager_Awake(
		//     ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int,
		//     0);
		//   b = f_icke(d_p444444444444044P44p44444444[13679]:int);
		//   f_yibd(b, a, d_p444444444444044P44p44444444[31411]:int, 0);
		//   a = d_p444444444444044P44p44444444[16538]:int;
		//   if (eqz(a[29])) { f_ahje(a) }
		//   UnityEngine_SceneManagement_SceneManager_add_sceneLoaded(b, 0);
		//   label B_b:
		//   g_a = c + 16;
	}

	private void LoadContineGameScene(Scene scene, LoadSceneMode mode)
	{
		// ---- decompiled from wasm (MainMenu_LoadContineGameScene) ----
		//   if (eqz(6703354[0]:ubyte)) {
		//     f_hpa(5660012);
		//     6703354[0]:byte = 1;
		//   }
		//   f_sbnb(f_canb(a[8]:int, 0), 1, 0);
		//   f_sbnb(f_canb(a[9]:int, 0), 0, 0);
		//   f_sbnb(f_canb(a[10]:int, 0), 0, 0);
		//   a = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   a = 
		//     ((if (a[189]:ubyte & 1) { a } else { System_Threading_Monitor_Enter_1(a) })[24]:int)[2]:int;
		//   if (eqz(a[189]:ubyte & 1)) { a = System_Threading_Monitor_Enter_1(a) }
		//   SoundEffectManager_Start(
		//     (a[23]:int)[0]:int,
		//     UnityEngine_MonoBehaviour_InvokeRepeating(0)[24]:int,
		//     a);
	}

	private void OnSettingsClick()
	{
		// ---- decompiled from wasm (MainMenu_OnSettingsClick) ----
		//   if (eqz(6703355[0]:ubyte)) {
		//     f_hpa(5611664);
		//     f_hpa(5660012);
		//     6703355[0]:byte = 1;
		//   }
		//   var this:int = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   this = 
		//     ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
		//   if (eqz(this[189]:ubyte & 1)) { this = System_Threading_Monitor_Enter_1(this) }
		//   SoundEffectManager_Start(
		//     (this[23]:int)[0]:int,
		//     UnityEngine_MonoBehaviour_InvokeRepeating(0)[24]:int,
		//     this);
		//   this = d_p444444444444044P44p44444444[14208]:int;
		//   if (eqz(this[29]:int)) { f_ahje(this) }
		//   UnityEngine_Application_Quit(0);
	}

	private void OnExitGameClick()
	{
		// ---- decompiled from wasm (MainMenu_OnExitGameClick) ----
		//   var this:byte_ptr;
		//   this[52] = 1;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (MainMenu_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703356[0]:ubyte)) {
		//     f_hpa(5668728);
		//     6703356[0]:byte = 1;
		//   }
		//   this[7] = f_irrc(this[4], d_p444444444444044P44p44444444[28474]:int);
		//   this[8] = f_irrc(this[5], d_p444444444444044P44p44444444[28474]:int);
	}

}
